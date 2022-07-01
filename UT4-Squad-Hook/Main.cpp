/*
Squad UE4 Hook by Jurugi/Leg[], Creative Commons License (you may reuse but give proper credit when requested)

// gObjects
// "\x4C\x8D\x05\x00\x00\x00\x00\xEB\x16\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00"

// gNames
// "\x48\x8D\x1D\x00\x00\x00\x00\x8B\x05\x00\x00\x00\x00\x39\x45\x88\x7C\x20\x48\x8D\x45\x88\x48\x89\x85\x90\x05\x00\x00"
*/

// Includes
#include "Main.h"
#include "Logging.h"
#include "Signatures.h"
#include "Misc.h"
#include "SDK.hpp"
#include <chrono>

// Globals
HMODULE g_hInst = 0;
unsigned long long dwGObjects = 0;
unsigned long long dwGNames = 0;
unsigned long long dwpGWorld = 0;
unsigned long long dwpbGIsGameThreadIdInitialized = 0;
FNamePool* NamePoolData;
TUObjectArray* ObjObjects;
gUnrealInfo gUE;
#define ScreenWidth 1920.0f
#define ScreenHeight 1020.0f

// Custom
#define UCONST_Pi 3.1415926f
#define URotation180 32768
#define URotation90 16384

FVector2D W2S(UKismetMathLibrary* pMath, FVector Location, FRotator myRot, FVector myLoc, float FOV, float Width=ScreenWidth, float Height=ScreenHeight)
{
	FVector2D Return;
	FVector AxisX, AxisY, AxisZ, Delta, Transformed;

	pMath->BreakRotIntoAxes(myRot, AxisX, AxisY, AxisZ); // slow to call these functions, actually takes a few hundred milliseconds
	Delta = VectorSubtract(Location, myLoc);
	Transformed.X = pMath->Dot_VectorVector(Delta, AxisY);
	Transformed.Y = pMath->Dot_VectorVector(Delta, AxisZ);
	Transformed.Z = pMath->Dot_VectorVector(Delta, AxisX);

	if (Transformed.Z < 1.00f) Transformed.Z = 1.00f;

	float CentX = (Width / 2.f);
	float CentY = (Height / 2.f);
	Return.X = CentX + Transformed.X * (CentX / (float)tan(FOV * UCONST_Pi / 360)) / Transformed.Z;
	Return.Y = CentY - Transformed.Y * (CentX / (float)tan(FOV * UCONST_Pi / 360)) / Transformed.Z;

	return Return;
}

/* //not needed because we can directl call kismet math functions anywhere, but will not be able to call that in the kernel mode/hyper-v modes, thus I copied an implementation for that here: */
#define UCONST_Pi 3.1415926f
#define INV_PI 1.0f/UCONST_Pi
#define HALF_PI UCONST_Pi*0.5f
#define TWO_PI UCONST_Pi*2.0f
#define URotation180 32768
#define URotation90 16384
#define URotationToRadians (UCONST_Pi / URotation180)

// SinCos reversed from UE4.23 with few minor changes
void sincos(float Value, float* sin=0, float* cos=0)
{
	// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
	float quotient = (INV_PI * 0.5f) * Value;
	if (Value >= 0.0f)
	{
		quotient = (float)((__int64)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((__int64)(quotient - 0.5f));
	}
	float y = Value - TWO_PI * quotient;

	// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
	float sign;
	if (y > HALF_PI)
	{
		y = UCONST_Pi - y;
		sign = -1.0f;
	}
	else if (y < -HALF_PI)
	{
		y = -UCONST_Pi - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}

	float y2 = y * y;

	// 11-degree minimax approximation
	if(sin) *sin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

	// 10-degree minimax approximation
	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	if(cos) *cos = sign * p;
}

float tan2(float Value)
{
	float Cos, Sin;
	sincos(Value, &Cos, &Sin);
	return (Sin / Cos);
}

// from https://www.codeproject.com/Articles/69941/Best-Square-Root-Method-Algorithm-Function-Precisi, chose sqrt3 function for best speed while still usable
float sqrt2(float x)
{
	union
	{
		int i;
		float x;
	} u;

	u.x = x;
	u.i = (1 << 29) + (u.i >> 1) - (1 << 22);
	return u.x;
}

FVector RotationToVector(FRotator R)
{
	FVector Vec;
	float fYaw = R.Yaw * URotationToRadians;
	float fPitch = R.Pitch * URotationToRadians;
	float CosPitch = cos(fPitch);
	Vec.X = cos(fYaw) * CosPitch;
	Vec.Y = sin(fYaw) * CosPitch;
	Vec.Z = sin(fPitch);
	return Vec;
}

float Size(FVector& v)
{
	return sqrt(v.X * v.X + v.Y * v.Y + v.Z * v.Z);
}

void Normalize(FVector& v)
{
	float size = Size(v);
	if (!size)
	{
		v.X = v.Y = v.Z = 1;
	}
	else
	{
		v.X /= size;
		v.Y /= size;
		v.Z /= size;
	}
}

// broken or did not work properly
void GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z)
{
	X = RotationToVector(R);
	Normalize(X);
	R.Yaw += URotation90;
	FRotator R2 = R;
	R2.Pitch = 0.f;
	Y = RotationToVector(R2);
	Normalize(Y);
	Y.Z = 0.f;
	R.Yaw -= URotation90;
	R.Pitch += URotation90;
	Z = RotationToVector(R);
	Normalize(Z);
}

float inline Dot(const FVector& V1, const FVector& V2)
{
	return (V1.X * V2.X + V1.Y * V2.Y + V1.Z * V2.Z);
}

float ReversedDegreesToRadians(float DegVal)
{
	return DegVal * (UCONST_Pi / 180.f);
}

/* Speed Results 
1.0) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 800 ns)
1.1) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 300 ns)
Calling Function Engine.KismetMathLibrary.BreakRotIntoAxes 0x00000245E55599A0
2) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 25675000 ns)
*/

