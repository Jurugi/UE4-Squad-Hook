#pragma once
#include <cstdint>
#include <windows.h>
#include <string>

enum EObjectFlags
{
	// Do not add new flags unless they truly belong here. There are alternatives.
	// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
	RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

	// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
	// The garbage collector also tends to look at these.
	RF_Public = 0x00000001,	///< Object is visible outside its package.
	RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
	RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_Transactional = 0x00000008,	///< Object is transactional.
	RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
	RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
	RF_Transient = 0x00000040,	///< Don't save object.

	// This group of flags is primarily concerned with garbage collection.
	RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

	// The group of flags tracks the stages of the lifetime of a uobject
	RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
	RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
	RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
	RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
	RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
	RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
	RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
	RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

	// Misc. Flags
	RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
	RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
	RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
	RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
	RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
	RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
	RF_DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
	RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
	RF_NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
	RF_Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times  // @todo: BP2CPP_remove
	RF_WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
	RF_HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package

	// RF_Garbage and RF_PendingKill are mirrored in EInternalObjectFlags because checking the internal flags is much faster for the Garbage Collector
	// while checking the object flags is much faster outside of it where the Object pointer is already available and most likely cached.
	// RF_PendingKill is mirrored in EInternalObjectFlags because checking the internal flags is much faster for the Garbage Collector
	// while checking the object flags is much faster outside of it where the Object pointer is already available and most likely cached.

	RF_PendingKill = 0x20000000,	///< Objects that are pending destruction (invalid for gameplay but valid objects). This flag is mirrored in EInternalObjectFlags as PendingKill for performance
	RF_Garbage = 0x40000000,	///< Garbage from logical point of view and should not be referenced. This flag is mirrored in EInternalObjectFlags as Garbage for performance
	RF_AllocatedInSharedPage = 0x80000000,	///< Allocated from a ref-counted page shared with other UObjects
};
enum EInternalObjectFlags
{
	None = 0,
	LoaderImport = 1 << 20, ///< Object is ready to be imported by another package during loading
	Garbage = 1 << 21, ///< Garbage from logical point of view and should not be referenced. This flag is mirrored in EObjectFlags as RF_Garbage for performance
	PersistentGarbage = 1 << 22, ///< Same as above but referenced through a persistent reference so it can't be GC'd
	ReachableInCluster = 1 << 23, ///< External reference to object in cluster exists
	ClusterRoot = 1 << 24, ///< Root of a cluster
	Native = 1 << 25, ///< Native (UClass only). 
	Async = 1 << 26, ///< Object exists only on a different thread than the game thread.
	AsyncLoading = 1 << 27, ///< Object is being asynchronously loaded.
	Unreachable = 1 << 28, ///< Object is not reachable on the object graph.
	PendingKill = 1 << 29, ///< Objects that are pending destruction (invalid for gameplay but valid objects). This flag is mirrored in EObjectFlags as RF_PendingKill for performance
	RootSet = 1 << 30, ///< Object will not be garbage collected, even if unreferenced.
	PendingConstruction = 1 << 31, ///< Object didn't have its class constructor called yet (only the UObjectBase one to initialize its most basic members)
	GarbageCollectionKeepFlags = Native | Async | AsyncLoading | LoaderImport,
	MirroredFlags = Garbage | PendingKill, /// Flags mirrored in EObjectFlags
	//~ Make sure this is up to date!
	AllFlags = LoaderImport | Garbage | PersistentGarbage | ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet | PendingConstruction
};

template<typename T>
struct TArray {
	T* Data;
	int Count;
	int Size;
};

struct FString : TArray<wchar_t> {};

struct FNameEntryHandle {
	uint32_t Block = 0;
	uint32_t Offset = 0;

	FNameEntryHandle(uint32_t block, uint32_t offset) : Block(block), Offset(offset) {};
	FNameEntryHandle(uint32_t id) : Block(id >> 16), Offset(id & 65535) {};
	operator uint32_t() const { return (Block << 16 | Offset); }
};

struct FNameEntry {
	uint16_t bIsWide : 1;
	uint16_t LowercaseProbeHash : 5;
	uint16_t Len : 10;
	union
	{
		char AnsiName[1024];
		wchar_t	WideName[1024];
	};

	inline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	inline const wchar_t* GetWideName() const
	{
		return WideName;
	}

	std::string String();
	char* Char();
};

struct FNamePool
{
	BYTE Lock[8];
	uint32_t CurrentBlock;
	uint32_t CurrentByteCursor;
	BYTE* Blocks[8192];

	FNameEntry* GetEntry(FNameEntryHandle handle) const;
};

struct FName {
	uint32_t Index;
	uint32_t Number;

	string GetName();
	char* GetNameChar();
};

struct UObject {
	void** VFTable;
	uint32_t ObjectFlags;
	uint32_t InternalIndex;
	struct UClass* ClassPrivate;
	FName NamePrivate;
	UObject* OuterPrivate;

	string GetName();
	char* GetNameChar();
	string GetFullName();
	char* GetFullNameChar();

