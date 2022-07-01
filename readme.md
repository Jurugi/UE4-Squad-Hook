# UE4-Squad-Hook
Example hooking Unreal Engine on Squadx64
for offline or testing modes only, this is not for bypassing any form of deterrent or AC, but for learning how the engine works, you are free to do what you wish with this information. It is designed to be a mess but most commented code is working, feel free to clean it up.

You are free to re-use, just if asked in that 1/1000000 chance, be honest where it came from.

Includes
- std string version changed to char* version for fnames/objects
- find gobjects,fname,call functions
- all necessary sdk functions/data from dumps
- drawing, setup/call any function
- does not include full dump
- my inline x64 detours included
- hook postrender by both vtable/inline
- find/call processevent
- thread method for testing external ways (no hooks)

Reversed/fixed exactly how it's called in the engine:
- isalive
- teamcheck
- w2s/getrotfromaxes
- fixed general math/funcs

I am not fixing the brokne formatting: notes/helpful info below for those who want to find things on UE4 4.2x+ versions and just mess with it. (use raw version for formatting https://raw.githubusercontent.com/Jurugi/UE4-Squad-Hook/main/readme.md)

Finding engine version:
You can go to the .exe, file details, File version: will hold the compiled engine version.
If it's changed, I am not sure, just look for other refs or guess a nearby version.
For me in this case it's 4.23.

Finding gObjects:
typedef FChunkedFixedUObjectArray TUObjectArray; is defined in /Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h
You can literally see the way it changed or its layout based on engine version. e.g. once added chunks for index speed and before it has none
You can find it defined like this for example:
	/** First index into objects array taken into account for GC.							*/
	int32 ObjFirstGCIndex;
	/** Index pointing to last object created in range disregarded for GC.					*/
	int32 ObjLastNonGCIndex;
	/** Maximum number of objects in the disregard for GC Pool */
	int32 MaxObjectsNotConsideredByGC;

	/** If true this is the intial load and we should load objects int the disregarded for GC range.	*/
	bool OpenForDisregardForGC;
	/** Array of all live objects.											*/
	TUObjectArray ObjObjects;

ObjObjects is really what we want but we can find the entire class or find that in various ways.

Let's use void FUObjectArray::AllocateObjectPool(int32 InMaxUObjects, int32 InMaxObjectsNotConsideredByGC, bool bPreAllocateObjectArray)
Search reference string: "Max UObject count is invalid. It must be a number that is greater than 0."
We see above a check if UObject.ObjObjects.num() == 0 which means we are looking for a simple check.
However it might require some more debugging skills. I see:
00007FF71272E0F7                                                                            | 33DB                            | xor ebx,ebx                                                                      |
00007FF71272E0F9                                                                            | 41:897E 08                      | mov dword ptr ds:[r14+8],edi                                                     |
00007FF71272E0FD                                                                            | 85FF                            | test edi,edi                                                                     |
00007FF71272E0FF                                                                            | 8BC3                            | mov eax,ebx                                                                      |
00007FF71272E101                                                                            | 0F9EC0                          | setle al                                                                         |
00007FF71272E104                                                                            | FFC8                            | dec eax                                                                          |
00007FF71272E106                                                                            | 41:8906                         | mov dword ptr ds:[r14],eax                                                       |
00007FF71272E109                                                                            | 41:395E 24                      | cmp dword ptr ds:[r14+24],ebx <--- our gObjects and DWORD NumElements or .num() is at +0x24 offset
Thus I think this is the same line as ObjObjects.num() == 0 but we don't know R14 which is what we want.
We go up and can find r14 is set by rcx meaning it's a parameter or class but we need to find caller to this function first.
Easy, it's right there! Now we can sig that or even make logic to scan for it. This is probably a straightforward but not best direct way:
00007FF71274DAB3                                                                            | 48:8D0D C6CCC103                | lea rcx,qword ptr ds:[7FF71636A780] <-- our gObjects global pointer!             | 00007FF71636A780:"hÉ\x01"
00007FF71274DABA                                                                            | E8 F105FEFF                     | call <squadgame.sub_7FF71272E0B0>                                                |

For reference here is some strings that happened to be nearby:
00007FF71274DA2F                                                                            | 48:8D05 CAF97602                | lea rax,qword ptr ds:[7FF714EBD400]                                              | 00007FF714EBD400:L"Pre-allocating"
00007FF71274DA36                                                                            | 48:8D0D E3F97602                | lea rcx,qword ptr ds:[7FF714EBD420]                                              | 00007FF714EBD420:L"Presizing"
00007FF71274DA3D                                                                            | 807D 20 00                      | cmp byte ptr ss:[rbp+20],0                                                       |
00007FF71274DA41                                                                            | 48:0F45C8                       | cmovne rcx,rax                                                                   |
00007FF71274DA45                                                                            | 8B45 28                         | mov eax,dword ptr ss:[rbp+28]                                                    |
00007FF71274DA48                                                                            | 894424 40                       | mov dword ptr ss:[rsp+40],eax                                                    |
00007FF71274DA4C                                                                            | 8B45 30                         | mov eax,dword ptr ss:[rbp+30]                                                    |
00007FF71274DA4F                                                                            | 894424 38                       | mov dword ptr ss:[rsp+38],eax                                                    |
00007FF71274DA53                                                                            | 8B45 38                         | mov eax,dword ptr ss:[rbp+38]                                                    |
00007FF71274DA56                                                                            | 894424 30                       | mov dword ptr ss:[rsp+30],eax                                                    |
00007FF71274DA5A                                                                            | 48:894C24 28                    | mov qword ptr ss:[rsp+28],rcx                                                    |
00007FF71274DA5F                                                                            | 48:8D05 DAF97602                | lea rax,qword ptr ds:[7FF714EBD440]                                              | 00007FF714EBD440:L"%s for max %d objects, including %i objects not considered by GC, pre-allocating %i bytes for permanent pool."
00007FF71274DA66                                                                            | 48:894424 20                    | mov qword ptr ss:[rsp+20],rax                                                    | [rsp+20]:"À~ÝmC\x01"
00007FF71274DA6B                                                                            | 41:B9 05000000                  | mov r9d,5                                                                        |
00007FF71274DA71                                                                            | 4C:8D45 D0                      | lea r8,qword ptr ss:[rbp-30]                                                     |
00007FF71274DA75                                                                            | 33D2                            | xor edx,edx                                                                      |
00007FF71274DA77                                                                            | 33C9                            | xor ecx,ecx                                                                      |
00007FF71274DA79                                                                            | E8 F256D7FF                     | call <squadgame.sub_7FF7124C3170>                                                |
00007FF71274DA7E                                                                            | 48:6345 28                      | movsxd rax,dword ptr ss:[rbp+28]                                                 |
00007FF71274DA82                                                                            | 8905 C8C9C103                   | mov dword ptr ds:[7FF71636A450],eax                                              |
00007FF71274DA88                                                                            | 48:8BC8                         | mov rcx,rax                                                                      |
00007FF71274DA8B                                                                            | 33D2                            | xor edx,edx                                                                      |
00007FF71274DA8D                                                                            | E8 2EF3D3FF                     | call <squadgame.sub_7FF71248CDC0>                                                |
00007FF71274DA92                                                                            | 48:8905 BFC9C103                | mov qword ptr ds:[7FF71636A458],rax                                              | 00007FF71636A458:"ð\vT¿B\x01"
00007FF71274DA99                                                                            | 48:8905 C0C9C103                | mov qword ptr ds:[7FF71636A460],rax                                              | 00007FF71636A460:"ð\vT¿B\x01"
00007FF71274DAA0                                                                            | 48:8905 C1C9C103                | mov qword ptr ds:[7FF71636A468],rax                                              |
00007FF71274DAA7                                                                            | 44:0FB64D 20                    | movzx r9d,byte ptr ss:[rbp+20]                                                   |
00007FF71274DAAC                                                                            | 44:8B45 30                      | mov r8d,dword ptr ss:[rbp+30]                                                    |
00007FF71274DAB0                                                                            | 8B55 38                         | mov edx,dword ptr ss:[rbp+38]                                                    |
00007FF71274DAB3                                                                            | 48:8D0D C6CCC103                | lea rcx,qword ptr ds:[7FF71636A780]<--gObjects                                   | 00007FF71636A780:"hÉ\x01"
00007FF71274DABA                                                                            | E8 F105FEFF                     | call <squadgame.sub_7FF71272E0B0>                                                |

Finding gNames:
It's actually defined as FNamePool in Engine/Source/Runtime/Core/Private/UObject/UnrealNames.cpp. 
A bit messy and static from a reverse and find perspective, you can probably understand once you see "GetNamePool()":
static FNamePool& GetNamePool()
{
	if (bNamePoolInitialized)
	{
		return *(FNamePool*)NamePoolData;
	}

	FNamePool* Singleton = new (NamePoolData) FNamePool;
	bNamePoolInitialized = true;
	return *Singleton;
}
This is generally what we want, the NamePool which has the 'blocks' and the string data. We can also at least see the struct to see if it changed (usually not).
I can do a quick search and find "FNAME_Replace_Not_Safe_For_Threading" which is in static FName Make(FNameStringView View, EFindName FindType, int32 InternalNumber): in there is a ref: FNamePool& Pool = GetNamePool();
This means we should probably just have a global ptr sitting there to the namepool right from the exact class file, although again it probably is not the easiest way.
I found 2 calls leading to this string, I took the 2nd one, we must trace it back to the function then go up.. eventually 2 jes up I see:
00007FF71256254C                                                                            | 44:3835 C907DF03                | cmp byte ptr ds:[7FF716352D1C],r14b                                              |
00007FF712562553                                                                            | 74 09                           | je squadgame.7FF71256255E                                                        |
00007FF712562555                                                                            | 4C:8D3D A409DF03                | lea r15,qword ptr ds:[7FF716352F00]                                              |
00007FF71256255C                                                                            | EB 16                           | jmp squadgame.7FF712562574                                                       |
00007FF71256255E                                                                            | 48:8D0D 9B09DF03                | lea rcx,qword ptr ds:[7FF716352F00]                                              |
00007FF712562565                                                                            | E8 A684FFFF                     | call <squadgame.sub_7FF71255AA10>                                                |
This is very likely the fNamepool pointer. Usually it has this structure like: if(bNamePoolInitialized) return *(FNamePool*)NamePoolData; I have confirmed in this case it is that and again it's compiler optimized into the function. You can also generally use this byte structure to search for it.

Finding process event:
It's in Engine/Source/Runtime/CoreUObject/Private/UObject/ScriptCore.cpp with tons of references void UObject::ProcessEvent( UFunction* Function, void* Parms ).
There are tons of refs such as "Cannot call UnrealScript (%s - %s)" or "%s  Function: '%s'" which should be only in ProcessEvent for most versions.
Look for where the function checks function flags, which also gives you offset for that:
00007FF7127416DA  | F782 98000000 00040000  | test dword ptr ds:[rdx+98],400
or 
00007FF7127416DA  | F782 98000000 02040000  | test dword ptr ds:[rdx+98],402
There should be 2 refs, pick the last or 2nd one, or check both. Usually finding a combo of this value somewhat works or helps to confirm as native function flags (FUNC_NATIVE) are 400 or 402 in most compilations. You might even just dump this value then you know exactly what it is, if it changed. You could check 0x98 lines up with the uFunction flags offset as it should, so you can replace that number instead of wildcard it to get more accurate results.
On top of that function it should be:
00007FF712741460 				                                            | 40:55                           | push rbp                                                                         | processevent?
00007FF712741462                                                                            | 56                              | push rsi                                                                         |
00007FF712741463                                                                            | 57                              | push rdi                                                                         |
00007FF712741464                                                                            | 41:54                           | push r12                                                                         |
00007FF712741466                                                                            | 41:55                           | push r13                                                                         |
00007FF712741468                                                                            | 41:56                           | push r14                                                                         |
00007FF71274146A                                                                            | 41:57                           | push r15                                                                         |
00007FF71274146C                                                                            | 48:81EC B0010000                | sub rsp,1B0                                                                      |
00007FF712741473                                                                            | 48:8D6C24 30                    | lea rbp,qword ptr ss:[rsp+30]                                                    |
00007FF712741478                                                                            | 48:C785 C0000000 FEFFFFFF       | mov qword ptr ss:[rbp+C0],FFFFFFFFFFFFFFFE    <--- usually there
00007FF712741483                                                                            | 48:899D D8010000                | mov qword ptr ss:[rbp+1D8],rbx                                                   |
00007FF71274148A                                                                            | 48:8B05 67D9B903                | mov rax,qword ptr ds:[7FF7162DEDF8]   <--- usually something

Note the FFEE which is -2 usually I note it has been there since UE3 and it helps to recognize. You should check in the function for the FUNC_NATIVE check as above to confirm.
Once you have both of these, it is likely you have found the processevent. From there it is easy to debug to find index or hook if the game allows it.

Finding UGameViewportClient->PostRender(UCanvas* Canvas):
PostRender always calls DrawTransitionTitles which is full of lot of referencial strings.
Some of these: "Waiting to connect...", "GameViewportClient", "PausedMessage", "PAUSED", "LoadingMessage", "LOADING" etc.
You can even hook this function probably and use it the same way as PostRender, but for this purpose, go back to the function that calls this function, that should be the actual PostRender.
If it's not compiler optimized into the function, you should be able to find the call to PostRender or the call 'from' PostRender to DrawTransitionTitles and from there hook what you need.

Fixing assertion error for Not in game thread:
FORCEINLINE bool IsInGameThread()
{
	if(GIsGameThreadIdInitialized)
	{
		const uint32 CurrentThreadId = FPlatformTLS::GetCurrentThreadId();
		return CurrentThreadId == GGameThreadId;
	}

	return true;
}
*removed info because this basically does nothing even if set off, blueprint functions will generally always work, some other functions will crash if not done in the right place*

Find Local Player controller:
Usual way, after getting offsets, you can simply grab it from GWorld->OwningGameInstance:
if (gUE.GWorld && gUE.GWorld->OwningGameInstance && gUE.GWorld->OwningGameInstance->LocalPlayers.Count > 0) // reset this anyway constantly
{
		gUE.gPlayerController = (APlayerController*)gUE.GWorld->OwningGameInstance->LocalPlayers.Data[0]->PlayerController;
}

Another way I found is PCOwner in PlayerCameraManager is a copy of AController of the camera. Also for the other instances, PCOwner will be 0 anyway, even if it claims to be a PlayerCameraManager instance.

Example:
<code>
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
</code>
If using this 2nd way you need no offsets and you can basically then get your player, location, rotation, FOV, and the usual stuff without the actual offsets, or just minimal offsets. You can just skip all those steps and you already have your camera/rot/location (for project) as well as grabbed localplayer acontroler.
This obviously have large benefits, usually it works fine since UE3 imo but is not the 'optimal' way, but if properly made in a loading way, could be used fine to load 1 time or get both at once.

World to Screen:
I found a UE4 world to screen from here because calling functions externally is usually impossible.. It seems the GetAxes function is broken, values way different/broken.. so I am going to try and fix it later.

Not working found code, the principle works but GetAxes is way broken/out of date:
<code>
    	FVector2D W2S(FVector Location, FRotator myRot, FVector myLoc, float FOV)
    	{
    		FVector2D Return;
     
    		FVector AxisX, AxisY, AxisZ, Delta, Transformed;
    		GetAxes(myRot, AxisX, AxisY, AxisZ);
     
    		Delta = VectorSubtract(Location, myLoc);
    		Transformed.x = Dot(Delta, AxisY);
    		Transformed.y = Dot(Delta, AxisZ);
    		Transformed.z = Dot(Delta, AxisX);
     
    		if (Transformed.z < 1.00f)
    			Transformed.z = 1.00f;
     
    		float GFOV = FOV;
    		float CentX = (Width / 2.f);
    		float CentY = (Height / 2.f);
     
    		Return.x = CentX + Transformed.x * (CentX / (float)tan(GFOV * M_PI / 360)) / Transformed.z;
    		Return.y = CentY - Transformed.y * (CentX / (float)tan(GFOV * M_PI / 360)) / Transformed.z;
     
    		return Return;
    	}
     
    void GetAxes(FRotator R, FVector& X, FVector& Y, FVector& Z)
    {
    	X = RotationToVector(R);
    	Normalize(X);
    	R.yaw += 16384;
    	FRotator R2 = R;
    	R2.pitch = 0.f;
    	Y = RotationToVector(R2);
    	Normalize(Y);
    	Y.z = 0.f;
    	R.yaw -= 16384;
    	R.pitch += 16384;
    	Z = RotationToVector(R);
    	Normalize(Z);
    }

float inline Dot(const FVector& V1, const FVector& V2)
{
	return (V1.X * V2.X + V1.Y * V2.Y + V1.Z * V2.Z);
}
</code>

You will need CameraRotation, CameraLocation and FOV.
You can get both in SDK, inside PlayerCameraManager and CacheEntry
Note we also have these and it's generally safe to call the functions UKismetMathLibrary::BreakRotIntoAxes and UKismetMathLibrary::Dot_VectorVector anywhere, as well as abs() and most other math funcs directly.
 
 However even calling the functions, while it works, is relatively slow and not viable externally: BreakRotIntoAxes:
1.0) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 800 ns)
1.1) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 300 ns)
Calling Function Engine.KismetMathLibrary.BreakRotIntoAxes 0x00000245E55599A0
2) -0.594734 0.800179 -0.077495 -0.802592 -0.596528 0.000000 -0.046227 0.062197 0.996993 (te: 25675000 ns)

Working version:
<code>

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

</code>

Kernelizing/HyperV and other notes:
Externally you can call most KismetmathLibrary and a few other functions, however in Kernel will trigger Kernel BSOD when trying to execute usermode memory.. (SMEP or other protections)
A few functions such as GetAllActorsofClass, k2_drawbox and k2_project,  need to be called in a hook in certain functions, the usual one is PostRender