// Reversed BreakRotIntoAxes, Method=true is 800ns due to not having the compiler intrinsic optimizations, Method=false is 300ns which is even faster by about 2.5x
void UKismetReversedBreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z, bool Method)
{
	float SP, SY, SR, CP, CY, CR;
	static float DEG_TO_RAD = UCONST_Pi / 180.0f;
	if (!DEG_TO_RAD) DEG_TO_RAD = UCONST_Pi / 180.0f;
	if (Method)
	{
	// Get InRot into an FRotationMatrix 
	FVector4 Angles = { InRot.Pitch, InRot.Yaw, InRot.Roll, 0.0f };
	FVector4 GlobalVectorConstant_DEG_TO_RAD = { DEG_TO_RAD, DEG_TO_RAD, DEG_TO_RAD, DEG_TO_RAD };
	FVector4 HalfAngles = VectorMultiply(Angles, GlobalVectorConstant_DEG_TO_RAD);
	FVector4 SinAngles, CosAngles;

	// VectorSinCos: Computes the sineand cosine of each component of a Vector., we can also use the other way which is left here as reference
	/*
		float SP, SY, SR, CP, CY, CR;
		SinCos(&SP, &CP, DegreesToRadians(Rot.Pitch));
		SinCos(&SY, &CY, DegreesToRadians(Rot.Yaw));
		SinCos(&SR, &CR, DegreesToRadians(Rot.Roll));
	*/
	
		SinAngles.X = sin(HalfAngles.X);
		SinAngles.Y = sin(HalfAngles.Y);
		SinAngles.Z = sin(HalfAngles.Z);
		CosAngles.X = cos(HalfAngles.X);
		CosAngles.Y = cos(HalfAngles.Y);
		CosAngles.Z = cos(HalfAngles.Z);

		// Create Matrix Floats
		SP = SinAngles.X;
		SY = SinAngles.Y;
		SR = SinAngles.Z;
		CP = CosAngles.X;
		CY = CosAngles.Y;
		CR = CosAngles.Z;
	}
	else
	{
		float Pitch = DEG_TO_RAD * InRot.Pitch;
		float Yaw = DEG_TO_RAD * InRot.Yaw;
		float Roll = DEG_TO_RAD * InRot.Roll;
		//SP = sin(Pitch); CP = cos(Pitch);
		//SY = sin(Yaw); CY = cos(Yaw);
		//SR = sin(Roll); CR = cos(Roll);
		sincos(Pitch, &SP, &CP); // this one with tan2 will be preferred if there's no cos/sin available, otherwise both ways work
		sincos(Yaw, &SY, &CY);
		sincos(Roll, &SR, &CR);
	}

	// Create Matrix
	float M[3][3];
	M[0][0] = CP * CY;
	M[0][1] = CP * SY;
	M[0][2] = SP;
	M[0][3] = 0.f;
	M[1][0] = SR * SP * CY - CR * SY;
	M[1][1] = SR * SP * SY + CR * CY;
	M[1][2] = -SR * CP;
	M[1][3] = 0.f;
	M[2][0] = -(CR * SP * CY + SR * SY);
	M[2][1] = CY * SR - CR * SP * SY;
	M[2][2] = CR * CP;
	M[2][3] = 0.f;
	//M[3][0] = Origin.X;
	//M[3][1] = Origin.Y;
	//M[3][2] = Origin.Z;
	//M[3][3] = 1.f;

	// Matrix.GetScaledAxes(X,Y,Z)
	X.X = M[0][0]; X.Y = M[0][1]; X.Z = M[0][2];
	Y.X = M[1][0]; Y.Y = M[1][1]; Y.Z = M[1][2];
	Z.X = M[2][0]; Z.Y = M[2][1]; Z.Z = M[2][2];
}

/*
void UKismetMathLibrary::BreakRotIntoAxes(const FRotator& InRot, FVector& X, FVector& Y, FVector& Z)
{
	FRotationMatrix(InRot).GetScaledAxes(X, Y, Z); // need to again reverse this or just see how it works as GetAxes doesn't work
}
*/

/*FVector WorldToScreen(UCanvas* Canvas, FVector WorldLocation)//Helios
{
	FVector X, Y, Z, D, Out;
	GetAxes(MyCameraRotation, X, Y, Z);
	D = WorldLocation - MyCameraLocation;
	Out.X = (Canvas->ClipX / 2) + (Dot(D, Y)) * ((Canvas->ClipX / 2) / tan(Me->FovAngle * PI / 360)) / Dot(D, X);
	Out.Y = (Canvas->ClipY / 2) + (-Dot(D, Z)) * ((Canvas->ClipX / 2) / tan(Me->FovAngle * PI / 360)) / Dot(D, X);
	Out.Z = 0;
	return Out;
}*/
FVector W2S2(FVector Location, FRotator myRot, FVector myLoc, float FOV, float Width = ScreenWidth, float Height = ScreenHeight)
{
	FVector Return;
	FVector AxisX, AxisY, AxisZ, Delta, Transformed;

	UKismetReversedBreakRotIntoAxes(myRot, AxisX, AxisY, AxisZ, false);
	Delta = VectorSubtract(Location, myLoc);
	Transformed.X = Dot(Delta, AxisY);
	Transformed.Y = Dot(Delta, AxisZ);
	Transformed.Z = Dot(Delta, AxisX);

	if (Transformed.Z < 1.00f) Transformed.Z = 1.00f;

	float CentX = (Width / 2.f);
	float CentY = (Height / 2.f);
	Return.X = CentX + Transformed.X * (CentX / (float)tan2(FOV * UCONST_Pi / 360)) / Transformed.Z;
	Return.Y = CentY - Transformed.Y * (CentX / (float)tan2(FOV * UCONST_Pi / 360)) / Transformed.Z;
	Return.Z = Transformed.Z;

	return Return;
}