	bool IsA(void* cmp);
	void ProcessEvent(void* fn, void* parms);
	DWORD64 GetProcessEventAddress();
	bool HasAnyFlags(EObjectFlags FlagsToCheck);
	bool IsPendingKill(); // note EObjectFlags::RF_PendingKill is same as EInternalObjectFlags::PendingKill in literal flag value so it doesn't matter which one is used
	bool IsValidCustom();
};

// Class CoreUObject.Interface
// Size: 0x28 (Inherited: 0x28)
struct UInterface : UObject {
};

// Class CoreUObject.TextBuffer
// Size: 0x50 (Inherited: 0x28)
struct UTextBuffer : UObject {
	char pad_28[0x28]; // 0x28(0x28)
};

// Class CoreUObject.Field
// Size: 0x30 (Inherited: 0x28)
struct UField : UObject {
	class UField* Next; // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
};

// Class CoreUObject.Struct
// Size: 0x98 (Inherited: 0x30)
struct UStruct : UField {
	char pad0[0x10];		// 0x30
	UStruct* SuperField;	// 0x40
	char pad1[0x8];			// 0x48
	int32_t PropertySize;	// 0x50
	int32_t MinAlignment;	// 0x54
	char pad2[0x10];		// 0x58
	UField* Children;		// 0x68
};

// Class CoreUObject.ScriptStruct
// Size: 0xa8 (Inherited: 0x98)
struct UScriptStruct : UStruct {
	char pad_98[0x10]; // 0x98(0x10)
};

// Class CoreUObject.Package
// Size: 0x90 (Inherited: 0x28)
struct UPackage : UObject {
	char pad_28[0x68]; // 0x28(0x68)
};

// Class CoreUObject.Class
// Size: 0x200 (Inherited: 0x98)
struct UClass : UStruct {
	
};

class UProperty : public UField
{
public:
	int32_t ArrayDim;			// 0x30
	int32_t ElementSize;		// 0x34
	DWORD64 PropertyFlags;		// 0x38
	int32_t PropertySize;		// 0x40	
	int32_t Offset;				// 0x44
	char UnknownData01[0x28];	// 0x48
};

// Class CoreUObject.Function
// Size: 0xc8 (Inherited: 0x98)
struct UFunction : UStruct {
	int32_t FunctionFlags; // 0x98(0x30)
	char pad_98[0x24];
	void* Func; // 0xC0
};

// Class CoreUObject.DelegateFunction
// Size: 0xc8 (Inherited: 0xc8)
struct UDelegateFunction : UFunction {
};

struct TUObjectArray {
	BYTE** Objects;
	BYTE* PreAllocatedObjects;
	uint32_t MaxElements;
	uint32_t NumElements;
	uint32_t MaxChunks;
	uint32_t NumChunks;

	UObject* GetObjectPtr(uint32_t id) const;
	UObject* FindObject(const char* name) const;
};


// Class Engine.Canvas
// Size: 0x2c0 (Inherited: 0x28)
struct UCanvas : UObject {
	char pad_28[0x298]; //0x28(0x298)
	struct FVector K2_Project(struct FVector WorldLocation); // Function Engine.Canvas.K2_Project // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x290aad0
	//void K2_DrawText(void* RenderFont, FString& RenderText, FVector2D& ScreenPosition, FVector2D& Scale, FLinearColor& RenderColor, float Kerning, FLinearColor& ShadowColor, FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor& OutlineColor); // Function Engine.Canvas.K2_DrawText
	void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor); // Function Engine.Canvas.K2_DrawBox // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2909c00
};

// Class Engine.ActorComponent
// Size: 0xd8 (Inherited: 0x28)
struct UActorComponent : UObject {
	char pad_28[0xB0]; // 0x28
};

// Class Engine.SceneComponent
// Size: 0x220 (Inherited: 0xd8)
struct USceneComponent : UActorComponent {
	char pad_118[0x6C]; // 0xD8
	FVector RelativeLocation; // 0x144(0x0c) // "Note that if the component doesn’t have a parent, then the relative location is the same as world location."
	FRotator RelativeRotation; // 0x150(0x0c)
	FVector RelativeScale3D; // 0x15c(0x0c)
	FVector ComponentVelocity; // 0x168(0x0c)
	char pad_174[0xAC]; // 0x174
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x5c0 (Inherited: 0x00)
struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	float DesiredFOV; // 0x1c(0x04)
	float OrthoWidth; // 0x20(0x04)
	float OrthoNearClipPlane; // 0x24(0x04)
	float OrthoFarClipPlane; // 0x28(0x04)
	float AspectRatio; // 0x2c(0x04)
	char bConstrainAspectRatio : 1; // 0x30(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x30(0x01)
	char pad_30_2 : 6; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	char pad_34[0x58C]; // 0x34(0x01)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x5d0 (Inherited: 0x00)
struct FCameraCacheEntry {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x5c0)
};

