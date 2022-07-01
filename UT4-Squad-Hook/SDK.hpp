#pragma once
/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/
/*
class Rotator
{
public:
	int                                                Pitch;         
	int                                                Yaw;           
	int                                                Roll;          
};

class Vector3D
{
public:
	float x;
	float y;
	float z;
};

class Vector2D
{
public:
	float x;
	float y;
};

class Plane : Vector3D
{
public:
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};

class Vector4D
{
public:
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              W;                                                		// 0x000C (0x0004) [0x0000000000000000]              
};
*/

// ScriptStruct CoreUObject.Vector
// Size: 0x0c (Inherited: 0x00)
struct FVector {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct CoreUObject.Vector4
// Size: 0x10 (Inherited: 0x00)
struct FVector4 {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
	float W; // 0x0c(0x04)
};

// ScriptStruct CoreUObject.Vector2D
// Size: 0x08 (Inherited: 0x00)
struct FVector2D {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct CoreUObject.TwoVectors
// Size: 0x18 (Inherited: 0x00)
struct FTwoVectors {
	struct FVector v1; // 0x00(0x0c)
	struct FVector v2; // 0x0c(0x0c)
};

// ScriptStruct CoreUObject.Rotator
// Size: 0x0c (Inherited: 0x00)
struct FRotator {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
	float Roll; // 0x08(0x04)
};

struct FLinearColor {
	float R, G, B, A;
	FLinearColor() : R(0.f), G(0.f), B(0.f), A(0.f) {};
	FLinearColor(float R, float G, float B, float A) : R(R), G(G), B(B), A(A) {};
};

/*
# ========================================================================================= #
# Includes
# ========================================================================================= #
*/

#include "SDK/UE4_Basic.hpp"
//UObjects, other sdk headers, etc.

/*
# ========================================================================================= #
# Math
# ========================================================================================= #
*/
FVector inline VectorSubtract(FVector Vector1, FVector Vector2)
{
	FVector Vec;
	Vec.X = Vector1.X - Vector2.X;
	Vec.Y = Vector1.Y - Vector2.Y;
	Vec.Z = Vector1.Z - Vector2.Z;
	return Vec;
}
FVector inline VectorAdd(FVector Vector1, FVector Vector2)
{
	FVector Vec;
	Vec.X = Vector1.X + Vector2.X;
	Vec.Y = Vector1.Y + Vector2.Y;
	Vec.Z = Vector1.Z + Vector2.Z;
	return Vec;
}
FRotator inline RotatorSubtract(FRotator Vector1, FRotator Vector2)
{
	FRotator Vec;
	Vec.Pitch = Vector1.Pitch - Vector2.Pitch;
	Vec.Yaw = Vector1.Yaw - Vector2.Yaw;
	Vec.Roll = Vector1.Roll - Vector2.Roll;
	return Vec;
}
FRotator inline RotatorAdd(FRotator Vector1, FRotator Vector2)
{
	FRotator Vec;
	Vec.Pitch = Vector1.Pitch + Vector2.Pitch;
	Vec.Yaw = Vector1.Yaw + Vector2.Yaw;
	Vec.Roll = Vector1.Roll + Vector2.Roll;
	return Vec;
}
FVector4 inline VectorMultiply(FVector4 Vec1, FVector4 Vec2)
{
	FVector4 Ret = { Vec1.X * Vec2.X, Vec1.Y * Vec2.Y, Vec1.Z * Vec2.Z, Vec1.W * Vec2.W };
	return Ret;
}
/*FRotator inline LimitRotation(UKismetMathLibrary* gMath, FRotator rStartRotation, FRotator rEndRotation)
{
	float nMaxRotation = 360.0f;

	FRotator rDeltaRotation;
	rDeltaRotation = gMath->STATIC_NormalizedDeltaRotator(rEndRotation, rStartRotation);

	// yaw
	if (rDeltaRotation.Yaw > nMaxRotation) { rDeltaRotation.Yaw = nMaxRotation; }
	else if (rDeltaRotation.Yaw < -nMaxRotation) { rDeltaRotation.Yaw = -nMaxRotation; }

	// pitch
	if (rDeltaRotation.Pitch > nMaxRotation) { rDeltaRotation.Pitch = nMaxRotation; }
	else if (rDeltaRotation.Pitch < -nMaxRotation) { rDeltaRotation.Pitch = -nMaxRotation; }

	// roll
	//if ( rDeltaRotation.Roll > nMaxRotation  ) { rDeltaRotation.Roll = nMaxRotation; }
	//else if ( rDeltaRotation.Roll < -nMaxRotation ) { rDeltaRotation.Roll = -nMaxRotation; }

	return RotatorAdd(rStartRotation, rDeltaRotation);
}*/

/*
# ========================================================================================= #
# Custom
# ========================================================================================= #
*/
class gUnrealInfo
{
public:
	UWorld* GWorld;
	UWorld* GWorldContext;
	UEngine* gEngine;
	APlayerController* gPlayerController;
	UGameplayStatics* gGameplayStatics;
	UKismetMathLibrary* gMath;
	UCanvas* gCanvas;
	UGameViewportClient* gGameViewportClient;
	bool Initialize;
	bool Recoil;
	bool ESP;
	bool TeamFilter;
	int OurTeam;
	DWORD64 gProcessEvent;
	DWORD64 gPostRender;
	gUnrealInfo() {
		GWorld = 0;
		GWorldContext = 0;
		gEngine = 0;
		gPlayerController = 0;
		gMath = 0;
		gCanvas = 0;
		gGameViewportClient = 0;
		Initialize = 0;
		Recoil = 0;
		ESP = 0;
		TeamFilter = 0;
		OurTeam = 0;
		gProcessEvent = 0;
		gPostRender = 0;
	}
};

/*
# ========================================================================================= #
# Useless functions and placeholders
# ========================================================================================= #
*/