void __stdcall PostRenderV(UCanvas* pCanvas, UGameViewportClient* pGameViewportClient)
{
	if (!pCanvas) return;
	
	// Let's find the gameplaystatics class
	if (!gUE.gGameplayStatics)
	{
		UClass* pGameplayStatics = (UClass*)ObjObjects->FindObject("Class Engine.GameplayStatics"); // Get class static instance
		if (pGameplayStatics) gUE.gGameplayStatics = (UGameplayStatics*)pGameplayStatics;
	}

	// Let's find the math library
	if (!gUE.gMath)
	{
		UClass* pMath = (UClass*)ObjObjects->FindObject("Class Engine.KismetMathLibrary"); // Get class static instance
		if (pMath) gUE.gMath = (UKismetMathLibrary*)pMath;
	}

	// Let's find a filter class for GetAllActorOfClass (AController (SQSoldier))
	static UClass* SQSoldierClass = 0;
	if (!SQSoldierClass) SQSoldierClass = (UClass*)ObjObjects->FindObject("Class Squad.SQSoldier"); // Squad.Bot also inherits from this, training ragdoll/meshes don't get added to this

	// Let's get another filter class for actors incase it's needed
	static UClass* AActorClass = 0;
	if (!AActorClass) AActorClass = (UClass*)ObjObjects->FindObject("Class Engine.Actor");

	// Initialize or proceed
	if (GetAsyncKeyState(VK_INSERT) & 1) gUE.Initialize = !gUE.Initialize;
	if (!gUE.Initialize) return;

	// Read GWorld from the pointer we have
	gUE.GWorld = (UWorld*)(*(DWORD64*)dwpGWorld); // just use this pointer for now, read latest world by 1 ptr

	// Let's find our local player controller
	// Get by instance if the other way is broken or empty for some reason
	if (!gUE.gPlayerController)
	{
		if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0)
		{
			if (gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController) // if it's not null
			{
				gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;
				add_log("Found our playercontroller in gWorld->OwningGameInstance->LocalPlayers[0]: 0x%llX", gUE.gPlayerController);
			}
		}
		UClass* pController = (UClass*)ObjObjects->FindObject("Class Engine.PlayerController"); // Get class static instance
		if (pController && !gUE.gPlayerController)
		{
			add_log("Found engine.playercontroller class: 0x%llX", pController);
			int InstanceCount = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pController))
				{
					InstanceCount++;
					add_log("Found engine.playercontroller instance: 0x%llX", object); // ironically its the last one (13th) when its singleplayer but I don't know how well that holds up online
					gUE.gPlayerController = (APlayerController*)object;
				}
			}
		}
	}
	else if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0)
	{
		if (gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController) // if it's not null
			gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController; // always set this to latest
	}

	// Let's find our current EquipableItem/Weapon for norecoil (find once when toggled, as this is an example of finding it by instance having the PlayerController)
	// note: these reset when simply changing weapon back again, so it is not bad to just set them off by a button press etc., I am not going to improve this
	static ASQEquipableItem* pASQEquipableItem = 0;
	static bool DoOnce = false;
	if (GetAsyncKeyState(VK_DELETE) & 1) { if (gUE.Recoil) { pASQEquipableItem = 0; } else { DoOnce = true; } gUE.Recoil = !gUE.Recoil; }
	if (!pASQEquipableItem && gUE.gPlayerController && gUE.Recoil)
	{
		UClass* pEquipableItemClass = (UClass*)ObjObjects->FindObject("Class Squad.SQEquipableItem");
		if (pEquipableItemClass)
		{
			int InstanceCount = 0, OurWeaponInstances = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->ObjectFlags != RF_Transactional) continue; // in this case all of the ones we want will be Transactional
				if (object->IsA(pEquipableItemClass))
				{
					add_log("Found instance of SQEquipableItem 0x%llX", object);
					InstanceCount++;

					if (((ASQEquipableItem*)object)->LocalPlayerController == gUE.gPlayerController)
					{
						add_log("Found instance of SQEquipableItem 0x%llX <--", object);
						OurWeaponInstances++;
						if (OurWeaponInstances >= 5)
						{
							pASQEquipableItem = (ASQEquipableItem*)object;

							if (pASQEquipableItem->CachedSoldier1pAnimInstance)
							{
								pASQEquipableItem->CachedSoldier1pAnimInstance->FireShake->ShakeScale = 0.0f;
								DWORD64 Addr = (DWORD64)pASQEquipableItem->CachedSoldier1pAnimInstance + FIELD_OFFSET(USQAnimInstanceSoldier1P, WeaponSpringStiffness); // set size 0x1C8 from here
								memset((void*)Addr, 0, 0x1C8);
								add_log("Set for 0x%llX (offsets 0x%p + 0x1C8)", pASQEquipableItem, Addr);
							}
						}
					}
				}
			}
		}
	}
	if (gUE.Recoil && DoOnce && pASQEquipableItem && pASQEquipableItem->CachedSoldier1pAnimInstance)
	{
		pASQEquipableItem->CachedSoldier1pAnimInstance->FireShake->ShakeScale = 0.0f;
		DWORD64 Addr = (DWORD64)pASQEquipableItem->CachedSoldier1pAnimInstance + FIELD_OFFSET(USQAnimInstanceSoldier1P, WeaponSpringStiffness); // set size 0x1C8 from here
		memset((void*)Addr, 0, 0x1C8);
		add_log("Set no recoil for 0x%llX (offsets 0x%p + 0x1C8)", pASQEquipableItem, Addr);
		DoOnce = false;
	}

	// Set our team
	if (GetAsyncKeyState(VK_HOME) & 1) gUE.TeamFilter = !gUE.TeamFilter;
	if (((ASQPlayerController*)(gUE.gPlayerController))->TeamState) gUE.OurTeam = ((ASQPlayerController*)(gUE.gPlayerController))->TeamState->ID;

	// test for getting soldier actors and screen locations
	if (GetAsyncKeyState(VK_END) & 1) gUE.ESP = !gUE.ESP;
	if (gUE.ESP && gUE.GWorld && gUE.gPlayerController && gUE.gMath && AActorClass && SQSoldierClass)
	{
		// Array from gWorld that should contain all soldier actors but also contains a few other objects/actors (this is probably most optimal but requires the IsValidCustom and IsPendingKill checks)
		if (gUE.GWorld->PersistentLevel)
		{
			int Count = gUE.GWorld->PersistentLevel->Actors1.Count;
			//add_log("Checking pool with num %i", Count);
			for (int i = 0; i < Count - 1; i++)
			{
				gUE.GWorld = (UWorld*)(*(DWORD64*)dwpGWorld);
				Count = gUE.GWorld->PersistentLevel->Actors1.Count;
				if (i >= Count) break;
				AActor* object = (AActor*)gUE.GWorld->PersistentLevel->Actors1.Data[i];
				//if (!object || object->ObjectFlags != (RF_Transactional | RF_Transient) || !object->IsValidCustom() || object->IsPendingKill()) continue; // for Actors2, with invalid objects
				if (!object || !object->HasAnyFlags(RF_Transactional) || object->IsPendingKill()) continue;
				if (object->IsA(AActorClass) && object->IsA(SQSoldierClass))
				{
					add_log("Object found: 0x%p", object);

					// Alivecheck (how it works: comiss xmm0, dword ptr ds:[rcx+0x15C0]), compare health which is 100 to float 0, if its 0, then AL alive check fails
					if (((ASQSoldier*)object)->IsAlive()) continue;

					// Get team
					int TheirTeam = ((ASQSoldier*)object)->GetTeam(); //uses the below pathing to get team, even though for singleplayer it is available elsewhere
					if (gUE.TeamFilter && TheirTeam == gUE.OurTeam) continue;
					// TeamCheck (as derived from SQSoldier.GetTeam)
					/*int TheirTeam = 0;
					if (pCharacter->PlayerState)
					{
						ASQPlayerState* TheirState = (ASQPlayerState*)pCharacter->PlayerState;
						if (TheirState->TeamId) TheirTeam = TheirState->TeamId;
						else if (TheirState->TeamState) TheirTeam = TheirState->TeamState->ID;
						if (gUE.TeamFilter && TheirTeam == gUE.OurTeam) continue;
					}*/
					FVector ActorLoc = object->RootComponent->RelativeLocation;
					add_log("Here's our location! %f %f %f", ActorLoc.X, ActorLoc.Y, ActorLoc.Z);
					//FVector ActorLoc = Temp->K2_GetActorLocation();
					FVector ScreenLoc = pCanvas->K2_Project(ActorLoc);
					//add_log("Here's our projected one! %f %f %f", ScreenLoc.X, ScreenLoc.Y, ScreenLoc.Z);
					FVector2D Size(64.0f, 64.0f);
					FVector2D Pos(ScreenLoc.X - Size.X / 2, ScreenLoc.Y - Size.Y / 2);
					FLinearColor Color = FLinearColor(155.0f, 155.0f, 155.0f, 155.5f);
					pCanvas->K2_DrawBox(Pos, Size, 2.0f, Color);
				}
			}
		}
	}

	// test drawing a box, works fine
	if (GetAsyncKeyState(VK_LEFT) < 0)
	{
		FVector2D Size(64.0f, 64.0f);
		FVector2D Pos(100.0f, 150.0f);
		FLinearColor Color = FLinearColor(155.0f, 155.0f, 155.0f, 155.5f);
		pCanvas->K2_DrawBox(Pos, Size, 2.0f, Color);
	}
}