// Class Engine.Actor
// Size: 0x248 (Inherited: 0x28)
struct AActor : UObject {
	char pad[0x120];
	struct APawn* Instigator; // 0x148(0x08)
	char padding_150[0x10]; // 0x150
	USceneComponent* RootComponent; // 0x160(0x08)
	char pad2[0xE0]; // 0x168 to 0x248
	FVector K2_GetActorLocation(); // Function Engine.Actor.K2_GetActorLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x28d2ae0
	//void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // Function Engine.Actor.GetActorEyesViewPoint // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x28d0520
};

// Class Engine.PlayerCameraManager
// Size: 0x2700 (Inherited: 0x248)
struct APlayerCameraManager : AActor {
	struct APlayerController* PCOwner; // 0x248(0x08)
	struct USceneComponent* TransformComponent; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	float DefaultFOV; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	float DefaultOrthoWidth; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	float DefaultAspectRatio; // 0x270(0x04)
	char pad_274[0x17CC]; // 0x274(0x4c)
	struct FCameraCacheEntry CameraCachePrivate; // 0x1a40(0x5d0)
	struct FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2010(0x5d0)
	char pad_25E0[0x120];
};

// Class Engine.Controller
// Size: 0x2c0 (Inherited: 0x248)
struct AController : AActor {
	char pad_248[0x78]; // 0x248(0x78)
};

// Class Engine.Pawn
// Size: 0x2a8 (Inherited: 0x248)
struct APawn : AActor {
	char padding_248[0x20]; // 0x248
	struct APlayerState* PlayerState; // 0x268(0x08)
	char padding_270[0x10]; // 0x270
	AController* Controller; // 0x280(0x08)
	char padding_288[0x20]; // 0x288
};

// Class Engine.Character
// Size: 0x660 (Inherited: 0x2a8)
struct ACharacter : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x2a8(0x08)
	char padding_2a8[0x3B0]; // 0x2a8
};

// Class Squad.SQEquipableItem
// Size: 0x480 (Inherited: 0x248)
struct ASQEquipableItem : AActor {
	char pad_248[0x160]; // 0x248
	APlayerController* LocalPlayerController; // 0x3a8(0x08)
	char pad_3B0[0x90]; // 0x3B0
	struct USQAnimInstanceSoldier1P* CachedSoldier1pAnimInstance; // 0x440(0x08)
	char pad_0x448[0x38]; // 0x448
};


// Class Squad.SQPawnInventoryComponent
// Size: 0x2e0 (Inherited: 0xd8)
struct USQPawnInventoryComponent : UActorComponent {
	char padding_d8[0x90]; // 0xD8
	ASQEquipableItem* CurrentWeapon; // 0x168(0x08)
	char padding_170[0x170]; // 0x170
};

// Class Squad.SQSoldier
// Size: 0x1ee0 (Inherited: 0x660)
struct ASQSoldier : ACharacter {
	char pad_660[0x15B4]; // 0x660
	char bIsDying : 1; // 0x1c14(0x01)
	char pad_1C14_1 : 1; // 0x1c14(0x01)
	char bIsBleeding : 1; // 0x1c14(0x01)
	char bIsWounded : 1; // 0x1c14(0x01)
	char pad_1C14_4 : 1; // 0x1c14(0x01)
	char bAllowWoundedState : 1; // 0x1c14(0x01)
	char pad_1C14_6 : 2; // 0x1c14(0x01)
	char pad_1C15[0x3]; // 0x1c15(0x03)
	float Health; // 0x1c18(0x04)
	char pad_1C1C[0x29C]; // 0x660
	USQPawnInventoryComponent* InventoryComponent; // 0x1eb8(0x08)
	char pad_1EC0[0x20]; // 0x1ec0(0x08)

	int GetTeam();
	bool IsAlive();
};


// Class Engine.Info
// Size: 0x248 (Inherited: 0x248)
struct AInfo : AActor {};

// Class Squad.SQTeamState
// Size: 0x3f8 (Inherited: 0x248)
struct ASQTeamState : AInfo {
	char pad_248[0x18]; // 0x248(0x04)
	int ID; // 0x260(0x04)
	char padding_264[0x194]; // 0x264
};

// Class Engine.PlayerController
// Size: 0x598 (Inherited: 0x2c0)
struct APlayerController : AController {
	struct UPlayer* Player; // 0x2c0(0x08)
	APawn* AcknowledgedPawn; // 0x2c8(0x08)
	struct UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2d0(0x08)
	struct AHUD* MyHUD; // 0x2d8(0x08)
	APlayerCameraManager* PlayerCameraManager; // 0x2e0(0x08)
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2e8(0x08)
	char pad_2F0[0x2A8]; //0x2f0(0x2A8)
};

// Class Squad.SQPlayerController
// Size: 0xa70 (Inherited: 0x598)
struct ASQPlayerController : APlayerController {
	char pad_598[0x10]; // 0x598
	struct ASQTeamState* TeamState; // 0x5a8(0x08)
	struct ASQTeamStatePrivate* PrivateTeamState; // 0x5b0(0x08)
	char pad_5b8[0x4B8]; // 0x5b8
};

// Class Engine.Player
// Size: 0x48 (Inherited: 0x28)
struct UPlayer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	APlayerController* PlayerController; // 0x30(0x08)
	int CurrentNetSpeed; // 0x38(0x04)
	int ConfiguredInternetSpeed; // 0x3c(0x04)
	int ConfiguredLanSpeed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class Engine.LocalPlayer
