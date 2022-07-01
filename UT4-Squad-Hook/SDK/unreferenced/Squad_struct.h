// Enum Squad.ESQBuildState
enum class ESQBuildState : uint8 {
	Completed = 0,
	HalfBuilt = 1,
	Unbuilt = 2,
	ESQBuildState_MAX = 3
};

// Enum Squad.ESQSoldierSeatState
enum class ESQSoldierSeatState : uint8 {
	Locked = 0,
	LockedWithWeapon = 1,
	Hidden = 2,
	None = 3,
	ESQSoldierSeatState_MAX = 4
};

// Enum Squad.ESQDraggingStatus
enum class ESQDraggingStatus : uint8 {
	None = 0,
	Dragging = 1,
	BeingDragged = 2,
	ESQDraggingStatus_MAX = 3
};

// Enum Squad.ESQListenerType
enum class ESQListenerType : uint8 {
	Default = 0,
	Soldier = 1,
	TurretOpenAir = 2,
	TurretLight = 3,
	TurretHeavy = 4,
	TurretArmored = 5,
	VehicleOpenAir = 6,
	VehicleLight = 7,
	VehicleHeavy = 8,
	VehicleArmored = 9,
	ESQListenerType_MAX = 10
};

// Enum Squad.ESQInteractVisibility
enum class ESQInteractVisibility : uint8 {
	Invisible = 0,
	Team = 1,
	AlwaysVisible = 2,
	ESQInteractVisibility_MAX = 3
};

// Enum Squad.ESQEmotes
enum class ESQEmotes : uint8 {
	None = 0,
	HandSignalAttack = 1,
	HandSignalBuild = 2,
	HandSignalDefend = 3,
	HandSignalMove = 4,
	HandSignalRally = 5,
	HandSignalObserve = 6,
	HandActionRearm = 7,
	HandActionLoadup = 8,
	HandActionUnload = 9,
	MAX_Visible = 10,
	Custom = 11,
	MAX = 12
};

// Enum Squad.EClimbState
enum class EClimbState : uint8 {
	Interpolating = 0,
	RequiredOutro = 1,
	Outro = 2,
	End = 3,
	None = 4,
	EClimbState_MAX = 5
};

// Enum Squad.EClimbType
enum class EClimbType : uint8 {
	None = 0,
	OverLow = 1,
	OverMid = 2,
	OntoLow = 3,
	OntoMid = 4,
	OntoHigh = 5,
	MAX = 6
};

// Enum Squad.ESQTeam
enum class ESQTeam : uint8 {
	Team_Neutral = 0,
	Team_One = 1,
	Team_Two = 2,
	Team_Max = 3
};

// Enum Squad.ESQBuffTypes
enum class ESQBuffTypes : uint8 {
	ProtectionZone = 0,
	PendingDeath = 1,
	NoFallDamage = 2,
	StagingPhase = 3,
	Max = 4
};

// Enum Squad.ESQCommandOptionState
enum class ESQCommandOptionState : uint8 {
	Ready = 0,
	Enroute = 1,
	Active = 2,
	Cooldown = 3,
	None = 4,
	ESQCommandOptionState_MAX = 5
};

// Enum Squad.ESQNotificationTypes
enum class ESQNotificationTypes : uint8 {
	None = 0,
	Error = 1,
	Warning = 2,
	Message = 3,
	Negative = 4,
	Positive = 5,
	Commander = 6,
	Team = 7,
	Squad = 8,
	Fireteam = 9,
	GameMode = 10,
	MAX = 11
};

// Enum Squad.ESQChat
enum class ESQChat : uint8 {
	Unknown = 0,
	All = 1,
	Team = 2,
	Squad = 3,
	GameNotification = 4,
	GameNotificationTeam = 5,
	GameChat = 6,
	AdminBroadcast = 7,
	AdminChat = 8,
	AdminNotification = 9,
	PlayerNotification = 10,
	ServerMessage = 11,
	System = 12,
	ESQChat_MAX = 13
};

// Enum Squad.ESQTextVerticalAlignment
enum class ESQTextVerticalAlignment : uint8 {
	Top = 0,
	Center = 1,
	Bottom = 2,
	ESQTextVerticalAlignment_MAX = 3
};

// Enum Squad.ESQTextHorizontalAlignment
enum class ESQTextHorizontalAlignment : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	ESQTextHorizontalAlignment_MAX = 3
};

// Enum Squad.ESQMapItemDrawMode
enum class ESQMapItemDrawMode : uint8 {
	ZoomedOut = 0,
	ZoomedIn = 1,
	Absolute = 2,
	Meters = 3,
	ESQMapItemDrawMode_MAX = 4
};

// Enum Squad.ESQMapItemType
enum class ESQMapItemType : uint8 {
	Map = 0,
	Default = 1,
	Player = 2,
	Spawn = 3,
	LocalPlayer = 4,
	Gameplay = 5,
	ESQMapItemType_MAX = 6
};

// Enum Squad.ESQMapMarkerVisibleTo
enum class ESQMapMarkerVisibleTo : uint8 {
	None = 0,
	All = 1,
	Team = 2,
	Squad = 3,
	FireTeam = 4,
	Self = 5,
	FireTeamLeader = 6,
	SquadLeader = 7,
	SquadAndSLs = 8,
	Commander = 9,
	Admin = 10,
	ESQMapMarkerVisibleTo_MAX = 11
};

// Enum Squad.ESQMapWidgetTint
enum class ESQMapWidgetTint : uint8 {
	Neutral = 0,
	Self = 1,
	Squad = 2,
	Team = 3,
	SquadLeader = 4,
	AllCommand = 5,
	Enemy = 6,
	FireTeam = 7,
	MAX = 8
};

// Enum Squad.ESQMapMarkerType
enum class ESQMapMarkerType : uint8 {
	Action = 0,
	Spot = 1,
	POI = 2,
	Fireteam = 3,
	Request = 4,
	Arrow = 5,
	Frontline = 6,
	CommanderOrder = 7,
	MAX = 8
};

// Enum Squad.ESQMapIconSelectionGroup
enum class ESQMapIconSelectionGroup : uint8 {
	None = 0,
	Spawns = 1,
	Players = 2,
	ESQMapIconSelectionGroup_MAX = 3
};

// Enum Squad.ESQAnimState
enum class ESQAnimState : uint8 {
	Out = 0,
	Entered = 1,
	FullWeight = 2,
	Left = 3,
	ESQAnimState_MAX = 4
};

// Enum Squad.ESQDrivenDestinationMode
enum class ESQDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	ESQDrivenDestinationMode_MAX = 3
};

// Enum Squad.ESQDrivenBoneModificationMode
enum class ESQDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	ESQDrivenBoneModificationMode_MAX = 3
};

// Enum Squad.ESQComponentType
enum class ESQComponentType : uint8 {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	ESQComponentType_MAX = 11
};

// Enum Squad.EApprovalRequestChannels
enum class EApprovalRequestChannels : uint8 {
	Undefined = 0,
	SquadLeader = 1,
	SinglePlayer = 2,
	EApprovalRequestChannels_MAX = 3
};

// Enum Squad.EApprovalRequestTypes
enum class EApprovalRequestTypes : uint8 {
	Undefined = 0,
	VehicleClaim = 1,
	RequestToJoinSquad = 2,
	EApprovalRequestTypes_MAX = 3
};

// Enum Squad.ESQByteUnit
enum class ESQByteUnit : uint8 {
	BYTE = 0,
	KILOBYTE = 1,
	MEGABYTE = 2,
	GIGABYTE = 3,
	TERABYTE = 4,
	PETABYTE = 5,
	EXABYTE = 6,
	ZETTABYTE = 7,
	YOTTABYTE = 8,
	ESQByteUnit_MAX = 9
};

// Enum Squad.ESQReturnBool
enum class ESQReturnBool : uint8 {
	IsTrue = 0,
	IsFalse = 1,
	ESQReturnBool_MAX = 2
};

// Enum Squad.ESQChunkBehavior
enum class ESQChunkBehavior : uint8 {
	RemoveParent = 0,
	RemoveChild = 1,
	KeepBoth = 2,
	ESQChunkBehavior_MAX = 3
};

// Enum Squad.ESQConsoleMessageType
enum class ESQConsoleMessageType : uint8 {
	Normal = 0,
	Warning = 1,
	Error = 2,
	ESQConsoleMessageType_MAX = 3
};

// Enum Squad.ESQConsoleVariableViewerState
enum class ESQConsoleVariableViewerState : uint8 {
	None = 0,
	Soldier = 1,
	Driver = 2,
	Passenger = 3,
	Spectator = 4,
	MAX = 5
};

// Enum Squad.ESQConsoleVariableRange
enum class ESQConsoleVariableRange : uint8 {
	Self = 0,
	Meters_1 = 1,
	Meters_26 = 2,
	Meters_51 = 3,
	Meters_101 = 4,
	Meters_251 = 5,
	Meters_501 = 6,
	Meters_1001 = 7,
	Meters_1501 = 8,
	Meters_2001 = 9,
	Meters_2501 = 10,
	Meters_3001 = 11,
	Meters_4001 = 12,
	Meters_5001 = 13,
	MAX = 14
};

// Enum Squad.EListLayout
enum class EListLayout : uint8 {
	SquadList = 0,
	RoleList = 1,
	InviteList = 2,
	EListLayout_MAX = 3
};

// Enum Squad.ESQSelectionState
enum class ESQSelectionState : uint8 {
	None = 0,
	Highlighted = 1,
	Selected = 2,
	ESQSelectionState_MAX = 3
};

// Enum Squad.EJoinButtonState
enum class EJoinButtonState : uint8 {
	None = 0,
	Join = 1,
	Full = 2,
	Locked = 3,
	EJoinButtonState_MAX = 4
};

// Enum Squad.ESQAuthorityTypes
enum class ESQAuthorityTypes : uint8 {
	None = 0,
	FireteamLeader = 1,
	SquadLeader = 2,
	Commander = 3,
	ESQAuthorityTypes_MAX = 4
};

// Enum Squad.ESQScalingCountingMode
enum class ESQScalingCountingMode : uint8 {
	Available = 0,
	MaxAvailable = 1,
	ESQScalingCountingMode_MAX = 2
};

// Enum Squad.ESQItemLowerReason
enum class ESQItemLowerReason : uint8 {
	None = 0,
	Collision = 1,
	Water = 2,
	ESQItemLowerReason_MAX = 3
};

// Enum Squad.ESQAxis
enum class ESQAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESQAxis_MAX = 4
};

// Enum Squad.EFreeLookMode
enum class EFreeLookMode : uint8 {
	NeverFreeLook = 0,
	ToggleFreeLook = 1,
	AlwaysFreeLook = 2,
	EFreeLookMode_MAX = 3
};

// Enum Squad.ESQSpawnPointType
enum class ESQSpawnPointType : uint8 {
	None = 0,
	BaseSpawn = 1,
	HABSpawn = 2,
	RallySpawn = 3,
	CacheSpawn = 4,
	ESQSpawnPointType_MAX = 5
};

// Enum Squad.ESQJoyStickControls
enum class ESQJoyStickControls : uint8 {
	Pitch = 0,
	Yaw = 1,
	Roll = 2,
	Collective = 3,
	ESQJoyStickControls_MAX = 4
};

// Enum Squad.ESQJoystickCurveTypes
enum class ESQJoystickCurveTypes : uint8 {
	Exponential = 0,
	Smooth = 1,
	ESQJoystickCurveTypes_MAX = 2
};

// Enum Squad.ESQStreamerModeLevel
enum class ESQStreamerModeLevel : uint8 {
	None = 0,
	HideServer = 1,
	HideSquadNames = 2,
	HideOurName = 4,
	HideAllNames = 8,
	HideChat = 16,
	HideMiscData = 32,
	ESQStreamerModeLevel_MAX = 33
};

// Enum Squad.ESQToggleType
enum class ESQToggleType : uint8 {
	Toggle = 0,
	Hold = 1,
	HoldAndDoubleTap = 2,
	HoldAndDoubleTap_EasyUnlock = 3,
	INVALID = 255,
	ESQToggleType_MAX = 256
};

// Enum Squad.ESQContestingState
enum class ESQContestingState : uint8 {
	None = 0,
	Attackable = 1,
	Defendable = 2,
	ESQContestingState_MAX = 3
};

// Enum Squad.ESQMoveSerializationMode
enum class ESQMoveSerializationMode : uint8 {
	OldMove = 0,
	DualFirstMove = 1,
	DualSecondMove = 2,
	SingleMove = 3,
	ESQMoveSerializationMode_MAX = 4
};

// Enum Squad.ESQRenameReplayResponse
enum class ESQRenameReplayResponse : uint8 {
	Success = 0,
	UnspecifiedFailure = 1,
	TryingToOverwrite = 2,
	FileDoesNotExist = 3,
	ESQRenameReplayResponse_MAX = 4
};

// Enum Squad.ESQReplaySubsystemState
enum class ESQReplaySubsystemState : uint8 {
	NotRecording = 0,
	RecordingNamed = 1,
	RecordingDated = 2,
	Replaying = 3,
	ESQReplaySubsystemState_MAX = 4
};

// Enum Squad.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8 {
	NotRouted = 0,
	RelevantAllConnections = 1,
	AllwaysRelevantTeamOnly = 2,
	Spatialize_Static = 3,
	Spatialize_Dynamic = 4,
	Spatialize_Dormancy = 5,
	EClassRepNodeMapping_MAX = 6
};

// Enum Squad.ESQPlayerStatus
enum class ESQPlayerStatus : uint8 {
	NotLeader = 0,
	SquadLeader = 1,
	FireTeamLeader = 2,
	Commander = 3,
	Admin = 4,
	QA = 5,
	Dev = 6,
	ESQPlayerStatus_MAX = 7
};

// Enum Squad.ESQRotationMovementState
enum class ESQRotationMovementState : uint8 {
	Idle = 0,
	Starting = 1,
	Moving = 2,
	Stopping = 3,
	ESQRotationMovementState_MAX = 4
};

// Enum Squad.ESQRotorRunningState
enum class ESQRotorRunningState : uint8 {
	Accelerating = 1,
	Idling = 2,
	Locked = 3,
	ESQRotorRunningState_MAX = 4
};

// Enum Squad.ESQRotorState
enum class ESQRotorState : uint8 {
	None = 0,
	Starting = 1,
	Running = 2,
	Stopping = 3,
	Stopped = 4,
	ESQRotorState_MAX = 5
};

// Enum Squad.ESQRotorType
enum class ESQRotorType : uint8 {
	Main = 0,
	Lateral = 1,
	ESQRotorType_MAX = 2
};

// Enum Squad.ESQShockwaveEffectType
enum class ESQShockwaveEffectType : uint8 {
	Explosion = 0,
	Blast = 1,
	ESQShockwaveEffectType_MAX = 2
};

// Enum Squad.ESQUnderwaterBone
enum class ESQUnderwaterBone : uint8 {
	Head = 0,
	Chest = 1,
	Hip = 2,
	Foot = 3,
	Knee = 4,
	ESQUnderwaterBone_MAX = 5
};

// Enum Squad.ECustomMovementMode
enum class ECustomMovementMode : uint8 {
	MOVE_Bipod = 0,
	MOVE_Climbing = 1,
	MOVE_MAX = 2
};

// Enum Squad.ESQSoundNodeFlyByState
enum class ESQSoundNodeFlyByState : uint8 {
	Idle = 0,
	ComingTowardsNotPlaying = 1,
	Playing = 2,
	MovingAwayNotPlaying = 3,
	ESQSoundNodeFlyByState_MAX = 4
};

// Enum Squad.EVehicleClaimCheckResults
enum class EVehicleClaimCheckResults : uint8 {
	OK = 0,
	NullPtr = 1,
	EmptyRole = 2,
	EVehicleClaimCheckResults_MAX = 3
};

// Enum Squad.ESquadMemberUIAction
enum class ESquadMemberUIAction : uint8 {
	MenuOpen = 0,
	PromoteToSL = 1,
	Kick = 2,
	SLInvite = 3,
	ESquadMemberUIAction_MAX = 4
};

// Enum Squad.ESquadMemberUIViewMode
enum class ESquadMemberUIViewMode : uint8 {
	SquadMembers = 0,
	UnassignedMembers = 1,
	ESquadMemberUIViewMode_MAX = 2
};

// Enum Squad.ESeatProgressMenuMode
enum class ESeatProgressMenuMode : uint8 {
	InventoryOnly = 0,
	Entering = 1,
	Switching = 2,
	Exiting = 3,
	ESeatProgressMenuMode_MAX = 4
};

// Enum Squad.ESQVehicleClaimStatus
enum class ESQVehicleClaimStatus : uint8 {
	Active = 0,
	DroppedOff = 1,
	Abandoned = 2,
	Destroyed = 3,
	ESQVehicleClaimStatus_MAX = 4
};

// Enum Squad.ESQInventoryModificationType
enum class ESQInventoryModificationType : uint8 {
	AddToInventory = 0,
	RemoveFromInventory = 1,
	UpdateInventory = 2,
	ESQInventoryModificationType_MAX = 3
};

// Enum Squad.EWeaponType
enum class EWeaponType : uint8 {
	Backpack = 0,
	Primary = 1,
	Secondary = 2,
	Special = 3,
	EWeaponType_MAX = 4
};