void __stdcall PostRender(UCanvas* pCanvas, UGameViewportClient* pGameViewportClient)
{
	if (!pCanvas) return;

	// Let's find the gameplaystatics class
	if (!gUE.gGameplayStatics)
	{
		UClass* pGameplayStatics = (UClass*)ObjObjects->FindObject("Class Engine.GameplayStatics"); // Get class static instance
		if (pGameplayStatics) gUE.gGameplayStatics = (UGameplayStatics*)pGameplayStatics;
	}

	// Let's find a filter class for GetAllActorOfClass (AController (SQSoldier))
	static UClass* SQSoldierClass = 0;
	if (!SQSoldierClass) SQSoldierClass = (UClass*)ObjObjects->FindObject("Class Squad.SQSoldier"); // Squad.Bot also inherits from this, training ragdoll/meshes don't get added to this

	// Let's get another filter class for actors incase it's needed
	static UClass* AActorClass = 0;
	if (!AActorClass) AActorClass = (UClass*)ObjObjects->FindObject("Class Engine.Actor");

	// We don't have to yet, but let's find a gUWorldContext and the current UWorld by instances (also ref official pointer to current loaded World to confirm, but since UE3 this seems to always work)
	/*if (!gUE.GWorld)
	{
		//if (dwpGWorld) add_log("Check official ptr to gWorld: 0x%llX->0x%llX <-Current gWorld", dwpGWorld, *(DWORD64*)dwpGWorld);
		UClass* pWorld = (UClass*)ObjObjects->FindObject("Class Engine.World"); // Get class static instance
		if (pWorld)
		{
			int FoundInstances = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pWorld)) 
				{
					FoundInstances++;
					if (FoundInstances == 1) gUE.GWorldContext = (UWorld*)object;
					else if (FoundInstances == 2) gUE.GWorld = (UWorld*)object;
				}
			}
		}
	}*/
	gUE.GWorld = (UWorld*)(*(DWORD64*)dwpGWorld); // just use this pointer for now, read latest world by 1 ptr

	// pCanvas here is usually a passed instance of UCanvas, usually the 3rd and last instance, so it can be checked in this way
	if (!gUE.gCanvas)
	{
		UClass* pCanvasClass = (UClass*)ObjObjects->FindObject("Class Engine.Canvas"); // Get class static instance
		if (pCanvasClass)
		{
			int InstanceCount = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pCanvasClass))
				{
					InstanceCount++;
					if(pCanvas == object) add_log("Found canvas instance: 0x%llX <--", object);
					else add_log("Found canvas instance: 0x%llX", object);
					if(InstanceCount==3) gUE.gCanvas = (UCanvas*)object;
				}
			}
		}
	}

	// Let's find UGameViewportClient by instance which also is the 3rd instance in this case, also is same as pGameViewportClient
	/*if (!gUE.gGameViewportClient)
	{
		UClass* pGVPClass = (UClass*)ObjObjects->FindObject("Class Engine.GameViewportClient"); // Get class static instance
		if (pGVPClass)
		{
			int InstanceCount = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pGVPClass))
				{
					InstanceCount++;
					if (InstanceCount == 3) gUE.gGameViewportClient = (UGameViewportClient*)object;
				}
			}
		}
	}*/

	// Let's find the math library
	if (!gUE.gMath)
	{
		UClass* pMath = (UClass*)ObjObjects->FindObject("Class Engine.KismetMathLibrary"); // Get class static instance
		if (pMath) gUE.gMath = (UKismetMathLibrary*)pMath;
	}

	// Initialize or proceed
	if (GetAsyncKeyState(VK_INSERT) & 1) gUE.Initialize = !gUE.Initialize;
	if (!gUE.Initialize) return;

	// Let's find our local player controller
	if (!gUE.gPlayerController)
	{
		if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0)
		{
			gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;
			add_log("Found our engine controller in gWorld->OwningGameInstance->LocalPlayers[0]: 0x%llX", gUE.gPlayerController);
		}
		UClass* pController = (UClass*)ObjObjects->FindObject("Class Engine.PlayerController"); // Get class static instance
		if (pController)
		{
			//add_log("Found engine.player class: 0x%llX", pController);
			int InstanceCount = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pController))
				{
					InstanceCount++;
					add_log("Found engine.playercontroller instance: 0x%llX", object); // ironically its the last one (13th) when its singleplayer but I don't know how well this way will hold up
					//gUE.gPlayerController = ((UPlayer*)object)->PlayerController;
				}
			}
		}
	}
	else if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0) // reset this anyway constantly
	{
		gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;
	}
	
	// Let's grab localplayer by instance (the last instance is generally the one with the LocalPlayer's controller as PCOwner, the othe rinstances are also 0 for PCOwner, so you 'can' use this to get both things in 1)
	static APlayerCameraManager* pPlayerCamera = 0;
	if (!pPlayerCamera)
	{
		//if (gUE.gPlayerController) add_log("Showing Playercontroller and Playercontroller->PlayerCameraManager->PCOwner(both should generally be the same): 0x%llX 0x%llX", gUE.gPlayerController, gUE.gPlayerController->PlayerCameraManager->PCOwner);
		UClass* pPlayerCameraClass = (UClass*)ObjObjects->FindObject("Class Engine.PlayerCameraManager"); // Get class static instance
		if (pPlayerCameraClass)
		{
			//add_log("Found Engine.PlayerCameraManager class: 0x%llX", pPlayerCameraClass);
			int InstanceCount = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pPlayerCameraClass))
				{
					InstanceCount++;
					//add_log("Found Engine.PlayerCameraManager instance: 0x%llX", object); // ironically its the last one (13th) when its singleplayer but I don't know how well this way will hold up
					if (((APlayerCameraManager*)(object))->PCOwner != 0) pPlayerCamera = (APlayerCameraManager*)object;
					//add_log("PCOwner (Acontroller) of instance: 0x%llX", pPlayerCamera->PCOwner);
				}
			}
		}
		if (!gUE.gPlayerController) gUE.gPlayerController = pPlayerCamera->PCOwner;
	}

	// test for getting actors 3 ways, then project and draw box, each way works fine but method2 is likely best/fastest, method1 second best with more filtering (could periodically poll and add to an array for performance), GetAllActorsOfClass is slowest and only works in hooked gamethread, but a good way for testing or fast implementation
	if (GetAsyncKeyState(VK_DOWN)&1 && SQSoldierClass && gUE.GWorld && gUE.gPlayerController && gUE.gMath)
	{
		// first find instances for logging purpose (the last intsances usually are actually valid, this could technically be used as it's fast, but not as optimized due to scanning thru all objects)
		/*for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
		{
			UObject* object = ObjObjects->GetObjectPtr(i);
			if (!object) continue;
			if (object->IsA(SQSoldierClass))
			{
				add_log("Found soldier instance: 0x%llX", object);
			}
		}

		// Array from gWorld that should contain all soldier actors but also contains a few other objects/actors (this is probably most optimal but requires the IsValidCustom and IsPendingKill checks)
		if (gUE.GWorld->PersistentLevel)
		{
			int Count = gUE.GWorld->PersistentLevel->Actors.Count;
			add_log("Checking pool with num %i", Count);
			for (int i = 0; i < Count - 1; i++)
			{
				// Check count and world has not been changed every iteration, check the object is valid, and not marked as PendingKill or Garbage which also makes it unreliable
				// One obj points at a simple list of integers or basically is invalid, some of them are sometimes base objects so this IsA implementation might crash if not checked, oddly enough
				gUE.GWorld = (UWorld*)(*(DWORD64*)dwpGWorld);
				Count = gUE.GWorld->PersistentLevel->Actors.Count;
				if (i >= Count) break;
				UObject* object = gUE.GWorld->PersistentLevel->Actors.Data[i];
				if (!object || !object->IsValidCustom() || object->IsPendingKill()) continue;
				if (object->IsA(AActorClass) && object->IsA(SQSoldierClass)) 
				{
					add_log("Found soldier instance in gWorld actors pool: 0x%llX", object);
					//FVector* ActorLoc = &((AActor*)object)->RootComponent->RelativeLocation;
					//add_log("Here's our location! %f %f %f", ActorLoc->X, ActorLoc->Y, ActorLoc->Z);
				}
			}
		}*/

		// This also works fine as long as we are in the proper thread, can be used to reverse and find other things, or for reference purposes
		static TArray<AActor*> FoundActors;
		FoundActors.Count = 0;
		gUE.gGameplayStatics->GetAllActorsOfClasstest2(gUE.GWorld, SQSoldierClass, FoundActors); // call function
		//add_log("Found amount2: %i %i", FoundActors.Count, FoundActors.Size); // report findings
		for (int i = 0; i < FoundActors.Count; i++)
		{
			AActor* Temp = (AActor*)FoundActors.Data[i];
			if (!Temp) continue;
			//add_log("Actoray%i %p", i, Temp);
			FVector ActorLoc = Temp->RootComponent->RelativeLocation;
			//add_log("Here's our location! %f %f %f", ActorLoc.X, ActorLoc.Y, ActorLoc.Z);
			//FVector ActorLoc = Temp->K2_GetActorLocation();
			FVector ScreenLoc = pCanvas->K2_Project(ActorLoc);
			//add_log("Here's our projected one! %f %f %f", ScreenLoc.X, ScreenLoc.Y, ScreenLoc.Z);
			FVector2D Size(64.0f, 64.0f);
			FVector2D Pos(ScreenLoc.X - Size.X / 2, ScreenLoc.Y - Size.Y / 2);
			FLinearColor Color = FLinearColor(155.0f, 155.0f, 155.0f, 155.5f);
			pCanvas->K2_DrawBox(Pos, Size, 2.0f, Color);
		}
	}

	// test drawing a box, works fine
	if (GetAsyncKeyState(VK_LEFT) < 0)
	{
		FVector2D Size(64.0f, 64.0f);
		FVector2D Pos(100.0f, 150.0f);
		FLinearColor Color = FLinearColor(155.0f, 155.0f, 155.0f, 155.5f);
		pCanvas->K2_DrawBox(Pos, Size, 2.0f, Color);
	}
}