// Size: 0x280 (Inherited: 0x48)
struct ULocalPlayer : UPlayer {
	char pad_48[0x28]; // 0x48(0x28)
	struct UGameViewportClient* ViewportClient; // 0x70(0x08)
	char pad_78[0x1c]; // 0x78(0x1c)
	char pad_95[0x4]; // 0x94(0x04)
	struct APlayerController* PendingLevelPlayerControllerClass; // 0x98(0x08)
	char bSentSplitJoin : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3f]; // 0xa1(0x3f)
	int ControllerId; // 0xe0(0x04)
	char pad_E4[0x19c]; // 0xe4(0x19c)
};

// Class Engine.Level
// Size: 0x280 (Inherited: 0x28)
struct ULevel : UObject {
	char pad_1[0x70]; // 0x28
	TArray<UPlayer*> Actors1; // 0x98 // a table of something right before other one
	TArray<UPlayer*> Actors2; // 0xA8 // a table that isn't very large but might be valid
	TArray<UPlayer*> Actors3; // 0xB8 // large table of who knows what or something else
};

// Class Engine.GameInstance
// Size: 0x168 (Inherited: 0x28)
struct UGameInstance : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	TArray<ULocalPlayer*> LocalPlayers; // 0x38(0x10)
	char pad_60[0x120]; // 0x48(0x120)
};

// Class Engine.PlayerState
// Size: 0x370 (Inherited: 0x248)
struct APlayerState : AInfo {
	char padding_248[0x88]; //0x248
	APawn* PawnPrivate; // 0x2d0(0x08)
	char pad_2D8[0x78]; // 0x2d8(0x78)
	struct FString PlayerNamePrivate; // 0x350(0x10)
	char pad_360[0x10]; // 0x360(0x10)
};

// Class Squad.SQPlayerState
// Size: 0x7d8 (Inherited: 0x370)
struct ASQPlayerState : APlayerState {
	char pad_370[0xB0]; // 0x370(0x20)
	int TeamId; // 0x420(0x04)
	char pad_424[0x2FC]; // 0x424
	struct ASQTeamState* TeamState; // 0x720(0x08)
	char pad_728[0x8]; // 0x728
	struct ASQSoldier* Soldier; // 0x730(0x08)
	struct APawn* CurrentPawn; // 0x738(0x08)
	struct FName CurrentRoleId; // 0x740(0x08)
	struct FName DeployRoleId; // 0x748(0x08)
	struct USQRoleSettings* CurrentRole; // 0x750(0x08)
	struct USQRoleSettings* DeployRole; // 0x758(0x08)
	char pad_760[0x78]; // 0x760(0x18)
};

// Class Engine.GameStateBase
// Size: 0x288 (Inherited: 0x248)
struct AGameStateBase : AInfo {
	struct AGameModeBase* GameModeClass; // 0x248(0x08)
	struct AGameModeBase* AuthorityGameMode; // 0x250(0x08)
	struct ASpectatorPawn* SpectatorClass; // 0x258(0x08)
	struct TArray<struct APlayerState*> PlayerArray; // 0x260(0x10)
	bool bReplicatedHasBegunPlay; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float ReplicatedWorldTimeSeconds; // 0x274(0x04)
	float ServerWorldTimeSecondsDelta; // 0x278(0x04)
	float ServerWorldTimeSecondsUpdateFrequency; // 0x27c(0x04)
	char pad_280[0x8]; // 0x280(0x08)
};

// Class Engine.World
// Size: 0x638 (Inherited: 0x28)
struct UWorld : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	ULevel* PersistentLevel; // 0x30(0x08)
	char pad_38[0xF8]; // 0x38
	AGameStateBase* GameState; // 0x130(0x08)
	char pad_138[0x38]; // 0x138;
	UGameInstance* OwningGameInstance; // 0x170(0x08) 
	char pad_178[0x4C0]; // 0x178
};

// Class Engine.BlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintFunctionLibrary : UObject {
};

// Class Engine.GameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameplayStatics : UBlueprintFunctionLibrary {
	void GetAllActorsOfClass(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>* OutActors); // Function Engine.GameplayStatics.GetAllActorsOfClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x2933920
	void GetAllActorsOfClasstest2(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>& OutActors);
};

// Class Engine.KismetMathLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetMathLibrary : UBlueprintFunctionLibrary {
	float Abs(float A);
	float Dot_VectorVector(FVector A, FVector B);
	void BreakRotIntoAxes(FRotator& InRot, FVector& X, FVector& Y, FVector& Z);
};

// Class Engine.Engine
// Size: 0xdb8 (Inherited: 0x28)
struct UEngine : UObject {
	char pad_28[0xd90];
};