// Enum Squad.ESQCreditsLineType
enum class ESQCreditsLineType : uint8 {
	None = 0,
	Header = 1,
	LineBreak = 2,
	Names = 3,
	ESQCreditsLineType_MAX = 4
};

// Enum Squad.ESQKillReportChannel
enum class ESQKillReportChannel : uint8 {
	None = 0,
	Admin = 1,
	Team = 2,
	TeamAndAdmin = 3,
	Public = 4,
	ESQKillReportChannel_MAX = 5
};

// Enum Squad.ESQRepairSource
enum class ESQRepairSource : uint8 {
	REPAIR_STATION = 0,
	REPAIR_TOOL = 1,
	REPAIR_MAX = 2
};

// Enum Squad.ESQSpawnInventoryReason
enum class ESQSpawnInventoryReason : uint8 {
	SpawningIn = 0,
	SwappingRoles = 1,
	SwappingRolesPartialAmmo = 2,
	ESQSpawnInventoryReason_MAX = 3
};

// Enum Squad.ESQSoldierRagdollReason
enum class ESQSoldierRagdollReason : uint8 {
	NotInRagdoll = 0,
	NotReplicated = 1,
	Replicated = 2,
	ReplicatedAutoGetUp = 3,
	ESQSoldierRagdollReason_MAX = 4
};

// Enum Squad.ESQVehicleRoleAbility
enum class ESQVehicleRoleAbility : uint8 {
	LightVehicle = 0,
	HeavyVehicle = 1,
	FlyingVehicle = 2,
	ESQVehicleRoleAbility_MAX = 3
};

// Enum Squad.ESQRearmType
enum class ESQRearmType : uint8 {
	MainOrEnvironment = 0,
	ForwardBase = 1,
	Vehicle = 2,
	AmmoBag = 3,
	ESQRearmType_MAX = 4
};

// Enum Squad.ESQGrenadeState
enum class ESQGrenadeState : uint8 {
	Idle = 0,
	PreparingOverhandThrow = 1,
	PreparingUnderhandThrow = 2,
	ThrowingOverhand = 3,
	ThrowingUnderhand = 4,
	Reloading = 5,
	ESQGrenadeState_MAX = 6
};

// Enum Squad.ESQEquippableState
enum class ESQEquippableState : uint8 {
	None = 0,
	Unequipped = 1,
	Equipping = 2,
	Equipped = 3,
	Unequipping = 4,
	ESQEquippableState_MAX = 5
};

// Enum Squad.ESQVehicleDifferential4W
enum class ESQVehicleDifferential4W : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	ESQVehicleDifferential4W_MAX = 6
};

// Enum Squad.ESQDeadState
enum class ESQDeadState : uint8 {
	GameNotStarted = 0,
	SpawningIn = 1,
	SelectingSpawn = 2,
	SelectingRole = 3,
	WaitingToSpawn = 4,
	InCap = 5,
	ESQDeadState_MAX = 6
};

// Enum Squad.ESQTileCount
enum class ESQTileCount : uint8 {
	COUNT_2 = 0,
	COUNT_3 = 1,
	COUNT_5 = 2,
	COUNT_9 = 3,
	COUNT_17 = 4,
	COUNT_33 = 5,
	COUNT_MAX = 6
};

// Enum Squad.ESQTileResolution
enum class ESQTileResolution : uint8 {
	SIZE_513 = 0,
	SIZE_1025 = 1,
	SIZE_2049 = 2,
	SIZE_4097 = 3,
	SIZE_MAX = 4
};

// Enum Squad.ESQSoldierLeanDirection
enum class ESQSoldierLeanDirection : uint8 {
	LeftLean = 0,
	NoLean = 1,
	RightLean = 2,
	ESQSoldierLeanDirection_MAX = 3
};

// Enum Squad.ESQFOBRallyPointDisplayMode
enum class ESQFOBRallyPointDisplayMode : uint8 {
	None = 0,
	FOB = 1,
	RallyPoint = 2,
	Both = 3,
	ESQFOBRallyPointDisplayMode_MAX = 4
};

// Enum Squad.ESQHUDView
enum class ESQHUDView : uint8 {
	None = 0,
	AllPawns = 1,
	SameTeam = 2,
	OnlyEnemy = 3,
	ESQHUDView_MAX = 4
};

// Enum Squad.ESQCameraMode
enum class ESQCameraMode : uint8 {
	FlySpeed = 0,
	Deceleration = 1,
	FOV = 2,
	ESQCameraMode_MAX = 3
};

// Enum Squad.ESQExplosiveType
enum class ESQExplosiveType : uint8 {
	None = 0,
	RemoteExplosive = 1,
	Mine = 2,
	ESQExplosiveType_MAX = 3
};

// Enum Squad.ESQDeployableSize
enum class ESQDeployableSize : uint8 {
	Very_Small = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	Very_Large = 4,
	ESQDeployableSize_MAX = 5
};

// Enum Squad.ESQInvalidPlacementReason
enum class ESQInvalidPlacementReason : uint8 {
	NOREASONGIVEN = 0,
	VALID = 1,
	BAD_GROUND = 2,
	UNDERWATER = 3,
	OVERLAP = 4,
	NO_DEPLOY_ZONE = 5,
	EXCLUSION_ZONE = 6,
	OUT_OF_VISION = 7,
	ESQInvalidPlacementReason_MAX = 8
};

// Enum Squad.ESQMapRotationMode
enum class ESQMapRotationMode : uint8 {
	LevelList = 0,
	LevelList_Randomized = 1,
	LayerList = 2,
	LayerList_Randomized = 3,
	ESQMapRotationMode_MAX = 4
};

// Enum Squad.ESQWeaponAnimType
enum class ESQWeaponAnimType : uint8 {
	Rifle = 0,
	Grenade = 1,
	Equippable = 2,
	ESQWeaponAnimType_MAX = 3
};

// Enum Squad.ESQEquippableActionState
enum class ESQEquippableActionState : uint8 {
	Idle = 0,
	Use = 1,
	AltUse = 2,
	Custom1 = 3,
	Custom2 = 4,
	Custom3 = 5,
	PreUse = 6,
	PostUse = 7,
	PreAltUse = 8,
	PostAltUse = 9,
	ESQEquippableActionState_MAX = 10
};

// Enum Squad.ESQWeaponState
enum class ESQWeaponState : uint8 {
	Idle = 0,
	Firing = 1,
	Reloading = 2,
	Melee = 3,
	ProcessingAttachment = 4,
	ESQWeaponState_MAX = 5
};

// Enum Squad.ESQHitDetectionFailReason
enum class ESQHitDetectionFailReason : uint8 {
	None = 0,
	NoAmmo = 1,
	NoOwner = 2,
	NoShot = 3,
	InvalidViewAngle = 4,
	Blocked = 5,
	Reloading = 6,
	Sprinting = 7,
	UnableToFire = 8,
	ESQHitDetectionFailReason_MAX = 9
};

// Enum Squad.ESQReadyToEndMatch
enum class ESQReadyToEndMatch : uint8 {
	Unhandled = 0,
	ReadyToEndMatch = 1,
	DoNotEndMatch = 2,
	ESQReadyToEndMatch_MAX = 3
};

// Enum Squad.ESQRoleTypeEnum
enum class ESQRoleTypeEnum : uint8 {
	RoleType_Standard = 0,
	RoleType_Specialist = 1,
	RoleType_Support = 2,
	RoleType_FireSupport = 3,
	RoleType_MAX = 4
};

// Enum Squad.ESQTeamRelationShip
enum class ESQTeamRelationShip : uint8 {
	SameTeam = 0,
	Friend = 1,
	Neutral = 2,
	Enemy = 3,
	ESQTeamRelationShip_MAX = 4
};

// Enum Squad.ESQDialogType
enum class ESQDialogType : uint8 {
	None = 0,
	Generic = 1,
	ControllerDisconnected = 2,
	ESQDialogType_MAX = 3
};

// Enum Squad.ESQRadialWidgetSizeEnum
enum class ESQRadialWidgetSizeEnum : uint8 {
	Small = 1,
	Medium = 2,
	Large = 3,
	ESQRadialWidgetSizeEnum_MAX = 4
};

// Enum Squad.ESQHudPosition
enum class ESQHudPosition : uint8 {
	Left = 0,
	FrontLeft = 1,
	Front = 2,
	FrontRight = 3,
	Right = 4,
	BackRight = 5,
	Back = 6,
	BackLeft = 7,
	ESQHudPosition_MAX = 8
};

// Enum Squad.ESQCrosshairDirection
enum class ESQCrosshairDirection : uint8 {
	Left = 0,
	Right = 1,
	Top = 2,
	Bottom = 3,
	Center = 4,
	ESQCrosshairDirection_MAX = 5
};

// Enum Squad.ESQAudioVolumeType
enum class ESQAudioVolumeType : uint8 {
	Default = 0,
	FieldOpen = 1,
	FieldClosed = 2,
	Valley = 3,
	ForestLarge = 4,
	ForestSmall = 5,
	UrbanLarge = 6,
	UrbanSmall = 7,
	RoomLarge = 8,
	RoomMedium = 9,
	RoomSmall = 10,
	RoomHollowLarge = 11,
	RoomHollowMedium = 12,
	RoomHollowSmall = 13,
	ESQAudioVolumeType_MAX = 14
};

// Enum Squad.ESQLeftSquadWeaponBehaviour
enum class ESQLeftSquadWeaponBehaviour : uint8 {
	DoNotKeep = 0,
	KeepWithMagsAndLoadedAmmo = 1,
	KeepWithOnlyLoadedAmmo = 2,
	OverWriteMagsAndKeepLoadedAmmo = 3,
	OverWriteWithOnlyLoadedAmmo = 4,
	ESQLeftSquadWeaponBehaviour_MAX = 5
};

// Enum Squad.ESQAdminAccessLevels
enum class ESQAdminAccessLevels : uint8 {
	Level_Public = 0,
	Level_StartVote = 1,
	Level_ChangeMap = 2,
	Level_Pause = 3,
	Level_Cheat = 4,
	Level_Private = 5,
	Level_Balance = 6,
	Level_Chat = 7,
	Level_Mute = 8,
	Level_Kick = 9,
	Level_Ban = 10,
	Level_Config = 11,
	Level_Immune = 12,
	Level_Server = 13,
	Level_CameraMan = 14,
	Level_Add = 15,
	Level_FeatureTest = 16,
	Level_Debug = 17,
	Level_Demos = 18,
	Level_Reserve = 19,
	Level_TeamChange = 20,
	Level_Developer = 21,
	Level_ForceTeamChange = 22,
	Level_CanSeeAdminChat = 23,
	Level_QA = 24,
	Level_ClientDemos = 25,
	Level_MAX = 26
};

// Enum Squad.ESQSortStates
enum class ESQSortStates : uint8 {
	Unsorted = 0,
	Ascending = 1,
	Descending = 2,
	ESQSortStates_MAX = 3
};

// Enum Squad.ESQSortLevels
enum class ESQSortLevels : uint8 {
	ServerName = 0,
	MapName = 1,
	GameMode = 2,
	Ping = 3,
	NumPlayers = 4,
	ESQSortLevels_MAX = 5
};

// Enum Squad.ESQTrackDeployableResult
enum class ESQTrackDeployableResult : uint8 {
	Allow = 0,
	AllowButRemoveAllOthers = 1,
	AllowButRemoveFirst = 2,
	AllowButRemoveLast = 3,
	DoNotAllow = 4,
	ESQTrackDeployableResult_MAX = 5
};

// Enum Squad.ESQVehicleType
enum class ESQVehicleType : uint8 {
	None = 0,
	Motorcycle = 1,
	Jeep = 2,
	JeepTransport = 3,
	JeepLogistics = 4,
	JeepAntiTank = 5,
	JeepArtillery = 6,
	TruckTransport = 7,
	TruckLogistics = 8,
	TruckAntiAir = 9,
	APC = 10,
	APCTracked = 11,
	AntiAirTracked = 12,
	IFV = 13,
	IFVTracked = 14,
	Tank = 15,
	HelicopterTransport = 16,
	HelicopterAttack = 17,
	Boat = 18,
	MAX = 19
};

// Enum Squad.ESQVehicleComponentStates
enum class ESQVehicleComponentStates : uint8 {
	FullyRepaired = 0,
	RepairedFromDestruction = 1,
	Destroyed = 2,
	ESQVehicleComponentStates_MAX = 3
};