// PostRender hook for my Inline Detours
typedef void(__fastcall* tPostRender)();
tPostRender oPostRender = NULL;
HookContextInline* PostRenderHookContext = NULL; 
void __fastcall hPostRender() // with this format it won't reset anything on the stack, sets PostRender call properly, and we preserve most original registers
{
	static UCanvas* pCanvas;
	static UGameViewportClient* pViewportClient;
	pCanvas = (UCanvas*)PostRenderHookContext->RDX;
	pViewportClient = (UGameViewportClient*)PostRenderHookContext->RCX;
	PostRender(pCanvas, pViewportClient);
	return oPostRender();
}
// PostRender hook for VTable/Normal Detour
typedef void(__thiscall* tPostRenderV) (UObject*, UCanvas*);
tPostRenderV oPostRenderV = NULL;
void __fastcall hPostRenderV(UObject* aUTGameViewportClient, UCanvas* pCanvas)
{
	PostRenderV(pCanvas, (UGameViewportClient*)aUTGameViewportClient);
	return oPostRenderV(aUTGameViewportClient, pCanvas);
}

// Test loop or loop for external hacking, or kernel, etc. (just saving this older one for reference, all the stuff here works but only test purposes)
/*
DWORD MainLoop()
{
	if (!dwGObjects || !dwGNames) return 0;
	while (true)
	{
		if (GetAsyncKeyState(VK_UP) & 1) gUE.Initialize = !gUE.Initialize;
		
		if (gUE.Initialize)
		{
			if (!gUE.gEngine)
			{
				// Let's find an engine by instance
				UClass* pEngine = (UClass*)ObjObjects->FindObject("Class Engine.Engine"); // Get class static instance
				if (pEngine)
				{
					//add_log("pEngine Class Addr: 0x%llX=0x%llx\n", (DWORD64)ObjObjects->GetObjectPtr(pEngine->InternalIndex), pEngine);
					for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
					{
						UObject* object = ObjObjects->GetObjectPtr(i);
						if (!object) continue;
						if (object->IsA(pEngine)) {
							add_log("pEngine Instance: 0x%llX\n", (DWORD64)object);
							gUE.gEngine = (UEngine*)object; // grab last instance usually works well for Engine too
						}
					}
				}
			}

			// Let's find a worldcontext and gworld by instance (1st instance tends to be world context, 2nd is actual gworld)(this has been re-confirmed with the actual ptr)(I have found this to be true since UE3, even if it was accidental to find out)
			if (!gUE.GWorld)
			{
				if(dwpGWorld) add_log("Official ptr to gWorld: 0x%llx->0x%llx <-Current gWorld", dwpGWorld, *(DWORD64*)dwpGWorld);
				UClass* pWorld = (UClass*)ObjObjects->FindObject("Class Engine.World"); // Get class static instance
				if (pWorld)
				{
					int FoundInstances = 0;
					//add_log("pWorld Class Addr: 0x%llX\n", (DWORD64)pWorld);
					for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
					{
						UObject* object = ObjObjects->GetObjectPtr(i);
						if (!object) continue;
						if (object->IsA(pWorld)) {
							//add_log("pWorld Instance: 0x%llX\n", (DWORD64)object);
							FoundInstances++;
							if(FoundInstances == 1) gUE.GWorldContext = (UWorld*)object;
							else if (FoundInstances == 2) gUE.GWorld = (UWorld*)object;
							//break;
						}
					}
				}
			}

			// Let's find the gameplaystatics (I don't think an instance is needed)
			if (!gUE.gGameplayStatics)
			{
				UClass* pGameplayStatics = (UClass*)ObjObjects->FindObject("Class Engine.GameplayStatics"); // Get class static instance
				if (pGameplayStatics)
				{
					gUE.gGameplayStatics = (UGameplayStatics*)pGameplayStatics;
				}
			}

			// Let's find the math library
			if (!gUE.gMath)
			{
				UClass* pMath = (UClass*)ObjObjects->FindObject("Class Engine.KismetMathLibrary"); // Get class static instance
				if (pMath)
				{
					gUE.gMath = (UKismetMathLibrary*)pMath;
				}
			}

			// Get the class for AController (SQSoldier)
			static UClass* SQSoldierClass = 0;
			if (!SQSoldierClass) SQSoldierClass = (UClass*)ObjObjects->FindObject("Class Squad.SQSoldier");
			
			// See if we can even just call a function properly right now
			if (gUE.gMath && GetAsyncKeyState(VK_RIGHT)) 
			{
				UFunction* testfn2 = (UFunction*)ObjObjects->FindObject("Function Engine.KismetMathLibrary.Abs");
				if (testfn2)
				{
					float Original = -2.0f;
					add_log("Original: %f", Original);
					Original = gUE.gMath->Abs(Original);
					add_log("New: %f", Original);
				}
			}

			// Get APlayerController instance, which should be ours
			static APlayerController* PlayerController = 0;
			if(!gUE.gPlayerController)
			{
				UClass* pPlayerControllerClass = (UClass*)ObjObjects->FindObject("Class Engine.PlayerController"); // Get class static instance
				if (pPlayerControllerClass)
				{
					int FoundInstances = 0;
					add_log("pPlayerSQSoldierClass Class Addr: 0x%llX\n", (DWORD64)ObjObjects->GetObjectPtr(pPlayerControllerClass->InternalIndex));
					for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
					{
						UObject* object = ObjObjects->GetObjectPtr(i);
						if (!object) continue;
						if (object->IsA(pPlayerControllerClass)) {
							add_log("pPlayerSQSoldierClass Instance: 0x%llX\n", (DWORD64)ObjObjects->GetObjectPtr(object->InternalIndex));
							FoundInstances++;
							auto Temp = (APlayerController*)(ObjObjects->GetObjectPtr(object->InternalIndex));
							if (!gUE.gPlayerController)
							{
								gUE.gPlayerController = (APlayerController*)ObjObjects->GetObjectPtr(object->InternalIndex);
								add_log("Set localplayer instance 0x%llX", gUE.gPlayerController);
							}
						}
					}
				}
			}

			// If we succeeded in that, let's try to call the func or iterate entities
			if (GetAsyncKeyState(VK_DOWN)&1 && gUE.GWorld && SQSoldierClass)
			{
				add_log("0x%p 0x%p 0x%p 0x%p 0x%p", SQSoldierClass, gUE.gGameplayStatics, gUE.GWorld, gUE.gEngine, gUE.GWorldContext);
				
				DWORD64 Datapool = 0;
				int Count = 0;
				if (gUE.GWorld && gUE.GWorld->PersistentLevel)
				{
					Datapool = (DWORD64)gUE.GWorld->PersistentLevel->Actors.Data;
					Count = gUE.GWorld->PersistentLevel->Actors.Count;
					add_log("Actors: 0x%p %i", Datapool, Count);
				}
				if (Datapool && Count)
				{

					for (int i = 0; i < Count; i++)
					{
						AActor* Temp = (AActor*)(*(DWORD64*)(Datapool + (i * 8)));
						if (Temp)
						{
							add_log("Found AActor(%i): 0x%p", i, Temp);
							if (!Temp || !Temp->IsA(SQSoldierClass) || !Temp->RootComponent) continue; //Crash randomly? wtf?
							FVector ActorLoc = Temp->RootComponent->RelativeLocation;
							if (ActorLoc.X != 0.0f)
							{
								add_log("Location(%i): %f %f %f", i, ActorLoc.X, ActorLoc.Y, ActorLoc.Z);
								//W2S(ActorLoc, )
							}

						}
					}
				}
			}

			// it seems calling this function is jutst dead unless hooking internally, even then it is pretty much slowest option of the 3
			//*(BYTE*)dwpbGIsGameThreadIdInitialized = 0; // disable thread initialized, used in thread checks, this is unfortunately not enough to call this function externally..
			//gUE.gGameplayStatics->GetAllActorsOfClass(gUE.GWorldContext, SQSoldierClass, FoundActors); // call function
			//add_log("Found amount: %i %i", FoundActors.Count, FoundActors.Size); // report findings
			//*(BYTE*)dwpbGIsGameThreadIdInitialized = 1; // re-enable thread initialized, used in thread checks

		}


		Sleep(10);
	}
}*/