// Class Engine.ScriptViewportClient
// Size: 0x38 (Inherited: 0x28)
struct UScriptViewportClient : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Engine.GameViewportClient
// Size: 0x2e8 (Inherited: 0x38)
struct UGameViewportClient : UScriptViewportClient {
	char pad_38[0x8]; // 0x38(0x08)
	struct UConsole* ViewportConsole; // 0x40(0x08)
	struct TArray<struct FDebugDisplayProperty> DebugProperties; // 0x48(0x10)
	char pad_58[0x20]; // 0x58(0x20)
	struct UWorld* World; // 0x78(0x08)
	struct UGameInstance* GameInstance; // 0x80(0x08)
	char pad_88[0x260]; // 0x88(0x260)
};

/* Function */
extern FNamePool* NamePoolData;
extern TUObjectArray* ObjObjects;

FNameEntry* FNamePool::GetEntry(FNameEntryHandle handle) const
{
	return reinterpret_cast<FNameEntry*>(Blocks[handle.Block] + 2 * static_cast<uint64_t>(handle.Offset));
}

std::string FNameEntry::String()
{
	if (bIsWide) { return std::string(); }
	return { AnsiName, Len };
}

char* FNameEntry::Char()
{
	//char* Ret = (char*)malloc(Len+1);
	char Ret[1024] = { 0 };
	if (Ret)
	{
		//add_log("Finding %i-%S", Len, GetWideName());
		memset(Ret, 0, Len);
		memcpy_s(Ret, Len+1, GetAnsiName(), Len);
		size_t output_size;
		if (bIsWide)
		{
			wcstombs_s(&output_size, Ret, (size_t)Len, GetWideName(), (size_t)Len);
		}
		Ret[Len] = '\0'; // need to add terminator or it's useless, (it seems these usually have none in memory which is the secret here)
		return Ret;
	}
	else return (char*)"";
}

char* FName::GetNameChar()
{
	auto entry = NamePoolData->GetEntry(Index);
	auto name = entry->Char();
	auto len = entry->Len;
	if (name && Number > 0) sprintf(name, "%s_%i\0", name, Number); //sprintf_s(name, len+15, "%s_%i", name, Number); 
	for (int i = len; i > 0; i--) { if (name[i] == '/') { name = (char*)name + i + 1; break; } }
	return name;
}

char* UObject::GetNameChar()
{
	return NamePrivate.GetNameChar();
}

char* UObject::GetFullNameChar()
{
	char cOutBuffer[1024];

	if (ClassPrivate && OuterPrivate)
	{
		if (OuterPrivate->OuterPrivate)
		{
			strcpy_s(cOutBuffer, ClassPrivate->GetNameChar());
			strcat_s(cOutBuffer, " ");
			strcat_s(cOutBuffer, OuterPrivate->OuterPrivate->GetNameChar());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, OuterPrivate->GetNameChar());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, GetNameChar());
		}
		else
		{
			strcpy_s(cOutBuffer, ClassPrivate->GetNameChar());
			strcat_s(cOutBuffer, " ");
			strcat_s(cOutBuffer, OuterPrivate->GetNameChar());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, GetNameChar());
		}

		return cOutBuffer;
	}

	strcat_s(cOutBuffer, ClassPrivate->GetNameChar());
	strcat_s(cOutBuffer, " ");
	strcat_s(cOutBuffer, GetNameChar());
	return cOutBuffer;
}

string FName::GetName()
{
	auto entry = NamePoolData->GetEntry(Index);
	auto name = entry->String();
	if (Number > 0)
	{
		name += '_' + std::to_string(Number);
	}
	auto pos = name.rfind('/');
	if (pos != std::string::npos)
	{
		name = name.substr(pos + 1);
	}
	return name;
}

string UObject::GetName()
{
	return NamePrivate.GetName();
}

string UObject::GetFullName()
{
	std::string name;
	for (auto outer = OuterPrivate; outer; outer = outer->OuterPrivate) { name = outer->GetName() + "." + name; }
	name = ClassPrivate->GetName() + " " + name + this->GetName();
	return (char*)name.c_str();
}

bool UObject::IsA(void* cmp)
{
	// added checks because, if there is a deleted object or messed up object, it would proceed to read the invalid fields and crash..
	for (auto super = ClassPrivate; super && super->IsValidCustom(); super = static_cast<UClass*>(super->SuperField)) {
		if (super == cmp) { return true; }
	}
	return false;
}

void UObject::ProcessEvent(void* fn, void* parms)
{
	auto vtable = *reinterpret_cast<void***>(this);
	reinterpret_cast<void(*)(void*, void*, void*)>(vtable[66])(this, fn, parms); // 0x210
}

DWORD64 UObject::GetProcessEventAddress()
{
	auto vtable = *reinterpret_cast<void***>(this);
	return (DWORD64)(vtable[66]);
}

bool UObject::HasAnyFlags(EObjectFlags FlagsToCheck)
{
	return (ObjectFlags & FlagsToCheck) != 0;
}

bool UObject::IsPendingKill() // note EObjectFlags::RF_PendingKill is same as EInternalObjectFlags::PendingKill in literal flag value so it doesn't matter which one is used
{
	if (HasAnyFlags(RF_PendingKill) || HasAnyFlags(RF_Garbage)) return true;
	return false;
}