// ScriptStruct Squad.SQRearmWeaponRequest
// Size: 0x10 (Inherited: 0x00)
struct FSQRearmWeaponRequest {
	struct ASQEquipableItem* Weapon; // 0x00(0x08)
	int MagsToRearm; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Squad.SQUnderwaterBoneData
// Size: 0x28 (Inherited: 0x00)
struct FSQUnderwaterBoneData {
	struct FName HeadHeightUnderwaterSocketName; // 0x00(0x08)
	struct FName ChestHeightUnderwaterSocketName; // 0x08(0x08)
	struct FName HipHeightUnderwaterSocketName; // 0x10(0x08)
	struct FName KneeHeightUnderwaterSocketName; // 0x18(0x08)
	struct FName FootHeightUnderwaterSocketName; // 0x20(0x08)
};

// ScriptStruct Squad.SQDraggableBone
// Size: 0x0c (Inherited: 0x00)
struct FSQDraggableBone {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Squad.SQDraggingData
// Size: 0x10 (Inherited: 0x00)
struct FSQDraggingData {
	enum class ESQDraggingStatus DraggingStatus; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int DraggedBoneIndex; // 0x04(0x04)
	struct ASQSoldier* OtherSoldier; // 0x08(0x08)
};

// ScriptStruct Squad.SQBoneHitSound
// Size: 0x10 (Inherited: 0x00)
struct FSQBoneHitSound {
	struct FName BoneName; // 0x00(0x08)
	struct USoundCue* HitSound; // 0x08(0x08)
};

// ScriptStruct Squad.SQTakeHitInfo
// Size: 0x138 (Inherited: 0x00)
struct FSQTakeHitInfo {
	float ActualDamage; // 0x00(0x04)
	float ServerTimestamp; // 0x04(0x04)
	struct UObject* DamageTypeClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct ASQSoldier> PawnInstigator; // 0x10(0x08)
	struct TWeakObjectPtr<struct AActor> DamageCauser; // 0x18(0x08)
	int DamageEventClassID; // 0x20(0x04)
	char bKilled : 1; // 0x24(0x01)
	char bWounded : 1; // 0x24(0x01)
	char bEjectedFromVehicle : 1; // 0x24(0x01)
	char pad_24_3 : 5; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FDamageEvent GeneralDamageEvent; // 0x28(0x10)
	struct FPointDamageEvent PointDamageEvent; // 0x38(0xa8)
	struct FRadialDamageEvent RadialDamageEvent; // 0xe0(0x40)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PackagedHitResultPhysMaterial; // 0x120(0x08)
	struct TWeakObjectPtr<struct AActor> PackagedHitResultActor; // 0x128(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> PackagedHitResultComponent; // 0x130(0x08)
};

// ScriptStruct Squad.SQBoneDamageMod
// Size: 0x0c (Inherited: 0x00)
struct FSQBoneDamageMod {
	struct FName BoneName; // 0x00(0x08)
	float DamageMod; // 0x08(0x04)
};

// ScriptStruct Squad.SQUsableData
// Size: 0x40 (Inherited: 0x00)
struct FSQUsableData {
	struct FText DisplayName; // 0x00(0x18)
	struct TArray<struct FSQUsableWidgetData> InteractionData; // 0x18(0x10)
	struct USQInteractableWidgetList* InteractWidgetClass; // 0x28(0x08)
	struct FVector DrawLocationOffset; // 0x30(0x0c)
	enum class ESQInteractVisibility InteractVisiblity; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Squad.SQUsableWidgetData
// Size: 0x38 (Inherited: 0x00)
struct FSQUsableWidgetData {
	struct FText UsableText; // 0x00(0x18)
	struct UTexture2D* CustomTexture; // 0x18(0x08)
	struct FLinearColor CustomColor; // 0x20(0x10)
	struct USQInteractableWidgetItem* InteractWidgetItemClass; // 0x30(0x08)
};

// ScriptStruct Squad.SQClimbInfo
// Size: 0x30 (Inherited: 0x00)
struct FSQClimbInfo {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EClimbType PendingType; // 0x01(0x01)
	char pad_2[0x16]; // 0x02(0x16)
	struct TArray<struct FVector_NetQuantize10> PendingClimbMovePathZeroBased; // 0x18(0x10)
	char pad_28[0x1]; // 0x28(0x01)
	enum class EClimbState PendingState; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct Squad.SQVoipAnim
// Size: 0x20 (Inherited: 0x00)
struct FSQVoipAnim {
	struct UAnimMontage* FirstPersonAnim; // 0x00(0x08)
	struct UAnimMontage* ThirdPersonAnim; // 0x08(0x08)
	struct UAnimMontage* FirstPersonEndAnim; // 0x10(0x08)
	struct UAnimMontage* ThirdPersonEndAnim; // 0x18(0x08)
};

// ScriptStruct Squad.SQClimbData
// Size: 0x178 (Inherited: 0x00)
struct FSQClimbData {
	float MinHeight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FSQClimbOverData OverData; // 0x08(0xa0)
	struct FSQClimbOntoData OntoData; // 0xa8(0xa8)
	float MinMoveToStartSpeed; // 0x150(0x04)
	float SearchDistance; // 0x154(0x04)
	float MaxClimbableAngle; // 0x158(0x04)
	float PitchCorrectionTime; // 0x15c(0x04)
	float PitchCorrectionMidPoint; // 0x160(0x04)
	float CielingNormalTollerance; // 0x164(0x04)
	float OverlapDetectionScale; // 0x168(0x04)
	float ActorLocationAcceptanceDistance; // 0x16c(0x04)
	float ServerAcceptanceDistance; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
};

// ScriptStruct Squad.SQClimbOntoData
// Size: 0xa8 (Inherited: 0x00)
struct FSQClimbOntoData {
	struct FSQClimbOntoTypeData Low; // 0x00(0x38)
	struct FSQClimbOntoTypeData Mid; // 0x38(0x38)
	struct FSQClimbOntoTypeData High; // 0x70(0x38)
};

// ScriptStruct Squad.SQClimbTypeData
// Size: 0x30 (Inherited: 0x00)
struct FSQClimbTypeData {
	char pad_0[0x8]; // 0x00(0x08)
	float EndSpace; // 0x08(0x04)
	float MaxHeight; // 0x0c(0x04)
	float RequiredAnimationTime; // 0x10(0x04)
	bool bFiringDisabled; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float StaminaCost; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UAnimMontage* Montage1P; // 0x20(0x08)
	struct UAnimMontage* Montage3P; // 0x28(0x08)
};

// ScriptStruct Squad.SQClimbOntoTypeData
// Size: 0x38 (Inherited: 0x30)
struct FSQClimbOntoTypeData : FSQClimbTypeData {
	float InterpolateTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Squad.SQClimbOverData
// Size: 0xa0 (Inherited: 0x00)
struct FSQClimbOverData {
	float MaxMoveDistance; // 0x00(0x04)
	float MinMiddleMoveDistance; // 0x04(0x04)
	float MidCollisionShapeScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSQClimbOverTypeData Low; // 0x10(0x48)
	struct FSQClimbOverTypeData Mid; // 0x58(0x48)
};

// ScriptStruct Squad.SQClimbOverTypeData
// Size: 0x48 (Inherited: 0x30)
struct FSQClimbOverTypeData : FSQClimbTypeData {
	float MinVerticalSpace; // 0x30(0x04)
	float InterpolateTimeToMidStart; // 0x34(0x04)
	float InterpolateTimeToMidEnd; // 0x38(0x04)
	float InterpolateTimeToEnd; // 0x3c(0x04)
	float MidHorizonalSpace; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Squad.SQChoice
// Size: 0x18 (Inherited: 0x00)
struct FSQChoice {
	struct FName ID; // 0x00(0x08)
	struct FDataTableRowHandle Data; // 0x08(0x10)
};

// ScriptStruct Squad.SQBasedMovementInfo
// Size: 0x30 (Inherited: 0x00)
struct FSQBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector_NetQuantize100 Location; // 0x10(0x0c)
	struct FRotator Rotation; // 0x1c(0x0c)
	bool bServerHasBaseComponent; // 0x28(0x01)
	bool bRelativeRotation; // 0x29(0x01)
	bool bServerHasVelocity; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// ScriptStruct Squad.SQMontageSectionNames
// Size: 0x28 (Inherited: 0x00)
struct FSQMontageSectionNames {
	struct FName BeginSection; // 0x00(0x08)
	struct FName LoopSection1; // 0x08(0x08)
	struct FName LoopSection2; // 0x10(0x08)
	struct FName EndSection; // 0x18(0x08)
	struct FName MidEndSection; // 0x20(0x08)
};

// ScriptStruct Squad.BlueprintOnlineItem
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintOnlineItem {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Squad.SQAvailabilityState_Deployable
// Size: 0x50 (Inherited: 0x00)
struct FSQAvailabilityState_Deployable {
	struct FSQAvailabilityState Status; // 0x00(0x48)
	struct USQAvailability_Deployable* Availability; // 0x48(0x08)
};

// ScriptStruct Squad.SQAvailabilityState
// Size: 0x48 (Inherited: 0x00)
struct FSQAvailabilityState {
	int Available; // 0x00(0x04)
	int Used; // 0x04(0x04)
	int Queued; // 0x08(0x04)
	int ModifierPct; // 0x0c(0x04)
	bool ForceAvailable; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FDateTime NextAvailabilityTime; // 0x18(0x08)
	struct TArray<struct FSQAvailabilityStateTimerContainer> NextAvailabilityTimeQueue; // 0x20(0x10)
	struct FDataTableRowHandle UnavailabilityReason; // 0x30(0x10)
	char StatusUpdateID; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Squad.SQAvailabilityStateTimerContainer
// Size: 0x18 (Inherited: 0x00)
struct FSQAvailabilityStateTimerContainer {
	struct FDateTime NextAvailabilityTime; // 0x00(0x08)
	struct FDataTableRowHandle UnavailabilityReason; // 0x08(0x10)
};

// ScriptStruct Squad.SQCommandActionData
// Size: 0x18 (Inherited: 0x00)
struct FSQCommandActionData {
	struct USQGridData_CommandOption* CommandActionData; // 0x00(0x08)
	float GameTimeAtCreation; // 0x08(0x04)
	float CooldownTimeRemaining; // 0x0c(0x04)
	bool IsDestroyedDuringActive; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Squad.CommanderCategory
// Size: 0x20 (Inherited: 0x00)
struct FCommanderCategory {
	struct FText Name; // 0x00(0x18)
	float CooldownDuration; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Squad.SQInputState
// Size: 0x20 (Inherited: 0x00)
struct FSQInputState {
	struct FString RequestReason; // 0x00(0x10)
	struct UUserWidget* Focus; // 0x10(0x08)
	bool bGameInput; // 0x18(0x01)
	bool bDisplayMouse; // 0x19(0x01)
	bool bUIInput; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
};

// ScriptStruct Squad.SQMessageBoxInfo
// Size: 0x78 (Inherited: 0x00)
struct FSQMessageBoxInfo {
	struct FSlateFontInfo FontInfo; // 0x00(0x50)
	struct TArray<struct FSQHUDMessage> Messages; // 0x50(0x10)
	struct FVector2D MessageBoxLocation; // 0x60(0x08)
	int MaxNumberOfMessagesToShow; // 0x68(0x04)
	float MessagesLifetime; // 0x6c(0x04)
	float MessagesFadeTime; // 0x70(0x04)
	enum class ESQTextHorizontalAlignment MessageHorizontalAlignment; // 0x74(0x01)
	enum class ESQTextVerticalAlignment MessageVerticalAlignment; // 0x75(0x01)
	bool bScrollUp; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
};

// ScriptStruct Squad.SQHUDMessage
// Size: 0x30 (Inherited: 0x00)
struct FSQHUDMessage {
	struct FString Message; // 0x00(0x10)
	struct FLinearColor Color; // 0x10(0x10)
	float Scale; // 0x20(0x04)
	float ExpireTime; // 0x24(0x04)
	float FadeTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Squad.SQRemoteTalkerDisplayInfo
// Size: 0x10 (Inherited: 0x00)
struct FSQRemoteTalkerDisplayInfo {
	struct ASQPlayerState* PlayerState; // 0x00(0x08)
	enum class ESQVoiceChannel Channel; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Squad.SQMapMarkerVisualData
// Size: 0xc8 (Inherited: 0x00)
struct FSQMapMarkerVisualData {
	struct UTexture2D* Texture; // 0x00(0x08)
	enum class ESQMapIconSelectionGroup SelectionGroup; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture2D* SelectedTexture; // 0x10(0x08)
	struct FLinearColor SelectedTint; // 0x18(0x10)
	enum class ESQMapMarkerType MapMarkerType; // 0x28(0x01)
	enum class ESQMapWidgetTint MapMarkerTintType; // 0x29(0x01)
	enum class ESQMapMarkerVisibleTo MapMarkerVisibleTo; // 0x2a(0x01)
	enum class ESQMapItemType Type; // 0x2b(0x01)
	bool bVisibleWhenNeutral; // 0x2c(0x01)
	enum class ESQEmotes PlacementEmote; // 0x2d(0x01)
	char pad_2E[0x2]; // 0x2e(0x02)
	float Lifetime; // 0x30(0x04)
	float FadeOutTime; // 0x34(0x04)
	bool bShouldOverrideTint; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FLinearColor OverrideTint; // 0x3c(0x10)
	struct FLinearColor Tint; // 0x4c(0x10)
	float Rotation; // 0x5c(0x04)
	struct FVector2D RotPivot; // 0x60(0x08)
	struct FVector2D Size; // 0x68(0x08)
	struct FVector2D Offset; // 0x70(0x08)
	int ZOrder; // 0x78(0x04)
	enum class ESQMapItemDrawMode DrawModeX; // 0x7c(0x01)
	enum class ESQMapItemDrawMode DrawModeY; // 0x7d(0x01)
	char pad_7E[0xa]; // 0x7e(0x0a)
	struct FSQMapMarkerGameplayData MarkerGameplayData; // 0x88(0x38)
	struct USQMapMarkerBase* WidgetClass; // 0xc0(0x08)
};

// ScriptStruct Squad.SQMapMarkerGameplayData
// Size: 0x38 (Inherited: 0x00)
struct FSQMapMarkerGameplayData {
	int SquadId; // 0x00(0x04)
	enum class ESQTeam TeamId; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int FireTeamId; // 0x08(0x04)
	struct FVector_NetQuantize LocationVector; // 0x0c(0x0c)
	struct FVector_NetQuantize DistanceRotationVector; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct USQMapMarkerDataAsset* MapMarkerDataAsset; // 0x28(0x08)
	char UniqueID; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float CreationTime; // 0x34(0x04)
};

// ScriptStruct Squad.SQLedColorScheme
// Size: 0xd0 (Inherited: 0x00)
struct FSQLedColorScheme {
	struct FColor DefaultColor; // 0x00(0x04)
	struct FColor BgColor; // 0x04(0x04)
	struct FColor DeadColor; // 0x08(0x04)
	struct FColor InjuredColor; // 0x0c(0x04)
	struct TMap<struct FName, struct FColor> ControlsColors; // 0x10(0x50)
	float UpdateFrequency; // 0x60(0x04)
	float LowAmmoThreshold; // 0x64(0x04)
	float LowStaminaThreshold; // 0x68(0x04)
	char pad_6C[0x64]; // 0x6c(0x64)
};

// ScriptStruct Squad.SQAvailabilityState_Action
// Size: 0x50 (Inherited: 0x00)
struct FSQAvailabilityState_Action {
	struct FSQAvailabilityState Status; // 0x00(0x48)
	struct USQAvailability_Action* Availability; // 0x48(0x08)
};

// ScriptStruct Squad.SQAvailabilityState_Role
// Size: 0x58 (Inherited: 0x00)
struct FSQAvailabilityState_Role {
	struct FSQAvailabilityState Status; // 0x00(0x48)
	struct USQAvailability_Role* Availability; // 0x48(0x08)
	bool SwappableWithCurrent; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Squad.SQAvailabilityState_Vehicle
// Size: 0x50 (Inherited: 0x00)
struct FSQAvailabilityState_Vehicle {
	struct FSQAvailabilityState Status; // 0x00(0x48)
	struct USQAvailability_Vehicle* Availability; // 0x48(0x08)
};

// ScriptStruct Squad.SQFireTeam
// Size: 0x18 (Inherited: 0x00)
struct FSQFireTeam {
	struct TArray<struct ASQPlayerController*> Players; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Squad.SQBlueprintLoginResult
// Size: 0x10 (Inherited: 0x00)
struct FSQBlueprintLoginResult {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Squad.BlueprintOnlineItemDefinition
// Size: 0x10 (Inherited: 0x00)
struct FBlueprintOnlineItemDefinition {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Squad.HeatMapRecording
// Size: 0x90 (Inherited: 0x00)
struct FHeatMapRecording {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Squad.HeatMapRecordingSample
// Size: 0x20 (Inherited: 0x00)
struct FHeatMapRecordingSample {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Squad.ODKAnalyticsDataInterface
// Size: 0x08 (Inherited: 0x00)
struct FODKAnalyticsDataInterface {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Squad.ODKOSData
// Size: 0x28 (Inherited: 0x08)
struct FODKOSData : FODKAnalyticsDataInterface {
	struct FString os_MajorVersion; // 0x08(0x10)
	struct FString os_MinorVersion; // 0x18(0x10)
};

// ScriptStruct Squad.ODKHardwareData
// Size: 0x30 (Inherited: 0x08)
struct FODKHardwareData : FODKAnalyticsDataInterface {
	struct FString cpu; // 0x08(0x10)
	struct FString gpu; // 0x18(0x10)
	uint64 ramBytes; // 0x28(0x08)
};

// ScriptStruct Squad.ODKPopulationData
// Size: 0x18 (Inherited: 0x08)
struct FODKPopulationData : FODKAnalyticsDataInterface {
	int pop_Mean; // 0x08(0x04)
	int pop_Max; // 0x0c(0x04)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Squad.ODKStatisticalData_Int
// Size: 0x40 (Inherited: 0x08)
struct FODKStatisticalData_Int : FODKAnalyticsDataInterface {
	int64 Min; // 0x08(0x08)
	int64 Max; // 0x10(0x08)
	int64 q1; // 0x18(0x08)
	int64 mean; // 0x20(0x08)
	int64 q3; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct Squad.ODKDrawTimingData
// Size: 0x40 (Inherited: 0x40)
struct FODKDrawTimingData : FODKStatisticalData_Int {
};

// ScriptStruct Squad.ODKGPUTimingData
// Size: 0x40 (Inherited: 0x40)
struct FODKGPUTimingData : FODKStatisticalData_Int {
};

// ScriptStruct Squad.ODKGameTimingData
// Size: 0x40 (Inherited: 0x40)
struct FODKGameTimingData : FODKStatisticalData_Int {
};

// ScriptStruct Squad.ODKPerformanceData
// Size: 0x40 (Inherited: 0x40)
struct FODKPerformanceData : FODKStatisticalData_Int {
};

// ScriptStruct Squad.ODKStatisticalData_Float
// Size: 0x30 (Inherited: 0x08)
struct FODKStatisticalData_Float : FODKAnalyticsDataInterface {
	float Min; // 0x08(0x04)
	float Max; // 0x0c(0x04)
	float q1; // 0x10(0x04)
	float mean; // 0x14(0x04)
	float q3; // 0x18(0x04)
	char pad_1C[0x14]; // 0x1c(0x14)
};

// ScriptStruct Squad.ODKSessionData
// Size: 0x30 (Inherited: 0x08)
struct FODKSessionData : FODKAnalyticsDataInterface {
	struct FString GameVersion; // 0x08(0x10)
	struct FString MapName; // 0x18(0x10)
	int TotalSamples; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Squad.SQMarkerReference
// Size: 0x28 (Inherited: 0x00)
struct FSQMarkerReference {
	struct USQ_HexMenu_BaseAction* MarkerType; // 0x00(0x08)
	bool bSquadOnly; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct USQ_HexMenu_BaseAction*> Markers; // 0x10(0x10)
	int ConcurrentMarkersLimit; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Squad.SQActionParameters
// Size: 0x40 (Inherited: 0x00)
struct FSQActionParameters {
	struct FTransform Position; // 0x00(0x30)
	float distance; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct Squad.SQReverbVolumeEffect
// Size: 0x20 (Inherited: 0x00)
struct FSQReverbVolumeEffect {
	struct UReverbEffect* ReverbEffect; // 0x00(0x08)
	struct FName EffectName; // 0x08(0x08)
	float EffectVolume; // 0x10(0x04)
	float EffectFadeTime; // 0x14(0x04)
	float EffectPriority; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Squad.SQCachedTransitionData
// Size: 0x24 (Inherited: 0x00)
struct FSQCachedTransitionData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName FromStateName; // 0x08(0x08)
	struct FName ToStateName; // 0x10(0x08)
	char pad_18[0xc]; // 0x18(0x0c)
};

// ScriptStruct Squad.SQCachedRelevantAnimData
// Size: 0x1c (Inherited: 0x00)
struct FSQCachedRelevantAnimData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Squad.SQCachedAssetPlayerData
// Size: 0x20 (Inherited: 0x00)
struct FSQCachedAssetPlayerData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	struct FName InstanceName; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Squad.SQCachedStateArray
// Size: 0x18 (Inherited: 0x00)
struct FSQCachedStateArray {
	struct TArray<struct FSQCachedStateData> States; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Squad.SQCachedStateData
// Size: 0x1c (Inherited: 0x00)
struct FSQCachedStateData {
	struct FName StateMachineName; // 0x00(0x08)
	struct FName StateName; // 0x08(0x08)
	char pad_10[0xc]; // 0x10(0x0c)
};

// ScriptStruct Squad.SQEmoteAnims
// Size: 0x28 (Inherited: 0x00)
struct FSQEmoteAnims {
	bool bForceIfCantPlay; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* FirstPersonAnim; // 0x08(0x08)
	struct UAnimMontage* ThirdPersonAnim; // 0x10(0x08)
	struct UAnimMontage* FirstPersonEndAnim; // 0x18(0x08)
	struct UAnimMontage* ThirdPersonEndAnim; // 0x20(0x08)
};

// ScriptStruct Squad.SQAnimNode_BoneDrivenController
// Size: 0x128 (Inherited: 0xc8)
struct FSQAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xc8(0x10)
	enum class ESQComponentType SourceComponent; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UCurveFloat* DrivingCurve; // 0xe0(0x08)
	float Multiplier; // 0xe8(0x04)
	bool bUseRange; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	float RangeMin; // 0xf0(0x04)
	float RangeMax; // 0xf4(0x04)
	float RemappedMin; // 0xf8(0x04)
	float RemappedMax; // 0xfc(0x04)
	enum class ESQDrivenDestinationMode DestinationMode; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FName ParameterName; // 0x104(0x08)
	struct FBoneReference TargetBone; // 0x10c(0x10)
	enum class EBoneControlSpace TargetComponentSpace; // 0x11c(0x01)
	enum class ESQComponentType TargetComponent; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	char bAffectTargetTranslationX : 1; // 0x120(0x01)
	char bAffectTargetTranslationY : 1; // 0x120(0x01)
	char bAffectTargetTranslationZ : 1; // 0x120(0x01)
	char bAffectTargetRotationX : 1; // 0x120(0x01)
	char bAffectTargetRotationY : 1; // 0x120(0x01)
	char bAffectTargetRotationZ : 1; // 0x120(0x01)
	char bAffectTargetScaleX : 1; // 0x120(0x01)
	char bAffectTargetScaleY : 1; // 0x120(0x01)
	char bAffectTargetScaleZ : 1; // 0x121(0x01)
	char pad_121_1 : 7; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	enum class ESQDrivenBoneModificationMode ModificationMode; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
};

// ScriptStruct Squad.SQAnimNode_WheelHandler
// Size: 0xf8 (Inherited: 0xc8)
struct FSQAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	float Smoothing; // 0xc8(0x04)
	char pad_CC[0x1c]; // 0xcc(0x1c)
	struct TArray<struct FVector> PreviousWheelLocations; // 0xe8(0x10)
};

// ScriptStruct Squad.SQApprovalEntryClientDesc
// Size: 0x08 (Inherited: 0x00)
struct FSQApprovalEntryClientDesc {
	float ExpireIn; // 0x00(0x04)
	float Timestamp; // 0x04(0x04)
};

// ScriptStruct Squad.SQApprovalEntryRequest
// Size: 0x38 (Inherited: 0x00)
struct FSQApprovalEntryRequest {
	enum class EApprovalRequestTypes RequestType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* PtrParams[0x4]; // 0x08(0x20)
	struct FName MessageTableRowName; // 0x28(0x08)
	float ExpireIn; // 0x30(0x04)
	float Timestamp; // 0x34(0x04)
};

// ScriptStruct Squad.SQApprovalEntryRequestMessage
// Size: 0x40 (Inherited: 0x08)
struct FSQApprovalEntryRequestMessage : FTableRowBase {
	struct FText MainText; // 0x08(0x18)
	struct UTexture2D* Icon; // 0x20(0x08)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct Squad.SQArmorInfo
// Size: 0x04 (Inherited: 0x00)
struct FSQArmorInfo {
	float Thickness; // 0x00(0x04)
};

// ScriptStruct Squad.SQButtonStyle
// Size: 0x80 (Inherited: 0x00)
struct FSQButtonStyle {
	bool bUseStyling; // 0x00(0x01)
	bool bUseImageStyling; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UTexture2D* NormalImage; // 0x08(0x08)
	struct UTexture2D* HoveredImage; // 0x10(0x08)
	struct UTexture2D* PressedImage; // 0x18(0x08)
	struct UTexture2D* DisabledImage; // 0x20(0x08)
	bool bUseTintStyling; // 0x28(0x01)
	bool bUseColorBlending; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FLinearColor NormalTint; // 0x2c(0x10)
	struct FLinearColor HoveredTint; // 0x3c(0x10)
	struct FLinearColor PressedTint; // 0x4c(0x10)
	struct FLinearColor DisabledTint; // 0x5c(0x10)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct USoundCue* PressedSoundCue; // 0x70(0x08)
	struct USoundCue* HoveredSoundCue; // 0x78(0x08)
};

// ScriptStruct Squad.MultithreadObjectPair
// Size: 0x18 (Inherited: 0x00)
struct FMultithreadObjectPair {
	struct USQMultithreadObject* Object; // 0x00(0x08)
	DelegateProperty CompletionDelegate; // 0x08(0x10)
};

// ScriptStruct Squad.SQBoundaryListenerData
// Size: 0x14 (Inherited: 0x00)
struct FSQBoundaryListenerData {
	bool bInsideBoundary; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CheckTime; // 0x04(0x04)
	float EntryTime; // 0x08(0x04)
	float ExitTime; // 0x0c(0x04)
	char pad_10[0x4]; // 0x10(0x04)
};

// ScriptStruct Squad.SQBuffDesc
// Size: 0x08 (Inherited: 0x00)
struct FSQBuffDesc {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Squad.CaptureZoneStats
// Size: 0x18 (Inherited: 0x00)
struct FCaptureZoneStats {
	struct UCurveFloat* PlayerAdvantageToTimeToCapHeldPoint; // 0x00(0x08)
	float NeutralFlagCaptureRateMultiplier; // 0x08(0x04)
	int MinSoldiersToCaptureHeldPoint; // 0x0c(0x04)
	int MinSoldiersToCaptureNeutralPoint; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Squad.SQChatStyle
// Size: 0x900 (Inherited: 0x08)
struct FSQChatStyle : FSlateWidgetStyle {
	struct FEditableTextBoxStyle TextEntryStyle; // 0x08(0x7f0)
	struct FSlateBrush BackingBrush; // 0x7f8(0x88)
	struct FSlateColor BoxBorderColor; // 0x880(0x28)
	struct FSlateColor TextColor; // 0x8a8(0x28)
	struct FSlateSound RxMessgeSound; // 0x8d0(0x18)
	struct FSlateSound TxMessgeSound; // 0x8e8(0x18)
};

// ScriptStruct Squad.SQChunkRule
// Size: 0x38 (Inherited: 0x00)
struct FSQChunkRule {
	struct FString RuleLabel; // 0x00(0x10)
	struct TArray<struct FInt32Range> ParentChunkIDs; // 0x10(0x10)
	struct TArray<struct FInt32Range> ChildsChunkIDs; // 0x20(0x10)
	enum class ESQChunkBehavior Behavior; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Squad.SQLocalizedDrawTimingData
// Size: 0x60 (Inherited: 0x40)
struct FSQLocalizedDrawTimingData : FODKDrawTimingData {
	struct FVector Max_Location; // 0x40(0x0c)
	struct FRotator Max_Direction; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Squad.SQLocalizedGPUTimingData
// Size: 0x60 (Inherited: 0x40)
struct FSQLocalizedGPUTimingData : FODKGPUTimingData {
	struct FVector Max_Location; // 0x40(0x0c)
	struct FRotator Max_Direction; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Squad.SQLocalizedGameTimingData
// Size: 0x60 (Inherited: 0x40)
struct FSQLocalizedGameTimingData : FODKGameTimingData {
	struct FVector Max_Location; // 0x40(0x0c)
	struct FRotator Max_Direction; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Squad.SQLocalizedPerformanceData
// Size: 0x60 (Inherited: 0x40)
struct FSQLocalizedPerformanceData : FODKPerformanceData {
	struct FVector Min_Location; // 0x40(0x0c)
	struct FRotator Min_Direction; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Squad.SQSessionData
// Size: 0x40 (Inherited: 0x30)
struct FSQSessionData : FODKSessionData {
	struct FGuid SessionId; // 0x30(0x10)
};

// ScriptStruct Squad.SQClientSettingsData
// Size: 0x80 (Inherited: 0x08)
struct FSQClientSettingsData : FODKAnalyticsDataInterface {
	struct FString WindowMode; // 0x08(0x10)
	struct FIntPoint Resolution; // 0x18(0x08)
	float ResolutionScale; // 0x20(0x04)
	bool VSync; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float FieldOfView; // 0x28(0x04)
	float MaxFPS; // 0x2c(0x04)
	int GfxQuality; // 0x30(0x04)
	int AAQuality; // 0x34(0x04)
	int AASamples; // 0x38(0x04)
	int ShadowQuality; // 0x3c(0x04)
	int ContactShadows; // 0x40(0x04)
	int FarShadows; // 0x44(0x04)
	int TexQuality; // 0x48(0x04)
	int TexAnisoFilter; // 0x4c(0x04)
	int TexVRamUsage; // 0x50(0x04)
	bool TexVRamUncap; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	int ParticleQuality; // 0x58(0x04)
	int AOQuality; // 0x5c(0x04)
	bool SSAOEnabled; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int PPQuality; // 0x64(0x04)
	int LensFlare; // 0x68(0x04)
	float MotionBlur; // 0x6c(0x04)
	float Sharpening; // 0x70(0x04)
	float GradingBrightness; // 0x74(0x04)
	float GradingContrast; // 0x78(0x04)
	float GradingSaturation; // 0x7c(0x04)
};

// ScriptStruct Squad.SQTeamCommands
// Size: 0x20 (Inherited: 0x08)
struct FSQTeamCommands : FTableRowBase {
	struct USQGridData_CommandOption* CommandData; // 0x08(0x08)
	struct TArray<struct FString> Team; // 0x10(0x10)
};

// ScriptStruct Squad.SQCommanderActionDataArray
// Size: 0x118 (Inherited: 0x108)
struct FSQCommanderActionDataArray : FFastArraySerializer {
	struct TArray<struct FSQCommandActionDataFASItem> Items; // 0x108(0x10)
};

// ScriptStruct Squad.SQCommandActionDataFASItem
// Size: 0x28 (Inherited: 0x0c)
struct FSQCommandActionDataFASItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSQCommandActionData Content; // 0x10(0x18)
};

// ScriptStruct Squad.SQCommanderActionSounds
// Size: 0xa0 (Inherited: 0x00)
struct FSQCommanderActionSounds {
	struct USoundCue* CommandActionPlaced; // 0x00(0x28)
	struct USoundCue* CommandActionActive; // 0x28(0x28)
	struct USoundCue* CommandActionDestroyed; // 0x50(0x28)
	struct USoundCue* CommandActionEnded; // 0x78(0x28)
};

// ScriptStruct Squad.CommanderNomineeArray
// Size: 0x118 (Inherited: 0x108)
struct FCommanderNomineeArray : FFastArraySerializer {
	struct TArray<struct FCommanderVoteNominee> Items; // 0x108(0x10)
};

// ScriptStruct Squad.CommanderVoteNominee
// Size: 0x20 (Inherited: 0x0c)
struct FCommanderVoteNominee : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ASQPlayerState* NomineeState; // 0x10(0x08)
	int VoteCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Squad.SQRemoteServerConfig
// Size: 0x01 (Inherited: 0x00)
struct FSQRemoteServerConfig {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Squad.SQRemoteGameConfig
// Size: 0x10 (Inherited: 0x00)
struct FSQRemoteGameConfig {
	bool bLicensingEnabled; // 0x00(0x01)
	bool bServerHealthEnabled; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ServerHealthHigh; // 0x04(0x04)
	float ServerHealthLow; // 0x08(0x04)
	bool bModdedServersOnTop; // 0x0c(0x01)
	bool bModVersioningEnabled; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Squad.SQServerSettings
// Size: 0x1d8 (Inherited: 0x00)
struct FSQServerSettings {
	struct FString ServerName; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
	int NumPlayersDiffForTeamChanges; // 0x20(0x04)
	bool bAllowTeamChanges; // 0x24(0x01)
	bool bPreventTeamChangeIfUnbalanced; // 0x25(0x01)
	bool bEnforceTeamBalance; // 0x26(0x01)
	bool bCommunityAdminAccess; // 0x27(0x01)
	bool bRecordDemos; // 0x28(0x01)
	bool bAllowPublicClientsToRecord; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int NumReservedSlots; // 0x2c(0x04)
	int PublicQueueLimit; // 0x30(0x04)
	int RejoinSquadDelayAfterKick; // 0x34(0x04)
	int MaxPlayers; // 0x38(0x04)
	char pad_3C[0x8]; // 0x3c(0x08)
	int ServerMessageInterval; // 0x44(0x04)
	char pad_48[0x18]; // 0x48(0x18)
	int AutoTKBanTime; // 0x60(0x04)
	int AutoTKBanNumberTKs; // 0x64(0x04)
	char pad_68[0x2]; // 0x68(0x02)
	bool bTKAutoKickEnabled; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct FString MessageOfTheDay; // 0x70(0x10)
	enum class ESQMapRotationMode MapRotationMode; // 0x80(0x01)
	bool RandomizeAtStart; // 0x81(0x01)
	bool UseVoteFactions; // 0x82(0x01)
	bool UseVoteLevel; // 0x83(0x01)
	bool UseVoteLayer; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct TArray<struct FName> LevelRotation; // 0x88(0x10)
	struct TArray<struct FName> LayerRotation; // 0x98(0x10)
	struct TArray<struct FName> ExcludedFactions; // 0xa8(0x10)
	struct TArray<struct FName> ExcludedFactionSetups; // 0xb8(0x10)
	struct TArray<struct FName> ExcludedLevels; // 0xc8(0x10)
	struct TArray<struct FName> ExcludedLayers; // 0xd8(0x10)
	struct TMap<struct FString, struct FString> CustomOptions; // 0xe8(0x50)
	int LevelCountPerVote; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FSQVoteConfig LevelVoteConfig; // 0x140(0x40)
	int LayerCountPerVote; // 0x180(0x04)
	char pad_184[0x4]; // 0x184(0x04)
	struct FSQVoteConfig LayerVoteConfig; // 0x188(0x40)
	struct TArray<struct FSQVoteConfig> FactionVoteConfigs; // 0x1c8(0x10)
};

// ScriptStruct Squad.SQVoteConfig
// Size: 0x40 (Inherited: 0x00)
struct FSQVoteConfig {
	struct FDataTableRowHandle Data; // 0x00(0x10)
	struct FTimespan Duration; // 0x10(0x08)
	struct FTimespan ResultPresentationDuration; // 0x18(0x08)
	enum class ESQAdminAccessLevels AccessFilter; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<enum class ESQTeam> TeamFilter; // 0x28(0x10)
	struct USQVoteSessionAuthority* AuthoritySessionType; // 0x38(0x08)
};

// ScriptStruct Squad.SQConfigValueLoader
// Size: 0x08 (Inherited: 0x00)
struct FSQConfigValueLoader {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Squad.SQConfigMappedValueLoader
// Size: 0x58 (Inherited: 0x08)
struct FSQConfigMappedValueLoader : FSQConfigValueLoader {
	char pad_8[0x50]; // 0x08(0x50)
};

// ScriptStruct Squad.SQConsoleCommand
// Size: 0x60 (Inherited: 0x28)
struct FSQConsoleCommand : FAutoCompleteCommand {
	char pad_28[0x38]; // 0x28(0x38)
};

// ScriptStruct Squad.SQCoreStateDataToIdMap
// Size: 0x50 (Inherited: 0x00)
struct FSQCoreStateDataToIdMap {
	struct TMap<struct USQCoreStateData*, struct FSQCoreStateId> Raw; // 0x00(0x50)
};

// ScriptStruct Squad.SQCoreStateId
// Size: 0x02 (Inherited: 0x00)
struct FSQCoreStateId {
	uint16 Raw; // 0x00(0x02)
};

// ScriptStruct Squad.CoreStateDataTickFunction
// Size: 0x58 (Inherited: 0x50)
struct FCoreStateDataTickFunction : FTickFunction {
	struct USQCoreStateData* Target; // 0x50(0x08)
};

// ScriptStruct Squad.SQCoreStateDataList
// Size: 0x10 (Inherited: 0x00)
struct FSQCoreStateDataList {
	struct TArray<struct USQCoreStateData*> Raw; // 0x00(0x10)
};

// ScriptStruct Squad.SQSoldierInfo
// Size: 0x28 (Inherited: 0x00)
struct FSQSoldierInfo {
	int SquadId; // 0x00(0x04)
	int FireTeamId; // 0x04(0x04)
	enum class ESQAuthorityTypes LeaderState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct USQRoleSettings* CurrentRole; // 0x10(0x08)
	struct FString PlayerName; // 0x18(0x10)
};

// ScriptStruct Squad.SQVehicleOccupantInfo
// Size: 0x38 (Inherited: 0x28)
struct FSQVehicleOccupantInfo : FSQSoldierInfo {
	char bIsOccupied : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct ASQPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct Squad.WidgetGroup
// Size: 0x10 (Inherited: 0x00)
struct FWidgetGroup {
	struct TArray<struct USQCoreStateWidget*> List; // 0x00(0x10)
};

// ScriptStruct Squad.SQDamageTypeEffects
// Size: 0x28 (Inherited: 0x00)
struct FSQDamageTypeEffects {
	struct FSQDamageEffect DefaultDamageEffect; // 0x00(0x18)
	struct TArray<struct FSQDamageEffect> DamageEffects; // 0x18(0x10)
};

// ScriptStruct Squad.SQDamageEffect
// Size: 0x18 (Inherited: 0x00)
struct FSQDamageEffect {
	struct UDamageType* DamageTypeClass; // 0x00(0x08)
	struct TArray<struct FSQEffectParticleSound> Effects; // 0x08(0x10)
};

// ScriptStruct Squad.SQEffectParticleSound
// Size: 0x18 (Inherited: 0x00)
struct FSQEffectParticleSound {
	struct ASQLastingEffect* LastingEffectClass; // 0x00(0x08)
	struct UParticleSystem* ParticleEffect; // 0x08(0x08)
	struct USoundBase* SoundEffect; // 0x10(0x08)
};

// ScriptStruct Squad.SQDamageModifier
// Size: 0x28 (Inherited: 0x00)
struct FSQDamageModifier {
	struct UDamageType* DamageTypeClass; // 0x00(0x08)
	float Modifier; // 0x08(0x04)
	bool bForwardDamageToSoldier; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float ForwardDamageToSoldierModifier; // 0x10(0x04)
	bool bForwardDeathToSoldier; // 0x14(0x01)
	bool bIncapSoldierOnDeath; // 0x15(0x01)
	bool bOnlyPassDamageIfDirectHit; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float DirectHitDamageMultiplier; // 0x18(0x04)
	float IndirectHitDamageMultiplier; // 0x1c(0x04)
	float DirectHitRadialDamageMultiplier; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Squad.SQDeployableChangeStateEffect
// Size: 0x20 (Inherited: 0x00)
struct FSQDeployableChangeStateEffect {
	enum class ESQBuildState OldBuildState; // 0x00(0x01)
	enum class ESQBuildState NewBuildState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CullingDistanceInMeters; // 0x04(0x04)
	struct FSQEffectParticleSound Effect; // 0x08(0x18)
};

// ScriptStruct Squad.SQDeployableStateDamageEffect
// Size: 0x18 (Inherited: 0x00)
struct FSQDeployableStateDamageEffect {
	enum class ESQBuildState OldBuildState; // 0x00(0x01)
	enum class ESQBuildState NewBuildState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CullingDistanceInMeters; // 0x04(0x04)
	struct TArray<struct FSQDamageEffect> DamageEffects; // 0x08(0x10)
};

// ScriptStruct Squad.SQDrawChatStruct
// Size: 0xb0 (Inherited: 0x00)
struct FSQDrawChatStruct {
	struct FVector2D RenderPosition; // 0x00(0x08)
	struct FText Text; // 0x08(0x18)
	struct FLinearColor Color; // 0x20(0x10)
	struct FSQMessageBoxInfo Info; // 0x30(0x78)
	int Index; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Squad.SQAudioComponentPool
// Size: 0x20 (Inherited: 0x00)
struct FSQAudioComponentPool {
	struct TArray<struct UAudioComponent*> AudioComponentPool; // 0x00(0x10)
	struct USceneComponent* AttachToComponent; // 0x10(0x08)
	struct FName AttachPointName; // 0x18(0x08)
};

// ScriptStruct Squad.SQAnimPlayTime
// Size: 0x0c (Inherited: 0x00)
struct FSQAnimPlayTime {
	float WeaponPlayTime; // 0x00(0x04)
	float Soldier1pPlayTime; // 0x04(0x04)
	float Soldier3pPlayTime; // 0x08(0x04)
};

// ScriptStruct Squad.SQBlueprintFriend
// Size: 0x60 (Inherited: 0x00)
struct FSQBlueprintFriend {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	struct FString StatusString; // 0x20(0x10)
	bool bIsOnline; // 0x30(0x01)
	bool bIsPlaying; // 0x31(0x01)
	bool bIsPlayingThisGame; // 0x32(0x01)
	bool bIsJoinable; // 0x33(0x01)
	char pad_34[0x2c]; // 0x34(0x2c)
};

// ScriptStruct Squad.SQFlagScoreInfo
// Size: 0x1c (Inherited: 0x00)
struct FSQFlagScoreInfo {
	int ScoreForFlagNeutralize; // 0x00(0x04)
	int ScoreForCapture; // 0x04(0x04)
	int ScoreForDefense; // 0x08(0x04)
	int ScoreOnCaptureTick; // 0x0c(0x04)
	int ScoreOnDefenseTick; // 0x10(0x04)
	enum class ESQKillReportChannel CaptureReportChannel; // 0x14(0x01)
	enum class ESQKillReportChannel NeutralizeReportChannel; // 0x15(0x01)
	enum class ESQKillReportChannel DefenseReportChannel; // 0x16(0x01)
	bool bNotifyPlayerOnNeutral; // 0x17(0x01)
	bool bNotifyPlayerOnCapture; // 0x18(0x01)
	bool bNotifyPlayerOnDefense; // 0x19(0x01)
	bool bNotifyPlayerOnTick; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Squad.SQGameFlags
// Size: 0x0e (Inherited: 0x00)
struct FSQGameFlags {
	bool UseFogOfWar; // 0x00(0x01)
	bool ForceAllVehicleAvailability; // 0x01(0x01)
	bool ForceAllDeployableAvailability; // 0x02(0x01)
	bool ForceAllRoleAvailability; // 0x03(0x01)
	bool ForceAllActionAvailability; // 0x04(0x01)
	bool NoTeamChangeTimer; // 0x05(0x01)
	bool NoRespawnTimer; // 0x06(0x01)
	bool VehicleClaimingDisabled; // 0x07(0x01)
	bool VehicleTeamRequirementDisabled; // 0x08(0x01)
	bool VehicleKitRequirementDisabled; // 0x09(0x01)
	bool VehicleGodModeEnabled; // 0x0a(0x01)
	bool ForceNoCommanderCooldowns; // 0x0b(0x01)
	bool CommanderDisabled; // 0x0c(0x01)
	bool ForceAllowCommanderActions; // 0x0d(0x01)
};

// ScriptStruct Squad.SQGameSubsystemObject
// Size: 0x18 (Inherited: 0x00)
struct FSQGameSubsystemObject {
	struct FString SubsystemClass; // 0x00(0x10)
	bool bRunOnServer; // 0x10(0x01)
	bool bRunOnClient; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Squad.SQSettingBase
// Size: 0x10 (Inherited: 0x00)
struct FSQSettingBase {
	char pad_0[0x8]; // 0x00(0x08)
	uint32 Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Squad.SQCVarSetting
// Size: 0x28 (Inherited: 0x10)
struct FSQCVarSetting : FSQSettingBase {
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Squad.SQFloatCVarSetting
// Size: 0x28 (Inherited: 0x28)
struct FSQFloatCVarSetting : FSQCVarSetting {
};

// ScriptStruct Squad.SQInt32CVarSetting
// Size: 0x30 (Inherited: 0x28)
struct FSQInt32CVarSetting : FSQCVarSetting {
	char pad_28[0x4]; // 0x28(0x04)
	int UniqueLevel; // 0x2c(0x04)
};

// ScriptStruct Squad.SQScalabilitySetting
// Size: 0x40 (Inherited: 0x10)
struct FSQScalabilitySetting : FSQSettingBase {
	char pad_10[0x30]; // 0x10(0x30)
};

// ScriptStruct Squad.SQJoyStickConfig
// Size: 0x10 (Inherited: 0x00)
struct FSQJoyStickConfig {
	enum class ESQJoystickCurveTypes CurveType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DeadZone; // 0x04(0x04)
	bool FlipFactor; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CurveFactor; // 0x0c(0x04)
};

// ScriptStruct Squad.SQDesignLink
// Size: 0x10 (Inherited: 0x00)
struct FSQDesignLink {
	struct AActor* NodeA; // 0x00(0x08)
	struct AActor* NodeB; // 0x08(0x08)
};

// ScriptStruct Squad.SQRoute
// Size: 0x20 (Inherited: 0x00)
struct FSQRoute {
	struct TArray<struct FSQGraphLink> Links; // 0x00(0x10)
	struct USQCaptureZoneComponent* Source; // 0x10(0x08)
	struct USQCaptureZoneComponent* Destination; // 0x18(0x08)
};

// ScriptStruct Squad.SQGraphLink
// Size: 0x10 (Inherited: 0x00)
struct FSQGraphLink {
	struct USQGraphNodeComponent* NodeA; // 0x00(0x08)
	struct USQGraphNodeComponent* NodeB; // 0x08(0x08)
};

// ScriptStruct Squad.SQRoute2
// Size: 0x50 (Inherited: 0x00)
struct FSQRoute2 {
	struct TSet<struct FSQGraphLink> Links; // 0x00(0x50)
};

// ScriptStruct Squad.SQGrenadeData
// Size: 0x48 (Inherited: 0x00)
struct FSQGrenadeData {
	bool bInfiniteAmmo; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int InitialAmmo; // 0x04(0x04)
	int MaxAmmo; // 0x08(0x04)
	float OverhandThrowVelocity; // 0x0c(0x04)
	float UnderhandThrowVelocity; // 0x10(0x04)
	float ThrowReadyTime; // 0x14(0x04)
	float OverhandThrowTime; // 0x18(0x04)
	float UnderhandThrowTime; // 0x1c(0x04)
	float OverhandThrowDuration; // 0x20(0x04)
	float UnderhandThrowDuration; // 0x24(0x04)
	float ThrowModeTransitionTime; // 0x28(0x04)
	float FuseTimeMin; // 0x2c(0x04)
	float FuseTimeMax; // 0x30(0x04)
	float ReloadTime; // 0x34(0x04)
	struct AActor* ProjectileClass; // 0x38(0x08)
	struct FName ProjectileOriginSocketName; // 0x40(0x08)
};

// ScriptStruct Squad.SQGroundVehicleWheelParameters
// Size: 0x48 (Inherited: 0x00)
struct FSQGroundVehicleWheelParameters {
	float WheelsInAir; // 0x00(0x04)
	float WheelsInWater; // 0x04(0x04)
	float WheelDepthUnderwater; // 0x08(0x04)
	float RPM; // 0x0c(0x04)
	float LongSlip; // 0x10(0x04)
	float LatSlip; // 0x14(0x04)
	float Asphalt; // 0x18(0x04)
	float Dirt; // 0x1c(0x04)
	float Grass; // 0x20(0x04)
	float Gravel; // 0x24(0x04)
	float Metal; // 0x28(0x04)
	float Mud; // 0x2c(0x04)
	float Sand; // 0x30(0x04)
	float Snow; // 0x34(0x04)
	float SnowWet; // 0x38(0x04)
	float TallGrass; // 0x3c(0x04)
	float Water; // 0x40(0x04)
	float Wood; // 0x44(0x04)
};

// ScriptStruct Squad.SQVehicleEffectsQualitySetting
// Size: 0x08 (Inherited: 0x00)
struct FSQVehicleEffectsQualitySetting {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CullingDistance; // 0x04(0x04)
};

// ScriptStruct Squad.SQVehicleEffectConfig
// Size: 0x38 (Inherited: 0x00)
struct FSQVehicleEffectConfig {
	struct UParticleSystem* ParticleSystemTemplate; // 0x00(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x08(0x08)
	bool bEnableSounds; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName WheelBoneName; // 0x14(0x08)
	struct TWeakObjectPtr<struct UVehicleWheel> VehicleWheel; // 0x1c(0x08)
	struct TWeakObjectPtr<struct USQDriveTrainComponent> VehicleDriveTrainComponent; // 0x24(0x08)
	struct TWeakObjectPtr<struct USQPhysicalMaterial> PhysMaterial; // 0x2c(0x08)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Squad.SQBoredMontageSet
// Size: 0x18 (Inherited: 0x00)
struct FSQBoredMontageSet {
	struct UAnimMontage* BoredWeaponMontage; // 0x00(0x08)
	struct UAnimMontage* Bored1pMontage; // 0x08(0x08)
	struct UAnimMontage* Bored3pMontage; // 0x10(0x08)
};

// ScriptStruct Squad.SQMutualWeapon
// Size: 0xd0 (Inherited: 0x00)
struct FSQMutualWeapon {
	struct ASQEquipableItem* Weapon; // 0x00(0x08)
	bool bCheckCurrentMagazineForEquip; // 0x08(0x01)
	bool CheckCurrentMagazineForUnequip; // 0x09(0x01)
	bool bCheckPreviousMagazineForEquip; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct UAnimMontage* BothEmptyWeaponEquipMontage; // 0x10(0x08)
	struct UAnimMontage* BothEmpty1pEquipMontage; // 0x18(0x08)
	struct UAnimMontage* BothEmpty3pEquipMontage; // 0x20(0x08)
	float BothEmptyEquipDuration; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAnimMontage* PreviousEmptyOrIgnoreCurrentWeaponEquipMontage; // 0x30(0x08)
	struct UAnimMontage* PreviousEmptyOrIgnoreCurrent1pEquipMontage; // 0x38(0x08)
	struct UAnimMontage* PreviousEmptyOrIgnoreCurrent3pEquipMontage; // 0x40(0x08)
	float PreviousEmptyOrIgnoreCurrentEquipDuration; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAnimMontage* CurrentEmptyOrIgnorePreviousWeaponEquipMontage; // 0x50(0x08)
	struct UAnimMontage* CurrentEmptyOrIgnorePrevious1pEquipMontage; // 0x58(0x08)
	struct UAnimMontage* CurrentEmptyOrIgnorePrevious3pEquipMontage; // 0x60(0x08)
	float CurrentEmptyOrIgnorePreviousEquipDuration; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UAnimMontage* NoneEmptyOrIgnoreBothWeaponEquipMontage; // 0x70(0x08)
	struct UAnimMontage* NoneEmptyOrIgnoreBoth1pEquipMontage; // 0x78(0x08)
	struct UAnimMontage* NoneEmptyOrIgnoreBoth3pEquipMontage; // 0x80(0x08)
	float NoneEmptyOrIgnoreBothEquipDuration; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UAnimMontage* CurrentEmptyWeaponUnequipMontage; // 0x90(0x08)
	struct UAnimMontage* CurrentEmpty1pUnequipMontage; // 0x98(0x08)
	struct UAnimMontage* CurrentEmpty3pUnequipMontage; // 0xa0(0x08)
	float CurrentEmptyUnequipDuration; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct UAnimMontage* NoneOrIgnoreCurrentWeaponUnequipMontage; // 0xb0(0x08)
	struct UAnimMontage* NoneOrIgnoreCurrent1pUnequipMontage; // 0xb8(0x08)
	struct UAnimMontage* NoneOrIgnoreCurrent3pUnequipMontage; // 0xc0(0x08)
	float NoneOrIgnoreCurrentUnequipDuration; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Squad.SQHealSettings
// Size: 0x24 (Inherited: 0x00)
struct FSQHealSettings {
	int TicketsLostOnRevive; // 0x00(0x04)
	int TicketsLostOnHeal; // 0x04(0x04)
	int TicketsLostOnSelfHeal; // 0x08(0x04)
	float PointsForHeal; // 0x0c(0x04)
	float PointsForSelfHeal; // 0x10(0x04)
	float TeamPointsForRevive; // 0x14(0x04)
	float TeamPointsForHeal; // 0x18(0x04)
	float TeamPointsForSelfHeal; // 0x1c(0x04)
	bool DelayHealScore; // 0x20(0x01)
	bool DelaySelfHealScore; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Squad.SQKillDeathSettings
// Size: 0x40 (Inherited: 0x00)
struct FSQKillDeathSettings {
	int TicketsLostOnKill; // 0x00(0x04)
	int TicketsLostOnSuicide; // 0x04(0x04)
	int TicketsLostOnTeamkill; // 0x08(0x04)
	int TicketsLostOnKillCommander; // 0x0c(0x04)
	enum class ESQKillReportChannel KillChannel; // 0x10(0x01)
	enum class ESQKillReportChannel SuicideChannel; // 0x11(0x01)
	enum class ESQKillReportChannel TeamkillChannel; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float PointsForKill; // 0x14(0x04)
	float PointsForWounded; // 0x18(0x04)
	float PointsForSuicide; // 0x1c(0x04)
	float PointsForTeamkill; // 0x20(0x04)
	float PointsForDeath; // 0x24(0x04)
	float TeamPointsForKill; // 0x28(0x04)
	float TeamPointsForSuicide; // 0x2c(0x04)
	float TeamPointsForTeamkill; // 0x30(0x04)
	float TeamPointsForDeath; // 0x34(0x04)
	bool NotifyKillerOnKill; // 0x38(0x01)
	bool NotifyKillerOnTeamkill; // 0x39(0x01)
	bool DelayKillScore; // 0x3a(0x01)
	bool DelayTeamkillScore; // 0x3b(0x01)
	bool DelayDeathScore; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Squad.SQRejectedLicenseInfo
// Size: 0x18 (Inherited: 0x00)
struct FSQRejectedLicenseInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Squad.SQLogisticsSettings
// Size: 0x0c (Inherited: 0x00)
struct FSQLogisticsSettings {
	float AmmoToScore; // 0x00(0x04)
	float ConstructionToScore; // 0x04(0x04)
	float PassengerPercent; // 0x08(0x04)
};

// ScriptStruct Squad.SQLatticeLine
// Size: 0x2c (Inherited: 0x00)
struct FSQLatticeLine {
	struct FVector StartWorldLocation; // 0x00(0x0c)
	struct FVector EndWorldLocation; // 0x0c(0x0c)
	struct FLinearColor Color; // 0x18(0x10)
	float EdgeWidth; // 0x28(0x04)
};

// ScriptStruct Squad.TeamSquadFireteamIdKey
// Size: 0x0c (Inherited: 0x00)
struct FTeamSquadFireteamIdKey {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Squad.SQMarkerLimiterTeam
// Size: 0xa0 (Inherited: 0x00)
struct FSQMarkerLimiterTeam {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Squad.SQMarkerLimiterSquad
// Size: 0xa0 (Inherited: 0x00)
struct FSQMarkerLimiterSquad {
	char pad_0[0xa0]; // 0x00(0xa0)
};

// ScriptStruct Squad.SQMarkerLimiterFireTeam
// Size: 0x50 (Inherited: 0x00)
struct FSQMarkerLimiterFireTeam {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Squad.SQStaticMapMarkerArray
// Size: 0x148 (Inherited: 0x108)
struct FSQStaticMapMarkerArray : FFastArraySerializer {
	struct TArray<struct FSQMapMarkerFastArraySerializerItem> Items; // 0x108(0x10)
	struct TArray<int> ModifiedMarkerIndices; // 0x118(0x10)
	struct FScriptMulticastDelegate MapMarkerCreatedEvent; // 0x128(0x10)
	struct FScriptMulticastDelegate MapMarkerDeletedEvent; // 0x138(0x10)
};

// ScriptStruct Squad.SQMapMarkerFastArraySerializerItem
// Size: 0x50 (Inherited: 0x0c)
struct FSQMapMarkerFastArraySerializerItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSQMapMarkerGameplayData MarkerGameplayData; // 0x10(0x38)
	struct FSQMarkerTimestamps AssignedTimestamp; // 0x48(0x08)
};

// ScriptStruct Squad.SQMarkerTimestamps
// Size: 0x08 (Inherited: 0x00)
struct FSQMarkerTimestamps {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Squad.SQMenuItemStyle
// Size: 0x1a0 (Inherited: 0x08)
struct FSQMenuItemStyle : FSlateWidgetStyle {
	struct FSlateBrush BackgroundBrush; // 0x08(0x88)
	struct FSlateBrush LeftArrowImage; // 0x90(0x88)
	struct FSlateBrush RightArrowImage; // 0x118(0x88)
};

// ScriptStruct Squad.SQMenuSoundsStyle
// Size: 0x38 (Inherited: 0x08)
struct FSQMenuSoundsStyle : FSlateWidgetStyle {
	struct FSlateSound StartGameSound; // 0x08(0x18)
	struct FSlateSound ExitGameSound; // 0x20(0x18)
};

// ScriptStruct Squad.SQMenuStyle
// Size: 0x200 (Inherited: 0x08)
struct FSQMenuStyle : FSlateWidgetStyle {
	struct FSlateBrush HeaderBackgroundBrush; // 0x08(0x88)
	struct FSlateBrush LeftBackgroundBrush; // 0x90(0x88)
	struct FSlateBrush RightBackgroundBrush; // 0x118(0x88)
	struct FSlateSound MenuEnterSound; // 0x1a0(0x18)
	struct FSlateSound MenuBackSound; // 0x1b8(0x18)
	struct FSlateSound OptionChangeSound; // 0x1d0(0x18)
	struct FSlateSound MenuItemChangeSound; // 0x1e8(0x18)
};

// ScriptStruct Squad.SQRepMovement
// Size: 0x40 (Inherited: 0x00)
struct FSQRepMovement {
	char pad_0[0x8]; // 0x00(0x08)
	struct FVector LocationZeroBased; // 0x08(0x0c)
	struct FVector Velocity; // 0x14(0x0c)
	struct FRotator Rotation; // 0x20(0x0c)
	struct FVector RotationalVelocity; // 0x2c(0x0c)
	float ServerTimestamp; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Squad.MovePacket
// Size: 0x38 (Inherited: 0x00)
struct FMovePacket {
	uint32 UniqueID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<char> OldMove; // 0x08(0x10)
	struct TArray<char> NewMove; // 0x18(0x10)
	struct TArray<char> PendingMove; // 0x28(0x10)
};

// ScriptStruct Squad.AdjustPositionAndRotationPacket
// Size: 0x30 (Inherited: 0x00)
struct FAdjustPositionAndRotationPacket {
	uint32 UniqueID; // 0x00(0x04)
	float Timestamp; // 0x04(0x04)
	bool IsAcknowledge; // 0x08(0x01)
	bool HasPosition; // 0x09(0x01)
	bool HasRotation; // 0x0a(0x01)
	bool HasRotationVelocity; // 0x0b(0x01)
	struct FVector LocationZeroBased; // 0x0c(0x0c)
	struct FVector Velocity; // 0x18(0x0c)
	struct FRotator Rotation; // 0x24(0x0c)
};

// ScriptStruct Squad.SQRotationConstraints
// Size: 0x1c (Inherited: 0x00)
struct FSQRotationConstraints {
	struct FVector2D PitchInterval; // 0x00(0x08)
	struct FVector2D YawInterval; // 0x08(0x08)
	struct FVector2D RollInterval; // 0x10(0x08)
	bool bLockPitch; // 0x18(0x01)
	bool bLockYaw; // 0x19(0x01)
	bool bLockRoll; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Squad.SQNotificationLayout
// Size: 0x30 (Inherited: 0x00)
struct FSQNotificationLayout {
	struct UTexture2D* Icon; // 0x00(0x08)
	struct FLinearColor IconColor; // 0x08(0x10)
	struct FLinearColor TextColor; // 0x18(0x10)
	float DisplayTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Squad.SQOptionsStyle
// Size: 0x38 (Inherited: 0x08)
struct FSQOptionsStyle : FSlateWidgetStyle {
	struct FSlateSound AcceptChangesSound; // 0x08(0x18)
	struct FSlateSound DiscardChangesSound; // 0x20(0x18)
};

// ScriptStruct Squad.SQWeaponGroupDataArray
// Size: 0x118 (Inherited: 0x108)
struct FSQWeaponGroupDataArray : FFastArraySerializer {
	struct TArray<struct FSQWeaponGroupData> Items; // 0x108(0x10)
};

// ScriptStruct Squad.SQWeaponGroupData
// Size: 0x28 (Inherited: 0x0c)
struct FSQWeaponGroupData : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct ASQEquipableItem*> Weapons; // 0x10(0x10)
	int Index; // 0x20(0x04)
	int SelectedWeaponOffset; // 0x24(0x04)
};

// ScriptStruct Squad.SQMovePostPhysicsTickFunction
// Size: 0x58 (Inherited: 0x50)
struct FSQMovePostPhysicsTickFunction : FTickFunction {
	struct USQPawnMovementComponent* Target; // 0x50(0x08)
};

// ScriptStruct Squad.SQSoldierEffect
// Size: 0x38 (Inherited: 0x00)
struct FSQSoldierEffect {
	struct UCurveFloat* SoldierInclineMovementSpeedCurve; // 0x00(0x08)
	bool bPlayFootstepEffectWhenMovementInteractionTriggered; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UParticleSystem* FootstepEffect; // 0x10(0x08)
	struct USoundCue* FootstepSound; // 0x18(0x08)
	struct UParticleSystem* MovementInteractionParticleEffect; // 0x20(0x08)
	struct USoundCue* MovementInteractionSound; // 0x28(0x08)
	struct USoundCue* LandedSound; // 0x30(0x08)
};

// ScriptStruct Squad.SQVehicleEffect
// Size: 0x90 (Inherited: 0x00)
struct FSQVehicleEffect {
	struct FSQPhysMatVehicleFXData VehicleFXData; // 0x00(0x64)
	char pad_64[0x4]; // 0x64(0x04)
	struct USoundCue* VehicleLightImpactSound; // 0x68(0x08)
	struct UParticleSystem* VehicleLightImpactEffect; // 0x70(0x08)
	struct USoundCue* VehicleImpactSound; // 0x78(0x08)
	struct UParticleSystem* VehicleImpactEffect; // 0x80(0x08)
	bool bDoVehicleParticlesUseRotation; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Squad.SQPhysMatVehicleFXData
// Size: 0x64 (Inherited: 0x00)
struct FSQPhysMatVehicleFXData {
	float Asphalt; // 0x00(0x04)
	float Dirt; // 0x04(0x04)
	float Grass; // 0x08(0x04)
	float Gravel; // 0x0c(0x04)
	float Metal; // 0x10(0x04)
	float Mud; // 0x14(0x04)
	float Sand; // 0x18(0x04)
	float Snow; // 0x1c(0x04)
	float SnowWet; // 0x20(0x04)
	float TallGrass; // 0x24(0x04)
	float Water; // 0x28(0x04)
	float Wood; // 0x2c(0x04)
	struct FLinearColor DustColor; // 0x30(0x10)
	float DustLifetime; // 0x40(0x04)
	struct FVector DustSize; // 0x44(0x0c)
	struct FLinearColor DebrisColor; // 0x50(0x10)
	float DebrisSpawnRate; // 0x60(0x04)
};

// ScriptStruct Squad.SQEffectsSet
// Size: 0x138 (Inherited: 0x00)
struct FSQEffectsSet {
	struct FSQExplosionEffect ImpactEffects; // 0x00(0xa8)
	struct FSQProjectileImpactEffect ThrowableEffects; // 0xa8(0x88)
	bool bOverlapsThrowableProjectiles; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// ScriptStruct Squad.SQProjectileImpactEffect
// Size: 0x88 (Inherited: 0x00)
struct FSQProjectileImpactEffect {
	struct TArray<struct UParticleSystem*> Particles; // 0x00(0x10)
	struct USQShockwave* Shockwave; // 0x10(0x08)
	struct TArray<struct USoundCue*> Sounds; // 0x18(0x10)
	struct TArray<struct USoundCue*> FirstPersonSounds; // 0x28(0x10)
	struct TArray<struct USoundCue*> RicochetSounds; // 0x38(0x10)
	struct TArray<struct USoundCue*> RicochetFirstPersonSounds; // 0x48(0x10)
	struct TArray<struct UMaterialInterface*> decals; // 0x58(0x10)
	char bDoParticlesUseRotation : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float MinDecalSize; // 0x6c(0x04)
	float MaxDecalSize; // 0x70(0x04)
	bool bSkewDecalSize; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	float DecalDepth; // 0x78(0x04)
	float DecalLifeSpan; // 0x7c(0x04)
	bool bRandomizeDecalRotation; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Squad.SQExplosionEffect
// Size: 0xa8 (Inherited: 0x88)
struct FSQExplosionEffect : FSQProjectileImpactEffect {
	struct UParticleSystem* ShockwaveParticleEffect; // 0x88(0x08)
	struct USoundCue* ShockwaveSound; // 0x90(0x08)
	struct UMaterialInterface* ShockwaveDecalMaterial; // 0x98(0x08)
	struct USoundCue* DebrisSound; // 0xa0(0x08)
};

// ScriptStruct Squad.DeployableItemsArray
// Size: 0x118 (Inherited: 0x108)
struct FDeployableItemsArray : FFastArraySerializer {
	struct TArray<struct FDeployableItem> Items; // 0x108(0x10)
};

// ScriptStruct Squad.DeployableItem
// Size: 0x18 (Inherited: 0x0c)
struct FDeployableItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct ASQDeployable* Deployable; // 0x10(0x08)
};

// ScriptStruct Squad.PlayerStateDataObject
// Size: 0x68 (Inherited: 0x00)
struct FPlayerStateDataObject {
	int Lives; // 0x00(0x04)
	int NumKills; // 0x04(0x04)
	int NumDeaths; // 0x08(0x04)
	int NumWoundeds; // 0x0c(0x04)
	int NumWounds; // 0x10(0x04)
	int NumTeamkills; // 0x14(0x04)
	float HealPoints; // 0x18(0x04)
	float RevivedPoints; // 0x1c(0x04)
	float TeamWorkScore; // 0x20(0x04)
	float ObjectiveScore; // 0x24(0x04)
	bool bAdmin; // 0x28(0x01)
	bool bDev; // 0x29(0x01)
	bool bQA; // 0x2a(0x01)
	bool bMember; // 0x2b(0x01)
	bool bCommander; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int FireTeamIndex; // 0x30(0x04)
	int FireTeamPosition; // 0x34(0x04)
	struct FString PlayerNamePrefix; // 0x38(0x10)
	struct UTexture* SupporterPatch; // 0x48(0x08)
	struct UTexture* ClanPatch; // 0x50(0x08)
	int ReplicationKey; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct ASQPlayerState* Owner; // 0x60(0x08)
};

// ScriptStruct Squad.TeamSquadId
// Size: 0x08 (Inherited: 0x00)
struct FTeamSquadId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Squad.SQRoleKitIconLookup
// Size: 0x10 (Inherited: 0x08)
struct FSQRoleKitIconLookup : FTableRowBase {
	struct USQRoleSettings* RoleSetting; // 0x08(0x08)
};

// ScriptStruct Squad.SQRotationRepMovement
// Size: 0x40 (Inherited: 0x40)
struct FSQRotationRepMovement : FSQRepMovement {
};

// ScriptStruct Squad.RotorWashData
// Size: 0x18 (Inherited: 0x00)
struct FRotorWashData {
	struct USQRotorWashEffectSender* Emitter; // 0x00(0x08)
	struct FVector EmitterPosition; // 0x08(0x0c)
	float EffectRadius; // 0x14(0x04)
};

// ScriptStruct Squad.PlayerWidgetPair
// Size: 0x10 (Inherited: 0x00)
struct FPlayerWidgetPair {
	struct USQScoreboardPlayer* PlayerWidget; // 0x00(0x08)
	struct ASQPlayerState* PlayerState; // 0x08(0x08)
};

// ScriptStruct Squad.SquadWidgetPair
// Size: 0x10 (Inherited: 0x00)
struct FSquadWidgetPair {
	struct USQScoreboardSquad* SquadWidget; // 0x00(0x08)
	struct ASQSquadState* SquadState; // 0x08(0x08)
};

// ScriptStruct Squad.SQScoreboardStyle
// Size: 0x108 (Inherited: 0x08)
struct FSQScoreboardStyle : FSlateWidgetStyle {
	struct FSlateBrush ItemBorderBrush; // 0x08(0x88)
	struct FSlateColor KillStatColor; // 0x90(0x28)
	struct FSlateColor DeathStatColor; // 0xb8(0x28)
	struct FSlateColor ScoreStatColor; // 0xe0(0x28)
};

// ScriptStruct Squad.ScriptContainer
// Size: 0x88 (Inherited: 0x00)
struct FScriptContainer {
	struct TArray<struct USQScriptAction*> ScriptActions; // 0x00(0x10)
	struct TArray<struct USQScriptCondition*> ScriptConditions; // 0x10(0x10)
	struct TMap<struct USQScriptCondition*, bool> ConditionValues; // 0x20(0x50)
	bool bShouldMeetAllConditionsToExecute; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct AActor* ContextObject; // 0x78(0x08)
	int ContainerID; // 0x80(0x04)
	bool bConditionsWereMet; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Squad.SQRotator_NetQuantizeShorts
// Size: 0x0c (Inherited: 0x0c)
struct FSQRotator_NetQuantizeShorts : FRotator {
};

// ScriptStruct Squad.SQRotator_NetQuantizeBytes
// Size: 0x0c (Inherited: 0x0c)
struct FSQRotator_NetQuantizeBytes : FRotator {
};

// ScriptStruct Squad.SQClimbTraceHitResults
// Size: 0x2c (Inherited: 0x00)
struct FSQClimbTraceHitResults {
	struct FVector EndingPoint1; // 0x00(0x0c)
	bool bBlockingHit; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator ClimbFrontNormal; // 0x10(0x0c)
	float ClimbDistanceFromWall; // 0x1c(0x04)
	struct FVector ClimbTraceHit2; // 0x20(0x0c)
};

// ScriptStruct Squad.SQVaultTraceHitResults
// Size: 0xac (Inherited: 0x00)
struct FSQVaultTraceHitResults {
	struct FHitResult bVaultLineTrace1Hit; // 0x00(0x88)
	struct FVector VaultOppSideWallHit; // 0x88(0x0c)
	float VaultDistanceFromOppSideWall; // 0x94(0x04)
	struct FVector VaultEndingPointLineTraceImpact; // 0x98(0x0c)
	bool bVaultLineTrace2Hit; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	float DistanceToNewLocation; // 0xa8(0x04)
};

// ScriptStruct Squad.SQDistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FSQDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Squad.SQSoundWeight
// Size: 0x10 (Inherited: 0x00)
struct FSQSoundWeight {
	struct USoundWave* Sound; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	bool bHasBeenUsed; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Squad.SQMedicCalls
// Size: 0x78 (Inherited: 0x00)
struct FSQMedicCalls {
	struct USoundCue* MedicCO; // 0x00(0x28)
	struct USoundCue* MedicSL; // 0x28(0x28)
	struct USoundCue* MedicGrunt; // 0x50(0x28)
};

// ScriptStruct Squad.SQTeamEventSounds
// Size: 0xc8 (Inherited: 0x00)
struct FSQTeamEventSounds {
	struct USoundCue* Join; // 0x00(0x28)
	struct USoundCue* Win; // 0x28(0x28)
	struct USoundCue* Lose; // 0x50(0x28)
	struct USoundCue* FriendlyTicketsLow; // 0x78(0x28)
	struct USoundCue* EnemyTicketsLow; // 0xa0(0x28)
};

// ScriptStruct Squad.SQCommanderSounds
// Size: 0x140 (Inherited: 0x00)
struct FSQCommanderSounds {
	struct USoundCue* CommanderVoteStarted; // 0x00(0x28)
	struct USoundCue* CommanderVotePassedNormalSelf; // 0x28(0x28)
	struct USoundCue* CommanderVotePassedNormalOthers; // 0x50(0x28)
	struct USoundCue* CommanderVotePassedMutinySelf; // 0x78(0x28)
	struct USoundCue* CommanderVotePassedMutinyOthers; // 0xa0(0x28)
	struct USoundCue* RequestCommandReinforcements; // 0xc8(0x28)
	struct USoundCue* CommanderReinforcementsApproved; // 0xf0(0x28)
	struct USoundCue* CommanderReinforcementsDenied; // 0x118(0x28)
};

// ScriptStruct Squad.SQObjectiveSounds
// Size: 0xa0 (Inherited: 0x00)
struct FSQObjectiveSounds {
	struct USoundCue* ObjectiveBeingWon; // 0x00(0x28)
	struct USoundCue* ObjectiveWon; // 0x28(0x28)
	struct USoundCue* ObjectiveBeingLost; // 0x50(0x28)
	struct USoundCue* ObjectiveLost; // 0x78(0x28)
};

// ScriptStruct Squad.SQWaypoint
// Size: 0x30 (Inherited: 0x00)
struct FSQWaypoint {
	struct FVector WorldPosition; // 0x00(0x0c)
	struct FVector2D MapPosition; // 0x0c(0x08)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVector2D> PathPoints; // 0x18(0x10)
	struct UTexture2D* IconTexture; // 0x28(0x08)
};

// ScriptStruct Squad.VehicleOccupantsArray
// Size: 0x118 (Inherited: 0x108)
struct FVehicleOccupantsArray : FFastArraySerializer {
	struct TArray<struct FVehicleOccupantsItem> Items; // 0x108(0x10)
};

// ScriptStruct Squad.VehicleOccupantsItem
// Size: 0x50 (Inherited: 0x0c)
struct FVehicleOccupantsItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSQVehicleOccupantInfo VehicleOccupantInfo; // 0x10(0x38)
	uint8 SeatId; // 0x48(0x01)
	char DirtyCount; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Squad.SQWeaponReplacementItem_TableRow
// Size: 0x90 (Inherited: 0x08)
struct FSQWeaponReplacementItem_TableRow : FTableRowBase {
	struct FSQWeaponReplacementItem Item; // 0x08(0x88)
};

// ScriptStruct Squad.SQWeaponReplacementItem
// Size: 0x88 (Inherited: 0x00)
struct FSQWeaponReplacementItem {
	struct FText ItemName; // 0x00(0x18)
	struct FText ItemDescription; // 0x18(0x18)
	struct UTexture2D* SkinTexture; // 0x30(0x08)
	struct TMap<struct UObject*, struct UObject*> WeaponReplacements; // 0x38(0x50)
};

// ScriptStruct Squad.SQClanPacks_TableRow
// Size: 0x98 (Inherited: 0x08)
struct FSQClanPacks_TableRow : FTableRowBase {
	struct FSQPatchItem PatchInfo; // 0x08(0x40)
	struct TSet<struct FString> MembersSteamId64; // 0x48(0x50)
};

// ScriptStruct Squad.SQPatchItem
// Size: 0x40 (Inherited: 0x00)
struct FSQPatchItem {
	struct FText PatchName; // 0x00(0x18)
	struct FText PatchDescription; // 0x18(0x18)
	struct UTexture2D* PatchImage; // 0x30(0x08)
	struct UTexture2D* PatchImageUI; // 0x38(0x08)
};

// ScriptStruct Squad.SQSupporterPatchItem_TableRow
// Size: 0x48 (Inherited: 0x08)
struct FSQSupporterPatchItem_TableRow : FTableRowBase {
	struct FSQPatchItem PatchInfo; // 0x08(0x40)
};

// ScriptStruct Squad.SQRoleGroupLimit
// Size: 0x14 (Inherited: 0x00)
struct FSQRoleGroupLimit {
	enum class ESQRoleTypeEnum RoleGroup; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int MinLimit; // 0x04(0x04)
	int MaxLimit; // 0x08(0x04)
	int SquadMembersPerSlotIncrease; // 0x0c(0x04)
	int SlotsPerIncrease; // 0x10(0x04)
};

// ScriptStruct Squad.SQRoleLimitArray
// Size: 0x118 (Inherited: 0x108)
struct FSQRoleLimitArray : FFastArraySerializer {
	struct TArray<struct FSQRoleLimitFASItem> Items; // 0x108(0x10)
};

// ScriptStruct Squad.SQRoleLimitFASItem
// Size: 0x30 (Inherited: 0x0c)
struct FSQRoleLimitFASItem : FFastArraySerializerItem {
	struct FSQRoleLimit Content; // 0x0c(0x24)
};

// ScriptStruct Squad.SQRoleLimit
// Size: 0x24 (Inherited: 0x00)
struct FSQRoleLimit {
	int MinPerTeam; // 0x00(0x04)
	int MinPerSquad; // 0x04(0x04)
	int SquadMembersToUnlockNextKit; // 0x08(0x04)
	int UnlocksAtSquadSize; // 0x0c(0x04)
	int StopScalingAtSquadSize; // 0x10(0x04)
	int TeamMembersToUnlockNextKit; // 0x14(0x04)
	int UnlocksAtTeamSize; // 0x18(0x04)
	int StopScalingAtTeamSize; // 0x1c(0x04)
	bool bSquadLeaderOnly; // 0x20(0x01)
	bool bNonDeployable; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Squad.SQSettingsRestriction
// Size: 0x18 (Inherited: 0x00)
struct FSQSettingsRestriction {
	struct FString Setting; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
};

// ScriptStruct Squad.SQServerSlot
// Size: 0x28 (Inherited: 0x00)
struct FSQServerSlot {
	char pad_0[0x20]; // 0x00(0x20)
	struct ASQJoinBeaconClient* ClientBeacon; // 0x20(0x08)
};

// ScriptStruct Squad.SQConnectionCheckResponse
// Size: 0x08 (Inherited: 0x00)
struct FSQConnectionCheckResponse {
	char bCanQueue : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char CurrentTotalPlayers; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RoundTripRPCTimeMS; // 0x04(0x04)
};

// ScriptStruct Squad.SQVehicleDestroyedConfig
// Size: 0x10 (Inherited: 0x00)
struct FSQVehicleDestroyedConfig {
	struct UDamageType* DamageType; // 0x00(0x08)
	struct ASQDestroyedVehicle* DestroyedVehicleClass; // 0x08(0x08)
};

// ScriptStruct Squad.SQVehicleDestroyEffectConfig
// Size: 0x10 (Inherited: 0x00)
struct FSQVehicleDestroyEffectConfig {
	struct UParticleSystem* ParticleSystemTemplate; // 0x00(0x08)
	struct UDamageType* DamageType; // 0x08(0x08)
};

// ScriptStruct Squad.SQDeployableLimit
// Size: 0x10 (Inherited: 0x00)
struct FSQDeployableLimit {
	struct ASQDeployable* DeployableClass; // 0x00(0x08)
	char MaxPerFob; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Squad.SQVehicleSeatConfig
// Size: 0x50 (Inherited: 0x00)
struct FSQVehicleSeatConfig {
	enum class ESQVehicleRoleAbility SeatAbilityRequirement; // 0x00(0x01)
	bool bAllowDetachSoldier; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float SeatHealth; // 0x04(0x04)
	float MaxRepairToolLimit; // 0x08(0x04)
	bool bPassDamageToVehicle; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float CollisionDamageMultipler; // 0x10(0x04)
	bool bPassPointDamageToVehicle; // 0x14(0x01)
	bool bSoldierCanTakeDirectRadialDamage; // 0x15(0x01)
	bool bPassRadialDamageToVehicle; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FName SeatAttachSocket; // 0x18(0x08)
	struct FName SoldierAttachSocket; // 0x20(0x08)
	struct ASQVehicleSeat* SeatPawn; // 0x28(0x08)
	int InitialState; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FSQVehicleSeatState> SeatStates; // 0x38(0x10)
	bool bShouldAlwaysStayRegistered; // 0x48(0x01)
	bool bSoldierInSeatCanCapture; // 0x49(0x01)
	bool bUseRotationComponentForControlRotation; // 0x4a(0x01)
	char pad_4B[0x1]; // 0x4b(0x01)
	float PlayerEnterDuration; // 0x4c(0x04)
};

// ScriptStruct Squad.SQVehicleSeatState
// Size: 0x78 (Inherited: 0x00)
struct FSQVehicleSeatState {
	struct FSQVehicleSeatAnimationState AnimationState; // 0x00(0x58)
	struct FSQVehicleSeatTransitionState TransitionState; // 0x58(0x20)
};

// ScriptStruct Squad.SQVehicleSeatTransitionState
// Size: 0x20 (Inherited: 0x00)
struct FSQVehicleSeatTransitionState {
	enum class ESQSoldierSeatState SoldierSeatState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CollisionDamageMultipler; // 0x04(0x04)
	bool bSoldierCanTakeDirectRadialDamage; // 0x08(0x01)
	bool bAllowDetachSoldier; // 0x09(0x01)
	bool bEjectDeadSoldier; // 0x0a(0x01)
	bool bEjectIncappedSoldier; // 0x0b(0x01)
	bool bSeatIsInTheOpen; // 0x0c(0x01)
	bool bOnlyPlayExteriorVehicleSounds; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct USoundMix* SoundMix; // 0x10(0x08)
	enum class ESQListenerType ListenerTypeOverride; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Squad.SQVehicleSeatAnimationState
// Size: 0x58 (Inherited: 0x00)
struct FSQVehicleSeatAnimationState {
	struct UAnimMontage* PawnAnimation; // 0x00(0x08)
	struct UAnimMontage* SeatAnimation; // 0x08(0x08)
	struct UAnimSequence* BaseAnimation; // 0x10(0x08)
	struct UBlendSpace* AimOffsets; // 0x18(0x08)
	bool bUseWheelBlendSpace1D; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UBlendSpace1D* WheelBlendSpace1D; // 0x28(0x08)
	bool bUseHandIK; // 0x30(0x01)
	bool bUseWeaponForHandIK; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float LeftHandIKAlpha; // 0x34(0x04)
	struct FName LeftHandIKSocketName; // 0x38(0x08)
	float RightHandIKAlpha; // 0x40(0x04)
	struct FName RightHandIKSocketName; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UAnimSequence* SteeringWheelSingleFrameAnimSequence; // 0x50(0x08)
};

// ScriptStruct Squad.SQOnlineInventorySetting
// Size: 0x08 (Inherited: 0x00)
struct FSQOnlineInventorySetting {
	int ItemId; // 0x00(0x04)
	bool bEnabled; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Squad.SQShockwaveQualitySetting
// Size: 0x10 (Inherited: 0x00)
struct FSQShockwaveQualitySetting {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int VerticalSteps; // 0x04(0x04)
	int HorizontalSteps; // 0x08(0x04)
	float CullingDistance; // 0x0c(0x04)
};

// ScriptStruct Squad.SQTextureMemoryStats
// Size: 0x1c (Inherited: 0x00)
struct FSQTextureMemoryStats {
	int DedicatedVideoMemory; // 0x00(0x04)
	int DedicatedSystemMemory; // 0x04(0x04)
	int SharedSystemMemory; // 0x08(0x04)
	int TotalGraphicsMemory; // 0x0c(0x04)
	int AllocatedMemorySize; // 0x10(0x04)
	int TexturePoolSize; // 0x14(0x04)
	int PendingMemoryAdjustment; // 0x18(0x04)
};

// ScriptStruct Squad.SQAnnouncement
// Size: 0x40 (Inherited: 0x00)
struct FSQAnnouncement {
	struct FString Title; // 0x00(0x10)
	struct FString Link; // 0x10(0x10)
	struct FString Body; // 0x20(0x10)
	struct FString HeaderLink; // 0x30(0x10)
};

// ScriptStruct Squad.SQCreditsList
// Size: 0x28 (Inherited: 0x00)
struct FSQCreditsList {
	enum class ESQCreditsLineType LineType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	struct TArray<struct FString> Columns; // 0x18(0x10)
};

// ScriptStruct Squad.SQSystemHUDMessage
// Size: 0x28 (Inherited: 0x00)
struct FSQSystemHUDMessage {
	struct FString Message; // 0x00(0x10)
	struct FLinearColor Color; // 0x10(0x10)
	float MessageLifetime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Squad.SQGameModeRules
// Size: 0x18 (Inherited: 0x00)
struct FSQGameModeRules {
	enum class ESQTeam Team; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FText> Rules; // 0x08(0x10)
};

// ScriptStruct Squad.SQPlayerLimiter
// Size: 0x08 (Inherited: 0x00)
struct FSQPlayerLimiter {
	int NumberOfPlayers; // 0x00(0x04)
	int Value; // 0x04(0x04)
};

// ScriptStruct Squad.SQFontInfo
// Size: 0x60 (Inherited: 0x00)
struct FSQFontInfo {
	struct UFont* Font; // 0x00(0x08)
	struct FLinearColor Color; // 0x08(0x10)
	float Scale; // 0x18(0x04)
	struct FVector2D Offset; // 0x1c(0x08)
	enum class ESQTextHorizontalAlignment HorizontalAlignment; // 0x24(0x01)
	enum class ESQTextVerticalAlignment VerticalAlignment; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float Alpha; // 0x28(0x04)
	bool bDrawShadow; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FVector2D ShadowDirection; // 0x30(0x08)
	struct FLinearColor ShadowColor; // 0x38(0x10)
	bool bDrawOutline; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FLinearColor OutlineColor; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct Squad.SQPersistedAmmoState
// Size: 0x18 (Inherited: 0x00)
struct FSQPersistedAmmoState {
	struct TArray<struct FSQPersistedAmmoGroup> AmmoGroups; // 0x00(0x10)
	struct USQRoleSettings* PersistedRole; // 0x10(0x08)
};

// ScriptStruct Squad.SQPersistedAmmoGroup
// Size: 0x10 (Inherited: 0x00)
struct FSQPersistedAmmoGroup {
	struct TArray<struct FSQPersistedAmmoCount> AmmoCounts; // 0x00(0x10)
};

// ScriptStruct Squad.SQPersistedAmmoCount
// Size: 0x08 (Inherited: 0x00)
struct FSQPersistedAmmoCount {
	int AmmoCount; // 0x00(0x04)
	int ItemCount; // 0x04(0x04)
};

// ScriptStruct Squad.SQTestInventoryData
// Size: 0x10 (Inherited: 0x00)
struct FSQTestInventoryData {
	struct TArray<struct FSQInventoryWeaponGroupData> GroupItems; // 0x00(0x10)
};

// ScriptStruct Squad.SQInventoryWeaponGroupData
// Size: 0x10 (Inherited: 0x00)
struct FSQInventoryWeaponGroupData {
	struct TArray<struct FSQInventoryData> WeaponItems; // 0x00(0x10)
};

// ScriptStruct Squad.SQInventoryData
// Size: 0x18 (Inherited: 0x00)
struct FSQInventoryData {
	struct ASQEquipableItem* EquipableItem; // 0x00(0x08)
	int MaxAllowedInInventory; // 0x08(0x04)
	int MinimumCountOnSpawn; // 0x0c(0x04)
	char bCannotRearm : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	enum class EWeaponType WeaponType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Squad.SQInventoryMod
// Size: 0x38 (Inherited: 0x00)
struct FSQInventoryMod {
	char bClearAllInventoryFirst : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSQInventoryData InventoryData; // 0x08(0x18)
	enum class ESQInventoryModificationType InventoryModificationType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int Slot; // 0x24(0x04)
	int Offset; // 0x28(0x04)
	enum class ESQTeam Team; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct USQRoleSettings* Role; // 0x30(0x08)
};

// ScriptStruct Squad.SQSpringInterpStruct3D
// Size: 0x30 (Inherited: 0x00)
struct FSQSpringInterpStruct3D {
	struct FVector Position; // 0x00(0x0c)
	struct FVector Damping; // 0x0c(0x0c)
	struct FVector MinLimits; // 0x18(0x0c)
	struct FVector MaxLimits; // 0x24(0x0c)
};

// ScriptStruct Squad.SQDynamicEasingStruct
// Size: 0x14 (Inherited: 0x00)
struct FSQDynamicEasingStruct {
	float Target; // 0x00(0x04)
	float Position; // 0x04(0x04)
	float Velocity; // 0x08(0x04)
	float Acceleration; // 0x0c(0x04)
	float OppositeAcceleration; // 0x10(0x04)
};

// ScriptStruct Squad.SQCameraShake
// Size: 0x20 (Inherited: 0x00)
struct FSQCameraShake {
	char pad_0[0x8]; // 0x00(0x08)
	struct UCameraShake* Shake; // 0x08(0x08)
	float InnerRadius; // 0x10(0x04)
	float OuterRadius; // 0x14(0x04)
	float Falloff; // 0x18(0x04)
	bool bOrientShakeTowardsEpicenter; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Squad.SQScoreEvent
// Size: 0x28 (Inherited: 0x00)
struct FSQScoreEvent {
	float Points; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Reason; // 0x08(0x10)
	struct FName ScoreGroup; // 0x18(0x08)
	float Timestamp; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Squad.SQSoliderNetPriorityObject
// Size: 0x0c (Inherited: 0x00)
struct FSQSoliderNetPriorityObject {
	float distance; // 0x00(0x04)
	float NetPriority; // 0x04(0x04)
	float NetPriorityWhenBehind; // 0x08(0x04)
};

// ScriptStruct Squad.SQMapData
// Size: 0x40 (Inherited: 0x00)
struct FSQMapData {
	struct FString ShortName; // 0x00(0x10)
	struct FString LoadingScreenTexturePath; // 0x10(0x10)
	struct TArray<struct FString> MapPaths; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct Squad.SQShotInfo
// Size: 0x2c (Inherited: 0x00)
struct FSQShotInfo {
	char ShotCounter; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WorldTime; // 0x04(0x04)
	struct FVector_NetQuantize10 Origin; // 0x08(0x0c)
	struct FVector_NetQuantizeNormal ShootDir; // 0x14(0x0c)
	bool bIsTracer; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float PenetrationDamageMultiplier; // 0x24(0x04)
	float ArmorDamageMultiplier; // 0x28(0x04)
};

// ScriptStruct Squad.SQExplosiveShotInfo
// Size: 0x38 (Inherited: 0x2c)
struct FSQExplosiveShotInfo : FSQShotInfo {
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UObject* ProjectileClass; // 0x30(0x08)
};

// ScriptStruct Squad.SQSessionFlagStruct
// Size: 0x08 (Inherited: 0x00)
struct FSQSessionFlagStruct {
	int ServerHealth; // 0x00(0x04)
	char bIsAnticheatProtected : 1; // 0x04(0x01)
	char pad_4_1 : 7; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Squad.SQFTEText
// Size: 0x30 (Inherited: 0x00)
struct FSQFTEText {
	struct FText FTEText; // 0x00(0x18)
	struct TArray<struct FName> ActionKeys; // 0x18(0x10)
	float Lifetime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Squad.SQRadialDamageEvent
// Size: 0xd0 (Inherited: 0x40)
struct FSQRadialDamageEvent : FRadialDamageEvent {
	bool bDirectHit; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FHitResult HitResult; // 0x44(0x88)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Squad.SQBitFlag
// Size: 0x04 (Inherited: 0x00)
struct FSQBitFlag {
	int Flags; // 0x00(0x04)
};

// ScriptStruct Squad.SQVehicleQueueEntry
// Size: 0x20 (Inherited: 0x00)
struct FSQVehicleQueueEntry {
	char pad_0[0x8]; // 0x00(0x08)
	struct ASQPlayerController* Player; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Squad.SQAmmoReductionConfig
// Size: 0x20 (Inherited: 0x00)
struct FSQAmmoReductionConfig {
	bool bAmmoReductionEnabled; // 0x00(0x01)
	bool bAffectAllWeapons; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float AmmoPercentageToLeave; // 0x04(0x04)
	bool bAffectCurrentMagazine; // 0x08(0x01)
	bool bAffectCurrentMagIfEquipped; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FSQWeaponAmmoReductionConfig> PerWeaponAmmoReduction; // 0x10(0x10)
};

// ScriptStruct Squad.SQWeaponAmmoReductionConfig
// Size: 0x10 (Inherited: 0x00)
struct FSQWeaponAmmoReductionConfig {
	struct ASQWeapon* WeaponClass; // 0x00(0x08)
	float AmmoPercentageToLeave; // 0x08(0x04)
	bool bAffectCurrentMagazine; // 0x0c(0x01)
	bool bAffectCurrentMagIfEquipped; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Squad.SQEngineMovementSoundObject
// Size: 0x28 (Inherited: 0x00)
struct FSQEngineMovementSoundObject {
	struct USoundCue* EngineSound; // 0x00(0x08)
	int Gear; // 0x08(0x04)
	bool bIsAcceleratingSound; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName AttachBoneName; // 0x10(0x08)
	float FadeOutTime; // 0x18(0x04)
	float FadeOutEndVolume; // 0x1c(0x04)
	struct UAudioComponent* AudioComponent; // 0x20(0x08)
};

// ScriptStruct Squad.SQVehicleWeaponConfig
// Size: 0x08 (Inherited: 0x00)
struct FSQVehicleWeaponConfig {
	struct ASQVehicleWeapon* WeaponClass; // 0x00(0x08)
};

// ScriptStruct Squad.SQVehicleSettingEntry
// Size: 0x10 (Inherited: 0x00)
struct FSQVehicleSettingEntry {
	struct USQVehicleSettings* Setting; // 0x00(0x08)
	int ArrayIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Squad.SQVehicleRecoil
// Size: 0x0c (Inherited: 0x00)
struct FSQVehicleRecoil {
	struct FVector2D RecoilFactor; // 0x00(0x08)
	char RepeatAmount; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Squad.SQRotationVelocityRepMovement
// Size: 0x50 (Inherited: 0x40)
struct FSQRotationVelocityRepMovement : FSQRepMovement {
	char pad_40[0x10]; // 0x40(0x10)
};

// ScriptStruct Squad.SQRangeConstraints
// Size: 0x38 (Inherited: 0x00)
struct FSQRangeConstraints {
	bool bEnablePitchInterval; // 0x00(0x01)
	bool bEnableYawInterval; // 0x01(0x01)
	bool bEnableRollInterval; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FVector2D PitchInterval; // 0x04(0x08)
	struct FVector2D YawInterval; // 0x0c(0x08)
	struct FVector2D RollInterval; // 0x14(0x08)
	struct FSQRotationConstraints Constraints; // 0x1c(0x1c)
};

// ScriptStruct Squad.SQVote
// Size: 0x38 (Inherited: 0x00)
struct FSQVote {
	struct FName ID; // 0x00(0x08)
	struct FTimespan Duration; // 0x08(0x08)
	struct FTimespan ResultPresentationDuration; // 0x10(0x08)
	struct FDataTableRowHandle Data; // 0x18(0x10)
	struct TArray<struct FSQChoice> Choices; // 0x28(0x10)
};

// ScriptStruct Squad.SQVoteSessionInfo
// Size: 0x28 (Inherited: 0x00)
struct FSQVoteSessionInfo {
	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
	struct TArray<struct FSQVoteSessionChoiceInfo> Votes; // 0x10(0x10)
	int RecordedVotes; // 0x20(0x04)
	int ExpectedVoteCount; // 0x24(0x04)
};

// ScriptStruct Squad.SQVoteSessionChoiceInfo
// Size: 0x18 (Inherited: 0x00)
struct FSQVoteSessionChoiceInfo {
	struct FName ID; // 0x00(0x08)
	struct TArray<struct FName> Voters; // 0x08(0x10)
};

// ScriptStruct Squad.SQVoteStateContainer
// Size: 0x90 (Inherited: 0x00)
struct FSQVoteStateContainer {
	struct FSQVote Vote; // 0x00(0x38)
	struct FSQVoteSessionInfo State; // 0x38(0x28)
	struct FName WinnerId; // 0x60(0x08)
	bool Ended; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FSQChoice WinnerChoice; // 0x70(0x18)
	char StatusUpdateID; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct Squad.ArmorPenetration
// Size: 0x28 (Inherited: 0x00)
struct FArmorPenetration {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct Squad.SQPenetrationTrace
// Size: 0xac (Inherited: 0x00)
struct FSQPenetrationTrace {
	char bIsActor : 1; // 0x00(0x01)
	char bHasValidReverseImpact : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FHitResult HitResult; // 0x04(0x88)
	struct FVector ReverseAngleImpactLocation; // 0x8c(0x0c)
	struct FVector_NetQuantizeNormal ReverseAngleImpactNormal; // 0x98(0x0c)
	struct FName ReverseAngleBoneName; // 0xa4(0x08)
};

// ScriptStruct Squad.SQPenetrationProxy
// Size: 0xac (Inherited: 0xac)
struct FSQPenetrationProxy : FSQPenetrationTrace {
};

// ScriptStruct Squad.SQWeaponData
// Size: 0xc0 (Inherited: 0x00)
struct FSQWeaponData {
	bool bInfiniteAmmo; // 0x00(0x01)
	bool bInfiniteMags; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int MaxMags; // 0x04(0x04)
	int RoundsPerMag; // 0x08(0x04)
	bool bAllowRoundInChamber; // 0x0c(0x01)
	bool bAllowSingleLoad; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<int> Firemodes; // 0x10(0x10)
	float TimeBetweenShots; // 0x20(0x04)
	float TimeBetweenSingleShots; // 0x24(0x04)
	bool bCanReloadWhenEquipping; // 0x28(0x01)
	bool bCreateProjectileOnServer; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float TacticalReloadDuration; // 0x2c(0x04)
	float DryReloadDuration; // 0x30(0x04)
	float TacticalReloadBipodDuration; // 0x34(0x04)
	float ReloadDryBipodDuration; // 0x38(0x04)
	float ZoomDuration; // 0x3c(0x04)
	float ADSPostTransitionRatio; // 0x40(0x04)
	bool bAllowZoom; // 0x44(0x01)
	bool bAverageFireRate; // 0x45(0x01)
	bool bResetBurstOnTriggerRelease; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct ASQProjectile* ProjectileClass; // 0x48(0x08)
	int RoundsBetweenTracer; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct ASQProjectile* TracerProjectileClass; // 0x58(0x08)
	float MuzzleVelocity; // 0x60(0x04)
	float MaxDamageToApply; // 0x64(0x04)
	float TimeToStartDamageFallOff; // 0x68(0x04)
	float DistanceToStartDamageFallOff; // 0x6c(0x04)
	float DamageFallOffRate; // 0x70(0x04)
	float MinDamageToApply; // 0x74(0x04)
	struct UCurveFloat* DamageFalloffCurve; // 0x78(0x08)
	bool bIsBarrelSocketOnSoldier; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName BarrelSocketName; // 0x84(0x08)
	float MOA; // 0x8c(0x04)
	float MaximumTraceDistance; // 0x90(0x04)
	float WallHackCheckTraceDistance; // 0x94(0x04)
	float ProjectileCameraRelativeOffsetMultiplier; // 0x98(0x04)
	bool bMagMustBeEmptyForVehicleRearm; // 0x9c(0x01)
	bool bRearmOnlyIfCurrentMagazineIsEmpty; // 0x9d(0x01)
	bool bRearmCanFillCurrentMagazine; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
	float MinimumTimeBetweenRearms; // 0xa0(0x04)
	bool bRearmOnlyOneMagazine; // 0xa4(0x01)
	bool bRearmOnlyXRoundsOfAmmo; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	int RearmRoundsOfAmmoPerRearm; // 0xa8(0x04)
	int ArmorPenetrationDepthMillimeters; // 0xac(0x04)
	struct UCurveFloat* ArmorPenetrationDepthCurve; // 0xb0(0x08)
	float TraceDistanceAfterPenetrationMeters; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Squad.SQMagazineData
// Size: 0x08 (Inherited: 0x00)
struct FSQMagazineData {
	int DefaultRoundsPerMag; // 0x00(0x04)
	int RemainingRounds; // 0x04(0x04)
};

// ScriptStruct Squad.SQWeaponSpring
// Size: 0x24 (Inherited: 0x00)
struct FSQWeaponSpring {
	struct FVector WeaponSpringFactor; // 0x00(0x0c)
	struct FVector WeaponSpringRotationPivot; // 0x0c(0x0c)
	struct FRotator WeaponSpringRotationFactor; // 0x18(0x0c)
};

// ScriptStruct Squad.SQWeaponEffects
// Size: 0x38 (Inherited: 0x00)
struct FSQWeaponEffects {
	struct UParticleSystem* MuzzleFlashEffect1P; // 0x00(0x08)
	struct UParticleSystem* MuzzleFlashEffect3P; // 0x08(0x08)
	struct UParticleSystem* ShellEjection1P; // 0x10(0x08)
	struct UParticleSystem* ShellEjection3P; // 0x18(0x08)
	struct FName MuzzleFlashSocket; // 0x20(0x08)
	struct FName ShellEjectionSocket; // 0x28(0x08)
	float ShellEjectionCullDistanceInMeters; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Squad.SQRecoilData
// Size: 0x48 (Inherited: 0x00)
struct FSQRecoilData {
	struct FVector2D RecoilFactorMin; // 0x00(0x08)
	struct FVector2D RecoilFactorMax; // 0x08(0x08)
	float RecoilZoomFactor; // 0x10(0x04)
	float RecoilDuration; // 0x14(0x04)
	float NotAimingDownSightsMultiplier; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* RecoilCurve; // 0x20(0x08)
	struct UCurveFloat* RecoilCurveCrouch; // 0x28(0x08)
	struct UCurveFloat* RecoilCurveProne; // 0x30(0x08)
	int RecoilCurveIndex; // 0x38(0x04)
	bool bUseRecoilMultipliers; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float CrouchRecoilMultiplier; // 0x40(0x04)
	float ProneRecoilMultiplier; // 0x44(0x04)
};

// ScriptStruct Squad.SQWeaponAnims
// Size: 0x48 (Inherited: 0x00)
struct FSQWeaponAnims {
	struct UAnimSequence* StandAnim; // 0x00(0x08)
	struct UAnimSequence* EquipAnim; // 0x08(0x08)
	struct UAnimSequence* FireRecoilAnim; // 0x10(0x08)
	struct UAnimSequence* FireTriggerAnim; // 0x18(0x08)
	struct UAnimSequence* ReloadAnim; // 0x20(0x08)
	struct UAnimSequence* DryAnim; // 0x28(0x08)
	struct UAnimSequence* ToggleFiremodeAnim; // 0x30(0x08)
	bool bShouldLockBult; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TriggerPullDuration; // 0x3c(0x04)
	struct UCurveVector* AimOffsetCurve; // 0x40(0x08)
};

// ScriptStruct Squad.SQWeaponSounds
// Size: 0x88 (Inherited: 0x00)
struct FSQWeaponSounds {
	struct USoundCue* FireSound1P; // 0x00(0x08)
	struct USoundCue* FireSound3P; // 0x08(0x08)
	struct USoundCue* ReloadSound1P; // 0x10(0x08)
	struct USoundCue* ReloadSound3P; // 0x18(0x08)
	struct USoundCue* DryReloadSound1P; // 0x20(0x08)
	struct USoundCue* DryReloadSound3P; // 0x28(0x08)
	struct USoundCue* EquipSound1P; // 0x30(0x08)
	struct USoundCue* EquipSound3P; // 0x38(0x08)
	struct USoundCue* UnequipSound1P; // 0x40(0x08)
	struct USoundCue* UnequipSound3P; // 0x48(0x08)
	struct USoundCue* TriggerSound1P; // 0x50(0x08)
	struct USoundCue* TriggerSound3P; // 0x58(0x08)
	struct USoundCue* BoltSound1P; // 0x60(0x08)
	struct USoundCue* BoltSound3P; // 0x68(0x08)
	struct USoundCue* ToggleFiremodeSound1P; // 0x70(0x08)
	struct USoundCue* ToggleFiremodeSound3P; // 0x78(0x08)
	struct FName SoundSocket; // 0x80(0x08)
};

// ScriptStruct Squad.SQMeshTransitionSettings
// Size: 0x40 (Inherited: 0x00)
struct FSQMeshTransitionSettings {
	float TransitionValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStaticMesh* Mesh; // 0x08(0x08)
	struct FTransform MeshTransform; // 0x10(0x30)
};

// ScriptStruct Squad.SQFireTriggerMontage
// Size: 0x10 (Inherited: 0x00)
struct FSQFireTriggerMontage {
	struct UAnimMontage* FireWeaponMontage; // 0x00(0x08)
	struct UAnimMontage* FireTriggerMontage; // 0x08(0x08)
};

// ScriptStruct Squad.SQAdjustableSightMontageSet
// Size: 0x40 (Inherited: 0x00)
struct FSQAdjustableSightMontageSet {
	struct UAnimMontage* BaseAdjustAds3pMontage; // 0x00(0x08)
	struct UAnimMontage* AdjustAdsTransition3pMontage; // 0x08(0x08)
	struct UAnimMontage* AdjustFromAdsTransition3pMontage; // 0x10(0x08)
	struct FRotator LineOfFireAngle; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText DistanceText; // 0x28(0x18)
};

// ScriptStruct Squad.VehicleTankTransmissionData
// Size: 0x48 (Inherited: 0x00)
struct FVehicleTankTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FVehicleTankGearData> ForwardGears; // 0x10(0x10)
	struct TArray<struct FVehicleTankGearData> BackwardGears; // 0x20(0x10)
	float ReverseGearRatio; // 0x30(0x04)
	float NeutralGearUpRatio; // 0x34(0x04)
	float NeutralGearDownRatio; // 0x38(0x04)
	float ClutchStrength; // 0x3c(0x04)
	bool bHasNeutralSteer; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Squad.VehicleTankGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleTankGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct Squad.VehicleTankEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleTankEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float DampingRateFullThrottle; // 0x90(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Squad.SQMinimapMakerSettings
// Size: 0x550 (Inherited: 0x00)
struct FSQMinimapMakerSettings {
	enum class ESQTileResolution TileResolution; // 0x00(0x01)
	enum class ESQTileCount TileCount; // 0x01(0x01)
	char pad_2[0xe]; // 0x02(0x0e)
	struct FPostProcessSettings MinimapPostProcessor; // 0x10(0x530)
	int MinimapFOV; // 0x540(0x04)
	char pad_544[0xc]; // 0x544(0x0c)
};