// Test Thread 2
void MainLoop()
{
	while (true)
	{
		// Let's find the gameplaystatics class
		if (!gUE.gGameplayStatics)
		{
			UClass* pGameplayStatics = (UClass*)ObjObjects->FindObject("Class Engine.GameplayStatics"); // Get class static instance
			if (pGameplayStatics) gUE.gGameplayStatics = (UGameplayStatics*)pGameplayStatics;
		}

		// Let's find a filter class for GetAllActorOfClass (AController (SQSoldier))
		static UClass* SQSoldierClass = 0;
		if (!SQSoldierClass) SQSoldierClass = (UClass*)ObjObjects->FindObject("Class Squad.SQSoldier"); // Squad.Bot also inherits from this, training ragdoll/meshes don't get added to this

		// Let's get another filter class for actors incase it's needed
		static UClass* AActorClass = 0;
		if (!AActorClass) AActorClass = (UClass*)ObjObjects->FindObject("Class Engine.Actor");

		// Get filter class for SQPlayerController
		static UClass* SQPlayerControllerClass = 0;
		if (!SQPlayerControllerClass) SQPlayerControllerClass = (UClass*)ObjObjects->FindObject("Class Squad.SQPlayerController");

		// Get filter class for SQPlayerController
		static UClass* UPlayerClass = 0;
		if (!UPlayerClass) UPlayerClass = (UClass*)ObjObjects->FindObject("Class Engine.Player");

		// Get AControllerClass
		static UClass* UControllerClass = 0;
		if (!UControllerClass) UControllerClass = (UClass*)ObjObjects->FindObject("Class Engine.Controller");

		// Read GWorld from the pointer we have
		gUE.GWorld = (UWorld*)(*(DWORD64*)dwpGWorld); // just use this pointer for now, read latest world by 1 ptr

		// Let's find our UGameViewportClient by instance (again 3rd and last instance)
		/*if (!gUE.gGameViewportClient)
		{
			UClass* pGVPClass = (UClass*)ObjObjects->FindObject("Class Engine.GameViewportClient"); // Get class static instance
			if (pGVPClass)
			{
				int InstanceCount = 0;
				for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
				{
					UObject* object = ObjObjects->GetObjectPtr(i);
					if (!object) continue;
					if (object->IsA(pGVPClass))
					{
						InstanceCount++;
						if (InstanceCount == 3) gUE.gGameViewportClient = (UGameViewportClient*)object;
					}
				}
			}
		}*/

		// Let's find the math library
		if (!gUE.gMath)
		{
			UClass* pMath = (UClass*)ObjObjects->FindObject("Class Engine.KismetMathLibrary"); // Get class static instance
			if (pMath) gUE.gMath = (UKismetMathLibrary*)pMath;
		}

		// Let's find our local player controller
		// Get by instance if the other way is broken or empty for some reason
		if (!gUE.gPlayerController)
		{
			if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0)
			{
				if (gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController) // if it's not null
				{
					gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;
					add_log("Found our playercontroller in gWorld->OwningGameInstance->LocalPlayers[0]: 0x%llX", gUE.gPlayerController);
				}
			}
			UClass* pController = (UClass*)ObjObjects->FindObject("Class Engine.PlayerController"); // Get class static instance
			if (pController && !gUE.gPlayerController)
			{
				add_log("Found engine.playercontroller class: 0x%llX", pController);
				int InstanceCount = 0;
				for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
				{
					UObject* object = ObjObjects->GetObjectPtr(i);
					if (!object) continue;
					if (object->IsA(pController))
					{
						InstanceCount++;
						add_log("Found engine.playercontroller instance: 0x%llX", object); // ironically its the last one (13th) when its singleplayer but I don't know how well that holds up online
						gUE.gPlayerController = (APlayerController*)object;
					}
				}
			}

		}
		else if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0)
		{
			if (gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController) // if it's not null
				gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController; // always set this to latest
		}

		// Initialize or proceed
		if (GetAsyncKeyState(VK_INSERT) & 1) gUE.Initialize = !gUE.Initialize;
		if (!gUE.Initialize) continue;

		// Let's find our current EquipableItem/Weapon for norecoil (find once when toggled, as this is an example of finding it by instance having the PlayerController)
		// note: these reset when simply changing weapon back again, so it is not bad to just set them off by a button press etc., I am not going to improve this
		static ASQEquipableItem* pASQEquipableItem = 0;
		static bool DoRecoilOnce = false;
		if (GetAsyncKeyState(VK_DELETE) & 1) { if (!gUE.Recoil) { DoRecoilOnce = true; } gUE.Recoil = !gUE.Recoil; };
		if (!pASQEquipableItem && gUE.gPlayerController && gUE.Recoil && DoRecoilOnce)
		{
			if(gUE.gPlayerController->AcknowledgedPawn && gUE.gPlayerController->AcknowledgedPawn->IsA(SQSoldierClass))
			{ 
				if(((ASQSoldier*)(gUE.gPlayerController->AcknowledgedPawn))->InventoryComponent && ((ASQSoldier*)(gUE.gPlayerController->AcknowledgedPawn))->InventoryComponent->CurrentWeapon)
				pASQEquipableItem = ((ASQSoldier*)(gUE.gPlayerController->AcknowledgedPawn))->InventoryComponent->CurrentWeapon;
			}
		}
		if (gUE.Recoil && DoRecoilOnce && pASQEquipableItem && pASQEquipableItem->CachedSoldier1pAnimInstance)
		{
			if (pASQEquipableItem->CachedSoldier1pAnimInstance->FireShake) pASQEquipableItem->CachedSoldier1pAnimInstance->FireShake->ShakeScale = 0.0f;
			DWORD64 Addr = (DWORD64)pASQEquipableItem->CachedSoldier1pAnimInstance + FIELD_OFFSET(USQAnimInstanceSoldier1P, WeaponSpringStiffness); // set size 0x1C8 from here
			memset((void*)Addr, 0, 0x1C8);
			add_log("Set no recoil for 0x%llX (offsets 0x%p + 0x1C8)", pASQEquipableItem, Addr);
			DoRecoilOnce = false;
			pASQEquipableItem = 0;
		}
		//else add_log("Have weapon item 0x%p but it is empty or no weapon psosibly", pASQEquipableItem);

		// Set our team
		if (GetAsyncKeyState(VK_END) & 1) gUE.TeamFilter = !gUE.TeamFilter;
		if (((ASQPlayerController*)(gUE.gPlayerController))->TeamState) gUE.OurTeam = ((ASQPlayerController*)(gUE.gPlayerController))->TeamState->ID;
		
		// hold down arrow key, test for getting soldier actors and screen locations for esp
		if (GetAsyncKeyState(VK_DOWN)<0 && gUE.GWorld && gUE.gPlayerController && gUE.gMath && AActorClass && SQSoldierClass && UPlayerClass && UControllerClass)
		{
			if (gUE.GWorld->PersistentLevel)
			{
				int Count = gUE.GWorld->PersistentLevel->Actors1.Count;
				add_log("Count! %i", Count);
				for (int i = 0; i < Count; i++)
				{
					AActor* object = (AActor*)gUE.GWorld->PersistentLevel->Actors1.Data[i];
					if (!object || !object->HasAnyFlags(RF_Transactional) || object->IsPendingKill()) continue; 
					if (object->IsA(SQSoldierClass) && object->RootComponent)
					{
						ACharacter* pCharacter = (ACharacter*)object;
						//add_log("Found PlayerController instance in gWorld actors1 pool: 0x%p", object);
						if(object->Instigator) add_log("Derived Pawn: 0x%p", object->Instigator);

						// TeamCheck (as derived from SQSoldier.GetTeam)
						int TheirTeam = 0;
						if (pCharacter->PlayerState)
						{
							ASQPlayerState* TheirState = (ASQPlayerState*)pCharacter->PlayerState;
							if (TheirState->TeamId) TheirTeam = TheirState->TeamId;
							else if (TheirState->TeamState) TheirTeam = TheirState->TeamState->ID;
							if (gUE.TeamFilter && TheirTeam == gUE.OurTeam) continue;
						}

						// Setloc,W2S,etc.
						FVector ActorLoc = object->RootComponent->RelativeLocation;
						//add_log("Here's our location! %f %f %f", ActorLoc.X, ActorLoc.Y, ActorLoc.Z);
						FMinimalViewInfo* pCameraCache = &(gUE.gPlayerController->PlayerCameraManager->CameraCachePrivate.POV);
						FVector ScreenLoc = W2S2(ActorLoc, pCameraCache->Rotation, pCameraCache->Location, pCameraCache->FOV);
						//add_log("Here's our w2s one! %i %i %i", (int)ScreenLoc.X, (int)ScreenLoc.Y, (int)ScreenLoc.Z);
						HWND OurWindow = GetForegroundWindow();
						HDC OurDC = GetDC(OurWindow);
						if (OurWindow && OurDC)
						{
							for (int x = 0; x < 20; x++)
								for (int y = 0; y < 20; y++)
									SetPixel(OurDC, (int)ScreenLoc.X + x, (int)ScreenLoc.Y + y, COLORREF(0xEEEEEEEE));
						}
					}

					/*
					if (object->IsA(SQPlayerControllerClass)) // only works for us and in singleplayer usually, and these are usually pawns
					{
						ASQPlayerController* pSqCtrlObject = (ASQPlayerController*)object;
						add_log("Found PlayerController instance in gWorld actors1 pool: 0x%p", object);

						// Remove local
						//if (object == gUE.gPlayerController) continue;

						// Get Pawn
						ASQSoldier* pPawn = (ASQSoldier*)pSqCtrlObject->AcknowledgedPawn;
						if (!pPawn || !pPawn->IsA(SQSoldierClass)) continue;
						add_log("Player Pawn derived: 0x%p", pPawn);

						// TeamCheck
						int TheirTeam = 0;
						if (pSqCtrlObject->TeamState) TheirTeam = pSqCtrlObject->TeamState->ID;
						if (gUE.TeamFilter && TheirTeam == gUE.OurTeam) continue;

						// Getloc,W2S,etc.
						FVector ActorLoc = pPawn->RootComponent->RelativeLocation;
						FMinimalViewInfo* pCameraCache = &(gUE.gPlayerController->PlayerCameraManager->CameraCachePrivate.POV);
						FVector ScreenLoc = W2S2(ActorLoc, pCameraCache->Rotation, pCameraCache->Location, pCameraCache->FOV);
						add_log("Here's our w2s one! %f %f", ScreenLoc.X, ScreenLoc.Y);

						// Draw, we now have ESP basically if we can draw externally (draw 20x20 pixel box, this is purposefully bad as you will devise your own drawing method for external hacking)
						HWND OurWindow = GetForegroundWindow();
						HDC OurDC = GetDC(OurWindow);
						if (OurWindow && OurDC)
						{
							for(int x=0;x<20;x++)
								for(int y=0;y<20;y++)
									SetPixel(OurDC, (int)ScreenLoc.X+x, (int)ScreenLoc.Y+y, COLORREF(0xEEEEEEEE));
						}
					}*/
				}
			}
		}

		Sleep(3);
	}
}