bool UObject::IsValidCustom() // highly optimized ways of checking for a garbage object, where using IsA or other functions might simply crash it, without using the flags which are not even usable on such nonobjects
{
	//if (*(DWORD*)((DWORD64)this) < 0x1000 && *(DWORD*)((DWORD64)(this) + 0x4) < 0x1000) return false; // quick check vtable ptr is valid by top and bottom integers must >0x1000 (not just integers or invalid)
	DWORD64 ClassValue = (*(DWORD64*)((DWORD64)(this) + 0x10)); // read once Obj->ClassPrivate
	//if (ClassValue == 0) return false; // no Obj->ClassPrivate ptr, this must be some base obj or not valid for our purposes
	if (ClassValue <= 0x100000000) return false; // no Obj->ClassPrivate ptr or the value is impossiblely low for a 64bit ptr (have seen rare values like 30000000 or just DWORD values that are high)
	if ((ClassValue & 7) != 0) return false; // check Obj->ClassPrivate ptr as a valid pointer by divisiblity
	if ((ClassValue >> 32) < 0x100 || (ClassValue & 0xFFFFFFFF) == 0) return false;
	DWORD FNameIndex = (*(DWORD*)((DWORD64)(this) + 0x18));
	if (FNameIndex > 7000000 || FNameIndex == 0) return false; // way out of bounds or invalid
	DWORD64 SuperFieldValue = (*(DWORD64*)((DWORD64)(this) + 0x40)); // read once Obj->SuperField
	if ((SuperFieldValue & 7) != 0 || (SuperFieldValue >> 32) < 0x100) return false; // check Superfield validity, because sometimes the Class value is actually still valid, but SuperField is not
	// We can also check if the Vtable 1st func is pointing to within the module region or just a fast check there are at least 4 vtable addresses filled (all of them should be filled) might be best check out of all of these
	return true;
}

UObject* TUObjectArray::GetObjectPtr(uint32_t id) const
{
	if (id >= NumElements) return nullptr;
	uint64_t chunkIndex = id / 65536;
	if (chunkIndex >= NumChunks) return nullptr;
	auto chunk = Objects[chunkIndex];
	if (!chunk) return nullptr;
	uint32_t withinChunkIndex = id % 65536 * 24;
	auto item = *reinterpret_cast<UObject**>(chunk + withinChunkIndex);
	return item;
}

/*UObject* TUObjectArray::FindObject(const char* name) const
{
	for (auto i = 0u; i < NumElements; i++)
	{
		auto object = GetObjectPtr(i);
		auto fname = object->GetFullName();
		//add_log("Finding (%i): %s", i, fname.c_str());
		if (object && fname == name) { return object; }
	}
	return nullptr;
}*/

UObject* TUObjectArray::FindObject(const char* name) const
{
	for (auto i = 0u; i < NumElements; i++)
	{
		auto object = GetObjectPtr(i);
		auto fname = object->GetFullNameChar();
		if (object && !strcmp(fname,name)) { return object; }
	}
	return nullptr;
}

// Required Function calls
void UGameplayStatics::GetAllActorsOfClass(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>* OutActors)
{
	static auto fn = ObjObjects->FindObject("Function Engine.GameplayStatics.GetAllActorsOfClass");
	struct UGameplayStatics_GetAllActorsOfClass_Params
	{
		UObject* WorldContextObject;               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		UClass* ActorClass;                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TArray<class AActor*> OutActors;                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	};

	UGameplayStatics_GetAllActorsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	ProcessEvent(fn, &params);

	if(OutActors != nullptr) *OutActors = params.OutActors;
}
void UGameplayStatics::GetAllActorsOfClasstest2(UObject* WorldContextObject, UClass* ActorClass, TArray<AActor*>& OutActors)
{
	static auto fn = ObjObjects->FindObject("Function Engine.GameplayStatics.GetAllActorsOfClass");
	struct UGameplayStatics_GetAllActorsOfClass_Params
	{
		UObject* WorldContextObject;               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		UClass* ActorClass;                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
		TArray<AActor*> OutActors;                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	};

	UGameplayStatics_GetAllActorsOfClass_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.OutActors = OutActors;

	ProcessEvent(fn, &params);

	OutActors = params.OutActors;
}
FVector AActor::K2_GetActorLocation()
{
	static auto fn = ObjObjects->FindObject("Function Engine.Actor.K2_GetActorLocation");
	struct {
		FVector ReturnValue;
	} parms;
	ProcessEvent(fn, &parms);
	return parms.ReturnValue;
}
FVector UCanvas::K2_Project(FVector WorldLocation)
{
	static auto fn = ObjObjects->FindObject("Function Engine.Canvas.K2_Project");
	if (fn)
	{
		struct {
			FVector WorldLocation;
			FVector ReturnValue;
		} parms;
		ProcessEvent(fn, &parms);
		return parms.ReturnValue;
	}
	else 
	{
		add_log("Could not find function Function Engine.Canvas.K2_Project");
		fn = ObjObjects->FindObject("Function Engine.Canvas.K2_Project");
	}
}