DWORD Initialize()
{
	//Get signatures
	LoadSignatures();
	
	// Load gObjects and gNames
	dwGObjects = dwSignatures[0] + 7 + *(DWORD*)((dwSignatures[0]) + 3);
	dwGNames = dwSignatures[1] + 7 + *(DWORD*)((dwSignatures[1]) + 3);
	ObjObjects = (TUObjectArray*)dwGObjects;
	NamePoolData = (FNamePool*)dwGNames;

	// Wait for objects
	if (ObjObjects && ObjObjects->NumElements < 200000) Sleep(2000);

	// Load global UWorld pointer (and a global pointer to gIsGameThreadIdInitialized, just kept but not in usage)
	dwpGWorld = dwSignatures[2] + 7 + *(DWORD*)((dwSignatures[2]) + 3);
	if (dwSignatures[3] > 0x1)
	{
		for (int i = 2; i < 0x1C; i++) // adjust GIsGameThreadIdInitialized signature back to find actual offset dynamically
		{
			short TempValue = *(short*)(dwSignatures[3] - i);
			if (TempValue == 0x3D80) // Check for 80 3D precursor bytes (example: | 803D F1530504 00 | cmp byte ptr ds:[7FF7D14F0840],0) which is behind our sig
			{
				dwSignatures[3] -= i;
				break;
			}
		}
		dwpbGIsGameThreadIdInitialized = dwSignatures[3] + 7 + *(DWORD*)((dwSignatures[3]) + 2);
	}

	// Load pointer to ProcessEvent and PostRender, but using UObjects dynamically
	UObject* pUObject = ObjObjects->GetObjectPtr(0);
	if (pUObject) gUE.gProcessEvent = pUObject->GetProcessEventAddress();
	UGameViewportClient* pViewportClientClass = (UGameViewportClient*)ObjObjects->FindObject("Class Engine.GameViewportClient"); // Get class static instance once
	while (!gUE.gPostRender)
	{
		if (pViewportClientClass)
		{
			UGameViewportClient* Temp = 0;
			for (int i = 0; i < (ObjObjects->NumElements - 1); i++)
			{
				UObject* object = ObjObjects->GetObjectPtr(i);
				if (!object) continue;
				if (object->IsA(pViewportClientClass))
				{
					add_log("ViewportClientClass Instance: 0x%llX\n", (DWORD64)ObjObjects->GetObjectPtr(object->InternalIndex));
					Temp = (UGameViewportClient*)object; // last (3rd) instance should be the one in usage	
				}
			}

			// Proceed to find/store ProcessEvent by index (0x2E8 or 93)
			//if (Temp) gUE.gPostRender = (DWORD64)(Temp->VFTable[93]);
			if (Temp)
			{
				gUE.gPostRender = (DWORD64)(Temp->VFTable[94]); // just a note this is DrawTransitionTitles instead of PostRender, because the Postrender jmp stub is small to hook(10 bytes)
				oPostRenderV = (tPostRenderV)Temp->VFTable[94]; // can also hook here in the VTable way
				
				// Hook VTable function, simple way
				DWORD Old;
				PVOID PointerToVTable = &Temp->VFTable[94];
				VirtualProtect(PointerToVTable, 0x8, PAGE_EXECUTE_READWRITE, &Old);
				Temp->VFTable[94] = hPostRenderV; 
				VirtualProtect(PointerToVTable, 0x8, Old, &Old);
			}
		}
		Sleep(1000);
	}

	//Log signatures
	add_log("gObjects: 0x%llx %p", dwGObjects, ObjObjects);
	add_log("gNames: 0x%llx %p", dwGNames, NamePoolData);
	if (dwSignatures[2] > 0x1) add_log("Ptr to gWorld: 0x%llx->0x%llx", dwpGWorld, *(DWORD64*)dwpGWorld);
	if (dwSignatures[3] > 0x1) add_log("Ptr to GIsGameThreadIdInitialized byte: 0x%llx->%i", dwpbGIsGameThreadIdInitialized, *(BYTE*)dwpbGIsGameThreadIdInitialized);
	add_log("ProcessEvent: 0x%llx", gUE.gProcessEvent);
	add_log("PostRender: 0x%llx", gUE.gPostRender);

	// Create a thread or main loop (to simulate external hack)
	//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainLoop, 0, 0, 0);

	//Hook PostRender with detours, store context with registers/anything needed
	//oPostRender = (tPostRender)DetourFunc64_Inline((BYTE*)gUE.gPostRender, (BYTE*)hPostRender, 20);
	//PostRenderHookContext = detourhook64inline;

	return 0;
}

// DLL
BOOL WINAPI DllMain(HMODULE hinst, DWORD reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		g_hInst = hinst;
		Initialize();
	}
	return true;
}