void UCanvas::K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor)
{
	static auto fn = ObjObjects->FindObject("Function Engine.Canvas.K2_DrawBox");
	if (fn)
	{
		struct {
			FVector2D ScreenPosition;
			FVector2D ScreenSize;
			float Thickness;
			FLinearColor RenderColor;
		} params;
		params = { ScreenPosition, ScreenSize, Thickness, RenderColor };
		ProcessEvent(fn, &params);
	}
	else
	{
		add_log("Could not find function Function Engine.Canvas.K2_DrawBox");
		fn = ObjObjects->FindObject("Function Engine.Canvas.K2_DrawBox");
	}
}
float UKismetMathLibrary::Abs(float A) // this works fine even externally, oddly enough, only using as a testbed function to call
{
	static auto fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.Abs");
	if (fn)
	{
		struct {
			float A;
			float ReturnValue;
		} parms;
		parms = { A };
		ProcessEvent(fn, &parms);
		return parms.ReturnValue;
	}
	else
	{
		add_log("Could not find function Function Engine.KismetMathLibrary.Abs");
		fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.Abs");
	}
}

float UKismetMathLibrary::Dot_VectorVector(FVector A, FVector B)
{
	static auto fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.Dot_VectorVector");
	if (fn)
	{
		struct {
			FVector A;
			FVector B;
			float ReturnValue;
		} params;
		params = { A, B };
		ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	else
	{
		add_log("Could not find function Function Engine.KismetMathLibrary.Dot_VectorVector");
		fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.Dot_VectorVector");
	}
}

void UKismetMathLibrary::BreakRotIntoAxes(FRotator& InRot, FVector& X, FVector& Y, FVector& Z)
{
	static auto fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.BreakRotIntoAxes");
	if (fn)
	{
		add_log("Calling Function Engine.KismetMathLibrary.BreakRotIntoAxes 0x%p", fn);
		struct {
			FRotator InRot;
			FVector X;
			FVector Y;
			FVector Z;
		} params;
		params = { InRot };
		ProcessEvent(fn, &params);
		X = params.X;
		Y = params.Y;
		Z = params.Z;
	}
	else 
	{
		add_log("Could not find function Function Engine.KismetMathLibrary.BreakRotIntoAxes");
		fn = ObjObjects->FindObject("Function Engine.KismetMathLibrary.BreakRotIntoAxes");
	}
}

int ASQSoldier::GetTeam()
{
	static auto fn = ObjObjects->FindObject("Function Squad.SQSoldier.GetTeam");
	if (fn)
	{
		add_log("Calling Function Engine.KismetMathLibrary.BreakRotIntoAxes 0x%p", fn);
		struct {
			int ReturnValue;
		} params;
		params = { };
		ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	else
	{
		add_log("Could not find function Function Squad.SQSoldier.GetTeam");
		fn = ObjObjects->FindObject("Function Squad.SQSoldier.GetTeam");
	}
}

bool ASQSoldier::IsAlive()
{
	static auto fn = ObjObjects->FindObject("Function Squad.SQSoldier.IsAlive");
	if (fn)
	{
		add_log("Calling Function Squad.SQSoldier.IsAlive 0x%p", fn);
		struct {
			bool ReturnValue;
		} params;
		params = { };
		ProcessEvent(fn, &params);
		return params.ReturnValue;
	}
	else
	{
		add_log("Could not find function Function Squad.SQSoldier.IsAlive");
		fn = ObjObjects->FindObject("Function Squad.SQSoldier.IsAlive");
	}
}

// Optional/Recoil related classes

// Class Engine.CameraShake
// Size: 0x160 (Inherited: 0x28)
struct UCameraShake : UObject {
	char pad_28[0x120]; // 0x28(0x120)
	float ShakeScale; // 0x148(0x04) // ShakeScale. The overall scale to apply to the shake
	char pad_158[0x14]; // 0x14c(0x08)
};

// Class Squad.SQAnimInstanceSoldier1P
// Size: 0xbe0 (Inherited: 0x420)
struct USQAnimInstanceSoldier1P : UObject {
	char padding_0x28[0x900]; // 0x28
	UCameraShake* FireShake; // 0x928(0x08)
	int WeaponSpringSide; // 0x930(0x04) 
	float WeaponSpringStiffness; // 0x934(0x04) // Let's just set all these floats to 0 from 0x934 to 0xAFC (size 1C8) otherwise this will be tedious to set these all
	float WeaponSpringCriticalDampingFactor; // 0x938(0x04)
	float WeaponSpringMass; // 0x93c(0x04)
	float WeaponSpringFactor; // 0x940(0x04)
	float WeaponMeshSpringLocDelayFactor; // 0x944(0x04)
	float WeaponSpringClamp; // 0x948(0x04)
	float WeaponMeshSpringRotDelayFactor; // 0x94c(0x04)
	float AddMoveDeviation; // 0x950(0x04)
	float MoveDeviationFactorRelease; // 0x954(0x04)
	float MaxMoveDeviationFactor; // 0x958(0x04)
	float MinMoveDeviationFactor; // 0x95c(0x04)
	float FullStaminaDeviationFactor; // 0x960(0x04)
	float LowStaminaDeviationFactor; // 0x964(0x04)
	float AddShotDeviationFactor; // 0x968(0x04)
	float AddShotDeviationFactorAds; // 0x96c(0x04)
	float ShotDeviationFactorRelease; // 0x970(0x04)
	float MinShotDeviationFactor; // 0x974(0x04)
	float MaxShotDeviationFactor; // 0x978(0x04)
	float DeviationVisuFbInterpSpeed_YZ; // 0x97c(0x04)
	float DeviationVisuFbMax; // 0x980(0x04)
	float DeviationVisuFbInterpSpeed_Final; // 0x984(0x04)
	float MinBipodAdsDeviation; // 0x988(0x04) // Some active animation/moving values to set low (size 16*4)
	float MinBipodDeviation; // 0x98c(0x04)
	float MinProneAdsDeviation; // 0x990(0x04)
	float MinProneDeviation; // 0x994(0x04)
	float MinCrouchAdsDeviation; // 0x998(0x04)
	float MinCrouchDeviation; // 0x99c(0x04)
	float MinStandAdsDeviation; // 0x9a0(0x04) 
	float MinStandDeviation; // 0x9a4(0x04)
	float MinProneTransitionDeviation; // 0x9a8(0x04)
	float MaxMoveRecoilFactor; // 0x9ac(0x04) 
	float AddMoveRecoil; // 0x9b0(0x04)
	float MinMoveRecoilFactor; // 0x9b4(0x04)
	float MoveRecoilFactorRelease; // 0x9b8(0x04)
	float FullStaminaRecoilFactor; // 0x9bc(0x04)
	float LowStaminaRecoilFactor; // 0x9c0(0x04)
	float RecoilCameraOffsetFactor; // 0x9c4(0x04)
	float RecoilLofCameraOffsetLimit; // 0x9c8(0x04)
	float RecoilLofAttackInterpSpeed; // 0x9cc(0x04)
	float RecoilCanReleaseInterpSpeed; // 0x9d0(0x04)
	float RecoilCameraOffsetInterpSpeed; // 0x9d4(0x04)
	float RecoilLofReleaseInterpSpeed; // 0x9d8(0x04)
	float WeapRecoilRelLocFactor; // 0x9dc(0x04)
	float RecoilCameraShotInterpSpeed; // 0x9e0(0x04)
	float RecoilAdsCameraShotInterpSpeed; // 0x9e4(0x04)
	FVector ProneAdsRecoilMean; // 0x9e8(0x0c) // Some active recoil values to set (
	FVector ProneAdsRecoilSigma; // 0x9f4(0x0c)
	FVector ProneRecoilMean; // 0xa00(0x0c)
	FVector ProneRecoilSigma; // 0xa0c(0x0c)
	FVector CrouchAdsRecoilMean; // 0xa18(0x0c)
	FVector CrouchAdsRecoilSigma; // 0xa24(0x0c)
	FVector CrouchRecoilMean; // 0xa30(0x0c)
	FVector CrouchRecoilSigma; // 0xa3c(0x0c)
	FVector StandAdsRecoilMean; // 0xa48(0x0c)
	FVector StandAdsRecoilSigma; // 0xa54(0x0c)
	FVector StandRecoilMean; // 0xa60(0x0c)
	FVector StandRecoilSigma; // 0xa6c(0x0c)
	FVector ProneTransitionRecoilMean; // 0xa78(0x0c)
	FVector ProneTransitionRecoilSigma; // 0xa84(0x0c)
	FVector BipodAdsRecoilMean; // 0xa90(0x0c)
	FVector BipodAdsRecoilSigma; // 0xa9c(0x0c)
	FVector BipodRecoilMean; // 0xaa8(0x0c)
	FVector BipodRecoilSigma; // 0xab4(0x0c)
	float FullStaminaSwayFactor; // 0xac0(0x04) // Active sway values here
	float LowStaminaSwayFactor; // 0xac4(0x04)
	float AddMoveSway; // 0xac8(0x04)
	float MaxMoveSwayFactor; // 0xacc(0x04)
	float MinMoveSwayFactor; // 0xad0(0x04)
	float MoveSwayFactorRelease; // 0xad4(0x04)
	float SwayInterpSpeed_YZ; // 0xad8(0x04)
	float SwayInterpSpeed_Final; // 0xadc(0x04)
	float ProneAdsSwayMin; // 0xae0(0x04)
	float ProneSwayMin; // 0xae4(0x04)
	float CrouchAdsSwayMin; // 0xae8(0x04)
	float CrouchSwayMin; // 0xaec(0x04)
	float StandAdsSwayMin; // 0xaf0(0x04)
	float StandSwayMin; // 0xaf4(0x04)
	float ProneTransitionSwayMin; // 0xaf8(0x04)
	float HoldingBreathSwayFactor; // 0xafc(0x04)
	float CustomSpeed; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct USQSuppressionInfo* LastSuppressionInfoClass; // 0xb08(0x08)
	char pad_B10[0xD0]; // 0xb10
};



