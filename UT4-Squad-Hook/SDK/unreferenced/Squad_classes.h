// Class Squad.CoreGetAllItemsCallbackProxy
// Size: 0x80 (Inherited: 0x28)
struct UCoreGetAllItemsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FScriptMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FScriptMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x38]; // 0x48(0x38)

	struct UCoreGetAllItemsCallbackProxy* GetAllItems(struct UObject* WorldContextObject); // Function Squad.CoreGetAllItemsCallbackProxy.GetAllItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x829240
};

// Class Squad.CoreInventoryBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCoreInventoryBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetItemName(struct FBlueprintOnlineItem& Result); // Function Squad.CoreInventoryBlueprintLibrary.GetItemName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x829480
	int GetItemId(struct FBlueprintOnlineItem& Result); // Function Squad.CoreInventoryBlueprintLibrary.GetItemId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8293a0
	int GetItemCount(struct FBlueprintOnlineItem& Result); // Function Squad.CoreInventoryBlueprintLibrary.GetItemCount // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8292c0
};

// Class Squad.CoreSerializeItemSetCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct UCoreSerializeItemSetCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FScriptMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FScriptMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x48]; // 0x48(0x48)

	struct UCoreSerializeItemSetCallbackProxy* SerializeItemSet(struct UObject* WorldContextObject, struct TArray<struct FBlueprintOnlineItem>& Items); // Function Squad.CoreSerializeItemSetCallbackProxy.SerializeItemSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x829c80
};

// Class Squad.HeatMapRecorder
// Size: 0xe0 (Inherited: 0x28)
struct UHeatMapRecorder : UObject {
	char pad_28[0xb8]; // 0x28(0xb8)
};

// Class Squad.SQCloudAnalyticsGathererSubsystem
// Size: 0x68 (Inherited: 0x30)
struct USQCloudAnalyticsGathererSubsystem : UGameInstanceSubsystem {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Squad.ODKAnalyticsSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct UODKAnalyticsSubsystemInterface : UInterface {
};

// Class Squad.RelativeCanvasPanel
// Size: 0x130 (Inherited: 0x130)
struct URelativeCanvasPanel : UCanvasPanel {
};

// Class Squad.SQ_HexMenu_BaseAction
// Size: 0x28 (Inherited: 0x28)
struct USQ_HexMenu_BaseAction : UObject {
};

// Class Squad.SQUndirectedGraph
// Size: 0x280 (Inherited: 0x248)
struct ASQUndirectedGraph : AActor {
	struct USceneComponent* Root; // 0x248(0x08)
	struct FScriptMulticastDelegate OnLatticeUpdated; // 0x250(0x10)
	struct TArray<struct USQGraphNodeComponent*> Nodes; // 0x260(0x10)
	struct TArray<struct FSQGraphLink> Links; // 0x270(0x10)

	void RemoveNode(struct USQGraphNodeComponent* Node); // Function Squad.SQUndirectedGraph.RemoveNode // (Native|Public|BlueprintCallable) // @ game+0x844930
	void RemoveLink(struct FSQGraphLink Link); // Function Squad.SQUndirectedGraph.RemoveLink // (Native|Public|BlueprintCallable) // @ game+0x90a4e0
	void OnRep_Nodes(); // Function Squad.SQUndirectedGraph.OnRep_Nodes // (Native|Public) // @ game+0x8674c0
	void GetNodes(struct TArray<struct USQGraphNodeComponent*>& InOutNodes); // Function Squad.SQUndirectedGraph.GetNodes // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x909bd0
	void GetLinks(struct TArray<struct FSQGraphLink>& InOutLinks); // Function Squad.SQUndirectedGraph.GetLinks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x909b20
	void ClearNodesAndLinks(); // Function Squad.SQUndirectedGraph.ClearNodesAndLinks // (Final|Native|Public|BlueprintCallable) // @ game+0x909470
	void AddNode(struct USQGraphNodeComponent* Node); // Function Squad.SQUndirectedGraph.AddNode // (Native|Public|BlueprintCallable) // @ game+0x8449c0
	void AddLink(struct FSQGraphLink Link); // Function Squad.SQUndirectedGraph.AddLink // (Native|Public|BlueprintCallable) // @ game+0x909280
};

// Class Squad.SQAASGraph
// Size: 0x298 (Inherited: 0x280)
struct ASQAASGraph : ASQUndirectedGraph {
	bool bNodesHaveReplicated; // 0x280(0x01)
	char pad_281[0x17]; // 0x281(0x17)

	void RemoveSourceNode(struct USQGraphNodeComponent* Node); // Function Squad.SQAASGraph.RemoveSourceNode // (Final|Native|Public|BlueprintCallable) // @ game+0x829c00
	void PostNodeOwnerChanged(struct USQCaptureZoneComponent* CaptureZone, char Team); // Function Squad.SQAASGraph.PostNodeOwnerChanged // (Final|Native|Public) // @ game+0x829b40
	void GetTeamSourceNodes(char Team, struct TArray<struct USQGraphNodeComponent*>& InOutNodes); // Function Squad.SQAASGraph.GetTeamSourceNodes // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x829650
	void GetSourceNodes(struct TArray<struct USQGraphNodeComponent*>& InOutNodes); // Function Squad.SQAASGraph.GetSourceNodes // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x8295a0
	void AddSourceNode(struct USQGraphNodeComponent* Node); // Function Squad.SQAASGraph.AddSourceNode // (Final|Native|Public|BlueprintCallable) // @ game+0x829110
};

// Class Squad.SQUserWidget
// Size: 0x230 (Inherited: 0x230)
struct USQUserWidget : UUserWidget {

	void SelfRemove(); // Function Squad.SQUserWidget.SelfRemove // (Native|Public|BlueprintCallable) // @ game+0x90a6d0
	void BPInit(); // Function Squad.SQUserWidget.BPInit // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapLattice
// Size: 0x250 (Inherited: 0x230)
struct USQMapLattice : USQUserWidget {
	struct TArray<struct FSQLatticeLine> LatticeLines; // 0x230(0x10)
	struct USQCoreStateMapComponent* MapComponent; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)

	struct FVector2D WorldLocationToDrawLocation(struct FVector& Location, struct USQMapWidgetBase* MapWidget); // Function Squad.SQMapLattice.WorldLocationToDrawLocation // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x892400
	void DrawWidget(struct FPaintContext Context); // Function Squad.SQMapLattice.DrawWidget // (Native|Public|BlueprintCallable|Const) // @ game+0x891050
};

// Class Squad.SQAASGraphLattice
// Size: 0x290 (Inherited: 0x250)
struct USQAASGraphLattice : USQMapLattice {
	bool bHidesUncapLinks; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FLinearColor LatticeNeutralColor; // 0x254(0x10)
	struct FLinearColor LatticeEnemyColor; // 0x264(0x10)
	struct FLinearColor LatticeFriendlyColor; // 0x274(0x10)
	float LineThickness; // 0x284(0x04)
	struct ASQAASGraph* lattice; // 0x288(0x08)
};

// Class Squad.SQGameRuleSet
// Size: 0x278 (Inherited: 0x248)
struct ASQGameRuleSet : AActor {
	struct ASQRulesetState* RulesetStateClass; // 0x248(0x08)
	struct ASQRulesetState* RulesetState; // 0x250(0x08)
	bool bUseTickets; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int RoundTimeOverride; // 0x25c(0x04)
	struct FString DisplayName; // 0x260(0x10)
	bool bRulesetEnabled; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)

	void VehicleDestroyed(struct ASQPlayerController* Killer, struct ASQPlayerController* Victim, struct ASQVehicle* DestroyedVehicle); // Function Squad.SQGameRuleSet.VehicleDestroyed // (Native|Event|Public|BlueprintEvent) // @ game+0x878630
	void UnregisterActor(struct AActor* Actor); // Function Squad.SQGameRuleSet.UnregisterActor // (Native|Event|Public|BlueprintEvent) // @ game+0x8783d0
	void SetRulesetEnabled(bool Value); // Function Squad.SQGameRuleSet.SetRulesetEnabled // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x877600
	void SetRoundTimeOverride(int InRoundTimeOverride); // Function Squad.SQGameRuleSet.SetRoundTimeOverride // (Native|Public|BlueprintCallable) // @ game+0x877570
	void SendChatMessage(enum class ESQChat ChatType, struct FString Message, enum class ESQTeam Team, int Squad, bool bBroadcastToAdmin, struct FString StreamerModeVariantMessage); // Function Squad.SQGameRuleSet.SendChatMessage // (Native|Public|BlueprintCallable) // @ game+0x8771f0
	void SecondPassed(); // Function Squad.SQGameRuleSet.SecondPassed // (Native|Event|Public|BlueprintEvent) // @ game+0x86d540
	void RegisterActor(struct AActor* Actor); // Function Squad.SQGameRuleSet.RegisterActor // (Native|Event|Public|BlueprintEvent) // @ game+0x877050
	enum class ESQReadyToEndMatch ReadyToEndMatch(); // Function Squad.SQGameRuleSet.ReadyToEndMatch // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x877020
	void PostPlayerSpawn(struct ASQSoldier* SpawningSoldier); // Function Squad.SQGameRuleSet.PostPlayerSpawn // (Native|Event|Public|BlueprintEvent) // @ game+0x876f90
	void PostPlayerLogout(struct AController* Controller); // Function Squad.SQGameRuleSet.PostPlayerLogout // (Native|Event|Public|BlueprintEvent) // @ game+0x876f00
	void PostPlayerLogin(struct APlayerController* Controller); // Function Squad.SQGameRuleSet.PostPlayerLogin // (Native|Event|Public|BlueprintEvent) // @ game+0x876e70
	void PlayerWounded(struct ASQPlayerController* Killer, struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerWounded // (Native|Event|Public|BlueprintEvent) // @ game+0x876da0
	void PlayerWound(struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerWound // (Native|Event|Public|BlueprintEvent) // @ game+0x876bd0
	void PlayerTeamWounded(struct ASQPlayerController* Killer, struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerTeamWounded // (Native|Event|Public|BlueprintEvent) // @ game+0x876b00
	void PlayerTeamKilled(struct ASQPlayerController* Killer, struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerTeamKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x876a30
	void PlayerSuicide(struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerSuicide // (Native|Event|Public|BlueprintEvent) // @ game+0x85f6d0
	void PlayerSpawned(struct ASQPlayerController* NewPlayer); // Function Squad.SQGameRuleSet.PlayerSpawned // (Native|Event|Public|BlueprintEvent) // @ game+0x8769a0
	void PlayerSelfWound(struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerSelfWound // (Native|Event|Public|BlueprintEvent) // @ game+0x876910
	void PlayerSelfHealed(struct ASQPlayerController* Healer); // Function Squad.SQGameRuleSet.PlayerSelfHealed // (Native|Event|Public|BlueprintEvent) // @ game+0x876880
	void PlayerSelfBandaged(struct ASQPlayerController* Bandager); // Function Squad.SQGameRuleSet.PlayerSelfBandaged // (Native|Event|Public|BlueprintEvent) // @ game+0x8767f0
	void PlayerRevived(struct ASQPlayerController* Reviver, struct ASQPlayerController* RevivedPlayer); // Function Squad.SQGameRuleSet.PlayerRevived // (Native|Event|Public|BlueprintEvent) // @ game+0x876720
	void PlayerKilled(struct ASQPlayerController* Killer, struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerKilled // (Native|Event|Public|BlueprintEvent) // @ game+0x876580
	void PlayerJoinedTeam(struct ASQPlayerController* Player, int TeamIndex); // Function Squad.SQGameRuleSet.PlayerJoinedTeam // (Native|Event|Public|BlueprintEvent) // @ game+0x8764b0
	void PlayerJoined(struct ASQPlayerController* NewPlayer); // Function Squad.SQGameRuleSet.PlayerJoined // (Native|Event|Public|BlueprintEvent) // @ game+0x8449c0
	void PlayerHealed(struct ASQPlayerController* Healer, struct ASQPlayerController* HealedPlayer); // Function Squad.SQGameRuleSet.PlayerHealed // (Native|Event|Public|BlueprintEvent) // @ game+0x8763e0
	void PlayerDied(struct ASQPlayerController* Victim); // Function Squad.SQGameRuleSet.PlayerDied // (Native|Event|Public|BlueprintEvent) // @ game+0x876280
	void PlayerBandaged(struct ASQPlayerController* Bandager, struct ASQPlayerController* BandagedPlayer); // Function Squad.SQGameRuleSet.PlayerBandaged // (Native|Event|Public|BlueprintEvent) // @ game+0x876070
	void NotifyPlayerOnScoreEvent(struct ASQPlayerController* Player, struct FSQScoreEvent& ScoreEvent); // Function Squad.SQGameRuleSet.NotifyPlayerOnScoreEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x875a50
	void NotifyPlayer(struct ASQPlayerController* Player, struct FString Message, enum class ESQNotificationTypes NotificationType, struct FString StreamerModeVariantMessage); // Function Squad.SQGameRuleSet.NotifyPlayer // (Native|Public|BlueprintCallable) // @ game+0x8758e0
	void ModifySoldierInventory(struct ASQSoldier* Soldier); // Function Squad.SQGameRuleSet.ModifySoldierInventory // (Native|Event|Public|BlueprintEvent) // @ game+0x875850
	void MatchStarted(); // Function Squad.SQGameRuleSet.MatchStarted // (Native|Event|Public|BlueprintEvent) // @ game+0x86d650
	void MatchIsWaitingToStart(); // Function Squad.SQGameRuleSet.MatchIsWaitingToStart // (Native|Event|Public|BlueprintEvent) // @ game+0x867cf0
	void LogisticsDropOff(struct AActor* VehicleActor, float AmmoDroppedOff, float ConstructionDroppedOff); // Function Squad.SQGameRuleSet.LogisticsDropOff // (Native|Event|Public|BlueprintEvent) // @ game+0x875750
	bool GetRulesetEnabled(); // Function Squad.SQGameRuleSet.GetRulesetEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8754c0
	int GetRoundTimeRemaining(); // Function Squad.SQGameRuleSet.GetRoundTimeRemaining // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875490
	int GetRoundTimeOverride(); // Function Squad.SQGameRuleSet.GetRoundTimeOverride // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875460
	struct ASQGameMode* GetGameMode(); // Function Squad.SQGameRuleSet.GetGameMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875410
	struct FString GetDisplayName(); // Function Squad.SQGameRuleSet.GetDisplayName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8752a0
	void BPRulesetEnabled(); // Function Squad.SQGameRuleSet.BPRulesetEnabled // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPRulesetDisabled(); // Function Squad.SQGameRuleSet.BPRulesetDisabled // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQGameModeRuleset
// Size: 0x2b0 (Inherited: 0x278)
struct ASQGameModeRuleset : ASQGameRuleSet {
	struct TArray<struct FSQInventoryMod> InventoryModifications; // 0x278(0x10)
	struct FText PlayerJoinedMessageToPlayer; // 0x288(0x18)
	struct TArray<struct FSQGameModeRules> RulesToBeShownWhenPlayersJoinATeam; // 0x2a0(0x10)

	void SetWinningTeamFromEnum(enum class ESQTeam Team); // Function Squad.SQGameModeRuleset.SetWinningTeamFromEnum // (Native|Public|BlueprintCallable|Const) // @ game+0x877720
	void SetWinningTeam(struct ASQTeam* Team); // Function Squad.SQGameModeRuleset.SetWinningTeam // (Native|Public|BlueprintCallable|Const) // @ game+0x877690
	void SendMessageToPlayer(struct ASQPlayerController* Player, struct FString Message, struct FLinearColor& Color, float MessageLifetime); // Function Squad.SQGameModeRuleset.SendMessageToPlayer // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8773e0
};

// Class Squad.SQAASRuleset
// Size: 0x2b8 (Inherited: 0x2b0)
struct ASQAASRuleset : ASQGameModeRuleset {
	struct ASQAASGraph* GraphActor; // 0x2b0(0x08)

	void LatticeUpdated(); // Function Squad.SQAASRuleset.LatticeUpdated // (Native|Event|Public|BlueprintEvent) // @ game+0x8297f0
};

// Class Squad.SQAction
// Size: 0x2a0 (Inherited: 0x248)
struct ASQAction : AActor {
	struct USQActionSettings* Setting; // 0x248(0x08)
	struct FSQActionParameters Parameters; // 0x250(0x40)
	int Team; // 0x290(0x04)
	struct TWeakObjectPtr<struct AController> DamageInstigatorController; // 0x294(0x08)
	char pad_29C[0x4]; // 0x29c(0x04)
};

// Class Squad.SQSettings
// Size: 0x58 (Inherited: 0x30)
struct USQSettings : UDataAsset {
	struct FName ID; // 0x30(0x08)
	struct FDataTableRowHandle Data; // 0x38(0x10)
	struct FString ModId; // 0x48(0x10)

	struct FString GetLogId(); // Function Squad.SQSettings.GetLogId // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c60c0
	struct FString GetIdAsString(); // Function Squad.SQSettings.GetIdAsString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6000
	struct FName GetId(); // Function Squad.SQSettings.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5fc0
	bool GetDisplayName(struct FText& OutDisplayName); // Function Squad.SQSettings.GetDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5d60
};

// Class Squad.SQActionSettings
// Size: 0x60 (Inherited: 0x58)
struct USQActionSettings : USQSettings {
	bool CreateMapMarker; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class Squad.SQAdminPanel
// Size: 0x230 (Inherited: 0x230)
struct USQAdminPanel : UUserWidget {
};

// Class Squad.SQPlayerController
// Size: 0xa70 (Inherited: 0x598)
struct ASQPlayerController : APlayerController {
	char pad_598[0x8]; // 0x598(0x08)
	struct ASQTeam* AuthorityTeam; // 0x5a0(0x08)
	struct ASQTeamState* TeamState; // 0x5a8(0x08)
	struct ASQTeamStatePrivate* PrivateTeamState; // 0x5b0(0x08)
	struct ASQSquad* AuthoritySquad; // 0x5b8(0x08)
	struct ASQSquadState* SquadState; // 0x5c0(0x08)
	struct ASQSquadStatePrivateToTeam* TeamPrivateSquadState; // 0x5c8(0x08)
	struct USQCoreStateConnection* StateConnection; // 0x5d0(0x08)
	float SpawnMenuPopupDelay; // 0x5d8(0x04)
	char pad_5DC[0x4]; // 0x5dc(0x04)
	struct ASQSoldier* LastSpawnedSoldier; // 0x5e0(0x08)
	char pad_5E8[0x1]; // 0x5e8(0x01)
	bool AreCommunicationButtonsAllowed; // 0x5e9(0x01)
	char bIsCrouchedDuringMenu : 1; // 0x5ea(0x01)
	char bIsPronedDuringMenu : 1; // 0x5ea(0x01)
	char pad_5EA_2 : 6; // 0x5ea(0x01)
	bool IsWinner; // 0x5eb(0x01)
	float TimeBecameIncapacitated; // 0x5ec(0x04)
	float SpawnDelayPenalties; // 0x5f0(0x04)
	float MaxSpawnDelay; // 0x5f4(0x04)
	bool bWasInVehicle; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	struct FSQBitFlag AccessLevel; // 0x5fc(0x04)
	char pad_600[0x18]; // 0x600(0x18)
	struct FScriptMulticastDelegate OnPlayerEnterVehicleEvent; // 0x618(0x10)
	struct FScriptMulticastDelegate OnPlayerExitVehicleEvent; // 0x628(0x10)
	struct FScriptMulticastDelegate OnRallyCreated; // 0x638(0x10)
	char pad_648[0x8]; // 0x648(0x08)
	struct FScriptMulticastDelegate OnChatStarted; // 0x650(0x10)
	struct USQToastWidget* ToastWidgetClass; // 0x660(0x08)
	struct FText ChangeRoleNoAmmoText; // 0x668(0x18)
	struct FText AmmoBagNoAmmoText; // 0x680(0x18)
	struct FText MaxAmmoBagText; // 0x698(0x18)
	struct FText RearmFromAmmoBagText; // 0x6b0(0x18)
	struct FText RoleCannotPickupAmmoBagText; // 0x6c8(0x18)
	struct FText RearmFromVehicleNoAmmoText; // 0x6e0(0x18)
	struct FText RearmFromVehicleConfirmationText; // 0x6f8(0x18)
	struct FText RearmFromVehiclePromptText; // 0x710(0x18)
	struct FText CannotStartVehicleInStagingPhaseText; // 0x728(0x18)
	float WalkingOriginRebaseThreshold; // 0x740(0x04)
	float RidingOriginRebaseThreshold; // 0x744(0x04)
	float FlyingOriginRebaseThreshold; // 0x748(0x04)
	float LeaveVehicleOriginRebaseThreshold; // 0x74c(0x04)
	float OriginRebaseFrequency; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	struct TArray<struct ASQMapMarker*> MapMarkerArray; // 0x758(0x10)
	struct USQMapMarkerInputComponent* MapMarkerInputComponent; // 0x768(0x08)
	struct FScriptMulticastDelegate OnNewMarkerCreatedEvent; // 0x770(0x10)
	struct USQAdminStats* AdminStats; // 0x780(0x08)
	struct TArray<struct AActor*> SpawnableActors; // 0x788(0x10)
	struct UDataTable* ApprovalMessages; // 0x798(0x08)
	struct USQVehicleSeatComponent* CurrentSeat; // 0x7a0(0x08)
	char pad_7A8[0xb8]; // 0x7a8(0xb8)
	float AlwaysRenderPawnsDistance; // 0x860(0x04)
	char pad_864[0x34]; // 0x864(0x34)
	struct UAudioComponent* MusicAC; // 0x898(0x08)
	struct USoundBase* MusicSound; // 0x8a0(0x08)
	struct TArray<struct FSQSystemHUDMessage> QueuedSystemMessages; // 0x8a8(0x10)
	struct TArray<struct APawn*> RefreshTypes; // 0x8b8(0x10)
	struct USQDataGatheringComponent* DataGatheringComponent; // 0x8c8(0x08)
	struct USQCommanderInputComponent* CommanderInputComponent; // 0x8d0(0x08)
	struct USQBoundaryListener* BoundaryListener; // 0x8d8(0x08)
	float OutOfMapBoundsKillTimestamp; // 0x8e0(0x04)
	float PendingDeathKillTimestamp; // 0x8e4(0x04)
	struct APawn* LastRefreshedPawn; // 0x8e8(0x08)
	struct ASQGameSpawn* SelectedSpawn; // 0x8f0(0x08)
	char pad_8F8[0x8]; // 0x8f8(0x08)
	struct TMap<uint32, struct FSQApprovalEntryRequest> ApprovalEntries; // 0x900(0x50)
	struct TMap<uint32, struct FSQApprovalEntryClientDesc> ApprovalEntriesOnClient; // 0x950(0x50)
	char pad_9A0[0x20]; // 0x9a0(0x20)
	float PawnRenderDistance; // 0x9c0(0x04)
	char pad_9C4[0x34]; // 0x9c4(0x34)
	struct TMap<struct FUniqueNetIdRepl, struct ASQPlayerState*> CachedPlayersToMute; // 0x9f8(0x50)
	struct USQMovementComponentNetworker* Networker; // 0xa48(0x08)
	struct ASQDeployable* ActiveGhost; // 0xa50(0x08)
	bool IsDeployingItem; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct USQVotingComponent* VotingComponentClass; // 0xa60(0x08)
	struct USQVotingComponent* VotingComponent; // 0xa68(0x08)

	void UnmuteSquad(struct ASQSquadState* MuteSquadState); // Function Squad.SQPlayerController.UnmuteSquad // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8becd0
	void UnmuteAllPlayersExceptSquad(); // Function Squad.SQPlayerController.UnmuteAllPlayersExceptSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x8becb0
	bool TryClaimVehicle(struct ASQVehicle* Vehicle); // Function Squad.SQPlayerController.TryClaimVehicle // (Final|Native|Public) // @ game+0x8bec20
	void ToggleShowRebase(bool Value); // Function Squad.SQPlayerController.ToggleShowRebase // (Final|Native|Public) // @ game+0x8beb90
	void ToggleMutePlayer(struct ASQPlayerState* MutePlayerState); // Function Squad.SQPlayerController.ToggleMutePlayer // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8beb10
	float TimeUntilCanSpawn(); // Function Squad.SQPlayerController.TimeUntilCanSpawn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8beae0
	void StopMusic(); // Function Squad.SQPlayerController.StopMusic // (Native|Public|BlueprintCallable) // @ game+0x8beac0
	void StartPlaceDeployable(struct USQDeployableSettings* InDeployableSettings, bool InIsItem); // Function Squad.SQPlayerController.StartPlaceDeployable // (Final|Native|Public|BlueprintCallable) // @ game+0x8be9f0
	void SQSM_SetServerUpdateRate(float Value); // Function Squad.SQPlayerController.SQSM_SetServerUpdateRate // (Final|Exec|Native|Public) // @ game+0x8ba7b0
	void SQSM_SetNonRenderedUpdateRate(float Value); // Function Squad.SQPlayerController.SQSM_SetNonRenderedUpdateRate // (Final|Exec|Native|Public) // @ game+0x8ba730
	void SQSM_SetDistanceFactorThesholds(int Index, float Value); // Function Squad.SQPlayerController.SQSM_SetDistanceFactorThesholds // (Final|Exec|Native|Public) // @ game+0x8ba660
	void SQSM_RemoveDistanceFactorThesholds(int srcIndex, int Count); // Function Squad.SQPlayerController.SQSM_RemoveDistanceFactorThesholds // (Final|Exec|Native|Public) // @ game+0x8ba5a0
	void SQSM_PrintDistanceFactorThesholds(); // Function Squad.SQPlayerController.SQSM_PrintDistanceFactorThesholds // (Final|Exec|Native|Public) // @ game+0x8ba580
	void SQSM_InsertDistanceFactorThesholds(int Index, float Value); // Function Squad.SQPlayerController.SQSM_InsertDistanceFactorThesholds // (Final|Exec|Native|Public) // @ game+0x8ba4b0
	void SQBugit(struct FString ScreenShotDescription); // Function Squad.SQPlayerController.SQBugit // (Final|Exec|Native|Public) // @ game+0x8ba410
	void SpawnGhost(struct UClass* InDeployableReference, struct USQDeployableSettings* InDeployableSettings); // Function Squad.SQPlayerController.SpawnGhost // (Final|Native|Protected) // @ game+0x8be8d0
	void SpawnDeployableItem(struct UClass* InDeployableReference, struct FTransform InPosition); // Function Squad.SQPlayerController.SpawnDeployableItem // (Final|Native|Protected|HasDefaults) // @ game+0x8be760
	void SpawnDeployable(struct UClass* InDeployableReference, struct USQDeployableSettings* InDeployableSettings, struct FTransform InPosition); // Function Squad.SQPlayerController.SpawnDeployable // (Final|Native|Protected|HasDefaults) // @ game+0x8be5b0
	void SimulateInputKey(struct FKey Key, bool bPressed); // Function Squad.SQPlayerController.SimulateInputKey // (Final|Native|Public|BlueprintCallable) // @ game+0x8be480
	void ShowToast(struct FText& ToastText, float Lifetime, bool bForceSlate); // Function Squad.SQPlayerController.ShowToast // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8be310
	bool ShouldSkipPassword(); // Function Squad.SQPlayerController.ShouldSkipPassword // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8be2e0
	void ShareRallyPoint(int SquadId); // Function Squad.SQPlayerController.ShareRallyPoint // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8be260
	void SetWorldOrigin(struct FIntVector& NewOrigin); // Function Squad.SQPlayerController.SetWorldOrigin // (Final|Exec|Native|Private|HasOutParms|HasDefaults|Const) // @ game+0x8be1d0
	void SetSelectionMode(bool bEnabled); // Function Squad.SQPlayerController.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x8be140
	void SetRoamingMapOpen(bool bOpen); // Function Squad.SQPlayerController.SetRoamingMapOpen // (Final|Native|Public|BlueprintCallable) // @ game+0x8be0b0
	void SetPendingDeathKillTimestamp(float Timestamp); // Function Squad.SQPlayerController.SetPendingDeathKillTimestamp // (Final|Native|Public|BlueprintCallable) // @ game+0x8be030
	void SetOutOfMapBoundsKillTimestamp(float Timestamp); // Function Squad.SQPlayerController.SetOutOfMapBoundsKillTimestamp // (Final|Native|Public|BlueprintCallable) // @ game+0x8bdfb0
	void SetIgnoreWeaponInput(bool bNewClickInput); // Function Squad.SQPlayerController.SetIgnoreWeaponInput // (Final|Native|Public|BlueprintCallable) // @ game+0x8bdf20
	void SetDeployRole(struct USQRoleSettings* NewRoleSettings); // Function Squad.SQPlayerController.SetDeployRole // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x8bdea0
	void SetCurrentRole(struct USQRoleSettings* NewRoleSettings, enum class ESQSpawnInventoryReason SpawnInventoryReason); // Function Squad.SQPlayerController.SetCurrentRole // (Final|Native|Public|BlueprintCallable) // @ game+0x8bdde0
	void ServerUnmuteSquad(struct ASQSquadState* MuteSquadState); // Function Squad.SQPlayerController.ServerUnmuteSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bdd20
	void ServerTryClaimVehicle(struct ASQVehicle* VehicleToClaim); // Function Squad.SQPlayerController.ServerTryClaimVehicle // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bdc60
	void ServerTryApproveVehicleClaim(); // Function Squad.SQPlayerController.ServerTryApproveVehicleClaim // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bdc10
	void ServerSwitchSeat(int Index); // Function Squad.SQPlayerController.ServerSwitchSeat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bdb50
	void ServerSuicide(bool bLeavingServer); // Function Squad.SQPlayerController.ServerSuicide // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bda90
	void ServerStartHealing(struct ASQSoldier* HealedSoldier); // Function Squad.SQPlayerController.ServerStartHealing // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bd9d0
	void ServerSLInviteMember(struct ASQPlayerState* PlayerToInvite); // Function Squad.SQPlayerController.ServerSLInviteMember // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bd610
	void ServerShareRallyPoint(int SquadId); // Function Squad.SQPlayerController.ServerShareRallyPoint // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bd910
	void ServerSetVoipHandAnim(enum class ESQVoiceChannel VoiceChannel); // Function Squad.SQPlayerController.ServerSetVoipHandAnim // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8bd860
	void ServerSetMuteAllPlayersExceptSquad(bool bMute); // Function Squad.SQPlayerController.ServerSetMuteAllPlayersExceptSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bd7a0
	void ServerSay(struct FString Msg); // Function Squad.SQPlayerController.ServerSay // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x8bd6d0
	void ServerRequestServerTime(struct FDateTime InClientUTCTime); // Function Squad.SQPlayerController.ServerRequestServerTime // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x8bd560
	void ServerRequestRoleRearm(struct FName InRoleId, struct UObject* InRearmSource); // Function Squad.SQPlayerController.ServerRequestRoleRearm // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8bd460
	void ServerRequestRole(struct FName InRoleId); // Function Squad.SQPlayerController.ServerRequestRole // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8bd3a0
	void ServerRequestRestartPlayer(struct ASQGameSpawn* Spawn); // Function Squad.SQPlayerController.ServerRequestRestartPlayer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bd2e0
	void ServerRequestPlaceDeployableItem(struct FName InDeployableItemId, struct FTransform InPosition); // Function Squad.SQPlayerController.ServerRequestPlaceDeployableItem // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|BlueprintCallable|NetValidate) // @ game+0x8bd1a0
	void ServerRequestPlaceDeployable(struct FName InDeployabeId, struct FTransform InPosition); // Function Squad.SQPlayerController.ServerRequestPlaceDeployable // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|BlueprintCallable|NetValidate) // @ game+0x8bd060
	void ServerRequestDeployRole(struct USQRoleSettings* NewRole); // Function Squad.SQPlayerController.ServerRequestDeployRole // (Final|Native|Protected|BlueprintCallable) // @ game+0x8bcfe0
	void ServerRemoveVehicleOverlayWidget(); // Function Squad.SQPlayerController.ServerRemoveVehicleOverlayWidget // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bcf90
	void ServerRearmWeapons(struct UObject* RearmObject, struct TArray<struct FSQRearmWeaponRequest> RearmRequest); // Function Squad.SQPlayerController.ServerRearmWeapons // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bce80
	void ServerProcessApprovalEntry(char Mode, uint32 VerifyKey); // Function Squad.SQPlayerController.ServerProcessApprovalEntry // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bcd80
	void ServerPlayEmoteAnim(enum class ESQEmotes Emote); // Function Squad.SQPlayerController.ServerPlayEmoteAnim // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8bccd0
	void ServerPlayCustomEmote(struct FName CustomName); // Function Squad.SQPlayerController.ServerPlayCustomEmote // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8bcc10
	void ServerOnPlayerToggleVoice_Editor(struct FUniqueNetIdRepl TalkingPlayerId, enum class ESQVoiceChannel VoiceChannel); // Function Squad.SQPlayerController.ServerOnPlayerToggleVoice_Editor // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bca50
	void ServerNotifyExplosiveHit(struct FSQShotInfo ShotInfoZeroBased, struct TArray<struct FSQPenetrationTrace> TargetsZeroBased, struct FHitResult HitResult, struct FArmorPenetration CachedPenetration, struct FSQWeaponData WeaponConfig); // Function Squad.SQPlayerController.ServerNotifyExplosiveHit // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc7a0
	void ServerMuteSquad(struct ASQSquadState* MuteSquadState); // Function Squad.SQPlayerController.ServerMuteSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc6e0
	void ServerMovePlayerToFireTeam(struct ASQPlayerState* TargetPlayerState, int FireTeamIndex, int Position); // Function Squad.SQPlayerController.ServerMovePlayerToFireTeam // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc5b0
	void ServerLeaveSquad(); // Function Squad.SQPlayerController.ServerLeaveSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc560
	void ServerKickPlayerFromSquad(struct ASQPlayerState* ToKick); // Function Squad.SQPlayerController.ServerKickPlayerFromSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc4a0
	void ServerJoinSquad(struct ASQSquadStatePrivateToTeam* ToJoin); // Function Squad.SQPlayerController.ServerJoinSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc3e0
	void ServerGiveUp(); // Function Squad.SQPlayerController.ServerGiveUp // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc390
	void ServerGiveSquadLeader(struct ASQPlayerState* NewLeader); // Function Squad.SQPlayerController.ServerGiveSquadLeader // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc2d0
	void ServerGiveFireTeamLeader(struct ASQPlayerState* NewLeader, int FireTeamIndex); // Function Squad.SQPlayerController.ServerGiveFireTeamLeader // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc1d0
	void ServerGameplayUnmutePlayer(struct FUniqueNetIdRepl MutePlayerId); // Function Squad.SQPlayerController.ServerGameplayUnmutePlayer // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bc060
	void ServerGameplayMutePlayer(struct FUniqueNetIdRepl MutePlayerId); // Function Squad.SQPlayerController.ServerGameplayMutePlayer // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bbef0
	void ServerGameCommandFromRemotePlayer(struct FString Cmd); // Function Squad.SQPlayerController.ServerGameCommandFromRemotePlayer // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bbe20
	void ServerFinishSeatProgress(struct ASQVehicle* Vehicle); // Function Squad.SQPlayerController.ServerFinishSeatProgress // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bbd60
	void ServerEndHealing(); // Function Squad.SQPlayerController.ServerEndHealing // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bbd10
	void ServerEmergencyTeleport(struct ASQVehicle* Vehicle, float HeightOffset, float YawDegrees); // Function Squad.SQPlayerController.ServerEmergencyTeleport // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bbbe0
	void ServerDisbandSquad(); // Function Squad.SQPlayerController.ServerDisbandSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bbb90
	void ServerDisbandFireTeam(int FireTeamIndex); // Function Squad.SQPlayerController.ServerDisbandFireTeam // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bbad0
	void ServerDebugToggleVehicleGodMode(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleVehicleGodMode // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bba10
	void ServerDebugToggleShowVehicleDamageReceived(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleShowVehicleDamageReceived // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb950
	void ServerDebugToggleShowRebase(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleShowRebase // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb890
	void ServerDebugToggleShowHitreg(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleShowHitreg // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb7d0
	void ServerDebugToggleNoStaminaDrain(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleNoStaminaDrain // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb710
	void ServerDebugToggleInfiniteMags(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleInfiniteMags // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb650
	void ServerDebugToggleForceNoCommanderCooldowns(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleForceNoCommanderCooldowns // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb590
	void ServerDebugToggleForceAllowCommanderActions(bool Value); // Function Squad.SQPlayerController.ServerDebugToggleForceAllowCommanderActions // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb4d0
	void ServerDebugSkipStaging(); // Function Squad.SQPlayerController.ServerDebugSkipStaging // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb480
	void ServerDebugSetServerTickRate(float NewTickRate); // Function Squad.SQPlayerController.ServerDebugSetServerTickRate // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb3d0
	void ServerDebugSetServerSecondsNonSeamlessForced(float Seconds); // Function Squad.SQPlayerController.ServerDebugSetServerSecondsNonSeamlessForced // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb320
	void ServerDebugRemoveSteamTestItem(int ID, int Amount); // Function Squad.SQPlayerController.ServerDebugRemoveSteamTestItem // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8bb220
	void ServerDebugEndMatch(); // Function Squad.SQPlayerController.ServerDebugEndMatch // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bb1d0
	void ServerDebugBugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Squad.SQPlayerController.ServerDebugBugItGo // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bafb0
	void ServerDebugAssignSteamTestItem(int ID, int Amount); // Function Squad.SQPlayerController.ServerDebugAssignSteamTestItem // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8baeb0
	void ServerCreateVehicleOverlayWidget(struct USQVehicleViewWidget* WidgetClass); // Function Squad.SQPlayerController.ServerCreateVehicleOverlayWidget // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8badf0
	void ServerCreateSquad(struct FString Name, bool Locked); // Function Squad.SQPlayerController.ServerCreateSquad // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bacd0
	void ServerCreateRallyPoint(); // Function Squad.SQPlayerController.ServerCreateRallyPoint // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8bac80
	void ServerChat(struct FString Msg, enum class ESQChat ChatType); // Function Squad.SQPlayerController.ServerChat // (Net|Native|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8bab70
	void ServerChangeSquadLock(struct ASQSquadState* Squad); // Function Squad.SQPlayerController.ServerChangeSquadLock // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8baab0
	void ServerCancelRestartPlayer(); // Function Squad.SQPlayerController.ServerCancelRestartPlayer // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8baa60
	void ServerAddApprovalEntry(struct FSQApprovalEntryRequest Entry, enum class EApprovalRequestChannels Filter); // Function Squad.SQPlayerController.ServerAddApprovalEntry // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8ba960
	void SelectSpawn(struct ASQGameSpawn* Spawn); // Function Squad.SQPlayerController.SelectSpawn // (Final|Native|Public|BlueprintCallable) // @ game+0x8ba8e0
	void Say(struct FString Msg); // Function Squad.SQPlayerController.Say // (Exec|Native|Public|BlueprintCallable) // @ game+0x8ba830
	void Respawn(); // Function Squad.SQPlayerController.Respawn // (Exec|Native|Public|BlueprintCallable) // @ game+0x8ba3f0
	bool RequestRoleRearm(struct USQRoleSettings* InRoleSettings, struct TScriptInterface<Class>& InRearmSource); // Function Squad.SQPlayerController.RequestRoleRearm // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ba300
	bool RequestRole(struct USQRoleSettings* InRoleSettings); // Function Squad.SQPlayerController.RequestRole // (Final|Native|Public|BlueprintCallable) // @ game+0x8ba270
	void RandomizeOriginOffset(); // Function Squad.SQPlayerController.RandomizeOriginOffset // (Final|Native|Public) // @ game+0x8ba250
	void ProcessApprovalEntry(char Mode); // Function Squad.SQPlayerController.ProcessApprovalEntry // (Final|Native|Public|BlueprintCallable) // @ game+0x8ba1d0
	void PrintWeaponHashes(); // Function Squad.SQPlayerController.PrintWeaponHashes // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8ba1b0
	void PlayMusic(); // Function Squad.SQPlayerController.PlayMusic // (Native|Public|BlueprintCallable) // @ game+0x8ba190
	void PlayEmoteAnim(enum class ESQEmotes Emote, struct FName CustomName); // Function Squad.SQPlayerController.PlayEmoteAnim // (Final|Native|Public|BlueprintCallable) // @ game+0x8ba0d0
	void OnWorldOriginLocationChangedEventHandler(struct FVector WorldOrigin); // Function Squad.SQPlayerController.OnWorldOriginLocationChangedEventHandler // (Final|Native|Public|HasDefaults) // @ game+0x8ba040
	void OnSpawningEnabledStateChanged(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQPlayerController.OnSpawningEnabledStateChanged // (Final|Native|Private) // @ game+0x8b9fc0
	void OnSelectedSpawnSiegedStateChanged(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQPlayerController.OnSelectedSpawnSiegedStateChanged // (Final|Native|Private) // @ game+0x8b9ec0
	void OnSelectedSpawnerDestroyed(struct AActor* Actor); // Function Squad.SQPlayerController.OnSelectedSpawnerDestroyed // (Final|Native|Private) // @ game+0x8b9f40
	void OnSelectedSpawnActivatedTimeStampChangedSignal(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQPlayerController.OnSelectedSpawnActivatedTimeStampChangedSignal // (Final|Native|Private) // @ game+0x8b9e40
	void OnRep_TeamState(); // Function Squad.SQPlayerController.OnRep_TeamState // (Native|Public) // @ game+0x8b9e20
	void OnRep_SquadState(struct ASQSquadState* OldSquadState); // Function Squad.SQPlayerController.OnRep_SquadState // (Native|Public) // @ game+0x8b9d90
	void OnRep_PendingDeathKillTimestamp(); // Function Squad.SQPlayerController.OnRep_PendingDeathKillTimestamp // (Final|Native|Private) // @ game+0x8b9d70
	void OnRep_OutOfMapBoundsKillTimestamp(); // Function Squad.SQPlayerController.OnRep_OutOfMapBoundsKillTimestamp // (Final|Native|Private) // @ game+0x8b9d50
	void OnRep_CurrentSeat(); // Function Squad.SQPlayerController.OnRep_CurrentSeat // (Final|Native|Public) // @ game+0x8b9d30
	void OnReceiveChat(struct ASQPlayerState* Speaker, struct FString Message, enum class ESQChat Channel, enum class ESQNotificationTypes NotificationType, struct FString StreamerModeVariantMessage); // Function Squad.SQPlayerController.OnReceiveChat // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x8b9b80
	void OnPendingDeathChanged(float KillTimestamp, bool bDeathIsPending); // Function Squad.SQPlayerController.OnPendingDeathChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnOutOfMapBoundsChanged(float KillTimestamp, bool bIsOutOfBounds); // Function Squad.SQPlayerController.OnOutOfMapBoundsChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	bool OnFireWeaponOverride(); // Function Squad.SQPlayerController.OnFireWeaponOverride // (Native|Event|Public|BlueprintEvent) // @ game+0x8b9b50
	void OnExitBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQPlayerController.OnExitBoundary // (Final|Native|Public) // @ game+0x8b9a90
	void OnEnterBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQPlayerController.OnEnterBoundary // (Final|Native|Public) // @ game+0x8b99d0
	void OnDelayedSpawnCallback(); // Function Squad.SQPlayerController.OnDelayedSpawnCallback // (Final|Native|Private) // @ game+0x8b99b0
	bool OnAltFireWeaponOverride(); // Function Squad.SQPlayerController.OnAltFireWeaponOverride // (Native|Event|Public|BlueprintEvent) // @ game+0x8b9980
	void MuteSquad(struct ASQSquadState* MuteSquadState); // Function Squad.SQPlayerController.MuteSquad // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b9900
	void MuteAllPlayersExceptSquad(); // Function Squad.SQPlayerController.MuteAllPlayersExceptSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x8b98e0
	void MovePlayerToFireTeam(struct ASQPlayerState* TargetPlayerState, int FireTeamIndex, int Position); // Function Squad.SQPlayerController.MovePlayerToFireTeam // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b97e0
	void LeaveSquad(); // Function Squad.SQPlayerController.LeaveSquad // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b9740
	void KickPlayerFromSquad(struct ASQPlayerState* ToKick); // Function Squad.SQPlayerController.KickPlayerFromSquad // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b96c0
	void JoinSquadWithName(struct FString Name); // Function Squad.SQPlayerController.JoinSquadWithName // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b9620
	void JoinSquadWithId(int ID); // Function Squad.SQPlayerController.JoinSquadWithId // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b95a0
	bool IsWounded(); // Function Squad.SQPlayerController.IsWounded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9570
	bool IsWeaponInputIgnored(); // Function Squad.SQPlayerController.IsWeaponInputIgnored // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9540
	bool IsUsingFreeLook(); // Function Squad.SQPlayerController.IsUsingFreeLook // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9510
	bool IsSquadLeader(); // Function Squad.SQPlayerController.IsSquadLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b94e0
	bool IsShowingSpawnMenu(); // Function Squad.SQPlayerController.IsShowingSpawnMenu // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b94b0
	bool IsRoamingMapOpen(); // Function Squad.SQPlayerController.IsRoamingMapOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9480
	bool IsQA(); // Function Squad.SQPlayerController.IsQA // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9450
	bool IsPlayer(); // Function Squad.SQPlayerController.IsPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b9420
	bool IsOutOfMapBounds(); // Function Squad.SQPlayerController.IsOutOfMapBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b93f0
	bool IsMember(); // Function Squad.SQPlayerController.IsMember // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b93c0
	bool IsInVehicle(); // Function Squad.SQPlayerController.IsInVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b9360
	bool IsInactive(); // Function Squad.SQPlayerController.IsInactive // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b9390
	bool IsFireTeamLeader(); // Function Squad.SQPlayerController.IsFireTeamLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9330
	bool IsEntryMap(); // Function Squad.SQPlayerController.IsEntryMap // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b9300
	bool IsDev(); // Function Squad.SQPlayerController.IsDev // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b92d0
	bool IsDeployRoleAvailable(); // Function Squad.SQPlayerController.IsDeployRoleAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b92a0
	bool IsDeathPending(); // Function Squad.SQPlayerController.IsDeathPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9270
	bool IsCommander(); // Function Squad.SQPlayerController.IsCommander // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9240
	bool IsCameraMan(); // Function Squad.SQPlayerController.IsCameraMan // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b9210
	bool IsAlive(); // Function Squad.SQPlayerController.IsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b91e0
	bool IsAdminCamera(); // Function Squad.SQPlayerController.IsAdminCamera // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b91b0
	bool IsAdmin(); // Function Squad.SQPlayerController.IsAdmin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b9180
	void GiveUp(); // Function Squad.SQPlayerController.GiveUp // (Exec|Native|Public|BlueprintCallable) // @ game+0x8b9160
	void GiveSquadLeader(struct ASQPlayerState* NewLeader); // Function Squad.SQPlayerController.GiveSquadLeader // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b90e0
	void GiveFireTeamLeader(struct ASQPlayerState* NewLeader, int FireTeamIndex); // Function Squad.SQPlayerController.GiveFireTeamLeader // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b9020
	float GetYawInputScale(); // Function Squad.SQPlayerController.GetYawInputScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ff0
	int GetTeam(); // Function Squad.SQPlayerController.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8f20
	struct ASQPlayerState* GetSquadPlayerState(); // Function Squad.SQPlayerController.GetSquadPlayerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ef0
	struct ASQSoldier* GetSoldier(); // Function Squad.SQPlayerController.GetSoldier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ec0
	struct ASQGameSpawn* GetSelectedSpawn(); // Function Squad.SQPlayerController.GetSelectedSpawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8d30
	float GetPitchInputScale(); // Function Squad.SQPlayerController.GetPitchInputScale // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8c70
	float GetPendingDeathKillTimestamp(); // Function Squad.SQPlayerController.GetPendingDeathKillTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8c50
	float GetOutOfMapBoundsKillTimestamp(); // Function Squad.SQPlayerController.GetOutOfMapBoundsKillTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ac0
	float GetLastDeathTime(); // Function Squad.SQPlayerController.GetLastDeathTime // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b8a10
	struct USQRoleSettings* GetDeployRole(); // Function Squad.SQPlayerController.GetDeployRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b86d0
	void GetDeployableReference(struct USQDeployableSettings* InDeployableSettings, struct UClass*& OutDeployableReference); // Function Squad.SQPlayerController.GetDeployableReference // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0x12b8b50
	struct ASQVehicle* GetCurrentVehicle(); // Function Squad.SQPlayerController.GetCurrentVehicle // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8530
	struct ASQVehicleSeat* GetCurrentSeatPawn(); // Function Squad.SQPlayerController.GetCurrentSeatPawn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8500
	struct USQVehicleSeatComponent* GetCurrentSeat(); // Function Squad.SQPlayerController.GetCurrentSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b84d0
	struct USQRoleSettings* GetCurrentRole(); // Function Squad.SQPlayerController.GetCurrentRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b84a0
	void FinalizePendingDeployableItem(bool& OutSuccess); // Function Squad.SQPlayerController.FinalizePendingDeployableItem // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8b8370
	void FinalizePendingDeployable(bool& OutSuccess); // Function Squad.SQPlayerController.FinalizePendingDeployable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8b82e0
	void DisbandSquad(); // Function Squad.SQPlayerController.DisbandSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x8b82c0
	void DisbandFireTeam(int FireTeamIndex); // Function Squad.SQPlayerController.DisbandFireTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x8b8240
	void DisapproveQueue(); // Function Squad.SQPlayerController.DisapproveQueue // (Final|Native|Public|BlueprintCallable) // @ game+0x8b8220
	void DebugToggleVehicleGodMode(bool Value); // Function Squad.SQPlayerController.DebugToggleVehicleGodMode // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b8190
	void DebugToggleShowVehicleDamageReceived(bool Value); // Function Squad.SQPlayerController.DebugToggleShowVehicleDamageReceived // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b8100
	void DebugToggleShowRebase(bool Value); // Function Squad.SQPlayerController.DebugToggleShowRebase // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b8070
	void DebugToggleShowHitreg(bool Value); // Function Squad.SQPlayerController.DebugToggleShowHitreg // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7fe0
	void DebugToggleNoStaminaDrain(bool Value); // Function Squad.SQPlayerController.DebugToggleNoStaminaDrain // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7f50
	void DebugToggleInfiniteMags(bool Value); // Function Squad.SQPlayerController.DebugToggleInfiniteMags // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7ec0
	void DebugToggleForceNoCommanderCooldowns(bool Value); // Function Squad.SQPlayerController.DebugToggleForceNoCommanderCooldowns // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7e30
	void DebugToggleForceAllowCommanderActions(bool Value); // Function Squad.SQPlayerController.DebugToggleForceAllowCommanderActions // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7da0
	void DebugToggleEditorBlastCones(bool Value); // Function Squad.SQPlayerController.DebugToggleEditorBlastCones // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7d10
	void DebugToggleCenterDot(); // Function Squad.SQPlayerController.DebugToggleCenterDot // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7cf0
	void DebugSkipStaging(); // Function Squad.SQPlayerController.DebugSkipStaging // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7cd0
	void DebugSetServerTickRate(float NewTickRate); // Function Squad.SQPlayerController.DebugSetServerTickRate // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7c50
	void DebugSetServerSecondsNonSeamlessForced(float Seconds); // Function Squad.SQPlayerController.DebugSetServerSecondsNonSeamlessForced // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7c50
	void DebugRemoveSteamTestItem(int ID, int Amount); // Function Squad.SQPlayerController.DebugRemoveSteamTestItem // (Final|Exec|Native|Private|BlueprintCallable) // @ game+0x8b7b90
	void DebugForceOriginRebase(); // Function Squad.SQPlayerController.DebugForceOriginRebase // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7b70
	void DebugEndMatch(); // Function Squad.SQPlayerController.DebugEndMatch // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7b50
	void DebugBugItGo(float X, float Y, float Z, float Pitch, float Yaw, float Roll); // Function Squad.SQPlayerController.DebugBugItGo // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b7970
	void DebugAssignSteamTestItem(int ID, int Amount); // Function Squad.SQPlayerController.DebugAssignSteamTestItem // (Final|Exec|Native|Private|BlueprintCallable) // @ game+0x8b78b0
	void CreateSquad(struct FString Name, bool Locked); // Function Squad.SQPlayerController.CreateSquad // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b77c0
	void CreateRallyPoint(); // Function Squad.SQPlayerController.CreateRallyPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x8b77a0
	void CreateMarker(int TeamId, int ClientId, struct UTexture2D* IconTexture, struct FVector2D MapPosition, float LifeT, struct AActor* MyOwner); // Function Squad.SQPlayerController.CreateMarker // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable|NetValidate) // @ game+0x8b7590
	void CoreStateRefreshVisibility(); // Function Squad.SQPlayerController.CoreStateRefreshVisibility // (Final|Native|Protected|BlueprintCallable) // @ game+0x8b7570
	void CommitSpawn(); // Function Squad.SQPlayerController.CommitSpawn // (Final|Native|Public|BlueprintCallable) // @ game+0x8b7550
	void CloseConsole(); // Function Squad.SQPlayerController.CloseConsole // (Final|Native|Public|BlueprintCallable) // @ game+0x8b7530
	void ClientWasKickedFromSquad(struct FText KickReason, int SquadId, float DurationOfBan); // Function Squad.SQPlayerController.ClientWasKickedFromSquad // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b73d0
	void ClientSystemMessage(struct FString Message, struct FLinearColor Color, float MessageLifetime, enum class ESQNotificationTypes NotificationType); // Function Squad.SQPlayerController.ClientSystemMessage // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient|BlueprintCallable) // @ game+0x8b7260
	void ClientStartSeatProgressBar(float Timer, struct ASQVehicle* Vehicle, enum class ESeatProgressMenuMode MenuMode); // Function Squad.SQPlayerController.ClientStartSeatProgressBar // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b7110
	void ClientStartOnlineGame(); // Function Squad.SQPlayerController.ClientStartOnlineGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b70f0
	void ClientStartingNewPlayer(); // Function Squad.SQPlayerController.ClientStartingNewPlayer // (Net|NetReliableNative|Event|Public|NetClient|NetValidate) // @ game+0x8b7210
	void ClientShowVehicleInventory(struct ASQVehicle* Vehicle, enum class ESeatProgressMenuMode MenuMode); // Function Squad.SQPlayerController.ClientShowVehicleInventory // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b7020
	void ClientShowToast(struct FText ToastText, float Lifetime); // Function Squad.SQPlayerController.ClientShowToast // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b6f10
	void ClientSetSpectatorCamera(struct FVector CameraLocation, struct FRotator CameraRotation); // Function Squad.SQPlayerController.ClientSetSpectatorCamera // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x8b6e30
	void ClientSendRoundEndEvent(int WinningTeam, int LosingTeam, int WinnerTickets, int LoserTickets); // Function Squad.SQPlayerController.ClientSendRoundEndEvent // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6cf0
	void ClientSendLineToConsole(struct FString Line); // Function Squad.SQPlayerController.ClientSendLineToConsole // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6c40
	void ClientResetInventoryWeaponIndex(); // Function Squad.SQPlayerController.ClientResetInventoryWeaponIndex // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b6c20
	void ClientReportServerTime(struct FDateTime InRequestClientUTCTime, struct FDateTime InServerUTCTime, float WaterTimeSeconds); // Function Squad.SQPlayerController.ClientReportServerTime // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x8b6b20
	void ClientRemoveVehicleOverlayWidget(); // Function Squad.SQPlayerController.ClientRemoveVehicleOverlayWidget // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b6b00
	void ClientPushApprovalMessage(uint32 Key, struct FSQApprovalEntryRequest ApprovalEntry, struct ASQPlayerState* Requester); // Function Squad.SQPlayerController.ClientPushApprovalMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b69f0
	void ClientOpenDeployableInteractableMenu(struct ASQDeployableInteractable* DeployableInteractable); // Function Squad.SQPlayerController.ClientOpenDeployableInteractableMenu // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b6960
	void ClientOpenAmmoBag(struct ASQDeployableAmmoBag* ammobag); // Function Squad.SQPlayerController.ClientOpenAmmoBag // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b68d0
	void ClientOnPlayerToggleVoice_Editor(struct FUniqueNetIdRepl TalkingPlayerId, enum class ESQVoiceChannel VoiceChannel); // Function Squad.SQPlayerController.ClientOnPlayerToggleVoice_Editor // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6760
	void ClientNotifyPlayerWounded(struct ASQPlayerController* WoundedPlayer); // Function Squad.SQPlayerController.ClientNotifyPlayerWounded // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b66d0
	void ClientNotifyPlayerDestroyedVehicle(struct ASQVehicle* Vehicle); // Function Squad.SQPlayerController.ClientNotifyPlayerDestroyedVehicle // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6640
	void ClientIgnoreWeaponInput(bool bIgnore); // Function Squad.SQPlayerController.ClientIgnoreWeaponInput // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b65b0
	void ClientHideVehicleRadial(); // Function Squad.SQPlayerController.ClientHideVehicleRadial // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6590
	void ClientGameStarted(); // Function Squad.SQPlayerController.ClientGameStarted // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6570
	void ClientExposeUnavailabilityReason(struct FDataTableRowHandle InReason); // Function Squad.SQPlayerController.ClientExposeUnavailabilityReason // (BlueprintAuthorityOnly|Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable|NetValidate) // @ game+0x8b64a0
	void ClientEndOnlineGame(); // Function Squad.SQPlayerController.ClientEndOnlineGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6480
	void ClientEndHealing(); // Function Squad.SQPlayerController.ClientEndHealing // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8b6460
	void ClientDrawSphere(struct FVector ZeroLocation, float Radius, int Segments, struct FColor Color, bool RebaseOntoLocal, bool bPersistentLines, float Lifetime, struct FString LogLabel, char DepthPriority, float Thickness); // Function Squad.SQPlayerController.ClientDrawSphere // (Net|NetReliableNative|Event|Public|HasDefaults|NetClient) // @ game+0x8b6170
	void ClientCreateVehicleOverlayWidget(struct USQVehicleViewWidget* WidgetClass); // Function Squad.SQPlayerController.ClientCreateVehicleOverlayWidget // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b60e0
	void ClientCloseDeployableInteractableMenu(struct ASQDeployableInteractable* DeployableInteractable); // Function Squad.SQPlayerController.ClientCloseDeployableInteractableMenu // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b6050
	void ClientCloseAmmoBag(struct ASQDeployableAmmoBag* ammobag); // Function Squad.SQPlayerController.ClientCloseAmmoBag // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable) // @ game+0x8b5fc0
	void ClientChat(struct ASQPlayerState* Speaker, struct FString Message, enum class ESQChat Channel, enum class ESQNotificationTypes NotificationType, struct FString StreamerModeVariantMessage); // Function Squad.SQPlayerController.ClientChat // (Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable|Const) // @ game+0x8b5e10
	void CheckForAdmin(); // Function Squad.SQPlayerController.CheckForAdmin // (Final|Native|Public) // @ game+0x8b5df0
	void ChatToTeam(struct FString Msg); // Function Squad.SQPlayerController.ChatToTeam // (Exec|Native|Public|BlueprintCallable) // @ game+0x8b5d40
	void ChatToSquad(struct FString Msg); // Function Squad.SQPlayerController.ChatToSquad // (Exec|Native|Public|BlueprintCallable) // @ game+0x8b5c90
	void ChatToAll(struct FString Msg); // Function Squad.SQPlayerController.ChatToAll // (Exec|Native|Public|BlueprintCallable) // @ game+0x8b5be0
	void Chat(struct FString Msg, enum class ESQChat ChatType); // Function Squad.SQPlayerController.Chat // (Exec|Native|Public) // @ game+0x8b5af0
	void ChangeTeamsWithId(int NewTeam); // Function Squad.SQPlayerController.ChangeTeamsWithId // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b5a70
	void ChangeTeams(); // Function Squad.SQPlayerController.ChangeTeams // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8b5a50
	void ChangeRoleFromDeployable(struct USQRoleSettings* NewRole, struct ASQDeployable* Deployable); // Function Squad.SQPlayerController.ChangeRoleFromDeployable // (Final|Native|Protected|BlueprintCallable) // @ game+0x8b5990
	void ChangeRole(struct USQRoleSettings* NewRole, bool bGivePartialAmmo, bool bLeavingSquad); // Function Squad.SQPlayerController.ChangeRole // (Final|Native|Protected|BlueprintCallable) // @ game+0x8b5880
	void CancelPendingDeployable(); // Function Squad.SQPlayerController.CancelPendingDeployable // (Final|Native|Public|BlueprintCallable) // @ game+0x8b5860
	void BPTraceMarkerLocation(struct ASQMapMarker* MarkerClass, struct FVector& Start, struct FVector& End); // Function Squad.SQPlayerController.BPTraceMarkerLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x12b8b50
	void BPServerRearmWeapons(struct TScriptInterface<Class>& RearmSource, struct TArray<struct FSQRearmWeaponRequest>& RearmRequest); // Function Squad.SQPlayerController.BPServerRearmWeapons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8b5620
	bool BPHasAccessLevel(enum class ESQAdminAccessLevels RequestedLevel); // Function Squad.SQPlayerController.BPHasAccessLevel // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8b5590
	void BP_InitializeDeployableFromEquippable(struct ASQDeployableItem* DeployableItem, struct ASQEquipableItem* Equippable); // Function Squad.SQPlayerController.BP_InitializeDeployableFromEquippable // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void BP_FailPlaceDeployableFromEquippable(struct ASQEquipableItem* Equippable); // Function Squad.SQPlayerController.BP_FailPlaceDeployableFromEquippable // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void BP_ExposeUnavailabilityReason(struct FDataTableRowHandle& InReason); // Function Squad.SQPlayerController.BP_ExposeUnavailabilityReason // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintPlayerSpawned(); // Function Squad.SQPlayerController.BlueprintPlayerSpawned // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintPlayerDied(); // Function Squad.SQPlayerController.BlueprintPlayerDied // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintOnMatchStarted(); // Function Squad.SQPlayerController.BlueprintOnMatchStarted // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintOnMatchEnded(int WinningTeam, int LosingTeam, int WinnerTickets, int LoserTickets); // Function Squad.SQPlayerController.BlueprintOnMatchEnded // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void ApproveVehicleClaim(); // Function Squad.SQPlayerController.ApproveVehicleClaim // (Exec|Native|Public) // @ game+0x8b5570
	void ApproveQueue(); // Function Squad.SQPlayerController.ApproveQueue // (Final|Native|Public|BlueprintCallable) // @ game+0x8b5550
	void ApprovalEntryExpireOnServer(uint32 Index); // Function Squad.SQPlayerController.ApprovalEntryExpireOnServer // (Final|Native|Private) // @ game+0x8b54d0
	void ApprovalEntryExpireOnClient(uint32 Index); // Function Squad.SQPlayerController.ApprovalEntryExpireOnClient // (Final|Native|Private) // @ game+0x8b5450
};

// Class Squad.SQAdminStats
// Size: 0xf0 (Inherited: 0xd8)
struct USQAdminStats : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
};

// Class Squad.SQAIController
// Size: 0x370 (Inherited: 0x350)
struct ASQAIController : AAIController {
	struct UBlackboardComponent* BlackboardComp; // 0x350(0x08)
	struct UBehaviorTreeComponent* BehaviorComp; // 0x358(0x08)
	char pad_360[0x10]; // 0x360(0x10)

	void SpawnBots(int NumberOfBotsToSpawn); // Function Squad.SQAIController.SpawnBots // (Final|Exec|Native|Static|Public|BlueprintCallable) // @ game+0x829df0
	void ShootEnemy(); // Function Squad.SQAIController.ShootEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x829dd0
	bool IsEnemy(struct ASQSoldier* Soldier); // Function Squad.SQAIController.IsEnemy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x829760
	bool FindClosestEnemyWithLOS(struct ASQSoldier* ExcludeEnemy); // Function Squad.SQAIController.FindClosestEnemyWithLOS // (Final|Native|Public|BlueprintCallable) // @ game+0x8291b0
	void FindClosestEnemy(); // Function Squad.SQAIController.FindClosestEnemy // (Final|Native|Public|BlueprintCallable) // @ game+0x829190
};

// Class Squad.SQAmbientAndReverbComponent
// Size: 0x260 (Inherited: 0x220)
struct USQAmbientAndReverbComponent : USceneComponent {
	struct FScriptMulticastDelegate OnComponentBeginOverlap; // 0x218(0x01)
	struct FScriptMulticastDelegate OnComponentEndOverlap; // 0x219(0x01)
	struct FSQReverbVolumeEffect ReverbEffectSettings; // 0x220(0x20)
	struct UAudioComponent* SoundComponent; // 0x240(0x08)
	struct USoundBase* SoundEffect; // 0x248(0x08)
	float AmbientFadeInTime; // 0x250(0x04)
	float AmbientFadeOutTime; // 0x254(0x04)
	char pad_25A[0x6]; // 0x25a(0x06)

	void OnOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQAmbientAndReverbComponent.OnOverlapEnd // (Final|Native|Public) // @ game+0x829a00
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQAmbientAndReverbComponent.OnOverlapBegin // (Final|Native|Public|HasOutParms) // @ game+0x829810
};

// Class Squad.SQVehicleResource
// Size: 0x280 (Inherited: 0x248)
struct ASQVehicleResource : AActor {
	float ResourceDropQuantity; // 0x248(0x04)
	float ResourceDropRate; // 0x24c(0x04)
	float ServerResourceRate; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct ASQForwardBase* CurrentFob; // 0x258(0x08)
	struct AActor* CurrentCaptureZone; // 0x260(0x08)
	struct USQVehicleResourceWeaponInventoryComponent* ParentInventory; // 0x268(0x08)
	char pad_270[0x8]; // 0x270(0x08)
	int MaxResources; // 0x278(0x04)
	int Resources; // 0x27c(0x04)

	void UseResource(float ModifyAmount); // Function Squad.SQVehicleResource.UseResource // (Final|Native|Protected|BlueprintCallable) // @ game+0x911e20
	void ServerEndResourceDropOff(); // Function Squad.SQVehicleResource.ServerEndResourceDropOff // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x911490
	void ServerBeginResourceDropOff(struct ASQForwardBase* fob, struct AActor* Zone, float DropRate); // Function Squad.SQVehicleResource.ServerBeginResourceDropOff // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x9112a0
	void ModifyResource(float Amount); // Function Squad.SQVehicleResource.ModifyResource // (Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable) // @ game+0x910dd0
	bool FindValidDropOffs(struct ASQForwardBase*& fob, struct AActor*& Zone); // Function Squad.SQVehicleResource.FindValidDropOffs // (Final|Native|Protected|HasOutParms) // @ game+0x9105d0
	void BeginResourceDropOff(); // Function Squad.SQVehicleResource.BeginResourceDropOff // (Final|Native|Protected|BlueprintCallable) // @ game+0x910410
	bool AtValidResourcePoint(); // Function Squad.SQVehicleResource.AtValidResourcePoint // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x9103e0
};

// Class Squad.SQAmmoResource
// Size: 0x280 (Inherited: 0x280)
struct ASQAmmoResource : ASQVehicleResource {
};

// Class Squad.SQAmmoWidget
// Size: 0x340 (Inherited: 0x230)
struct USQAmmoWidget : USQUserWidget {
	struct TArray<struct USQMagazineGroupWidget*> MagazineGroupWidgets; // 0x230(0x10)
	struct UCanvasPanel* HighestLevelCanvas; // 0x240(0x08)
	struct UTextBlock* FiremodeTextBlock; // 0x248(0x08)
	struct UTextBlock* AmmoCountTextBlock; // 0x250(0x08)
	struct UTextBlock* ZeroingTextBlock; // 0x258(0x08)
	struct UImage* RoundInChamberImage; // 0x260(0x08)
	bool bShowFireSelectorInfo; // 0x268(0x01)
	bool bShowAmmoInMag; // 0x269(0x01)
	char pad_26A[0x6]; // 0x26a(0x06)
	struct ASQPlayerController* PlayerController; // 0x270(0x08)
	struct ASQPlayerState* PlayerState; // 0x278(0x08)
	struct FLinearColor RefillableMagazineColor; // 0x280(0x10)
	struct FLinearColor FullMagazineColor; // 0x290(0x10)
	struct FLinearColor NearlyFullMagazineColor; // 0x2a0(0x10)
	struct FLinearColor HalfMagazineColor; // 0x2b0(0x10)
	struct FLinearColor EmptyMagazineColor; // 0x2c0(0x10)
	struct FText FireModeAutoText; // 0x2d0(0x18)
	struct FText SightRangeText; // 0x2e8(0x18)
	struct FText FireModeSingleText; // 0x300(0x18)
	struct FText FireModeBurstText; // 0x318(0x18)
	struct ASQEquipableItem* CachedCurrentWeapon; // 0x330(0x08)
	char pad_338[0x8]; // 0x338(0x08)

	void UpdateState(); // Function Squad.SQAmmoWidget.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	bool UpdateShowingStatus(); // Function Squad.SQAmmoWidget.UpdateShowingStatus // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fa0
	void UpdateMags(struct ASQEquipableItem* CurrentItem); // Function Squad.SQAmmoWidget.UpdateMags // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829f10
	void UpdateFiremode(struct ASQEquipableItem* CurrentItem); // Function Squad.SQAmmoWidget.UpdateFiremode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829e80
	void UpdateCurrentWeapon(); // Function Squad.SQAmmoWidget.UpdateCurrentWeapon // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829e60
	void OnShowResourceAmounts(); // Function Squad.SQAmmoWidget.OnShowResourceAmounts // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnShowCurrentWeapon(); // Function Squad.SQAmmoWidget.OnShowCurrentWeapon // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnCurrentWeaponChanged(); // Function Squad.SQAmmoWidget.OnCurrentWeaponChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void InitWidget(); // Function Squad.SQAmmoWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQAnimDataEmotes
// Size: 0x210 (Inherited: 0x30)
struct USQAnimDataEmotes : UDataAsset {
	struct FSQEmoteAnims EmoteAnims[0xa]; // 0x30(0x190)
	struct TMap<struct FName, struct FSQEmoteAnims> CustomEmotes; // 0x1c0(0x50)
};

// Class Squad.SQAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct USQAnimInstance : UAnimInstance {
	int LastBoredMontagePlayedIndex; // 0x268(0x04)
	float BoredTargetTime; // 0x26c(0x04)
	bool bIsAds; // 0x270(0x01)
	bool bIsUsingItemOrIsAdsOrIsClimbing; // 0x271(0x01)
	struct USQItemStaticInfo* CurrentItemStaticInfo; // 0x278(0x08)
	struct ASQSoldier* Soldier; // 0x280(0x08)
	struct ASQSoldierNew* SoldierNew; // 0x288(0x08)

	void UpdateStaticItemInfo(struct USQItemStaticInfo* InfoObject); // Function Squad.SQAnimInstance.UpdateStaticItemInfo // (Native|Public|BlueprintCallable) // @ game+0x82ba10
	void UpdateBoredMontage(); // Function Squad.SQAnimInstance.UpdateBoredMontage // (Native|Public|BlueprintCallable) // @ game+0x82b770
	void StopAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, float blendOutTime, bool bStopAllWeaponAnims); // Function Squad.SQAnimInstance.StopAnimationHandler // (Native|Public) // @ game+0x82b520
	void SetAnimationPlayRateHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, float NewPlayRate); // Function Squad.SQAnimInstance.SetAnimationPlayRateHandler // (Native|Public) // @ game+0x82b3e0
	void ResumeAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQAnimInstance.ResumeAnimationHandler // (Native|Public) // @ game+0x82b2e0
	void PlayAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQAnimInstance.PlayAnimationHandler // (Native|Public) // @ game+0x82b1e0
	void PauseAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQAnimInstance.PauseAnimationHandler // (Native|Public) // @ game+0x82b0e0
	void EndLoopAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, struct FSQMontageSectionNames SectionNames); // Function Squad.SQAnimInstance.EndLoopAnimationHandler // (Native|Public) // @ game+0x82af30
};

// Class Squad.SQAnimInstanceSoldier
// Size: 0x420 (Inherited: 0x290)
struct USQAnimInstanceSoldier : USQAnimInstance {
	bool bDrawDebugSpheres; // 0x290(0x01)
	bool bIsSoldierAlive; // 0x291(0x01)
	bool bIsSoldierRagdolled; // 0x292(0x01)
	char pad_293[0x1]; // 0x293(0x01)
	struct FVector LeftHandIKLocation; // 0x294(0x0c)
	struct FRotator LeftHandIKRotation; // 0x2a0(0x0c)
	float LeftHandIKAlpha; // 0x2ac(0x04)
	struct FVector RightHandIKLocation; // 0x2b0(0x0c)
	struct FRotator RightHandIKRotation; // 0x2bc(0x0c)
	float RightHandIKAlpha; // 0x2c8(0x04)
	bool bIsDragging; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	struct FRotator DraggingLeftArmRotation; // 0x2d0(0x0c)
	float YawDeltaRaw; // 0x2dc(0x04)
	struct FRotator AddRotShot; // 0x2e0(0x0c)
	struct FRotator AddRotCameraShot; // 0x2ec(0x0c)
	struct FRotator AddAdsRotCameraShot; // 0x2f8(0x0c)
	bool bLeanConditions; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	float BipodLength; // 0x308(0x04)
	struct FVector BipodHeight; // 0x30c(0x0c)
	bool bAutoLowered; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	struct FRotator OffsetLineOfFire; // 0x31c(0x0c)
	float LastVelocityWhenIsInAir; // 0x328(0x04)
	float LeftHandWeaponIkAlpha; // 0x32c(0x04)
	float RightHand3pWeaponIkAlpha; // 0x330(0x04)
	float AdjustAdsSightItemAnimPos; // 0x334(0x04)
	bool bVelocityProneTransAnim; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float Direction; // 0x33c(0x04)
	bool bCanSprintToProne; // 0x340(0x01)
	bool bIsCrouched; // 0x341(0x01)
	bool bIsProne; // 0x342(0x01)
	bool bIsJumping; // 0x343(0x01)
	bool bIsFalling; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	float Speed; // 0x348(0x04)
	struct FVector Velocity; // 0x34c(0x0c)
	float PitchDeltaRaw; // 0x358(0x04)
	bool bFirstPersonVisibility; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct FVector ClimbWeaponSocketLoc; // 0x360(0x0c)
	struct FRotator ClimbWeaponSocketRot; // 0x36c(0x0c)
	struct FRotator VaultClimbAo; // 0x378(0x0c)
	struct FRotator FreeLookRot; // 0x384(0x0c)
	bool bSprintToProneTransAnim; // 0x390(0x01)
	bool bLeanRight; // 0x391(0x01)
	bool bLeanLeft; // 0x392(0x01)
	char LeaningDirection; // 0x393(0x01)
	bool bBipodIsDeployed; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	float BipodTransitionAlpha; // 0x398(0x04)
	bool bShot; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	float SprintSpeedMultiplier; // 0x3a0(0x04)
	float MaxWalkSpeedCrouched; // 0x3a4(0x04)
	float MaxWalkSpeedProne; // 0x3a8(0x04)
	float MaxWalkSpeed; // 0x3ac(0x04)
	bool bIsInVehicle; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float VehiclePitch; // 0x3b4(0x04)
	float VehicleYaw; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct UAnimSequence* VehicleBaseAnim; // 0x3c0(0x08)
	struct UBlendSpace* VehicleAimOffsets; // 0x3c8(0x08)
	bool bUseWheelBlendSpace1D; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct UBlendSpace1D* VehicleWheelBlendSpace1D; // 0x3d8(0x08)
	float VehicleWheel; // 0x3e0(0x04)
	float CustomVehicleWheel1; // 0x3e4(0x04)
	float InterpSpeed; // 0x3e8(0x04)
	float CustomSteeringWheelAnimExplTime; // 0x3ec(0x04)
	bool bHandIKAlphaEnabled; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float SteeringWheelAnimExplTime; // 0x3f4(0x04)
	float RightHandAlpha; // 0x3f8(0x04)
	float LeftHandAlpha; // 0x3fc(0x04)
	float LastVehicleWheelAbs; // 0x400(0x04)
	float VehicleWheelAbsRate; // 0x404(0x04)
	struct UAnimSequence* SteeringWheelSingleFrameAnimSequence; // 0x408(0x08)
	float Time; // 0x410(0x04)
	bool bFP_T_LeanLeftAndLeanConditions; // 0x414(0x01)
	bool bFP_T_NotLeanLeftOrNotLeanConditions; // 0x415(0x01)
	bool bFP_T_LeanRightAndLeanConditions; // 0x416(0x01)
	bool bFP_T_NotLeanRightOrNotLeanConditions; // 0x417(0x01)
	bool bIsPullingTriggerAndMagazineHasAmmo; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)

	void UpdateVehicleAim(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier.UpdateVehicleAim // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bc20
	void UpdateVehicle(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier.UpdateVehicle // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bba0
	void UpdateSteeringWheelVariables(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier.UpdateSteeringWheelVariables // (Final|Native|Protected|BlueprintCallable) // @ game+0x82baa0
	void UpdateLean(); // Function Squad.SQAnimInstanceSoldier.UpdateLean // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b910
	void UpdateFastPathTransitionVariables(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier.UpdateFastPathTransitionVariables // (Native|Protected|BlueprintCallable) // @ game+0x82b810
	void UpdateDragging(); // Function Squad.SQAnimInstanceSoldier.UpdateDragging // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b7d0
	void OnVaultClimbStop(); // Function Squad.SQAnimInstanceSoldier.OnVaultClimbStop // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct FRotator AlignWithGround(struct FVector& FloorNormal); // Function Squad.SQAnimInstanceSoldier.AlignWithGround // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x82ae80
};

// Class Squad.SQAnimInstanceSoldier1P
// Size: 0xbe0 (Inherited: 0x420)
struct USQAnimInstanceSoldier1P : USQAnimInstanceSoldier {
	bool bRelevantAnimTimeRemaining__LTEPtTwo__WeaponBobbing1P__St2P; // 0x420(0x01)
	bool bRelevantAnimTimeRemaining__LTEPtTwo__WeaponBobbing1P__P2St; // 0x421(0x01)
	bool bRelevantAnimTimeRemaining__LTEPtTwo__WeaponBobbing1P__Sp2P; // 0x422(0x01)
	char pad_423[0xe1]; // 0x423(0xe1)
	bool bStateWeight__GTEOne__ProneStates__ProneMove; // 0x504(0x01)
	bool bRelevantAnimTimeRemaining__LTEPtTwo__ProneStates__OutProneMove; // 0x505(0x01)
	char pad_506[0x72]; // 0x506(0x72)
	bool bCurrentTime__GTEPtThree__Jump1P__JumpStart__rifle_1ptop_jumpstart; // 0x578(0x01)
	bool bTimeRemaining__LTEPtTwo__Jump1P__JumpEnd__rifle_1ptop_jumpend; // 0x579(0x01)
	bool bTimeRemaining__LTEPtTwo__Jump1P__JumpStart__rifle_1ptop_jumpstart; // 0x57a(0x01)
	char pad_57B[0x79]; // 0x57b(0x79)
	struct FRotator Zeroing; // 0x5f4(0x0c)
	struct UBlendSpaceBase* ProneMoveType; // 0x600(0x08)
	struct UAnimSequence* ProneMoveTypeAdditiveReference; // 0x608(0x08)
	struct UAnimSequence* OutProneMoveType; // 0x610(0x08)
	struct UAnimSequence* OutProneMoveTypeNonadditive; // 0x618(0x08)
	struct UAnimSequence* AdjustableAdsSightItemAnim; // 0x620(0x08)
	float HasAdjustableSightAlpha; // 0x628(0x04)
	struct FVector StandLoc; // 0x62c(0x0c)
	struct FVector CrouchLoc; // 0x638(0x0c)
	struct FVector ProneLoc; // 0x644(0x0c)
	struct FVector BipodLoc; // 0x650(0x0c)
	float StandLocBlendTime; // 0x65c(0x04)
	struct FVector NegFpvTorsoCameraOffset; // 0x660(0x0c)
	struct FVector DeviationVisuFb; // 0x66c(0x0c)
	struct FRotator Sway; // 0x678(0x0c)
	struct FVector StrafeVector; // 0x684(0x0c)
	struct FRotator StrafeRotator; // 0x690(0x0c)
	struct FRotator AdsStrafeRotator; // 0x69c(0x0c)
	float BaseAimPitchPct; // 0x6a8(0x04)
	struct FVector WeapRecoilRelLoc; // 0x6ac(0x0c)
	struct FRotator GlobalDeltaRotDeltaSpring; // 0x6b8(0x0c)
	struct FRotator GlobalDeltaRotDeltaSpringRoll; // 0x6c4(0x0c)
	struct FVector GlobalDeltaLocDeltaSpringWeaponMesh; // 0x6d0(0x0c)
	float LeftHandIKSpringAlpha; // 0x6dc(0x04)
	struct FVector Aim1pWeaponMeshPosition; // 0x6e0(0x0c)
	struct FVector Aim1pWeaponMeshRescale; // 0x6ec(0x0c)
	struct FVector StandLeanLeftRootOffset; // 0x6f8(0x0c)
	struct FRotator StandLeanLeftWeaponRotation; // 0x704(0x0c)
	struct FRotator StandLeanLeftCameraRotation; // 0x710(0x0c)
	struct FVector StandLeanRightRootOffset; // 0x71c(0x0c)
	struct FRotator StandLeanRightWeaponRotation; // 0x728(0x0c)
	struct FRotator StandLeanRightCameraRotation; // 0x734(0x0c)
	struct FVector CrouchLeanLeftRootOffset; // 0x740(0x0c)
	struct FRotator CrouchLeanLeftWeaponRotation; // 0x74c(0x0c)
	struct FRotator CrouchLeanLeftCameraRotation; // 0x758(0x0c)
	struct FVector CrouchLeanRightRootOffset; // 0x764(0x0c)
	struct FRotator CrouchLeanRightWeaponRotation; // 0x770(0x0c)
	struct FRotator CrouchLeanRightCameraRotation; // 0x77c(0x0c)
	struct FVector ProneLeanLeftRootOffset; // 0x788(0x0c)
	struct FRotator ProneLeanLeftWeaponRotation; // 0x794(0x0c)
	struct FRotator ProneLeanLeftCameraRotation; // 0x7a0(0x0c)
	struct FVector ProneLeanRightRootOffset; // 0x7ac(0x0c)
	struct FRotator ProneLeanRightWeaponRotation; // 0x7b8(0x0c)
	struct FRotator ProneLeanRightCameraRotation; // 0x7c4(0x0c)
	float FP_HasSway; // 0x7d0(0x04)
	float FP_JumpStartLoopAlpha; // 0x7d4(0x04)
	float FP_JumpEndBobbingBlendAlpha; // 0x7d8(0x04)
	float FP_JumpEndBobbingAdditiveAlpha; // 0x7dc(0x04)
	float FP_JumpEndCameraRootMotionAlphaBlend; // 0x7e0(0x04)
	bool bFP_IsFallingAndNotJumping; // 0x7e4(0x01)
	char pad_7E5[0x3]; // 0x7e5(0x03)
	float FP_St2P_RootMotionBlendAlpha; // 0x7e8(0x04)
	float FP_P2St_RootMotionBlendAlpha; // 0x7ec(0x04)
	bool bFP_IsProneAndIsSprintingAndCanSprintToProne; // 0x7f0(0x01)
	bool bFP_SwitchedProneAndNotIsProne; // 0x7f1(0x01)
	bool bFP_SwitchedProneAndIsProne; // 0x7f2(0x01)
	char pad_7F3[0x1]; // 0x7f3(0x01)
	struct FRotator FP_ProneMoveIkWeaponHandRootRotFromGroundAngle; // 0x7f4(0x0c)
	struct FRotator FP_ProneMoveIkWeaponHandRootRotFromActorPitch; // 0x800(0x0c)
	bool bFP_ProneMoveWeaponAligningConditions; // 0x80c(0x01)
	char pad_80D[0x3]; // 0x80d(0x03)
	struct FRotator FP_ProneMoveIkWeaponRightClavicleRot; // 0x810(0x0c)
	float FP_ProneMoveBobPlayRate; // 0x81c(0x04)
	bool bFP_SpeedHigherThanZeroAndNotIsProneTransition; // 0x820(0x01)
	bool bFP_SpeedHigherThanZero; // 0x821(0x01)
	bool bFP_HvdXorClAndClOrHvdXorVaAndVaOrBipod; // 0x822(0x01)
	bool bFP_ClimbAnimNotEqual1; // 0x823(0x01)
	bool bFP_ClimbAndClimbAnim1; // 0x824(0x01)
	char pad_825[0x3]; // 0x825(0x03)
	struct FRotator FP_ClimbAndClimbAnim1_AimRotator; // 0x828(0x0c)
	bool bFP_1pLeftHandIkConditions; // 0x834(0x01)
	char pad_835[0x3]; // 0x835(0x03)
	float FP_1pLeftHandIKConditionsAlpha; // 0x838(0x04)
	float FP_IsUsingItemAlpha; // 0x83c(0x04)
	float FP_IsProneAlpha; // 0x840(0x04)
	bool bFP_T_ProneStatesProneMoveToOutProneMove; // 0x844(0x01)
	bool bFP_T_Jump1pJumpStartToJumpEnd; // 0x845(0x01)
	bool bFP_T_ToADS_Hipfire; // 0x846(0x01)
	bool bCachedIsPullingTriggerAndMagazineHasAmmo; // 0x847(0x01)
	float ToADS_Hipfire_RemainingTIme; // 0x848(0x04)
	float Steady1pHipFireDuration; // 0x84c(0x04)
	bool bFP_T_StandToADS_Grenade; // 0x850(0x01)
	bool bFP_T_WeaponBobbing1P_ADSToStand; // 0x851(0x01)
	bool bFP_T_WeaponBobbing1P_ADSToProne; // 0x852(0x01)
	bool bFP_T_WeaponBobbing1P_ProneToADS; // 0x853(0x01)
	float FP_CustomIsCrouchedAlpha; // 0x854(0x04)
	float FP_HasAdjustableSightAlphaTimesIsAdsAlpha; // 0x858(0x04)
	bool bProneMoveBobbing; // 0x85c(0x01)
	bool bLeftHandIkOut1P; // 0x85d(0x01)
	bool bSwitchedProne; // 0x85e(0x01)
	bool bLastProneStance; // 0x85f(0x01)
	float MoveDeviationFactor; // 0x860(0x04)
	float ShotDeviationFactor; // 0x864(0x04)
	char pad_868[0x8]; // 0x868(0x08)
	struct FVector4 FinalDeviation; // 0x870(0x10)
	struct FVector2D DeviationVisuFbZY; // 0x880(0x08)
	struct FRotator AddRotGoingShot; // 0x888(0x0c)
	float RecoilReleaseInterpSpeed; // 0x894(0x04)
	float RecoilWeaponLimit; // 0x898(0x04)
	float MoveRecoilFactor; // 0x89c(0x04)
	float RecoilCanRelease; // 0x8a0(0x04)
	struct FVector FinalRecoilSigma; // 0x8a4(0x0c)
	struct FVector FinalRecoilMean; // 0x8b0(0x0c)
	float MoveSwayFactor; // 0x8bc(0x04)
	float CustomSwayMin; // 0x8c0(0x04)
	struct FVector2D SwayZY; // 0x8c4(0x08)
	float StrafeSpringFactor; // 0x8cc(0x04)
	struct FRotator LastKnownRot1; // 0x8d0(0x0c)
	struct FVector CtrlRotVectorDeltaSpring; // 0x8dc(0x0c)
	struct FRotator LastKnownRot2; // 0x8e8(0x0c)
	float CtrlRotDeltaSpringLerpAlpha; // 0x8f4(0x04)
	float WeaponSpringTurnSpeedToFullIntensity; // 0x8f8(0x04)
	struct FRotator StrafeSpringRotator; // 0x8fc(0x0c)
	struct FVector StrafeSpringVector; // 0x908(0x0c)
	struct FRotator AdsStrafeSpringRotator; // 0x914(0x0c)
	float CustomNotIsAds; // 0x920(0x04)
	char pad_924[0x4]; // 0x924(0x04)
	struct UCameraShake* FireShake; // 0x928(0x08)
	int WeaponSpringSide; // 0x930(0x04)
	float WeaponSpringStiffness; // 0x934(0x04)
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
	float MinBipodAdsDeviation; // 0x988(0x04)
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
	struct FVector ProneAdsRecoilMean; // 0x9e8(0x0c)
	struct FVector ProneAdsRecoilSigma; // 0x9f4(0x0c)
	struct FVector ProneRecoilMean; // 0xa00(0x0c)
	struct FVector ProneRecoilSigma; // 0xa0c(0x0c)
	struct FVector CrouchAdsRecoilMean; // 0xa18(0x0c)
	struct FVector CrouchAdsRecoilSigma; // 0xa24(0x0c)
	struct FVector CrouchRecoilMean; // 0xa30(0x0c)
	struct FVector CrouchRecoilSigma; // 0xa3c(0x0c)
	struct FVector StandAdsRecoilMean; // 0xa48(0x0c)
	struct FVector StandAdsRecoilSigma; // 0xa54(0x0c)
	struct FVector StandRecoilMean; // 0xa60(0x0c)
	struct FVector StandRecoilSigma; // 0xa6c(0x0c)
	struct FVector ProneTransitionRecoilMean; // 0xa78(0x0c)
	struct FVector ProneTransitionRecoilSigma; // 0xa84(0x0c)
	struct FVector BipodAdsRecoilMean; // 0xa90(0x0c)
	struct FVector BipodAdsRecoilSigma; // 0xa9c(0x0c)
	struct FVector BipodRecoilMean; // 0xaa8(0x0c)
	struct FVector BipodRecoilSigma; // 0xab4(0x0c)
	float FullStaminaSwayFactor; // 0xac0(0x04)
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
	char pad_B10[0x3c]; // 0xb10(0x3c)
	struct FRotator SmoothFinalLofSuppressRotation; // 0xb4c(0x0c)
	char pad_B58[0x4]; // 0xb58(0x04)
	float LofSuppressRotationAlpha; // 0xb5c(0x04)
	char pad_B60[0x10]; // 0xb60(0x10)
	bool bWasCrouchedBeforeProne; // 0xb70(0x01)
	char pad_B71[0x3]; // 0xb71(0x03)
	struct FVector CustomCurrentFloorNormal1; // 0xb74(0x0c)
	float FP_SprintBlendAlpha; // 0xb80(0x04)
	bool bIsSprint1pLoopSection; // 0xb84(0x01)
	char pad_B85[0x3]; // 0xb85(0x03)
	struct UAnimSequence* SprintStaticPose; // 0xb88(0x08)
	char pad_B90[0x20]; // 0xb90(0x20)
	struct UAnimMontage* BobbingMove1pMontage; // 0xbb0(0x08)
	struct UAnimMontage* BobbingSprint1pMontage; // 0xbb8(0x08)
	char pad_BC0[0x20]; // 0xbc0(0x20)

	void UpdateWasCrouchedBeforeProne(); // Function Squad.SQAnimInstanceSoldier1P.UpdateWasCrouchedBeforeProne // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bca0
	void UpdateTurnSpring(); // Function Squad.SQAnimInstanceSoldier1P.UpdateTurnSpring // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bb80
	void UpdateSwitchedProne(); // Function Squad.SQAnimInstanceSoldier1P.UpdateSwitchedProne // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bb60
	void UpdateSway(); // Function Squad.SQAnimInstanceSoldier1P.UpdateSway // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bb40
	void UpdateStrafeSpring(); // Function Squad.SQAnimInstanceSoldier1P.UpdateStrafeSpring // (Final|Native|Protected|BlueprintCallable) // @ game+0x82bb20
	void UpdateSprintSpeedBlend(); // Function Squad.SQAnimInstanceSoldier1P.UpdateSprintSpeedBlend // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b9f0
	void UpdateRecoilAndFire(); // Function Squad.SQAnimInstanceSoldier1P.UpdateRecoilAndFire // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b9d0
	void UpdatePitch(); // Function Squad.SQAnimInstanceSoldier1P.UpdatePitch // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b9b0
	void UpdateLofSuppression(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier1P.UpdateLofSuppression // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b930
	void UpdateIsFallingPlayRate(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier1P.UpdateIsFallingPlayRate // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b890
	void UpdateFastPath(); // Function Squad.SQAnimInstanceSoldier1P.UpdateFastPath // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b7f0
	void UpdateDeviationVisuFb(); // Function Squad.SQAnimInstanceSoldier1P.UpdateDeviationVisuFb // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b7b0
	void UpdateDeviation(); // Function Squad.SQAnimInstanceSoldier1P.UpdateDeviation // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b790
	void UpdateBobbingsPlayrate(float DeltaSeconds); // Function Squad.SQAnimInstanceSoldier1P.UpdateBobbingsPlayrate // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b6f0
	void UpdateAccuracyParameters(); // Function Squad.SQAnimInstanceSoldier1P.UpdateAccuracyParameters // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b6d0
	void Update1pCurrentFloor(); // Function Squad.SQAnimInstanceSoldier1P.Update1pCurrentFloor // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b6b0
	void LineOfFire(); // Function Squad.SQAnimInstanceSoldier1P.LineOfFire // (Final|Native|Protected|BlueprintCallable) // @ game+0x82b0c0
};

// Class Squad.SQAnimInstanceSoldier3P
// Size: 0xce0 (Inherited: 0x420)
struct USQAnimInstanceSoldier3P : USQAnimInstanceSoldier {
	bool bVaulting; // 0x420(0x01)
	bool bClimbing; // 0x421(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtOne__Jump_3P__JumpEnd__rifle_stand_jumpendOrIsProne; // 0x422(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtOne__Jump_3P__JumpStart__rifle_stand_jumpstart; // 0x423(0x01)
	bool bAssetPlayerTime__GTEPtOne__Jump_3P__JumpStart__rifle_stand_jumpstart; // 0x424(0x01)
	char pad_425[0x7b]; // 0x425(0x7b)
	bool bStateWeight__GTEOne__Stand3P__Jog; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	float StateWeight__Stand3P__Jog; // 0x4a4(0x04)
	bool bStateWeight__GTEOne__Stand3P__Sprint; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	float StateWeight__Stand3P__Sprint; // 0x4ac(0x04)
	float StateWeight__Stand3P__SprintStop; // 0x4b0(0x04)
	bool bRelevantAnimTimeRemaining__LTEOne__Stand3P__SprintStop; // 0x4b4(0x01)
	char pad_4B5[0x77]; // 0x4b5(0x77)
	bool bStateWeight__GTEOne__Stand_NeutralStates__Neutral; // 0x52c(0x01)
	bool bStateWeight__GTEOne__Stand_NeutralStates__TurnLeft_91; // 0x52d(0x01)
	bool bStateWeight__GTEOne__Stand_NeutralStates__TurnRight_91; // 0x52e(0x01)
	bool bRelevantAnimTimeRemaining__LTEZero__Stand_NeutralStates__TurnLeft_91; // 0x52f(0x01)
	bool bRelevantAnimTimeRemaining__LTEZero__Stand_NeutralStates__TurnRight_91; // 0x530(0x01)
	char pad_531[0x93]; // 0x531(0x93)
	float StateWeight__Crouch3P__Sprint; // 0x5c4(0x04)
	float StateWeight__Crouch3P__Walk; // 0x5c8(0x04)
	char pad_5CC[0x3a]; // 0x5cc(0x3a)
	bool bStateWeight__GTEOne__Crouch_NeutralStates__Neutral; // 0x606(0x01)
	bool bStateWeight__GTEOne__Crouch_NeutralStates__TurnLeft_91; // 0x607(0x01)
	bool bStateWeight__GTEOne__Crouch_NeutralStates__TurnRight_91; // 0x608(0x01)
	char pad_609[0x77]; // 0x609(0x77)
	float StateWeight__Prone3P__ProneMove; // 0x680(0x04)
	char pad_684[0x1d]; // 0x684(0x1d)
	bool bStateWeight__GTEOne__Prone_NeutralStates__Neutral; // 0x6a1(0x01)
	bool bStateWeight__GTEOne__Prone_NeutralStates__TurnLeft_46; // 0x6a2(0x01)
	bool bStateWeight__GTEOne__Prone_NeutralStates__TurnRight_46; // 0x6a3(0x01)
	char pad_6A4[0x57]; // 0x6a4(0x57)
	bool bStateWeight__GTEOne__SoldierMovements__Stand; // 0x6fb(0x01)
	bool bStateWeight__GTEOne__SoldierMovements__Crouch; // 0x6fc(0x01)
	bool bStateWeight__GTEOne__SoldierMovements__Stand2Crouch; // 0x6fd(0x01)
	char pad_6FE[0x2]; // 0x6fe(0x02)
	float StateWeight__SoldierMovements__Stand2Prone; // 0x700(0x04)
	float StateWeight__SoldierMovements__Sprint2Prone; // 0x704(0x04)
	float StateWeight__SoldierMovements__Prone2Stand; // 0x708(0x04)
	float StateWeight__SoldierMovements__Crouch2Prone; // 0x70c(0x04)
	float StateWeight__SoldierMovements__Prone2Crouch; // 0x710(0x04)
	bool bAssetPlayerTimeFromEnd__LTEPtFour__SoldierMovements__Stand2Prone__rifle_stand2prone; // 0x714(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtTwo__SoldierMovements__Sprint2Prone__rifle_sprint2prone; // 0x715(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtFour__SoldierMovements__Prone2Stand__rifle_prone2stand; // 0x716(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtFour__SoldierMovements__Crouch2Prone__rifle_crouch2prone; // 0x717(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtFour__SoldierMovements__Prone2Crouch__rifle_prone2crouch; // 0x718(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtOne__SoldierMovements__Stand2Crouch__Stand2Crouch; // 0x719(0x01)
	bool bAssetPlayerTimeFromEnd__LTEPtOne__SoldierMovements__Crouch2Stand__Crouch2Stand; // 0x71a(0x01)
	char pad_71B[0x1e2]; // 0x71b(0x1e2)
	bool bIsSprinting; // 0x8fd(0x01)
	char pad_8FE[0x2]; // 0x8fe(0x02)
	float CustomNotIsFallingAlpha; // 0x900(0x04)
	char pad_904[0x4]; // 0x904(0x04)
	struct UBlendSpace1D* BS1D_3pStandSprintType; // 0x908(0x08)
	struct UAnimSequence* SprintStop3p; // 0x910(0x08)
	struct UBlendSpace1D* BS1D_3pCrouchSprintType; // 0x918(0x08)
	struct UBlendSpace* BS_3pStandJogType; // 0x920(0x08)
	struct UBlendSpace* BS_3pStandWalkType; // 0x928(0x08)
	struct UBlendSpace* BS_3pCrouchWalkType; // 0x930(0x08)
	struct UBlendSpace1D* BS1D_3pProneCrawlType; // 0x938(0x08)
	struct UAnimSequence* StandStopMove; // 0x940(0x08)
	struct UAnimSequence* CrouchStopMove; // 0x948(0x08)
	struct UAnimSequence* StandLeanLeftShuffle; // 0x950(0x08)
	struct UAnimSequence* StandLeanRightShuffle; // 0x958(0x08)
	struct UAnimSequence* CrouchLeanLeftShuffle; // 0x960(0x08)
	struct UAnimSequence* CrouchLeanRightShuffle; // 0x968(0x08)
	struct UBlendSpace1D* AO1D_StandPitch; // 0x970(0x08)
	struct UBlendSpace1D* AO1D_CrouchPitch; // 0x978(0x08)
	struct UBlendSpace1D* AO1D_PronePitch; // 0x980(0x08)
	struct UBlendSpace* AO_BipodStandCrouchPitch; // 0x988(0x08)
	struct UAnimSequence* AO1D_StandYawSF; // 0x990(0x08)
	struct UAnimSequence* AO1D_CrouchYawSF; // 0x998(0x08)
	struct UAnimSequence* AO1D_ProneYawSF; // 0x9a0(0x08)
	struct UAnimSequence* StandTurnRight; // 0x9a8(0x08)
	struct UAnimSequence* StandTurnLeft; // 0x9b0(0x08)
	struct UAnimSequence* CrouchTurnLeft; // 0x9b8(0x08)
	struct UAnimSequence* CrouchTurnRight; // 0x9c0(0x08)
	struct UAnimSequence* ProneTurnRight; // 0x9c8(0x08)
	struct UAnimSequence* ProneTurnLeft; // 0x9d0(0x08)
	struct UAnimSequence* SprintToProne3p; // 0x9d8(0x08)
	struct UAnimSequence* StandToProne3p; // 0x9e0(0x08)
	struct UAnimSequence* ProneToStand3p; // 0x9e8(0x08)
	struct UAnimSequence* CrouchToProne3p; // 0x9f0(0x08)
	struct UAnimSequence* ProneToCrouch3p; // 0x9f8(0x08)
	struct FVector FpvLowerRootBoneOffset; // 0xa00(0x0c)
	float CustomSpeedMin40; // 0xa0c(0x04)
	float ProneStopMoveAlpha; // 0xa10(0x04)
	float CrouchStopMoveAlpha; // 0xa14(0x04)
	bool bFP_HighestClimbAnim; // 0xa18(0x01)
	bool bFP_T_Jump_3PJumpStartToJumpEnd; // 0xa19(0x01)
	bool bFP_T_Stand3PSprintStopToJog; // 0xa1a(0x01)
	bool bFP_T_Stand3PSprintToSprintStop; // 0xa1b(0x01)
	bool bFP_T_Stand3PJogToSprint; // 0xa1c(0x01)
	bool bFP_T_Stand_NeutralStatesTurnRight_90ToTurnLeft_91; // 0xa1d(0x01)
	bool bFP_T_Stand_NeutralStatesTurnLeft_90ToTurnRight_91; // 0xa1e(0x01)
	bool bFP_T_Stand_NeutralStatesNeutralToTurnLeft_91; // 0xa1f(0x01)
	bool bFP_T_Stand_NeutralStatesNeutralToTurnRight_91; // 0xa20(0x01)
	bool bFP_T_Crouch_NeutralStatesTurnRight_90ToNeutral; // 0xa21(0x01)
	bool bFP_T_Crouch_NeutralStatesTurnRight_90ToTurnLeft_91; // 0xa22(0x01)
	bool bFP_T_Crouch_NeutralStatesTurnLeft_90ToNeutral; // 0xa23(0x01)
	bool bFP_T_Crouch_NeutralStatesTurnLeft_90ToTurnRight_91; // 0xa24(0x01)
	bool bFP_T_Crouch_NeutralStatesNeutralToTurnLeft_91; // 0xa25(0x01)
	bool bFP_T_Crouch_NeutralStatesNeutralToTurnRight_91; // 0xa26(0x01)
	bool bFP_T_Prone_NeutralStatesTurnLeft_45ToNeutral; // 0xa27(0x01)
	bool bFP_T_Prone_NeutralStatesTurnLeft_45ToTurnRight_46; // 0xa28(0x01)
	bool bFP_T_Prone_NeutralStatesTurnRight_45ToNeutral; // 0xa29(0x01)
	bool bFP_T_Prone_NeutralStatesTurnRight_45ToTurnLeft_46; // 0xa2a(0x01)
	bool bFP_T_Prone_NeutralStatesNeutralToTurnLeft_46; // 0xa2b(0x01)
	bool bFP_T_Prone_NeutralStatesNeutralToTurnRight_46; // 0xa2c(0x01)
	bool bFP_T_SoldierMovementsCrouch2StandToStand; // 0xa2d(0x01)
	bool bFP_T_SoldierMovementsStand2CrouchToCrouch2Prone; // 0xa2e(0x01)
	bool bFP_T_SoldierMovementsStand2CrouchToCrouch; // 0xa2f(0x01)
	bool bFP_T_SoldierMovementsCrouchToCrouch2Prone; // 0xa30(0x01)
	bool bFP_T_SoldierMovements_StandToCrouch; // 0xa31(0x01)
	bool bFP_T_SoldierMovementsStandToStand2Prone; // 0xa32(0x01)
	bool bFP_T_SoldierMovementsStandToStand2Crouch; // 0xa33(0x01)
	bool bFP_T_SoldierMovementsStandToSprint2Prone; // 0xa34(0x01)
	char pad_A35[0x3]; // 0xa35(0x03)
	struct FRotator FP_FloorAlignedRotationRightFoot; // 0xa38(0x0c)
	struct FRotator FP_FloorAlignedRotationLeftFoot; // 0xa44(0x0c)
	struct FRotator FP_FloorAlignedRotationFeetRoot; // 0xa50(0x0c)
	struct FRotator FP_FloorAlignedRotationFeetRootReverse; // 0xa5c(0x0c)
	struct FVector FP_IKFeetRootTranslation; // 0xa68(0x0c)
	float FP_IsNotFirstPersonVisibilityAlpha; // 0xa74(0x04)
	float FP_StandIdleAlpha; // 0xa78(0x04)
	float FP_CrouchProneIdleAlpha; // 0xa7c(0x04)
	bool bFP_IsStanding; // 0xa80(0x01)
	bool bFP_IsStandingStill; // 0xa81(0x01)
	bool bFP_CanCrouchToStandingStill; // 0xa82(0x01)
	bool bFP_CanCrouchToStandMoving; // 0xa83(0x01)
	bool bFP_IsCrouchedInPlace; // 0xa84(0x01)
	char pad_A85[0x3]; // 0xa85(0x03)
	float FP_AimOffsetProneYawFrameTime; // 0xa88(0x04)
	float FP_AimOffsetYawNegative; // 0xa8c(0x04)
	float FP_AimOffsetProneTurnRightYawFrameTime; // 0xa90(0x04)
	float FP_AimOffsetTurnRightYawNegative; // 0xa94(0x04)
	float FP_AimOffsetProneTurnLeftYawFrameTime; // 0xa98(0x04)
	float FP_AimOffsetTurnLeftYawNegative; // 0xa9c(0x04)
	float FP_ProneWalkPlayRate; // 0xaa0(0x04)
	bool bFP_IsMoving; // 0xaa4(0x01)
	bool bFP_IsNotMoving; // 0xaa5(0x01)
	char pad_AA6[0x2]; // 0xaa6(0x02)
	struct FRotator FP_FloorAlignedRotationBody; // 0xaa8(0x0c)
	struct FRotator FP_FloorAlignedRotationBodyReverse; // 0xab4(0x0c)
	float FP_CustomSpeedMin40NormalizedToRange; // 0xac0(0x04)
	bool bFP_IsProneAndNotDeployBipod; // 0xac4(0x01)
	bool bFP_IsClimbingOrVaulting; // 0xac5(0x01)
	char pad_AC6[0x2]; // 0xac6(0x02)
	struct FRotator FP_FreeLook3PHeadRotation; // 0xac8(0x0c)
	float FP_BipodCrouchStanceAlpha; // 0xad4(0x04)
	float FP_BipodStandCrouchAimPitchAlpha; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	float FP_BipodProneStanceAlpha; // 0xae0(0x04)
	float FP_BipodAimOffsetAlpha; // 0xae4(0x04)
	float FP_BipodWeaponPosCoveredPoseAlphaDependingOnSkelMeshOffset; // 0xae8(0x04)
	float FP_BipodCoveredPoseBlendAlpha; // 0xaec(0x04)
	struct FVector FP_BipodHighPitchCoveredPoseWeaponPositionOffset; // 0xaf0(0x0c)
	struct FVector FP_BipodDynamicBodyOffset; // 0xafc(0x0c)
	float FP_AimOffsetCrouchYawFrameTime; // 0xb08(0x04)
	float FP_AimOffsetTurnLeftYawPlayRate; // 0xb0c(0x04)
	float FP_AimOffsetTurnLeftProneYawPlayRate; // 0xb10(0x04)
	float FP_AimOffsetTurnLeftYawFrameTime; // 0xb14(0x04)
	float FP_AimOffsetTurnRightYawPlayRate; // 0xb18(0x04)
	float FP_AimOffsetTurnRightProneYawPlayRate; // 0xb1c(0x04)
	float FP_AimOffsetTurnRightYawFrameTime; // 0xb20(0x04)
	float FP_StandStopMoveAlpha; // 0xb24(0x04)
	float FP_AimYawFrameTime2; // 0xb28(0x04)
	float FP_CrouchWalkPlayRate; // 0xb2c(0x04)
	float FP_AimYawJogFrameTime; // 0xb30(0x04)
	float FP_AimPitchJogAlpha; // 0xb34(0x04)
	float FP_JogPlayRate; // 0xb38(0x04)
	float FP_SprintStopAlpha; // 0xb3c(0x04)
	bool bFP_Stand3PNeutralToJogRule; // 0xb40(0x01)
	bool bFP_Stand3PJogToNeutralRule; // 0xb41(0x01)
	bool bFP_Stand3PSprintToNeutralRule; // 0xb42(0x01)
	char pad_B43[0x1]; // 0xb43(0x01)
	float FP_AimOffsetStandYawFrameTime; // 0xb44(0x04)
	float FP_JumpEndAlpha; // 0xb48(0x04)
	bool bFP_IsFallingAndNotJumping; // 0xb4c(0x01)
	char pad_B4D[0x3]; // 0xb4d(0x03)
	float FP_Final3PLeftHandIKOutAlpha; // 0xb50(0x04)
	bool bFP_AOStandToConduit; // 0xb54(0x01)
	bool bFP_AOStandSprintJog; // 0xb55(0x01)
	bool bFP_AOCrouchToConduit; // 0xb56(0x01)
	bool bFP_AOProneToConduit; // 0xb57(0x01)
	bool bFP_AOConduitToCrouch; // 0xb58(0x01)
	char pad_B59[0x3]; // 0xb59(0x03)
	float FP_BS_StandSprintSpeed; // 0xb5c(0x04)
	struct FRotator FP_SprintHeadDirection; // 0xb60(0x0c)
	float FP_SprintRootDirection; // 0xb6c(0x04)
	float FP_BS_CrouchSprintSpeed; // 0xb70(0x04)
	bool bFP_LeanHeadWhenADSAndADS; // 0xb74(0x01)
	bool bFinal3pLeftHandIkOut; // 0xb75(0x01)
	char pad_B76[0x2]; // 0xb76(0x02)
	float CustomWeapActionsAndIsAds; // 0xb78(0x04)
	float FP_WalkPlayRate; // 0xb7c(0x04)
	float FP_IsNotMovingAlpha; // 0xb80(0x04)
	float FP_LeanYawOffsetFrameTime; // 0xb84(0x04)
	float FP_AlphaAbsIkFeetRootPitch; // 0xb88(0x04)
	struct FRotator RawActorRotation; // 0xb8c(0x0c)
	struct FRotator SmoothedControlRotation; // 0xb98(0x0c)
	bool bTurnNeutAoDisabled; // 0xba4(0x01)
	char pad_BA5[0x3]; // 0xba5(0x03)
	struct FRotator CachedActorYaw; // 0xba8(0x0c)
	bool bLeftHandIkOut; // 0xbb4(0x01)
	bool bJumpEndBobbing3P; // 0xbb5(0x01)
	char pad_BB6[0x2]; // 0xbb6(0x02)
	float CustomIsSprinting; // 0xbb8(0x04)
	float CustomIsAdsOrBipod; // 0xbbc(0x04)
	struct FVector SmoothVelocity; // 0xbc0(0x0c)
	float AccelRateClamp; // 0xbcc(0x04)
	struct FRotator SmoothWorldDirection; // 0xbd0(0x0c)
	struct FRotator AimRotation_3P; // 0xbdc(0x0c)
	struct FRotator AimRotation2_3P; // 0xbe8(0x0c)
	bool bTurnLeftAnim; // 0xbf4(0x01)
	bool bFullMoveAnim; // 0xbf5(0x01)
	bool bTurnRightAnim; // 0xbf6(0x01)
	bool bTurnLeft; // 0xbf7(0x01)
	bool bTurnRight; // 0xbf8(0x01)
	bool bTurnLeftProne; // 0xbf9(0x01)
	bool bTurnRightProne; // 0xbfa(0x01)
	char pad_BFB[0x1]; // 0xbfb(0x01)
	struct FRotator YawOffset; // 0xbfc(0x0c)
	struct FRotator YawOffsetDuringTurnLeft; // 0xc08(0x0c)
	struct FRotator YawOffsetDuringTurnRight; // 0xc14(0x0c)
	bool bFullSprintAnim; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	float LastSpeed; // 0xc24(0x04)
	float SprintStopCachedSpeed; // 0xc28(0x04)
	bool bCachedIsProne; // 0xc2c(0x01)
	char pad_C2D[0x3]; // 0xc2d(0x03)
	float StandStopMoveAlpha; // 0xc30(0x04)
	bool bCachedIsCrouched; // 0xc34(0x01)
	bool bCachedIsStand; // 0xc35(0x01)
	bool bProneTransAnim; // 0xc36(0x01)
	char pad_C37[0x1]; // 0xc37(0x01)
	struct FVector PmCachedCapsuleWorldLoc1; // 0xc38(0x0c)
	struct FVector EndSprintToProneCapsuleLoc; // 0xc44(0x0c)
	float Alpha; // 0xc50(0x04)
	float LastKnownHeight; // 0xc54(0x04)
	float HeightVelocity; // 0xc58(0x04)
	float LastKnownHeightVelocity; // 0xc5c(0x04)
	float BipodAimUpLimit3P; // 0xc60(0x04)
	float BipodAimDownLimit3P; // 0xc64(0x04)
	float CustomNotVaultingAlpha; // 0xc68(0x04)
	float CustomNotClimbingAlpha; // 0xc6c(0x04)
	struct FVector CurrentFloorNormalBody; // 0xc70(0x0c)
	struct FVector CurrentFloorNormalFeet; // 0xc7c(0x0c)
	struct FRotator IkFeetRootRelRot; // 0xc88(0x0c)
	struct FVector LeftFootFloorNormal; // 0xc94(0x0c)
	struct FVector RightFootFloorNormal; // 0xca0(0x0c)
	float CustomIsLoweredAndNotProne; // 0xcac(0x04)
	struct FRotator MeshRotationOffset; // 0xcb0(0x0c)
	struct FRotator CachedActorRotationNoLean; // 0xcbc(0x0c)
	float CachedLeanYawOffset; // 0xcc8(0x04)
	char pad_CCC[0x4]; // 0xccc(0x04)
	bool bLeanHeadWhenAds; // 0xcd0(0x01)
	char pad_CD1[0xf]; // 0xcd1(0x0f)

	void UpdateTurnChar(); // Function Squad.SQAnimInstanceSoldier3P.UpdateTurnChar // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c7b0
	void UpdateStopMoveAlpha(); // Function Squad.SQAnimInstanceSoldier3P.UpdateStopMoveAlpha // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c790
	void UpdateSprintStopCachedSpeed(); // Function Squad.SQAnimInstanceSoldier3P.UpdateSprintStopCachedSpeed // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c770
	void UpdateSmoothVelocity(); // Function Squad.SQAnimInstanceSoldier3P.UpdateSmoothVelocity // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c750
	void UpdateLeanYawOffset(); // Function Squad.SQAnimInstanceSoldier3P.UpdateLeanYawOffset // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c730
	void UpdateLandingVel(); // Function Squad.SQAnimInstanceSoldier3P.UpdateLandingVel // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c710
	void UpdateIkFootOrientation(); // Function Squad.SQAnimInstanceSoldier3P.UpdateIkFootOrientation // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c6f0
	void UpdateIkFeetRootRelRot(); // Function Squad.SQAnimInstanceSoldier3P.UpdateIkFeetRootRelRot // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c6d0
	void UpdateFastPathVariables(); // Function Squad.SQAnimInstanceSoldier3P.UpdateFastPathVariables // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c6b0
	void UpdateDirection(); // Function Squad.SQAnimInstanceSoldier3P.UpdateDirection // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c690
	void UpdateAimRotation(); // Function Squad.SQAnimInstanceSoldier3P.UpdateAimRotation // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c670
	void UpdateAimOffset(); // Function Squad.SQAnimInstanceSoldier3P.UpdateAimOffset // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c650
	void Update3pCurrentFloor(); // Function Squad.SQAnimInstanceSoldier3P.Update3pCurrentFloor // (Final|Native|Protected|BlueprintCallable) // @ game+0x82c630
};

// Class Squad.SQAnimNotify_EnterSeatState
// Size: 0x40 (Inherited: 0x38)
struct USQAnimNotify_EnterSeatState : UAnimNotify {
	int SeatIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Squad.SQAnimNotify_MontagePause
// Size: 0x38 (Inherited: 0x38)
struct USQAnimNotify_MontagePause : UAnimNotify {
};

// Class Squad.SQAnnouncementNotifier
// Size: 0x240 (Inherited: 0x230)
struct USQAnnouncementNotifier : UUserWidget {
	struct FScriptMulticastDelegate OnAnnouncementChangedDelegate; // 0x230(0x10)

	void AnnouncementChangedHandler(); // Function Squad.SQAnnouncementNotifier.AnnouncementChangedHandler // (Final|Native|Public) // @ game+0x830ce0
};

// Class Squad.SQApprovalEntryWidget
// Size: 0x248 (Inherited: 0x230)
struct USQApprovalEntryWidget : USQUserWidget {
	struct UTextBlock* TextBlockCPP; // 0x230(0x08)
	struct UImage* IconImageCPP; // 0x238(0x08)
	struct UTextBlock* DescriptionTextCPP; // 0x240(0x08)
};

// Class Squad.SQApprovalQueueWidget
// Size: 0x2a0 (Inherited: 0x230)
struct USQApprovalQueueWidget : USQUserWidget {
	struct USQApprovalEntryWidget* ApprovalEntry; // 0x230(0x08)
	struct UScrollBox* ScrollBoxCPP; // 0x238(0x08)
	struct TMap<uint32, struct USQApprovalEntryWidget*> EntryWidgets; // 0x240(0x50)
	struct UTextBlock* ApprovalKeyTextCPP; // 0x290(0x08)
	struct UTextBlock* DisapprovalKeyTextCPP; // 0x298(0x08)

	void Init(); // Function Squad.SQApprovalQueueWidget.Init // (Final|Native|Protected|BlueprintCallable) // @ game+0x831c70
};

// Class Squad.SQArmorMeshComponent
// Size: 0x4c0 (Inherited: 0x4b0)
struct USQArmorMeshComponent : UStaticMeshComponent {
	struct TArray<struct FSQArmorInfo> ArmorInfo; // 0x4a8(0x10)
};

// Class Squad.SQAssetManager
// Size: 0x440 (Inherited: 0x438)
struct USQAssetManager : UAssetManager {
	char pad_438[0x8]; // 0x438(0x08)
};

// Class Squad.SQAudioVolume
// Size: 0x2e0 (Inherited: 0x2d8)
struct ASQAudioVolume : AAudioVolume {
	enum class ESQAudioVolumeType SquadAudioVolumeType; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// Class Squad.SQAvailability
// Size: 0x50 (Inherited: 0x28)
struct USQAvailability : UObject {
	struct USQRestriction_Delay_Base* Delay; // 0x28(0x08)
	struct USQRestriction_Cost* Cost; // 0x30(0x08)
	struct USQRestriction_Count* LimitedCount; // 0x38(0x08)
	struct TArray<struct USQRestriction_Boolean*> OtherRestrictions; // 0x40(0x10)

	void UpdateTeamAvailability(struct ASQTeam* InTeam, struct FSQAvailabilityState& OutTeamStatus); // Function Squad.SQAvailability.UpdateTeamAvailability // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8337c0
	void OnTeamRemoveUsage(struct ASQTeam* InTeam, struct FSQAvailabilityState& Status); // Function Squad.SQAvailability.OnTeamRemoveUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8329a0
	void OnTeamAddUsage(struct ASQTeam* InTeam, struct FSQAvailabilityState& Status); // Function Squad.SQAvailability.OnTeamAddUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8328a0
	void OnPlayerRemoveUsage(struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& Status); // Function Squad.SQAvailability.OnPlayerRemoveUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8327a0
	void OnPlayerAddUsage(struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& Status); // Function Squad.SQAvailability.OnPlayerAddUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8326a0
	bool IsRestrictedForTeam(struct ASQTeam* InTeam, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQAvailability.IsRestrictedForTeam // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x832360
	bool IsRestrictedForPlayer(struct ASQPlayerController* InPlayer, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQAvailability.IsRestrictedForPlayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x832270
	void InitializeTeamAvailability(struct ASQTeam* InTeam, struct USQLayer* InActiveLayer, struct FSQAvailabilityState& OutTeamStatus); // Function Squad.SQAvailability.InitializeTeamAvailability // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x831c90
	bool HasTeamBasedCost(); // Function Squad.SQAvailability.HasTeamBasedCost // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831c40
	bool HasPlayerBasedCost(); // Function Squad.SQAvailability.HasPlayerBasedCost // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831ac0
	bool HasLimitedCount(); // Function Squad.SQAvailability.HasLimitedCount // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831a90
	bool HasDelay(); // Function Squad.SQAvailability.HasDelay // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831a60
	bool HasCost(); // Function Squad.SQAvailability.HasCost // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831a30
	void GetAvailabilityForPlayer(struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& InTeamStatus, struct FSQAvailabilityState& OutPlayerStatus); // Function Squad.SQAvailability.GetAvailabilityForPlayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x831340
};

// Class Squad.SQAvailability_Action
// Size: 0x58 (Inherited: 0x50)
struct USQAvailability_Action : USQAvailability {
	struct USQActionSettings* Setting; // 0x50(0x08)
};

// Class Squad.SQAvailability_Deployable
// Size: 0x58 (Inherited: 0x50)
struct USQAvailability_Deployable : USQAvailability {
	struct USQDeployableSettings* Setting; // 0x50(0x08)

	bool ShouldRefund(struct ASQPlayerController* InPlayer, struct ASQTeam* InTeam, struct ASQDeployable* InDeployable); // Function Squad.SQAvailability_Deployable.ShouldRefund // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x833590
	void ProcessRefund(struct ASQPlayerController* InPlayer, struct ASQTeam* InTeam, struct ASQDeployable* InDeployable); // Function Squad.SQAvailability_Deployable.ProcessRefund // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x832b80
	int GetRefundPercentage(); // Function Squad.SQAvailability_Deployable.GetRefundPercentage // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
};

// Class Squad.SQAvailability_Role
// Size: 0x58 (Inherited: 0x50)
struct USQAvailability_Role : USQAvailability {
	struct USQRoleSettings* Setting; // 0x50(0x08)

	void ProcessRearmCost(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource); // Function Squad.SQAvailability_Role.ProcessRearmCost // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x832aa0
	bool HasSameCountLimit(struct USQAvailability_Role* Other); // Function Squad.SQAvailability_Role.HasSameCountLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x831bb0
	int GetRearmRefundPercentage(); // Function Squad.SQAvailability_Role.GetRearmRefundPercentage // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	float GetRearmOperationCost(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource); // Function Squad.SQAvailability_Role.GetRearmOperationCost // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8317c0
	struct FDataTableRowHandle GetInsufficientAmmoReamFailureReason(); // Function Squad.SQAvailability_Role.GetInsufficientAmmoReamFailureReason // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	void GetAvailabilityForPlayerRearm(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource, struct FSQAvailabilityState_Role& InOutRearmStatus, float& OutCost); // Function Squad.SQAvailability_Role.GetAvailabilityForPlayerRearm // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8314d0
	bool CanRearm(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource, float& OutCost, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQAvailability_Role.CanRearm // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x830d00
};

// Class Squad.SQAvailability_Vehicle
// Size: 0x58 (Inherited: 0x50)
struct USQAvailability_Vehicle : USQAvailability {
	struct USQVehicleSettings* Setting; // 0x50(0x08)
};

// Class Squad.SQAvailabilityHelper
// Size: 0x28 (Inherited: 0x28)
struct USQAvailabilityHelper : UBlueprintFunctionLibrary {

	void UpdateNextAvailabilityTime(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState); // Function Squad.SQAvailabilityHelper.UpdateNextAvailabilityTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x833690
	void SetUsage(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, int Usage); // Function Squad.SQAvailabilityHelper.SetUsage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x833410
	void SetUnavailable(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, struct FDataTableRowHandle& InUnavailabilityReason); // Function Squad.SQAvailabilityHelper.SetUnavailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x833280
	void SetModifierPct(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, int ModifierPercentage); // Function Squad.SQAvailabilityHelper.SetModifierPct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x833100
	void SetForceAvailable(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, bool Force); // Function Squad.SQAvailabilityHelper.SetForceAvailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x832f80
	void SetAvailable(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, int InAvailable); // Function Squad.SQAvailabilityHelper.SetAvailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x832e00
	void RemoveUsage(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, int RemovedUsage); // Function Squad.SQAvailabilityHelper.RemoveUsage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x832c80
	bool IsVehicleAvailableForTeam(struct FSQAvailabilityState_Vehicle& InTeamState); // Function Squad.SQAvailabilityHelper.IsVehicleAvailableForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831f70
	bool IsVehicleAvailableForPlayer(struct FSQAvailabilityState_Vehicle& InTeamState, struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& OutPlayerState); // Function Squad.SQAvailabilityHelper.IsVehicleAvailableForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831de0
	bool IsRoleAvailableForTeam(struct FSQAvailabilityState_Role& InTeamState); // Function Squad.SQAvailabilityHelper.IsRoleAvailableForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8325e0
	bool IsRoleAvailableForPlayer(struct FSQAvailabilityState_Role& InTeamState, struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& OutPlayerState); // Function Squad.SQAvailabilityHelper.IsRoleAvailableForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x832450
	bool IsOverCapacity(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.IsOverCapacity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8321b0
	bool IsInfiniteAvailability(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.IsInfiniteAvailability // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8320f0
	bool IsDeployableAvailableForTeam(struct FSQAvailabilityState_Deployable& InTeamState); // Function Squad.SQAvailabilityHelper.IsDeployableAvailableForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831f70
	bool IsDeployableAvailableForPlayer(struct FSQAvailabilityState_Deployable& InTeamState, struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& OutPlayerState); // Function Squad.SQAvailabilityHelper.IsDeployableAvailableForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831de0
	bool IsAvailable(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.IsAvailable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x832030
	bool IsActionAvailableForTeam(struct FSQAvailabilityState_Action& InTeamState); // Function Squad.SQAvailabilityHelper.IsActionAvailableForTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831f70
	bool IsActionAvailableForPlayer(struct FSQAvailabilityState_Action& InTeamState, struct ASQPlayerController* InPlayer, struct FSQAvailabilityState& OutPlayerState); // Function Squad.SQAvailabilityHelper.IsActionAvailableForPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831de0
	bool HasVehicleActiveTimer(struct FSQAvailabilityState_Vehicle& InState); // Function Squad.SQAvailabilityHelper.HasVehicleActiveTimer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8318b0
	bool HasRoleActiveTimer(struct FSQAvailabilityState_Role& InState); // Function Squad.SQAvailabilityHelper.HasRoleActiveTimer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831af0
	bool HasDeployableActiveTimer(struct FSQAvailabilityState_Deployable& InState); // Function Squad.SQAvailabilityHelper.HasDeployableActiveTimer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8318b0
	bool HasActiveTimer(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.HasActiveTimer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x831970
	bool HasActionActiveTimer(struct FSQAvailabilityState_Action& InState); // Function Squad.SQAvailabilityHelper.HasActionActiveTimer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8318b0
	float GetAvailabilityPercentDelay(struct FSQAvailabilityState& InState, float TotalDelay); // Function Squad.SQAvailabilityHelper.GetAvailabilityPercentDelay // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8316a0
	struct FTimespan GetAvailabilityDelay(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.GetAvailabilityDelay // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x831280
	int GetAvailabilityCount(struct FSQAvailabilityState& InState); // Function Squad.SQAvailabilityHelper.GetAvailabilityCount // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8311c0
	void EnQueueNextAvailabilityTime(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, struct FDateTime& InNextAvailabilityTime, struct FDataTableRowHandle& InUnavailabilityReason); // Function Squad.SQAvailabilityHelper.EnQueueNextAvailabilityTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x830fe0
	void ClearNextAvailabilityTime(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState); // Function Squad.SQAvailabilityHelper.ClearNextAvailabilityTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x830eb0
	void AddUsage(struct FSQAvailabilityState& InState, struct FSQAvailabilityState& OutState, int AddedUsage); // Function Squad.SQAvailabilityHelper.AddUsage // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x830b60
};

// Class Squad.SQBaseButton
// Size: 0x2e8 (Inherited: 0x230)
struct USQBaseButton : USQUserWidget {
	bool bIsHovering; // 0x230(0x01)
	bool bIsActive; // 0x231(0x01)
	char pad_232[0x2]; // 0x232(0x02)
	float HoveringColorBlend; // 0x234(0x04)
	float HoverColorBlendSpeed; // 0x238(0x04)
	bool bIsPressing; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	float PressColorBlend; // 0x240(0x04)
	float PressColorBlendSpeed; // 0x244(0x04)
	struct UImage* ButtonImage; // 0x248(0x08)
	struct UBorder* ButtonBorder; // 0x250(0x08)
	struct UTextBlock* ButtonTextBlock; // 0x258(0x08)
	struct FSQButtonStyle SQButtonStyle; // 0x260(0x80)
	float Alpha; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)

	void UpdateActiveState(); // Function Squad.SQBaseButton.UpdateActiveState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	void InitWidget(); // Function Squad.SQBaseButton.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQBaseGameSubsystem
// Size: 0x40 (Inherited: 0x28)
struct USQBaseGameSubsystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct USQGameInstance* SQGameInstance; // 0x38(0x08)

	void TickSubsystem(float DeltaTime); // Function Squad.SQBaseGameSubsystem.TickSubsystem // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQBaseHudWidget
// Size: 0x290 (Inherited: 0x230)
struct USQBaseHudWidget : USQUserWidget {
	struct UUserWidget* StateIndicators; // 0x230(0x08)
	struct USQAmmoWidget* AmmoWidget; // 0x238(0x08)
	struct UUserWidget* SightRangeWidget; // 0x240(0x08)
	struct USQCompassMK2* CompassWidget; // 0x248(0x08)
	struct UUserWidget* CaptureZoneWidget; // 0x250(0x08)
	struct UUserWidget* FOBStatusWidget; // 0x258(0x08)
	struct UUserWidget* StaminaWidget; // 0x260(0x08)
	struct UUserWidget* VehicleHealthWidget; // 0x268(0x08)
	struct USQApprovalQueueWidget* ApprovalQueueWidget; // 0x270(0x08)
	struct USQSeatProgressWidget* SeatProgressWidget; // 0x278(0x08)
	struct USQStagingTimerText* StagingTimerText; // 0x280(0x08)
	struct UUserWidget* CenterDotWidget; // 0x288(0x08)

	void UpdateActiveState(); // Function Squad.SQBaseHudWidget.UpdateActiveState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	void InitWidget(); // Function Squad.SQBaseHudWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQPawnMovementComponent
// Size: 0x1f0 (Inherited: 0x160)
struct USQPawnMovementComponent : UPawnMovementComponent {
	struct FSQMovePostPhysicsTickFunction PostPhysicsTickFunction; // 0x160(0x58)
	char pad_1B8[0x28]; // 0x1b8(0x28)
	char bJustTeleported : 1; // 0x1e0(0x01)
	char bIgnoreBaseRotation : 1; // 0x1e0(0x01)
	char bUseControllerDesiredRotation : 1; // 0x1e0(0x01)
	char bOrientRotationToMovement : 1; // 0x1e0(0x01)
	char bFastAttachedMove : 1; // 0x1e0(0x01)
	char bRunPhysicsWithNoController : 1; // 0x1e0(0x01)
	char pad_1E0_6 : 2; // 0x1e0(0x01)
	char pad_1E1[0xf]; // 0x1e1(0x0f)

	struct UPrimitiveComponent* GetMovementBase(); // Function Squad.SQPawnMovementComponent.GetMovementBase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8a60
};

// Class Squad.SQNetMoveComponent
// Size: 0x250 (Inherited: 0x1f0)
struct USQNetMoveComponent : USQPawnMovementComponent {
	bool bPerformMoveOnServer; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	float MaxPendingMoveDelay; // 0x1f4(0x04)
	float MaxStartLocationDifference; // 0x1f8(0x04)
	float MoveTimestampQuantum; // 0x1fc(0x04)
	bool bShouldInterpolate; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float MinTimeBetweenTimeStampResets; // 0x204(0x04)
	float MaxSmoothNetUpdateDist; // 0x208(0x04)
	float NoSmoothNetUpdateDist; // 0x20c(0x04)
	char pad_210[0x8]; // 0x210(0x08)
	struct TArray<char> LatestPackedMove; // 0x218(0x10)
	char pad_228[0x28]; // 0x228(0x28)

	void SendPackedMoveRPC(struct TArray<char> PackedMove); // Function Squad.SQNetMoveComponent.SendPackedMoveRPC // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x8a3cb0
	void SendClientCorrection(struct TArray<char> PackedMove); // Function Squad.SQNetMoveComponent.SendClientCorrection // (Net|NetReliableNative|Event|Protected|NetClient|NetValidate) // @ game+0x8a3bf0
	void OnRep_LatestPackedMove(); // Function Squad.SQNetMoveComponent.OnRep_LatestPackedMove // (Native|Public) // @ game+0x8a3b20
};

// Class Squad.SQBasicMoveComponent
// Size: 0x260 (Inherited: 0x250)
struct USQBasicMoveComponent : USQNetMoveComponent {
	float MovementSpeed; // 0x250(0x04)
	char pad_254[0xc]; // 0x254(0x0c)
};

// Class Squad.SQBlastComponent
// Size: 0x250 (Inherited: 0x220)
struct USQBlastComponent : USceneComponent {
	float ConeLength; // 0x218(0x04)
	float ConeAngle; // 0x21c(0x04)
	float BlockBlastTraceOriginOffset; // 0x220(0x04)
	float MaxDamage; // 0x224(0x04)
	bool bIsDrawDebugEnabled; // 0x228(0x01)
	struct UDamageType* DamageType; // 0x230(0x08)
	float EffectsConeLength; // 0x238(0x04)
	float EffectsConeHalfAngle; // 0x23c(0x04)
	struct USQShockwave* BlastShockwave; // 0x240(0x08)
	char pad_249[0x7]; // 0x249(0x07)

	void ServerFireBlast(struct FVector BlastLocationZeroBased, struct FVector BlastAimVector); // Function Squad.SQBlastComponent.ServerFireBlast // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x83f6b0
	void FireBlast(); // Function Squad.SQBlastComponent.FireBlast // (Final|Native|Public|BlueprintCallable) // @ game+0x83aa70
};

// Class Squad.SQBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQBlueprintLibrary : UBlueprintFunctionLibrary {

	void UpdateTextureOnImage(struct UImage* Image, struct UTexture2DDynamic* Texture); // Function Squad.SQBlueprintLibrary.UpdateTextureOnImage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x840880
	void UpdateSpring3D(struct FSQSpringInterpStruct3D& Spring, float DeltaTime); // Function Squad.SQBlueprintLibrary.UpdateSpring3D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x840770
	void UpdateDynamicEasing(struct FSQDynamicEasingStruct& Easing, float DeltaTime); // Function Squad.SQBlueprintLibrary.UpdateDynamicEasing // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x840680
	bool TryGetDefaultObjectFor(struct UObject* Class, struct UObject*& OutDefaultObject); // Function Squad.SQBlueprintLibrary.TryGetDefaultObjectFor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8405b0
	struct UAudioComponent* SpawnSoundAttachedWithParameters(struct USoundBase* Sound, struct USceneComponent* AttachToComponent, struct TArray<struct FAudioComponentParam>& AudioParameters, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function Squad.SQBlueprintLibrary.SpawnSoundAttachedWithParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8401c0
	struct TArray<struct FName> SortNameArray(struct TArray<struct FName>& Array); // Function Squad.SQBlueprintLibrary.SortNameArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8400d0
	void SetTextureRenderTarget2DSize(struct UTextureRenderTarget2D* Texture, int SizeX, int SizeY); // Function Squad.SQBlueprintLibrary.SetTextureRenderTarget2DSize // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83ffe0
	void SetSkeletalPhysMaterialOverride(struct USkeletalMeshComponent* Component, struct UPhysicalMaterial* NewPhysMaterial); // Function Squad.SQBlueprintLibrary.SetSkeletalPhysMaterialOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83ff30
	void SetMousePosition(struct UObject* WorldContextObject, int X, int Y); // Function Squad.SQBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83fe40
	void SetMobility(struct USceneComponent* Target, enum class EComponentMobility NewMobility); // Function Squad.SQBlueprintLibrary.SetMobility // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83fd90
	void SetMasterPoseComponent(struct USkeletalMeshComponent* Target, struct USkeletalMeshComponent* Master); // Function Squad.SQBlueprintLibrary.SetMasterPoseComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83fce0
	void SetDynamicEasingTarget(struct FSQDynamicEasingStruct& Easing, float NewTarget); // Function Squad.SQBlueprintLibrary.SetDynamicEasingTarget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83fbf0
	void SetComponentTickGroup(struct UActorComponent* Target, enum class ETickingGroup NewTickGroup); // Function Squad.SQBlueprintLibrary.SetComponentTickGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83fb40
	void SetActorTickGroup(struct AActor* Target, enum class ETickingGroup NewTickGroup); // Function Squad.SQBlueprintLibrary.SetActorTickGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83fa90
	void SetActorHiddenInGame(struct AActor* ActorToAffect, bool bNewHidden, bool bPropagateToAttachedChildren); // Function Squad.SQBlueprintLibrary.SetActorHiddenInGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83f980
	void SetActorComponentStablyNamed(struct UActorComponent* ActorComponent); // Function Squad.SQBlueprintLibrary.SetActorComponentStablyNamed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83f910
	void SetActorCollisionInGame(struct AActor* ActorToAffect, bool bNewCollisionEnabled, bool bPropagateToAttachedChildren); // Function Squad.SQBlueprintLibrary.SetActorCollisionInGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83f800
	bool ServerLicensingNoticeNeeded(); // Function Squad.SQBlueprintLibrary.ServerLicensingNoticeNeeded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83f7d0
	bool ServerHealthEnabled(); // Function Squad.SQBlueprintLibrary.ServerHealthEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83f7a0
	void SaveAndForceRebuildingKeyMaps(bool bRestoreDefaults); // Function Squad.SQBlueprintLibrary.SaveAndForceRebuildingKeyMaps // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83f630
	void RebindKey(struct FName& ActionName, struct FKey& newKey, int OccuranceIndex); // Function Squad.SQBlueprintLibrary.RebindKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83f4d0
	void RebindAxisKey(struct FInputAxisKeyMapping& Mapping, struct FKey newKey); // Function Squad.SQBlueprintLibrary.RebindAxisKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83f2e0
	void PrintShotInfo(struct FSQShotInfo& Shot); // Function Squad.SQBlueprintLibrary.PrintShotInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83f130
	void PrintHitResult(struct FHitResult& Hit); // Function Squad.SQBlueprintLibrary.PrintHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83f080
	void PlaySoundAtLocationWithParameters(struct UObject* WorldContextObject, struct USoundBase* Sound, struct FVector& Location, struct TArray<struct FAudioComponentParam>& AudioParameters, struct FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings); // Function Squad.SQBlueprintLibrary.PlaySoundAtLocationWithParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x83ed60
	void PlaySound2DWithParameters(struct UObject* WorldContextObject, struct USoundBase* Sound, struct TArray<struct FAudioComponentParam>& AudioParameters, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundConcurrency* ConcurrencySettings); // Function Squad.SQBlueprintLibrary.PlaySound2DWithParameters // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83eb20
	void PlaySoldierMovementFoleySound(struct ASQSoldier* Soldier, struct USoundBase* Sound, bool bSetSpeedParameter, bool bSetPhysMatParameter, bool bSetWaterDepthParameter, struct FVector LocationOffset, float VolumeMultiplier, float PitchMultiplier, float StartTime, struct USoundAttenuation* AttenuationSettings, struct USoundConcurrency* ConcurrencySettings, enum class EAttachLocation LocationType); // Function Squad.SQBlueprintLibrary.PlaySoldierMovementFoleySound // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x83e7c0
	bool OWICoreStateVisibleDefined(); // Function Squad.SQBlueprintLibrary.OWICoreStateVisibleDefined // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e360
	bool OWICoreStateEnabledDefined(); // Function Squad.SQBlueprintLibrary.OWICoreStateEnabledDefined // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e360
	void OffsetSpring3D(struct FSQSpringInterpStruct3D& Spring, struct FVector& PosOffset); // Function Squad.SQBlueprintLibrary.OffsetSpring3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x83e6b0
	float NormalizeAngle(float InAngle); // Function Squad.SQBlueprintLibrary.NormalizeAngle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e630
	bool NameLexicalLess(struct FName& A, struct FName& B); // Function Squad.SQBlueprintLibrary.NameLexicalLess // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83e550
	bool ModdedServersOnTop(); // Function Squad.SQBlueprintLibrary.ModdedServersOnTop // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e520
	bool MatchWaitingToStart(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.MatchWaitingToStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e4a0
	bool MatchWaitingAfterCompletion(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.MatchWaitingAfterCompletion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e420
	bool MatchInProgress(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.MatchInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e3a0
	bool MapMarkersEnabledDefined(); // Function Squad.SQBlueprintLibrary.MapMarkersEnabledDefined // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e360
	bool MapIconVisibleDefined(); // Function Squad.SQBlueprintLibrary.MapIconVisibleDefined // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e380
	bool MapIconEnabledDefined(); // Function Squad.SQBlueprintLibrary.MapIconEnabledDefined // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83e360
	void LogUnusedProperties(struct UObject* Object); // Function Squad.SQBlueprintLibrary.LogUnusedProperties // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83e2f0
	void LogError(struct FString Contents); // Function Squad.SQBlueprintLibrary.LogError // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83e260
	void LoadCredits(struct TArray<struct FSQCreditsList>& OutCreditsList); // Function Squad.SQBlueprintLibrary.LoadCredits // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83e140
	bool IsValidKey(struct FKey& Key); // Function Squad.SQBlueprintLibrary.IsValidKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83e070
	bool IsUnderTerrain(struct UObject* WorldContextObject, struct FVector& StartTrace, struct AActor* InIgnoreActor, float TraceDistance, bool bTraceMustImpactAboveToBeUnderTerrain); // Function Squad.SQBlueprintLibrary.IsUnderTerrain // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x83dec0
	bool IsStandaloneOrListenServer(); // Function Squad.SQBlueprintLibrary.IsStandaloneOrListenServer // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83de90
	bool IsStandalone(); // Function Squad.SQBlueprintLibrary.IsStandalone // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83de60
	bool IsSimulatingInEditor(); // Function Squad.SQBlueprintLibrary.IsSimulatingInEditor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83de30
	bool IsShippingBuild(); // Function Squad.SQBlueprintLibrary.IsShippingBuild // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83de00
	bool IsQueueEnabled(); // Function Squad.SQBlueprintLibrary.IsQueueEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ddd0
	bool IsNearlyEqualOrLess(float A, float B, float Tolerance); // Function Squad.SQBlueprintLibrary.IsNearlyEqualOrLess // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83dcb0
	bool IsLocationWithinDistanceToLocalPlayer(enum class ESQReturnBool& Branches, struct FVector& OtherLocation, float DistanceInMeters); // Function Squad.SQBlueprintLibrary.IsLocationWithinDistanceToLocalPlayer // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x83db80
	bool IsGamepadKey(struct FKey& Key); // Function Squad.SQBlueprintLibrary.IsGamepadKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83dab0
	bool IsDataTableRowOfStruct(struct UDataTable* table, struct FName RowStructName); // Function Squad.SQBlueprintLibrary.IsDataTableRowOfStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d9f0
	bool IsActorWithinDistanceToLocalPlayer(enum class ESQReturnBool& Branches, struct AActor* OtherActor, float DistanceInMeters); // Function Squad.SQBlueprintLibrary.IsActorWithinDistanceToLocalPlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83d8d0
	bool InMainMenu(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.InMainMenu // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d850
	float GetZoomedFOV(float MagnificationDesired, float DefaultFOV); // Function Squad.SQBlueprintLibrary.GetZoomedFOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d790
	struct AWorldSettings* GetWorldSettings(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.GetWorldSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83d710
	struct FSQTextureMemoryStats GetTextureMemoryStats(); // Function Squad.SQBlueprintLibrary.GetTextureMemoryStats // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d6c0
	struct FVector2D GetTextSize(struct FSlateFontInfo& FontInfo, struct FText& Text, float ScaleUI); // Function Squad.SQBlueprintLibrary.GetTextSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x83d4f0
	void GetSquadPhysMat(struct UPhysicalMaterial* PhysMat, struct USQPhysicalMaterial*& SquadPhysMat); // Function Squad.SQBlueprintLibrary.GetSquadPhysMat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83d430
	struct USQGameUserSettings* GetSquadGameUserSettings(); // Function Squad.SQBlueprintLibrary.GetSquadGameUserSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d400
	struct ASQGameSession* GetSquadGameSession(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.GetSquadGameSession // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d380
	struct USQGameInstance* GetSquadGameInstance(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.GetSquadGameInstance // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d300
	struct FVector GetSpringPos3D(struct FSQSpringInterpStruct3D& Spring); // Function Squad.SQBlueprintLibrary.GetSpringPos3D // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x83d220
	void GetServerHealthValues(float& ServerHealthLow, float& ServerHealthHigh); // Function Squad.SQBlueprintLibrary.GetServerHealthValues // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83d140
	struct FSlateColor GetServerHealthSlateColor(struct UObject* WorldContextObject, int ServerHealth); // Function Squad.SQBlueprintLibrary.GetServerHealthSlateColor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83d030
	void GetPrimaryDisplaySize(int& Width, int& Height); // Function Squad.SQBlueprintLibrary.GetPrimaryDisplaySize // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83cf50
	int GetPreviousLODLevel(struct UStaticMeshComponent* Component); // Function Squad.SQBlueprintLibrary.GetPreviousLODLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ced0
	struct TArray<struct FHitResult> GetOverlapHitInfos(struct UPrimitiveComponent* Target); // Function Squad.SQBlueprintLibrary.GetOverlapHitInfos // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ce00
	int GetNumVertices(struct UStaticMesh* StaticMesh, int LOD); // Function Squad.SQBlueprintLibrary.GetNumVertices // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83cd40
	int GetNumTriangles(struct UStaticMesh* StaticMesh, int LOD); // Function Squad.SQBlueprintLibrary.GetNumTriangles // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83cc80
	int GetNumTexCoords(struct UStaticMesh* StaticMesh, int LOD); // Function Squad.SQBlueprintLibrary.GetNumTexCoords // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83cbc0
	int GetNumSections(struct UStaticMesh* StaticMesh, int LOD); // Function Squad.SQBlueprintLibrary.GetNumSections // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83cb00
	struct FString GetNetMode(); // Function Squad.SQBlueprintLibrary.GetNetMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ca70
	struct FString GetNatoPhoneticString(int Index); // Function Squad.SQBlueprintLibrary.GetNatoPhoneticString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83c9a0
	struct FString GetMajorMinorVersion(struct FString RawVersion); // Function Squad.SQBlueprintLibrary.GetMajorMinorVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83c870
	float GetLastRenderTime(struct UPrimitiveComponent* Component); // Function Squad.SQBlueprintLibrary.GetLastRenderTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83c7e0
	struct FText GetKeysMappedToActionText(struct FName& ActionName); // Function Squad.SQBlueprintLibrary.GetKeysMappedToActionText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83c6e0
	void GetKeysMappedToAction(struct FName& ActionName, struct TArray<struct FKey>& Keys); // Function Squad.SQBlueprintLibrary.GetKeysMappedToAction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83c590
	void GetKeysMapedToAxis(struct FName& AxisName, bool negative, struct TArray<struct FInputAxisKeyMapping>& Keys); // Function Squad.SQBlueprintLibrary.GetKeysMapedToAxis // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83c400
	void GetKeyName(struct FKey& Key, struct FName& OutName); // Function Squad.SQBlueprintLibrary.GetKeyName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83c2e0
	int GetKeyFromValue(struct TMap<int, int> Map, int Value); // Function Squad.SQBlueprintLibrary.GetKeyFromValue // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83c160
	void GetKeyDisplayName(struct FKey& Key, struct FText& OutDisplayName); // Function Squad.SQBlueprintLibrary.GetKeyDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83c000
	int GetIntFromPhysMat(struct UPhysicalMaterial* PhysMat); // Function Squad.SQBlueprintLibrary.GetIntFromPhysMat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83bf80
	int GetIntFromFName(struct FName& Name); // Function Squad.SQBlueprintLibrary.GetIntFromFName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83bef0
	void GetGameVersionInfo(struct FString& Variant, int& Major, int& Minor, int& Build, int& Revision); // Function Squad.SQBlueprintLibrary.GetGameVersionInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83bd00
	struct FString GetGameVersion(); // Function Squad.SQBlueprintLibrary.GetGameVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83bc70
	float GetDynamicEasingPosition(struct FSQDynamicEasingStruct& Easing); // Function Squad.SQBlueprintLibrary.GetDynamicEasingPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83bbc0
	struct UObject* GetDefaultObjectFor(struct UObject* Class); // Function Squad.SQBlueprintLibrary.GetDefaultObjectFor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83bb40
	int GetCustomServerSettingAsInt(struct FString PropertyName, int DefaultValue); // Function Squad.SQBlueprintLibrary.GetCustomServerSettingAsInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ba60
	float GetCustomServerSettingAsFloat(struct FString PropertyName, float DefaultValue); // Function Squad.SQBlueprintLibrary.GetCustomServerSettingAsFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b970
	bool GetCustomServerSettingAsBool(struct FString PropertyName, bool DefaultValue); // Function Squad.SQBlueprintLibrary.GetCustomServerSettingAsBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b890
	void GetCustomServerSetting(struct FString PropertyName, struct FString DefaultValue, struct FString& OutResult); // Function Squad.SQBlueprintLibrary.GetCustomServerSetting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83b740
	struct FString GetCurrentMapName(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.GetCurrentMapName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b670
	void GetComponentTransform(struct USceneComponent* Component, struct FTransform& OutTransform); // Function Squad.SQBlueprintLibrary.GetComponentTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x83b560
	void GetCanvasSize(struct UCanvas* Canvas, int& SizeX, int& SizeY); // Function Squad.SQBlueprintLibrary.GetCanvasSize // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83b440
	struct TArray<struct FAudioComponentParam> GetAudioComponentParamsArrayFromPhysMat(struct UPhysicalMaterial* PhysMat); // Function Squad.SQBlueprintLibrary.GetAudioComponentParamsArrayFromPhysMat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b370
	struct FAudioComponentParam GetAudioComponentParamFromPhysMat(struct UPhysicalMaterial* PhysMat); // Function Squad.SQBlueprintLibrary.GetAudioComponentParamFromPhysMat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b2e0
	struct FSQAnnouncement GetAnnouncement(); // Function Squad.SQBlueprintLibrary.GetAnnouncement // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b170
	struct FString GetAlphabetLetterString(int Index); // Function Squad.SQBlueprintLibrary.GetAlphabetLetterString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83b0a0
	void GetAllKeyMappings(struct TArray<struct FInputActionKeyMapping>& KeyMappings); // Function Squad.SQBlueprintLibrary.GetAllKeyMappings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83aed0
	void GetAllKeybindsBackups(struct TArray<struct FString>& Backups); // Function Squad.SQBlueprintLibrary.GetAllKeybindsBackups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83afd0
	void GetAllComponentsOfClass(struct AActor* WorldContextObject, struct UActorComponent* Class, struct TArray<struct UObject*>& Components); // Function Squad.SQBlueprintLibrary.GetAllComponentsOfClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83adb0
	float GetActorHalfHeight(struct AActor* TestActor); // Function Squad.SQBlueprintLibrary.GetActorHalfHeight // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83ad20
	void GetActionKeyName(struct FName& ActionName, struct FName& Name); // Function Squad.SQBlueprintLibrary.GetActionKeyName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83ac40
	struct FText FormatTextActionKeys(struct FText& FormatText, struct TArray<struct FName>& ActionKeys); // Function Squad.SQBlueprintLibrary.FormatTextActionKeys // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83aa90
	struct ASQPlayerController* FindPlayerByPlayerId(struct UWorld* World, int PlayerId); // Function Squad.SQBlueprintLibrary.FindPlayerByPlayerId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83a9b0
	struct ASQPlayerController* FindPlayerByNameOrId(struct UWorld* World, struct FString NameOrId); // Function Squad.SQBlueprintLibrary.FindPlayerByNameOrId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83a8d0
	bool FileSaveString(struct FString Filename, struct FString InText); // Function Squad.SQBlueprintLibrary.FileSaveString // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83a7d0
	bool FileLoadString(struct FString Filename, struct FString& OutText); // Function Squad.SQBlueprintLibrary.FileLoadString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83a6c0
	void DumpStaticMeshDrawListStats(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.DumpStaticMeshDrawListStats // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83a650
	bool DoesCustomServerSettingExist(struct FString PropertyName); // Function Squad.SQBlueprintLibrary.DoesCustomServerSettingExist // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x83a5b0
	struct UTextureRenderTargetCube* CreateRenderTargetCube(struct UObject* WorldContextObject, int Size, enum class EPixelFormat Format, struct FLinearColor ClearColor, bool bHDR, bool bForceLinearGamma); // Function Squad.SQBlueprintLibrary.CreateRenderTargetCube // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x83a400
	void ConvertNumberToGridLetter(struct FString& OutResult, int Value); // Function Squad.SQBlueprintLibrary.ConvertNumberToGridLetter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x83a310
	int64 ConvertByteTo_I64(int64 A, enum class ESQByteUnit From, enum class ESQByteUnit To, int64& Remaining); // Function Squad.SQBlueprintLibrary.ConvertByteTo_I64 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83a1d0
	int ConvertByteTo(int A, enum class ESQByteUnit From, enum class ESQByteUnit To, int& Remaining); // Function Squad.SQBlueprintLibrary.ConvertByteTo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x83a090
	bool ComponentIsDamageableFrom(struct UPrimitiveComponent* VictimComp, struct FVector& Origin, struct AActor* IgnoredActor, struct TArray<struct AActor*>& IgnoreActors, struct FHitResult& OutHitResult); // Function Squad.SQBlueprintLibrary.ComponentIsDamageableFrom // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x839e80
	struct FVector ClosestPointOnLine(struct FVector& LineStart, struct FVector& LineEnd, struct FVector& Point); // Function Squad.SQBlueprintLibrary.ClosestPointOnLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x839d30
	void ClampVector(struct FVector& Vector, struct FVector& Min, struct FVector& Max); // Function Squad.SQBlueprintLibrary.ClampVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x839c00
	float ClampDeltaAngle(float InDeltaAngle, float CurrentAngle, float MinAngle, float MaxAngle); // Function Squad.SQBlueprintLibrary.ClampDeltaAngle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x839ab0
	float ClampDelta(float InDelta, float Current, float Min, float Max); // Function Squad.SQBlueprintLibrary.ClampDelta // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x839960
	void CenterMousePosition(struct UObject* WorldContextObject); // Function Squad.SQBlueprintLibrary.CenterMousePosition // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8398f0
	float CalculateAmmoCostToSwapRole(struct USQRoleSettings* NewRole); // Function Squad.SQBlueprintLibrary.CalculateAmmoCostToSwapRole // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x839860
	void CalcTimeToMid(float Midpoint, float Position, float Velocity, float Acceleration, float& TimeToMid); // Function Squad.SQBlueprintLibrary.CalcTimeToMid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8396c0
	void CalcMidpoint(float Target, float Position, float Velocity, float Acceleration, float& Midpoint); // Function Squad.SQBlueprintLibrary.CalcMidpoint // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x839520
	void BreakInputAxisKeyMapping(struct FInputAxisKeyMapping& KeyMapping, struct FName& ActionName, struct FKey& Key, float& Scale); // Function Squad.SQBlueprintLibrary.BreakInputAxisKeyMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x839290
	void BreakInputActionKeyMapping(struct FInputActionKeyMapping& KeyMapping, struct FName& ActionName, struct FKey& Key, bool& bShift, bool& bCtrl, bool& bAlt, bool& bCmd); // Function Squad.SQBlueprintLibrary.BreakInputActionKeyMapping // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x838f10
	void BreakFullHitResult(struct FHitResult& Hit, struct FVector& Location, struct FVector& Normal, struct FVector& ImpactPoint, struct FVector& ImpactNormal, struct FVector& TraceStart, struct FVector& TraceEnd, bool& bBlockingHit, bool& bStartPenetrating, float& PenetrationDepth, float& Time, struct UPhysicalMaterial*& PhysMat, struct AActor*& HitActor, struct UPrimitiveComponent*& HitComponent, struct FName& HitBoneName, int& HitItem, int& HitFaceIndex); // Function Squad.SQBlueprintLibrary.BreakFullHitResult // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x838910
	struct TArray<struct FAudioComponentParam> AssembleSoldierAudioParameters(struct ASQSoldier* Soldier, bool bSetSpeedParameter, bool bSetFloorPhysMatParameter, bool bSetWaterDepthParameter); // Function Squad.SQBlueprintLibrary.AssembleSoldierAudioParameters // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x838750
	struct FTimespan ApplyTimeDilationFactorOnTimeSpan(struct FTimespan& InDelay, float InTimeDilationFactor); // Function Squad.SQBlueprintLibrary.ApplyTimeDilationFactorOnTimeSpan // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x838670
	struct FDateTime ApplyTimeDilationFactorOnDateTime(struct FDateTime& InTime, float InTimeDilationFactor); // Function Squad.SQBlueprintLibrary.ApplyTimeDilationFactorOnDateTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x838590
	bool ApplyRadialDamageWithFalloff(struct UObject* WorldContextObject, float BaseDamage, float MinimumDamage, struct FVector& Origin, float KillZoneRadius, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bOnlyDamageMeshes, enum class ECollisionChannel DamagePreventionChannel); // Function Squad.SQBlueprintLibrary.ApplyRadialDamageWithFalloff // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x838190
	void ApplyOppositeAcceleration(float Target, float Position, float Velocity, float OppositeAcceleration, float DeltaTime, float& NewPosition, float& NewVelocity, float& TimeLeft); // Function Squad.SQBlueprintLibrary.ApplyOppositeAcceleration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x837f10
	bool ApplyHitResultRadialDamageWithFalloff(struct UObject* WorldContextObject, struct FHitResult& HitResult, float BaseDamage, float MinimumDamage, struct FVector& Origin, float KillZoneRadius, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, struct UDamageType* DamageTypeClass, struct TArray<struct AActor*>& IgnoreActors, struct AActor* DamageCauser, struct AController* InstigatedByController, bool bOnlyDamageMeshes, enum class ECollisionChannel DamagePreventionChannel); // Function Squad.SQBlueprintLibrary.ApplyHitResultRadialDamageWithFalloff // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x837a70
	struct FTimespan ApplyGlobalTimeDilationOnTimeSpan(struct UObject* WorldContextObject, struct FTimespan& InDelay); // Function Squad.SQBlueprintLibrary.ApplyGlobalTimeDilationOnTimeSpan // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8379a0
	struct FDateTime ApplyGlobalTimeDilationOnDateTime(struct UObject* WorldContextObject, struct FDateTime& InTime); // Function Squad.SQBlueprintLibrary.ApplyGlobalTimeDilationOnDateTime // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8378d0
	void ApplyDeceleration(float Position, float Velocity, float Acceleration, float TimeLeft, float& NewPosition, float& NewVelocity); // Function Squad.SQBlueprintLibrary.ApplyDeceleration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8376f0
	void ApplyAcceleration(float TimeToMid, float Midpoint, float Position, float Velocity, float Acceleration, float DeltaTime, float& NewPosition, float& NewVelocity, float& TimeLeft); // Function Squad.SQBlueprintLibrary.ApplyAcceleration // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x837430
	struct FVector2D AdjustPositionForTextAlignment(struct FVector2D& OriginalRenderPosition, struct FVector2D& TextSize, enum class ESQTextHorizontalAlignment HorizontalAlignment, enum class ESQTextVerticalAlignment VerticalAlignment); // Function Squad.SQBlueprintLibrary.AdjustPositionForTextAlignment // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8372b0
	void ActivateReverbEffectFixed(struct UObject* WorldContextObject, struct UReverbEffect* ReverbEffect, struct FName& TagName, float Priority, float Volume, float FadeTime); // Function Squad.SQBlueprintLibrary.ActivateReverbEffectFixed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8370f0
};

// Class Squad.SQMultithreadObject
// Size: 0x30 (Inherited: 0x28)
struct USQMultithreadObject : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void DoMultiThreadedWork(); // Function Squad.SQMultithreadObject.DoMultiThreadedWork // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMultiThreadBPSubsystem
// Size: 0x48 (Inherited: 0x30)
struct USQMultiThreadBPSubsystem : UEngineSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct FMultithreadObjectPair> MultithreadObjects; // 0x38(0x10)
};

// Class Squad.SQMultiThreadedFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQMultiThreadedFunctionLibrary : UBlueprintFunctionLibrary {

	void QueueBlueprintMultithreadTask(struct USQMultithreadObject* MultithreadObject, DelegateProperty OnCompleted); // Function Squad.SQMultiThreadedFunctionLibrary.QueueBlueprintMultithreadTask // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x83f200
};

// Class Squad.SQSoldier
// Size: 0x1ee0 (Inherited: 0x660)
struct ASQSoldier : ACharacter {
	char pad_660[0x14]; // 0x660(0x14)
	float BuddyBoosterMaximumVelocitySquared; // 0x674(0x04)
	struct FSQUsableData UsableData; // 0x678(0x40)
	struct USkeletalMeshComponent* Mesh1P; // 0x6b8(0x08)
	struct USkeletalMeshComponent* Mesh1PShadow; // 0x6c0(0x08)
	char bEnableTickUpdateShiftMesh : 1; // 0x6c8(0x01)
	char pad_6C8_1 : 7; // 0x6c8(0x01)
	char pad_6C9[0x3]; // 0x6c9(0x03)
	struct FVector ShiftMeshOffset; // 0x6cc(0x0c)
	float Prone2SprintMovementRecovery; // 0x6d8(0x04)
	float Prone2SprintAlpha; // 0x6dc(0x04)
	struct USQConsoleVariablesComponent* ConsoleVariablesComponent; // 0x6e0(0x08)
	struct TArray<struct USkeletalMesh*> SoldierMeshSkins; // 0x6e8(0x10)
	struct UMaterialInterface* BasePatchMaterial; // 0x6f8(0x08)
	struct UCameraComponent* FirstPersonCameraComponent; // 0x700(0x08)
	float WeaponBasedFOV; // 0x708(0x04)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct USQSoldierMovement* SoldierMovement; // 0x710(0x08)
	struct USphereComponent* SnapZone; // 0x718(0x08)
	struct FPostProcessSettings LowHealthPostProcessSettings; // 0x720(0x530)
	struct FPostProcessSettings BleedingPostProcessSettings; // 0xc50(0x530)
	struct FPostProcessSettings SuppressionPostProcessSettings; // 0x1180(0x530)
	char bAllowEffectsForProjectilesFiredWithinSuppressionRange : 1; // 0x16b0(0x01)
	char pad_16B0_1 : 7; // 0x16b0(0x01)
	char pad_16B1[0x3]; // 0x16b1(0x03)
	float UnderSuppressionPercentage; // 0x16b4(0x04)
	float SuppressionEffectsDecayRate; // 0x16b8(0x04)
	float BaseTurnRate; // 0x16bc(0x04)
	float BaseLookUpRate; // 0x16c0(0x04)
	float NoADSToSprintDot; // 0x16c4(0x04)
	float ADSToSprintDot; // 0x16c8(0x04)
	char bIsDoubleTapWalking : 1; // 0x16cc(0x01)
	char pad_16CC_1 : 7; // 0x16cc(0x01)
	char pad_16CD[0x3]; // 0x16cd(0x03)
	struct FVector GunOffset; // 0x16d0(0x0c)
	float ProneEyeHeight; // 0x16dc(0x04)
	char bIsProne : 1; // 0x16e0(0x01)
	char pad_16E0_1 : 7; // 0x16e0(0x01)
	char pad_16E1[0xf]; // 0x16e1(0x0f)
	char bInThirdPersonView : 1; // 0x16f0(0x01)
	char bCachedInThirdPerson : 1; // 0x16f0(0x01)
	char pad_16F0_2 : 6; // 0x16f0(0x01)
	char pad_16F1[0x3]; // 0x16f1(0x03)
	struct FName AttachSocket1PName; // 0x16f4(0x08)
	struct FName AttachSocket3PName; // 0x16fc(0x08)
	char pad_1704[0x4]; // 0x1704(0x04)
	struct USQCoreStateComponent* StateObject; // 0x1708(0x08)
	struct USQMapIconComponent* MapIcon; // 0x1710(0x08)
	float SecondsUntilIgnoreDistanceForAliveTeamMates; // 0x1718(0x04)
	float SecondsOfSpawnProtection; // 0x171c(0x04)
	float InvulnerableDelay; // 0x1720(0x04)
	float RagdollLifeSpan; // 0x1724(0x04)
	float UnpossessionDelayAfterDeath; // 0x1728(0x04)
	char pad_172C[0x4]; // 0x172c(0x04)
	struct TArray<struct FSQBoneDamageMod> BoneDamageModifiers; // 0x1730(0x10)
	char pad_1740[0x30]; // 0x1740(0x30)
	char LeaningDirection; // 0x1770(0x01)
	char pad_1771[0x3]; // 0x1771(0x03)
	float BlockLeanTraceDistance; // 0x1774(0x04)
	float PitchAngleAdjust; // 0x1778(0x04)
	float BlockLeanTraceRotation; // 0x177c(0x04)
	float ProneBlockLeanTraceDistance; // 0x1780(0x04)
	float PronePitchAngleAdjust; // 0x1784(0x04)
	float ProneBlockLeanTraceRotation; // 0x1788(0x04)
	float UseInteractDistance; // 0x178c(0x04)
	struct AActor* UseFocus; // 0x1790(0x08)
	char pad_1798[0x4]; // 0x1798(0x04)
	float SnapZoneRadius; // 0x179c(0x04)
	float MinDistanceToSuppressedTarget; // 0x17a0(0x04)
	float FullSuppressionRadius; // 0x17a4(0x04)
	float SuppressionRadius; // 0x17a8(0x04)
	char pad_17AC[0x4]; // 0x17ac(0x04)
	struct USQVehicleSeatComponent* CurrentSeat; // 0x17b0(0x08)
	char bTestingMove : 1; // 0x17b8(0x01)
	char pad_17B8_1 : 7; // 0x17b8(0x01)
	char pad_17B9[0x3]; // 0x17b9(0x03)
	float CachedMoveRotation; // 0x17bc(0x04)
	struct FVector CachedMoveRotationPoint; // 0x17c0(0x0c)
	struct FVector CachedForwardVector; // 0x17cc(0x0c)
	struct FScriptMulticastDelegate OnChangedSeat; // 0x17d8(0x10)
	char bStopADSWhenSprintPressed : 1; // 0x17e8(0x01)
	char bStopADSWhenPronePressed : 1; // 0x17e8(0x01)
	char bStopADSWhenUnpronePressed : 1; // 0x17e8(0x01)
	char bStopSprintWhenADSPressed : 1; // 0x17e8(0x01)
	char bStopUsingPrimaryItemWhenPronePressed : 1; // 0x17e8(0x01)
	char bStopUsingAltItemWhenPronePressed : 1; // 0x17e8(0x01)
	char bStopUsingPrimaryItemWhenUnpronePressed : 1; // 0x17e8(0x01)
	char bStopUsingAltItemWhenUnpronePressed : 1; // 0x17e8(0x01)
	char bItemLoweredDueToCollision : 1; // 0x17e9(0x01)
	char bCachedADSDuringItemCollision : 1; // 0x17e9(0x01)
	char pad_17E9_2 : 6; // 0x17e9(0x01)
	char pad_17EA[0x6]; // 0x17ea(0x06)
	struct AActor* UsingObject; // 0x17f0(0x08)
	int VehicleSeatEntryWeaponSlot; // 0x17f8(0x04)
	int VehicleSeatEntryWeaponOffset; // 0x17fc(0x04)
	char pad_1800[0x2d8]; // 0x1800(0x2d8)
	struct FSQTakeHitInfo LastTakeHitInfo; // 0x1ad8(0x138)
	char SoldierSkinIndex; // 0x1c10(0x01)
	char pad_1C11[0x3]; // 0x1c11(0x03)
	char bIsDying : 1; // 0x1c14(0x01)
	char pad_1C14_1 : 1; // 0x1c14(0x01)
	char bIsBleeding : 1; // 0x1c14(0x01)
	char bIsWounded : 1; // 0x1c14(0x01)
	char pad_1C14_4 : 1; // 0x1c14(0x01)
	char bAllowWoundedState : 1; // 0x1c14(0x01)
	char pad_1C14_6 : 2; // 0x1c14(0x01)
	char pad_1C15[0x3]; // 0x1c15(0x03)
	float Health; // 0x1c18(0x04)
	float LastHealedTime; // 0x1c1c(0x04)
	float WoundedThreshold; // 0x1c20(0x04)
	float HealthBleedableThreshold; // 0x1c24(0x04)
	float HealthHurtMovementThreshold; // 0x1c28(0x04)
	float DamageBleedableThreshold; // 0x1c2c(0x04)
	float WoundedHealthLossRate; // 0x1c30(0x04)
	float WoundedBandagedHealthLossRate; // 0x1c34(0x04)
	float BleedingHealthLossRate; // 0x1c38(0x04)
	float KillDamageThreshold; // 0x1c3c(0x04)
	float HealthUponRevival; // 0x1c40(0x04)
	float TimeBecameWounded; // 0x1c44(0x04)
	float TimeBecameRevived; // 0x1c48(0x04)
	float PostRecoveryUpdateRate; // 0x1c4c(0x04)
	struct FTimerHandle PostRecoveryTimerHandle; // 0x1c50(0x08)
	float PostRecoveryTimeLeft; // 0x1c58(0x04)
	char pad_1C5C[0x4]; // 0x1c5c(0x04)
	struct UCurveFloat* PostRecoveryRateByHealthCurve; // 0x1c60(0x08)
	float CumulativeRevivePenalty; // 0x1c68(0x04)
	char bIsHoldingBreath : 1; // 0x1c6c(0x01)
	char pad_1C6C_1 : 7; // 0x1c6c(0x01)
	char pad_1C6D[0x3]; // 0x1c6d(0x03)
	float BreathHoldStamina; // 0x1c70(0x04)
	float BreathHoldStaminaMax; // 0x1c74(0x04)
	float BreathHoldRecoveryDuration; // 0x1c78(0x04)
	float BreathHoldConsumptionDuration; // 0x1c7c(0x04)
	float BreathHoldFadeDuration; // 0x1c80(0x04)
	float BreathHoldPct; // 0x1c84(0x04)
	float FocusZoomAlpha; // 0x1c88(0x04)
	char pad_1C8C[0x4]; // 0x1c8c(0x04)
	struct UCurveFloat* FallSpeedToFallDamageCurve; // 0x1c90(0x08)
	float FallingDamageMultiplier; // 0x1c98(0x04)
	float MaximumSafeFallingSpeed; // 0x1c9c(0x04)
	float BonkOnHeadFallDamageMultiplier; // 0x1ca0(0x04)
	char pad_1CA4[0x4]; // 0x1ca4(0x04)
	struct FScriptMulticastDelegate OnRevivedEvent; // 0x1ca8(0x10)
	char bIsLeavingServer : 1; // 0x1cb8(0x01)
	char pad_1CB8_1 : 7; // 0x1cb8(0x01)
	char pad_1CB9[0x7]; // 0x1cb9(0x07)
	struct USoundMix* WoundedSoundMix; // 0x1cc0(0x08)
	struct USoundMix* BleedingSoundMix; // 0x1cc8(0x08)
	struct USoundBase* WaterFeetBottomEnterSound; // 0x1cd0(0x08)
	struct USoundBase* WaterAboveHipEnterSound; // 0x1cd8(0x08)
	struct USoundBase* WaterJumpSound; // 0x1ce0(0x08)
	struct UAudioComponent* WaterAC; // 0x1ce8(0x08)
	struct UAudioComponent* DeepWaterAC; // 0x1cf0(0x08)
	enum class ESQListenerType ListenerType; // 0x1cf8(0x01)
	char pad_1CF9[0x7]; // 0x1cf9(0x07)
	struct UCurveLinearColor* HealthBasedFilterGainCurve; // 0x1d00(0x08)
	char bUseHealthBasedFilterGainCurveForWoundedSoundMix : 1; // 0x1d08(0x01)
	char bUseHealthBasedFilterGainCurveForBleedingSoundMix : 1; // 0x1d08(0x01)
	char pad_1D08_2 : 6; // 0x1d08(0x01)
	char pad_1D09[0x7]; // 0x1d09(0x07)
	struct UCurveFloat* HeartbeatVolumeCurve; // 0x1d10(0x08)
	struct USoundBase* HeartbeatSound; // 0x1d18(0x08)
	struct USoundBase* HeartbeatIncapSound; // 0x1d20(0x08)
	struct USoundBase* DefaultLandedSound; // 0x1d28(0x08)
	struct USoundBase* HitSound; // 0x1d30(0x08)
	struct USoundBase* FirstPersonHitSound; // 0x1d38(0x08)
	struct USoundBase* IncapSound; // 0x1d40(0x08)
	struct TArray<struct FSQBoneHitSound> BoneHitSounds; // 0x1d48(0x10)
	float IncapSoundOccurrencePercentage; // 0x1d58(0x04)
	float WoundedSoundMixDelaySeconds; // 0x1d5c(0x04)
	char bPlayIncapSound : 1; // 0x1d60(0x01)
	char pad_1D60_1 : 7; // 0x1d60(0x01)
	char pad_1D61[0x7]; // 0x1d61(0x07)
	struct USoundBase* DeathSound; // 0x1d68(0x08)
	struct USoundBase* ClothingSound; // 0x1d70(0x08)
	struct USoundBase* EquipmentSound; // 0x1d78(0x08)
	struct USoundBase* ResupplyCrateSound; // 0x1d80(0x08)
	float DeathSoundOccurrencePercentage; // 0x1d88(0x04)
	char bPlayDeathSound : 1; // 0x1d8c(0x01)
	char pad_1D8C_1 : 7; // 0x1d8c(0x01)
	char pad_1D8D[0x3]; // 0x1d8d(0x03)
	struct UAudioComponent* FoleyAC; // 0x1d90(0x08)
	struct UAudioComponent* HeartbeatAC; // 0x1d98(0x08)
	struct UAudioComponent* HeartbeatIncapAC; // 0x1da0(0x08)
	struct USQPhysicalMaterialSoldiersEffects* PhysMatEffectsClass; // 0x1da8(0x08)
	char bPerfToggleMultiCastLean : 1; // 0x1db0(0x01)
	char pad_1DB0_1 : 7; // 0x1db0(0x01)
	char pad_1DB1[0x7]; // 0x1db1(0x07)
	struct FTimerHandle DelayedUnposessTimer; // 0x1db8(0x08)
	struct UPhysicsHandleComponent* DraggingHandle; // 0x1dc0(0x08)
	struct FSQDraggingData DraggingData; // 0x1dc8(0x10)
	float DraggingDistanceMultiplier; // 0x1dd8(0x04)
	char pad_1DDC[0x4]; // 0x1ddc(0x04)
	struct FTimerHandle StartDraggingTimerHandle; // 0x1de0(0x08)
	float StartDraggingDelay; // 0x1de8(0x04)
	char pad_1DEC[0x4]; // 0x1dec(0x04)
	struct TArray<struct FSQDraggableBone> DraggableBones; // 0x1df0(0x10)
	struct USQSoldierRagdollComponent* RagdollComponent; // 0x1e00(0x08)
	struct USQBuffManager* Buffs; // 0x1e08(0x08)
	struct FScriptMulticastDelegate OnWoundEvent; // 0x1e10(0x10)
	char pad_1E20[0x8]; // 0x1e20(0x08)
	struct FScriptMulticastDelegate OnDeathEvent; // 0x1e28(0x10)
	char bBodyDraggingActive : 1; // 0x1e38(0x01)
	char pad_1E38_1 : 7; // 0x1e38(0x01)
	char pad_1E39[0x7]; // 0x1e39(0x07)
	struct USQSoldierStaticInfo* SoldierStaticInfo; // 0x1e40(0x08)
	float DefaultDrowningHeight; // 0x1e48(0x04)
	float CrouchedDrowningHeight; // 0x1e4c(0x04)
	float ProneDrowningHeight; // 0x1e50(0x04)
	struct FSQUnderwaterBoneData UnderwaterBoneData; // 0x1e54(0x28)
	char pad_1E7C[0x4]; // 0x1e7c(0x04)
	struct UParticleSystem* WaterFeetEnterEffect; // 0x1e80(0x08)
	struct UParticleSystem* WaterDeepEnterEffect; // 0x1e88(0x08)
	struct USQBaseWaterComponent* BaseWaterComponent; // 0x1e90(0x08)
	struct USQSoldierWaterDamageComponent* WaterDamageComponent; // 0x1e98(0x08)
	struct USQWaterPointTestComponent* WaterPointTestComponent; // 0x1ea0(0x08)
	char pad_1EA8[0x10]; // 0x1ea8(0x10)
	struct USQPawnInventoryComponent* InventoryComponent; // 0x1eb8(0x08)
	char pad_1EC0[0x8]; // 0x1ec0(0x08)
	struct USoundMix* CurrentSoundMix; // 0x1ec8(0x08)
	struct TArray<struct FVector_NetQuantize> ZeroBasedBoneLocs; // 0x1ed0(0x10)

	bool Wound(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQSoldier.Wound // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8e3450
	void UserSettingsChanged(struct USQGameUserSettings* Settings); // Function Squad.SQSoldier.UserSettingsChanged // (Final|Native|Public) // @ game+0x8e33d0
	void UpdatePatches(); // Function Squad.SQSoldier.UpdatePatches // (Final|Native|Public) // @ game+0x8e33b0
	void UpdateFirstPersonVisibility(); // Function Squad.SQSoldier.UpdateFirstPersonVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x8e3390
	void UnProne(); // Function Squad.SQSoldier.UnProne // (Native|Public|BlueprintCallable) // @ game+0x864990
	bool SwitchWeapon(int NewWeaponSlotla); // Function Squad.SQSoldier.SwitchWeapon // (Native|Public|BlueprintCallable) // @ game+0x8e3220
	void SwitchedSeat(struct USQVehicleSeatComponent* PreviousSeat, struct USQVehicleSeatComponent* NewSeat); // Function Squad.SQSoldier.SwitchedSeat // (Native|Event|Public|BlueprintEvent) // @ game+0x8e32c0
	void Suicide(); // Function Squad.SQSoldier.Suicide // (Native|Public|BlueprintCallable) // @ game+0x8e3200
	void StopBodyDragging(); // Function Squad.SQSoldier.StopBodyDragging // (Native|Public|BlueprintCallable) // @ game+0x8e31e0
	void StopBleeding(); // Function Squad.SQSoldier.StopBleeding // (Final|Native|Public|BlueprintCallable) // @ game+0x8e31c0
	bool StartBodyDragging(); // Function Squad.SQSoldier.StartBodyDragging // (Native|Public|BlueprintCallable) // @ game+0x881b60
	void StartAimDownSights(); // Function Squad.SQSoldier.StartAimDownSights // (Native|Public) // @ game+0x8e31a0
	void SetSeatState(enum class ESQSoldierSeatState SoldierSeatState); // Function Squad.SQSoldier.SetSeatState // (Native|Public|BlueprintCallable) // @ game+0x8e3120
	void SetFirstPersonVisibility(bool bIsFirstPersonVisible); // Function Squad.SQSoldier.SetFirstPersonVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x8e3090
	void ServerVehicleCollision(struct ASQVehicle* Vehicle, bool bShouldKill); // Function Squad.SQSoldier.ServerVehicleCollision // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2f90
	void ServerPickupAmmoBag(struct ASQDeployableAmmoBag* ammobag); // Function Squad.SQSoldier.ServerPickupAmmoBag // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8e2ed0
	void ServerEndInteract(); // Function Squad.SQSoldier.ServerEndInteract // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2e80
	void ServerDragBody(bool bDrag, struct ASQSoldier* SoldierToDrag, struct FName BoneName); // Function Squad.SQSoldier.ServerDragBody // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2d40
	void ServerDisableSpawnProtection(); // Function Squad.SQSoldier.ServerDisableSpawnProtection // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2cf0
	void ServerDeployableInteractable(struct ASQDeployableInteractable* Deployable); // Function Squad.SQSoldier.ServerDeployableInteractable // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8e2c30
	void ServerDebugTogglePostRecovery(bool Value); // Function Squad.SQSoldier.ServerDebugTogglePostRecovery // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2b70
	void ServerDebugToggleGodMode(); // Function Squad.SQSoldier.ServerDebugToggleGodMode // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2b20
	void ServerDebugStopBleeding(); // Function Squad.SQSoldier.ServerDebugStopBleeding // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2ad0
	void ServerDebugSetHealth(float Value); // Function Squad.SQSoldier.ServerDebugSetHealth // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2a20
	void ServerDebugRevive(); // Function Squad.SQSoldier.ServerDebugRevive // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e29d0
	void ServerDebugRearm(); // Function Squad.SQSoldier.ServerDebugRearm // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2980
	void ServerDebugRagdoll(); // Function Squad.SQSoldier.ServerDebugRagdoll // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2930
	void ServerDebugFullHealth(); // Function Squad.SQSoldier.ServerDebugFullHealth // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e28e0
	void ServerDebugAddBuildSupply(int Amount); // Function Squad.SQSoldier.ServerDebugAddBuildSupply // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e2820
	void ServerBeginInteract(); // Function Squad.SQSoldier.ServerBeginInteract // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8e27d0
	void ReviveServerOnly(); // Function Squad.SQSoldier.ReviveServerOnly // (Native|Public|BlueprintCallable) // @ game+0x8e27b0
	void Prone(); // Function Squad.SQSoldier.Prone // (Native|Public|BlueprintCallable) // @ game+0x8e2790
	void PlayFootStep(struct FName SocketName, struct FName OpposingKneeSocketName, float MaxDistanceInMeters); // Function Squad.SQSoldier.PlayFootStep // (Final|Native|Public|BlueprintCallable) // @ game+0x8e2680
	void PlayEquipmentSound(float MaxDistanceInMeters); // Function Squad.SQSoldier.PlayEquipmentSound // (Final|Native|Public|BlueprintCallable) // @ game+0x8e2600
	void PlayClothingSound(float MaxDistanceInMeters); // Function Squad.SQSoldier.PlayClothingSound // (Final|Native|Public|BlueprintCallable) // @ game+0x8e2580
	void OnSnapZoneOverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQSoldier.OnSnapZoneOverlapEnd // (Native|Public) // @ game+0x8e2440
	void OnSnapZoneOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQSoldier.OnSnapZoneOverlapBegin // (Native|Public|HasOutParms) // @ game+0x8e2250
	void OnRep_SoldierSkinIndex(); // Function Squad.SQSoldier.OnRep_SoldierSkinIndex // (Final|Native|Public) // @ game+0x8e2230
	void OnRep_LastTakeHitInfo(); // Function Squad.SQSoldier.OnRep_LastTakeHitInfo // (Native|Protected) // @ game+0x8e2210
	void OnRep_IsWounded(); // Function Squad.SQSoldier.OnRep_IsWounded // (Native|Public) // @ game+0x8e21f0
	void OnRep_IsDying(); // Function Squad.SQSoldier.OnRep_IsDying // (Native|Public) // @ game+0x8e21d0
	void OnRep_IsBleeding(); // Function Squad.SQSoldier.OnRep_IsBleeding // (Native|Public) // @ game+0x8e21b0
	void OnRep_Health(float OldHealth); // Function Squad.SQSoldier.OnRep_Health // (Native|Public) // @ game+0x8e2130
	void OnRep_CurrentSeat(struct USQVehicleSeatComponent* PreviousSeat); // Function Squad.SQSoldier.OnRep_CurrentSeat // (Native|Public) // @ game+0x8e20a0
	void OnRagdollHit(struct UPrimitiveComponent* HitComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQSoldier.OnRagdollHit // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x8e1ef0
	void OnPrevItem(); // Function Squad.SQSoldier.OnPrevItem // (Native|Public|BlueprintCallable) // @ game+0x8e1ed0
	void OnNextItem(); // Function Squad.SQSoldier.OnNextItem // (Native|Public|BlueprintCallable) // @ game+0x8e1eb0
	void OnHipHeightCollideWithWaterLevel(float ImmersionDepth); // Function Squad.SQSoldier.OnHipHeightCollideWithWaterLevel // (Final|Native|Public) // @ game+0x8e1e30
	void OnFeetBottomCollideWithWaterLevel(float ImmersionDepth); // Function Squad.SQSoldier.OnFeetBottomCollideWithWaterLevel // (Final|Native|Public) // @ game+0x8e1db0
	void MulticastToggleGodMode(); // Function Squad.SQSoldier.MulticastToggleGodMode // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x8e1d90
	void MulticastSetDragging(bool bDrag, struct ASQSoldier* SoldierToDrag, struct FName BoneName); // Function Squad.SQSoldier.MulticastSetDragging // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x8e1c80
	void MulticastLean(char NewLeanDirection); // Function Squad.SQSoldier.MulticastLean // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x8e1c00
	void MulticastChangeRootComponent(bool bSetMeshAsRoot); // Function Squad.SQSoldier.MulticastChangeRootComponent // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x8e1b70
	void LeftVehicle(struct USQVehicleSeatComponent* PreviousSeat); // Function Squad.SQSoldier.LeftVehicle // (Native|Event|Public|BlueprintEvent) // @ game+0x8e1ae0
	void LeftSeat(struct USQVehicleSeatComponent* PreviousSeat, bool bSwitchedSeats, bool bLeftVehicle); // Function Squad.SQSoldier.LeftSeat // (Native|Event|Public|BlueprintEvent) // @ game+0x8e19d0
	bool IsSprinting(); // Function Squad.SQSoldier.IsSprinting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e19a0
	bool IsInVehicle(); // Function Squad.SQSoldier.IsInVehicle // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1940
	bool IsInteracting(); // Function Squad.SQSoldier.IsInteracting // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1970
	bool IsImmersedPastKneeHeight(); // Function Squad.SQSoldier.IsImmersedPastKneeHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1910
	bool IsImmersedPastHipHeight(); // Function Squad.SQSoldier.IsImmersedPastHipHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e18e0
	bool IsImmersedPastHeadHeight(); // Function Squad.SQSoldier.IsImmersedPastHeadHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e18b0
	bool IsImmersedPastFootHeight(); // Function Squad.SQSoldier.IsImmersedPastFootHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1880
	bool IsImmersedPastChestHeight(); // Function Squad.SQSoldier.IsImmersedPastChestHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1850
	bool IsFirstPersonViewTarget(); // Function Squad.SQSoldier.IsFirstPersonViewTarget // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1810
	bool IsDragging(); // Function Squad.SQSoldier.IsDragging // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e17e0
	bool IsAlive(); // Function Squad.SQSoldier.IsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e17a0
	void InitiateDragging(struct ASQSoldier* SoldierToDrag, int BoneIndex); // Function Squad.SQSoldier.InitiateDragging // (Final|Native|Public|BlueprintCallable) // @ game+0x8e16e0
	void Heal(float AmountHealed); // Function Squad.SQSoldier.Heal // (Native|Public|BlueprintCallable) // @ game+0x8e1660
	struct ASQTeamState* GetTeamState(); // Function Squad.SQSoldier.GetTeamState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1630
	int GetTeam(); // Function Squad.SQSoldier.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1600
	enum class ESQSoldierSeatState GetSeatState(); // Function Squad.SQSoldier.GetSeatState // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8e15e0
	struct ASQEquipableItem* GetPendingWeapon(); // Function Squad.SQSoldier.GetPendingWeapon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e15a0
	struct ASQForwardBase* GetNearestFOB(bool bIsFriendly); // Function Squad.SQSoldier.GetNearestFOB // (Final|Native|Public|BlueprintCallable) // @ game+0x8e1500
	float GetMaxHealth(); // Function Squad.SQSoldier.GetMaxHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e14d0
	float GetKneeHeight(struct FVector TestLocation); // Function Squad.SQSoldier.GetKneeHeight // (Final|Native|Public|HasDefaults|Const) // @ game+0x8e1430
	struct USQPawnInventoryComponent* GetInventory(); // Function Squad.SQSoldier.GetInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e13f0
	float GetHipHeight(struct FVector TestLocation); // Function Squad.SQSoldier.GetHipHeight // (Final|Native|Public|HasDefaults|Const) // @ game+0x8e1350
	float GetHeadHeight(struct FVector TestLocation); // Function Squad.SQSoldier.GetHeadHeight // (Final|Native|Public|HasDefaults|Const) // @ game+0x8e12b0
	float GetFootHeight(struct FVector TestLocation); // Function Squad.SQSoldier.GetFootHeight // (Final|Native|Public|HasDefaults|Const) // @ game+0x8e1210
	bool GetFirstPersonVisibility(); // Function Squad.SQSoldier.GetFirstPersonVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e11e0
	float GetDrowningHeight(); // Function Squad.SQSoldier.GetDrowningHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x8e11b0
	float GetDamageForFallingAtSpeed(float InFallSpeed, float InBaseHealth); // Function Squad.SQSoldier.GetDamageForFallingAtSpeed // (Final|Native|Public|BlueprintCallable) // @ game+0x8e10e0
	struct ASQEquipableItem* GetCurrentWeapon(); // Function Squad.SQSoldier.GetCurrentWeapon // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e10a0
	struct ASQVehicle* GetCurrentVehicle(); // Function Squad.SQSoldier.GetCurrentVehicle // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1070
	struct FRotator GetCurrentSeatWeaponRotation(); // Function Squad.SQSoldier.GetCurrentSeatWeaponRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1030
	struct ASQVehicleSeat* GetCurrentSeatPawn(); // Function Squad.SQSoldier.GetCurrentSeatPawn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e1000
	struct USQVehicleSeatComponent* GetCurrentSeat(); // Function Squad.SQSoldier.GetCurrentSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e0fd0
	float GetCurrentHealthPercentage(); // Function Squad.SQSoldier.GetCurrentHealthPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e0f80
	float GetChestHeight(struct FVector TestLocation); // Function Squad.SQSoldier.GetChestHeight // (Final|Native|Public|HasDefaults|Const) // @ game+0x8e0ee0
	void EnteredVehicle(struct USQVehicleSeatComponent* NewSeat); // Function Squad.SQSoldier.EnteredVehicle // (Native|Event|Public|BlueprintEvent) // @ game+0x8e0e50
	void EnteredSeat(struct USQVehicleSeatComponent* PreviousSeat, struct USQVehicleSeatComponent* NewSeat, bool bSwitchedSeats, bool bEnteredVehicle); // Function Squad.SQSoldier.EnteredSeat // (Native|Event|Public|BlueprintEvent) // @ game+0x8e0d00
	void EndInteract(); // Function Squad.SQSoldier.EndInteract // (Native|Public|BlueprintCallable) // @ game+0x8e0ce0
	void EndFireWeapon(); // Function Squad.SQSoldier.EndFireWeapon // (Native|Public|BlueprintCallable) // @ game+0x8e0cc0
	void EndAltFireWeapon(); // Function Squad.SQSoldier.EndAltFireWeapon // (Native|Public|BlueprintCallable) // @ game+0x8e0ca0
	void EndAimDownSights(); // Function Squad.SQSoldier.EndAimDownSights // (Native|Public) // @ game+0x8e0c80
	void DisableSpawnProtection(); // Function Squad.SQSoldier.DisableSpawnProtection // (Native|Public|BlueprintCallable) // @ game+0x8e0c60
	bool Die(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQSoldier.Die // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8e0ac0
	void DebugTogglePostRecovery(bool Value); // Function Squad.SQSoldier.DebugTogglePostRecovery // (Final|Exec|Native|Public) // @ game+0x8e0a30
	void DebugToggleOriginRebaseTest(bool Value); // Function Squad.SQSoldier.DebugToggleOriginRebaseTest // (Final|Exec|Native|Public) // @ game+0x8e09a0
	void DebugToggleGodMode(); // Function Squad.SQSoldier.DebugToggleGodMode // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8e0980
	void DebugStopBleeding(); // Function Squad.SQSoldier.DebugStopBleeding // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8e0960
	void DebugSetHealth(float Value); // Function Squad.SQSoldier.DebugSetHealth // (Final|Exec|Native|Public) // @ game+0x8e08e0
	void DebugRevive(); // Function Squad.SQSoldier.DebugRevive // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8e08c0
	void DebugRearm(); // Function Squad.SQSoldier.DebugRearm // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8e08a0
	void DebugRagdoll(); // Function Squad.SQSoldier.DebugRagdoll // (Final|Exec|Native|Public) // @ game+0x8e0880
	void DebugFullHealth(); // Function Squad.SQSoldier.DebugFullHealth // (Final|Exec|Native|Public) // @ game+0x8e0860
	void DebugAddBuildSupply(int Amount); // Function Squad.SQSoldier.DebugAddBuildSupply // (Final|Exec|Native|Public|BlueprintCallable) // @ game+0x8e07e0
	void ClearSeatState(); // Function Squad.SQSoldier.ClearSeatState // (Native|Public|BlueprintCallable) // @ game+0x8e07c0
	void ChangeSoundMix(struct USoundMix* NewSoundMix); // Function Squad.SQSoldier.ChangeSoundMix // (Final|Native|Public|BlueprintCallable) // @ game+0x8e0740
	bool CanStartWithMaxAmmo(); // Function Squad.SQSoldier.CanStartWithMaxAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e0710
	void BPWoundedDamageTaken(float damage); // Function Squad.SQSoldier.BPWoundedDamageTaken // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPWound(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQSoldier.BPWound // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void BPOnSuppression(struct FVector& ClosestPoint, float ClosenessRatio, bool bAppliedSuppression); // Function Squad.SQSoldier.BPOnSuppression // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x12b8b50
	void BPOnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Squad.SQSoldier.BPOnStartProne // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnSnapZoneOverlapEnd(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQSoldier.BPOnSnapZoneOverlapEnd // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnSnapZoneOverlapBegin(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQSoldier.BPOnSnapZoneOverlapBegin // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void BPOnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function Squad.SQSoldier.BPOnEndProne // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct FVector2D BPGetYawViewLimits(struct FVector2D& YawViewLimits); // Function Squad.SQSoldier.BPGetYawViewLimits // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // @ game+0x8e05f0
	void BPDie(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQSoldier.BPDie // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void BPBleedingDamageTaken(float damage); // Function Squad.SQSoldier.BPBleedingDamageTaken // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintUpdateSkin(); // Function Squad.SQSoldier.BlueprintUpdateSkin // (Native|Event|Public|BlueprintEvent) // @ game+0x8e06f0
	void BlueprintUpdateFirstPersonVisibility(bool bIsFirstPersonVisible); // Function Squad.SQSoldier.BlueprintUpdateFirstPersonVisibility // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintCalcCamera(float DeltaTime, struct FVector InLocation, struct FRotator InRotation, float InFOV, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // Function Squad.SQSoldier.BlueprintCalcCamera // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x12b8b50
	void BeginInteract(); // Function Squad.SQSoldier.BeginInteract // (Native|Public|BlueprintCallable) // @ game+0x8e06d0
	void BeginFireWeapon(); // Function Squad.SQSoldier.BeginFireWeapon // (Native|Public|BlueprintCallable) // @ game+0x8e06b0
	void BeginAltFireWeapon(); // Function Squad.SQSoldier.BeginAltFireWeapon // (Native|Public|BlueprintCallable) // @ game+0x8e0690
	bool AttemptToRearmWeapons(struct TScriptInterface<Class> RearmSource, struct TArray<struct FSQRearmWeaponRequest>& RearmRequest); // Function Squad.SQSoldier.AttemptToRearmWeapons // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8e04d0
	bool AttemptSuppression(struct FVector& SuppressionStart, struct FVector& SuppressionEnd, struct AActor* ProjectileInstigator, struct USQSuppressionInfo* SuppressionInfoClass, struct FVector& OutClosestPoint, bool& bOutApplySuppression); // Function Squad.SQSoldier.AttemptSuppression // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8e02a0
};

// Class Squad.SQBot
// Size: 0x1ef0 (Inherited: 0x1ee0)
struct ASQBot : ASQSoldier {
	struct UBehaviorTree* BotBehavior; // 0x1ee0(0x08)
	char pad_1EE8[0x8]; // 0x1ee8(0x08)
};

// Class Squad.SQBotComponent
// Size: 0x100 (Inherited: 0xd8)
struct USQBotComponent : UActorComponent {
	struct ASQSoldierNew* TargetEnemy; // 0xd8(0x08)
	struct ASQSoldierNew* OwnerSoldier; // 0xe0(0x08)
	char pad_E8[0x4]; // 0xe8(0x04)
	float TargetingRange; // 0xec(0x04)
	float CheckAtFloorDistance; // 0xf0(0x04)
	float RandomHeadingYawRange; // 0xf4(0x04)
	float RandomHeadingPitchRange; // 0xf8(0x04)
	float TargetingMaxPitchDelta; // 0xfc(0x04)
};

// Class Squad.SQBoundaryListener
// Size: 0x140 (Inherited: 0xd8)
struct USQBoundaryListener : UActorComponent {
	bool bRegisterToAllBoundaries; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct ASQBoundary*> TargetBoundaryClasses; // 0xe0(0x10)
	struct FScriptMulticastDelegate OnEnterBoundarySignal; // 0xf0(0x10)
	struct FScriptMulticastDelegate OnExitBoundarySignal; // 0x100(0x10)
	struct AActor* OverrideTargetActor; // 0x110(0x08)
	struct TArray<struct ASQBoundary*> Boundaries; // 0x118(0x10)
	char pad_128[0x18]; // 0x128(0x18)

	void UnregisterAllBoundaries(); // Function Squad.SQBoundaryListener.UnregisterAllBoundaries // (Final|Native|Public|BlueprintCallable) // @ game+0x845110
	bool ShouldRegisterToBoundary(struct ASQBoundary* Boundary); // Function Squad.SQBoundaryListener.ShouldRegisterToBoundary // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x844fb0
	void OnExitBoundary(struct ASQBoundary* Boundary); // Function Squad.SQBoundaryListener.OnExitBoundary // (Native|Event|Public|BlueprintEvent) // @ game+0x844880
	void OnEnterBoundary(struct ASQBoundary* Boundary); // Function Squad.SQBoundaryListener.OnEnterBoundary // (Native|Event|Public|BlueprintEvent) // @ game+0x8447f0
	struct AActor* GetActor(); // Function Squad.SQBoundaryListener.GetActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x844200
};

// Class Squad.SQBoundary
// Size: 0x308 (Inherited: 0x248)
struct ASQBoundary : AActor {
	struct USplineComponent* XYBoundary; // 0x248(0x08)
	bool bXYBoundaryTangetsInwards; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	int BoundaryMaskSizeX; // 0x254(0x04)
	int BoundaryMaskSizeY; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct UTexture2D* BoundaryMask; // 0x260(0x08)
	float CeilingHeight; // 0x268(0x04)
	float FloorHeight; // 0x26c(0x04)
	float CheckDelaySeconds; // 0x270(0x04)
	bool bDefaultToInside; // 0x274(0x01)
	bool bComplexCheck; // 0x275(0x01)
	char pad_276[0x2]; // 0x276(0x02)
	struct TMap<struct USQBoundaryListener*, struct FSQBoundaryListenerData> ListenerDatas; // 0x278(0x50)
	char pad_2C8[0x28]; // 0x2c8(0x28)
	struct TArray<char> BoundaryMaskData; // 0x2f0(0x10)
	char pad_300[0x8]; // 0x300(0x08)

	bool UnregisterListener(struct USQBoundaryListener* Listener); // Function Squad.SQBoundary.UnregisterListener // (Final|Native|Public|BlueprintCallable) // @ game+0x845130
	bool RegisterListener(struct USQBoundaryListener* Listener, bool bForce); // Function Squad.SQBoundary.RegisterListener // (Final|Native|Public|BlueprintCallable) // @ game+0x844b70
	void OnListenerExitBoundary(struct USQBoundaryListener* Listener); // Function Squad.SQBoundary.OnListenerExitBoundary // (Native|Event|Public|BlueprintEvent) // @ game+0x8449c0
	void OnListenerEnterBoundary(struct USQBoundaryListener* Listener); // Function Squad.SQBoundary.OnListenerEnterBoundary // (Native|Event|Public|BlueprintEvent) // @ game+0x844930
	bool IsInside(struct FVector& Location); // Function Squad.SQBoundary.IsInside // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x844710
	void GenerateBoundaryMask(); // Function Squad.SQBoundary.GenerateBoundaryMask // (Final|Native|Public) // @ game+0x8441e0
	struct FSQBoundaryListenerData FindListenerData(struct USQBoundaryListener* Listener, bool& bOutFound); // Function Squad.SQBoundary.FindListenerData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x843f80
};

// Class Squad.SQBTDecorator_HasLoSTo
// Size: 0x90 (Inherited: 0x68)
struct USQBTDecorator_HasLoSTo : UBTDecorator {
	struct FBlackboardKeySelector EnemyKey; // 0x68(0x28)
};

// Class Squad.SQBTTask_FindPointNearEnemy
// Size: 0x98 (Inherited: 0x98)
struct USQBTTask_FindPointNearEnemy : UBTTask_BlackboardBase {
};

// Class Squad.SQBuffManager
// Size: 0x128 (Inherited: 0xd8)
struct USQBuffManager : UActorComponent {
	struct FSQBuffDesc Buffs[0x4]; // 0xd8(0x20)
	struct FScriptMulticastDelegate BuffAppliedEvent; // 0xf8(0x10)
	struct FScriptMulticastDelegate BuffRemovedEvent; // 0x108(0x10)
	struct FScriptMulticastDelegate BuffEndedEvent; // 0x118(0x10)

	void RemoveBuff(enum class ESQBuffTypes BuffTypeToRemove); // Function Squad.SQBuffManager.RemoveBuff // (Final|Native|Public|BlueprintCallable) // @ game+0x844c30
	void PulseBuff(enum class ESQBuffTypes BuffTypeToApply, float Duration); // Function Squad.SQBuffManager.PulseBuff // (Final|Native|Public|BlueprintCallable) // @ game+0x844ab0
	bool HasBuff(enum class ESQBuffTypes BuffTypeToCheck); // Function Squad.SQBuffManager.HasBuff // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x844680
	void ApplyBuff(enum class ESQBuffTypes BuffTypeToApply, float Duration); // Function Squad.SQBuffManager.ApplyBuff // (Final|Native|Public|BlueprintCallable) // @ game+0x843db0
};

// Class Squad.SQDamageType
// Size: 0x48 (Inherited: 0x40)
struct USQDamageType : UDamageType {
	bool bCanCauseBleeding; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// Class Squad.SQBurningDamage
// Size: 0x48 (Inherited: 0x48)
struct USQBurningDamage : USQDamageType {
};

// Class Squad.SQCameraMan
// Size: 0x6b0 (Inherited: 0x660)
struct ASQCameraMan : ACharacter {
	enum class ESQListenerType ListenerType; // 0x660(0x01)
	char pad_661[0x3]; // 0x661(0x03)
	float BaseTurnRate; // 0x664(0x04)
	float BaseLookUpRate; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct USpringArmComponent* SpringArm; // 0x670(0x08)
	struct UCameraComponent* FirstPersonCameraComponent; // 0x678(0x08)
	struct UTexture* CameraManHUDIconTexture; // 0x680(0x08)
	bool bIsTryingToGainAltitude; // 0x688(0x01)
	bool bIsTryingToLoseAltitude; // 0x689(0x01)
	char pad_68A[0x16]; // 0x68a(0x16)
	struct USQCoreStateComponent* StateObject; // 0x6a0(0x08)
	char pad_6A8[0x8]; // 0x6a8(0x08)

	void ServerSetFlySpeedTarget(float InFlySpeedTarget); // Function Squad.SQCameraMan.ServerSetFlySpeedTarget // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x844d60
	void ServerSetDecelerationTarget(float InDecelerationTarget); // Function Squad.SQCameraMan.ServerSetDecelerationTarget // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x844cb0
	void DrawHUD(struct ASQHUD* SquadHUD, struct UCanvas* Canvas); // Function Squad.SQCameraMan.DrawHUD // (Native|Event|Public|BlueprintEvent) // @ game+0x843eb0
};

// Class Squad.SQGraphNodeComponent
// Size: 0x150 (Inherited: 0xd8)
struct USQGraphNodeComponent : UActorComponent {
	struct URouteSelectorPredicate* RouteSelectorPredicate; // 0xd8(0x08)
	struct URouteSelectorPredicate* RouteSelectorVisualizerPredicate; // 0xe0(0x08)
	struct URouteCombinerPredicate* RouteCombinerPredicate; // 0xe8(0x08)
	struct TSet<struct USQGraphNodeComponent*> DesignOutgoingLinks; // 0xf0(0x50)
	struct TArray<struct USQGraphNodeComponent*> Neighbors; // 0x140(0x10)

	void RemoveNeighbor(struct USQGraphNodeComponent* Neighbor); // Function Squad.SQGraphNodeComponent.RemoveNeighbor // (Final|Native|Public|BlueprintCallable) // @ game+0x881fb0
	void OnNeighborRemoved(struct USQGraphNodeComponent* Neighbor); // Function Squad.SQGraphNodeComponent.OnNeighborRemoved // (Native|Event|Protected|BlueprintEvent) // @ game+0x844880
	void OnNeighborAdded(struct USQGraphNodeComponent* Neighbor); // Function Squad.SQGraphNodeComponent.OnNeighborAdded // (Native|Event|Protected|BlueprintEvent) // @ game+0x881bf0
	void GetNeighbors(struct TArray<struct USQGraphNodeComponent*>& InOutNodes); // Function Squad.SQGraphNodeComponent.GetNeighbors // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x881a60
	void AddNeighbor(struct USQGraphNodeComponent* Neighbor); // Function Squad.SQGraphNodeComponent.AddNeighbor // (Final|Native|Public|BlueprintCallable) // @ game+0x881080
};

// Class Squad.SQCaptureZoneComponent
// Size: 0x248 (Inherited: 0x150)
struct USQCaptureZoneComponent : USQGraphNodeComponent {
	char InitialTeam; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct FText FlagName; // 0x158(0x18)
	char CapturingTeam; // 0x170(0x01)
	char OwningTeam; // 0x171(0x01)
	char LastOwningTeam; // 0x172(0x01)
	bool Uncappable; // 0x173(0x01)
	char pad_174[0x4]; // 0x174(0x04)
	struct TMap<struct ASQGameMode*, struct FCaptureZoneStats> CaptureZoneValues; // 0x178(0x50)
	struct FCaptureZoneStats DefaultCaptureZoneValues; // 0x1c8(0x18)
	float BonusCaptureMultiplier; // 0x1e0(0x04)
	float PlayerAdvantage; // 0x1e4(0x04)
	float CapturePercentDelta; // 0x1e8(0x04)
	float CapturePercent; // 0x1ec(0x04)
	int CapturePercentDirection; // 0x1f0(0x04)
	bool bIsLocked; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	struct FScriptMulticastDelegate CaptureStateChangeEvent; // 0x1f8(0x10)
	struct USQCoreStateComponent* StateObject; // 0x208(0x08)
	char pad_210[0x28]; // 0x210(0x28)
	uint32 TeamCapturabilities; // 0x238(0x04)
	uint32 TeamKnowledge; // 0x23c(0x04)
	char pad_240[0x8]; // 0x240(0x08)

	void UpdateTeamKnowledge(struct TArray<struct USQCaptureZoneComponent*>& TeamOneDir, struct TArray<struct USQCaptureZoneComponent*>& TeamTwoDir); // Function Squad.SQCaptureZoneComponent.UpdateTeamKnowledge // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8453e0
	void UpdateLockState(); // Function Squad.SQCaptureZoneComponent.UpdateLockState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8453c0
	void UpdateCaptureState(struct USQCaptureZoneComponent* CaptureZone, char Team); // Function Squad.SQCaptureZoneComponent.UpdateCaptureState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8452f0
	void UpdateCanCaptureState(struct TArray<struct USQCaptureZoneComponent*>& TeamOneDir, struct TArray<struct USQCaptureZoneComponent*>& TeamTwoDir); // Function Squad.SQCaptureZoneComponent.UpdateCanCaptureState // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8451c0
	void UnlockCaptureZone(); // Function Squad.SQCaptureZoneComponent.UnlockCaptureZone // (Final|Native|Public|BlueprintCallable) // @ game+0x8450f0
	bool SetTeamHaveKnowledge(char Team, bool bHaveKnowledge); // Function Squad.SQCaptureZoneComponent.SetTeamHaveKnowledge // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x844ee0
	bool SetTeamCanCapture(char Team, bool bCanCap); // Function Squad.SQCaptureZoneComponent.SetTeamCanCapture // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x844e10
	void OnRep_Uncappable(); // Function Squad.SQCaptureZoneComponent.OnRep_Uncappable // (Final|Native|Private) // @ game+0x844910
	void OnRep_TeamKnowledge(); // Function Squad.SQCaptureZoneComponent.OnRep_TeamKnowledge // (Final|Native|Private) // @ game+0x844a90
	void OnRep_TeamCapturabilities(); // Function Squad.SQCaptureZoneComponent.OnRep_TeamCapturabilities // (Final|Native|Private) // @ game+0x844a70
	void OnRep_OwningTeam(); // Function Squad.SQCaptureZoneComponent.OnRep_OwningTeam // (Final|Native|Private) // @ game+0x844a50
	void OnRep_CapturingTeam(); // Function Squad.SQCaptureZoneComponent.OnRep_CapturingTeam // (Final|Native|Private) // @ game+0x844910
	void OnRep_CapturePercent(); // Function Squad.SQCaptureZoneComponent.OnRep_CapturePercent // (Final|Native|Private) // @ game+0x844910
	void OnIndexedTeamStatesReplicated(); // Function Squad.SQCaptureZoneComponent.OnIndexedTeamStatesReplicated // (Final|Native|Private) // @ game+0x844910
	void Neutralize(); // Function Squad.SQCaptureZoneComponent.Neutralize // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8447d0
	void LockCaptureZone(); // Function Squad.SQCaptureZoneComponent.LockCaptureZone // (Final|Native|Public|BlueprintCallable) // @ game+0x8447b0
	bool GetTeamHaveKnowledge(char Team); // Function Squad.SQCaptureZoneComponent.GetTeamHaveKnowledge // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8445f0
	void GetPlayersInCaptureZone(struct TArray<struct AActor*>& TeamOne, struct TArray<struct AActor*>& TeamTwo); // Function Squad.SQCaptureZoneComponent.GetPlayersInCaptureZone // (Native|Public|HasOutParms) // @ game+0x8444c0
	bool GetCurrentModeCaptureZoneStats(struct FCaptureZoneStats& OutputCaptureZoneStats); // Function Squad.SQCaptureZoneComponent.GetCurrentModeCaptureZoneStats // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x844420
	void GetCapturezoneDirections(struct TArray<struct USQCaptureZoneComponent*>& TeamOneDir, struct TArray<struct USQCaptureZoneComponent*>& TeamTwoDir); // Function Squad.SQCaptureZoneComponent.GetCapturezoneDirections // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8442c0
	bool GetCanTeamCapture(char Team); // Function Squad.SQCaptureZoneComponent.GetCanTeamCapture // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x844230
	void FullyCap(char ForTeam); // Function Squad.SQCaptureZoneComponent.FullyCap // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x844160
	struct USQGraphNodeComponent* FindMainBase(char Team, struct TArray<struct USQGraphNodeComponent*>& VisitedNodes); // Function Squad.SQCaptureZoneComponent.FindMainBase // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x844060
	void CaptureTick(); // Function Squad.SQCaptureZoneComponent.CaptureTick // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x843e70
};

// Class Squad.SQCaptureZoneInvasionComponent
// Size: 0x250 (Inherited: 0x248)
struct USQCaptureZoneInvasionComponent : USQCaptureZoneComponent {
	int TeamToLockFor; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class Squad.SQCaptureZoneResourceComponent
// Size: 0xd8 (Inherited: 0xd8)
struct USQCaptureZoneResourceComponent : UActorComponent {
};

// Class Squad.SQCaptureZoneTCComponent
// Size: 0x248 (Inherited: 0x248)
struct USQCaptureZoneTCComponent : USQCaptureZoneComponent {
};

// Class Squad.SQChatWidgetStyle
// Size: 0x930 (Inherited: 0x30)
struct USQChatWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQChatStyle ChatStyle; // 0x30(0x900)
};

// Class Squad.SQCheatManager
// Size: 0x78 (Inherited: 0x78)
struct USQCheatManager : UCheatManager {

	void SqDumpPakContents(struct FString OutputFilename); // Function Squad.SQCheatManager.SqDumpPakContents // (Final|Exec|Native|Private) // @ game+0x845050
};

// Class Squad.SQChunkSettings
// Size: 0x88 (Inherited: 0x38)
struct USQChunkSettings : UDeveloperSettings {
	struct TArray<struct USQLevel*> LevelsToCook; // 0x38(0x10)
	struct TArray<struct USQLayer*> LayersToCook; // 0x48(0x10)
	struct TArray<struct USQFaction*> FactionsToCook; // 0x58(0x10)
	struct TArray<struct USQFactionSetup*> FactionSetupsToCook; // 0x68(0x10)
	struct TArray<struct FSQChunkRule> ChunkRules; // 0x78(0x10)

	struct USQChunkSettings* GetChunkSettings(); // Function Squad.SQChunkSettings.GetChunkSettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8443f0
	void CollectLayersFromLevels(); // Function Squad.SQChunkSettings.CollectLayersFromLevels // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
	void CollectFactionSetupsFromFactions(); // Function Squad.SQChunkSettings.CollectFactionSetupsFromFactions // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
};

// Class Squad.SQClientsideWeaponSettings
// Size: 0x60 (Inherited: 0x38)
struct USQClientsideWeaponSettings : UDeveloperSettings {
	float MaxVerificationAngle; // 0x38(0x04)
	float ShotTimeout; // 0x3c(0x04)
	float SlowProjectileTimeout; // 0x40(0x04)
	bool bNotifyPlayerOnShotFail; // 0x44(0x01)
	bool bNotifyAdminOnShotFail; // 0x45(0x01)
	bool bNotifyPlayerOnHitFail; // 0x46(0x01)
	bool bNotifyAdminOnHitFail; // 0x47(0x01)
	struct TArray<enum class ESQHitDetectionFailReason> NotifyOnlyOnTheseFailureReasons; // 0x48(0x10)
	int ConsecutiveFailedShotKickAmount; // 0x58(0x04)
	int ConsecutiveFailedHitKickAmount; // 0x5c(0x04)
};

// Class Squad.SQCloudServicesSubsystemBase
// Size: 0x78 (Inherited: 0x30)
struct USQCloudServicesSubsystemBase : UGameInstanceSubsystem {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class Squad.SQCloudServicesSubsystemClient
// Size: 0x78 (Inherited: 0x78)
struct USQCloudServicesSubsystemClient : USQCloudServicesSubsystemBase {
};

// Class Squad.SQCloudServicesSubsystemServer
// Size: 0x78 (Inherited: 0x78)
struct USQCloudServicesSubsystemServer : USQCloudServicesSubsystemBase {
};

// Class Squad.SQCollisionDamage
// Size: 0x110 (Inherited: 0xd8)
struct USQCollisionDamage : UActorComponent {
	float MinDamage; // 0xd8(0x04)
	float MaxDamage; // 0xdc(0x04)
	float MinImpactForce; // 0xe0(0x04)
	float MaxImpactForce; // 0xe4(0x04)
	struct UCurveFloat* InterpCurve; // 0xe8(0x08)
	struct USoundCue* CollisionSound; // 0xf0(0x08)
	struct UParticleSystem* ParticleEffect; // 0xf8(0x08)
	struct UCameraShake* CollisionCameraShake; // 0x100(0x08)
	float MinShakeForce; // 0x108(0x04)
	float MaxShakeForce; // 0x10c(0x04)

	void OnActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQCollisionDamage.OnActorHit // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x852950
	float CalculateDamage(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQCollisionDamage.CalculateDamage // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8520e0
	void ApplyDamage(float damage); // Function Squad.SQCollisionDamage.ApplyDamage // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x851d60
};

// Class Squad.SQColorsDataAsset
// Size: 0xb0 (Inherited: 0x30)
struct USQColorsDataAsset : UDataAsset {
	struct FLinearColor TintColors[0x7]; // 0x30(0x70)
	struct TArray<struct FLinearColor> FireTeamColors; // 0xa0(0x10)

	struct FLinearColor GetColor(enum class ESQMapWidgetTint TintValue, int FireTeamIndex); // Function Squad.SQColorsDataAsset.GetColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8527a0
};

// Class Squad.SQCommandActor
// Size: 0x268 (Inherited: 0x248)
struct ASQCommandActor : AActor {
	float distance; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct USQGridData_CommandOption* Action; // 0x250(0x08)
	int Team; // 0x258(0x04)
	struct TWeakObjectPtr<struct AController> DamageInstigatorController; // 0x25c(0x08)
	char pad_264[0x4]; // 0x264(0x04)

	void OnRep_Action(); // Function Squad.SQCommandActor.OnRep_Action // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQCommanderInputComponent
// Size: 0xe8 (Inherited: 0xd8)
struct USQCommanderInputComponent : UActorComponent {
	struct FScriptMulticastDelegate OnCommanderRevivedEvent; // 0xd8(0x10)

	void VotePlayer(struct ASQPlayerState* Player); // Function Squad.SQCommanderInputComponent.VotePlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x853370
	void ServerVoteForCommander(struct ASQPlayerState* Nominee); // Function Squad.SQCommanderInputComponent.ServerVoteForCommander // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8532b0
	void ServerRequestSupportAtLocation(struct FVector WorldLocation); // Function Squad.SQCommanderInputComponent.ServerRequestSupportAtLocation // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x853200
	void ServerRequestCreateCommandActor(struct USQGridData_CommandOption* CommandOption, struct FTransform Transform, float distance); // Function Squad.SQCommanderInputComponent.ServerRequestCreateCommandActor // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x853080
	void ServerRequestCommandActorDestroyed(struct USQGridData_CommandOption* CommandOption); // Function Squad.SQCommanderInputComponent.ServerRequestCommandActorDestroyed // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x852fc0
	void ServerMakePlayerCommander(struct ASQPlayerState* NewCommander); // Function Squad.SQCommanderInputComponent.ServerMakePlayerCommander // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x852f00
	void ServerDemoteCommander(); // Function Squad.SQCommanderInputComponent.ServerDemoteCommander // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x852eb0
	void ServerDebugDisableVoteRequirements(); // Function Squad.SQCommanderInputComponent.ServerDebugDisableVoteRequirements // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x852e60
	void ServerAttemptSetActionsUsableState(bool bNewActionsEnabled); // Function Squad.SQCommanderInputComponent.ServerAttemptSetActionsUsableState // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x852da0
	void RequestSupportAtLocation(struct FVector& WorldLocation); // Function Squad.SQCommanderInputComponent.RequestSupportAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x852d10
	void RequestPromoteCommander(); // Function Squad.SQCommanderInputComponent.RequestPromoteCommander // (Final|Native|Public|BlueprintCallable) // @ game+0x852cf0
	void RequestDemoteCommander(); // Function Squad.SQCommanderInputComponent.RequestDemoteCommander // (Final|Native|Public|BlueprintCallable) // @ game+0x852cd0
	void RequestCreateCommandActor(struct USQGridData_CommandOption* CommandOption, struct FTransform& Transform, float distance); // Function Squad.SQCommanderInputComponent.RequestCreateCommandActor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x852b70
	void RequestCommandActorDestroyed(struct USQGridData_CommandOption* CommandOption); // Function Squad.SQCommanderInputComponent.RequestCommandActorDestroyed // (Final|Native|Public|BlueprintCallable) // @ game+0x852af0
	void DebugVoteForCommander(struct FString PlayerName); // Function Squad.SQCommanderInputComponent.DebugVoteForCommander // (Final|Exec|Native|Public) // @ game+0x852700
	void DebugDisableVoteRequirements(); // Function Squad.SQCommanderInputComponent.DebugDisableVoteRequirements // (Exec|Native|Public) // @ game+0x829fd0
	void DebugDemoteCommander(); // Function Squad.SQCommanderInputComponent.DebugDemoteCommander // (Exec|Native|Public) // @ game+0x829740
	void DebugBecomeCommander(); // Function Squad.SQCommanderInputComponent.DebugBecomeCommander // (Final|Exec|Native|Public) // @ game+0x8526e0
	void ClientActionAttemptFinished(); // Function Squad.SQCommanderInputComponent.ClientActionAttemptFinished // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x8526c0
	void AttemptSetActionsUsableState(bool bNewActionsEnabled); // Function Squad.SQCommanderInputComponent.AttemptSetActionsUsableState // (Final|Native|Public|BlueprintCallable) // @ game+0x851de0
};

// Class Squad.SQGridData_BaseOption
// Size: 0x60 (Inherited: 0x28)
struct USQGridData_BaseOption : UObject {
	struct FString DisplayName; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	struct UTexture2D* Texture; // 0x48(0x08)
	struct FLinearColor Tint; // 0x50(0x10)
};

// Class Squad.SQGridData_CommandOption
// Size: 0x138 (Inherited: 0x60)
struct USQGridData_CommandOption : USQGridData_BaseOption {
	char CategoryId; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct ASQCommandActor* CommandActor; // 0x68(0x08)
	struct UUserWidget* ControlWidget; // 0x70(0x08)
	float EnrouteDuration; // 0x78(0x04)
	float ActiveDuration; // 0x7c(0x04)
	float CooldownDuration; // 0x80(0x04)
	float IconAngleOffset; // 0x84(0x04)
	float MaxAngleFromBase; // 0x88(0x04)
	bool CreateMapMarker; // 0x8c(0x01)
	bool bAllowedInVehicle; // 0x8d(0x01)
	bool bIgnoreActionEnabled; // 0x8e(0x01)
	char pad_8F[0x1]; // 0x8f(0x01)
	struct ASQMapMarker* MapMarkerClass; // 0x90(0x08)
	struct FSQCommanderActionSounds CommanderActionSoundsList; // 0x98(0xa0)
};

// Class Squad.SQGridData_CommandOption_Distance
// Size: 0x140 (Inherited: 0x138)
struct USQGridData_CommandOption_Distance : USQGridData_CommandOption {
	float MinimumDistance; // 0x138(0x04)
	float MaximumDistance; // 0x13c(0x04)
};

// Class Squad.SQTeam
// Size: 0x2c0 (Inherited: 0x248)
struct ASQTeam : AInfo {
	struct ASQTeamState* TeamStateClass; // 0x248(0x08)
	struct ASQTeamStatePrivate* PrivateTeamStateClass; // 0x250(0x08)
	struct ASQTeamState* TeamState; // 0x258(0x08)
	struct ASQTeamStatePrivate* PrivateTeamState; // 0x260(0x08)
	struct TArray<struct ASQSquad*> Squads; // 0x268(0x10)
	struct TArray<struct ASQSquad*> IndexedSquads; // 0x278(0x10)
	struct ASQPlayerController* Commander; // 0x288(0x08)
	struct ASQSquad* CommandSquad; // 0x290(0x08)
	struct USQCommanderManager* CommanderManager; // 0x298(0x08)
	struct USQLayerTeamConfig* TeamLayerConfig; // 0x2a0(0x08)
	char pad_2A8[0x18]; // 0x2a8(0x18)

	void UpdateAvailabilities(); // Function Squad.SQTeam.UpdateAvailabilities // (Final|Native|Private|BlueprintCallable) // @ game+0x8f67c0
	bool TryGetFactionSetupDisplayName(struct FText& OutDisplayName); // Function Squad.SQTeam.TryGetFactionSetupDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f66d0
	bool TryGetFactionDisplayName(struct FText& OutDisplayName); // Function Squad.SQTeam.TryGetFactionDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f65e0
	void SetTeamConfig(struct USQLayerTeamConfig* InLayerTeamConfig); // Function Squad.SQTeam.SetTeamConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x8f6560
	void SetFactionSetup(struct USQFactionSetup* InFactionSetup); // Function Squad.SQTeam.SetFactionSetup // (Final|Native|Public|BlueprintCallable) // @ game+0x8f64e0
	bool Request_Team_Vehicle(struct FSQAvailabilityState_Vehicle& VehicleStatus); // Function Squad.SQTeam.Request_Team_Vehicle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6330
	bool Request_Team_Deployable(struct FSQAvailabilityState_Deployable& DeployableStatus); // Function Squad.SQTeam.Request_Team_Deployable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f6260
	bool Request_Player_Vehicle(struct FName& VehicleId, struct ASQPlayerController* InPlayer, struct USQVehicleSettings*& OutSetting, struct FDataTableRowHandle& OutUnavailabilityReason); // Function Squad.SQTeam.Request_Player_Vehicle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f60b0
	bool Request_Player_Role_Rearm(struct FName& RoleId, struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource, struct USQRoleSettings*& OutSetting, struct FDataTableRowHandle& OutUnavailabilityReason); // Function Squad.SQTeam.Request_Player_Role_Rearm // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5eb0
	bool Request_Player_Role(struct FName& RoleId, struct ASQPlayerController* InPlayer, struct USQRoleSettings*& OutSetting, struct FDataTableRowHandle& OutUnavailabilityReason); // Function Squad.SQTeam.Request_Player_Role // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5d00
	bool Request_Player_Deployable_Refund(struct ASQPlayerController* InPlayer, struct ASQDeployable* InDeployable); // Function Squad.SQTeam.Request_Player_Deployable_Refund // (Final|Native|Public|BlueprintCallable) // @ game+0x8f5c40
	bool Request_Player_Deployable(struct FName& DeployableId, struct ASQPlayerController* InPlayer, struct USQDeployableSettings*& OutSetting, struct FDataTableRowHandle& OutUnavailabilityReason); // Function Squad.SQTeam.Request_Player_Deployable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5a90
	bool Request_Player_Action(struct FName& ActionId, struct ASQPlayerController* InPlayer, struct USQActionSettings* OutSetting, struct FDataTableRowHandle& OutUnavailabilityReason); // Function Squad.SQTeam.Request_Player_Action // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5900
	void Release_Vehicle(struct FName& SettingId, int Index); // Function Squad.SQTeam.Release_Vehicle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5830
	void Release_Role(struct FName& SettingId); // Function Squad.SQTeam.Release_Role // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f57a0
	void Release_Deployable(struct FName& SettingId); // Function Squad.SQTeam.Release_Deployable // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5710
	void Release_Action(struct FName& SettingId); // Function Squad.SQTeam.Release_Action // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8f5680
	bool IsConfigured(); // Function Squad.SQTeam.IsConfigured // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f5430
	void InitializeAvailabilities(); // Function Squad.SQTeam.InitializeAvailabilities // (Final|Native|Private|BlueprintCallable) // @ game+0x8f5380
	bool HasFactionSetup(); // Function Squad.SQTeam.HasFactionSetup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f5350
	int GetTeamId(); // Function Squad.SQTeam.GetTeamId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f5320
	int GetPlayerCount(); // Function Squad.SQTeam.GetPlayerCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f5270
	struct FString GetNatoStringOrSquadString(int Idx); // Function Squad.SQTeam.GetNatoStringOrSquadString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8f51a0
	struct USQRoleSettings* GetLeaveSquadRole(); // Function Squad.SQTeam.GetLeaveSquadRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f5170
	struct FName GetFactionSetupId(); // Function Squad.SQTeam.GetFactionSetupId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4e70
	struct FString GetFactionSetupDisplayName(); // Function Squad.SQTeam.GetFactionSetupDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4de0
	struct USQFactionSetup* GetFactionSetup(); // Function Squad.SQTeam.GetFactionSetup // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4db0
	struct FName GetFactionId(); // Function Squad.SQTeam.GetFactionId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4d70
	struct FString GetFactionDisplayName(); // Function Squad.SQTeam.GetFactionDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4ce0
	struct USQFaction* GetFaction(); // Function Squad.SQTeam.GetFaction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4cb0
	struct USQRoleSettings* GetDefaultSquadLeaderRole(); // Function Squad.SQTeam.GetDefaultSquadLeaderRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4c80
	struct USQRoleSettings* GetDefaultRole(); // Function Squad.SQTeam.GetDefaultRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f4c50
	void ApplySlomoFactor(float TimeDilationFactor); // Function Squad.SQTeam.ApplySlomoFactor // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x8f4b20
};

// Class Squad.SQCommanderManager
// Size: 0x190 (Inherited: 0xd8)
struct USQCommanderManager : UActorComponent {
	struct ASQCommanderState* CommanderState; // 0xd8(0x08)
	struct UDataTable* TeamCommands; // 0xe0(0x08)
	struct TArray<struct FCommanderCategory> Categories; // 0xe8(0x10)
	int MinimumSquadSizeForVoting; // 0xf8(0x04)
	int MinimumSquadsRequiredForVoting; // 0xfc(0x04)
	int VotingTimeSeconds; // 0x100(0x04)
	bool bDoubleCaptureSpeed; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float ActionCooldownExtensionOnNewCommander; // 0x108(0x04)
	int VoteCooldownTimeSeconds; // 0x10c(0x04)
	char pad_110[0x20]; // 0x110(0x20)
	bool bCommanderActive; // 0x130(0x01)
	char pad_131[0x5f]; // 0x131(0x5f)

	struct FSQCommandActionData GetInterval(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.GetInterval // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x852870
	void CommanderChangedDelegate__DelegateSignature(struct ASQPlayerState* OldCommander); // DelegateFunction Squad.SQCommanderManager.CommanderChangedDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	bool CanUseAction(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CanUseAction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x852600
	float CalculateTotalTimeRemaining(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CalculateTotalTimeRemaining // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x852540
	float CalculateStateTimeRemaining(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState, enum class ESQCommandOptionState& CommandOptionState); // Function Squad.SQCommanderManager.CalculateStateTimeRemaining // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x852440
	float CalculateStatePercentTimeRemaining(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState, enum class ESQCommandOptionState& CommandOptionState); // Function Squad.SQCommanderManager.CalculateStatePercentTimeRemaining // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x852340
	enum class ESQCommandOptionState CalculateState(struct USQGridData_CommandOption* CommandOption, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CalculateState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x852280
	float CalculateCategoryPercentRemainingTime(char& CommandOptionType, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CalculateCategoryPercentRemainingTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x852010
	bool CalculateCategoryLocked(char& CommandOptionType, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CalculateCategoryLocked // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x851f40
	float CalculateCategoryCurrentRemainingTime(char& CommandOptionType, struct ASQCommanderState* SQCommanderState); // Function Squad.SQCommanderManager.CalculateCategoryCurrentRemainingTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x851e70
};

// Class Squad.SQCommanderState
// Size: 0x538 (Inherited: 0x248)
struct ASQCommanderState : AInfo {
	bool bVoteInProgress; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	int CommanderVoteTimestamp; // 0x24c(0x04)
	int CommanderVoteTimer; // 0x250(0x04)
	bool bVoteCooldownActive; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	int VoteCooldownTimer; // 0x258(0x04)
	int VoteCooldownTimeSeconds; // 0x25c(0x04)
	int VoteCooldownTimestamp; // 0x260(0x04)
	bool bCommanderIsActive; // 0x264(0x01)
	bool bCommandActionAttempted; // 0x265(0x01)
	bool bDoubleCaptureSpeed; // 0x266(0x01)
	char pad_267[0x11]; // 0x267(0x11)
	struct TArray<struct FCommanderCategory> CommanderCategories; // 0x278(0x10)
	int MinimumSquadSizeForVoting; // 0x288(0x04)
	int MinimumSquadsRequiredForVoting; // 0x28c(0x04)
	int VotingTimeSeconds; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FSQCommanderActionDataArray CommandIntervals; // 0x298(0x118)
	struct TArray<float> LastCategoryGameTime; // 0x3b0(0x10)
	struct UDataTable* TeamCommands; // 0x3c0(0x08)
	struct FCommanderNomineeArray NomineeStatus; // 0x3c8(0x118)
	char pad_4E0[0x8]; // 0x4e0(0x08)
	struct FScriptMulticastDelegate OnCommanderChangedEvent; // 0x4e8(0x10)
	struct FScriptMulticastDelegate OnNominationAvailableEvent; // 0x4f8(0x10)
	struct FScriptMulticastDelegate OnNominationEndedEvent; // 0x508(0x10)
	struct FScriptMulticastDelegate OnNominationStartedEvent; // 0x518(0x10)
	struct ASQPlayerState* CurrentCommander; // 0x528(0x08)
	bool bActionsEnabled; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)

	void OnRep_VoteInProgressChanged(); // Function Squad.SQCommanderState.OnRep_VoteInProgressChanged // (Final|Native|Public) // @ game+0x856cd0
	void OnRep_CurrentCommander(struct ASQPlayerState* OldCommander); // Function Squad.SQCommanderState.OnRep_CurrentCommander // (Final|Native|Private) // @ game+0x856bd0
	bool IsCommanderActionAllowed(struct USQGridData_CommandOption* CommandOption); // Function Squad.SQCommanderState.IsCommanderActionAllowed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x856ac0
	struct ASQPlayerState* GetCurrentCommander(); // Function Squad.SQCommanderState.GetCurrentCommander // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x856940
	struct TArray<struct USQGridData_CommandOption*> GetCommandActionsById(char& ID); // Function Squad.SQCommanderState.GetCommandActionsById // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x856850
	struct TArray<struct USQGridData_CommandOption*> GetCommandActions(); // Function Squad.SQCommanderState.GetCommandActions // (Final|Native|Public|BlueprintCallable) // @ game+0x8567c0
	bool GetActionsEnabled(); // Function Squad.SQCommanderState.GetActionsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x856790
};

// Class Squad.SQCommanderVotingPlayerItem
// Size: 0x250 (Inherited: 0x230)
struct USQCommanderVotingPlayerItem : USQUserWidget {
	bool bIsVotedByPlayer; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	int VoteCount; // 0x234(0x04)
	struct FString NomineeName; // 0x238(0x10)
	struct ASQPlayerState* NomineePlayerState; // 0x248(0x08)

	void OnVoteCountChanged(); // Function Squad.SQCommanderVotingPlayerItem.OnVoteCountChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnNomineeNameChanged(); // Function Squad.SQCommanderVotingPlayerItem.OnNomineeNameChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnIsVotedByPlayerChanged(); // Function Squad.SQCommanderVotingPlayerItem.OnIsVotedByPlayerChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQCommanderVotingWidget
// Size: 0x250 (Inherited: 0x230)
struct USQCommanderVotingWidget : USQUserWidget {
	bool bIsVotingAvailable; // 0x230(0x01)
	bool bIsVotePending; // 0x231(0x01)
	bool bIsVoteInProgress; // 0x232(0x01)
	char pad_233[0x5]; // 0x233(0x05)
	struct USQCommanderVotingPlayerItem* VoteItemClass; // 0x238(0x08)
	struct UPanelWidget* VoteItemsParent; // 0x240(0x08)
	char pad_248[0x8]; // 0x248(0x08)

	void UpdateFromData(); // Function Squad.SQCommanderVotingWidget.UpdateFromData // (Final|Native|Public|BlueprintCallable) // @ game+0x857230
	void OnVotingTimeChanged(float Seconds); // Function Squad.SQCommanderVotingWidget.OnVotingTimeChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnIsVotingAvailableChanged(); // Function Squad.SQCommanderVotingWidget.OnIsVotingAvailableChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnIsVoteInProgressChanged(); // Function Squad.SQCommanderVotingWidget.OnIsVoteInProgressChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void Init(); // Function Squad.SQCommanderVotingWidget.Init // (Final|Native|Public|BlueprintCallable) // @ game+0x856990
};

// Class Squad.SQCompass
// Size: 0x250 (Inherited: 0x230)
struct USQCompass : USQUserWidget {
	bool bIsOwnerMedic; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float RotationXFix; // 0x234(0x04)
	float XScale; // 0x238(0x04)
	float MaxVisibilityDistance; // 0x23c(0x04)
	float YPositionOffset; // 0x240(0x04)
	float TotalScale; // 0x244(0x04)
	float BearingLERP; // 0x248(0x04)
	bool bDoCompassLERP; // 0x24c(0x01)
	bool bShouldHide; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// Class Squad.SQCompassBaseUnit
// Size: 0x238 (Inherited: 0x230)
struct USQCompassBaseUnit : USQUserWidget {
	struct UImage* BaseImage; // 0x230(0x08)
};

// Class Squad.SQCompassMarker
// Size: 0x330 (Inherited: 0x238)
struct USQCompassMarker : USQCompassBaseUnit {
	struct FLinearColor MarkerColor; // 0x238(0x10)
	struct UCurveFloat* DistanceResolutionCurveInMeters; // 0x248(0x08)
	struct ASQMapMarker* MapMarker; // 0x250(0x08)
	struct FSQMapMarkerVisualData MapMarkerVisualData; // 0x258(0xc8)
	struct UTextBlock* DistanceTextBlock; // 0x320(0x08)
	struct UTextBlock* MeterTextBlock; // 0x328(0x08)

	void UpdateState(float InScale, bool bShowIcon); // Function Squad.SQCompassMarker.UpdateState // (Native|Public|BlueprintCallable) // @ game+0x8573d0
	void InitWidget(); // Function Squad.SQCompassMarker.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829fd0
};

// Class Squad.SQCompassMK2
// Size: 0x2e8 (Inherited: 0x250)
struct USQCompassMK2 : USQCompass {
	struct UCanvasPanel* MainP; // 0x250(0x08)
	struct UTextBlock* CompassBearingText; // 0x258(0x08)
	struct UImage* LeftArrow; // 0x260(0x08)
	struct UImage* RightArrow; // 0x268(0x08)
	struct UMaterialInstanceDynamic* CompassMID; // 0x270(0x08)
	struct FName BearingMatParamName; // 0x278(0x08)
	struct ASQPlayerState* InitialPlayerState; // 0x280(0x08)
	float MarkerYPositionOffset; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct USQCompassPlayer*> TrackedSquadMatesWidgets; // 0x290(0x10)
	struct UCurveFloat* DistanceCurve; // 0x2a0(0x08)
	bool bAlwaysShowSquadLeader; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct TArray<struct USQCompassMarker*> TrackedMarkerWidgets; // 0x2b0(0x10)
	struct TArray<enum class ESQMapMarkerType> MarkerTypesToTrack; // 0x2c0(0x10)
	float CompassEdgeFadePercentage; // 0x2d0(0x04)
	float CompassEdgeMinFade; // 0x2d4(0x04)
	struct USQCompassPlayer* CompassPlayerType; // 0x2d8(0x08)
	struct USQCompassMarker* CompassMarkerType; // 0x2e0(0x08)

	void UpdateVisibility(); // Function Squad.SQCompassMK2.UpdateVisibility // (Native|Public|BlueprintCallable) // @ game+0x829740
	void UpdateSquadMembers(); // Function Squad.SQCompassMK2.UpdateSquadMembers // (Native|Public|BlueprintCallable) // @ game+0x8573b0
	void UpdateSquadMarkers(); // Function Squad.SQCompassMK2.UpdateSquadMarkers // (Native|Public|BlueprintCallable) // @ game+0x857390
	float UpdatePlayerWidgetTransform(bool& bShowIcon, struct ASQSoldier* SoldierRef, struct USQCompassPlayer* WidgetRef); // Function Squad.SQCompassMK2.UpdatePlayerWidgetTransform // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x857270
	void UpdateMarkerArrows(); // Function Squad.SQCompassMK2.UpdateMarkerArrows // (Native|Public|BlueprintCallable) // @ game+0x857250
	void UpdateCompassBearing(); // Function Squad.SQCompassMK2.UpdateCompassBearing // (Native|Public|BlueprintCallable) // @ game+0x829fd0
	void SquadChangedHandler(struct ASQSquadState* NewSquad, struct ASQSquadState* OldSquad, struct ASQPlayerState* Player); // Function Squad.SQCompassMK2.SquadChangedHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x857130
	void RemoveMarker(struct AActor* DestroyedActor); // Function Squad.SQCompassMK2.RemoveMarker // (Final|Native|Public|BlueprintCallable) // @ game+0x856ef0
	void RemoveCompassMarker(char ID); // Function Squad.SQCompassMK2.RemoveCompassMarker // (Final|Native|Public) // @ game+0x856e70
	void PlayerLeftSquad(struct ASQSquadState* Squad, struct ASQPlayerState* PlayerState); // Function Squad.SQCompassMK2.PlayerLeftSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x856db0
	void PlayerJoinedSquad(struct ASQSquadState* Squad, struct ASQPlayerState* PlayerState); // Function Squad.SQCompassMK2.PlayerJoinedSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x856cf0
	void InitWidget(); // Function Squad.SQCompassMK2.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x856aa0
	void CreateSquadMateWidget(struct ASQPlayerState* SquadMate); // Function Squad.SQCompassMK2.CreateSquadMateWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x856710
	void CreateNewMarker(int SquadId, struct ASQMapMarker* Marker); // Function Squad.SQCompassMK2.CreateNewMarker // (Final|Native|Public|BlueprintCallable) // @ game+0x856650
	void CreateNewCompassMarker(struct FSQMapMarkerVisualData MapMarkerVisualData); // Function Squad.SQCompassMK2.CreateNewCompassMarker // (Final|Native|Public) // @ game+0x856540
};

// Class Squad.SQCompassPlayer
// Size: 0x2b0 (Inherited: 0x238)
struct USQCompassPlayer : USQCompassBaseUnit {
	struct UImage* MedicIcon; // 0x238(0x08)
	struct FLinearColor ColorHealthy; // 0x240(0x10)
	struct FLinearColor ColorWounded; // 0x250(0x10)
	struct FLinearColor ColorDown; // 0x260(0x10)
	struct FLinearColor ColorInvisible; // 0x270(0x10)
	struct UTexture2D* TexturePlayer; // 0x280(0x08)
	struct UTexture2D* TextureSL; // 0x288(0x08)
	struct UTexture2D* TextureMedic; // 0x290(0x08)
	float PlayerIconScale; // 0x298(0x04)
	float SLPlayerIconScale; // 0x29c(0x04)
	float MedicPlayerIconScale; // 0x2a0(0x04)
	float MedicIconScale; // 0x2a4(0x04)
	struct ASQPlayerState* PlayerState; // 0x2a8(0x08)

	void UpdateState(float InScale, bool bShowIcon, int HealthStateIndex, bool bIsMedic, bool bIsSL, bool bIsOwnderMedic); // Function Squad.SQCompassPlayer.UpdateState // (Native|Public|BlueprintCallable) // @ game+0x8574a0
	void InitWidget(); // Function Squad.SQCompassPlayer.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829fd0
};

// Class Squad.SQConfig
// Size: 0x470 (Inherited: 0x28)
struct USQConfig : UObject {
	bool ConfigLoaded; // 0x28(0x01)
	char pad_29[0x247]; // 0x29(0x247)
	struct FString AnnouncementURL; // 0x270(0x10)
	struct FString AnnouncementHeaderURL; // 0x280(0x10)
	char pad_290[0x1e0]; // 0x290(0x1e0)
};

// Class Squad.SQConnectionCheckBeaconClient
// Size: 0x2d8 (Inherited: 0x2c8)
struct ASQConnectionCheckBeaconClient : AOnlineBeaconClient {
	struct USQServerListItemWidget* ServerWidget; // 0x2c8(0x08)
	char pad_2D0[0x8]; // 0x2d0(0x08)

	void ServerPong(struct FSQConnectionCheckResponse response); // Function Squad.SQConnectionCheckBeaconClient.ServerPong // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x856fc0
	void InitConnection(struct FString ServerURL); // Function Squad.SQConnectionCheckBeaconClient.InitConnection // (Final|Native|Public|BlueprintCallable) // @ game+0x8569b0
};

// Class Squad.SQConnectionCheckBeaconHostObj
// Size: 0x270 (Inherited: 0x270)
struct ASQConnectionCheckBeaconHostObj : AOnlineBeaconHostObject {
};

// Class Squad.SQGameViewportClient
// Size: 0x300 (Inherited: 0x2e8)
struct USQGameViewportClient : UGameViewportClient {
	char pad_2E8[0x18]; // 0x2e8(0x18)
};

// Class Squad.SQConsole
// Size: 0x150 (Inherited: 0x130)
struct USQConsole : UConsole {
	enum class ESQConsoleMessageType MessageType; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString CustomMessage; // 0x138(0x10)
	float LastMessageTime; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class Squad.SQConsoleVariablesComponent
// Size: 0x128 (Inherited: 0xd8)
struct USQConsoleVariablesComponent : UActorComponent {
	char pad_D8[0x50]; // 0xd8(0x50)
};

// Class Squad.SQConstructionResource
// Size: 0x280 (Inherited: 0x280)
struct ASQConstructionResource : ASQVehicleResource {
};

// Class Squad.SQCoreStateComponent
// Size: 0x110 (Inherited: 0xd8)
struct USQCoreStateComponent : UActorComponent {
	struct USQCoreStateData* DataClass; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct USQCoreStateData* DataObject; // 0xe8(0x08)
	struct TArray<struct USQCoreStateConnection*> Connections; // 0xf0(0x10)
	char pad_100[0x10]; // 0x100(0x10)

	void ServerSetIsVisible(bool bValue); // Function Squad.SQCoreStateComponent.ServerSetIsVisible // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x857070
	void ServerConfigure(); // Function Squad.SQCoreStateComponent.ServerConfigure // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x856f70
	void OnRep_DataObject(struct USQCoreStateData* PrevDataObject); // Function Squad.SQCoreStateComponent.OnRep_DataObject // (Final|Native|Private) // @ game+0x856c50
	void OnConnectionCreate(struct USQCoreStateConnection* Connection); // Function Squad.SQCoreStateComponent.OnConnectionCreate // (Final|Native|Private) // @ game+0x856b50
	struct FSQCoreStateId GetId(); // Function Squad.SQCoreStateComponent.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x856960
};

// Class Squad.SQCoreStateConnection
// Size: 0x148 (Inherited: 0xd8)
struct USQCoreStateConnection : UActorComponent {
	char pad_D8[0x10]; // 0xd8(0x10)
	struct TArray<struct USQCoreStateComponent*> ComponentList; // 0xe8(0x10)
	struct TMap<struct UActorChannel*, struct FSQCoreStateDataToIdMap> RemovedDataLists; // 0xf8(0x50)

	void OnComponentObtainedId(struct USQCoreStateComponent* Component); // Function Squad.SQCoreStateConnection.OnComponentObtainedId // (Final|Native|Private) // @ game+0x85ad70
};

// Class Squad.SQCoreStateConnectionActor
// Size: 0x250 (Inherited: 0x248)
struct ASQCoreStateConnectionActor : AInfo {
	struct USQCoreStateConnection* StateConnection; // 0x248(0x08)
};

// Class Squad.SQCoreStateConnectionChildActorComponent
// Size: 0x260 (Inherited: 0x250)
struct USQCoreStateConnectionChildActorComponent : UChildActorComponent {
	float NetPriority; // 0x248(0x04)
	float NetUpdateFrequency; // 0x24c(0x04)
	float MinNetUpdateFrequency; // 0x250(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
};

// Class Squad.SQCoreStateData
// Size: 0xd0 (Inherited: 0x28)
struct USQCoreStateData : UObject {
	bool bIsGlobalData; // 0x28(0x01)
	bool bAllowConfigureOnServer; // 0x29(0x01)
	bool bAllowConfigureOnClient; // 0x2a(0x01)
	bool bCanEverConfigureOnTick; // 0x2b(0x01)
	float TickConfigureServerFrequency; // 0x2c(0x04)
	float TickConfigureClientFrequency; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FCoreStateDataTickFunction TickFunction; // 0x38(0x58)
	char pad_90[0x8]; // 0x90(0x08)
	struct TArray<struct USQCoreStateListener*> ListenerList; // 0x98(0x10)
	char pad_A8[0x8]; // 0xa8(0x08)
	struct FSQCoreStateId RepComponentId; // 0xb0(0x02)
	char pad_B2_0 : 1; // 0xb2(0x01)
	char bIsVisible : 1; // 0xb2(0x01)
	char pad_B2_2 : 6; // 0xb2(0x01)
	char pad_B3[0x1d]; // 0xb3(0x1d)

	void OnWorldCleanup(struct UWorld* World, bool bSessionEnded, bool bCleanupResources); // Function Squad.SQCoreStateData.OnWorldCleanup // (Final|Native|Private) // @ game+0x85aef0
	void OnListenerCreate(struct USQCoreStateListener* Listener); // Function Squad.SQCoreStateData.OnListenerCreate // (Final|Native|Private) // @ game+0x85ae70
};

// Class Squad.SQCoreStateListener
// Size: 0x140 (Inherited: 0xd8)
struct USQCoreStateListener : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct TMap<struct FSQCoreStateId, struct FSQCoreStateDataList> DataMap; // 0xf0(0x50)

	void RefreshVisbility(struct APlayerController* PC); // Function Squad.SQCoreStateListener.RefreshVisbility // (Final|Native|Private) // @ game+0x85b000
	void OnDataCreate(struct USQCoreStateData* Data); // Function Squad.SQCoreStateListener.OnDataCreate // (Final|Native|Private) // @ game+0x85adf0
};

// Class Squad.SQCoreStateWidgetFactory
// Size: 0x340 (Inherited: 0x140)
struct USQCoreStateWidgetFactory : USQCoreStateListener {
	char pad_140[0x8]; // 0x140(0x08)
	struct TMap<struct FSQCoreStateId, struct USQCoreStateWidget*> Widgets; // 0x148(0x50)
	struct TMap<struct USQCoreStateWidget*, struct FWidgetGroup> UnusedWidgets; // 0x198(0x50)
	char pad_1E8[0xf0]; // 0x1e8(0xf0)
	struct TMap<struct USQCoreStateData*, int> SubDataPendingSuperKey; // 0x2d8(0x50)
	char pad_328[0x10]; // 0x328(0x10)
	struct USQCoreStateSelectionHUB* SelectionHUB; // 0x338(0x08)

	void UnselectAll(struct UObject* SelectionInstigator); // Function Squad.SQCoreStateWidgetFactory.UnselectAll // (Native|Protected|Const) // @ game+0x8606e0
	void ReceiveSelection(struct FSQCoreStateId& ComponentId, enum class ESQSelectionState SelectionState, struct UObject* SelectionInstigator); // Function Squad.SQCoreStateWidgetFactory.ReceiveSelection // (Native|Protected|HasOutParms|Const) // @ game+0x85fb50
};

// Class Squad.SQCoreStateMapComponent
// Size: 0x4b8 (Inherited: 0x340)
struct USQCoreStateMapComponent : USQCoreStateWidgetFactory {
	struct UPanelWidget* RootWidget; // 0x340(0x08)
	struct USQMapWidgetBase* MapWidgetBase; // 0x348(0x08)
	float WidgetScale; // 0x350(0x04)
	char pad_354[0x164]; // 0x354(0x164)

	void SetWidgetScale(float UniformScale); // Function Squad.SQCoreStateMapComponent.SetWidgetScale // (Final|Native|Public|BlueprintCallable) // @ game+0x85b320
	void SetRootWidget(struct UPanelWidget* Value); // Function Squad.SQCoreStateMapComponent.SetRootWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x85b0a0
	bool GetWidgetWorldLocation(struct FVector& OutWorldLocation, struct FSQCoreStateId& ID); // Function Squad.SQCoreStateMapComponent.GetWidgetWorldLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x85ac60
	bool GetWidgetScreenPosition(struct FVector2D& OutPosition, struct FSQCoreStateId& ID); // Function Squad.SQCoreStateMapComponent.GetWidgetScreenPosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x85ab70
	struct TMap<int, struct FSQCoreStateId> GetWaypointWidgets(); // Function Squad.SQCoreStateMapComponent.GetWaypointWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85ab40
	struct TMap<int, struct FSQCoreStateId> GetWaypointFTWidgets(); // Function Squad.SQCoreStateMapComponent.GetWaypointFTWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85ab10
	struct TMap<int, struct FSQCoreStateId> GetOrderTargetWidgets(); // Function Squad.SQCoreStateMapComponent.GetOrderTargetWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85aab0
};

// Class Squad.SQCoreStateMapDataInterface
// Size: 0x28 (Inherited: 0x28)
struct USQCoreStateMapDataInterface : UInterface {
};

// Class Squad.SQCoreStateWidget
// Size: 0x258 (Inherited: 0x230)
struct USQCoreStateWidget : UUserWidget {
	enum class ESlateVisibility UnconfiguredVisibility; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct USQCoreStateWidgetFactory* SourceComponent; // 0x238(0x08)
	enum class ESQSelectionState SelectionState; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UObject* SelectionInstigator; // 0x248(0x08)
	char pad_250[0x8]; // 0x250(0x08)

	void OnSelectionStateChanged(); // Function Squad.SQCoreStateWidget.OnSelectionStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnScaleChanged(float UniformScale); // Function Squad.SQCoreStateWidget.OnScaleChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void AnnounceSelectionState(enum class ESQSelectionState InSelectionState); // Function Squad.SQCoreStateWidget.AnnounceSelectionState // (Final|Native|Protected|BlueprintCallable) // @ game+0x85aa00
};

// Class Squad.SQCoreStateMapWidget
// Size: 0x270 (Inherited: 0x258)
struct USQCoreStateMapWidget : USQCoreStateWidget {
	float ZOrder; // 0x258(0x04)
	bool bAutoSize; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector2D Alignment; // 0x260(0x08)
	struct USQCoreStateMapComponent* MapComponent; // 0x268(0x08)
};

// Class Squad.SQCoreStateSquadListComponent
// Size: 0x550 (Inherited: 0x340)
struct USQCoreStateSquadListComponent : USQCoreStateWidgetFactory {
	struct USQCoreStateSquadItemWidget* SquadWidgetClass; // 0x340(0x08)
	struct USQCoreStateSquadMemberWidget* PlayerWidgetClass; // 0x348(0x08)
	struct UPanelWidget* SquadRoot; // 0x350(0x08)
	struct UPanelWidget* UnassignedRoot; // 0x358(0x08)
	struct UPanelWidget* CommanderRoot; // 0x360(0x08)
	enum class EListLayout ListLayout; // 0x368(0x01)
	enum class EListLayout UnassignedLayout; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct TMap<int, struct USQCoreStateSquadItemWidget*> ActiveSquadWidgets; // 0x370(0x50)
	char pad_3C0[0x190]; // 0x3c0(0x190)

	void SetRootWidgets(struct UPanelWidget* InSquadRoot, struct UPanelWidget* InUnassignedRoot, struct UPanelWidget* InCommanderRoot); // Function Squad.SQCoreStateSquadListComponent.SetRootWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x85b220
};

// Class Squad.SQCoreStateRolesSquadListComponent
// Size: 0x550 (Inherited: 0x550)
struct USQCoreStateRolesSquadListComponent : USQCoreStateSquadListComponent {
};

// Class Squad.SQCoreStateSelectionHUB
// Size: 0x108 (Inherited: 0xd8)
struct USQCoreStateSelectionHUB : UActorComponent {
	char pad_D8[0x30]; // 0xd8(0x30)

	void UnselectAll(struct UObject* SelectionInstigator); // Function Squad.SQCoreStateSelectionHUB.UnselectAll // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x85b3a0
};

// Class Squad.SQCoreStateSpawnPointsListComponent
// Size: 0x390 (Inherited: 0x340)
struct USQCoreStateSpawnPointsListComponent : USQCoreStateWidgetFactory {
	struct USQCoreStateSpawnPointsListWidget* WidgetClass; // 0x340(0x08)
	struct UGridPanel* BaseRoot; // 0x348(0x08)
	struct UGridPanel* HABRoot; // 0x350(0x08)
	struct UGridPanel* RallyRoot; // 0x358(0x08)
	char pad_360[0x30]; // 0x360(0x30)

	void SetRootWidgets(struct UGridPanel* InBaseRoot, struct UGridPanel* InHABRoot, struct UGridPanel* InRallyRoot); // Function Squad.SQCoreStateSpawnPointsListComponent.SetRootWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x85b120
};

// Class Squad.SQCoreStateSpawnPointsListWidget
// Size: 0x2a8 (Inherited: 0x258)
struct USQCoreStateSpawnPointsListWidget : USQCoreStateWidget {
	bool bSpawnOnSelection; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	char bIsSelected : 1; // 0x25c(0x01)
	char bSieged : 1; // 0x25c(0x01)
	char bSpawningEnabled : 1; // 0x25c(0x01)
	char pad_25C_3 : 5; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector SpawnPointLocation; // 0x260(0x0c)
	enum class ESQSpawnPointType SpawnPointType; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float ActivatedTimeStamp; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UTexture2D* BaseTexture; // 0x278(0x08)
	struct UTexture2D* HABTexture; // 0x280(0x08)
	struct UTexture2D* RallyTexture; // 0x288(0x08)
	struct UTexture2D* CacheTexture; // 0x290(0x08)
	struct ASQGameSpawn* OwningGameSpawn; // 0x298(0x08)
	char pad_2A0[0x8]; // 0x2a0(0x08)

	void SelectSpawnPoint(); // Function Squad.SQCoreStateSpawnPointsListWidget.SelectSpawnPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x85b080
	void OnSpawnPointTypeChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnSpawnPointTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSpawnPointLocationChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnSpawnPointLocationChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSpawningEnabledChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnSpawningEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSiegedChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnSiegedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsSelectedChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnIsSelectedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnActivatedTimeStampChanged(); // Function Squad.SQCoreStateSpawnPointsListWidget.OnActivatedTimeStampChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	struct UTexture2D* GetSpawnIcon(); // Function Squad.SQCoreStateSpawnPointsListWidget.GetSpawnIcon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85aae0
};

// Class Squad.SQCoreStateSquadListWidget
// Size: 0x260 (Inherited: 0x258)
struct USQCoreStateSquadListWidget : USQCoreStateWidget {
	enum class EListLayout ListLayout; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)

	void OnListLayoutChanged(); // Function Squad.SQCoreStateSquadListWidget.OnListLayoutChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQCoreStateSquadItemWidget
// Size: 0x2b0 (Inherited: 0x260)
struct USQCoreStateSquadItemWidget : USQCoreStateSquadListWidget {
	struct ASQSquadState* SquadState; // 0x260(0x08)
	int SquadId; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FString SquadName; // 0x270(0x10)
	struct FString LeaderName; // 0x280(0x10)
	int MemberNum; // 0x290(0x04)
	int MaxMembers; // 0x294(0x04)
	bool bIsSelfInSquad; // 0x298(0x01)
	bool bIsCommandSquad; // 0x299(0x01)
	enum class EJoinButtonState JoinButtonState; // 0x29a(0x01)
	char pad_29B[0x5]; // 0x29b(0x05)
	struct ASQPlayerController* CachedSQPlayerController; // 0x2a0(0x08)
	char pad_2A8[0x8]; // 0x2a8(0x08)

	void OnSquadNameChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnSquadNameChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSquadIdChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnSquadIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnMemberNumChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnMemberNumChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnMaxMembersChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnMaxMembersChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnLeaderNameChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnLeaderNameChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnJoinButtonStateChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnJoinButtonStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsSelfInSquadChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnIsSelfInSquadChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsCommandSquadChanged(); // Function Squad.SQCoreStateSquadItemWidget.OnIsCommandSquadChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnBanned(int SquadId, float BanDuration); // Function Squad.SQCoreStateSquadItemWidget.OnBanned // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void JoinSquad(); // Function Squad.SQCoreStateSquadItemWidget.JoinSquad // (Final|Native|Protected|BlueprintCallable) // @ game+0x85ad50
	struct UPanelWidget* GetMemberRoot(int FireTeamIndex); // Function Squad.SQCoreStateSquadItemWidget.GetMemberRoot // (Event|Public|BlueprintEvent|Const) // @ game+0x12b8b50
	struct ASQPlayerController* GetCachedSQPlayerController(); // Function Squad.SQCoreStateSquadItemWidget.GetCachedSQPlayerController // (Final|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x85aa80
};

// Class Squad.SQCoreStateSquadMemberWidget
// Size: 0x2b8 (Inherited: 0x260)
struct USQCoreStateSquadMemberWidget : USQCoreStateSquadListWidget {
	int RootWidgetSquadId; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct ASQPlayerState* PlayerState; // 0x268(0x08)
	int SquadId; // 0x270(0x04)
	char bIsPossessingPawn : 1; // 0x274(0x01)
	char pad_274_1 : 7; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	bool bIsSquadLeader; // 0x278(0x01)
	bool bIsFireTeamLeader; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	int FireTeamIndex; // 0x27c(0x04)
	char pad_280[0x4]; // 0x280(0x04)
	int FireTeamPosition; // 0x284(0x04)
	char pad_288[0x8]; // 0x288(0x08)
	struct USQRoleSettings* DeployRole; // 0x290(0x08)
	struct FString PlayerName; // 0x298(0x10)
	struct USQVehicleUIStaticDataAsset* CurrentVehicleData; // 0x2a8(0x08)
	enum class ESQVoiceChannel VoipChannel; // 0x2b0(0x01)
	bool bIsMuted; // 0x2b1(0x01)
	bool bIsAlive; // 0x2b2(0x01)
	bool bIsBleeding; // 0x2b3(0x01)
	bool bIsWounded; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)

	void OnVoipChannelChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnVoipChannelChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSquadIdChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnSquadIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnPlayerNameChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnPlayerNameChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsWoundedChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsWoundedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsSquadLeaderChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsSquadLeaderChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsPossessingPawnChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsPossessingPawnChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsMutedChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsMutedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsFireTeamLeaderChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsFireTeamLeaderChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsBleedingChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsBleedingChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsAliveChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnIsAliveChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFireTeamPositionChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnFireTeamPositionChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFireTeamIndexChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnFireTeamIndexChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnDeployRoleChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnDeployRoleChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCurrentVehicleDataChanged(); // Function Squad.SQCoreStateSquadMemberWidget.OnCurrentVehicleDataChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQRestriction
// Size: 0x58 (Inherited: 0x58)
struct USQRestriction : USQSettings {

	bool TryGetLocalVehicle(struct ASQPlayerController* InPlayer, struct ASQVehicle*& OutVehicle); // Function Squad.SQRestriction.TryGetLocalVehicle // (Final|Native|Static|Protected|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8d1c70
	bool TryGetLocalFOB(struct ASQPlayerController* InPlayer, struct ASQForwardBase*& OutFOB); // Function Squad.SQRestriction.TryGetLocalFOB // (Final|Native|Static|Protected|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8d1ba0
	bool GetRestrictionReason(struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQRestriction.GetRestrictionReason // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d09d0
};

// Class Squad.SQCountParameterBase
// Size: 0x60 (Inherited: 0x58)
struct USQCountParameterBase : USQRestriction {
	enum class ESQScalingCountingMode Operation; // 0x58(0x01)
	bool UseForTeam; // 0x59(0x01)
	bool UseForPlayer; // 0x5a(0x01)
	char pad_5B[0x5]; // 0x5b(0x05)

	bool TryGetValueForTeam(struct ASQTeam* InTeam, int& OutValue); // Function Squad.SQCountParameterBase.TryGetValueForTeam // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x860600
	bool TryGetValueForPlayer(struct ASQPlayerController* InPlayer, int& OutValue); // Function Squad.SQCountParameterBase.TryGetValueForPlayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x860520
};

// Class Squad.SQCountParameter
// Size: 0x78 (Inherited: 0x60)
struct USQCountParameter : USQCountParameterBase {
	bool UseCurve; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UCurveFloat* Curve; // 0x68(0x08)
	float ValueToReach; // 0x70(0x04)
	int FixedAvailability; // 0x74(0x04)

	bool TryGetInputValueForTeam(struct ASQTeam* InTeam, float& OutValue); // Function Squad.SQCountParameter.TryGetInputValueForTeam // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x860440
	bool TryGetInputValueForPlayer(struct ASQPlayerController* InPlayer, float& OutValue); // Function Squad.SQCountParameter.TryGetInputValueForPlayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x860360
};

// Class Squad.SQCountParameter_Legacy
// Size: 0x98 (Inherited: 0x60)
struct USQCountParameter_Legacy : USQCountParameterBase {
	struct TArray<struct FSQRoleGroupLimit> GroupLimits; // 0x60(0x10)
	struct FSQRoleLimit RoleLimit; // 0x70(0x24)
	char pad_94[0x4]; // 0x94(0x04)

	bool IsPartOfRoleGroup(struct USQRoleSettings* InRole); // Function Squad.SQCountParameter_Legacy.IsPartOfRoleGroup // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x85f430
	struct FSQRoleGroupLimit GetGroupLimit(); // Function Squad.SQCountParameter_Legacy.GetGroupLimit // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x85f180
};

// Class Squad.SQCreateSquadButton
// Size: 0x318 (Inherited: 0x2e8)
struct USQCreateSquadButton : USQBaseButton {
	bool bUsesCustomName; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct ASQPlayerState* OwnerPlayerState; // 0x2f0(0x08)
	struct ASQPlayerController* OwnerPlayerController; // 0x2f8(0x08)
	struct UEditableTextBox* SquadNameTextBox; // 0x300(0x08)
	struct FScriptMulticastDelegate OnNewSquadCreated; // 0x308(0x10)

	void SquadNameTextCommit(struct FText Text, enum class ETextCommit CommitMethodEnum); // Function Squad.SQCreateSquadButton.SquadNameTextCommit // (Final|Native|Public|BlueprintCallable) // @ game+0x860230
	void SquadNameTextChanged(struct FText Text); // Function Squad.SQCreateSquadButton.SquadNameTextChanged // (Final|Native|Public|BlueprintCallable) // @ game+0x860140
};

// Class Squad.SQDamageType_Collision
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_Collision : USQDamageType {
};

// Class Squad.SQDamageType_Explosive
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_Explosive : USQDamageType {
};

// Class Squad.SQDamageType_ExplosiveRocket
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_ExplosiveRocket : USQDamageType_Explosive {
};

// Class Squad.SQDamageType_Fall
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_Fall : USQDamageType {
};

// Class Squad.SQDamageType_HeatExplosive
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_HeatExplosive : USQDamageType {
};

// Class Squad.SQDamageType_Thermite
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_Thermite : USQDamageType {
};

// Class Squad.SQDamageType_Underwater
// Size: 0x48 (Inherited: 0x48)
struct USQDamageType_Underwater : USQDamageType {
};

// Class Squad.SQWoundedDamageType
// Size: 0x48 (Inherited: 0x48)
struct USQWoundedDamageType : USQDamageType {
};

// Class Squad.SQDataGatheringComponent
// Size: 0xe8 (Inherited: 0xd8)
struct USQDataGatheringComponent : UActorComponent {
	struct UHeatMapRecorder* HeatMapRecorder; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)

	void RunMultiMapHeatMap(struct FString Filename); // Function Squad.SQDataGatheringComponent.RunMultiMapHeatMap // (Final|Exec|Native|Public) // @ game+0x85ff60
	void RecordHeatMap(float XStepSize, float YStepSize, float HeightOffset, bool bRecordRawValues, float PositionWaitTime, float YawRotationAngle, float PitchRotationAngle, struct FString Filename); // Function Squad.SQDataGatheringComponent.RecordHeatMap // (Final|Exec|Native|Public) // @ game+0x85fc70
};

// Class Squad.SQDataSettings
// Size: 0x160 (Inherited: 0x38)
struct USQDataSettings : UDeveloperSettings {
	bool UseAdditiveLayer; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct USQLevel* LevelClass; // 0x40(0x08)
	struct USQLayer* LayerClass; // 0x48(0x08)
	struct USQFaction* FactionClass; // 0x50(0x08)
	struct USQFactionSetup* FactionSetupClass; // 0x58(0x08)
	int SecondsTimeForCollectingCommanderChoices; // 0x60(0x04)
	int SecondsTimeForCollectingCommanderChoicesCooldown; // 0x64(0x04)
	int MinimumSquadSizeForVoting; // 0x68(0x04)
	int MinimumSquadsRequiredForVoting; // 0x6c(0x04)
	struct FSQVoteConfig CommanderVoteConfig; // 0x70(0x40)
	bool UseVoteLevel; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int LevelCountPerVote; // 0xb4(0x04)
	struct FSQVoteConfig LevelVoteConfig; // 0xb8(0x40)
	bool UseVoteLayer; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int LayerCountPerVote; // 0xfc(0x04)
	struct FSQVoteConfig LayerVoteConfig; // 0x100(0x40)
	bool UseVoteFactions; // 0x140(0x01)
	bool PreventSameFaction; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	int MaxInitializedTeamId; // 0x144(0x04)
	int MaxTeamId; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FSQVoteConfig> FactionVoteConfigs; // 0x150(0x10)

	bool UseVote(); // Function Squad.SQDataSettings.UseVote // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x860790
	struct USQDataSettings* GetDataSettings(); // Function Squad.SQDataSettings.GetDataSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x85f050
};

// Class Squad.SQDemoSpectator
// Size: 0x5b0 (Inherited: 0x598)
struct ASQDemoSpectator : APlayerController {
	char pad_598[0x18]; // 0x598(0x18)
};

// Class Squad.SQDeployable
// Size: 0x440 (Inherited: 0x248)
struct ASQDeployable : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	enum class ESQTeam InitialTeam; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct ASQForwardBase* OwningFob; // 0x260(0x08)
	float HalfBuiltTransitionHealth; // 0x268(0x04)
	float FullyBuiltTransitionHealth; // 0x26c(0x04)
	int Team; // 0x270(0x04)
	bool bIsFob; // 0x274(0x01)
	bool bPlaced; // 0x275(0x01)
	char pad_276[0x2]; // 0x276(0x02)
	struct UBoxComponent* StackingCollisionBox; // 0x278(0x08)
	struct UBoxComponent* PlacementCollisionBox; // 0x280(0x08)
	bool bUsePlacementCollisionBox; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct TArray<struct UClass*> AllowablePlacementIntersectionClasses; // 0x290(0x10)
	bool bUseLineOfSightTrace; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	struct FVector LineOfSightEndOffset; // 0x2a4(0x0c)
	float PositivePlacementTraceHeight; // 0x2b0(0x04)
	float NegativePlacementTraceHeight; // 0x2b4(0x04)
	float PositivePlacementVerticalAllowance; // 0x2b8(0x04)
	float NegativePlacementVerticalAllowance; // 0x2bc(0x04)
	float ViewPlacementCapsuleRadius; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct USQCoreStateComponent* StateObject; // 0x2c8(0x08)
	enum class ESQExplosiveType ExplosiveType; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FSQUsableData UsableData; // 0x2d8(0x40)
	struct USceneComponent* Completed; // 0x318(0x08)
	struct USceneComponent* Unbuilt; // 0x320(0x08)
	struct USceneComponent* HalfBuilt; // 0x328(0x08)
	struct USphereComponent* SimpleDetectionSphere; // 0x330(0x08)
	struct FScriptMulticastDelegate OnBuildStateChange; // 0x338(0x10)
	struct FScriptMulticastDelegate OnDestroyedEvent; // 0x348(0x10)
	enum class ESQBuildState BuildState; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct TArray<struct FSQDeployableChangeStateEffect> ChangeStateEffects; // 0x360(0x10)
	struct TArray<struct FSQDeployableStateDamageEffect> DamageStateEffects; // 0x370(0x10)
	int Cost; // 0x380(0x04)
	float MaxHealth; // 0x384(0x04)
	float InitialHealth; // 0x388(0x04)
	float Health; // 0x38c(0x04)
	bool bCanUnbuild; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<struct FSQDamageModifier> AllowableDamageTypes; // 0x398(0x10)
	enum class ESQDeployableSize Size; // 0x3a8(0x01)
	bool bIngoreNoResist; // 0x3a9(0x01)
	bool bStartUnbuilt; // 0x3aa(0x01)
	bool bTrackInFOB; // 0x3ab(0x01)
	bool bTrackInPlayerState; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct TArray<enum class EObjectTypeQuery> ObjectTypesToStack; // 0x3b0(0x10)
	bool bAllowStacking; // 0x3c0(0x01)
	bool bAllowPlacementOnPawns; // 0x3c1(0x01)
	bool bAllowPlacementOnSoldiers; // 0x3c2(0x01)
	bool bAllowPlacementOnVehicles; // 0x3c3(0x01)
	bool bAllowPlacementInWaterBodies; // 0x3c4(0x01)
	bool bAttachToUnderlyingActor; // 0x3c5(0x01)
	bool bDestroyWhenAttachedActorIsDestroyed; // 0x3c6(0x01)
	enum class ESQInvalidPlacementReason bCachedPlacementResult; // 0x3c7(0x01)
	bool bAlignToGround; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	float ValidPitchRange; // 0x3cc(0x04)
	float MaxCornerDifference; // 0x3d0(0x04)
	bool bRequiresSameTeam; // 0x3d4(0x01)
	bool bCantBePlacedInFOB; // 0x3d5(0x01)
	char pad_3D6[0x2]; // 0x3d6(0x02)
	struct FVector GhostOffset; // 0x3d8(0x0c)
	enum class ESQBuildState GhostBuildState; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct UMaterialInterface* GhostMaterial; // 0x3e8(0x08)
	bool bIsGhost; // 0x3f0(0x01)
	char pad_3F1[0x3]; // 0x3f1(0x03)
	float GhostRotationSpeed; // 0x3f4(0x04)
	float GhostRotationDelta; // 0x3f8(0x04)
	bool bAllowFireWeaponOverrideOnSQPlayerController; // 0x3fc(0x01)
	bool bAllowAltFireWeaponOverrideOnSQPlayerController; // 0x3fd(0x01)
	bool bRequiresFOB; // 0x3fe(0x01)
	char pad_3FF[0x1]; // 0x3ff(0x01)
	struct UMaterialInstanceDynamic* DynGhostInstance; // 0x400(0x08)
	char pad_408[0x10]; // 0x408(0x10)
	struct USQDeployableSettings* Setting; // 0x418(0x08)
	struct FDataTableRowHandle CachedInvalidPlacementReason; // 0x420(0x10)
	struct UDataTable* ErrorTable; // 0x430(0x08)
	bool WasEverBuilt; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)

	void UpdateState(); // Function Squad.SQDeployable.UpdateState // (Final|Native|Public|BlueprintCallable) // @ game+0x860770
	void SetTeam(int Team); // Function Squad.SQDeployable.SetTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8600b0
	void SetStateUnbuilt(); // Function Squad.SQDeployable.SetStateUnbuilt // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x860090
	void SetStateHalfBuilt(); // Function Squad.SQDeployable.SetStateHalfBuilt // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x860070
	void SetStateCompleted(); // Function Squad.SQDeployable.SetStateCompleted // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x860050
	void RemovedFromPlayersPlacedList(); // Function Squad.SQDeployable.RemovedFromPlayersPlacedList // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85ff40
	void PushSoldiersOutOfBounds(); // Function Squad.SQDeployable.PushSoldiersOutOfBounds // (Final|Native|Public|BlueprintCallable) // @ game+0x85fb30
	float PreModifyHealth(float DeltaHealth, struct AController* inst, bool bCausedByDamage); // Function Squad.SQDeployable.PreModifyHealth // (Native|Event|Public|BlueprintEvent) // @ game+0x85fa20
	void PostModifyHealth(float DeltaHealth, struct AController* inst, bool bCausedByDamage); // Function Squad.SQDeployable.PostModifyHealth // (Native|Event|Public|BlueprintEvent) // @ game+0x85f920
	void PlayStateChangeEffects(enum class ESQBuildState OldBuildState); // Function Squad.SQDeployable.PlayStateChangeEffects // (Final|Native|Public|BlueprintCallable) // @ game+0x85f8a0
	void Placed(); // Function Squad.SQDeployable.Placed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85f880
	void OnStateChangeClient(enum class ESQBuildState OldBuildState); // Function Squad.SQDeployable.OnStateChangeClient // (Final|Native|Public|BlueprintCallable) // @ game+0x85f800
	void OnRep_Team(); // Function Squad.SQDeployable.OnRep_Team // (Final|Native|Protected) // @ game+0x85f7e0
	void OnRep_BuildState(enum class ESQBuildState OldBuildState); // Function Squad.SQDeployable.OnRep_BuildState // (Final|Native|Public) // @ game+0x85f760
	void OnAttachedActorDestroyed(struct AActor* DestroyedActor); // Function Squad.SQDeployable.OnAttachedActorDestroyed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85f6d0
	void MulticastPlayDamageEffects(struct UDamageType* DamageTypeClass, struct FVector ImpactLocationZeroBased, enum class ESQBuildState OldBuildState, enum class ESQBuildState NewBuildState); // Function Squad.SQDeployable.MulticastPlayDamageEffects // (Net|Native|Event|NetMulticast|Public|HasDefaults) // @ game+0x85f590
	void MakeGhost(); // Function Squad.SQDeployable.MakeGhost // (Final|Native|Public|BlueprintCallable) // @ game+0x85f570
	bool IsValidPlacement(enum class ESQInvalidPlacementReason& Reason); // Function Squad.SQDeployable.IsValidPlacement // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85f4d0
	bool IsGhost(); // Function Squad.SQDeployable.IsGhost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85f400
	bool IsDeployableEmpty(); // Function Squad.SQDeployable.IsDeployableEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x85f3d0
	void InvalidatePlacement(); // Function Squad.SQDeployable.InvalidatePlacement // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85f3b0
	void GoToBuildState(enum class ESQBuildState InBuildState); // Function Squad.SQDeployable.GoToBuildState // (Final|BlueprintAuthorityOnly|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x85f330
	enum class ESQTrackDeployableResult GetTrackDeployableResult(struct ASQPlayerState* PlayerState, bool bIncludeSelf); // Function Squad.SQDeployable.GetTrackDeployableResult // (Native|Public|BlueprintCallable) // @ game+0x85f260
	struct ASQForwardBase* GetNearestFOB(bool bIsFriendly); // Function Squad.SQDeployable.GetNearestFOB // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x85f1c0
	struct FText GetFailedSpawnReasonText(enum class ESQInvalidPlacementReason Reason); // Function Squad.SQDeployable.GetFailedSpawnReasonText // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85f080
	enum class ESQBuildState GetBuildState(); // Function Squad.SQDeployable.GetBuildState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x85f020
	void Die(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQDeployable.Die // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x85eea0
	void ConstructionHit(struct ASQSoldier* Activator, struct AController* inst, float Amount); // Function Squad.SQDeployable.ConstructionHit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x85eda0
	void CompletedConstruction(); // Function Squad.SQDeployable.CompletedConstruction // (Native|Event|Public|BlueprintEvent) // @ game+0x85ed80
	void BPOnGhostMade(); // Function Squad.SQDeployable.BPOnGhostMade // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnDie(float KillingDamage, struct FDamageEvent& DamageEvent, struct AController* Killer, struct AActor* DamageCauser); // Function Squad.SQDeployable.BPOnDie // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void BP_OnStateChangeClient(enum class ESQBuildState OldBuildState); // Function Squad.SQDeployable.BP_OnStateChangeClient // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_OnStateChange(enum class ESQBuildState OldBuildState); // Function Squad.SQDeployable.BP_OnStateChange // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	enum class ESQTrackDeployableResult BP_ExtraTrackDeployableRules(struct ASQPlayerState* PlayerState, bool bIncludeSelf); // Function Squad.SQDeployable.BP_ExtraTrackDeployableRules // (Native|Event|Public|BlueprintEvent) // @ game+0x85ecb0
	void AttachToUnderlyingActor(); // Function Squad.SQDeployable.AttachToUnderlyingActor // (Native|Public|BlueprintCallable) // @ game+0x85ec90
};

// Class Squad.SQDeployableItem
// Size: 0x460 (Inherited: 0x440)
struct ASQDeployableItem : ASQDeployable {
	struct ASQPlayerController* InstigatingPlayerController; // 0x440(0x08)
	struct ASQPlayerState* InstigatingPlayerState; // 0x448(0x08)
	int MaxAllowedPerPlayerInGame; // 0x450(0x04)
	enum class ESQTrackDeployableResult TrackDeployableOverMaxResult; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct ASQEquipableItem* EquippableInstigatorClass; // 0x458(0x08)
};

// Class Squad.SQDeployableAmmoBag
// Size: 0x490 (Inherited: 0x460)
struct ASQDeployableAmmoBag : ASQDeployableItem {
	char pad_460[0x8]; // 0x460(0x08)
	struct FScriptMulticastDelegate AmmoBagAmmoUpdatedEvent; // 0x468(0x10)
	struct FScriptMulticastDelegate RearmSourceAmmoUpdatedEvent; // 0x478(0x10)
	float AmmoCount; // 0x488(0x04)
	float OutOfAmmoLifetime; // 0x48c(0x04)

	void OnRep_AmmoCount(); // Function Squad.SQDeployableAmmoBag.OnRep_AmmoCount // (Final|Native|Public) // @ game+0x864600
	void BP_PickedUp(struct ASQEquipableItem* EquippableAmmoBag); // Function Squad.SQDeployableAmmoBag.BP_PickedUp // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQDeployableChildActorComponent
// Size: 0x250 (Inherited: 0x250)
struct USQDeployableChildActorComponent : UChildActorComponent {
	enum class ESQBuildState SpawnBuildState; // 0x249(0x01)
	enum class ESQBuildState DespawnBuildState; // 0x24a(0x01)
	bool bShouldUseSpawningTeam; // 0x24b(0x01)
	char TimesSpawnable; // 0x24c(0x01)

	void OnDeployableStateChange(enum class ESQBuildState BuildState); // Function Squad.SQDeployableChildActorComponent.OnDeployableStateChange // (Native|Public) // @ game+0x864560
};

// Class Squad.SQDeployableInteractable
// Size: 0x460 (Inherited: 0x460)
struct ASQDeployableInteractable : ASQDeployableItem {

	void BP_PickedUp(struct ASQEquipableItem* EquippableDeployableInteractable); // Function Squad.SQDeployableInteractable.BP_PickedUp // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQItemStaticInfo
// Size: 0x528 (Inherited: 0x28)
struct USQItemStaticInfo : UObject {
	struct UAnimMontage* BaseWeaponMontage; // 0x28(0x08)
	struct UAnimMontage* Base1pMontage; // 0x30(0x08)
	struct UAnimMontage* Base3pMontage; // 0x38(0x08)
	struct UAnimSequence* SprintToProne3p; // 0x40(0x08)
	struct UAnimSequence* StandToProne3p; // 0x48(0x08)
	struct UAnimSequence* ProneToStand3p; // 0x50(0x08)
	struct UAnimSequence* CrouchToProne3p; // 0x58(0x08)
	struct UAnimSequence* ProneToCrouch3p; // 0x60(0x08)
	struct UBlendSpace1D* AO1D_StandPitch; // 0x68(0x08)
	struct UBlendSpace1D* AO1D_CrouchPitch; // 0x70(0x08)
	struct UBlendSpace1D* AO1D_PronePitch; // 0x78(0x08)
	struct UBlendSpace* AO_BipodStandCrouchPitch; // 0x80(0x08)
	struct UAnimSequence* AO1D_StandYawSF; // 0x88(0x08)
	struct UAnimSequence* AO1D_CrouchYawSF; // 0x90(0x08)
	struct UAnimSequence* AO1D_ProneYawSF; // 0x98(0x08)
	struct UAnimSequence* StandTurnRight; // 0xa0(0x08)
	struct UAnimSequence* StandTurnLeft; // 0xa8(0x08)
	struct UAnimSequence* CrouchTurnRight; // 0xb0(0x08)
	struct UAnimSequence* CrouchTurnLeft; // 0xb8(0x08)
	struct UAnimSequence* ProneTurnRight; // 0xc0(0x08)
	struct UAnimSequence* ProneTurnLeft; // 0xc8(0x08)
	struct UAnimMontage* ReloadWeaponMontage; // 0xd0(0x08)
	struct UAnimMontage* Reload1pMontage; // 0xd8(0x08)
	struct UAnimMontage* Reload3pMontage; // 0xe0(0x08)
	bool bCheckCurrentMagazineForEquip; // 0xe8(0x01)
	bool bCheckCurrentMagazineForUnequip; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct UAnimMontage* EmptyEquipWeaponMontage; // 0xf0(0x08)
	struct UAnimMontage* EmptyEquip1pMontage; // 0xf8(0x08)
	struct UAnimMontage* EmptyEquip3pMontage; // 0x100(0x08)
	struct UAnimMontage* EquipWeaponMontage; // 0x108(0x08)
	struct UAnimMontage* Equip1pMontage; // 0x110(0x08)
	struct UAnimMontage* Equip3pMontage; // 0x118(0x08)
	struct UAnimMontage* EmptyUnequipWeaponMontage; // 0x120(0x08)
	struct UAnimMontage* EmptyUnequip1pMontage; // 0x128(0x08)
	struct UAnimMontage* EmptyUnequip3pMontage; // 0x130(0x08)
	struct UAnimMontage* UnequipWeaponMontage; // 0x138(0x08)
	struct UAnimMontage* Unequip1pMontage; // 0x140(0x08)
	struct UAnimMontage* Unequip3pMontage; // 0x148(0x08)
	struct UAnimMontage* BobbingSprint1pMontage; // 0x150(0x08)
	struct UAnimMontage* BobbingEndSprint1pMontage; // 0x158(0x08)
	struct UAnimMontage* BobbingAddSprint1pMontage; // 0x160(0x08)
	struct UBlendSpace1D* BS1D_3pStandSprintType; // 0x168(0x08)
	struct UBlendSpace1D* BS1D_3pCrouchSprintType; // 0x170(0x08)
	struct UAnimSequence* SprintStop3p; // 0x178(0x08)
	struct UBlendSpace* BS_3pStandJogType; // 0x180(0x08)
	struct UBlendSpace* BS_3pStandWalkType; // 0x188(0x08)
	struct UBlendSpace* BS_3pCrouchWalkType; // 0x190(0x08)
	struct UBlendSpace1D* BS1D_3pProneCrawlType; // 0x198(0x08)
	struct UAnimSequence* StandStopMove; // 0x1a0(0x08)
	struct UAnimSequence* CrouchStopMove; // 0x1a8(0x08)
	struct UAnimMontage* BobbingMove1pMontage; // 0x1b0(0x08)
	struct UAnimMontage* Idle1pMontage; // 0x1b8(0x08)
	struct UAnimMontage* LeanLeftBegin3pMontage; // 0x1c0(0x08)
	struct UAnimMontage* LeanLeftEnd3pMontage; // 0x1c8(0x08)
	struct UAnimMontage* LeanRightBegin3pMontage; // 0x1d0(0x08)
	struct UAnimMontage* LeanRightEnd3pMontage; // 0x1d8(0x08)
	struct UAnimSequence* StandLeanLeftShuffle; // 0x1e0(0x08)
	struct UAnimSequence* StandLeanRightShuffle; // 0x1e8(0x08)
	struct UAnimSequence* CrouchLeanLeftShuffle; // 0x1f0(0x08)
	struct UAnimSequence* CrouchLeanRightShuffle; // 0x1f8(0x08)
	struct UAnimMontage* Lowered1pMontage; // 0x200(0x08)
	struct UAnimMontage* Lowered3pMontage; // 0x208(0x08)
	struct UAnimMontage* LoweredCrouch3pMontage; // 0x210(0x08)
	struct UAnimMontage* Raised1pMontage; // 0x218(0x08)
	struct UAnimMontage* Raised3pMontage; // 0x220(0x08)
	struct UAnimMontage* RaisedCrouch3pMontage; // 0x228(0x08)
	struct FSQMontageSectionNames MoveBobbingEndLoopSectionNames; // 0x230(0x28)
	struct FSQMontageSectionNames SprintBobbingEndLoopSectionNames; // 0x258(0x28)
	struct UBlendSpaceBase* BobbingProneMoveType; // 0x280(0x08)
	struct UAnimSequence* ProneMoveTypeAdditiveReference; // 0x288(0x08)
	struct UAnimSequence* OutProneMoveType; // 0x290(0x08)
	struct UAnimSequence* OutProneMoveTypeNonadditive; // 0x298(0x08)
	float LeftHandWeaponIkAlpha; // 0x2a0(0x04)
	float RightHand3pWeaponIkAlpha; // 0x2a4(0x04)
	float JogPlayRateFactorMinRange; // 0x2a8(0x04)
	float SprintPlayRateFactorMinRange; // 0x2ac(0x04)
	float SprintBlendFactorMinRange; // 0x2b0(0x04)
	float SprintBlendSpeedInterpSpeed; // 0x2b4(0x04)
	struct UAnimSequence* SprintStaticPose; // 0x2b8(0x08)
	float LoweringBlendOutTime; // 0x2c0(0x04)
	float IdleBlendOutTime; // 0x2c4(0x04)
	struct TArray<struct FSQBoredMontageSet> BoredMontage; // 0x2c8(0x10)
	float BoredMaxFrequency; // 0x2d8(0x04)
	float BoredAbortBlendOutTime; // 0x2dc(0x04)
	struct TArray<struct FSQMutualWeapon> MutualWeapons; // 0x2e0(0x10)
	float EmptyUnequipDuration; // 0x2f0(0x04)
	float EmptyEquipDuration; // 0x2f4(0x04)
	bool bUseAutoLowering; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	float LoweringTimer; // 0x2fc(0x04)
	float ItemCollisionDistance; // 0x300(0x04)
	bool bReturnToADSAfterItemCollision; // 0x304(0x01)
	bool bAllowRaisingAboveHead; // 0x305(0x01)
	char pad_306[0x2]; // 0x306(0x02)
	float RaisingBlendOutTime; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
	struct UCameraShake* FireShake; // 0x310(0x08)
	struct FVector StandLoc; // 0x318(0x0c)
	struct FVector CrouchLoc; // 0x324(0x0c)
	struct FVector ProneLoc; // 0x330(0x0c)
	struct FVector BipodLoc; // 0x33c(0x0c)
	float StandLocBlendTime; // 0x348(0x04)
	struct FRotator OffsetLineOfFire; // 0x34c(0x0c)
	struct FVector StandLeanLeftRootOffset; // 0x358(0x0c)
	struct FRotator StandLeanLeftWeaponRotation; // 0x364(0x0c)
	struct FRotator StandLeanLeftCameraRotation; // 0x370(0x0c)
	struct FVector StandLeanRightRootOffset; // 0x37c(0x0c)
	struct FRotator StandLeanRightWeaponRotation; // 0x388(0x0c)
	struct FRotator StandLeanRightCameraRotation; // 0x394(0x0c)
	struct FVector CrouchLeanLeftRootOffset; // 0x3a0(0x0c)
	struct FRotator CrouchLeanLeftWeaponRotation; // 0x3ac(0x0c)
	struct FRotator CrouchLeanLeftCameraRotation; // 0x3b8(0x0c)
	struct FVector CrouchLeanRightRootOffset; // 0x3c4(0x0c)
	struct FRotator CrouchLeanRightWeaponRotation; // 0x3d0(0x0c)
	struct FRotator CrouchLeanRightCameraRotation; // 0x3dc(0x0c)
	struct FVector ProneLeanLeftRootOffset; // 0x3e8(0x0c)
	struct FRotator ProneLeanLeftWeaponRotation; // 0x3f4(0x0c)
	struct FRotator ProneLeanLeftCameraRotation; // 0x400(0x0c)
	struct FVector ProneLeanRightRootOffset; // 0x40c(0x0c)
	struct FRotator ProneLeanRightWeaponRotation; // 0x418(0x0c)
	struct FRotator ProneLeanRightCameraRotation; // 0x424(0x0c)
	struct FVector FpvLowerRootBoneOffset; // 0x430(0x0c)
	struct FVector FpvTorsoCameraOffset; // 0x43c(0x0c)
	int WeaponSpringSide; // 0x448(0x04)
	float WeaponSpringStiffness; // 0x44c(0x04)
	float WeaponSpringCriticalDampingFactor; // 0x450(0x04)
	float WeaponSpringMass; // 0x454(0x04)
	float WeaponSpringFactor2; // 0x458(0x04)
	float WeaponMeshSpringLocDelayFactor; // 0x45c(0x04)
	float WeaponMeshSpringRotDelayFactor; // 0x460(0x04)
	float WeaponSpringClamp; // 0x464(0x04)
	float WeaponSpringTurnSpeedToFullIntensity; // 0x468(0x04)
	struct FRotator StrafeSpringRotator; // 0x46c(0x0c)
	struct FVector StrafeSpringVector; // 0x478(0x0c)
	struct FRotator AdsStrafeSpringRotator; // 0x484(0x0c)
	struct FName SoundsSocket; // 0x490(0x08)
	struct USoundCue* FireSound1P; // 0x498(0x08)
	struct USoundCue* FireSound3P; // 0x4a0(0x08)
	struct USoundCue* ReloadSound1P; // 0x4a8(0x08)
	struct USoundCue* ReloadSound3P; // 0x4b0(0x08)
	struct USoundCue* DryReloadSound1P; // 0x4b8(0x08)
	struct USoundCue* DryReloadSound3P; // 0x4c0(0x08)
	struct USoundCue* EquipSound1P; // 0x4c8(0x08)
	struct USoundCue* EquipSound3P; // 0x4d0(0x08)
	struct USoundCue* UnequipSound1P; // 0x4d8(0x08)
	struct USoundCue* UnequipSound3P; // 0x4e0(0x08)
	struct USoundBase* IntoForcedLoweringSound; // 0x4e8(0x08)
	struct USoundBase* OutOfForcedLoweringSound; // 0x4f0(0x08)
	struct USoundBase* IntoForcedRaisingSound; // 0x4f8(0x08)
	struct USoundBase* OutOfForcedRaisingSound; // 0x500(0x08)
	bool bUsableInMainBase; // 0x508(0x01)
	char pad_509[0x7]; // 0x509(0x07)
	struct FText ItemUsageNullifiedText; // 0x510(0x18)
};

// Class Squad.SQDeployableItemStaticInfo
// Size: 0x558 (Inherited: 0x528)
struct USQDeployableItemStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* PlacingDeployableWeaponMontage; // 0x528(0x08)
	struct UAnimMontage* PlacingDeployable1pMontage; // 0x530(0x08)
	struct UAnimMontage* PlacingDeployable3pMontage; // 0x538(0x08)
	struct ASQDeployableItem* DeployableClass; // 0x540(0x08)
	struct USQDeployableSettings* Deployable; // 0x548(0x08)
	float PlacingDeployableDuration; // 0x550(0x04)
	float FinishPlacingDeployableBlendOutDuration; // 0x554(0x04)
};

// Class Squad.SQPawn
// Size: 0x340 (Inherited: 0x2a8)
struct ASQPawn : APawn {
	char pad_2A8[0x8]; // 0x2a8(0x08)
	char bClientUpdating : 1; // 0x2b0(0x01)
	char pad_2B0_1 : 7; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	bool bUseEngineActorReplication; // 0x2b4(0x01)
	bool bIsUsingNewMovementComponent; // 0x2b5(0x01)
	enum class ESQTeam Team; // 0x2b6(0x01)
	char pad_2B7[0x1]; // 0x2b7(0x01)
	struct FSQBasedMovementInfo BasedMovement; // 0x2b8(0x30)
	struct USQCoreStateComponent* StateObject; // 0x2e8(0x08)
	struct FVector BaseTranslationOffset; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FQuat BaseRotationOffset; // 0x300(0x10)
	bool bInBaseReplication; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FScriptMulticastDelegate OnPawnPossessedEvent; // 0x318(0x10)
	struct FScriptMulticastDelegate OnPawnUnPossessedEvent; // 0x328(0x10)
	char pad_338[0x8]; // 0x338(0x08)

	void SetTeam(enum class ESQTeam Team); // Function Squad.SQPawn.SetTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8ac790
	void OnRep_Team(); // Function Squad.SQPawn.OnRep_Team // (Native|Public) // @ game+0x8abc00
	void OnPossessionChanged__DelegateSignature(); // DelegateFunction Squad.SQPawn.OnPossessionChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	enum class ESQTeam GetTeam(); // Function Squad.SQPawn.GetTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8aad70
	void BlueprintCalcCamera(float DeltaTime, struct FVector InLocation, struct FRotator InRotation, float InFOV, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // Function Squad.SQPawn.BlueprintCalcCamera // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQVehicleSeat
// Size: 0x3d0 (Inherited: 0x340)
struct ASQVehicleSeat : ASQPawn {
	char pad_340[0x20]; // 0x340(0x20)
	float ADSSpeed; // 0x360(0x04)
	float PitchLimit; // 0x364(0x04)
	float MinPitchLimit; // 0x368(0x04)
	float YawLimit; // 0x36c(0x04)
	float MinYawLimit; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct USQVehicleSeatComponent* ParentSeatComponent; // 0x378(0x08)
	enum class ESQListenerType ListenerType; // 0x380(0x01)
	bool bIsCameraInitialized; // 0x381(0x01)
	bool bShouldSendClientSideCameraUpdate; // 0x382(0x01)
	char pad_383[0x5]; // 0x383(0x05)
	struct TArray<struct USQVehicleComponent*> VehicleComponents; // 0x388(0x10)
	struct USQVehicleComponent* CachedVehicleEngine; // 0x398(0x08)
	bool bTurnOut; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct USQVehicleInventoryComponent* CachedVehicleInventory; // 0x3a8(0x08)
	struct UCameraComponent* CachedCameraComponent; // 0x3b0(0x08)
	float SeatHealth; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct USQFreeLookComponent* FreeLookComponent; // 0x3c0(0x08)
	struct USQMovementComponentManager* MovementComponentManager; // 0x3c8(0x08)

	void SetTurnOut(bool bEnabled); // Function Squad.SQVehicleSeat.SetTurnOut // (Final|Native|Public|BlueprintCallable) // @ game+0x911ae0
	void ServerSetTurnOut(bool bEnabled); // Function Squad.SQVehicleSeat.ServerSetTurnOut // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x911530
	void ServerOnInteract(); // Function Squad.SQVehicleSeat.ServerOnInteract // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x9114e0
	void ServerCancelPlayerExit(struct ASQPlayerController* SPC); // Function Squad.SQVehicleSeat.ServerCancelPlayerExit // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x9113d0
	void RequestChangeSeat(struct ASQPlayerController* Player, int RequestedSeat); // Function Squad.SQVehicleSeat.RequestChangeSeat // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x9111d0
	void OverlayZoom(); // Function Squad.SQVehicleSeat.OverlayZoom // (Native|Event|Public|BlueprintEvent) // @ game+0x9111b0
	void OverlayUnzoom(); // Function Squad.SQVehicleSeat.OverlayUnzoom // (Native|Event|Public|BlueprintEvent) // @ game+0x911190
	void OnRep_TurnOut(); // Function Squad.SQVehicleSeat.OnRep_TurnOut // (Final|Native|Public) // @ game+0x911010
	void OnRep_SeatHealth(float PreviousHealth); // Function Squad.SQVehicleSeat.OnRep_SeatHealth // (Final|Native|Protected) // @ game+0x910f70
	void OnPrevItem(); // Function Squad.SQVehicleSeat.OnPrevItem // (Native|Public|BlueprintCallable) // @ game+0x910f10
	void OnNextItem(); // Function Squad.SQVehicleSeat.OnNextItem // (Native|Public|BlueprintCallable) // @ game+0x910ef0
	struct USceneComponent* GetWeaponAttachComponent(); // Function Squad.SQVehicleSeat.GetWeaponAttachComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x881b10
	struct USQVehicleSeatComponent* GetVehicleSeatComponent(); // Function Squad.SQVehicleSeat.GetVehicleSeatComponent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910ba0
	struct USQVehicleResourceWeaponInventoryComponent* GetVehicleResourceInventory(); // Function Squad.SQVehicleSeat.GetVehicleResourceInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910b70
	struct USQVehicleInventoryComponent* GetVehicleInventory(); // Function Squad.SQVehicleSeat.GetVehicleInventory // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910b40
	struct USQVehicleComponent* GetVehicleEngine(); // Function Squad.SQVehicleSeat.GetVehicleEngine // (Final|Native|Public|BlueprintCallable) // @ game+0x910b10
	struct ASQVehicle* GetVehicle(); // Function Squad.SQVehicleSeat.GetVehicle // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c2a0
	struct USceneComponent* GetSoldierAttachComponent(); // Function Squad.SQVehicleSeat.GetSoldierAttachComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x910a50
	float GetSeatHealth(); // Function Squad.SQVehicleSeat.GetSeatHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910970
	float GetNormalizedSeatHealth(); // Function Squad.SQVehicleSeat.GetNormalizedSeatHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9108e0
	struct USkinnedMeshComponent* GetMasterPoseComponent(); // Function Squad.SQVehicleSeat.GetMasterPoseComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x910870
	struct USceneComponent* GetDefaultCameraLocationComponent(); // Function Squad.SQVehicleSeat.GetDefaultCameraLocationComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x910810
	struct UCameraComponent* GetCameraComponent(); // Function Squad.SQVehicleSeat.GetCameraComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x9107b0
	struct USceneComponent* GetADSCameraLocationComponent(); // Function Squad.SQVehicleSeat.GetADSCameraLocationComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x910720
	struct USceneComponent* Get3PAttachComponent(); // Function Squad.SQVehicleSeat.Get3PAttachComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x9106f0
	struct USceneComponent* Get1PAttachComponent(); // Function Squad.SQVehicleSeat.Get1PAttachComponent // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x9106c0
};

// Class Squad.SQVehicle
// Size: 0x8a0 (Inherited: 0x3d0)
struct ASQVehicle : ASQVehicleSeat {
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct FSQUsableData UsableData; // 0x3e0(0x40)
	struct ASQDestroyedVehicle* DefaultDestroyedVehicleActorClass; // 0x420(0x08)
	struct TArray<struct FSQVehicleDestroyedConfig> DestroyedVehicleConfig; // 0x428(0x10)
	struct ASQLastingEffect* TemperatureLastingEffectClass; // 0x438(0x08)
	struct FName TemperatureLastingEffectAttachSocket; // 0x440(0x08)
	struct ASQLastingEffect* TemperatureLastingEffect; // 0x448(0x08)
	struct USQVehicleBurningComponent* BurningComponent; // 0x450(0x08)
	struct UCameraShake* ImpactCameraShake; // 0x458(0x08)
	float ImpactEffectNormalForceThreshold; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct USoundCue* LightImpactSound; // 0x468(0x08)
	struct UParticleSystem* LightImpactEffect; // 0x470(0x08)
	struct USoundCue* ImpactSound; // 0x478(0x08)
	struct UParticleSystem* ImpactEffect; // 0x480(0x08)
	bool bDoParticlesUseRotation; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct USQPhysicalMaterialVehiclesEffects* PhysMatEffectsClass; // 0x490(0x08)
	struct UParticleSystemComponent* MistPSC; // 0x498(0x08)
	struct UParticleSystemComponent* PropellerMistPSC; // 0x4a0(0x08)
	struct UAudioComponent* MistAC; // 0x4a8(0x08)
	struct UAudioComponent* PropellerMistAC; // 0x4b0(0x08)
	char pad_4B8[0x8]; // 0x4b8(0x08)
	struct FTimerHandle MistTimerHandle; // 0x4c0(0x08)
	float MistDepthUpdateInterval; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct USQVehicleCenterOfMassFXComponent* CenterOfMassFXComponent; // 0x4d0(0x08)
	struct FScriptMulticastDelegate OnVehicleRepairEvent; // 0x4d8(0x10)
	struct ASQDestroyedVehicle* DestroyedVehicleActor; // 0x4e8(0x08)
	struct USQVehicleClaim* ClaimInfo; // 0x4f0(0x08)
	struct ASQSquadState* ClaimedBySquad; // 0x4f8(0x08)
	bool bClaimable; // 0x500(0x01)
	bool bEnterableWithoutClaim; // 0x501(0x01)
	bool bDrivableWithoutClaim; // 0x502(0x01)
	bool bNonSquadMembersMayEnterWhenClaimed; // 0x503(0x01)
	char pad_504[0x4]; // 0x504(0x04)
	struct FText NotClaimedCantEnterErrorMessage; // 0x508(0x18)
	struct FText FullVehicleCantEnterErrorMessage; // 0x520(0x18)
	struct FText EnemyVehicleCantEnterErrorMessage; // 0x538(0x18)
	struct FText NotClaimedNeedsApprovalErrorMessage; // 0x550(0x18)
	struct FText NotClaimedNotInSquadErrorMessage; // 0x568(0x18)
	struct FText WrongRoleForClaimErrorMessage; // 0x580(0x18)
	struct FText WrongRoleForSeatErrorMessage; // 0x598(0x18)
	struct FText FullVehicleOrWrongRoleCantEnterErrorMessage; // 0x5b0(0x18)
	struct FText SeatFilledErrorMessage; // 0x5c8(0x18)
	struct FText SeatBeingEnteredErrorMessage; // 0x5e0(0x18)
	struct FText ClaimedByAnotherSquadCantEnterErrorMessage; // 0x5f8(0x18)
	struct FText CrewmanRole; // 0x610(0x18)
	struct FText PilotRole; // 0x628(0x18)
	struct UCurveFloat* VelocityVsCollisionDamageCurve; // 0x640(0x08)
	float CollisionDamageThesholdGs; // 0x648(0x04)
	float CollisionsDamageVelocityThreshold; // 0x64c(0x04)
	float VehicleToOccupantCollisionDamageScaler; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct USQBoundaryListener* BoundaryListener; // 0x658(0x08)
	struct USQCollisionDamage* CollisionDamage; // 0x660(0x08)
	struct USQVehicleBuoyancyComponent* BuoyancyComponent; // 0x668(0x08)
	char pad_670[0x8]; // 0x670(0x08)
	enum class ESQVehicleType VehicleType; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct UTexture* VehicleIconTexture; // 0x680(0x08)
	struct FLinearColor VehicleIconColor; // 0x688(0x10)
	struct FVector2D VehicleIconOffset; // 0x698(0x08)
	struct FVector2D VehicleIconSize; // 0x6a0(0x08)
	float LastRepairedTime; // 0x6a8(0x04)
	float PercentDriverGetsForKill; // 0x6ac(0x04)
	float LastSeatEventTime; // 0x6b0(0x04)
	bool bPreventVehicleEntrance; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	float MaxVehicleEntryDistance; // 0x6b8(0x04)
	char pad_6BC[0x4]; // 0x6bc(0x04)
	struct FSQVehicleSeatConfig DriverSeatConfig; // 0x6c0(0x50)
	struct TArray<struct FSQVehicleSeatConfig> AdditionalSeatsConfig; // 0x710(0x10)
	struct TArray<struct USQVehicleSeatComponent*> VehicleSeats; // 0x720(0x10)
	struct USkeletalMeshComponent* VehicleMesh; // 0x730(0x08)
	bool bIsVehicleDamagedByRadialExplosions; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct FScriptMulticastDelegate OnVehicleDestroyed; // 0x740(0x10)
	struct FScriptMulticastDelegate OnVehicleDamaged; // 0x750(0x10)
	struct FScriptMulticastDelegate OnPlayerEntered; // 0x760(0x10)
	struct FScriptMulticastDelegate OnPlayerExited; // 0x770(0x10)
	struct FScriptMulticastDelegate OnPlayerSwitchedSeats; // 0x780(0x10)
	struct FScriptMulticastDelegate AmmoUpdatedEvent; // 0x790(0x10)
	struct USoundCue* OnVehicleEnterSound; // 0x7a0(0x08)
	struct USoundCue* OnVehicleExitSound; // 0x7a8(0x08)
	struct USoundCue* OnSeatSwitchSound; // 0x7b0(0x08)
	float ExitSpeedOffset; // 0x7b8(0x04)
	char pad_7BC[0x4]; // 0x7bc(0x04)
	struct USQBuffManager* Buffs; // 0x7c0(0x08)
	float Health; // 0x7c8(0x04)
	float MaxHealth; // 0x7cc(0x04)
	struct UDamageType* LastDamageTypeClass; // 0x7d0(0x08)
	struct AController* LastDamageInstigator; // 0x7d8(0x08)
	bool bCanStackRepairers; // 0x7e0(0x01)
	bool bUseDelayBeforeWreck; // 0x7e1(0x01)
	char pad_7E2[0x2]; // 0x7e2(0x02)
	float WreckDelay; // 0x7e4(0x04)
	float MaxRepairToolLimit; // 0x7e8(0x04)
	float LastDamageInstigatorTimeoutThreshold; // 0x7ec(0x04)
	char pad_7F0[0x8]; // 0x7f0(0x08)
	float FlipPitchThreshold; // 0x7f8(0x04)
	float FlipRollThreshold; // 0x7fc(0x04)
	float FlipSpeedThreshold; // 0x800(0x04)
	char pad_804[0x4]; // 0x804(0x04)
	float FlipRotationExceededTimeThreshold; // 0x808(0x04)
	float DestroyTime; // 0x80c(0x04)
	bool bHasBeenDestroyed; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct TArray<struct FSQDamageModifier> AllowableDamageTypes; // 0x818(0x10)
	struct FSQDamageTypeEffects DamageEffects; // 0x828(0x28)
	struct USQVehicleUIStaticDataAsset* StaticUIData; // 0x850(0x08)
	float MaxThrottle; // 0x858(0x04)
	char pad_85C[0x4]; // 0x85c(0x04)
	struct TArray<struct FSQVehicleQueueEntry> PlayerSeatPairInfoArray; // 0x860(0x10)
	char pad_870[0x8]; // 0x870(0x08)
	struct TArray<struct AActor*> CurrentRepairers; // 0x878(0x10)
	struct FSQVehicleSettingEntry Setting; // 0x888(0x10)
	char pad_898[0x8]; // 0x898(0x08)

	void UpdateMistParticleSystemsDepthCalculations(); // Function Squad.SQVehicle.UpdateMistParticleSystemsDepthCalculations // (Final|Native|Public) // @ game+0x90aab0
	void ToggleMistParticleSystemsDepthCalculation(bool bActivate); // Function Squad.SQVehicle.ToggleMistParticleSystemsDepthCalculation // (Final|Native|Public) // @ game+0x90aa20
	void SwitchedSeat(struct ASQSoldier* Soldier, struct USQVehicleSeatComponent* PreviousSeat, struct USQVehicleSeatComponent* NewSeat); // Function Squad.SQVehicle.SwitchedSeat // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x90a920
	void SetEffectPhysmatParams(struct UParticleSystemComponent* ParticleSystem, struct USQPhysicalMaterial* SQPhysMat); // Function Squad.SQVehicle.SetEffectPhysmatParams // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x90a860
	void ServerDebugVehicleFullHealth(); // Function Squad.SQVehicle.ServerDebugVehicleFullHealth // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x90a6f0
	void ResetLastSeatEventTime(); // Function Squad.SQVehicle.ResetLastSeatEventTime // (Final|Native|Public|BlueprintCallable) // @ game+0x90a6b0
	void RepairVehicle(struct AActor* SourceRepairer, enum class ESQRepairSource RepairSource, float RepairAmount, float SoldierHealAmount); // Function Squad.SQVehicle.RepairVehicle // (Native|Public|BlueprintCallable) // @ game+0x90a570
	void PlayerRequestLeaveSeat(struct ASQPlayerController* Player); // Function Squad.SQVehicle.PlayerRequestLeaveSeat // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x90a450
	void OutOfBoundsKillCallback(); // Function Squad.SQVehicle.OutOfBoundsKillCallback // (Final|Native|Public) // @ game+0x90a430
	void OnWaterBodyExited(); // Function Squad.SQVehicle.OnWaterBodyExited // (Native|Public) // @ game+0x90a410
	void OnWaterBodyEntered(); // Function Squad.SQVehicle.OnWaterBodyEntered // (Native|Public) // @ game+0x90a3f0
	void OnVehicleRepaired(); // Function Squad.SQVehicle.OnVehicleRepaired // (Final|Native|Public) // @ game+0x90a3d0
	void OnRep_HealthChanged(); // Function Squad.SQVehicle.OnRep_HealthChanged // (Final|Native|Public) // @ game+0x843e90
	void OnRep_HasBeenDestroyed(); // Function Squad.SQVehicle.OnRep_HasBeenDestroyed // (Native|Protected) // @ game+0x90a3b0
	void OnRep_DestroyedState(); // Function Squad.SQVehicle.OnRep_DestroyedState // (Native|Public) // @ game+0x90a390
	void OnExitBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQVehicle.OnExitBoundary // (Final|Native|Public) // @ game+0x90a2d0
	void OnEnterBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQVehicle.OnEnterBoundary // (Final|Native|Public) // @ game+0x90a210
	void OnCenterOfMassExitWaterBody(); // Function Squad.SQVehicle.OnCenterOfMassExitWaterBody // (Native|Public) // @ game+0x90a1f0
	void OnCenterOfMassEnterWaterBody(); // Function Squad.SQVehicle.OnCenterOfMassEnterWaterBody // (Native|Public) // @ game+0x90a1d0
	void MulticastPlayDamageEffects(struct UDamageType* DamageTypeClass, struct FVector ImpactLocationZeroBased); // Function Squad.SQVehicle.MulticastPlayDamageEffects // (Net|Native|Event|NetMulticast|Protected|HasDefaults) // @ game+0x90a110
	void LeftVehicle(struct ASQSoldier* Soldier, struct USQVehicleSeatComponent* PreviousSeat); // Function Squad.SQVehicle.LeftVehicle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x90a040
	bool IsVehicleFull(); // Function Squad.SQVehicle.IsVehicleFull // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90a010
	bool IsVehicleEmpty(); // Function Squad.SQVehicle.IsVehicleEmpty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909fe0
	bool IsValidSeat(int Seat); // Function Squad.SQVehicle.IsValidSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909f40
	bool IsSeatHeldByClaimingSquad(int Seat); // Function Squad.SQVehicle.IsSeatHeldByClaimingSquad // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909ea0
	bool IsOutOfMapBounds(); // Function Squad.SQVehicle.IsOutOfMapBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909e70
	struct TArray<struct USQVehicleSeatComponent*> GetSeats(); // Function Squad.SQVehicle.GetSeats // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909d40
	int GetPlayersSeat(struct ASQPlayerController* Player); // Function Squad.SQVehicle.GetPlayersSeat // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909cb0
	int GetNumOccupants(); // Function Squad.SQVehicle.GetNumOccupants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909c80
	int GetInventoryAmmoPoints(); // Function Squad.SQVehicle.GetInventoryAmmoPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909950
	void GetExitPoints(struct TArray<struct FTransform>& OutTransforms); // Function Squad.SQVehicle.GetExitPoints // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x909860
	struct USQVehicleSeatComponent* GetDriverSeat(); // Function Squad.SQVehicle.GetDriverSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x909830
	int FindFirstAvailableSeat(struct ASQPlayerController* SPC, bool bIncludeDriverSeat); // Function Squad.SQVehicle.FindFirstAvailableSeat // (Final|Native|Public|BlueprintCallable) // @ game+0x909770
	void ExitTurnOut(struct USQVehicleSeatComponent* Seat); // Function Squad.SQVehicle.ExitTurnOut // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x9096e0
	void EnterTurnOut(struct USQVehicleSeatComponent* Seat); // Function Squad.SQVehicle.EnterTurnOut // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x909580
	void EnteredVehicle(struct ASQSoldier* Soldier, struct USQVehicleSeatComponent* NewSeat); // Function Squad.SQVehicle.EnteredVehicle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x909610
	void EjectPlayerFromSeat(int Seat); // Function Squad.SQVehicle.EjectPlayerFromSeat // (Native|Public|BlueprintCallable) // @ game+0x9094f0
	void EjectAllPlayers(); // Function Squad.SQVehicle.EjectAllPlayers // (Native|Public|BlueprintCallable) // @ game+0x9094d0
	void DrivetrainComponentRepaired(struct USQDriveTrainComponent* DriveTrainComponent); // Function Squad.SQVehicle.DrivetrainComponentRepaired // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void DrivetrainComponentDestroyed(struct USQDriveTrainComponent* DriveTrainComponent); // Function Squad.SQVehicle.DrivetrainComponentDestroyed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void DebugVehicleFullHealth(); // Function Squad.SQVehicle.DebugVehicleFullHealth // (Final|Exec|Native|Public) // @ game+0x9094b0
	void DeactivateMistOnCenterOfMassEntry(); // Function Squad.SQVehicle.DeactivateMistOnCenterOfMassEntry // (Native|Public) // @ game+0x909490
	bool CanActAsRearmSource(); // Function Squad.SQVehicle.CanActAsRearmSource // (Final|Native|Public|BlueprintCallable) // @ game+0x909440
	void BurnVehicle(float VehicleBurnAmount, float SoldierBurnAmount, struct AController* BurnCauser); // Function Squad.SQVehicle.BurnVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x909330
	void BPClientDestroyed(); // Function Squad.SQVehicle.BPClientDestroyed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void AmmoUpdated(); // Function Squad.SQVehicle.AmmoUpdated // (Final|Native|Public) // @ game+0x909310
	void ActivateMistOnCenterOfMassEntry(); // Function Squad.SQVehicle.ActivateMistOnCenterOfMassEntry // (Native|Public) // @ game+0x909260
};

// Class Squad.SQDeployableVehicle
// Size: 0x8f0 (Inherited: 0x8a0)
struct ASQDeployableVehicle : ASQVehicle {
	struct USQVehicleInventoryComponent* InventoryComponent; // 0x898(0x08)
	struct USQMapIconComponent* MapIconComponent; // 0x8a0(0x08)
	struct USQVehicleExitPointComponent* VehicleExitPoint; // 0x8a8(0x08)
	struct USkeletalMeshComponent* SwivelMeshComponent; // 0x8b0(0x08)
	struct USceneComponent* GunMountComponent; // 0x8b8(0x08)
	struct USceneComponent* Camera1pPositionComponent; // 0x8c0(0x08)
	struct UCameraComponent* Camera1pComponent; // 0x8c8(0x08)
	struct USpringArmComponent* Camera3pSpringComponent; // 0x8d0(0x08)
	struct UCameraComponent* Camera3pComponent; // 0x8d8(0x08)
	bool bIsInThirdPerson; // 0x8e0(0x01)
	struct ASQDeployable* OwningDeployable; // 0x8e8(0x08)

	void TurnAtRate(float Rate); // Function Squad.SQDeployableVehicle.TurnAtRate // (Final|Native|Protected) // @ game+0x864bd0
	void Turn(float Rate); // Function Squad.SQDeployableVehicle.Turn // (Native|Event|Protected|BlueprintEvent) // @ game+0x864b50
	void ToggleView(); // Function Squad.SQDeployableVehicle.ToggleView // (Native|Event|Protected|BlueprintEvent) // @ game+0x864990
	void MouseWheelScroll(float Rate); // Function Squad.SQDeployableVehicle.MouseWheelScroll // (Native|Event|Protected|BlueprintEvent) // @ game+0x864370
	void LookUpAtRate(float Rate); // Function Squad.SQDeployableVehicle.LookUpAtRate // (Final|Native|Protected) // @ game+0x8642f0
	void LookUp(float Rate); // Function Squad.SQDeployableVehicle.LookUp // (Native|Event|Protected|BlueprintEvent) // @ game+0x864270
	bool IsCurrentWeaponInputEnabled(); // Function Squad.SQDeployableVehicle.IsCurrentWeaponInputEnabled // (Final|Native|Protected|BlueprintCallable) // @ game+0x8641a0
	struct ASQDeployable* GetOwnerDeployable(); // Function Squad.SQDeployableVehicle.GetOwnerDeployable // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x862f40
};

// Class Squad.SQDeployableMortarVehicle
// Size: 0x900 (Inherited: 0x8f0)
struct ASQDeployableMortarVehicle : ASQDeployableVehicle {
	float CachedTubePitch; // 0x8f0(0x04)
	char pad_8F4[0xc]; // 0x8f4(0x0c)
};

// Class Squad.SQDeployableSettings
// Size: 0x60 (Inherited: 0x58)
struct USQDeployableSettings : USQSettings {
	bool ShouldBeTrackedByFOB; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	bool TryGetDeployableWithLayer(struct USQLayer* InLayer, struct UClass*& OutDeployable); // Function Squad.SQDeployableSettings.TryGetDeployableWithLayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x864a30
};

// Class Squad.SQSpawner
// Size: 0x2f0 (Inherited: 0x248)
struct ASQSpawner : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	struct FTimespan MinimumDelayBetweenSpawn; // 0x250(0x08)
	float SpawnPositionHeightCheck; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct TArray<enum class EObjectTypeQuery> SpawnTraceObjectTypes; // 0x260(0x10)
	float SpawnPositionOffset; // 0x270(0x04)
	enum class ESQTeam Team; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
	struct TArray<enum class EObjectTypeQuery> ObjectCollisionTypes; // 0x278(0x10)
	bool SpawnInProgress; // 0x288(0x01)
	bool SpawnOverlapped; // 0x289(0x01)
	bool SpawnerEnabled; // 0x28a(0x01)
	char pad_28B[0x5]; // 0x28b(0x05)
	struct FDateTime SpawnerLockedUntil; // 0x290(0x08)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform SpawnPosition; // 0x2a0(0x30)
	struct FVector SpawnBound; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct ASQTeam* TeamAuthority; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	bool TrySpawn(); // Function Squad.SQSpawner.TrySpawn // (Native|Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x8a37a0
	struct FTransform SpawnPositionPostProcess(struct FHitResult& HitSpawnPosition, struct FVector& Bounds); // Function Squad.SQSpawner.SpawnPositionPostProcess // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8ea4e0
	void SetTeam(enum class ESQTeam NewTeam); // Function Squad.SQSpawner.SetTeam // (Final|Native|Public|BlueprintCallable) // @ game+0x8ea460
	void ResetSpawnerDelay(); // Function Squad.SQSpawner.ResetSpawnerDelay // (Native|Protected|BlueprintCallable) // @ game+0x8643f0
	void ReportSpawnFinished(); // Function Squad.SQSpawner.ReportSpawnFinished // (Final|Native|Protected|BlueprintCallable) // @ game+0x8ea120
	bool IsSpawnerOverlapped(); // Function Squad.SQSpawner.IsSpawnerOverlapped // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ea0f0
	bool IsSpawnerAvailable(); // Function Squad.SQSpawner.IsSpawnerAvailable // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867e50
	bool IsConfigurationValid(); // Function Squad.SQSpawner.IsConfigurationValid // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x87b980
	void InitializeSpawnerDelay(); // Function Squad.SQSpawner.InitializeSpawnerDelay // (Native|Protected|BlueprintCallable) // @ game+0x85f3b0
	enum class ESQTeam GetTeam(); // Function Squad.SQSpawner.GetTeam // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ea000
	void GetSpawnerBound(struct FVector& OutBounds); // Function Squad.SQSpawner.GetSpawnerBound // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8e9f70
	bool ComputeSpawnPosition(); // Function Squad.SQSpawner.ComputeSpawnPosition // (Native|Protected|BlueprintCallable) // @ game+0x8e9ce0
	struct FTimespan ComputeSpawnerDelay(); // Function Squad.SQSpawner.ComputeSpawnerDelay // (Native|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8e9d10
	struct FTimespan ComputeInitialSpawnerDelay(); // Function Squad.SQSpawner.ComputeInitialSpawnerDelay // (Native|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8e9ca0
};

// Class Squad.SQDeployableSpawner
// Size: 0x300 (Inherited: 0x2f0)
struct ASQDeployableSpawner : ASQSpawner {
	enum class ESQTeam NeutralCopyDeployableFromTeam; // 0x2e8(0x01)
	struct USQDeployableSettings* SpecificDeployable; // 0x2f0(0x08)
	char pad_2F9[0x7]; // 0x2f9(0x07)

	void StartLoadAndSpawnDeployable(struct USQDeployableSettings* InDeployableSettings); // Function Squad.SQDeployableSpawner.StartLoadAndSpawnDeployable // (Final|Native|Protected|BlueprintCallable) // @ game+0x864910
	void OnDeployableSpawned(struct ASQDeployable* OutDeployable); // Function Squad.SQDeployableSpawner.OnDeployableSpawned // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnDeployableLoaded(struct UClass* InDeployableReference, struct USQDeployableSettings* InDeployableSettings); // Function Squad.SQDeployableSpawner.OnDeployableLoaded // (Final|Native|Protected) // @ game+0x864410
	bool GetDeployableToSpawn(struct TArray<struct FSQAvailabilityState_Deployable>& InDeployableAvailabilityStates, struct FSQAvailabilityState_Deployable& OutSelectedDeployable); // Function Squad.SQDeployableSpawner.GetDeployableToSpawn // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862dd0
	void GetDeployableReference(struct USQDeployableSettings* InDeployableSettings, struct UClass*& OutDeployableReference); // Function Squad.SQDeployableSpawner.GetDeployableReference // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862cb0
	int GetDeployablePriority(struct FSQAvailabilityState_Deployable& InAvailableDeployable); // Function Squad.SQDeployableSpawner.GetDeployablePriority // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862be0
	bool CanSpawnDeployable(struct USQDeployableSettings* InAvailableDeployable); // Function Squad.SQDeployableSpawner.CanSpawnDeployable // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862a90
};

// Class Squad.SQDeployableSpawnerSettings
// Size: 0x58 (Inherited: 0x58)
struct USQDeployableSpawnerSettings : USQSettings {

	bool SelectDeployableToSpawn(struct TArray<struct FSQAvailabilityState_Deployable>& InDeployables, struct FSQAvailabilityState_Deployable& OutSelectDeployable); // Function Squad.SQDeployableSpawnerSettings.SelectDeployableToSpawn // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8646c0
	bool IsDeployableMatching(struct USQDeployableSettings* InAvailableDeployable); // Function Squad.SQDeployableSpawnerSettings.IsDeployableMatching // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8641d0
};

// Class Squad.SQDeployableTripodVehicle
// Size: 0x900 (Inherited: 0x8f0)
struct ASQDeployableTripodVehicle : ASQDeployableVehicle {
	struct USceneComponent* AdsCamera1pPositionComponent; // 0x8f0(0x08)
	char pad_8F8[0x8]; // 0x8f8(0x08)

	struct USQTurretMovementComponent* GetTurretMovementComponent(); // Function Squad.SQDeployableTripodVehicle.GetTurretMovementComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x864170
};

// Class Squad.SQDestroyedVehicle
// Size: 0x348 (Inherited: 0x248)
struct ASQDestroyedVehicle : AActor {
	struct UStaticMeshComponent* VehicleMesh; // 0x248(0x08)
	bool bIsSimulatingInEditor; // 0x250(0x01)
	bool bWreckSimulatePhysics; // 0x251(0x01)
	bool bPlayEffectsWhenReady; // 0x252(0x01)
	char pad_253[0x5]; // 0x253(0x05)
	struct ASQLastingEffect* TemperatureLastingEffect; // 0x258(0x08)
	struct FName TemperatureLastingEffectAttachSocket; // 0x260(0x08)
	float TemperatureLastingEffectLifetime; // 0x268(0x04)
	float MinReplicationTime; // 0x26c(0x04)
	bool bCanDelayEffects; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct ASQVehicle* OriginalVehicle; // 0x278(0x08)
	struct UDamageType* DeathDamageType; // 0x280(0x08)
	struct TArray<struct FSQVehicleDestroyEffectConfig> DeathEffectConfig; // 0x288(0x10)
	struct FName DestroyedEffectsSocket; // 0x298(0x08)
	struct UParticleSystem* DestroyedParticleEffect; // 0x2a0(0x08)
	struct UParticleSystemComponent* ExplosionEffect; // 0x2a8(0x08)
	struct USQShockwave* DestroyedShockwaveEffect; // 0x2b0(0x08)
	struct USoundCue* DestroyedSound; // 0x2b8(0x08)
	struct USoundCue* DestroyedDebrisSound; // 0x2c0(0x08)
	struct UAudioComponent* DestroyedDebrisAudioComponent; // 0x2c8(0x08)
	struct TArray<struct FSQDamageModifier> AllowableDamageTypes; // 0x2d0(0x10)
	float Health; // 0x2e0(0x04)
	float MaxHealth; // 0x2e4(0x04)
	struct USQBaseWaterComponent* BaseWaterComponent; // 0x2e8(0x08)
	float SinkingLinearDampening; // 0x2f0(0x04)
	float SinkingAngularDampening; // 0x2f4(0x04)
	struct UDamageType* LastDamageTypeClass; // 0x2f8(0x08)
	struct AController* LastDamageInstigator; // 0x300(0x08)
	struct USQPhysicalMaterialEffects* DefaultEffectsClass; // 0x308(0x08)
	float LastingEffectCleanupTimer; // 0x310(0x04)
	struct FVector InitialVelocity; // 0x314(0x0c)
	struct FVector InitialAngularVelocity; // 0x320(0x0c)
	float LifespanInProtectionZone; // 0x32c(0x04)
	struct FTimerHandle ClearAudioHandle; // 0x330(0x08)
	struct FTimerHandle StopReplicationTimer; // 0x338(0x08)
	struct FTimerHandle StopBurningEffectsTimer; // 0x340(0x08)

	void TransferBurningLastingEffect(struct ASQLastingEffect* LastingEffect); // Function Squad.SQDestroyedVehicle.TransferBurningLastingEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x8649b0
	void StopReplication(); // Function Squad.SQDestroyedVehicle.StopReplication // (Native|Event|Public|BlueprintEvent) // @ game+0x85f3b0
	void SetInitialMovement(struct FVector& InInitialVelocity, struct FVector& InInitialAngularVelocity); // Function Squad.SQDestroyedVehicle.SetInitialMovement // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x864830
	void OnVFXComplete(struct UParticleSystemComponent* PSystem); // Function Squad.SQDestroyedVehicle.OnVFXComplete // (Final|Native|Public|BlueprintCallable) // @ game+0x864640
	void OnReplicationTimeComplete(); // Function Squad.SQDestroyedVehicle.OnReplicationTimeComplete // (Final|Native|Public) // @ game+0x864620
	void OnExitedWater(); // Function Squad.SQDestroyedVehicle.OnExitedWater // (Native|Event|Public|BlueprintEvent) // @ game+0x85ec90
	void OnEnteredWater(); // Function Squad.SQDestroyedVehicle.OnEnteredWater // (Native|Event|Public|BlueprintEvent) // @ game+0x8645e0
	void OnBeginDestroyedVehicle(); // Function Squad.SQDestroyedVehicle.OnBeginDestroyedVehicle // (Native|Event|Public|BlueprintEvent) // @ game+0x8643f0
	void EnableWreckPhysics(bool bEnable); // Function Squad.SQDestroyedVehicle.EnableWreckPhysics // (Final|Native|Public|BlueprintCallable) // @ game+0x862b50
	void CheckIfDestroyedVehicleUnderwater(); // Function Squad.SQDestroyedVehicle.CheckIfDestroyedVehicleUnderwater // (Final|Native|Public) // @ game+0x862b30
};

// Class Squad.SQDetonatorStaticInfo
// Size: 0x560 (Inherited: 0x528)
struct USQDetonatorStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* DetonatorUseWeaponMontage; // 0x528(0x08)
	struct UAnimMontage* DetonatorUse1pMontage; // 0x530(0x08)
	struct UAnimMontage* DetonatorUse3pMontage; // 0x538(0x08)
	struct ASQDeployableItem* IEDClass; // 0x540(0x08)
	struct FVector2D RandomDetonationDelayRange; // 0x548(0x08)
	float DetonationDelay; // 0x550(0x04)
	float DetonatorUseDuration; // 0x554(0x04)
	bool bUseRandomDetonationDelay; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
};

// Class Squad.SQDiplomacyService
// Size: 0x28 (Inherited: 0x28)
struct USQDiplomacyService : UBlueprintFunctionLibrary {

	void GetTeamsFromSingleRelationShipByTeam(struct ASQTeam* InTeam, enum class ESQTeamRelationShip InRelationShip, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromSingleRelationShipByTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x864050
	void GetTeamsFromSingleRelationShipById(struct UObject* WorldContextObject, enum class ESQTeam InTeamId, enum class ESQTeamRelationShip InRelationShip, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromSingleRelationShipById // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863ef0
	void GetTeamsFromSingleRelationShip(struct UObject* WorldContextObject, struct TScriptInterface<Class> InActor, enum class ESQTeamRelationShip InRelationShip, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromSingleRelationShip // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863d70
	void GetTeamsFromRelationShipSetByTeam(struct ASQTeam* InTeam, struct TSet<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShipSetByTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863bc0
	void GetTeamsFromRelationShipSetById(struct UObject* WorldContextObject, enum class ESQTeam InTeamId, struct TSet<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShipSetById // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8639e0
	void GetTeamsFromRelationShipSet(struct UObject* WorldContextObject, struct TScriptInterface<Class> InActor, struct TSet<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShipSet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8637e0
	void GetTeamsFromRelationShipByTeam(struct ASQTeam* InTeam, struct TArray<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShipByTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863690
	void GetTeamsFromRelationShipById(struct UObject* WorldContextObject, enum class ESQTeam InTeamId, struct TArray<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShipById // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863500
	void GetTeamsFromRelationShip(struct UObject* WorldContextObject, struct TScriptInterface<Class> InActor, struct TArray<enum class ESQTeamRelationShip>& InRelationShips, struct TArray<int>& OutTeamIds); // Function Squad.SQDiplomacyService.GetTeamsFromRelationShip // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x863350
	enum class ESQTeamRelationShip GetRelationShipByTeams(struct ASQTeam* InTeamA, struct ASQTeam* InTeamB); // Function Squad.SQDiplomacyService.GetRelationShipByTeams // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x863290
	enum class ESQTeamRelationShip GetRelationShipByIndex(struct UObject* WorldContextObject, int InTeamIdA, int InTeamIdB); // Function Squad.SQDiplomacyService.GetRelationShipByIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8631a0
	enum class ESQTeamRelationShip GetRelationShipByIds(struct UObject* WorldContextObject, enum class ESQTeam InTeamIdA, enum class ESQTeam InTeamIdB); // Function Squad.SQDiplomacyService.GetRelationShipByIds // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8630b0
	enum class ESQTeamRelationShip GetRelationShip(struct UObject* WorldContextObject, struct TScriptInterface<Class> InActorA, struct TScriptInterface<Class> InActorB); // Function Squad.SQDiplomacyService.GetRelationShip // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x862f70
};

// Class Squad.SQRotorsAnimInstance
// Size: 0x2f0 (Inherited: 0x290)
struct USQRotorsAnimInstance : USQAnimInstance {
	struct USQRotorVehicleMovementComponent* RotorMovementComponent; // 0x290(0x08)
	struct TMap<struct FName, struct FRotator> RotationsMap; // 0x298(0x50)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	struct FRotator GetRotationByBoneName(struct FName BoneName); // Function Squad.SQRotorsAnimInstance.GetRotationByBoneName // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d8400
};

// Class Squad.SQDoubleRotorAnimInstance
// Size: 0x320 (Inherited: 0x2f0)
struct USQDoubleRotorAnimInstance : USQRotorsAnimInstance {
	struct FName Rotor1Name; // 0x2f0(0x08)
	struct FName Rotor2Name; // 0x2f8(0x08)
	struct FRotator Rotor1Rotation; // 0x300(0x0c)
	struct FRotator Rotor2Rotation; // 0x30c(0x0c)
	char pad_318[0x8]; // 0x318(0x08)
};

// Class Squad.SQDPICustomScalingRule
// Size: 0x28 (Inherited: 0x28)
struct USQDPICustomScalingRule : UDPICustomScalingRule {
};

// Class Squad.SQDrawChatWidget
// Size: 0x240 (Inherited: 0x230)
struct USQDrawChatWidget : USQUserWidget {
	struct TArray<struct FSQDrawChatStruct> MessagesToDraw; // 0x230(0x10)

	void InitWidget(); // Function Squad.SQDrawChatWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
	void DrawWidget(struct USQDrawChatWidget* ChatWidget, struct FPaintContext& Context); // Function Squad.SQDrawChatWidget.DrawWidget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8679c0
};

// Class Squad.SQVehicleComponent
// Size: 0x5a0 (Inherited: 0x4b0)
struct USQVehicleComponent : UStaticMeshComponent {
	float MaxHealth; // 0x4a8(0x04)
	struct TArray<struct FSQDamageModifier> AllowableDamageTypes; // 0x4b0(0x10)
	bool bCanBeDestroyed; // 0x4c0(0x01)
	bool bCanBeRepairedAfterDestroyed; // 0x4c1(0x01)
	float MaxRepairToolLimit; // 0x4c4(0x04)
	struct UStaticMesh* FullyRepairedComponentMesh; // 0x4c8(0x08)
	struct UStaticMesh* RepairedFromDestructionComponentMesh; // 0x4d0(0x08)
	struct UStaticMesh* DestroyedComponentMesh; // 0x4d8(0x08)
	struct ASQVehicle* ParentVehicle; // 0x4e0(0x08)
	struct UParticleSystem* BurningEffect; // 0x4e8(0x08)
	struct USoundCue* BurningSound; // 0x4f0(0x08)
	struct UAudioComponent* BurningAudioComponent; // 0x4f8(0x08)
	bool bBurningAudioInheritsScale; // 0x500(0x01)
	char pad_503[0x5]; // 0x503(0x05)
	struct UParticleSystem* DestroyedExplosion; // 0x508(0x08)
	struct USoundCue* DestroyedSound; // 0x510(0x08)
	struct FName DestructionDamageEffectSocket; // 0x518(0x08)
	struct TArray<struct FSQDamageEffect> DestructionDamageEffects; // 0x520(0x10)
	bool bLastingEffectInheritsScale; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct UAudioComponent* DestroyedAudioComponent; // 0x538(0x08)
	bool bDestroyedAudioInheritsScale; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UParticleSystemComponent* BurningParticleSystem; // 0x548(0x08)
	bool bBurningEffectInheritsScale; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UParticleSystemComponent* DestructionParticleSystem; // 0x558(0x08)
	bool bDestructionEffectInheritsScale; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float NormalizedHealth; // 0x564(0x04)
	struct FScriptMulticastDelegate OnComponentDestroyedEvent; // 0x568(0x10)
	struct FScriptMulticastDelegate OnComponentUndestroyedEvent; // 0x578(0x10)
	float Health; // 0x588(0x04)
	enum class ESQVehicleComponentStates VehicleComponentState; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct UStaticMeshComponent* DecorativeMesh; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)

	void SetHealth(float NewHealth); // Function Squad.SQVehicleComponent.SetHealth // (Final|Native|Public|BlueprintCallable) // @ game+0x90d6f0
	void OnRep_VehicleComponentState(enum class ESQVehicleComponentStates PreviousState); // Function Squad.SQVehicleComponent.OnRep_VehicleComponentState // (Final|Native|Private) // @ game+0x90d4b0
	void OnRep_HealthChanged(float PreviousHealthValue); // Function Squad.SQVehicleComponent.OnRep_HealthChanged // (Native|Protected) // @ game+0x90d430
	void MulticastComponentRepairedFromDestruction(); // Function Squad.SQVehicleComponent.MulticastComponentRepairedFromDestruction // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x90ce90
	void MulticastComponentFullyRepaired(); // Function Squad.SQVehicleComponent.MulticastComponentFullyRepaired // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x90ce40
	void MulticastComponentDestroyed(struct UDamageType* DamageTypeClass); // Function Squad.SQVehicleComponent.MulticastComponentDestroyed // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x90cd80
	bool IsDestroyed(); // Function Squad.SQVehicleComponent.IsDestroyed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90ccf0
	enum class ESQVehicleComponentStates GetVehicleComponentState(); // Function Squad.SQVehicleComponent.GetVehicleComponentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90ccd0
	enum class ESQVehicleComponentStates GetPreviousVehicleComponentState(); // Function Squad.SQVehicleComponent.GetPreviousVehicleComponentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cbf0
	struct ASQVehicle* GetParentVehicle(); // Function Squad.SQVehicleComponent.GetParentVehicle // (Final|Native|Protected|BlueprintCallable) // @ game+0x90cbc0
	float GetNormalizedHealth(); // Function Squad.SQVehicleComponent.GetNormalizedHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cba0
	float GetMaximumHealth(); // Function Squad.SQVehicleComponent.GetMaximumHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cb80
	float GetHealth(); // Function Squad.SQVehicleComponent.GetHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cb60
};

// Class Squad.SQDriveTrainComponent
// Size: 0x5b0 (Inherited: 0x5a0)
struct USQDriveTrainComponent : USQVehicleComponent {
	bool IsInWater; // 0x598(0x01)
	float DepthUnderwater; // 0x59c(0x04)
	float DropPercentage; // 0x5a0(0x04)
	char pad_5A9[0x7]; // 0x5a9(0x07)

	void OnDriveTrainComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQDriveTrainComponent.OnDriveTrainComponentEndOverlap // (Final|Native|Public) // @ game+0x868100
	void OnDriveTrainComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQDriveTrainComponent.OnDriveTrainComponentBeginOverlap // (Final|Native|Public|HasOutParms) // @ game+0x867f10
};

// Class Squad.SQEditorPlaySettings
// Size: 0x3f8 (Inherited: 0x38)
struct USQEditorPlaySettings : UDeveloperSettings {
	struct UClass* DefaultPawnClassOverride; // 0x38(0x28)
	struct UClass* DefaultWeaponClassOverride; // 0x60(0x28)
	struct USQLayer* LayerEditorOverride; // 0x88(0x28)
	bool PreventDataLoading; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FSQServerSettings EditorServerSettings; // 0xb8(0x1d8)
	bool EditorIgnoreStartupTime; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	int RaasDefaultSeed; // 0x294(0x04)
	int StartTeamOverride; // 0x298(0x04)
	bool ForceDirectSpawn; // 0x29c(0x01)
	bool CleanNullFactionSetupInEditor; // 0x29d(0x01)
	bool CanDriverSwitchTo3rdPerson; // 0x29e(0x01)
	bool DeployablePlacementAlwaysValid; // 0x29f(0x01)
	bool ForceOutOfBoundsKillDisabled; // 0x2a0(0x01)
	bool ForcePlayerNotAdminInEditor; // 0x2a1(0x01)
	bool ForcePlayerNotDevInEditor; // 0x2a2(0x01)
	bool ForcePlayerNotQAInEditor; // 0x2a3(0x01)
	bool ForcePlayerNotMemberInEditor; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct USQLayer* EditorActiveLayer; // 0x2a8(0x08)
	struct USQLevel* EditorActiveLevel; // 0x2b0(0x08)
	struct TMap<struct FName, struct USQLevel*> AvailableLevels; // 0x2b8(0x50)
	struct TMap<struct FName, struct USQLayer*> AvailableLayers; // 0x308(0x50)
	struct TMap<struct FName, struct USQFaction*> AvailableFactions; // 0x358(0x50)
	struct TMap<struct FName, struct USQFactionSetup*> AvailableFactionSetups; // 0x3a8(0x50)

	bool TryGetEditorSQLevel(struct USQLevel*& OutEditorLevel); // Function Squad.SQEditorPlaySettings.TryGetEditorSQLevel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x868930
	bool TryGetEditorSQLayer(struct USQLayer*& OutEditorLayer); // Function Squad.SQEditorPlaySettings.TryGetEditorSQLayer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x868930
	bool TryGetEditorFactionSetup(enum class ESQTeam InTeam, struct USQFactionSetup*& OutFactionSetup); // Function Squad.SQEditorPlaySettings.TryGetEditorFactionSetup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x868860
	struct USQEditorPlaySettings* GetEditorPlaySettings(); // Function Squad.SQEditorPlaySettings.GetEditorPlaySettings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x867af0
};

// Class Squad.SQVehicleUIStaticDataAsset
// Size: 0x50 (Inherited: 0x30)
struct USQVehicleUIStaticDataAsset : UDataAsset {
	struct UTexture2D* MapIcon; // 0x30(0x08)
	float MapIconRotation; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UTexture2D* SideImage; // 0x40(0x08)
	struct UTexture2D* FrontImage; // 0x48(0x08)
};

// Class Squad.SQEmplacementUIStaticDataAsset
// Size: 0x50 (Inherited: 0x50)
struct USQEmplacementUIStaticDataAsset : USQVehicleUIStaticDataAsset {
};

// Class Squad.SQEquipableItem
// Size: 0x480 (Inherited: 0x248)
struct ASQEquipableItem : AActor {
	struct USQItemStaticInfo* ItemStaticInfo; // 0x248(0x08)
	struct USQItemStaticInfo* ItemStaticInfoClass; // 0x250(0x08)
	char pad_258[0x28]; // 0x258(0x28)
	struct FScriptMulticastDelegate OnPawnOwnerChangedEvent; // 0x280(0x10)
	struct FText DisplayName; // 0x290(0x18)
	struct FText ItemDescription; // 0x2a8(0x18)
	int RearmTypesAllowed; // 0x2c0(0x04)
	bool bUseOwnerAsMasterPose; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float AmmoPerRearmItem; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	float UnequippedNetUpdateRate; // 0x2d0(0x04)
	enum class ESQEquippableActionState ActionState; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct UBlendSpace1D* SprintBlendspace; // 0x2d8(0x08)
	struct UAnimSequence* WalkForwardAnim; // 0x2e0(0x08)
	struct UAnimSequence* IdleAnim; // 0x2e8(0x08)
	struct UAnimSequence* UseAnim; // 0x2f0(0x08)
	struct UAnimSequence* StandAnim; // 0x2f8(0x08)
	struct UAnimSequence* EquipAnim; // 0x300(0x08)
	struct UAnimSequence* UnequipAnim; // 0x308(0x08)
	struct UAnimSequence* AltUseAnim; // 0x310(0x08)
	struct UAnimSequence* Custom1Anim; // 0x318(0x08)
	struct UAnimSequence* Custom2Anim; // 0x320(0x08)
	struct UAnimSequence* Custom3Anim; // 0x328(0x08)
	struct UAnimSequence* PreUseAnim; // 0x330(0x08)
	struct UAnimSequence* PostUseAnim; // 0x338(0x08)
	struct UAnimSequence* PreAltUseAnim; // 0x340(0x08)
	struct UAnimSequence* PostAltUseAnim; // 0x348(0x08)
	struct UTexture2D* HUDSelectedTexture; // 0x350(0x08)
	struct UTexture2D* HUDTexture; // 0x358(0x08)
	bool bShowItemCountInInventory; // 0x360(0x01)
	bool bShowMagCountInInventory; // 0x361(0x01)
	bool bShowAmmoDataInHud; // 0x362(0x01)
	bool bChangeDormancyOnEquipState; // 0x363(0x01)
	int ItemCount; // 0x364(0x04)
	int MaxItemCount; // 0x368(0x04)
	char bCannotRearm : 1; // 0x36c(0x01)
	char pad_36C_1 : 7; // 0x36c(0x01)
	char pad_36D[0x7]; // 0x36d(0x07)
	float EquipDuration; // 0x374(0x04)
	float UnequipDuration; // 0x378(0x04)
	char pad_37C[0x8]; // 0x37c(0x08)
	float RearmCounterMultiplier; // 0x384(0x04)
	struct USceneComponent* Root; // 0x388(0x08)
	struct USkeletalMeshComponent* Mesh1P; // 0x390(0x08)
	struct USkeletalMeshComponent* Mesh3P; // 0x398(0x08)
	struct APawn* PawnOwner; // 0x3a0(0x08)
	struct APlayerController* LocalPlayerController; // 0x3a8(0x08)
	struct FScriptMulticastDelegate PlayAnimationEvent; // 0x3b0(0x10)
	struct FScriptMulticastDelegate PauseAnimationEvent; // 0x3c0(0x10)
	struct FScriptMulticastDelegate ResumeAnimationEvent; // 0x3d0(0x10)
	struct FScriptMulticastDelegate SetAnimationPlayRateEvent; // 0x3e0(0x10)
	struct FScriptMulticastDelegate EndLoopAnimationEvent; // 0x3f0(0x10)
	struct FScriptMulticastDelegate StopAnimationEvent; // 0x400(0x10)
	struct FSQAudioComponentPool AudioComponentPool; // 0x410(0x20)
	struct UAnimInstance* CachedWeapon1pAnimInstance; // 0x430(0x08)
	struct UAnimInstance* CachedWeapon3pAnimInstance; // 0x438(0x08)
	struct USQAnimInstanceSoldier1P* CachedSoldier1pAnimInstance; // 0x440(0x08)
	struct USQAnimInstanceSoldier3P* CachedSoldier3pAnimInstance; // 0x448(0x08)
	float CachedEquipDuration; // 0x450(0x04)
	float CachedUnequipDuration; // 0x454(0x04)
	enum class ESQEquippableState EquipState; // 0x458(0x01)
	bool bCachedMoveBobbing; // 0x459(0x01)
	bool bCachedSprintBobbing; // 0x45a(0x01)
	bool bCachedHasMovement; // 0x45b(0x01)
	bool bCachedIsPullingTrigger; // 0x45c(0x01)
	bool bCachedIsLeaningRight; // 0x45d(0x01)
	bool bCachedIsLeaningLeft; // 0x45e(0x01)
	char pad_45F[0x1]; // 0x45f(0x01)
	float CachedDeltaTime; // 0x460(0x04)
	char pad_464[0x1c]; // 0x464(0x1c)

	void UpdateSprintBobbing(bool bForceStopLoop); // Function Squad.SQEquipableItem.UpdateSprintBobbing // (Native|Protected|BlueprintCallable) // @ game+0x868ae0
	void UpdateMoveInputs(bool bForceStopLoop); // Function Squad.SQEquipableItem.UpdateMoveInputs // (Native|Protected|BlueprintCallable) // @ game+0x868a50
	void UpdateMoveBobbing(); // Function Squad.SQEquipableItem.UpdateMoveBobbing // (Native|Protected|BlueprintCallable) // @ game+0x868a30
	void UpdateLeanRight(); // Function Squad.SQEquipableItem.UpdateLeanRight // (Native|Protected|BlueprintCallable) // @ game+0x868a10
	void UpdateLeanLeft(); // Function Squad.SQEquipableItem.UpdateLeanLeft // (Native|Protected|BlueprintCallable) // @ game+0x8689f0
	void UpdateFirstPersonVisibility(); // Function Squad.SQEquipableItem.UpdateFirstPersonVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x8689d0
	struct ASQDeployable* ShovelHitDeployable(struct FHitResult HitResult, bool bRemovingHealth); // Function Squad.SQEquipableItem.ShovelHitDeployable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x868680
	void SetRaisingAnimation(bool bRaised); // Function Squad.SQEquipableItem.SetRaisingAnimation // (Native|Public|BlueprintCallable) // @ game+0x8685f0
	void SetLoweringAnimation(bool bLowered); // Function Squad.SQEquipableItem.SetLoweringAnimation // (Native|Public|BlueprintCallable) // @ game+0x868560
	void ServerConsumeItem(); // Function Squad.SQEquipableItem.ServerConsumeItem // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x868510
	void ReinitializeEquip(); // Function Squad.SQEquipableItem.ReinitializeEquip // (Final|Native|Public|BlueprintCallable) // @ game+0x8684f0
	void ReinitializeAnimInstances(); // Function Squad.SQEquipableItem.ReinitializeAnimInstances // (Final|Native|Public|BlueprintCallable) // @ game+0x8684d0
	float Rearm(int Quantity); // Function Squad.SQEquipableItem.Rearm // (Native|Event|Public|BlueprintEvent) // @ game+0x868430
	void PlayUnequipAnimation(); // Function Squad.SQEquipableItem.PlayUnequipAnimation // (Native|Protected|BlueprintCallable) // @ game+0x868410
	void PlaySoundAttachedToWeapon(struct USoundCue* Sound1p, struct USoundCue* Sound3p, struct FName& SocketName, struct FVector& FallbackOrigin); // Function Squad.SQEquipableItem.PlaySoundAttachedToWeapon // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8682a0
	void PlayEquipAnimation(); // Function Squad.SQEquipableItem.PlayEquipAnimation // (Native|Protected|BlueprintCallable) // @ game+0x868280
	void Pickup(); // Function Squad.SQEquipableItem.Pickup // (Final|Native|Public|BlueprintCallable) // @ game+0x868260
	void PendingEquip(); // Function Squad.SQEquipableItem.PendingEquip // (Final|Native|Private) // @ game+0x868240
	bool IsFirstPersonViewTarget(); // Function Squad.SQEquipableItem.IsFirstPersonViewTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867ee0
	bool IsEquipped(); // Function Squad.SQEquipableItem.IsEquipped // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867eb0
	bool IsBeingUsed(); // Function Squad.SQEquipableItem.IsBeingUsed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867e80
	bool IsAmmoFull(); // Function Squad.SQEquipableItem.IsAmmoFull // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867e50
	void InitializeAmmoValues(struct FSQInventoryData& ItemClass, bool bSpawnMaxAmmo, struct FSQPersistedAmmoCount& PersistedAmmo); // Function Squad.SQEquipableItem.InitializeAmmoValues // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x867d10
	void Hide(); // Function Squad.SQEquipableItem.Hide // (Native|Public|BlueprintCallable) // @ game+0x867cf0
	bool HasAmmo(); // Function Squad.SQEquipableItem.HasAmmo // (Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x867cc0
	int GetRearmMaxItemCount(); // Function Squad.SQEquipableItem.GetRearmMaxItemCount // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867c90
	int GetRearmItemCount(); // Function Squad.SQEquipableItem.GetRearmItemCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867c60
	struct APawn* GetOwnerPawn(); // Function Squad.SQEquipableItem.GetOwnerPawn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867c30
	struct USkeletalMeshComponent* GetMesh(bool bGetMesh1P); // Function Squad.SQEquipableItem.GetMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x867b90
	struct USQItemStaticInfo* GetItemStaticInfo(); // Function Squad.SQEquipableItem.GetItemStaticInfo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867b60
	struct FVector GetFireDirection(); // Function Squad.SQEquipableItem.GetFireDirection // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x867b20
	void EndUse(); // Function Squad.SQEquipableItem.EndUse // (Native|Public|BlueprintCallable) // @ game+0x867ad0
	void EndAltUse(); // Function Squad.SQEquipableItem.EndAltUse // (Native|Public|BlueprintCallable) // @ game+0x867ab0
	void Drop(); // Function Squad.SQEquipableItem.Drop // (Final|Native|Public|BlueprintCallable) // @ game+0x867a90
	struct FSQPersistedAmmoCount CreatePersistingAmmoCount(); // Function Squad.SQEquipableItem.CreatePersistingAmmoCount // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x867980
	struct ASQDeployable* CanShovel(int ShovelTraceLength, float ShovelTraceSphereRadius, struct TArray<enum class EObjectTypeQuery>& ObjectTypes, bool bRemovingHealth); // Function Squad.SQEquipableItem.CanShovel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8677e0
	bool CanRearmFromType(enum class ESQRearmType RearmType); // Function Squad.SQEquipableItem.CanRearmFromType // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867750
	bool CanRearm(); // Function Squad.SQEquipableItem.CanRearm // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x867720
	float CalculateRearmAmmoCost(int QuantityToRearm); // Function Squad.SQEquipableItem.CalculateRearmAmmoCost // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867680
	int CalculateMissingRearmItems(); // Function Squad.SQEquipableItem.CalculateMissingRearmItems // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867650
	float CalculateMissingAmmoCost(); // Function Squad.SQEquipableItem.CalculateMissingAmmoCost // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x867610
	float CalculateMaxAmmoCost(int MaxCount); // Function Squad.SQEquipableItem.CalculateMaxAmmoCost // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x867570
	void BPEndUse(); // Function Squad.SQEquipableItem.BPEndUse // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPEndAltUse(); // Function Squad.SQEquipableItem.BPEndAltUse // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPBeginUse(); // Function Squad.SQEquipableItem.BPBeginUse // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPBeginAltUse(); // Function Squad.SQEquipableItem.BPBeginAltUse // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintUpdateFirstPersonVisibility(bool bIsFirstPersonVisible); // Function Squad.SQEquipableItem.BlueprintUpdateFirstPersonVisibility // (Native|Event|Protected|BlueprintEvent) // @ game+0x8674e0
	void BlueprintOnUnequipped(); // Function Squad.SQEquipableItem.BlueprintOnUnequipped // (Native|Event|Protected|BlueprintEvent) // @ game+0x8643f0
	void BlueprintOnUnequip(); // Function Squad.SQEquipableItem.BlueprintOnUnequip // (Native|Event|Protected|BlueprintEvent) // @ game+0x8645e0
	void BlueprintOnEquipped(); // Function Squad.SQEquipableItem.BlueprintOnEquipped // (Native|Event|Protected|BlueprintEvent) // @ game+0x85ec90
	void BlueprintOnEquip(); // Function Squad.SQEquipableItem.BlueprintOnEquip // (Native|Event|Protected|BlueprintEvent) // @ game+0x8674c0
	void BlueprintDrawHUD(struct UCanvas* Canvas); // Function Squad.SQEquipableItem.BlueprintDrawHUD // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BeginUse(); // Function Squad.SQEquipableItem.BeginUse // (Native|Public|BlueprintCallable) // @ game+0x8674a0
	void BeginAltUse(); // Function Squad.SQEquipableItem.BeginAltUse // (Native|Public|BlueprintCallable) // @ game+0x867480
};

// Class Squad.SQPrimaryData
// Size: 0x70 (Inherited: 0x30)
struct USQPrimaryData : UPrimaryDataAsset {
	struct FName ID; // 0x30(0x08)
	struct FDataTableRowHandle Data; // 0x38(0x10)
	struct FString ModId; // 0x48(0x10)
	struct FPrimaryAssetRules PackingRules; // 0x58(0x10)
	char bLabelAssetsInMyDirectory : 1; // 0x68(0x01)
	char pad_68_1 : 7; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)

	struct FString GetLogId(); // Function Squad.SQPrimaryData.GetLogId // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c60c0
	struct FString GetIdAsString(); // Function Squad.SQPrimaryData.GetIdAsString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6000
	struct FName GetId(); // Function Squad.SQPrimaryData.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5fc0
	bool GetDisplayName(struct FText& OutDisplayName); // Function Squad.SQPrimaryData.GetDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5d60
};

// Class Squad.SQFaction
// Size: 0x80 (Inherited: 0x70)
struct USQFaction : USQPrimaryData {
	struct TArray<struct USQFactionSetup*> AvailableSetups; // 0x70(0x10)

	bool TryGetRallyPointMesh(struct USQLayer* Layer, struct UStaticMesh*& OutMesh); // Function Squad.SQFaction.TryGetRallyPointMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetFlagForMap(struct UTexture2D*& OutTexture); // Function Squad.SQFaction.TryGetFlagForMap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetFlagForFullScreen(struct UTexture2D*& OutTexture); // Function Squad.SQFaction.TryGetFlagForFullScreen // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetFactionShortName(struct FText& OutName); // Function Squad.SQFaction.TryGetFactionShortName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x86deb0
};

// Class Squad.SQFactionSetup
// Size: 0xd8 (Inherited: 0x70)
struct USQFactionSetup : USQPrimaryData {
	struct FName FactionID; // 0x70(0x08)
	struct USQFaction* OuterFaction; // 0x78(0x08)
	struct USQRoleSettings* DefaultRole; // 0x80(0x08)
	struct USQRoleSettings* DefaultSquadLeaderRole; // 0x88(0x08)
	struct USQRoleSettings* LeaveSquadRole; // 0x90(0x08)
	struct TArray<struct USQAvailability_Role*> Roles; // 0x98(0x10)
	struct TArray<struct USQAvailability_Deployable*> Deployables; // 0xa8(0x10)
	struct TArray<struct USQAvailability_Vehicle*> Vehicles; // 0xb8(0x10)
	struct TArray<struct USQAvailability_Action*> Actions; // 0xc8(0x10)
};

// Class Squad.SQHealingEquipableItem
// Size: 0x4b0 (Inherited: 0x480)
struct ASQHealingEquipableItem : ASQEquipableItem {
	float TraceLength; // 0x480(0x04)
	float TraceSphereRadius; // 0x484(0x04)
	float MaxDurationForCancel; // 0x488(0x04)
	struct FColor ErrorMessageColor; // 0x48c(0x04)
	float ErrorMessageLifetime; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct ASQSoldier* HealedTarget; // 0x498(0x08)
	struct UAudioComponent* HealthAudioComponent; // 0x4a0(0x08)
	char pad_4A8[0x8]; // 0x4a8(0x08)

	void OnRep_HealedTarget(struct ASQSoldier* PreviousHealedTarget); // Function Squad.SQHealingEquipableItem.OnRep_HealedTarget // (Final|Native|Protected) // @ game+0x8866f0
};

// Class Squad.SQFieldDressing
// Size: 0x540 (Inherited: 0x4b0)
struct ASQFieldDressing : ASQHealingEquipableItem {
	bool bWasHealingSelf; // 0x4b0(0x01)
	bool bWasRevivingOther; // 0x4b1(0x01)
	char pad_4B2[0x6]; // 0x4b2(0x06)
	struct FTimerHandle TimerHandle; // 0x4b8(0x08)
	struct USQFieldDressingStaticInfo* FieldDressingStaticInfo; // 0x4c0(0x08)
	struct UAnimMontage* SelectedSoldier1pMontage; // 0x4c8(0x08)
	struct UAnimMontage* SelectedSoldier3pMontage; // 0x4d0(0x08)
	struct UAnimMontage* SelectedWeaponMontage; // 0x4d8(0x08)
	char pad_4E0[0x60]; // 0x4e0(0x60)

	void StopBleeding(); // Function Squad.SQFieldDressing.StopBleeding // (Final|Native|Private) // @ game+0x86de10
	void Revive(); // Function Squad.SQFieldDressing.Revive // (Final|Native|Private) // @ game+0x86dac0
};

// Class Squad.SQFieldDressingStaticInfo
// Size: 0x640 (Inherited: 0x528)
struct USQFieldDressingStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* HealingSelfRightArm1pMontage; // 0x528(0x08)
	struct UAnimMontage* HealingSelfRightArm3pMontage; // 0x530(0x08)
	struct UAnimMontage* HealingSelfRightArm1pWeaponMontage; // 0x538(0x08)
	struct UAnimMontage* HealingSelfRightArm3pWeaponMontage; // 0x540(0x08)
	struct UAnimMontage* HealingSelfLeftArm1pMontage; // 0x548(0x08)
	struct UAnimMontage* HealingSelfLeftArm3pMontage; // 0x550(0x08)
	struct UAnimMontage* HealingSelfLeftArm1pWeaponMontage; // 0x558(0x08)
	struct UAnimMontage* HealingSelfLeftArm3pWeaponMontage; // 0x560(0x08)
	struct UAnimMontage* HealingSelfEnd1pMontage; // 0x568(0x08)
	struct UAnimMontage* HealingSelfEnd3pMontage; // 0x570(0x08)
	struct UAnimMontage* HealingSelfEnd1pWeaponMontage; // 0x578(0x08)
	struct UAnimMontage* HealingSelfEnd3pWeaponMontage; // 0x580(0x08)
	struct UAnimMontage* Healing1pMontage; // 0x588(0x08)
	struct UAnimMontage* Healing3pMontage; // 0x590(0x08)
	struct UAnimMontage* HealingEnd1pMontage; // 0x598(0x08)
	struct UAnimMontage* HealingEnd3pMontage; // 0x5a0(0x08)
	struct UAnimMontage* Healing1pWeaponMontage; // 0x5a8(0x08)
	struct UAnimMontage* Healing3pWeaponMontage; // 0x5b0(0x08)
	struct UAnimMontage* HealingEnd1pWeaponMontage; // 0x5b8(0x08)
	struct UAnimMontage* HealingEnd3pWeaponMontage; // 0x5c0(0x08)
	struct UAnimMontage* Reviving1pMontage; // 0x5c8(0x08)
	struct UAnimMontage* Reviving3pMontage; // 0x5d0(0x08)
	struct UAnimMontage* RevivingEnd1pMontage; // 0x5d8(0x08)
	struct UAnimMontage* RevivingEnd3pMontage; // 0x5e0(0x08)
	struct UAnimMontage* Reviving1pWeaponMontage; // 0x5e8(0x08)
	struct UAnimMontage* Reviving3pWeaponMontage; // 0x5f0(0x08)
	struct UAnimMontage* RevivingEnd1pWeaponMontage; // 0x5f8(0x08)
	struct UAnimMontage* RevivingEnd3pWeaponMontage; // 0x600(0x08)
	struct USoundCue* HealSelfSound; // 0x608(0x08)
	struct USoundCue* HealOtherSound; // 0x610(0x08)
	struct USoundCue* ReviveOtherSound; // 0x618(0x08)
	float NormalReviveDuration; // 0x620(0x04)
	float MedicReviveDuration; // 0x624(0x04)
	float NormalStopBleedingOtherDuration; // 0x628(0x04)
	float NormalStopBleedingSelfDuration; // 0x62c(0x04)
	float MedicStopBleedingOtherDuration; // 0x630(0x04)
	float MedicStopBleedingSelfDuration; // 0x634(0x04)
	float AnimPlayRateMultiplier; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
};

// Class Squad.SQFindFriendsCallbackProxy
// Size: 0x58 (Inherited: 0x28)
struct USQFindFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	char pad_28[0x28]; // 0x28(0x28)
	struct APlayerController* PlayerController; // 0x50(0x08)
};

// Class Squad.SQFindSessionsCallbackProxy
// Size: 0x88 (Inherited: 0x28)
struct USQFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	char pad_28[0x58]; // 0x28(0x58)
	struct UObject* WorldContextObject; // 0x80(0x08)

	bool IsSameServer(struct FBlueprintSessionResult& ResultA, struct FBlueprintSessionResult& ResultB); // Function Squad.SQFindSessionsCallbackProxy.IsSameServer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86d2f0
	struct FSQSessionFlagStruct GetSessionFlagStruct(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetSessionFlagStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86ce60
	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86ccc0
	struct FString GetSearchKeywords(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetSearchKeywords // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86cb20
	int GetPingInMs(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c930
	bool GetPasswordProtected(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetPasswordProtected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c7e0
	int GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c660
	int GetMatchTimeout(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetMatchTimeout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c510
	struct FString GetMapName(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetMapName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c370
	bool GetLicensedServer(struct UObject* WorldContextObject, struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetLicensedServer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c1d0
	struct FString GetGameVersion(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetGameVersion // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c030
	struct FString GetGameMode(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetGameMode // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86be90
	int GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86bd40
	bool GetAnticheatProtected(struct FBlueprintSessionResult& Result); // Function Squad.SQFindSessionsCallbackProxy.GetAnticheatProtected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86bbc0
};

// Class Squad.SQFlagScoringRuleset
// Size: 0x2d0 (Inherited: 0x278)
struct ASQFlagScoringRuleset : ASQGameRuleSet {
	float RateOfScoreTick; // 0x278(0x04)
	struct FSQFlagScoreInfo TeamOneFlagScores; // 0x27c(0x1c)
	struct FSQFlagScoreInfo TeamTwoFlagScores; // 0x298(0x1c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct USQCaptureZoneComponent*> CaptureZones; // 0x2b8(0x10)
	char pad_2C8[0x8]; // 0x2c8(0x08)

	void OnFlagTick(); // Function Squad.SQFlagScoringRuleset.OnFlagTick // (Native|Public) // @ game+0x86d630
	void OnFlagStateChange(struct USQCaptureZoneComponent* CaptureZone, char Team); // Function Squad.SQFlagScoringRuleset.OnFlagStateChange // (Native|Public) // @ game+0x86d560
};

// Class Squad.SQFloatingVehicle
// Size: 0x370 (Inherited: 0x340)
struct ASQFloatingVehicle : ASQPawn {
	struct USQSimpleMovementComponent* SimpleMovementComponent; // 0x340(0x08)
	struct UCameraComponent* CameraComponent; // 0x348(0x08)
	struct USpringArmComponent* SpringArm; // 0x350(0x08)
	struct USkeletalMeshComponent* SkeletalMeshComponent; // 0x358(0x08)
	struct UCapsuleComponent* CapsuleComponent; // 0x360(0x08)
	char pad_368[0x8]; // 0x368(0x08)
};

// Class Squad.SQFoliageBender
// Size: 0x268 (Inherited: 0x248)
struct ASQFoliageBender : AActor {
	struct UMaterialParameterCollection* FoliageMaterialParameterCollection; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	float StandSpreadMultiplier; // 0x258(0x04)
	float ProneSpreadMultiplier; // 0x25c(0x04)
	bool bDrawDebugSpheres; // 0x260(0x01)
	bool bDrawDebugPoints; // 0x261(0x01)
	char pad_262[0x6]; // 0x262(0x06)

	void GetSoldierLocationAndSpread(struct ASQSoldier* Soldier, float& X, float& Y, float& Z, float& SpreadMultiplier); // Function Squad.SQFoliageBender.GetSoldierLocationAndSpread // (Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86cfc0
};

// Class Squad.SQForceMovementComponentSettings
// Size: 0x88 (Inherited: 0x30)
struct USQForceMovementComponentSettings : UDataAsset {
	float Mass; // 0x30(0x04)
	float MaxSpeed; // 0x34(0x04)
	struct FRotator MaxRotationalVelocity; // 0x38(0x0c)
	float Length; // 0x44(0x04)
	float Width; // 0x48(0x04)
	float Height; // 0x4c(0x04)
	struct UCurveFloat* AirDensityByHeight; // 0x50(0x08)
	float DragCoefficient; // 0x58(0x04)
	float Gravity; // 0x5c(0x04)
	bool bApplyGravity; // 0x60(0x01)
	bool bApplyDrag; // 0x61(0x01)
	char pad_62[0x2]; // 0x62(0x02)
	struct FName DragApplicationSocket; // 0x64(0x08)
	struct FVector DragTorqueMultiplier; // 0x6c(0x0c)
	bool bApplyCentripedalForce; // 0x78(0x01)
	bool bUsePhysX; // 0x79(0x01)
	bool bDebugForces; // 0x7a(0x01)
	char pad_7B[0x1]; // 0x7b(0x01)
	float AngularDamping; // 0x7c(0x04)
	float LinearDamping; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Squad.SQForceNetMovementComponent
// Size: 0x2d0 (Inherited: 0x250)
struct USQForceNetMovementComponent : USQNetMoveComponent {
	char pad_250[0x10]; // 0x250(0x10)
	struct FVector TorqueInput; // 0x260(0x0c)
	struct FVector ForceInput; // 0x26c(0x0c)
	struct FRotator CurrentRotationalVelocity; // 0x278(0x0c)
	char pad_284[0x24]; // 0x284(0x24)
	struct USQForceMovementComponentSettings* ForceComponentSettings; // 0x2a8(0x08)
	struct USceneComponent* CenterOfMass; // 0x2b0(0x08)
	char pad_2B8[0x18]; // 0x2b8(0x18)

	void AddYawTorque(float Amount); // Function Squad.SQForceNetMovementComponent.AddYawTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x86b7e0
	void AddTorque(struct FVector& Torque); // Function Squad.SQForceNetMovementComponent.AddTorque // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x86b750
	void AddRollTorque(float Amount); // Function Squad.SQForceNetMovementComponent.AddRollTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x86b6d0
	void AddPitchTorque(float Amount); // Function Squad.SQForceNetMovementComponent.AddPitchTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x86b650
	void AddForceAtLocationWithTorqueMultiplier(struct FVector& Force, struct FVector& Position, struct FVector& TorqueMultiplier); // Function Squad.SQForceNetMovementComponent.AddForceAtLocationWithTorqueMultiplier // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x86b510
	void AddForceAtLocation(struct FVector& Force, struct FVector& Position, float TorqueMultiplier); // Function Squad.SQForceNetMovementComponent.AddForceAtLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x86b3e0
	void AddForce(struct FVector& Force); // Function Squad.SQForceNetMovementComponent.AddForce // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x86b350
};

// Class Squad.SQForwardBase
// Size: 0x590 (Inherited: 0x440)
struct ASQForwardBase : ASQDeployable {
	char pad_440[0x8]; // 0x440(0x08)
	bool bIsSpawningEnabled; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	float TimeToEnableSpawning; // 0x44c(0x04)
	bool bCreatesFobSpawnPoints; // 0x450(0x01)
	bool bSuppliesCreateSpawnPoints; // 0x451(0x01)
	char pad_452[0x2]; // 0x452(0x02)
	float SpawnPointRadius; // 0x454(0x04)
	struct FVector SpawnOffset; // 0x458(0x0c)
	int EnemiesToCapture; // 0x464(0x04)
	struct FString Name; // 0x468(0x10)
	bool UseCaptureTick; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TArray<struct ASQDeployable*> TrackedDeployables; // 0x480(0x10)
	struct FScriptMulticastDelegate OnFOBStateUpdated; // 0x490(0x10)
	struct TArray<struct ASQGameSpawn*> SpawnPoints; // 0x4a0(0x10)
	struct ASQGameSpawn* SpawnPointClass; // 0x4b0(0x08)
	bool bSieged; // 0x4b8(0x01)
	char pad_4B9[0x3]; // 0x4b9(0x03)
	float ActivatedTime; // 0x4bc(0x04)
	int NumberOfTeammatesNeededToDeploy; // 0x4c0(0x04)
	int NumberOfLogisNeededToDeploy; // 0x4c4(0x04)
	float PercentToDisableSpawns; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct USphereComponent* CaptureZone; // 0x4d0(0x08)
	struct USphereComponent* DeploymentRadius; // 0x4d8(0x08)
	struct USphereComponent* ConstructionRadius; // 0x4e0(0x08)
	bool bUseResourceTickRateToUpdateResources; // 0x4e8(0x01)
	char pad_4E9[0x3]; // 0x4e9(0x03)
	float MaxTicketsPerSecond; // 0x4ec(0x04)
	float TicketsPerPlayer; // 0x4f0(0x04)
	int TicketsLostWhenOverrun; // 0x4f4(0x04)
	int EnemiesToDisableSpawn; // 0x4f8(0x04)
	float InitialConstructionPoints; // 0x4fc(0x04)
	float MaxConstructionPoints; // 0x500(0x04)
	float InitialAmmo; // 0x504(0x04)
	float MaxAmmo; // 0x508(0x04)
	float CPPerSecond; // 0x50c(0x04)
	float AmmoPerSecond; // 0x510(0x04)
	float ResourceGenerationRate; // 0x514(0x04)
	float CaptureTickRate; // 0x518(0x04)
	float Ammo; // 0x51c(0x04)
	float ConstructionPoints; // 0x520(0x04)
	int NearbyEnemies; // 0x524(0x04)
	int SiegedSpawnPoints; // 0x528(0x04)
	char pad_52C[0x2c]; // 0x52c(0x2c)
	struct USQForwardBaseSettings* FOBSettings; // 0x558(0x08)
	bool bIsBleeding; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	float EnterBleedingHealth; // 0x564(0x04)
	float ExitBleedingHealth; // 0x568(0x04)
	float BleedOutTime; // 0x56c(0x04)
	float EstimatedWorldTimeOfDeath; // 0x570(0x04)
	char pad_574[0xc]; // 0x574(0x0c)
	struct AController* BleedStateInstigator; // 0x580(0x08)
	struct AActor* BleedStateCauser; // 0x588(0x08)

	void TrackDeployable(struct ASQDeployable* Deployable); // Function Squad.SQForwardBase.TrackDeployable // (Final|Native|Public|BlueprintCallable) // @ game+0x86de30
	void SetSpawnPointsEnabled(bool bEnabled); // Function Squad.SQForwardBase.SetSpawnPointsEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x86dd80
	void SetSieged(bool bValue); // Function Squad.SQForwardBase.SetSieged // (Final|Native|Public|BlueprintCallable) // @ game+0x86dcf0
	void SetConstructionPoints(float NewConstructionPoints); // Function Squad.SQForwardBase.SetConstructionPoints // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x86dc70
	void SetBleedState(bool bNewIsBleeding); // Function Squad.SQForwardBase.SetBleedState // (Final|BlueprintAuthorityOnly|Native|Private|BlueprintCallable) // @ game+0x86dbe0
	void SetAmmo(float NewAmmo); // Function Squad.SQForwardBase.SetAmmo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x86db60
	void SetActivateDelay(float DelaySeconds); // Function Squad.SQForwardBase.SetActivateDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x86dae0
	void Overrun(bool bFriendly); // Function Squad.SQForwardBase.Overrun // (Final|Native|Public|BlueprintCallable) // @ game+0x86da30
	void OnTrackedDeployableDestroyed(struct ASQDeployable* Deployable); // Function Squad.SQForwardBase.OnTrackedDeployableDestroyed // (Native|Public) // @ game+0x86d9a0
	void OnSpawnSiegedStateChanged(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQForwardBase.OnSpawnSiegedStateChanged // (Final|Native|Private) // @ game+0x86d820
	void OnSpawnPointDestroyed(struct AActor* DestroyedActor); // Function Squad.SQForwardBase.OnSpawnPointDestroyed // (Final|Native|Private) // @ game+0x86d7a0
	void OnSpawningEnabledChanged(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQForwardBase.OnSpawningEnabledChanged // (Final|Native|Private) // @ game+0x86d920
	void OnSpawningActivatedTimestampChanged(struct ASQGameSpawn* SpawnPoint); // Function Squad.SQForwardBase.OnSpawningActivatedTimestampChanged // (Final|Native|Private) // @ game+0x86d8a0
	void OnRep_SpawnPointsChanged(); // Function Squad.SQForwardBase.OnRep_SpawnPointsChanged // (Native|Protected) // @ game+0x86d760
	void OnRep_SpawningEnabledChanged(); // Function Squad.SQForwardBase.OnRep_SpawningEnabledChanged // (Native|Protected) // @ game+0x86d780
	void OnRep_SiegedChanged(); // Function Squad.SQForwardBase.OnRep_SiegedChanged // (Native|Protected) // @ game+0x86d740
	void OnRep_IsBleedingChanged(bool bPrevIsBleeding); // Function Squad.SQForwardBase.OnRep_IsBleedingChanged // (Final|Native|Private) // @ game+0x86d6b0
	void OnRep_ConstructionPointsChanged(); // Function Squad.SQForwardBase.OnRep_ConstructionPointsChanged // (Native|Protected) // @ game+0x86d690
	void OnRep_AmmoChanged(); // Function Squad.SQForwardBase.OnRep_AmmoChanged // (Native|Protected) // @ game+0x86d670
	void OnRep_ActivatedTimeChanged(); // Function Squad.SQForwardBase.OnRep_ActivatedTimeChanged // (Native|Protected) // @ game+0x86d650
	void OnBleedOut(); // Function Squad.SQForwardBase.OnBleedOut // (Native|Event|Public|BlueprintEvent) // @ game+0x86d540
	bool HasConstructionPointsFor(float Amount); // Function Squad.SQForwardBase.HasConstructionPointsFor // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x86d260
	bool HasAmmoFor(float Amount); // Function Squad.SQForwardBase.HasAmmoFor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86d1d0
	bool GetSpawnPointsEnabled(); // Function Squad.SQForwardBase.GetSpawnPointsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86d1a0
	float GetRemainingActivatingTime(bool BMax); // Function Squad.SQForwardBase.GetRemainingActivatingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86ca80
	int GetNumActivatedSpawnPoints(); // Function Squad.SQForwardBase.GetNumActivatedSpawnPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86c7b0
	float GetClientRemainingActivatingTime(); // Function Squad.SQForwardBase.GetClientRemainingActivatingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86bd10
	float GetActivatedTimeStamp(bool BMax); // Function Squad.SQForwardBase.GetActivatedTimeStamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86bb20
	float GetActivatedSpawnDelay(bool BMax); // Function Squad.SQForwardBase.GetActivatedSpawnDelay // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x86ba80
	struct ASQGameSpawn* CreateSpawnPointSeperately(struct FVector Location); // Function Squad.SQForwardBase.CreateSpawnPointSeperately // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x86b9e0
	struct ASQGameSpawn* CreateSpawnPointOnFob(); // Function Squad.SQForwardBase.CreateSpawnPointOnFob // (Final|Native|Public|BlueprintCallable) // @ game+0x86b9b0
	bool ConsumeFOBAmmo(float Amount); // Function Squad.SQForwardBase.ConsumeFOBAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x86b920
	bool ConsumeConstructionPoints(float Amount); // Function Squad.SQForwardBase.ConsumeConstructionPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x86b890
	bool CheckDeploymentRules(); // Function Squad.SQForwardBase.CheckDeploymentRules // (Final|Native|Public|BlueprintCallable) // @ game+0x86b860
	void BPPostTicketTick(float Difference); // Function Squad.SQForwardBase.BPPostTicketTick // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOverrun(bool bFriendly); // Function Squad.SQForwardBase.BPOverrun // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnIsBleedingChanged(); // Function Squad.SQForwardBase.BPOnIsBleedingChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_OnDeployableRemoved(struct ASQDeployable* InDeployable); // Function Squad.SQForwardBase.BP_OnDeployableRemoved // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void BP_OnDeployableAdded(struct ASQDeployable* InDeployable); // Function Squad.SQForwardBase.BP_OnDeployableAdded // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQForwardBaseSettings
// Size: 0xc0 (Inherited: 0x58)
struct USQForwardBaseSettings : USQSettings {
	int NumberOfTeammatesNeededToDeploy; // 0x58(0x04)
	int NumberOfLogisNeededToDeploy; // 0x5c(0x04)
	float ExclusionRadius; // 0x60(0x04)
	int SiegedMinNearbyEnemies; // 0x64(0x04)
	int TicketsLostWhenOverrun; // 0x68(0x04)
	float NearbyEnemiesRadius; // 0x6c(0x04)
	bool HasSpawning; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float TimeToEnableSpawning; // 0x74(0x04)
	float SpawnPointRadius; // 0x78(0x04)
	struct FVector SpawnOffset; // 0x7c(0x0c)
	float HealthPercentToDisableSpawns; // 0x88(0x04)
	bool UseCapture; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float CaptureTickDuration; // 0x90(0x04)
	float MaxCapturePctPerSecond; // 0x94(0x04)
	float CapturePctPerSecondPerPlayer; // 0x98(0x04)
	bool UseResourceGeneration; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float ResourceGenerationTickDuration; // 0xa0(0x04)
	float InitialConstructionPoints; // 0xa4(0x04)
	float MaxConstructionPoints; // 0xa8(0x04)
	float CPPerSecond; // 0xac(0x04)
	float InitialAmmo; // 0xb0(0x04)
	float MaxAmmo; // 0xb4(0x04)
	float AmmoPerSecond; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)

	bool HasTimeToEnableSpawning(); // Function Squad.SQForwardBaseSettings.HasTimeToEnableSpawning // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x871540
	bool HasInitialResources(); // Function Squad.SQForwardBaseSettings.HasInitialResources // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x871510
};

// Class Squad.SQFreeLookComponent
// Size: 0x158 (Inherited: 0xd8)
struct USQFreeLookComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct APawn* OuterPawn; // 0xe0(0x08)
	char pad_E8[0x18]; // 0xe8(0x18)
	struct UCameraComponent* FreeLookCamera; // 0x100(0x08)
	bool bCanFreelookWhileADS; // 0x108(0x01)
	bool bFreelookCanRecenterWeapons; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	struct FVector2D PitchLimits; // 0x10c(0x08)
	struct FVector2D YawLimits; // 0x114(0x08)
	struct FVector2D RotationSpeed; // 0x11c(0x08)
	float ResetSpeed; // 0x124(0x04)
	char pad_128[0x20]; // 0x128(0x20)
	struct FSQRotator_NetQuantizeBytes ReplicatedFreeLookRot; // 0x148(0x0c)
	enum class EFreeLookMode FreelookMode; // 0x154(0x01)
	bool bReplicateFreeLookRotation; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)

	void SetYawLimits(struct FVector2D NewYawLimits); // Function Squad.SQFreeLookComponent.SetYawLimits // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x872440
	void SetRotationSpeed(struct FVector2D NewRotationSpeed); // Function Squad.SQFreeLookComponent.SetRotationSpeed // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8723c0
	void SetReplicateFreeLookRotation(bool bNewBool); // Function Squad.SQFreeLookComponent.SetReplicateFreeLookRotation // (Final|Native|Public|BlueprintCallable) // @ game+0x872330
	void SetPitchLimits(struct FVector2D NewPitchLimits); // Function Squad.SQFreeLookComponent.SetPitchLimits // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8722b0
	void SetIsToggleActive(bool bNewState); // Function Squad.SQFreeLookComponent.SetIsToggleActive // (Final|Native|Public|BlueprintCallable) // @ game+0x872220
	void SetFreeLookRotation(struct FRotator NewFreeLookRotator); // Function Squad.SQFreeLookComponent.SetFreeLookRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x872070
	void SetFreeLookMode(enum class EFreeLookMode NewFreeLookMode); // Function Squad.SQFreeLookComponent.SetFreeLookMode // (Final|Native|Public|BlueprintCallable) // @ game+0x871ff0
	void SetFreelookCanRecenterWeapons(bool bNewBool); // Function Squad.SQFreeLookComponent.SetFreelookCanRecenterWeapons // (Final|Native|Public|BlueprintCallable) // @ game+0x872100
	void SetFreeLookCamera(struct UCameraComponent* NewCamera); // Function Squad.SQFreeLookComponent.SetFreeLookCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x871f70
	void SetCanFreelookWhileADS(bool bNewBool); // Function Squad.SQFreeLookComponent.SetCanFreelookWhileADS // (Final|Native|Public|BlueprintCallable) // @ game+0x871ee0
	void ServerSetFreeLookRotation(struct FRotator NewFreeLookRotation); // Function Squad.SQFreeLookComponent.ServerSetFreeLookRotation // (Final|Net|Native|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x871c30
	void ResetFreeLook(); // Function Squad.SQFreeLookComponent.ResetFreeLook // (Final|Native|Public|BlueprintCallable) // @ game+0x871b30
	void OnRep_ReplicatedFreeLookRot(); // Function Squad.SQFreeLookComponent.OnRep_ReplicatedFreeLookRot // (Final|Native|Private) // @ game+0x871870
	struct FVector2D GetYawLimits(); // Function Squad.SQFreeLookComponent.GetYawLimits // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x871000
	struct FVector2D GetRotationSpeed(); // Function Squad.SQFreeLookComponent.GetRotationSpeed // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x870b30
	struct FVector2D GetPitchLimits(); // Function Squad.SQFreeLookComponent.GetPitchLimits // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x870af0
	bool GetIsUsingFreeLook(); // Function Squad.SQFreeLookComponent.GetIsUsingFreeLook // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870910
	bool GetIsFreeLookComponentActive(); // Function Squad.SQFreeLookComponent.GetIsFreeLookComponentActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8708b0
	bool GetFreelookCanRecenterWeapons(); // Function Squad.SQFreeLookComponent.GetFreelookCanRecenterWeapons // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870860
	struct UCameraComponent* GetFreeLookCamera(); // Function Squad.SQFreeLookComponent.GetFreeLookCamera // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870800
	bool GetCanFreelookWhileADS(); // Function Squad.SQFreeLookComponent.GetCanFreelookWhileADS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870590
	struct FRotator CalculateFreeLookRotation(); // Function Squad.SQFreeLookComponent.CalculateFreeLookRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x870150
};

// Class Squad.SQFreeLookInterface
// Size: 0x28 (Inherited: 0x28)
struct USQFreeLookInterface : UInterface {

	void SetIsToggleActive(bool bNewState); // Function Squad.SQFreeLookInterface.SetIsToggleActive // (Native|Public|BlueprintCallable) // @ game+0x872190
	bool GetIsUsingFreeLook(); // Function Squad.SQFreeLookInterface.GetIsUsingFreeLook // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8708e0
	struct USQFreeLookComponent* GetFreeLookComponent(); // Function Squad.SQFreeLookInterface.GetFreeLookComponent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870830
	struct FRotator CalculateFreeLookRotation(); // Function Squad.SQFreeLookInterface.CalculateFreeLookRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x870110
};

// Class Squad.SQFriendsBrowserWidget
// Size: 0x240 (Inherited: 0x230)
struct USQFriendsBrowserWidget : USQUserWidget {
	bool bCanStartNewFindFriends; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct USQFindFriendsCallbackProxy* CurrentCallback; // 0x238(0x08)

	void StartFindFriends(); // Function Squad.SQFriendsBrowserWidget.StartFindFriends // (Final|Native|Private|BlueprintCallable) // @ game+0x829740
	void OnSuccess(struct TArray<struct FSQBlueprintFriend>& Results); // Function Squad.SQFriendsBrowserWidget.OnSuccess // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void OnFindFriendsCompleted(struct TArray<struct FSQBlueprintFriend>& Results, bool bSuccess); // Function Squad.SQFriendsBrowserWidget.OnFindFriendsCompleted // (Final|Native|Private|HasOutParms) // @ game+0x871770
	void OnFailure(); // Function Squad.SQFriendsBrowserWidget.OnFailure // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQGameState
// Size: 0x5e0 (Inherited: 0x2a8)
struct ASQGameState : AGameState {
	struct FScriptMulticastDelegate RS_OnMatchStart; // 0x2a8(0x10)
	bool bTimerPaused; // 0x2b8(0x01)
	bool bIsTicketBasedGame; // 0x2b9(0x01)
	bool bAllowPublicClientsToRecord; // 0x2ba(0x01)
	bool bTeamPrepsActive; // 0x2bb(0x01)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FScriptMulticastDelegate OnPlayerJoined; // 0x2c0(0x10)
	struct FScriptMulticastDelegate OnPlayerRemoved; // 0x2d0(0x10)
	char pad_2E0[0x18]; // 0x2e0(0x18)
	struct TArray<struct ASQTeamState*> TeamStates; // 0x2f8(0x10)
	struct TArray<struct ASQTeamState*> IndexedTeamStates; // 0x308(0x10)
	int ChangeTeamWaitTime; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct ASQTeamState* WinningTeam; // 0x320(0x08)
	int WinningTeamTickets; // 0x328(0x04)
	float ServerTickRate; // 0x32c(0x04)
	struct FString GameModeName; // 0x330(0x10)
	struct TArray<struct FSQGameModeRules> GameModeRules; // 0x340(0x10)
	struct FString NextMapName; // 0x350(0x10)
	struct USQGameCommandComponent* GameCommandComponent; // 0x360(0x08)
	struct USQGameCommandComponent* GameCommandComponentClass; // 0x368(0x08)
	int MaxFireTeamCount; // 0x370(0x04)
	int MaxFireTeamSize; // 0x374(0x04)
	struct USQVotingState* VotingState; // 0x378(0x08)
	struct FString MapName; // 0x380(0x10)
	int MaxPlayers; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FString ServerName; // 0x398(0x10)
	struct FString MessageOfTheDay; // 0x3a8(0x10)
	struct USQCoreStateConnectionChildActorComponent* CoreStateConnectionChildActorComponent; // 0x3b8(0x08)
	float TimeOfCompletion; // 0x3c0(0x04)
	char pad_3C4[0x14]; // 0x3c4(0x14)
	int ServerStartTimeStamp; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct USQMapMarkerManagerComponent* MapMarkerManagerComponent; // 0x3e0(0x08)
	struct FGuid GlobalSessionId; // 0x3e8(0x10)
	struct FSQGameFlags GameFlags; // 0x3f8(0x0e)
	char pad_406[0x2]; // 0x406(0x02)
	struct FSQServerSettings ServerSettings; // 0x408(0x1d8)

	bool TryGetTeamState(int TeamId, struct ASQTeamState*& OutTeamState); // Function Squad.SQGameState.TryGetTeamState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x87d960
	void SetRemainingTime(int Seconds); // Function Squad.SQGameState.SetRemainingTime // (Native|Public) // @ game+0x877570
	void RequestFinishAndExitToMainMenu(); // Function Squad.SQGameState.RequestFinishAndExitToMainMenu // (Final|Native|Public) // @ game+0x87ccc0
	void RefreshTeamStates(); // Function Squad.SQGameState.RefreshTeamStates // (Final|Native|Public) // @ game+0x87cca0
	void OnRep_ServerStartTimeStamp(); // Function Squad.SQGameState.OnRep_ServerStartTimeStamp // (Final|Native|Public) // @ game+0x87ca90
	void OnRep_ServerName(); // Function Squad.SQGameState.OnRep_ServerName // (Final|Native|Public) // @ game+0x87ca70
	void OnRep_NeutralTeamInfoClass(); // Function Squad.SQGameState.OnRep_NeutralTeamInfoClass // (Final|Native|Public) // @ game+0x843e90
	void OnRep_MaxPlayers(); // Function Squad.SQGameState.OnRep_MaxPlayers // (Final|Native|Public) // @ game+0x87ca50
	void OnRep_IndexedTeamStates(); // Function Squad.SQGameState.OnRep_IndexedTeamStates // (Final|Native|Public) // @ game+0x87ca30
	void OnRep_GameModeRules(); // Function Squad.SQGameState.OnRep_GameModeRules // (Final|Native|Public) // @ game+0x87ca10
	bool IsGameReadyToStart(); // Function Squad.SQGameState.IsGameReadyToStart // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x87c680
	int GetRemainingTime(); // Function Squad.SQGameState.GetRemainingTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c140
	enum class ESQTeamRelationShip GetRelationShipByIndex(int InTeamIdA, int InTeamIdB); // Function Squad.SQGameState.GetRelationShipByIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c050
	enum class ESQTeamRelationShip GetRelationshipById(enum class ESQTeam InTeamA, enum class ESQTeam InTeamIdB); // Function Squad.SQGameState.GetRelationshipById // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x87bf80
	int GetPlayerCount(); // Function Squad.SQGameState.GetPlayerCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87bf50
	struct USQMapMarkerManagerComponent* GetMarkerManager(); // Function Squad.SQGameState.GetMarkerManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87bf00
	void AddGameModeRules(struct TArray<struct FSQGameModeRules> InGameModeRules); // Function Squad.SQGameState.AddGameModeRules // (Native|Public) // @ game+0x87b190
};

// Class Squad.SQGameCommandComponent
// Size: 0x1d8 (Inherited: 0xd8)
struct USQGameCommandComponent : UActorComponent {
	char pad_D8[0x100]; // 0xd8(0x100)

	void HandleVoteResult_VoteNextLevel(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameCommandComponent.HandleVoteResult_VoteNextLevel // (Final|Native|Private|HasOutParms) // @ game+0x871420
	void HandleVoteResult_VoteNextLayer(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameCommandComponent.HandleVoteResult_VoteNextLayer // (Final|Native|Private|HasOutParms) // @ game+0x871330
	void HandleVoteResult_VoteLevel(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameCommandComponent.HandleVoteResult_VoteLevel // (Final|Native|Private|HasOutParms) // @ game+0x871240
	void HandleVoteResult_VoteLayer(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameCommandComponent.HandleVoteResult_VoteLayer // (Final|Native|Private|HasOutParms) // @ game+0x871150
	void HandleVoteResult_Vote(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameCommandComponent.HandleVoteResult_Vote // (Final|Native|Private|HasOutParms) // @ game+0x871060
};

// Class Squad.SQGameEngine
// Size: 0xf00 (Inherited: 0xe08)
struct USQGameEngine : UGameEngine {
	struct USQConfig* SquadConfig; // 0xe08(0x08)
	char pad_E10[0xf0]; // 0xe10(0xf0)
};

// Class Squad.SQGameEventRuleset
// Size: 0x280 (Inherited: 0x278)
struct ASQGameEventRuleset : ASQGameRuleSet {
	enum class ESQKillReportChannel JoinChannel; // 0x278(0x01)
	enum class ESQKillReportChannel PartChannel; // 0x279(0x01)
	char pad_27A[0x6]; // 0x27a(0x06)
};

// Class Squad.SQGameInstance
// Size: 0x658 (Inherited: 0x168)
struct USQGameInstance : UGameInstance {
	struct TArray<struct FSQSoliderNetPriorityObject> SoliderNetPriorities; // 0x168(0x10)
	float SoldierNetPriorityConeSensitivity; // 0x178(0x04)
	float SoldierNetPriorityConeFactor; // 0x17c(0x04)
	struct ASQConnectionCheckBeaconHostObj* SQConnectionCheckHost; // 0x180(0x08)
	struct ASQJoinBeaconHost* SQJoinQueueHost; // 0x188(0x08)
	struct AOnlineBeaconHost* BeaconHost; // 0x190(0x08)
	struct ASQJoinBeaconClient* JoinQueueClient; // 0x198(0x08)
	struct USQServerListItemWidget* LastServerAttemptWidget; // 0x1a0(0x08)
	struct USQFindSessionsCallbackProxy* ActiveFindSessionsCallback; // 0x1a8(0x08)
	struct USQFindFriendsCallbackProxy* ActiveFindFriendsCallback; // 0x1b0(0x08)
	struct TMap<struct FString, struct ASQConnectionCheckBeaconClient*> ConnectionCheckClients; // 0x1b8(0x50)
	char pad_208[0x1c]; // 0x208(0x1c)
	bool bSaveServerBrowserResultsToFile; // 0x224(0x01)
	char pad_225[0x11b]; // 0x225(0x11b)
	struct USQGameInstanceEvents* GameInstanceEvents; // 0x340(0x08)
	struct USQConfig* SquadConfig; // 0x348(0x08)
	struct FScriptMulticastDelegate OnMapIconCreated; // 0x350(0x10)
	struct FScriptMulticastDelegate OnMapIconDestroyed; // 0x360(0x10)
	struct FScriptMulticastDelegate OnWorldOriginLocationChangedEvent; // 0x370(0x10)
	struct FString UserEnteredPassword; // 0x380(0x10)
	struct UAudioComponent* MusicAudioComponent; // 0x390(0x08)
	struct USoundBase* MusicSoundCue; // 0x398(0x08)
	struct FBlueprintSessionResult PendingServer; // 0x3a0(0xb8)
	bool bHasPendingServer; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct TArray<char> LastTicket; // 0x460(0x10)
	struct FDateTime LastTicketRefresh; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct FString ServerPartMessage; // 0x480(0x10)
	struct TArray<struct FModdingRuntimeModInfoDetails> ModInfo; // 0x490(0x10)
	struct FString MainMenuMap; // 0x4a0(0x10)
	struct USQLevel* CurrentLevel; // 0x4b0(0x08)
	struct USQLayer* CurrentLayer; // 0x4b8(0x08)
	struct USQLayer* NextLayer; // 0x4c0(0x08)
	struct USQLevel* NextLevel; // 0x4c8(0x08)
	char pad_4D0[0x2b]; // 0x4d0(0x2b)
	bool InitialGameDiscoveryCompleted; // 0x4fb(0x01)
	char pad_4FC[0x4]; // 0x4fc(0x04)
	struct TMap<struct FName, struct USQLevel*> AvailableLevels; // 0x500(0x50)
	struct TMap<struct FName, struct USQLayer*> AvailableLayers; // 0x550(0x50)
	struct TMap<struct FName, struct USQFaction*> AvailableFactions; // 0x5a0(0x50)
	struct TMap<struct FName, struct USQFactionSetup*> AvailableFactionSetups; // 0x5f0(0x50)
	char pad_640[0x10]; // 0x640(0x10)
	bool InitialModDiscoveryCompleted; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)

	bool VerifyPassword(struct FBlueprintSessionResult& BlueprintSessionResult, struct FString UserPassword); // Function Squad.SQGameInstance.VerifyPassword // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x872870
	bool TryGetNextLevels(int InCount, struct TArray<struct USQLevel*>& OutLevels); // Function Squad.SQGameInstance.TryGetNextLevels // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x872770
	bool TryGetNextLayers(int InCount, struct TArray<struct USQLayer*>& OutLayers); // Function Squad.SQGameInstance.TryGetNextLayers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x872670
	bool TryGetLayersInRotationFor(struct USQLevel* InLevel, struct TArray<struct USQLayer*>& OutLayers); // Function Squad.SQGameInstance.TryGetLayersInRotationFor // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x872570
	void StopMusic(); // Function Squad.SQGameInstance.StopMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x872550
	void ShowLoadingScreen(bool LoadingGameMap); // Function Squad.SQGameInstance.ShowLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x8724c0
	void ServerTravelToNextMap(struct FString Params); // Function Squad.SQGameInstance.ServerTravelToNextMap // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x871e40
	void ServerTravelToNextLevel(struct FString Params); // Function Squad.SQGameInstance.ServerTravelToNextLevel // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x871da0
	void ServerTravelToNextLayer(struct FString Params); // Function Squad.SQGameInstance.ServerTravelToNextLayer // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x871d00
	void SendTicketToEAC(bool bEncryptedDataAvailable, int ResultCode); // Function Squad.SQGameInstance.SendTicketToEAC // (Final|Native|Private) // @ game+0x871b70
	void ResetRotation(); // Function Squad.SQGameInstance.ResetRotation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x871b50
	void RandomizeRotation(); // Function Squad.SQGameInstance.RandomizeRotation // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x871b10
	void QueueForServer(struct UObject* WorldContextObject, struct USQServerListItemWidget* SessionWidget); // Function Squad.SQGameInstance.QueueForServer // (Final|Native|Public|BlueprintCallable) // @ game+0x871a50
	void PlayMusic(struct USoundBase* InOverrideMusic); // Function Squad.SQGameInstance.PlayMusic // (Final|Native|Public|BlueprintCallable) // @ game+0x8719d0
	bool OverrideNextLevel(struct FName& NextLevelName); // Function Squad.SQGameInstance.OverrideNextLevel // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x871930
	bool OverrideNextLayer(struct FName& NextLayerName); // Function Squad.SQGameInstance.OverrideNextLayer // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x871890
	void OnNewModdedLevelAvailable(struct USQLevel* Level); // Function Squad.SQGameInstance.OnNewModdedLevelAvailable // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnNewModdedLayerAvailable(struct USQLayer* Layer); // Function Squad.SQGameInstance.OnNewModdedLayerAvailable // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnNewModdedFactionSetupAvailable(struct USQFactionSetup* FactionSetup); // Function Squad.SQGameInstance.OnNewModdedFactionSetupAvailable // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnNewModdedFactionAvailable(struct USQFaction* Faction); // Function Squad.SQGameInstance.OnNewModdedFactionAvailable // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	bool NeedToVoteForNextLevel(); // Function Squad.SQGameInstance.NeedToVoteForNextLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x871740
	bool NeedToVoteForNextLayer(); // Function Squad.SQGameInstance.NeedToVoteForNextLayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x871710
	bool IsSteamConnected(); // Function Squad.SQGameInstance.IsSteamConnected // (Final|Native|Public|BlueprintCallable) // @ game+0x8716e0
	bool HostGame(struct ULocalPlayer* LocalPlayer, struct FString GameType, struct FString InTravelURL); // Function Squad.SQGameInstance.HostGame // (Final|Native|Public|BlueprintCallable) // @ game+0x871590
	void HideLoadingScreen(); // Function Squad.SQGameInstance.HideLoadingScreen // (Final|Native|Public|BlueprintCallable) // @ game+0x871570
	void GotoMainMenu(); // Function Squad.SQGameInstance.GotoMainMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x871040
	struct USQUISettings* GetSquadUISettings(); // Function Squad.SQGameInstance.GetSquadUISettings // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x870fd0
	struct FString GetServerURL(struct UObject* WorldContextObject, struct FBlueprintSessionResult& BlueprintSessionResult); // Function Squad.SQGameInstance.GetServerURL // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x870bf0
	bool GetServerUniqueId(struct FBlueprintSessionResult& BlueprintSessionResult, struct UObject* WorldContextObject, struct FString& OutUniqueId); // Function Squad.SQGameInstance.GetServerUniqueId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x870dd0
	struct FSQServerSettings GetServerSettings(); // Function Squad.SQGameInstance.GetServerSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870b70
	struct FString GetNextLevelDisplayName(); // Function Squad.SQGameInstance.GetNextLevelDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870a60
	struct FString GetNextLayerDisplayName(); // Function Squad.SQGameInstance.GetNextLayerDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8709d0
	struct FString GetMenuMap(); // Function Squad.SQGameInstance.GetMenuMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870940
	struct USQGameInstanceEvents* GetGameInstanceEvents(); // Function Squad.SQGameInstance.GetGameInstanceEvents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870890
	struct FString GetCurrentLevelId(); // Function Squad.SQGameInstance.GetCurrentLevelId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870770
	struct FString GetCurrentLevelDisplayName(); // Function Squad.SQGameInstance.GetCurrentLevelDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8706e0
	struct FString GetCurrentLayerId(); // Function Squad.SQGameInstance.GetCurrentLayerId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x870650
	struct FString GetCurrentLayerDisplayName(); // Function Squad.SQGameInstance.GetCurrentLayerDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8705c0
	bool FindLevels(struct TArray<struct FString>& InSpecificLevelList, struct TArray<struct USQLevel*>& OutLevels); // Function Squad.SQGameInstance.FindLevels // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x870430
	bool FindLayers(struct TArray<struct FString>& InSpecificLayerList, struct TArray<struct USQLayer*>& OutLayers); // Function Squad.SQGameInstance.FindLayers // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8702d0
	void DisconnectToMenu(); // Function Squad.SQGameInstance.DisconnectToMenu // (Exec|Native|Public) // @ game+0x8702b0
	void DetermineNextMap(); // Function Squad.SQGameInstance.DetermineNextMap // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x870290
	void DetermineNextLevel(); // Function Squad.SQGameInstance.DetermineNextLevel // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x870270
	void DetermineNextLayer(); // Function Squad.SQGameInstance.DetermineNextLayer // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x870250
	void CheckConnectionToServer(struct UObject* WorldContextObject, struct USQServerListItemWidget* SessionWidget); // Function Squad.SQGameInstance.CheckConnectionToServer // (Final|Native|Public|BlueprintCallable) // @ game+0x870190
};

// Class Squad.SQGameInstanceEvents
// Size: 0x88 (Inherited: 0x28)
struct USQGameInstanceEvents : UObject {
	struct FScriptMulticastDelegate OnPlayerDestroyedVehicle; // 0x28(0x10)
	struct FScriptMulticastDelegate OnPlayerWounded; // 0x38(0x10)
	struct FScriptMulticastDelegate OnPlayerDetonateExplosive; // 0x48(0x10)
	struct FScriptMulticastDelegate OnEnteredMainMenu; // 0x58(0x10)
	struct FScriptMulticastDelegate OnGameStarted; // 0x68(0x10)
	struct FScriptMulticastDelegate OnGameEnded; // 0x78(0x10)
};

// Class Squad.SQGameInstanceSubsystems
// Size: 0x50 (Inherited: 0x30)
struct USQGameInstanceSubsystems : UGameInstanceSubsystem {
	struct TArray<struct FSQGameSubsystemObject> SquadGameSubsystemObjects; // 0x30(0x10)
	struct TArray<struct UObject*> SubsystemInstances; // 0x40(0x10)
};

// Class Squad.SQGameMode
// Size: 0x6a8 (Inherited: 0x338)
struct ASQGameMode : AGameMode {
	bool bTournamentMode; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float CheckEndMatchConditionsTimeInterval; // 0x33c(0x04)
	int InitialLives; // 0x340(0x04)
	int StartupTime; // 0x344(0x04)
	int RoundTime; // 0x348(0x04)
	int TimeBetweenMatches; // 0x34c(0x04)
	struct ASQTeam* WinnerTeam; // 0x350(0x08)
	struct ASQTeam* TeamClass; // 0x358(0x08)
	struct ASQSquad* SquadClass; // 0x360(0x08)
	struct TArray<struct ASQGameRuleSet*> RuleSetClasses; // 0x368(0x10)
	struct TArray<struct ASQGameRuleSet*> RuleSets; // 0x378(0x10)
	struct TArray<struct ASQTeam*> Teams; // 0x388(0x10)
	struct TArray<struct ASQTeam*> IndexedTeams; // 0x398(0x10)
	char pad_3A8[0x50]; // 0x3a8(0x50)
	struct FText DisplayName; // 0x3f8(0x18)
	char pad_410[0x294]; // 0x410(0x294)
	bool ConfigureFactionInProgress; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)

	void VehicleDestroyed(struct AController* Killer, struct AController* KilledPlayer, struct APawn* KilledPawn, struct UDamageType* DamageType); // Function Squad.SQGameMode.VehicleDestroyed // (Native|Public|BlueprintCallable) // @ game+0x8784f0
	void UnregisterImportantActor(struct AActor* Actor); // Function Squad.SQGameMode.UnregisterImportantActor // (Native|Public|BlueprintCallable) // @ game+0x878460
	bool TryToChangePlayersTeam(struct ASQPlayerController* PlayerToChange, int TeamToChangeTo, bool bForceChange); // Function Squad.SQGameMode.TryToChangePlayersTeam // (Native|Public|BlueprintCallable) // @ game+0x8782c0
	bool TryGetRulesetsOfClass(struct ASQGameRuleSet* RulesetClass, struct TArray<struct ASQGameRuleSet*>& OutRulesets); // Function Squad.SQGameMode.TryGetRulesetsOfClass // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877f40
	void RegisterRuleSet(struct ASQGameRuleSet* RuleSet); // Function Squad.SQGameMode.RegisterRuleSet // (Final|Native|Private) // @ game+0x877170
	void RegisterImportantActor(struct AActor* Actor); // Function Squad.SQGameMode.RegisterImportantActor // (Native|Public|BlueprintCallable) // @ game+0x8770e0
	void PlayerWounded(struct AController* Killer, struct AController* KilledPlayer, struct APawn* KilledPawn, struct UDamageType* DamageType); // Function Squad.SQGameMode.PlayerWounded // (Native|Public|BlueprintCallable) // @ game+0x876c60
	void PlayerRevived(struct AController* Reviver, struct AController* RevivedPlayer); // Function Squad.SQGameMode.PlayerRevived // (Native|Public|BlueprintCallable) // @ game+0x876650
	void PlayerHealed(struct AController* Healer, struct AController* HealedPlayer); // Function Squad.SQGameMode.PlayerHealed // (Native|Public|BlueprintCallable) // @ game+0x876310
	void PlayerDied(struct AController* Killer, struct AController* KilledPlayer, struct APawn* KilledPawn, struct UDamageType* DamageType); // Function Squad.SQGameMode.PlayerDied // (Native|Public|BlueprintCallable) // @ game+0x876140
	void PlayerBandaged(struct AController* Bandager, struct AController* BandagedPlayer); // Function Squad.SQGameMode.PlayerBandaged // (Native|Public|BlueprintCallable) // @ game+0x875fa0
	void OnPlayerChangedTeams(struct ASQPlayerController* PlayerWhoSwitched); // Function Squad.SQGameMode.OnPlayerChangedTeams // (Final|Native|Public|Const) // @ game+0x875f20
	void OnNextLevelSelected(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameMode.OnNextLevelSelected // (Final|Native|Public|HasOutParms) // @ game+0x875e30
	void OnNextLayerSelected(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameMode.OnNextLayerSelected // (Final|Native|Public|HasOutParms) // @ game+0x875d40
	void OnFactionSelected(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameMode.OnFactionSelected // (Final|Native|Public|HasOutParms) // @ game+0x875c50
	void OnCurrentLayerSelected(struct USQVoteSession* VoteSession, struct FSQChoice& Winner); // Function Squad.SQGameMode.OnCurrentLayerSelected // (Final|Native|Public|HasOutParms) // @ game+0x875b60
	void LogisticsDropOff(struct AActor* VehicleActor, float AmmoDroppedOff, float ConstructionDroppedOff); // Function Squad.SQGameMode.LogisticsDropOff // (Native|Public|BlueprintCallable) // @ game+0x875650
	bool IsDeployNow(struct APlayerController* PC); // Function Squad.SQGameMode.IsDeployNow // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8755c0
	struct ASQTeam* GetTeam(enum class ESQTeam Team); // Function Squad.SQGameMode.GetTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875530
	void GetDisplayNameArray(struct TArray<struct FString>& OutArray); // Function Squad.SQGameMode.GetDisplayNameArray // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x875330
	struct FString GetDisplayName(); // Function Squad.SQGameMode.GetDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875210
	struct ASQSoldier* GetConcretePawnClassForController(struct AController* InController); // Function Squad.SQGameMode.GetConcretePawnClassForController // (Native|Event|Public|BlueprintEvent) // @ game+0x875180
	bool AllowTeamChange(struct ASQPlayerController* RequestingPlayer, int NewTeam); // Function Squad.SQGameMode.AllowTeamChange // (Final|Native|Public) // @ game+0x8750c0
};

// Class Squad.SQGameMode_Menu
// Size: 0x338 (Inherited: 0x338)
struct ASQGameMode_Menu : AGameMode {
};

// Class Squad.SQGameplayService
// Size: 0x28 (Inherited: 0x28)
struct USQGameplayService : UBlueprintFunctionLibrary {

	bool TryGetTeamState(struct UObject* WorldContextObject, int TeamId, struct ASQTeamState* TeamStateClass, struct ASQTeamState*& OutTeamState); // Function Squad.SQGameplayService.TryGetTeamState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878180
	bool TryGetTeamOuterGameState(struct ASQTeam* WorldContextObject, struct ASQGameState* GameStateClass, struct ASQGameState*& OutGameState); // Function Squad.SQGameplayService.TryGetTeamOuterGameState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877e40
	bool TryGetTeamOuterGameMode(struct ASQTeam* WorldContextObject, struct ASQGameMode* GameModeClass, struct ASQGameMode*& OutGameMode); // Function Squad.SQGameplayService.TryGetTeamOuterGameMode // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877d40
	bool TryGetTeam(struct UObject* WorldContextObject, int TeamId, struct ASQTeam* TeamClass, struct ASQTeam*& OutTeam); // Function Squad.SQGameplayService.TryGetTeam // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878040
	bool TryGetPlayerOuterGameState(struct ASQPlayerController* WorldContextObject, struct ASQGameState* GameStateClass, struct ASQGameState*& OutGameState); // Function Squad.SQGameplayService.TryGetPlayerOuterGameState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877e40
	bool TryGetPlayerOuterGameMode(struct ASQPlayerController* WorldContextObject, struct ASQGameMode* GameModeClass, struct ASQGameMode*& OutGameMode); // Function Squad.SQGameplayService.TryGetPlayerOuterGameMode // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877d40
	bool TryGetLocalPlayerTeamState(struct UObject* WorldContextObject, struct ASQTeamState* TeamStateClass, struct ASQTeamState*& OutTeamState); // Function Squad.SQGameplayService.TryGetLocalPlayerTeamState // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877c40
	bool TryGetLocalPlayerTeamId(struct UObject* WorldContextObject, int& OutTeamId); // Function Squad.SQGameplayService.TryGetLocalPlayerTeamId // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877b70
	bool TryGetLocalPlayerState(struct UObject* WorldContextObject, struct ASQPlayerState* PlayerStateClass, struct ASQPlayerState*& OutPlayerState); // Function Squad.SQGameplayService.TryGetLocalPlayerState // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x877a70
	bool TryGetLocalPlayerController(struct UObject* WorldContextObject, struct ASQPlayerController*& OutPlayerController); // Function Squad.SQGameplayService.TryGetLocalPlayerController // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8779a0
	bool TryGetGameState(struct UObject* WorldContextObject, struct ASQGameState* GameStateClass, struct ASQGameState*& OutGameState); // Function Squad.SQGameplayService.TryGetGameState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8778a0
	bool TryGetGameMode(struct UObject* WorldContextObject, struct ASQGameMode* GameModeClass, struct ASQGameMode*& OutGameMode); // Function Squad.SQGameplayService.TryGetGameMode // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8777a0
	struct FDateTime GetServerUtcTime(); // Function Squad.SQGameplayService.GetServerUtcTime // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8754f0
};

// Class Squad.SQGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct USQGameplayStatics : UBlueprintFunctionLibrary {
};

// Class Squad.SQGameSpawn
// Size: 0x420 (Inherited: 0x278)
struct ASQGameSpawn : APlayerStart {
	char pad_278[0x8]; // 0x278(0x08)
	struct FScriptMulticastDelegate PreSiegedStateChangedSignal; // 0x280(0x10)
	struct FScriptMulticastDelegate OnSiegedStateChangedSignal; // 0x290(0x10)
	struct FScriptMulticastDelegate OnActivatedTimeStampChangedSignal; // 0x2a0(0x10)
	struct FScriptMulticastDelegate PreSpawningEnabledStateChanged; // 0x2b0(0x10)
	struct FScriptMulticastDelegate OnSpawningEnabledStateChanged; // 0x2c0(0x10)
	float RespawnDelay; // 0x2d0(0x04)
	float RespawnIncrease; // 0x2d4(0x04)
	float SecondsOfSpawnProtection; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct USQMapIconComponent* SpawnIconComponentClass; // 0x2e0(0x08)
	float MaxTimeIntervalBetweenSpawnPointLocationEvaluations; // 0x2e8(0x04)
	bool bSpawningEnabled; // 0x2ec(0x01)
	bool bSieged; // 0x2ed(0x01)
	char pad_2EE[0x2]; // 0x2ee(0x02)
	float ActivatedTimeStamp; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct USQCoreStateComponent* StateObject; // 0x2f8(0x08)
	struct USQMapIconComponent* MapIcon; // 0x300(0x08)
	struct USQMapIconWidget* DefaultMapIconWidget; // 0x308(0x08)
	float SpawnSearchRadius; // 0x310(0x04)
	float SpawnSearchHeight; // 0x314(0x04)
	struct TArray<struct FVector> ValidSpawnLocations; // 0x318(0x10)
	struct TArray<struct FVector> ValidOutOfSightSpawnPoints; // 0x328(0x10)
	bool bHasValidSpawnLocation; // 0x338(0x01)
	char pad_339[0xf]; // 0x339(0x0f)
	bool bCanEverDoNearbyEnemiesCheck; // 0x348(0x01)
	bool bCanBeSiegedByVehicles; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	float NearbyEnemiesRadius; // 0x34c(0x04)
	float NearbyEnemiesCheckTickRate; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UCurveFloat* SiegeDistanceThreshold; // 0x358(0x08)
	struct UCurveFloat* EnemyDistanceToRespawnDelay; // 0x360(0x08)
	char pad_368[0x88]; // 0x368(0x88)
	enum class ESQTeam Team; // 0x3f0(0x01)
	enum class ESQSpawnPointType SpawnPointType; // 0x3f1(0x01)
	char pad_3F2[0x2]; // 0x3f2(0x02)
	float WaveIntervalTime; // 0x3f4(0x04)
	char pad_3F8[0x18]; // 0x3f8(0x18)
	float WaveSpawnStartTime; // 0x410(0x04)
	char pad_414[0xc]; // 0x414(0x0c)

	void SetTeam(enum class ESQTeam Team); // Function Squad.SQGameSpawn.SetTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x87d860
	void SetSpawningEnabled(bool bEnabled); // Function Squad.SQGameSpawn.SetSpawningEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x87d700
	void SetSieged(bool bEnabled); // Function Squad.SQGameSpawn.SetSieged // (Final|Native|Public|BlueprintCallable) // @ game+0x87d670
	void SetRespawnIncrease(float Value); // Function Squad.SQGameSpawn.SetRespawnIncrease // (Final|Native|Public|BlueprintCallable) // @ game+0x87d540
	void SetActivatedTimeStamp(float Value, bool bForce); // Function Squad.SQGameSpawn.SetActivatedTimeStamp // (Final|Native|Public|BlueprintCallable) // @ game+0x87cd90
	void OnRep_Team(); // Function Squad.SQGameSpawn.OnRep_Team // (Native|Public) // @ game+0x87caf0
	void OnRep_SpawningEnabled(); // Function Squad.SQGameSpawn.OnRep_SpawningEnabled // (Native|Public) // @ game+0x87cad0
	void OnRep_Sieged(); // Function Squad.SQGameSpawn.OnRep_Sieged // (Native|Public) // @ game+0x87cab0
	void OnRep_HasValidSpawnLocation(); // Function Squad.SQGameSpawn.OnRep_HasValidSpawnLocation // (Native|Public) // @ game+0x86d540
	void OnRep_ActivatedTimeStamp(); // Function Squad.SQGameSpawn.OnRep_ActivatedTimeStamp // (Native|Public) // @ game+0x87c9f0
	void OnActivatedTimestampReached(); // Function Squad.SQGameSpawn.OnActivatedTimestampReached // (Final|Native|Private) // @ game+0x87bab0
	bool HasValidSpawnLocation(); // Function Squad.SQGameSpawn.HasValidSpawnLocation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c5d0
	float GetWaveTime(); // Function Squad.SQGameSpawn.GetWaveTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c5a0
	float GetWaveSpawnStartTime(); // Function Squad.SQGameSpawn.GetWaveSpawnStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c580
	float GetWaveIntervalTime(); // Function Squad.SQGameSpawn.GetWaveIntervalTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c560
	struct TArray<struct FVector> GetValidSpawnLocations(); // Function Squad.SQGameSpawn.GetValidSpawnLocations // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c4d0
	struct FVector GetValidSpawnLocation(struct UObject* DefaultPawnClass); // Function Squad.SQGameSpawn.GetValidSpawnLocation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x87c420
	enum class ESQTeam GetTeam(); // Function Squad.SQGameSpawn.GetTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c360
	enum class ESQSpawnPointType GetSpawnPointType(); // Function Squad.SQGameSpawn.GetSpawnPointType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c240
	bool GetSpawningEnabled(); // Function Squad.SQGameSpawn.GetSpawningEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c270
	struct AActor* GetSpawnActor(); // Function Squad.SQGameSpawn.GetSpawnActor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x87c210
	bool GetSieged(); // Function Squad.SQGameSpawn.GetSieged // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c1e0
	float GetRespawnIncrease(); // Function Squad.SQGameSpawn.GetRespawnIncrease // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c1b0
	float GetRespawnDelay(); // Function Squad.SQGameSpawn.GetRespawnDelay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x87c170
	float GetRemainingActivatingTime(); // Function Squad.SQGameSpawn.GetRemainingActivatingTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c110
	float GetActivatedTimeStamp(); // Function Squad.SQGameSpawn.GetActivatedTimeStamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87bbb0
	bool GetActivatedState(); // Function Squad.SQGameSpawn.GetActivatedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87bb80
	void ClearActivatingTimestamp(); // Function Squad.SQGameSpawn.ClearActivatingTimestamp // (Final|Native|Public|BlueprintCallable) // @ game+0x87bab0
	bool CanSpawn(); // Function Squad.SQGameSpawn.CanSpawn // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x87b980
	void BP_OnSiegedStateChanged(); // Function Squad.SQGameSpawn.BP_OnSiegedStateChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_OnActivatedTimeStampChanged(); // Function Squad.SQGameSpawn.BP_OnActivatedTimeStampChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQGameRallyPoint
// Size: 0x440 (Inherited: 0x420)
struct ASQGameRallyPoint : ASQGameSpawn {
	struct UStaticMeshComponent* Mesh; // 0x420(0x08)
	struct USQMapIconComponent* RallyPointMapIcon; // 0x428(0x08)
	struct USoundBase* PlacementSound; // 0x430(0x08)
	int NumberOfSpawns; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)

	int GetNumberOfSpawns(); // Function Squad.SQGameRallyPoint.GetNumberOfSpawns // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x875440
};

// Class Squad.SQGameSession
// Size: 0x548 (Inherited: 0x260)
struct ASQGameSession : AGameSession {
	char pad_260[0x188]; // 0x260(0x188)
	int NumPlayersDiffForTeamChanges; // 0x3e8(0x04)
	bool bAllowTeamChanges; // 0x3ec(0x01)
	bool bPreventTeamChangeIfUnbalanced; // 0x3ed(0x01)
	char pad_3EE[0xda]; // 0x3ee(0xda)
	struct USQConfig* SquadConfig; // 0x4c8(0x08)
	char pad_4D0[0x78]; // 0x4d0(0x78)

	void SetServerPassword(struct FString ServerPassword); // Function Squad.SQGameSession.SetServerPassword // (Native|Public) // @ game+0x87d5c0
	void SetPublicQueueLimit(int PublicQueueLimit); // Function Squad.SQGameSession.SetPublicQueueLimit // (Native|Public) // @ game+0x87d420
	void SetNumReservedSlots(int NumReserved); // Function Squad.SQGameSession.SetNumReservedSlots // (Native|Public) // @ game+0x87d300
	void SetMaxNumPlayers(int NumPlayers, bool bIgnoreRestrictions); // Function Squad.SQGameSession.SetMaxNumPlayers // (Native|Public) // @ game+0x87d1b0
	bool Logout(); // Function Squad.SQGameSession.Logout // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c9c0
	bool Login(struct FString LoginName, struct FString InPassword); // Function Squad.SQGameSession.Login // (Final|Native|Public|BlueprintCallable) // @ game+0x87c830
	bool IsLoginBusy(); // Function Squad.SQGameSession.IsLoginBusy // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c5d0
	bool IsLoggedIn(); // Function Squad.SQGameSession.IsLoggedIn // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c6b0
	struct USQConfig* GetSquadConfig(); // Function Squad.SQGameSession.GetSquadConfig // (Native|Public|Const) // @ game+0x87c2a0
	struct FString GetLastLoginError(); // Function Squad.SQGameSession.GetLastLoginError // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87be70
};

// Class Squad.SQGameSubsystemInterface
// Size: 0x28 (Inherited: 0x28)
struct USQGameSubsystemInterface : UInterface {

	void InitializeSubsystem(struct USQGameInstance* SquadGameInstance); // Function Squad.SQGameSubsystemInterface.InitializeSubsystem // (Native|Event|Public|BlueprintEvent) // @ game+0x87c600
};

// Class Squad.SQGameUserSettings
// Size: 0x6b8 (Inherited: 0x118)
struct USQGameUserSettings : UGameUserSettings {
	char pad_118[0x18]; // 0x118(0x18)
	struct FString PlayerNamePrefix; // 0x130(0x10)
	float NameTagOpacity; // 0x140(0x04)
	float NameTagScale; // 0x144(0x04)
	bool bShowNameTagText; // 0x148(0x01)
	bool bShowNameTagKit; // 0x149(0x01)
	bool bClientAutoRecord; // 0x14a(0x01)
	char pad_14B[0x1]; // 0x14b(0x01)
	int NumberAutoRecordedGames; // 0x14c(0x04)
	int DistanceFieldShadows; // 0x150(0x04)
	bool bIsAAEnabled; // 0x154(0x01)
	bool bInvertedYAxis; // 0x155(0x01)
	bool bEnableMouseSmoothing; // 0x156(0x01)
	bool bKeyboardHighlight; // 0x157(0x01)
	struct FText ControlsPresetName; // 0x158(0x18)
	bool bUseMenuToolTips; // 0x170(0x01)
	bool bUseRadialMenuToolTips; // 0x171(0x01)
	bool bUseInGameHelp; // 0x172(0x01)
	char pad_173[0x1]; // 0x173(0x01)
	int HZBOcclusion; // 0x174(0x04)
	int TextureStreamPoolSizeStorage; // 0x178(0x04)
	float FOV; // 0x17c(0x04)
	float GlobalSensitivity; // 0x180(0x04)
	float DoubleKeyPressTime; // 0x184(0x04)
	char pad_188[0x4]; // 0x188(0x04)
	int Tessellation; // 0x18c(0x04)
	int TessellationMode; // 0x190(0x04)
	enum class ESQToggleType CrouchMode; // 0x194(0x01)
	enum class ESQToggleType ADSMode; // 0x195(0x01)
	enum class ESQToggleType LeanMode; // 0x196(0x01)
	enum class ESQToggleType FreelookMode; // 0x197(0x01)
	enum class ESQToggleType SprintMode; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float FreelookSensitivitySliderValue; // 0x19c(0x04)
	float FreelookSensitivity; // 0x1a0(0x04)
	bool bHelicopterInvertMousePitch; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	float HelicopterPitchSensitivitySliderValue; // 0x1a8(0x04)
	float HelicopterPitchSensitivity; // 0x1ac(0x04)
	float HelicopterRollSensitivitySliderValue; // 0x1b0(0x04)
	bool bUncapTexturePoolSize; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	float HelicopterRollSensitivity; // 0x1b8(0x04)
	bool bUseSensivityScaling; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float GlobalSensitivitySliderValue; // 0x1c0(0x04)
	float SoldierSensitivitySliderValue; // 0x1c4(0x04)
	float SoldierSensitivity; // 0x1c8(0x04)
	int AMDOptimisation; // 0x1cc(0x04)
	struct TMap<float, float> SoldierZoomSensitivitiesSliderValues; // 0x1d0(0x50)
	struct TMap<float, float> SoldierZoomSensitivities; // 0x220(0x50)
	float VehicleSensitivitySliderValue; // 0x270(0x04)
	float VehicleSensitivity; // 0x274(0x04)
	float PostFX_BrightnessSliderValue; // 0x278(0x04)
	float PostFX_Brightness; // 0x27c(0x04)
	float PostFX_SharpnessSliderValue; // 0x280(0x04)
	float PostFX_Sharpness; // 0x284(0x04)
	float PostFX_ContrastSliderValue; // 0x288(0x04)
	float PostFX_Contrast; // 0x28c(0x04)
	float PostFX_SaturationSliderValue; // 0x290(0x04)
	float PostFX_Saturation; // 0x294(0x04)
	struct FSQScalabilitySetting ShadowQuality; // 0x298(0x40)
	struct FSQInt32CVarSetting ContactShadows; // 0x2d8(0x30)
	struct FSQInt32CVarSetting EnforceContactShadows; // 0x308(0x30)
	struct FSQScalabilitySetting FoliageQuality; // 0x338(0x40)
	struct FSQInt32CVarSetting FoliageMinLOD; // 0x378(0x30)
	int TAASampleStorageValue; // 0x3a8(0x04)
	int TAASampleStorage; // 0x3ac(0x04)
	struct TMap<float, float> VehicleZoomSensitivitiesSliderValues; // 0x3b0(0x50)
	struct TMap<float, float> VehicleZoomSensitivities; // 0x400(0x50)
	bool bFreelookRecentersWeapon; // 0x450(0x01)
	bool bJumpCausesUnCrouch; // 0x451(0x01)
	bool bJumpCausesUnProne; // 0x452(0x01)
	bool bIsDoubleTapWalkingEnabled; // 0x453(0x01)
	bool bShowDiffVerServers; // 0x454(0x01)
	bool bShowEmptyServers; // 0x455(0x01)
	bool bShowQueuesSeparately; // 0x456(0x01)
	bool bShowReservedSlots; // 0x457(0x01)
	float MenuFrameRateLimit; // 0x458(0x04)
	int ToneMapperQualityStorage; // 0x45c(0x04)
	bool ToneMapperQualityToggle; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int BloomQualityStorage; // 0x464(0x04)
	bool BloomQualityToggle; // 0x468(0x01)
	bool AmbientOcclusionLevelsToggle; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	int ShadowFilterMethod; // 0x46c(0x04)
	int GraphicsQuality; // 0x470(0x04)
	float ScreenSharpening; // 0x474(0x04)
	int ScreenPercentage; // 0x478(0x04)
	float MotionBlurAmount; // 0x47c(0x04)
	int FogValue; // 0x480(0x04)
	int AtmosphereValue; // 0x484(0x04)
	int LensFlareQuality; // 0x488(0x04)
	int AutoExposure; // 0x48c(0x04)
	int AntiAliasingMode; // 0x490(0x04)
	int MaterialQuality; // 0x494(0x04)
	int DetailMode; // 0x498(0x04)
	int Upsampling; // 0x49c(0x04)
	int TemporalAASamples; // 0x4a0(0x04)
	float TemporalAACurrentFrameWeight; // 0x4a4(0x04)
	struct FSQScalabilitySetting TextureQuality; // 0x4a8(0x40)
	struct FSQScalabilitySetting ViewDistanceQuality; // 0x4e8(0x40)
	struct FSQInt32CVarSetting SkeletalMeshLODBias; // 0x528(0x30)
	struct FSQInt32CVarSetting MaxAnisotropy; // 0x558(0x30)
	float MasterVolume; // 0x588(0x04)
	float EffectsVolume; // 0x58c(0x04)
	float UIVolume; // 0x590(0x04)
	float MusicVolume; // 0x594(0x04)
	float SquadVoiceVolume; // 0x598(0x04)
	float VoiceSide; // 0x59c(0x04)
	bool bApplyVoiceRadioFilter; // 0x5a0(0x01)
	bool bApplyBiasWhileNonLeader; // 0x5a1(0x01)
	char pad_5A2[0x1]; // 0x5a2(0x01)
	bool bPlaySquadVOIPSounds; // 0x5a3(0x01)
	bool bPlayCommandVOIPSounds; // 0x5a4(0x01)
	char pad_5A5[0x3]; // 0x5a5(0x03)
	float LocalVoIPVolume; // 0x5a8(0x04)
	float CommandVoIPVolume; // 0x5ac(0x04)
	float CommandVoIPSide; // 0x5b0(0x04)
	float LeaderVoipDucking; // 0x5b4(0x04)
	struct TMap<enum class ESQJoyStickControls, struct FSQJoyStickConfig> JoyStickConfigurations; // 0x5b8(0x50)
	bool bAlwaysFreeLook; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	float UnfocusedVolumeMultiplier; // 0x60c(0x04)
	float MaxImpactEffectDecalLifeSpan; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct TArray<struct FSQOnlineInventorySetting> InventorySettings; // 0x618(0x10)
	int TextureStreaming; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct FScriptMulticastDelegate OnGameUserSettingsChanged; // 0x630(0x10)
	int StreamerModeMask; // 0x640(0x04)
	bool bIsLanMatch; // 0x644(0x01)
	char pad_645[0x3]; // 0x645(0x03)
	uint32 SquadIncrementalVersion; // 0x648(0x04)
	uint32 SquadSettingsVersion; // 0x64c(0x04)
	char pad_650[0x68]; // 0x650(0x68)

	int UpdateQualityBasedOnGraphicsQuality(int InBaseQuality, int InGraphicsQuality); // Function Squad.SQGameUserSettings.UpdateQualityBasedOnGraphicsQuality // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87da30
	void ToggleStreamerModeEnabledForLevel(enum class ESQStreamerModeLevel Level); // Function Squad.SQGameUserSettings.ToggleStreamerModeEnabledForLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x87d8e0
	void SetSteamItemEnabled(int ItemId, bool bEnabled); // Function Squad.SQGameUserSettings.SetSteamItemEnabled // (Native|Public|BlueprintCallable) // @ game+0x87d790
	void SetResolutionQuality(int ResolutionQuality); // Function Squad.SQGameUserSettings.SetResolutionQuality // (Native|Public|BlueprintCallable) // @ game+0x87d4b0
	void SetPostProcessQuality(int PostProcessQuality); // Function Squad.SQGameUserSettings.SetPostProcessQuality // (Native|Public|BlueprintCallable) // @ game+0x87d390
	void SetMenuFrameRateLimit(float NewLimit); // Function Squad.SQGameUserSettings.SetMenuFrameRateLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x87d280
	void SetJoyConfig(enum class ESQJoyStickControls Control, struct FSQJoyStickConfig config); // Function Squad.SQGameUserSettings.SetJoyConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x87d0c0
	void SetGraphicsQuality(int InGraphicsQuality); // Function Squad.SQGameUserSettings.SetGraphicsQuality // (Native|Public|BlueprintCallable) // @ game+0x87d030
	void SetEffectsQuality(int EffectsQuality); // Function Squad.SQGameUserSettings.SetEffectsQuality // (Native|Public|BlueprintCallable) // @ game+0x87cfa0
	void SetActiveAudioOutputDevice(struct FString InDevice); // Function Squad.SQGameUserSettings.SetActiveAudioOutputDevice // (Final|Native|Private|BlueprintCallable) // @ game+0x87cf00
	void SetActiveAudioInputDevice(struct FString InDevice); // Function Squad.SQGameUserSettings.SetActiveAudioInputDevice // (Final|Native|Private|BlueprintCallable) // @ game+0x87ce60
	bool SaveBackupKeyBinds(struct FString Filename); // Function Squad.SQGameUserSettings.SaveBackupKeyBinds // (Final|Native|Public|BlueprintCallable) // @ game+0x87cce0
	int ReadSetting(struct FSQInt32CVarSetting& InSetting); // Function Squad.SQGameUserSettings.ReadSetting // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x87cbe0
	void OverrideTemporalFrameWeight(float Value, bool bOverride); // Function Squad.SQGameUserSettings.OverrideTemporalFrameWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x87cb10
	bool LoadBackupKeyBinds(struct FString Filename); // Function Squad.SQGameUserSettings.LoadBackupKeyBinds // (Final|Native|Public|BlueprintCallable) // @ game+0x87c780
	bool IsSteamItemEnabled(int ItemId); // Function Squad.SQGameUserSettings.IsSteamItemEnabled // (Native|Public|BlueprintCallable) // @ game+0x87c6e0
	int GetTotalVRAMCapacity(); // Function Squad.SQGameUserSettings.GetTotalVRAMCapacity // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c3f0
	int GetTexturePoolUsage(); // Function Squad.SQGameUserSettings.GetTexturePoolUsage // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c3c0
	int GetTexturePoolSize(); // Function Squad.SQGameUserSettings.GetTexturePoolSize // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87c390
	bool GetStreamerModeEnabledForLevel(enum class ESQStreamerModeLevel Level); // Function Squad.SQGameUserSettings.GetStreamerModeEnabledForLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87c2d0
	float GetMenuFrameRateLimit(); // Function Squad.SQGameUserSettings.GetMenuFrameRateLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x87bf20
	struct FSQJoyStickConfig GetJoyConfig(enum class ESQJoyStickControls Control); // Function Squad.SQGameUserSettings.GetJoyConfig // (Final|Native|Public|BlueprintCallable) // @ game+0x87bde0
	void GetAvailableAudioOutputDevice(struct TArray<struct FString>& OutAvailableDevice, struct FString& OutCurrentDevice); // Function Squad.SQGameUserSettings.GetAvailableAudioOutputDevice // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x87bc90
	void GetActiveAudioInputDevice(struct FString& OutCurrentDevice); // Function Squad.SQGameUserSettings.GetActiveAudioInputDevice // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x87bbe0
	bool DeleteKeybindsBackup(struct FString Filename); // Function Squad.SQGameUserSettings.DeleteKeybindsBackup // (Final|Native|Public|BlueprintCallable) // @ game+0x87bad0
	void ChangeSetting(struct FSQInt32CVarSetting& InSetting, int Value); // Function Squad.SQGameUserSettings.ChangeSetting // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x87b9b0
	void BlueprintSetVSync(bool bEnable); // Function Squad.SQGameUserSettings.BlueprintSetVSync // (Native|Public|BlueprintCallable) // @ game+0x87b8f0
	void BlueprintSetToDefaults(); // Function Squad.SQGameUserSettings.BlueprintSetToDefaults // (Native|Public|BlueprintCallable) // @ game+0x8674c0
	void BlueprintSetSoundsToDefaults(); // Function Squad.SQGameUserSettings.BlueprintSetSoundsToDefaults // (Native|Public|BlueprintCallable) // @ game+0x87b8d0
	void BlueprintSetScreenResolution(struct FIntPoint Resolution); // Function Squad.SQGameUserSettings.BlueprintSetScreenResolution // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x87b850
	void BlueprintSetPoolSize(int InTextureQuality); // Function Squad.SQGameUserSettings.BlueprintSetPoolSize // (Native|Public|BlueprintCallable) // @ game+0x87b7c0
	void BlueprintSetKeysToDefaults(); // Function Squad.SQGameUserSettings.BlueprintSetKeysToDefaults // (Native|Public|BlueprintCallable) // @ game+0x87b7a0
	void BlueprintSetGraphicsToDefaults(); // Function Squad.SQGameUserSettings.BlueprintSetGraphicsToDefaults // (Native|Public|BlueprintCallable) // @ game+0x85ed80
	void BlueprintSetGameToDefaults(); // Function Squad.SQGameUserSettings.BlueprintSetGameToDefaults // (Native|Public|BlueprintCallable) // @ game+0x85f880
	void BlueprintSetFullscreenMode(int InFullscreenMode); // Function Squad.SQGameUserSettings.BlueprintSetFullscreenMode // (Native|Public|BlueprintCallable) // @ game+0x87b710
	void BlueprintResetToCurrentSettings(); // Function Squad.SQGameUserSettings.BlueprintResetToCurrentSettings // (Native|Public|BlueprintCallable) // @ game+0x85ec90
	void BlueprintResetLocalAppdata(); // Function Squad.SQGameUserSettings.BlueprintResetLocalAppdata // (Native|Public|BlueprintCallable) // @ game+0x85ff40
	bool BlueprintGetVSync(); // Function Squad.SQGameUserSettings.BlueprintGetVSync // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b6e0
	struct FIntPoint BlueprintGetScreenResolution(); // Function Squad.SQGameUserSettings.BlueprintGetScreenResolution // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x87b6a0
	void BlueprintGetQualityLevels(int& ResolutionQuality, int& ViewDistanceQuality, int& AntiAliasingQuality, int& OutShadowQuality, int& PostProcessQuality, int& TextureQuality, int& EffectsQuality, int& FoliageQuality, int& ScreenEffects); // Function Squad.SQGameUserSettings.BlueprintGetQualityLevels // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x87b370
	int BlueprintGetFullscreenMode(); // Function Squad.SQGameUserSettings.BlueprintGetFullscreenMode // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b340
	void BlueprintApplySettings(bool bCheckForCommandLineOverrides); // Function Squad.SQGameUserSettings.BlueprintApplySettings // (Native|Public|BlueprintCallable) // @ game+0x87b2b0
	void BenchmarkGraphicsSettings(); // Function Squad.SQGameUserSettings.BenchmarkGraphicsSettings // (Native|Public|BlueprintCallable) // @ game+0x87b290
};

// Class Squad.SQGraphInitializerComponent
// Size: 0xe8 (Inherited: 0xd8)
struct USQGraphInitializerComponent : UActorComponent {
	struct TArray<struct FSQDesignLink> DesignOutgoingLinks; // 0xd8(0x10)

	void UpdateDesignLinks(); // Function Squad.SQGraphInitializerComponent.UpdateDesignLinks // (Final|Native|Public|BlueprintCallable) // @ game+0x8825d0
	void PopulateGraph(); // Function Squad.SQGraphInitializerComponent.PopulateGraph // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x881100
};

// Class Squad.SQGraphAASInitializerComponent
// Size: 0xe8 (Inherited: 0xe8)
struct USQGraphAASInitializerComponent : USQGraphInitializerComponent {
};

// Class Squad.SQGraphVisualizerComponent
// Size: 0xe8 (Inherited: 0xd8)
struct USQGraphVisualizerComponent : UActorComponent {
	bool bShowDebugInfo; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float DebugNodeRadius; // 0xdc(0x04)
	float DebugNodeHeightOffset; // 0xe0(0x04)
	float DebugLineHeightOffset; // 0xe4(0x04)

	void UpdateDesignLinks(); // Function Squad.SQGraphVisualizerComponent.UpdateDesignLinks // (Final|Native|Public|BlueprintCallable) // @ game+0x8825f0
	void DrawNode(struct USQGraphNodeComponent* Node, struct FColor Color); // Function Squad.SQGraphVisualizerComponent.DrawNode // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x881210
	void DrawLink(struct USQGraphNodeComponent* NodeA, struct USQGraphNodeComponent* NodeB, struct FColor LinkColor); // Function Squad.SQGraphVisualizerComponent.DrawLink // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x881120
	void Draw(); // Function Squad.SQGraphVisualizerComponent.Draw // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x881100
};

// Class Squad.SQGraphAASVisualizerComponent
// Size: 0xe8 (Inherited: 0xe8)
struct USQGraphAASVisualizerComponent : USQGraphVisualizerComponent {
};

// Class Squad.SQGraphicsLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQGraphicsLibrary : USQBlueprintLibrary {
};

// Class Squad.RouteSelectorPredicate
// Size: 0x30 (Inherited: 0x28)
struct URouteSelectorPredicate : UObject {
	int NumLinksToChoose; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	bool Execute(struct TArray<struct USQGraphNodeComponent*>& LinksLeft, struct TArray<struct USQGraphNodeComponent*>& ChosenLinks, struct FRandomStream& RandStream); // Function Squad.RouteSelectorPredicate.Execute // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x881650
};

// Class Squad.RouteSelectorPredicate2
// Size: 0x30 (Inherited: 0x30)
struct URouteSelectorPredicate2 : URouteSelectorPredicate {
};

// Class Squad.RouteCombinerPredicate
// Size: 0x28 (Inherited: 0x28)
struct URouteCombinerPredicate : UObject {

	void Execute(struct TArray<struct FSQRoute2>& NewRoutes, struct TArray<struct FSQRoute2>& Routes); // Function Squad.RouteCombinerPredicate.Execute // (Native|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x8814c0
};

// Class Squad.RouteCombinerPredicate2
// Size: 0x28 (Inherited: 0x28)
struct URouteCombinerPredicate2 : URouteCombinerPredicate {
};

// Class Squad.SQGraphRAASInitializerComponent
// Size: 0xe8 (Inherited: 0xe8)
struct USQGraphRAASInitializerComponent : USQGraphAASInitializerComponent {
};

// Class Squad.SQGraphRAASVisualizerComponent
// Size: 0x100 (Inherited: 0xe8)
struct USQGraphRAASVisualizerComponent : USQGraphAASVisualizerComponent {
	char pad_E8[0x10]; // 0xe8(0x10)
	int RouteIndex; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)

	void UpdateCachedRoutes(); // Function Squad.SQGraphRAASVisualizerComponent.UpdateCachedRoutes // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8825b0
};

// Class Squad.SQGrenade
// Size: 0x578 (Inherited: 0x480)
struct ASQGrenade : ASQEquipableItem {
	enum class ESQGrenadeState GrenadeState; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FSQGrenadeData GrenadeConfig; // 0x488(0x48)
	char pad_4D0[0x18]; // 0x4d0(0x18)
	struct USQGrenadeStaticInfo* GrenadeStaticInfo; // 0x4e8(0x08)
	bool bCachedOverhandPinpull; // 0x4f0(0x01)
	bool bCachedOverhandThrow; // 0x4f1(0x01)
	bool bCachedUnderhandPinpull; // 0x4f2(0x01)
	bool bCachedUnderhandThrow; // 0x4f3(0x01)
	bool bCachedReloading; // 0x4f4(0x01)
	char pad_4F5[0x3]; // 0x4f5(0x03)
	struct UAnimMontage* WeaponOverhandPinpull1pMontage; // 0x4f8(0x08)
	struct UAnimMontage* WeaponOverhandPinpull3pMontage; // 0x500(0x08)
	struct UAnimMontage* OverhandPinpull1pMontage; // 0x508(0x08)
	struct UAnimMontage* OverhandPinpull3pMontage; // 0x510(0x08)
	struct UAnimMontage* WeaponOverhandThrow1pMontage; // 0x518(0x08)
	struct UAnimMontage* WeaponOverhandThrow3pMontage; // 0x520(0x08)
	struct UAnimMontage* OverhandThrow1pMontage; // 0x528(0x08)
	struct UAnimMontage* OverhandThrow3pMontage; // 0x530(0x08)
	struct UAnimMontage* WeaponUnderhandPinpull1pMontage; // 0x538(0x08)
	struct UAnimMontage* WeaponUnderhandPinpull3pMontage; // 0x540(0x08)
	struct UAnimMontage* UnderhandPinpull1pMontage; // 0x548(0x08)
	struct UAnimMontage* UnderhandPinpull3pMontage; // 0x550(0x08)
	struct UAnimMontage* WeaponUnderhandThrow1pMontage; // 0x558(0x08)
	struct UAnimMontage* WeaponUnderhandThrow3pMontage; // 0x560(0x08)
	struct UAnimMontage* UnderhandThrow1pMontage; // 0x568(0x08)
	struct UAnimMontage* UnderhandThrow3pMontage; // 0x570(0x08)

	void UpdateUnderhandThrow(); // Function Squad.SQGrenade.UpdateUnderhandThrow // (Final|Native|Protected|BlueprintCallable) // @ game+0x8826d0
	void UpdateUnderhandPinpull(); // Function Squad.SQGrenade.UpdateUnderhandPinpull // (Final|Native|Protected|BlueprintCallable) // @ game+0x8826b0
	void UpdateReloading(); // Function Squad.SQGrenade.UpdateReloading // (Final|Native|Protected|BlueprintCallable) // @ game+0x882690
	void UpdateOverhandThrow(); // Function Squad.SQGrenade.UpdateOverhandThrow // (Final|Native|Protected|BlueprintCallable) // @ game+0x882670
	void UpdateOverhandPinpull(); // Function Squad.SQGrenade.UpdateOverhandPinpull // (Final|Native|Protected|BlueprintCallable) // @ game+0x882650
	void ServerSpawnGrenade(struct FVector SpawnLocationZeroBased); // Function Squad.SQGrenade.ServerSpawnGrenade // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x8823f0
	void ServerReleaseThrow(bool bOverhand); // Function Squad.SQGrenade.ServerReleaseThrow // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8820f0
	void ServerPrepareThrow(bool bOverhand); // Function Squad.SQGrenade.ServerPrepareThrow // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x882030
	void OnRep_GrenadeState(); // Function Squad.SQGrenade.OnRep_GrenadeState // (Final|Native|Protected) // @ game+0x881eb0
	struct ASQSoldier* GetOwnerSoldier(); // Function Squad.SQGrenade.GetOwnerSoldier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881b10
	struct USQGrenadeStaticInfo* GetGrenadeStaticInfo(); // Function Squad.SQGrenade.GetGrenadeStaticInfo // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x881a30
	struct FVector GetAimLocation(); // Function Squad.SQGrenade.GetAimLocation // (Native|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x881830
	struct FRotator GetAimDirection(); // Function Squad.SQGrenade.GetAimDirection // (Native|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x8817f0
	void BlueprintOnGrenadeStateChanged(); // Function Squad.SQGrenade.BlueprintOnGrenadeStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQProjectile
// Size: 0x490 (Inherited: 0x248)
struct ASQProjectile : AActor {
	struct USphereComponent* CollisionComp; // 0x248(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x250(0x08)
	struct UDamageType* DamageTypeToApply; // 0x258(0x08)
	struct FHitResult LastImpactHitResult; // 0x260(0x88)
	bool bHasImpacted; // 0x2e8(0x01)
	bool bDestroyOnImpact; // 0x2e9(0x01)
	bool bAppliesSuppression; // 0x2ea(0x01)
	char pad_2EB[0x1]; // 0x2eb(0x01)
	float CollisionSize; // 0x2ec(0x04)
	char pad_2F0[0x2c]; // 0x2f0(0x2c)
	bool bIsExplosiveProjectile; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float ExplosiveBaseDamage; // 0x320(0x04)
	float ExplosiveMinimumDamage; // 0x324(0x04)
	float ExplosiveKillZoneRadius; // 0x328(0x04)
	float ExplosiveDamageInnerRadius; // 0x32c(0x04)
	float ExplosiveDamageOuterRadius; // 0x330(0x04)
	float ExplosiveDamageFalloff; // 0x334(0x04)
	float ArmorPenetrationDepthMillimeters; // 0x338(0x04)
	float TraceDistanceAfterPenetrationMeters; // 0x33c(0x04)
	float ExplosiveDamageDistanceFromImpactNormal; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UAudioComponent* ProjectileAC; // 0x348(0x08)
	bool bOnlyPlayFlybySoundOnProjectile; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct USoundCue* FlybySound; // 0x358(0x08)
	struct USQSuppressionInfo* SuppressionInfoClass; // 0x360(0x08)
	struct TMap<struct USQPhysicalMaterial*, struct FSQProjectileImpactEffect> SpecificImpactEffects; // 0x368(0x50)
	struct TMap<struct USQPhysicalMaterial*, struct FSQProjectileImpactEffect> SpecificThrowableEffects; // 0x3b8(0x50)
	struct TMap<struct USQPhysicalMaterial*, struct FSQProjectileImpactEffect> SpecificExplosionEffects; // 0x408(0x50)
	struct USQPhysicalMaterialEffects* DefaultEffectsClass; // 0x458(0x08)
	bool bClientAuthoritativeImpact; // 0x460(0x01)
	bool bProxiesPredictImpact; // 0x461(0x01)
	char pad_462[0x6]; // 0x462(0x06)
	struct AController* DamageInstigatorController; // 0x468(0x08)
	char pad_470[0x20]; // 0x470(0x20)

	struct UAudioComponent* PlayProjectileSound(struct USoundCue* Sound); // Function Squad.SQProjectile.PlayProjectileSound // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc6b0
	bool PlayExplosionEffect(struct FHitResult& ImpactHit); // Function Squad.SQProjectile.PlayExplosionEffect // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8cc5e0
	void OnOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQProjectile.OnOverlap // (Final|Native|Public|HasOutParms) // @ game+0x8cbfb0
	void OnImpact(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQProjectile.OnImpact // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x8cbe10
	struct ASQEquipableItem* GetWeapon(); // Function Squad.SQProjectile.GetWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8cb780
	float GetDamage(); // Function Squad.SQProjectile.GetDamage // (Native|Public|BlueprintCallable) // @ game+0x8cb660
	void DisableAndDestroy(); // Function Squad.SQProjectile.DisableAndDestroy // (Native|Protected|BlueprintCallable) // @ game+0x8cb5a0
	bool BPApplyExplosiveDamage(struct FHitResult& LastHitResult, struct AActor* DamageCauser, struct TArray<struct AActor*> IgnoreActors); // Function Squad.SQProjectile.BPApplyExplosiveDamage // (BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8caa80
	void BlueprintOnImpact(struct FHitResult& HitResult); // Function Squad.SQProjectile.BlueprintOnImpact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQGrenadeProjectile
// Size: 0x4b8 (Inherited: 0x490)
struct ASQGrenadeProjectile : ASQProjectile {
	float MinimumVelocityToPlayThrowableEffects; // 0x490(0x04)
	bool bIsExploding; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	float FuseTime; // 0x498(0x04)
	bool bExplodeOnFuse; // 0x49c(0x01)
	bool bExplodeOnImpact; // 0x49d(0x01)
	bool bExplodeOnLifeSpanExpired; // 0x49e(0x01)
	bool bExplodeOnLifeSpanExpiredAfterImpact; // 0x49f(0x01)
	struct UParticleSystem* DefaultExplosionEffect; // 0x4a0(0x08)
	struct USoundCue* DefaultExplosionSound; // 0x4a8(0x08)
	float GroundTraceLength; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)

	bool PlayThrowableImpactEffect(struct FHitResult& ImpactHit); // Function Squad.SQGrenadeProjectile.PlayThrowableImpactEffect // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x881ef0
	void Explode(); // Function Squad.SQGrenadeProjectile.Explode // (Final|Native|Public|BlueprintCallable) // @ game+0x8817d0
	void BP_Explode(); // Function Squad.SQGrenadeProjectile.BP_Explode // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQGrenadeStaticInfo
// Size: 0x5a8 (Inherited: 0x528)
struct USQGrenadeStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* WeaponOverhandPinpull1pMontage; // 0x528(0x08)
	struct UAnimMontage* WeaponOverhandPinpull3pMontage; // 0x530(0x08)
	struct UAnimMontage* OverhandPinpull1pMontage; // 0x538(0x08)
	struct UAnimMontage* OverhandPinpull3pMontage; // 0x540(0x08)
	struct UAnimMontage* WeaponOverhandThrow1pMontage; // 0x548(0x08)
	struct UAnimMontage* WeaponOverhandThrow3pMontage; // 0x550(0x08)
	struct UAnimMontage* OverhandThrow1pMontage; // 0x558(0x08)
	struct UAnimMontage* OverhandThrow3pMontage; // 0x560(0x08)
	struct UAnimMontage* WeaponUnderhandPinpull1pMontage; // 0x568(0x08)
	struct UAnimMontage* WeaponUnderhandPinpull3pMontage; // 0x570(0x08)
	struct UAnimMontage* UnderhandPinpull1pMontage; // 0x578(0x08)
	struct UAnimMontage* UnderhandPinpull3pMontage; // 0x580(0x08)
	struct UAnimMontage* WeaponUnderhandThrow1pMontage; // 0x588(0x08)
	struct UAnimMontage* WeaponUnderhandThrow3pMontage; // 0x590(0x08)
	struct UAnimMontage* UnderhandThrow1pMontage; // 0x598(0x08)
	struct UAnimMontage* UnderhandThrow3pMontage; // 0x5a0(0x08)
};

// Class Squad.SQGridMarkerBase
// Size: 0x2b0 (Inherited: 0x230)
struct USQGridMarkerBase : USQUserWidget {
	bool bDrawVerticalNumbers; // 0x230(0x01)
	bool bDrawHorizontalLetters; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)
	struct FSlateFontInfo GridMarkerFontInfo; // 0x238(0x50)
	struct FLinearColor GridMarkerFontColor; // 0x288(0x10)
	struct FVector2D GridMarkerFontOffset; // 0x298(0x08)
	enum class ESQTextHorizontalAlignment HorizontalAlignment; // 0x2a0(0x01)
	enum class ESQTextVerticalAlignment VerticalAlignment; // 0x2a1(0x01)
	char pad_2A2[0x6]; // 0x2a2(0x06)
	struct USQMap* OwnerMap; // 0x2a8(0x08)

	void InitWidget(); // Function Squad.SQGridMarkerBase.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x881b40
	void DrawWidget(struct USQGridMarkerBase* MapGridMarker, struct FPaintContext& Context); // Function Squad.SQGridMarkerBase.DrawWidget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8812d0
};

// Class Squad.SQGridMarkerUnit
// Size: 0x248 (Inherited: 0x230)
struct USQGridMarkerUnit : USQUserWidget {
	bool bIsVertical; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float DefaultSize; // 0x234(0x04)
	struct UCanvasPanel* SizeCanvas; // 0x238(0x08)
	struct UTextBlock* TextBlock; // 0x240(0x08)

	void SetBoxSize(float NewSize); // Function Squad.SQGridMarkerUnit.SetBoxSize // (Final|Native|Public|BlueprintCallable) // @ game+0x8824a0
};

// Class Squad.SQGroundVehicle
// Size: 0xb00 (Inherited: 0x8a0)
struct ASQGroundVehicle : ASQVehicle {
	struct TArray<struct FSQVehicleEffectsQualitySetting> VehicleEffectsQualitySettings; // 0x898(0x10)
	struct TArray<struct FSQVehicleEffectConfig> VehicleEffectsConfig; // 0x8a8(0x10)
	struct FVector2D WheelFXSound_RPMRate; // 0x8b8(0x08)
	struct FVector2D WheelFXSound_LongSlipRate; // 0x8c0(0x08)
	struct FVector2D WheelFXSound_LatSlipRate; // 0x8c8(0x08)
	struct FTimerHandle WheelUnderwaterTimer; // 0x8d0(0x08)
	float WheelUnderwaterUpdateInterval; // 0x8d8(0x04)
	bool bEjectOpenSeatsOnHardLanding; // 0x8dc(0x01)
	bool bDrawDebugTraces; // 0x8dd(0x01)
	struct FTimerHandle HardLandingCheckTimer; // 0x8e0(0x08)
	struct FTimerHandle IsFlyingTimer; // 0x8e8(0x08)
	float IsFlyingUpdateInterval; // 0x8f0(0x04)
	float IsHardLandingUpdateInterval; // 0x8f4(0x04)
	struct TArray<struct FName> LandingTraceSockets; // 0x8f8(0x10)
	float LandingTraceLenght; // 0x908(0x04)
	bool bIsFlying; // 0x90c(0x01)
	float LastFlyingZVelocity; // 0x910(0x04)
	float EjectZVelocityThreshold; // 0x914(0x04)
	int EmergencyTeleportCooldownSeconds; // 0x918(0x04)
	char pad_91F[0x1]; // 0x91f(0x01)
	struct TArray<struct AActor*> LandingCheckActorsToIgnore; // 0x920(0x10)
	struct USQVehicleCleanupComponent* VehicleCleanupComponent; // 0x930(0x08)
	struct FScriptMulticastDelegate OnEngineStateChanged; // 0x938(0x10)
	bool bShouldSimulate; // 0x948(0x01)
	char pad_949[0x7]; // 0x949(0x07)
	struct USoundCue* EngineRPMSound; // 0x950(0x08)
	struct UAudioComponent* EngineRPMAC; // 0x958(0x08)
	struct USoundCue* EngineExhaustSound; // 0x960(0x08)
	struct UAudioComponent* EngineExhaustStartAC; // 0x968(0x08)
	struct UAudioComponent* EngineExhaustAC; // 0x970(0x08)
	struct UAudioComponent* EngineExhaustStopAC; // 0x978(0x08)
	struct USoundCue* EngineStartSound; // 0x980(0x08)
	struct UAudioComponent* EngineCompletedStartAC; // 0x988(0x08)
	struct USoundCue* EngineCompletedStartSound; // 0x990(0x08)
	struct UAudioComponent* EngineFailedStartAC; // 0x998(0x08)
	struct USoundCue* EngineFailedStartSound; // 0x9a0(0x08)
	struct UAudioComponent* EngineStartAC; // 0x9a8(0x08)
	struct USoundCue* EngineStopSound; // 0x9b0(0x08)
	struct USoundCue* MistSound; // 0x9b8(0x08)
	struct USoundCue* PropellerMistSound; // 0x9c0(0x08)
	struct UAudioComponent* EngineStopAC; // 0x9c8(0x08)
	struct UAudioComponent* EngineSpeedAC; // 0x9d0(0x08)
	struct UAudioComponent* WheelFXAC; // 0x9d8(0x08)
	struct USoundCue* LandingSound; // 0x9e0(0x08)
	float EngineIdleFadeInAfterEngineStartTime; // 0x9e8(0x04)
	float EngineIdleFadeOutAfterEngineStopTime; // 0x9ec(0x04)
	float SpringCompressionLandingThreshold; // 0x9f0(0x04)
	float SkidThresholdVelocity; // 0x9f4(0x04)
	float LongSlipSkidThreshold; // 0x9f8(0x04)
	float LateralSlipSkidThreshold; // 0x9fc(0x04)
	struct UParticleSystemComponent* ExhaustPSC; // 0xa00(0x08)
	bool bTiresTouchingGround; // 0xa08(0x01)
	bool bHandbrakeActive; // 0xa09(0x01)
	bool bIsEngineActive; // 0xa0a(0x01)
	bool bIsEngineToggleActive; // 0xa0b(0x01)
	bool bAllowEngineBoosting; // 0xa0c(0x01)
	char pad_A0D[0x3]; // 0xa0d(0x03)
	float EngineBoostTorqueMultiplier; // 0xa10(0x04)
	bool bHasEngineBoostBeenPressed; // 0xa14(0x01)
	char pad_A15[0x3]; // 0xa15(0x03)
	struct TArray<struct FSQEngineMovementSoundObject> EngineMovementSounds; // 0xa18(0x10)
	float ActivateEngineDelay; // 0xa28(0x04)
	float DeActivateEngineDelay; // 0xa2c(0x04)
	char pad_A30[0x14]; // 0xa30(0x14)
	float GearChangingAlphaLerpSpeed; // 0xa44(0x04)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0xa48(0x08)
	struct UBoxComponent* VehicleRagdollOverlap; // 0xa50(0x08)
	float RagollOverlapTriggerSpeed; // 0xa58(0x04)
	int CollisionKillSpeedKPH; // 0xa5c(0x04)
	bool bCollisionsKillSoldiers; // 0xa60(0x01)
	char pad_A61[0x3]; // 0xa61(0x03)
	float WheelInflationRate; // 0xa64(0x04)
	struct TArray<struct USQDriveTrainComponent*> DriveTrainComponents; // 0xa68(0x10)
	char pad_A78[0x50]; // 0xa78(0x50)
	struct UODKWaterDamageComponent* WaterDamageComp; // 0xac8(0x08)
	struct USceneComponent* AirIntakePoint; // 0xad0(0x08)
	struct USceneComponent* WaterDampeningPoint; // 0xad8(0x08)
	struct TScriptInterface<Class> ActiveMovementComponent; // 0xae0(0x10)
	char pad_AF0[0x10]; // 0xaf0(0x10)

	void UpdateWheelUnderwaterDepth(); // Function Squad.SQGroundVehicle.UpdateWheelUnderwaterDepth // (Native|Public) // @ game+0x8826f0
	void UpdateIsHardLanding(); // Function Squad.SQGroundVehicle.UpdateIsHardLanding // (Native|Public) // @ game+0x882630
	void UpdateIsFlying(); // Function Squad.SQGroundVehicle.UpdateIsFlying // (Native|Public) // @ game+0x882610
	void ToggleWheelUnderwaterTimer(bool bActivated); // Function Squad.SQGroundVehicle.ToggleWheelUnderwaterTimer // (Native|Public) // @ game+0x882520
	void ServerSetEngineToggleActiveInput(bool bInIsEngineToggleActive); // Function Squad.SQGroundVehicle.ServerSetEngineToggleActiveInput // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x882330
	void ServerSetEngineBoostPressed(bool bInHasEngineBoostBeenPressed); // Function Squad.SQGroundVehicle.ServerSetEngineBoostPressed // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x882270
	void ServerSetEngineActiveInput(bool bNewEngineActive); // Function Squad.SQGroundVehicle.ServerSetEngineActiveInput // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8821b0
	void OnRep_ShouldSimulate(); // Function Squad.SQGroundVehicle.OnRep_ShouldSimulate // (Native|Protected) // @ game+0x881ed0
	void OnRep_EngineToggleActive(); // Function Squad.SQGroundVehicle.OnRep_EngineToggleActive // (Native|Protected) // @ game+0x881e90
	void OnRep_EngineActive(); // Function Squad.SQGroundVehicle.OnRep_EngineActive // (Native|Protected) // @ game+0x881e70
	void OnRagdollBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQGroundVehicle.OnRagdollBeginOverlap // (Native|Protected|HasOutParms) // @ game+0x881c80
	bool IsHandbrakeActive(); // Function Squad.SQGroundVehicle.IsHandbrakeActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881bc0
	bool IsEngineToggleActive(); // Function Squad.SQGroundVehicle.IsEngineToggleActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881b90
	bool IsEngineActive(); // Function Squad.SQGroundVehicle.IsEngineActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881b60
	float GetForwardSpeed(); // Function Squad.SQGroundVehicle.GetForwardSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8819f0
	float GetEngineRPM(); // Function Squad.SQGroundVehicle.GetEngineRPM // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8819b0
	float GetEngineMaxRPM(); // Function Squad.SQGroundVehicle.GetEngineMaxRPM // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881970
	float GetEngineLoad(); // Function Squad.SQGroundVehicle.GetEngineLoad // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881930
	float GetCurrentEngineToggleRequiredDuration(); // Function Squad.SQGroundVehicle.GetCurrentEngineToggleRequiredDuration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8818f0
	float GetCurrentEngineTogglePercentage(); // Function Squad.SQGroundVehicle.GetCurrentEngineTogglePercentage // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8818b0
	float GetCurrentEngineToggleElapsedTime(); // Function Squad.SQGroundVehicle.GetCurrentEngineToggleElapsedTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x881870
	void EmergencyTeleport(float HeightOffset, float YawDegrees); // Function Squad.SQGroundVehicle.EmergencyTeleport // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x8813c0
	void EjectAllOpenSeatPlayers(); // Function Squad.SQGroundVehicle.EjectAllOpenSeatPlayers // (Native|Public|BlueprintCallable) // @ game+0x8813a0
};

// Class Squad.SQHelicopter2
// Size: 0x910 (Inherited: 0x8a0)
struct ASQHelicopter2 : ASQVehicle {
	struct USQVehicleCleanupComponent* VehicleCleanupComponent; // 0x8a0(0x08)
	float PhysicsToggleThreshold; // 0x8a8(0x04)
	float MaxDeltaTime; // 0x8ac(0x04)
	float FixedTimestep; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct UBoxComponent* BoxCollider; // 0x8b8(0x08)
	struct UCameraComponent* ExternalCamera; // 0x8c0(0x08)
	struct USpringArmComponent* SpringArm; // 0x8c8(0x08)
	struct USQHelicopterMovementComponent* MovementComponent; // 0x8d0(0x08)
	struct USQVehicleEngineComponent* Engine; // 0x8d8(0x08)
	struct USQRotorBladesComponent* MainRotor; // 0x8e0(0x08)
	struct USQRotorBladesComponent* TailRotor; // 0x8e8(0x08)
	struct UStaticMeshComponent* MainBladesCollision; // 0x8f0(0x08)
	struct UStaticMeshComponent* TailBladesCollision; // 0x8f8(0x08)
	char pad_900[0x10]; // 0x900(0x10)

	struct FRotator SlerpToUpSideDown(float AngleRad); // Function Squad.SQHelicopter2.SlerpToUpSideDown // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x886b90
	void MainRotorDestroyedHandler(struct USQVehicleComponent* VehicleComponent); // Function Squad.SQHelicopter2.MainRotorDestroyedHandler // (Final|Native|Protected) // @ game+0x886670
	bool IsTailRotorColliding(); // Function Squad.SQHelicopter2.IsTailRotorColliding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886640
	bool IsPhysicsEnabled(); // Function Squad.SQHelicopter2.IsPhysicsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8865c0
	bool IsMainRotorColliding(); // Function Squad.SQHelicopter2.IsMainRotorColliding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886590
	bool IsLanded(); // Function Squad.SQHelicopter2.IsLanded // (Event|Public|BlueprintEvent|Const) // @ game+0x12b8b50
	float GetThrottle(); // Function Squad.SQHelicopter2.GetThrottle // (Event|Public|BlueprintEvent|Const) // @ game+0x12b8b50
	float GetTailRotorThrust(); // Function Squad.SQHelicopter2.GetTailRotorThrust // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	int GetMaxRPM(); // Function Squad.SQHelicopter2.GetMaxRPM // (Event|Public|BlueprintEvent|Const) // @ game+0x12b8b50
	float GetMainRotorThrust(); // Function Squad.SQHelicopter2.GetMainRotorThrust // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	void EnablePhysicsSimulation(bool bSimulate); // Function Squad.SQHelicopter2.EnablePhysicsSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0x885bd0
};

// Class Squad.SQHelicopterCollisionDamage
// Size: 0x118 (Inherited: 0x110)
struct USQHelicopterCollisionDamage : USQCollisionDamage {
	float FlightDynamicImpulseMultiplier; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)

	void HandleImpact(struct FHitResult& Impact, float TimeSlice, struct FVector& MoveDelta); // Function Squad.SQHelicopterCollisionDamage.HandleImpact // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x8862d0
};

// Class Squad.SQHelicopterInstruments
// Size: 0x28 (Inherited: 0x28)
struct USQHelicopterInstruments : UInterface {

	void SetActivationProgress(float Progress); // Function Squad.SQHelicopterInstruments.SetActivationProgress // (Native|Public|BlueprintCallable) // @ game+0x886940
	bool IsEngineActive(); // Function Squad.SQHelicopterInstruments.IsEngineActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886560
	float GetYawInput(); // Function Squad.SQHelicopterInstruments.GetYawInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8862a0
	float GetRollInput(); // Function Squad.SQHelicopterInstruments.GetRollInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886080
	float GetPitchInput(); // Function Squad.SQHelicopterInstruments.GetPitchInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885fc0
	float GetMaxLift(); // Function Squad.SQHelicopterInstruments.GetMaxLift // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885e20
	float GetLiftInput(); // Function Squad.SQHelicopterInstruments.GetLiftInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885d70
	float GetForwardSpeed(); // Function Squad.SQHelicopterInstruments.GetForwardSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885d40
	float GetActivationProgress(); // Function Squad.SQHelicopterInstruments.GetActivationProgress // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885c60
};

// Class Squad.SQMovementComponentBase
// Size: 0x1c0 (Inherited: 0xd8)
struct USQMovementComponentBase : UActorComponent {
	char pad_D8[0x20]; // 0xd8(0x20)
	float MaxMoveDeltaTime; // 0xf8(0x04)
	float VectorEqualityTolerance; // 0xfc(0x04)
	float AccelDotThresholdCombine; // 0x100(0x04)
	float AccelDotThreshold; // 0x104(0x04)
	float AccelMagThreshold; // 0x108(0x04)
	float AngularErrorTolerance; // 0x10c(0x04)
	float NetworkMaxSmoothUpdateDistance; // 0x110(0x04)
	float MinCorrectionDelay; // 0x114(0x04)
	float NetworkNoSmoothUpdateDistance; // 0x118(0x04)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x11c(0x01)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x11d(0x01)
	enum class EVectorQuantization AccelerationQuantizationLevel; // 0x11e(0x01)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x11f(0x01)
	struct AActor* OwnerActor; // 0x120(0x08)
	struct AController* Controller; // 0x128(0x08)
	char pad_130[0x48]; // 0x130(0x48)
	struct FSQRepMovement ReplicatedMovement; // 0x178(0x40)
	float MaxSpeed; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)

	void ServerMoveOld(struct TArray<char> Move); // Function Squad.SQMovementComponentBase.ServerMoveOld // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x8a3f70
	void ServerMoveDual(struct TArray<char> Move1, struct TArray<char> Move2); // Function Squad.SQMovementComponentBase.ServerMoveDual // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x8a3e40
	void ServerMove(struct TArray<char> Move); // Function Squad.SQMovementComponentBase.ServerMove // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x8a3d70
	void OnRep_Movement(); // Function Squad.SQMovementComponentBase.OnRep_Movement // (Native|Protected) // @ game+0x8a3b40
	bool IsSimulatedProxy(); // Function Squad.SQMovementComponentBase.IsSimulatedProxy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3770
	bool IsServerComponent(); // Function Squad.SQMovementComponentBase.IsServerComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3740
	bool IsLocallyControlledComponent(); // Function Squad.SQMovementComponentBase.IsLocallyControlledComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3710
	struct FVector GetCurrentVelocity(); // Function Squad.SQMovementComponentBase.GetCurrentVelocity // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3240
	struct FVector GetCurrentRotationalVelocity(); // Function Squad.SQMovementComponentBase.GetCurrentRotationalVelocity // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3200
	struct FVector GetCurrentRotationalAcceleration(); // Function Squad.SQMovementComponentBase.GetCurrentRotationalAcceleration // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a31c0
	struct FVector GetCurrentAcceleration(); // Function Squad.SQMovementComponentBase.GetCurrentAcceleration // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3180
	void ClientAdjustPositionAndRotation(float Timestamp, struct FVector LocationZeroBased, struct FVector InVelocity, struct FRotator Rotation); // Function Squad.SQMovementComponentBase.ClientAdjustPositionAndRotation // (Net|Native|Event|Protected|HasDefaults|NetClient) // @ game+0x8a2e70
	void ClientAdjustPosition(float Timestamp, struct FVector LocationZeroBased, struct FVector InVelocity); // Function Squad.SQMovementComponentBase.ClientAdjustPosition // (Net|Native|Event|Protected|HasDefaults|NetClient) // @ game+0x8a2d70
	void ClientAckGoodMove(float Timestamp); // Function Squad.SQMovementComponentBase.ClientAckGoodMove // (Net|Native|Event|Protected|NetClient) // @ game+0x8a2cf0
};

// Class Squad.SQHelicopterMovementComponent
// Size: 0x288 (Inherited: 0x1c0)
struct USQHelicopterMovementComponent : USQMovementComponentBase {
	float BrakingDecelerationFlying; // 0x1c0(0x04)
	float MaxFlySpeed; // 0x1c4(0x04)
	float MaxAcceleration; // 0x1c8(0x04)
	float AirFriction; // 0x1cc(0x04)
	float BrakingFriction; // 0x1d0(0x04)
	float BrakingFrictionFactor; // 0x1d4(0x04)
	float LinearDamping; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UCurveFloat* LinearDampingCurve; // 0x1e0(0x08)
	char bUseSeparateBrakingFriction : 1; // 0x1e8(0x01)
	char pad_1E8_1 : 7; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	float GravityScale; // 0x1ec(0x04)
	float Mass; // 0x1f0(0x04)
	char bEnablePhysicsInteraction : 1; // 0x1f4(0x01)
	char pad_1F4_1 : 7; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	float TouchForceFactor; // 0x1f8(0x04)
	float MinTouchForce; // 0x1fc(0x04)
	float MaxTouchForce; // 0x200(0x04)
	char bTouchForceScaledToMass : 1; // 0x204(0x01)
	char pad_204_1 : 7; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float PenetrationPullbackDistance; // 0x208(0x04)
	float PenetrationOverlapCheckInflation; // 0x20c(0x04)
	bool MoveIgnoreFirstBlockingOverlap; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FScriptMulticastDelegate OnImpact; // 0x218(0x10)
	struct FScriptMulticastDelegate OnRep_Physics; // 0x228(0x10)
	float AllowablePositionErrorSquared; // 0x238(0x04)
	float MinProxyMovementPredictionSpeed; // 0x23c(0x04)
	float AnalogInputModifier; // 0x240(0x04)
	struct FVector PendingImpulseToApply; // 0x244(0x0c)
	struct FVector PendingForceToApply; // 0x250(0x0c)
	char bForceMaxAccel : 1; // 0x25c(0x01)
	char pad_25C_1 : 7; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct APawn* PawnOwner; // 0x260(0x08)
	struct UPrimitiveComponent* UpdatedComponent; // 0x268(0x08)
	char pad_270[0x10]; // 0x270(0x10)
	bool bIsSimulatingPhysics; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)

	void ResetMovementState(); // Function Squad.SQHelicopterMovementComponent.ResetMovementState // (Final|Native|Public|BlueprintCallable) // @ game+0x886920
	void OnRep_IsSimulatingPhysics(); // Function Squad.SQHelicopterMovementComponent.OnRep_IsSimulatingPhysics // (Final|Native|Protected) // @ game+0x886770
	bool IsSimulatingPhysics(); // Function Squad.SQHelicopterMovementComponent.IsSimulatingPhysics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886620
	struct FRotator GetRotationInput(); // Function Squad.SQHelicopterMovementComponent.GetRotationInput // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8860b0
	float GetMaxBrakingDeceleration(); // Function Squad.SQHelicopterMovementComponent.GetMaxBrakingDeceleration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885de0
	float GetMaxAcceleration(); // Function Squad.SQHelicopterMovementComponent.GetMaxAcceleration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885da0
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQHelicopterMovementComponent.CapsuleTouched // (Native|Protected|HasOutParms) // @ game+0x885290
	void AddRotationInput(struct FRotator& InRotationInput); // Function Squad.SQHelicopterMovementComponent.AddRotationInput // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x885070
	void AddImpulse(struct FVector Impulse, bool bVelocityChange); // Function Squad.SQHelicopterMovementComponent.AddImpulse // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x884e00
	void AddForce(struct FVector Force); // Function Squad.SQHelicopterMovementComponent.AddForce // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x884d70
};

// Class Squad.SQChatBoxInfo
// Size: 0x60 (Inherited: 0x28)
struct USQChatBoxInfo : UObject {
	struct UFont* Font; // 0x28(0x08)
	struct TArray<struct FSQHUDMessage> Messages; // 0x30(0x10)
	struct FVector2D MessageBoxLocation; // 0x40(0x08)
	int MaxNumberOfMessagesToShow; // 0x48(0x04)
	float MessagesLifetime; // 0x4c(0x04)
	float MessagesFadeTime; // 0x50(0x04)
	enum class ESQTextHorizontalAlignment MessageHorizontalAlignment; // 0x54(0x01)
	enum class ESQTextVerticalAlignment MessageVerticalAlignment; // 0x55(0x01)
	bool bOutlineMessages; // 0x56(0x01)
	bool bScrollUp; // 0x57(0x01)
	float TextScale; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Squad.SQHUD
// Size: 0xa10 (Inherited: 0x338)
struct ASQHUD : AHUD {
	struct TArray<struct FSQInputState> InputStateStack; // 0x338(0x10)
	bool bTraceViewEnabled; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct USQVehicleViewWidget* VehicleOverlayWidget; // 0x350(0x08)
	struct USQBaseHudWidget* BaseHudWidget; // 0x358(0x08)
	struct ASQMapMarker* CurrentlyShownHudMarker; // 0x360(0x08)
	bool bEndOfRound; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	float MapTopPadding; // 0x36c(0x04)
	float MapRightPadding; // 0x370(0x04)
	float MapBottomPadding; // 0x374(0x04)
	float MapMaxWidthRatio; // 0x378(0x04)
	struct FLinearColor MapGridLetterColor; // 0x37c(0x10)
	struct FLinearColor SquadToSquadRadioColor; // 0x38c(0x10)
	struct FLinearColor SquadToAllSquadsRadioColor; // 0x39c(0x10)
	float MapGridLetterPadding; // 0x3ac(0x04)
	float MapGridLetterScale; // 0x3b0(0x04)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct TArray<struct AActor*> LineOfSightDrawTextCache; // 0x3b8(0x10)
	struct USQCoreStateSelectionHUB* SelectionHUB; // 0x3c8(0x08)
	struct USQCoreStateMapComponent* MapComponent; // 0x3d0(0x08)
	struct USQMapWidgetBase* MapWidgetBase; // 0x3d8(0x08)
	struct USQCoreStateSpawnPointsListComponent* SpawnPointsListComponent; // 0x3e0(0x08)
	struct USQCoreStateSquadListComponent* SquadListComponent; // 0x3e8(0x08)
	struct USQCoreStateRolesSquadListComponent* RoleSquadListComponent; // 0x3f0(0x08)
	struct USQNetworkPollingComponent* NetworkPolling; // 0x3f8(0x08)
	char pad_400[0x38]; // 0x400(0x38)
	struct UTexture2D* HUDMainTexture; // 0x438(0x08)
	struct UTexture2D* LowHealthOverlayTexture; // 0x440(0x08)
	struct UMaterialInterface* CircularProgressMaterial; // 0x448(0x08)
	struct FName CircularProgressMaterialPercentageName; // 0x450(0x08)
	struct FName CircularProgressMaterialTransparencyName; // 0x458(0x08)
	struct FName CircularProgressMaterialColorName; // 0x460(0x08)
	struct TMap<struct ASQSoldier*, struct UMaterialInstanceDynamic*> CircularProgressMIDMap; // 0x468(0x50)
	struct UTexture* MedicIconTexture; // 0x4b8(0x08)
	struct UTexture* HealedIconTexture; // 0x4c0(0x08)
	struct UTexture* DragIconTexture; // 0x4c8(0x08)
	struct UTexture* VehicleRepairIconTexture; // 0x4d0(0x08)
	struct UTexture* BleedingIconTexture; // 0x4d8(0x08)
	struct UTexture* ItemCollisionIconTexture; // 0x4e0(0x08)
	struct UFont* BigFont; // 0x4e8(0x08)
	struct UFont* NormalFont; // 0x4f0(0x08)
	struct UFont* NametagFont; // 0x4f8(0x08)
	struct UFont* ChatMessageFont; // 0x500(0x08)
	struct UFont* SystemMessageFont; // 0x508(0x08)
	struct FLinearColor TicketTextColor; // 0x510(0x10)
	struct TArray<struct FSQRemoteTalkerDisplayInfo> RemoteTalkers; // 0x520(0x10)
	struct TArray<struct FSQRemoteTalkerDisplayInfo> TestTalkers; // 0x530(0x10)
	bool bUseTestTalkers; // 0x540(0x01)
	enum class ESQVoiceChannel OwnerSpeakingState; // 0x541(0x01)
	char pad_542[0x6]; // 0x542(0x06)
	struct FSQMessageBoxInfo ChatBoxInfo; // 0x548(0x78)
	struct FSQMessageBoxInfo SystemMessageBoxInfo; // 0x5c0(0x78)
	struct FSQMessageBoxInfo GameNotificationBoxInfo; // 0x638(0x78)
	struct FSQMessageBoxInfo PlayerNotificationBoxInfo; // 0x6b0(0x78)
	struct FLinearColor SystemMessagesColor; // 0x728(0x10)
	char pad_738[0x4]; // 0x738(0x04)
	char pad_73C_0 : 1; // 0x73c(0x01)
	char bShouldOffsetSpawnText : 1; // 0x73c(0x01)
	char bShouldShowEnemyFobWidgets : 1; // 0x73c(0x01)
	char pad_73C_3 : 5; // 0x73c(0x01)
	char pad_73D[0x3]; // 0x73d(0x03)
	int StartingMapZoomLevel; // 0x740(0x04)
	char pad_744[0x4]; // 0x744(0x04)
	struct TArray<float> MapZoomLevels; // 0x748(0x10)
	char pad_758[0x30]; // 0x758(0x30)
	struct USQScoreboard* ScoreBoard; // 0x788(0x08)
	struct USQDrawChatWidget* ChatDrawingWidget; // 0x790(0x08)
	char pad_798[0x10]; // 0x798(0x10)
	float NametagDistantVisibilityDropoffStart; // 0x7a8(0x04)
	float NametagDistantVisibilityDropoffFinish; // 0x7ac(0x04)
	float NametagDistantVisibilitySize; // 0x7b0(0x04)
	float NametagNearVerticalOffset; // 0x7b4(0x04)
	float NametagFarVerticalOffset; // 0x7b8(0x04)
	float NametagNearVerticalInterpStart; // 0x7bc(0x04)
	float NametagFadingInterpStart; // 0x7c0(0x04)
	float UsableDistantVisibilityDropoffStart; // 0x7c4(0x04)
	float UsableDistantVisibilityDropoffFinish; // 0x7c8(0x04)
	float UsableDistantVisibilitySize; // 0x7cc(0x04)
	float UsableNearVerticalOffset; // 0x7d0(0x04)
	float UsableFarVerticalOffset; // 0x7d4(0x04)
	float UsableNearVerticalInterpStart; // 0x7d8(0x04)
	float UsableFadingInterpStart; // 0x7dc(0x04)
	struct FLinearColor EnemyColor; // 0x7e0(0x10)
	struct FLinearColor TeamColor; // 0x7f0(0x10)
	struct FLinearColor SquadColor; // 0x800(0x10)
	struct FLinearColor FireTeamColor; // 0x810(0x10)
	struct FLinearColor NametagOutlineColor; // 0x820(0x10)
	float MaxDistanceToShowHUDIcons; // 0x830(0x04)
	float MaxDistanceToShowWoundedHUDIcons; // 0x834(0x04)
	float MaxDistanceToShowDragHUDIcons; // 0x838(0x04)
	struct FName BoneForDragIcon; // 0x83c(0x08)
	float DragIconXOffset; // 0x844(0x04)
	float DragIconYOffset; // 0x848(0x04)
	struct FLinearColor DragHUDIconColor; // 0x84c(0x10)
	float DragHUDIconSizeMultiplier; // 0x85c(0x04)
	struct FName BoneForBleedingIcon; // 0x860(0x08)
	struct FVector HUDIconOffset; // 0x868(0x0c)
	struct FVector HUDIconCrouchedOffset; // 0x874(0x0c)
	struct FVector HUDIconProneOffset; // 0x880(0x0c)
	struct FVector HUDIconWoundedOffset; // 0x88c(0x0c)
	float HUDIconFarSize; // 0x898(0x04)
	float HUDIconNearSize; // 0x89c(0x04)
	struct FVector2D HealedIconOffset; // 0x8a0(0x08)
	struct FVector2D HealedIconSize; // 0x8a8(0x08)
	struct FVector2D ItemCollisionIconOffset; // 0x8b0(0x08)
	struct FVector2D ItemCollisionIconSize; // 0x8b8(0x08)
	float MaxTimeSinceLastHealedToDrawHealedIcon; // 0x8c0(0x04)
	float MaxTimeSinceLastRepairedToDrawRepairedIcon; // 0x8c4(0x04)
	struct UCurveLinearColor* HealthColorCurve; // 0x8c8(0x08)
	bool bHudWidgetsEnabled; // 0x8d0(0x01)
	char pad_8D1[0x17]; // 0x8d1(0x17)
	struct FScriptMulticastDelegate OnChatReceived; // 0x8e8(0x10)
	struct USoundBase* CommandVoiceStartingSound; // 0x8f8(0x08)
	struct USoundBase* CommandVoiceEndingSound; // 0x900(0x08)
	struct USoundBase* SquadVoiceStartingSound; // 0x908(0x08)
	struct USoundBase* SquadVoiceEndingSound; // 0x910(0x08)
	char pad_918[0x8]; // 0x918(0x08)
	struct FSQLedColorScheme LedColorScheme; // 0x920(0xd0)
	struct USQColorsDataAsset* ColorsDataAsset; // 0x9f0(0x08)
	struct UEnum* ChatEnumObj; // 0x9f8(0x08)
	struct FScriptMulticastDelegate OnWorldOriginUpdated; // 0xa00(0x10)

	void WorldOriginUpdated(struct UWorld* World, struct FIntVector Old, struct FIntVector New); // Function Squad.SQHUD.WorldOriginUpdated // (Final|Native|Protected|HasDefaults) // @ game+0x886c90
	void VehicleResetZoom(); // Function Squad.SQHUD.VehicleResetZoom // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x86d780
	void VehicleRemoveOverlay(struct USQVehicleViewWidget* WidgetClass); // Function Squad.SQHUD.VehicleRemoveOverlay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x877050
	void VehicleIncreaseZoomOverlay(); // Function Squad.SQHUD.VehicleIncreaseZoomOverlay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x886c70
	void VehicleDecreaseZoomOverlay(); // Function Squad.SQHUD.VehicleDecreaseZoomOverlay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x86d690
	void VehicleCreateOverlay(struct USQVehicleViewWidget* WidgetClass); // Function Squad.SQHUD.VehicleCreateOverlay // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8783d0
	void TraceViewToggle(); // Function Squad.SQHUD.TraceViewToggle // (Exec|Native|Public) // @ game+0x886c50
	void ToggleScoreboard(); // Function Squad.SQHUD.ToggleScoreboard // (Final|Native|Public|BlueprintCallable) // @ game+0x886c30
	void ShowScoreboard(bool bEnable); // Function Squad.SQHUD.ShowScoreboard // (Final|Native|Public|BlueprintCallable) // @ game+0x886b00
	void ShowMarkerOnHUD(struct FSQMapMarkerVisualData MapMarkerVisualData); // Function Squad.SQHUD.ShowMarkerOnHUD // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	bool ShouldOffsetSpawnText(); // Function Squad.SQHUD.ShouldOffsetSpawnText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886ad0
	void SettingsChangedHandler(struct USQGameUserSettings* Settings); // Function Squad.SQHUD.SettingsChangedHandler // (Final|Native|Protected) // @ game+0x886a50
	void SetHudWidgetsEnabled(bool bValue); // Function Squad.SQHUD.SetHudWidgetsEnabled // (Exec|Native|Public|BlueprintCallable) // @ game+0x8869c0
	void RemoveLineOfSightActor(struct AActor* Actor); // Function Squad.SQHUD.RemoveLineOfSightActor // (Final|Native|Public|BlueprintCallable) // @ game+0x8868a0
	struct FSQInputState RemoveInputStackState(struct FSQInputState OldState); // Function Squad.SQHUD.RemoveInputStackState // (Native|Protected|BlueprintCallable) // @ game+0x886790
	void OnReceiveChatEvent__DelegateSignature(struct FString PlayerName, struct FString Message, enum class ESQChat Channel, struct FLinearColor Color, enum class ESQNotificationTypes NotificationType); // DelegateFunction Squad.SQHUD.OnReceiveChatEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasDefaults) // @ game+0x12b8b50
	bool IsScoreboardVisible(); // Function Squad.SQHUD.IsScoreboardVisible // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8865f0
	float IncrementMapZoomLevel(float CurrentMapZoom, int Amount, bool bLoop); // Function Squad.SQHUD.IncrementMapZoomLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x886450
	bool HudWidgetsEnabled(); // Function Squad.SQHUD.HudWidgetsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886430
	void HideDeployableInteractableOverlay(struct ASQDeployableInteractable* ammobag); // Function Squad.SQHUD.HideDeployableInteractableOverlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void HideAmmoBagOverlay(struct ASQDeployableAmmoBag* ammobag); // Function Squad.SQHUD.HideAmmoBagOverlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	struct FLinearColor GetTeamColor(); // Function Squad.SQHUD.GetTeamColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x886260
	struct FLinearColor GetTeamBasedColor(enum class ESQTeam InTeam); // Function Squad.SQHUD.GetTeamBasedColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8861d0
	struct FLinearColor GetSystemMessagesColor(); // Function Squad.SQHUD.GetSystemMessagesColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x886190
	float GetStartingMapZoom(); // Function Squad.SQHUD.GetStartingMapZoom // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x886160
	struct FLinearColor GetSquadColor(); // Function Squad.SQHUD.GetSquadColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x886120
	float GetScaleUI(); // Function Squad.SQHUD.GetScaleUI // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8860f0
	struct TArray<struct FSQRemoteTalkerDisplayInfo> GetRemoteTalkers(); // Function Squad.SQHUD.GetRemoteTalkers // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x885ff0
	enum class ESQVoiceChannel GetOwnerSpeakerState(); // Function Squad.SQHUD.GetOwnerSpeakerState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885f90
	struct FLinearColor GetOtherPlayerColor(struct ASQPlayerState* OtherPlayer); // Function Squad.SQHUD.GetOtherPlayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x885ef0
	bool GetMouseScreenSpacePosition(struct FIntPoint& OutPosition); // Function Squad.SQHUD.GetMouseScreenSpacePosition // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x885e50
	struct FLinearColor GetFireTeamColor(); // Function Squad.SQHUD.GetFireTeamColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x885d00
	struct FLinearColor GetEnemyColor(); // Function Squad.SQHUD.GetEnemyColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x885cc0
	struct UCanvas* GetCanvas(); // Function Squad.SQHUD.GetCanvas // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x885c90
	void DrawSystemMessages(float PosX, float PosY); // Function Squad.SQHUD.DrawSystemMessages // (Final|Native|Protected|BlueprintCallable) // @ game+0x885b10
	float DrawString(int Index, struct FString Text, float PosX, float PosY, struct FLinearColor& Color, struct FSQMessageBoxInfo Info, enum class ESQTextHorizontalAlignment HorizontalAlignment, enum class ESQTextVerticalAlignment VerticalAlignment); // Function Squad.SQHUD.DrawString // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x885680
	void DrawChatMessages(struct FSQMessageBoxInfo& ChatBox, float PosX, float PosY); // Function Squad.SQHUD.DrawChatMessages // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x8854a0
	void DisplayDeployableInteractableOverlay(struct ASQDeployableInteractable* ammobag, bool bCanPickup); // Function Squad.SQHUD.DisplayDeployableInteractableOverlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void DisplayAmmoBagOverlay(struct ASQDeployableAmmoBag* ammobag, bool bCanPickup); // Function Squad.SQHUD.DisplayAmmoBagOverlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void DeleteMarkerOnHUD(); // Function Squad.SQHUD.DeleteMarkerOnHUD // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void ConditionalCloseScoreboard(); // Function Squad.SQHUD.ConditionalCloseScoreboard // (Final|Native|Public|BlueprintCallable) // @ game+0x885480
	void BPOnUsableVisible(struct AActor* Actor, bool bIsVisible); // Function Squad.SQHUD.BPOnUsableVisible // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnSetHudWidgetsEnabled(bool bEnabled); // Function Squad.SQHUD.BPOnSetHudWidgetsEnabled // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintNotifyHit(float DamageTaken, struct FDamageEvent& DamageEvent, struct APawn* PawnInstigator); // Function Squad.SQHUD.BlueprintNotifyHit // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void AddSystemMessage(struct FString Message, struct FLinearColor& Color, float MessageLifetimeOverride, enum class ESQNotificationTypes NotificationType); // Function Squad.SQHUD.AddSystemMessage // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x885100
	void AddLineOfSightActor(struct AActor* Actor); // Function Squad.SQHUD.AddLineOfSightActor // (Final|Native|Public|BlueprintCallable) // @ game+0x884ff0
	struct FSQInputState AddInputStackState(struct FSQInputState NewState); // Function Squad.SQHUD.AddInputStackState // (Native|Protected|BlueprintCallable) // @ game+0x884ee0
	void AddChatMessageDefaultColor(struct ASQPlayerState* Player, struct FString Message, enum class ESQChat Channel, float MessageLifetimeOverride, enum class ESQNotificationTypes NotificationType); // Function Squad.SQHUD.AddChatMessageDefaultColor // (Final|Native|Public|BlueprintCallable) // @ game+0x884bd0
	void AddChatMessage(struct ASQPlayerState* Player, struct FString Message, enum class ESQChat Channel, struct FLinearColor Color, float MessageLifetimeOverride, enum class ESQNotificationTypes NotificationType); // Function Squad.SQHUD.AddChatMessage // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8849e0
};

// Class Squad.SQHUDWidget
// Size: 0xd0 (Inherited: 0x28)
struct USQHUDWidget : UObject {
	struct UUserWidget* UMGWidget; // 0x28(0x08)
	struct FVector2D Position; // 0x30(0x08)
	struct FVector2D OffsetPosition; // 0x38(0x08)
	struct FVector2D WidgetOrigin; // 0x40(0x08)
	struct FVector2D Size; // 0x48(0x08)
	float ZOrder; // 0x50(0x04)
	bool bUseScreenNormalizedCoordinates; // 0x54(0x01)
	bool bBypassResolutionScaling; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	float DesignedResolution; // 0x58(0x04)
	bool bMaintainOriginalAspectRatio; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float Alpha; // 0x60(0x04)
	bool bHidden; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct ASQGameState* GameState; // 0x68(0x08)
	struct ASQHUD* HUD; // 0x70(0x08)
	struct ASQPlayerController* PlayerController; // 0x78(0x08)
	struct ASQPlayerState* PlayerState; // 0x80(0x08)
	struct ASQSoldier* Soldier; // 0x88(0x08)
	struct UCanvas* Canvas; // 0x90(0x08)
	struct UTexture2D* DefaultTexture; // 0x98(0x08)
	struct UTexture2D* GradientTexture0; // 0xa0(0x08)
	struct FVector2D CanvasCenter; // 0xa8(0x08)
	struct FVector2D CanvasSize; // 0xb0(0x08)
	struct FVector2D DrawingPosition; // 0xb8(0x08)
	struct FVector2D DrawingSize; // 0xc0(0x08)
	float DrawingScale; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)

	void Init(struct ASQHUD* InHUD); // Function Squad.SQHUDWidget.Init // (Native|Event|Public|BlueprintEvent) // @ game+0x889800
	void Draw(float DeltaTime); // Function Squad.SQHUDWidget.Draw // (Native|Event|Public|BlueprintEvent) // @ game+0x889720
	bool CanDraw(); // Function Squad.SQHUDWidget.CanDraw // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x831c40
	void BPDrawTexture(struct UTexture* Texture, float X, float Y, float Width, float Height, float U, float V, float UL, float VL, float DrawingAlpha, struct FLinearColor Color, struct FVector2D DrawingOffset, float Rotation, struct FVector2D RotationPivotPoint, bool bIsMask); // Function Squad.SQHUDWidget.BPDrawTexture // (Native|Protected|HasDefaults|BlueprintCallable|Const) // @ game+0x8892c0
	struct FVector2D BPDrawText(struct FText Text, float X, float Y, struct UFont* Font, struct FFontRenderInfo FontRenderInfo, struct FLinearColor Color, float TextScale, float DrawingAlpha, enum class ESQTextHorizontalAlignment HorizontalAlignment, enum class ESQTextVerticalAlignment VerticalAlignment, bool bDrawShadow, struct FVector2D ShadowDirection, struct FLinearColor ShadowColor, bool bDrawOutline, struct FLinearColor OutlineColor); // Function Squad.SQHUDWidget.BPDrawText // (Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x888db0
	void BPDrawSpriteTexture(struct UTexture* Texture, float X, float Y, float Width, float Height, float TextureX, float TextureY, float TextureXL, float TextureYL, float DrawingAlpha, struct FLinearColor Color, struct FVector2D DrawingOffset, float Rotation, struct FVector2D RotationPivotPoint, bool bIsMask); // Function Squad.SQHUDWidget.BPDrawSpriteTexture // (Native|Protected|HasDefaults|BlueprintCallable|Const) // @ game+0x8889a0
	void BPDrawMaterial(struct UMaterialInterface* Material, float X, float Y, float Width, float Height, float U, float V, float UL, float VL, float DrawingAlpha, struct FLinearColor Color, struct FVector2D DrawingOffset, float Rotation, struct FVector2D RotationPivotPoint); // Function Squad.SQHUDWidget.BPDrawMaterial // (Native|Protected|HasDefaults|BlueprintCallable|Const) // @ game+0x8885d0
};

// Class Squad.SQWeapon
// Size: 0x7a0 (Inherited: 0x480)
struct ASQWeapon : ASQEquipableItem {
	struct USQWeaponStaticInfo* WeaponStaticInfo; // 0x480(0x08)
	struct FSQAudioComponentPool FiringAudioComponentPool; // 0x488(0x20)
	char pad_4A8[0xd8]; // 0x4a8(0xd8)
	struct FTimerHandle ZoomFinishAdsTransitionTimerHandle; // 0x580(0x08)
	bool bWaitingForMagazineLoad; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	char bFiring : 1; // 0x58c(0x01)
	char bReloading : 1; // 0x58c(0x01)
	char pad_58C_2 : 6; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct FSQWeaponData WeaponConfig; // 0x590(0xc0)
	enum class ESQWeaponState CurrentState; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	float ADSMoveSpeedMultiplier; // 0x654(0x04)
	bool bAimingDownSights; // 0x658(0x01)
	bool bFireInput; // 0x659(0x01)
	bool bPendingFire; // 0x65a(0x01)
	char pad_65B[0xd]; // 0x65b(0x0d)
	float MaxTimeToLoopSoundsAfterLastFire; // 0x668(0x04)
	float ModifiedTacticalReloadDuration; // 0x66c(0x04)
	float ModifiedDryReloadDuration; // 0x670(0x04)
	char pad_674[0x1c]; // 0x674(0x1c)
	int CurrentFireMode; // 0x690(0x04)
	char pad_694[0xc]; // 0x694(0x0c)
	struct TArray<struct FSQMagazineData> Magazines; // 0x6a0(0x10)
	struct TArray<struct USQWeaponAttachment*> AttachmentClasses; // 0x6b0(0x10)
	struct TArray<struct USQWeaponAttachment*> Attachments; // 0x6c0(0x10)
	struct UADSPostProcessSettings* ADSPostProcessSettings; // 0x6d0(0x08)
	bool bUseStopADSPPDrawing; // 0x6d8(0x01)
	bool bStopADSPPDrawing; // 0x6d9(0x01)
	char pad_6DA[0x2]; // 0x6da(0x02)
	struct FSQDynamicEasingStruct HoldingZoomEasing; // 0x6dc(0x14)
	float HoldingZoomEasingAlpha; // 0x6f0(0x04)
	float HoldingZoomRawAlpha; // 0x6f4(0x04)
	float HoldingZoomIntermediateAlpha; // 0x6f8(0x04)
	float HoldingZoomTargetAlpha; // 0x6fc(0x04)
	float CurrentFOV; // 0x700(0x04)
	float ZoomedFOV; // 0x704(0x04)
	float FocusZoomTime; // 0x708(0x04)
	float FocusAdditionalZoom; // 0x70c(0x04)
	float TimeSinceLastZoomToggle; // 0x710(0x04)
	float LastZoomProgressAtToggle; // 0x714(0x04)
	float AdjustAdsSightItemAnimPos; // 0x718(0x04)
	float CachedAdjustAdsSightItemAnimPos; // 0x71c(0x04)
	float NewAdjustAdsSightItemAnimPos; // 0x720(0x04)
	float AdjustAdsSightItemAnimPosAlpha; // 0x724(0x04)
	int MaxConcurrentSounds; // 0x728(0x04)
	float MaxConcurrentSoundsFadeOut; // 0x72c(0x04)
	bool bIs1PUsingSquadSoundNodeLooping; // 0x730(0x01)
	bool bIs3PUsingSquadSoundNodeLooping; // 0x731(0x01)
	char pad_732[0x6]; // 0x732(0x06)
	struct UAudioComponent* CurrentFiringAC; // 0x738(0x08)
	struct TArray<struct UAudioComponent*> FiringACs; // 0x740(0x10)
	struct USoundCue* SemiAutoSound1P; // 0x750(0x08)
	struct USoundCue* SemiAutoSound3P; // 0x758(0x08)
	struct USoundCue* StartingSound1P; // 0x760(0x08)
	struct USoundCue* StartingSound3P; // 0x768(0x08)
	char pad_770[0x10]; // 0x770(0x10)
	bool bIsModifyingZeroing; // 0x780(0x01)
	char pad_781[0x3]; // 0x781(0x03)
	int AdjustableSightItemPos; // 0x784(0x04)
	float CachedLastZeroingTime; // 0x788(0x04)
	float CachedLastZeroingPlayTime; // 0x78c(0x04)
	int CachedLastZeroingPosition; // 0x790(0x04)
	bool bCachedIsBipodDeployed; // 0x794(0x01)
	bool bCachedAimProneBobbing; // 0x795(0x01)
	bool bFinishedAdsTransition; // 0x796(0x01)
	bool bLastNewZoom; // 0x797(0x01)
	bool FireSwaySelector; // 0x798(0x01)
	bool PreFireSwaySelector; // 0x799(0x01)
	char pad_79A[0x6]; // 0x79a(0x06)

	void UpdateBipod(); // Function Squad.SQWeapon.UpdateBipod // (Native|Protected|BlueprintCallable) // @ game+0x91d240
	void UpdateAimProneBobbing(); // Function Squad.SQWeapon.UpdateAimProneBobbing // (Native|Protected|BlueprintCallable) // @ game+0x91d220
	void UpdateAdjustableSightAnimPos(); // Function Squad.SQWeapon.UpdateAdjustableSightAnimPos // (Final|Native|Public) // @ game+0x91d200
	void ToggleFiremode(); // Function Squad.SQWeapon.ToggleFiremode // (Native|Public|BlueprintCallable) // @ game+0x91d1e0
	void StopModifyZeroing(); // Function Squad.SQWeapon.StopModifyZeroing // (Native|Event|Public|BlueprintEvent) // @ game+0x8c6980
	void StartReload(); // Function Squad.SQWeapon.StartReload // (Native|Public|BlueprintCallable) // @ game+0x9094d0
	void StartModifyZeroing(); // Function Squad.SQWeapon.StartModifyZeroing // (Native|Event|Public|BlueprintEvent) // @ game+0x8c6a30
	void SetZoom(bool bNewZoom, bool bForce); // Function Squad.SQWeapon.SetZoom // (Native|Public|BlueprintCallable) // @ game+0x91c5d0
	void ServerStopFire(); // Function Squad.SQWeapon.ServerStopFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c380
	void ServerStartReload(); // Function Squad.SQWeapon.ServerStartReload // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c330
	void ServerStartFire(); // Function Squad.SQWeapon.ServerStartFire // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c2e0
	void ServerSetIsAimingDownSights(bool bIsAimingDownSights); // Function Squad.SQWeapon.ServerSetIsAimingDownSights // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c220
	void ServerSetCurrentFireMode(int NewCurrentFireMode); // Function Squad.SQWeapon.ServerSetCurrentFireMode // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c160
	void ServerNotifyHit(struct FSQShotInfo ShotInfoZeroBased, struct TArray<struct FSQPenetrationTrace> TargetsZeroBased, bool bIsRayTracedShot, bool bIsManuallyCalled); // Function Squad.SQWeapon.ServerNotifyHit // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91bf80
	void ServerNotifyFireAndMiss(struct FSQShotInfo ShotInfoZeroBased, struct FHitResult HitResultZeroBased, bool bIsRayTracedShot); // Function Squad.SQWeapon.ServerNotifyFireAndMiss // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91bdd0
	void ServerFireProjectileWithId(struct FSQShotInfo ShotInfoZeroBased, uint64 UniqueProjectileId); // Function Squad.SQWeapon.ServerFireProjectileWithId // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91bc90
	void ServerFireProjectile(struct FSQShotInfo ShotInfoZeroBased); // Function Squad.SQWeapon.ServerFireProjectile // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91bba0
	void PlayImpactEffect(struct FSQPenetrationTrace& ImpactHit, bool bIsProjectileTracer); // Function Squad.SQWeapon.PlayImpactEffect // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x91b6c0
	void PlayFiringSound(struct USoundBase* Sound1p, struct USoundBase* Sound3p, struct FName& SocketName); // Function Squad.SQWeapon.PlayFiringSound // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91b5b0
	void OnRep_Reloading(); // Function Squad.SQWeapon.OnRep_Reloading // (Final|Native|Protected) // @ game+0x91b510
	void OnRep_Magazines(struct TArray<struct FSQMagazineData>& OldMagazines); // Function Squad.SQWeapon.OnRep_Magazines // (Final|Native|Public|HasOutParms) // @ game+0x91b460
	void OnRep_Firing(); // Function Squad.SQWeapon.OnRep_Firing // (Final|Native|Protected) // @ game+0x91b440
	void OnRep_AimingDownSights(bool bPrevAimingDownSights); // Function Squad.SQWeapon.OnRep_AimingDownSights // (Native|Protected) // @ game+0x91b3b0
	void MulticastFireProjectileWithId(struct FVector OriginZeroBased, struct FVector_NetQuantizeNormal ShootDir, uint64 UniqueProjectileId); // Function Squad.SQWeapon.MulticastFireProjectileWithId // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x91b2b0
	void MulticastFireProjectile(struct FVector OriginZeroBased, struct FVector_NetQuantizeNormal ShootDir); // Function Squad.SQWeapon.MulticastFireProjectile // (Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults) // @ game+0x91b200
	void MulticastFireMultipleProjectileEffects(struct TArray<struct FSQPenetrationProxy> HitResultsZeroBased, struct FSQShotInfo ShotInfoZeroBased, bool bIsRayTracedShot, bool bIsManuallyCalled); // Function Squad.SQWeapon.MulticastFireMultipleProjectileEffects // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x91b050
	void ModifyZeroing(bool bIncrease); // Function Squad.SQWeapon.ModifyZeroing // (Final|Native|Public) // @ game+0x91afc0
	bool MagazineHasAmmo(); // Function Squad.SQWeapon.MagazineHasAmmo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91af90
	bool IsZoomed(); // Function Squad.SQWeapon.IsZoomed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91ae30
	bool IsReloading(); // Function Squad.SQWeapon.IsReloading // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91ac80
	bool IsPullingTrigger(); // Function Squad.SQWeapon.IsPullingTrigger // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91ac50
	bool IsPendingFire(); // Function Squad.SQWeapon.IsPendingFire // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91ac20
	bool IsFullyZoomed(); // Function Squad.SQWeapon.IsFullyZoomed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a950
	bool IsAimingDownSights(); // Function Squad.SQWeapon.IsAimingDownSights // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a680
	float GetZoomProgress(bool bJustToggledZoom); // Function Squad.SQWeapon.GetZoomProgress // (Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a500
	struct USQWeaponStaticInfo* GetWeaponStaticInfo(); // Function Squad.SQWeapon.GetWeaponStaticInfo // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a4d0
	struct FVector GetMOAAdjustedAimDirectionFromRotator(struct FRotator& AimDirection); // Function Squad.SQWeapon.GetMOAAdjustedAimDirectionFromRotator // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a3e0
	struct FVector GetMOAAdjustedAimDirection(struct FVector& AimDirection); // Function Squad.SQWeapon.GetMOAAdjustedAimDirection // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a330
	struct FVector GetAimLocation(); // Function Squad.SQWeapon.GetAimLocation // (Native|Event|Protected|HasDefaults|BlueprintEvent) // @ game+0x91a270
	struct FVector GetAimDirection(); // Function Squad.SQWeapon.GetAimDirection // (Native|Event|Public|HasDefaults|BlueprintEvent) // @ game+0x91a230
	void FinishAdsTransition(); // Function Squad.SQWeapon.FinishAdsTransition // (Final|Native|Public) // @ game+0x91a150
	void BlueprintOnZoom(bool bNewZoom); // Function Squad.SQWeapon.BlueprintOnZoom // (Native|Event|Protected|BlueprintEvent) // @ game+0x91a0c0
	void BlueprintOnToggleFiremode(); // Function Squad.SQWeapon.BlueprintOnToggleFiremode // (Native|Event|Protected|BlueprintEvent) // @ game+0x8e1ed0
	void BlueprintOnReloaded(); // Function Squad.SQWeapon.BlueprintOnReloaded // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintOnReload(); // Function Squad.SQWeapon.BlueprintOnReload // (Native|Event|Protected|BlueprintEvent) // @ game+0x8e0cc0
	void BlueprintOnPreReload(); // Function Squad.SQWeapon.BlueprintOnPreReload // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void BlueprintOnFire(struct FVector& Origin); // Function Squad.SQWeapon.BlueprintOnFire // (Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x91a010
};

// Class Squad.SQInfantryWeapon
// Size: 0x7b0 (Inherited: 0x7a0)
struct ASQInfantryWeapon : ASQWeapon {
	struct UMaterialParameterCollection* AdsScopeFovParameterCollection; // 0x7a0(0x08)
	struct FName AdsScopeFovParameterName; // 0x7a8(0x08)

	struct ASQSoldierNew* GetOwnerSoldier(); // Function Squad.SQInfantryWeapon.GetOwnerSoldier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8897d0
	bool BlueprintIsAnimationSystemValid(); // Function Squad.SQInfantryWeapon.BlueprintIsAnimationSystemValid // (Native|Event|Public|BlueprintEvent) // @ game+0x8896d0
};

// Class Squad.SQInputComponent
// Size: 0x170 (Inherited: 0x160)
struct USQInputComponent : UInputComponent {
	char pad_160[0x10]; // 0x160(0x10)
};

// Class Squad.SQInstancedStaticMeshActor
// Size: 0x250 (Inherited: 0x248)
struct ASQInstancedStaticMeshActor : AActor {
	struct UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x248(0x08)
};

// Class Squad.SQObjectiveRuleset
// Size: 0x340 (Inherited: 0x2b0)
struct ASQObjectiveRuleset : ASQGameModeRuleset {
	int NumberOfObjectives; // 0x2b0(0x04)
	int MaxNumberOfObjectivesShownAtSameTime; // 0x2b4(0x04)
	int TicketsGainedUponMeetingObjective; // 0x2b8(0x04)
	int TicketsLostUponLosingObjective; // 0x2bc(0x04)
	struct ASQMapMarker* KnownAttackObjectiveMarkerClass; // 0x2c0(0x08)
	struct ASQMapMarker* KnownDefendObjectiveMarkerClass; // 0x2c8(0x08)
	struct ASQMapMarker* UnknownDefendObjectiveMarkerClass; // 0x2d0(0x08)
	struct ASQMapMarker* SatisfiedObjectiveMarkerClass; // 0x2d8(0x08)
	float MinObjectiveDistance; // 0x2e0(0x04)
	bool bOnlyCheckMinDistanceAgainstActiveObjectives; // 0x2e4(0x01)
	bool bRandomlyPickObjectiveIfAllFailDistanceCheck; // 0x2e5(0x01)
	char pad_2E6[0x2]; // 0x2e6(0x02)
	struct TArray<struct ASQMapMarker*> Markers; // 0x2e8(0x10)
	struct TArray<struct FTransform> AllAvailableObjectiveLocations; // 0x2f8(0x10)
	struct TArray<struct FTransform> FilteredObjectiveLocations; // 0x308(0x10)
	struct TArray<struct ASQObjective*> Objectives; // 0x318(0x10)
	struct ASQObjective* ObjectiveType; // 0x328(0x08)
	float TimeSinceLastObjectiveSpawn; // 0x330(0x04)
	bool bOverrideObjectiveSpawning; // 0x334(0x01)
	bool bGenerateMarkersForTeamOneUponObjectiveSpawn; // 0x335(0x01)
	bool bGenerateMarkersForTeamTwoUponObjectiveSpawn; // 0x336(0x01)
	enum class ESQTeam WinningTeamUponAllObjectivesCompleted; // 0x337(0x01)
	enum class ESQTeam WinningTeamUponTimerExpired; // 0x338(0x01)
	enum class ESQTeam WinningTeamIfTeamOneHasNoTickets; // 0x339(0x01)
	enum class ESQTeam WinningTeamIfTeamTwoHasNoTickets; // 0x33a(0x01)
	char pad_33B[0x5]; // 0x33b(0x05)

	void ShowNewObjectivesFromTimer(); // Function Squad.SQObjectiveRuleset.ShowNewObjectivesFromTimer // (Native|Protected) // @ game+0x8ac920
	struct TArray<struct ASQObjective*> ShowNewObjectives(); // Function Squad.SQObjectiveRuleset.ShowNewObjectives // (Native|Protected|BlueprintCallable) // @ game+0x8ac890
	bool RandomlySelectUnusedObjectiveLocation(struct FTransform& OutTransform); // Function Squad.SQObjectiveRuleset.RandomlySelectUnusedObjectiveLocation // (Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8abf00
	bool RandomlySelectDistantUnusedObjectiveLocation(struct FTransform& OutTransform); // Function Squad.SQObjectiveRuleset.RandomlySelectDistantUnusedObjectiveLocation // (Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8abe20
	void OnObjectiveShown(struct ASQObjective* ObjectiveShown); // Function Squad.SQObjectiveRuleset.OnObjectiveShown // (Native|Event|Public|BlueprintEvent) // @ game+0x8aba30
	void OnObjectiveMet(struct ASQObjective* ObjectiveMet); // Function Squad.SQObjectiveRuleset.OnObjectiveMet // (Native|Event|Public|BlueprintEvent) // @ game+0x8ab9a0
	void GenerateMarkersForTeam(enum class ESQTeam Team); // Function Squad.SQObjectiveRuleset.GenerateMarkersForTeam // (Native|Protected|BlueprintCallable) // @ game+0x8aacc0
	void DelayShowNewObjectives(float InDelay); // Function Squad.SQObjectiveRuleset.DelayShowNewObjectives // (Native|Protected|BlueprintCallable) // @ game+0x8aa920
	void ClearAndGenerateMarkersForTeamTwo(); // Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeamTwo // (Native|Protected|BlueprintCallable) // @ game+0x8aa900
	void ClearAndGenerateMarkersForTeamOne(); // Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeamOne // (Native|Protected|BlueprintCallable) // @ game+0x8aa8e0
	void ClearAndGenerateMarkersForTeam(enum class ESQTeam Team); // Function Squad.SQObjectiveRuleset.ClearAndGenerateMarkersForTeam // (Native|Protected|BlueprintCallable) // @ game+0x8aa860
};

// Class Squad.SQInsurgencyRuleset
// Size: 0x390 (Inherited: 0x340)
struct ASQInsurgencyRuleset : ASQObjectiveRuleset {
	int IntelligencePoints; // 0x340(0x04)
	enum class ESQTeam CoalitionTeam; // 0x344(0x01)
	enum class ESQTeam InsurgentTeam; // 0x345(0x01)
	char pad_346[0x2]; // 0x346(0x02)
	int MaxNumberOfFirstCachesToShowCoalition; // 0x348(0x04)
	struct FVector2D TimeDelayToShowFirstCache; // 0x34c(0x08)
	struct FVector2D TimeDelayToShowNextCache; // 0x354(0x08)
	struct FVector2D TimeDelayToNotifyCoalitionOfFirstCaches; // 0x35c(0x08)
	struct FVector2D TimeDelayToNotifyCoalitionOfCache; // 0x364(0x08)
	int IntelligencePointsPerInsurgentKilled; // 0x36c(0x04)
	int IntelligencePointsPerInsurgentArrested; // 0x370(0x04)
	int IntelligencePointsPerCivilianKilled; // 0x374(0x04)
	struct TArray<struct FSQPlayerLimiter> IntelligencePointsRequiredToShowCache; // 0x378(0x10)
	struct USQRoleSettings* CivilianRole; // 0x388(0x08)

	void NotifyCoalitionOfSingleCache(); // Function Squad.SQInsurgencyRuleset.NotifyCoalitionOfSingleCache // (Native|Protected) // @ game+0x868a10
	void NotifyCoalitionOfCaches(struct TArray<struct ASQObjective*> NewCaches); // Function Squad.SQInsurgencyRuleset.NotifyCoalitionOfCaches // (Native|Protected) // @ game+0x889890
	int GetNumberOfPlayersOnServer(); // Function Squad.SQInsurgencyRuleset.GetNumberOfPlayersOnServer // (Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x8897a0
	void CheckIntelligencePoints(); // Function Squad.SQInsurgencyRuleset.CheckIntelligencePoints // (Native|Protected|BlueprintCallable) // @ game+0x889700
};

// Class Squad.SQInteractableWidgetItem
// Size: 0x230 (Inherited: 0x230)
struct USQInteractableWidgetItem : UUserWidget {
};

// Class Squad.SQInteractableWidgetList
// Size: 0x230 (Inherited: 0x230)
struct USQInteractableWidgetList : UUserWidget {
};

// Class Squad.SQInventoryGroupWidget
// Size: 0x288 (Inherited: 0x230)
struct USQInventoryGroupWidget : USQUserWidget {
	struct TArray<struct USQInventoryItemWidget*> ItemsArray; // 0x230(0x10)
	struct UCanvasPanel* UnselectedGroupPanel; // 0x240(0x08)
	struct UHorizontalBox* ItemWidgetsHorizontalBox; // 0x248(0x08)
	struct UImage* UnselectedImage; // 0x250(0x08)
	struct UTextBlock* GroupNumber; // 0x258(0x08)
	struct UImage* GroupImage; // 0x260(0x08)
	struct UTextBlock* ItemNameTextBlock; // 0x268(0x08)
	struct FText GroupName; // 0x270(0x18)

	void UpdateState(); // Function Squad.SQInventoryGroupWidget.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	void InitWidget(); // Function Squad.SQInventoryGroupWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQInventoryInterface
// Size: 0x28 (Inherited: 0x28)
struct USQInventoryInterface : UInterface {
};

// Class Squad.SQInventoryItemWidget
// Size: 0x250 (Inherited: 0x230)
struct USQInventoryItemWidget : USQUserWidget {
	struct UImage* ItemImage; // 0x230(0x08)
	struct ASQEquipableItem* CurrentItem; // 0x238(0x08)
	struct UTextBlock* MagTextBlock; // 0x240(0x08)
	struct UImage* BackgroundImage; // 0x248(0x08)

	void UpdateState(); // Function Squad.SQInventoryItemWidget.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	void InitWidget(); // Function Squad.SQInventoryItemWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQInventoryWidget
// Size: 0x278 (Inherited: 0x230)
struct USQInventoryWidget : USQUserWidget {
	struct TArray<struct USQInventoryGroupWidget*> GroupsArray; // 0x230(0x10)
	struct ASQPlayerController* OwningController; // 0x240(0x08)
	struct USQPawnInventoryComponent* RenderedInventory; // 0x248(0x08)
	char pad_250[0xc]; // 0x250(0x0c)
	float MaxTranslucencyAlpha; // 0x25c(0x04)
	float ItemSelectedAlpha; // 0x260(0x04)
	float ItemUnselectedAlpha; // 0x264(0x04)
	float FadeoutDuration; // 0x268(0x04)
	float FadeoutDelay; // 0x26c(0x04)
	struct USoundCue* ItemScrollSound; // 0x270(0x08)

	void UpdateInventoryWidgets(); // Function Squad.SQInventoryWidget.UpdateInventoryWidgets // (Final|Native|Protected) // @ game+0x8899a0
	void UpdateElements(); // Function Squad.SQInventoryWidget.UpdateElements // (Final|Native|Public|BlueprintCallable) // @ game+0x889980
	void SetupInventoryWidgets(); // Function Squad.SQInventoryWidget.SetupInventoryWidgets // (Native|Protected|BlueprintCallable) // @ game+0x829fd0
	void InitWidget(); // Function Squad.SQInventoryWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQItemAnimInstance
// Size: 0x2a0 (Inherited: 0x290)
struct USQItemAnimInstance : USQAnimInstance {
	bool bPlay1PAnimNotifiesWhenInFirstPerson; // 0x290(0x01)
	bool bPlay3PAnimNotifiesWhenInFirstPerson; // 0x291(0x01)
	char pad_292[0xe]; // 0x292(0x0e)
};

// Class Squad.SQJoinBeaconClient
// Size: 0x2f0 (Inherited: 0x2c8)
struct ASQJoinBeaconClient : AOnlineBeaconClient {
	int PlayerCount; // 0x2c8(0x04)
	int QueuePosition; // 0x2cc(0x04)
	int ReservedQueueCount; // 0x2d0(0x04)
	int PublicQueueCount; // 0x2d4(0x04)
	bool bIsReservedMember; // 0x2d8(0x01)
	bool bHasReplicated; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct USQServerListItemWidget* ServerWidget; // 0x2e0(0x08)
	double SecondsToKeepAttemptingReconnect; // 0x2e8(0x08)

	void RequestClientJoin(); // Function Squad.SQJoinBeaconClient.RequestClientJoin // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x88e090
	void LeaveQueue(); // Function Squad.SQJoinBeaconClient.LeaveQueue // (Final|Native|Public|BlueprintCallable) // @ game+0x88ded0
	void InitConnection(struct FString ServerURL); // Function Squad.SQJoinBeaconClient.InitConnection // (Native|Public|BlueprintCallable) // @ game+0x88d990
	void HostTravelRequestReconnect(int TimeLeftInMatch, float SecondsPerRetry); // Function Squad.SQJoinBeaconClient.HostTravelRequestReconnect // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x88d890
};

// Class Squad.SQJoinBeaconHost
// Size: 0x2b8 (Inherited: 0x270)
struct ASQJoinBeaconHost : AOnlineBeaconHostObject {
	struct TArray<struct FSQServerSlot> PublicQueue; // 0x270(0x10)
	struct TArray<struct FSQServerSlot> ReservedQueue; // 0x280(0x10)
	struct TArray<struct FSQServerSlot> JoiningServerSlots; // 0x290(0x10)
	char pad_2A0[0x18]; // 0x2a0(0x18)
};

// Class Squad.SQJoinBeaconState
// Size: 0x58 (Inherited: 0x28)
struct USQJoinBeaconState : UObject {
	struct TArray<struct FSQServerSlot> PublicQueue; // 0x28(0x10)
	struct TArray<struct FSQServerSlot> ReservedQueue; // 0x38(0x10)
	struct TArray<struct FSQServerSlot> JoiningServerSlots; // 0x48(0x10)
};

// Class Squad.SQJoinSessionCallbackProxy
// Size: 0x128 (Inherited: 0x28)
struct USQJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FScriptMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FScriptMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0xd8]; // 0x48(0xd8)
	struct UObject* WorldContextObject; // 0x120(0x08)

	struct USQJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult& SearchResult); // Function Squad.SQJoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x88dc90
	bool IsServerModded(struct FBlueprintSessionResult& SearchResult, bool& bIsWhitelisted); // Function Squad.SQJoinSessionCallbackProxy.IsServerModded // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x88da80
};

// Class Squad.SQKickBanComponent
// Size: 0xd8 (Inherited: 0xd8)
struct USQKickBanComponent : UActorComponent {

	void KickPlayer(struct ASQPlayerController* ToKickPC, struct FString KickReason); // Function Squad.SQKickBanComponent.KickPlayer // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x88ddf0
	void BanPlayer(struct FString AdminId, struct ASQPlayerController* ToBanPC, int BanSeconds, struct FString BanReason); // Function Squad.SQKickBanComponent.BanPlayer // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x88cb70
};

// Class Squad.SQKillDeathRuleset
// Size: 0x360 (Inherited: 0x278)
struct ASQKillDeathRuleset : ASQGameRuleSet {
	struct FSQKillDeathSettings TeamOneSettings; // 0x278(0x40)
	struct FSQKillDeathSettings TeamTwoSettings; // 0x2b8(0x40)
	float SpawnDelayPenaltyForSuicide; // 0x2f8(0x04)
	float SpawnDelayPenaltyForTeamKill; // 0x2fc(0x04)
	struct FSQHealSettings TeamOneHealSettings; // 0x300(0x24)
	struct FSQHealSettings TeamTwoHealSettings; // 0x324(0x24)
	int TeamkillsBeforeKick; // 0x348(0x04)
	float DefaultPointsForVehicleDestroy; // 0x34c(0x04)
	bool bDefaultShouldDelayScoreForVehicleDestroy; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int DefaultTicketsLostForVehicleDestroy; // 0x354(0x04)
	bool bTKAutoKickEnabled; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
};

// Class Squad.SQLastingEffect
// Size: 0x2a0 (Inherited: 0x248)
struct ASQLastingEffect : AActor {
	struct UParticleSystemComponent* ParticleSystem; // 0x248(0x08)
	struct UAudioComponent* Audio; // 0x250(0x08)
	struct USQShockwave* ShockwaveEffect; // 0x258(0x08)
	float TimeToFireTriggerLastingEffectEventAfterBeginPlay; // 0x260(0x04)
	float TimeToLiveAfterBeginPlay; // 0x264(0x04)
	float TimeToLiveAfterTriggerLastingEffect; // 0x268(0x04)
	bool bListenForOnActorHitEvents; // 0x26c(0x01)
	bool bListenForOnDestroyedEvents; // 0x26d(0x01)
	bool bActivateParticleSystemUponBeginPlay; // 0x26e(0x01)
	bool bActivateParticleSystemUponTriggerLastingEffect; // 0x26f(0x01)
	bool bActivateAudioUponBeginPlay; // 0x270(0x01)
	bool bActivateAudioUponTriggerLastingEffect; // 0x271(0x01)
	bool bActivateShockwaveUponBeginPlay; // 0x272(0x01)
	bool bActivateShockwaveUponTriggerLastingEffect; // 0x273(0x01)
	bool bDetachFromActorUponTriggerLastingEffect; // 0x274(0x01)
	bool bDeactivateParticleSystemUponTriggerLastingEffect; // 0x275(0x01)
	bool bDeactivateParticleSystemUponTriggerLastingEffectTimerExpired; // 0x276(0x01)
	bool bDeactivateAudioUponTriggerLastingEffectTimerExpired; // 0x277(0x01)
	bool bDestroyUponTriggerLastingEffectTimerExpired; // 0x278(0x01)
	bool bDrawDebugSphere; // 0x279(0x01)
	char pad_27A[0x2]; // 0x27a(0x02)
	float DebugSphereRadius; // 0x27c(0x04)
	int DebugSphereSegments; // 0x280(0x04)
	struct FColor DebugSphereColor; // 0x284(0x04)
	char pad_288[0x18]; // 0x288(0x18)

	void OnTriggerLastingEffectTimerExpired(); // Function Squad.SQLastingEffect.OnTriggerLastingEffectTimerExpired // (Native|Event|Public|BlueprintEvent) // @ game+0x8674c0
	void OnTriggerLastingEffectEvent(); // Function Squad.SQLastingEffect.OnTriggerLastingEffectEvent // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8645e0
	void OnDestroyedEvent(struct AActor* DestroyedActor); // Function Squad.SQLastingEffect.OnDestroyedEvent // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x844930
	void OnBeginPlayTimerExpired(); // Function Squad.SQLastingEffect.OnBeginPlayTimerExpired // (Native|Event|Public|BlueprintEvent) // @ game+0x85ec90
	void OnActorHitEvent(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQLastingEffect.OnActorHitEvent // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x88def0
	void Deactivate(); // Function Squad.SQLastingEffect.Deactivate // (Final|Native|Public|BlueprintCallable) // @ game+0x88cce0
	void Activate(); // Function Squad.SQLastingEffect.Activate // (Final|Native|Public|BlueprintCallable) // @ game+0x88cb50
};

// Class Squad.SQLayerTeamConfig
// Size: 0x60 (Inherited: 0x28)
struct USQLayerTeamConfig : UObject {
	enum class ESQTeam Index; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct USQFactionSetup* SpecificFactionSetup; // 0x30(0x28)
	int Tickets; // 0x58(0x04)
	int PlayerPercentage; // 0x5c(0x04)

	bool TryGetAvailabilityModifierPct(struct USQAvailability* InAvailability, int& OutModifierPct); // Function Squad.SQLayerTeamConfig.TryGetAvailabilityModifierPct // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x860520
	bool HasFactionSetupChoice(struct USQFactionSetup*& OutSpecificFaction); // Function Squad.SQLayerTeamConfig.HasFactionSetupChoice // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x88d490
	bool GetCompatibleFactionSetups(struct USQLayer* InOuterLayer, struct TMap<struct FName, struct USQFactionSetup*>& InAvailableFactionSetups, struct TArray<struct USQFactionSetup*>& OutCompatibleFactionSetups); // Function Squad.SQLayerTeamConfig.GetCompatibleFactionSetups // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x88cec0
	bool EditorOnly_ShouldUseSpecificFaction(); // Function Squad.SQLayerTeamConfig.EditorOnly_ShouldUseSpecificFaction // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x831a60
};

// Class Squad.SQLayer
// Size: 0xb0 (Inherited: 0x70)
struct USQLayer : USQPrimaryData {
	struct FName LevelId; // 0x70(0x08)
	struct USQLevel* OuterLevel; // 0x78(0x08)
	struct TArray<struct UWorld*> Worlds; // 0x80(0x10)
	struct TArray<struct USQLayerTeamConfig*> TeamConfigs; // 0x90(0x10)
	struct FSQGameFlags GameFlags; // 0xa0(0x0e)
	char pad_AE[0x2]; // 0xae(0x02)

	bool TryGetTeamConfig(int TeamId, struct USQLayerTeamConfig* LayerTeamConfigClass, struct USQLayerTeamConfig*& OutTeamConfig); // Function Squad.SQLayer.TryGetTeamConfig // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88e2a0
	bool TryGetLoadingMusic(struct USoundBase*& OutLoadingMusic); // Function Squad.SQLayer.TryGetLoadingMusic // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x88e1f0
	bool TryGetLayerStagingDuration(struct FTimespan& OutDuration); // Function Squad.SQLayer.TryGetLayerStagingDuration // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetGameMode(struct FText& OutGameMode); // Function Squad.SQLayer.TryGetGameMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetDisplayName(struct FText& OutDisplayName); // Function Squad.SQLayer.TryGetDisplayName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetAvailabilityModifierPct(int InTeam, struct USQAvailability* InAvailability, int& OutModifier); // Function Squad.SQLayer.TryGetAvailabilityModifierPct // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x88e0e0
	bool HasTeamConfig(int TeamId); // Function Squad.SQLayer.HasTeamConfig // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d800
	bool HasMapPath(struct FString MapPath); // Function Squad.SQLayer.HasMapPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d6a0
	bool HasMapName(struct FString MapName); // Function Squad.SQLayer.HasMapName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d540
	bool HasFactionSetupChoice(int InTeam, struct USQFactionSetup*& OutSpecificFaction); // Function Squad.SQLayer.HasFactionSetupChoice // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d3c0
	int GetMapPaths(struct TArray<struct FString>& OutMapPaths); // Function Squad.SQLayer.GetMapPaths // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d2e0
	int GetMapNames(struct TArray<struct FString>& OutMapNames); // Function Squad.SQLayer.GetMapNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d140
	struct FDataTableRowHandle GetFobRadiusTableRow(); // Function Squad.SQLayer.GetFobRadiusTableRow // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool GetCompatibleFactionSetups(int InTeam, struct TMap<struct FName, struct USQFactionSetup*>& InAvailableFactionSetups, struct TArray<struct USQFactionSetup*>& OutCompatibleFactionSetups); // Function Squad.SQLayer.GetCompatibleFactionSetups // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88cd00
	bool CanVoteForFactionConcurrently(); // Function Squad.SQLayer.CanVoteForFactionConcurrently // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
};

// Class Squad.SQLevel
// Size: 0xb0 (Inherited: 0x70)
struct USQLevel : USQPrimaryData {
	struct UWorld* World; // 0x70(0x28)
	bool NeverAddToRotation; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct USQLayer*> AvailableLayers; // 0xa0(0x10)

	bool TryGetLoadingScreen(struct UTexture2D*& OutLoadingScreen, struct FVector2D& InViewportSize); // Function Squad.SQLevel.TryGetLoadingScreen // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetLoadingMusic(struct USoundBase*& OutLoadingMusic); // Function Squad.SQLevel.TryGetLoadingMusic // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x88d490
	bool TryGetDisplayName(struct FText& OutDisplayName); // Function Squad.SQLevel.TryGetDisplayName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool TryGetDescription(struct FText& OutDescription); // Function Squad.SQLevel.TryGetDescription // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool HasMapPath(struct FString MapPath); // Function Squad.SQLevel.HasMapPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d750
	bool HasMapName(struct FString MapName); // Function Squad.SQLevel.HasMapName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d5f0
	bool GetMapPath(struct FString& OutMapPath); // Function Squad.SQLevel.GetMapPath // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d220
	bool GetMapName(struct FString& OutMapName); // Function Squad.SQLevel.GetMapName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x88d080
};

// Class Squad.SQLicensedServerManager
// Size: 0x118 (Inherited: 0x30)
struct USQLicensedServerManager : UGameInstanceSubsystem {
	char pad_30[0xe8]; // 0x30(0xe8)

	bool IsServerPromoted(struct FBlueprintSessionResult& Result); // Function Squad.SQLicensedServerManager.IsServerPromoted // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x88dbb0
};

// Class Squad.SQLocalPlayer
// Size: 0x2a0 (Inherited: 0x280)
struct USQLocalPlayer : ULocalPlayer {
	char pad_280[0x20]; // 0x280(0x20)
};

// Class Squad.SQLockButtonWidget
// Size: 0x230 (Inherited: 0x230)
struct USQLockButtonWidget : USQUserWidget {

	void OnPressed(); // Function Squad.SQLockButtonWidget.OnPressed // (Final|Native|Protected|BlueprintCallable) // @ game+0x891b70
};

// Class Squad.SQLoginCallbackProxy
// Size: 0x90 (Inherited: 0x28)
struct USQLoginCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FScriptMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FScriptMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0x40]; // 0x48(0x40)
	struct UObject* WorldContextObject; // 0x88(0x08)

	struct USQLoginCallbackProxy* Login(struct UObject* InWorldContextObject, struct APlayerController* InPlayerController, struct FString InLoginName, struct FString InPassword); // Function Squad.SQLoginCallbackProxy.Login // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8916c0
	struct FString GetLoginResult(struct FSQBlueprintLoginResult& Result); // Function Squad.SQLoginCallbackProxy.GetLoginResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8912d0
};

// Class Squad.SQLogisticsRuleSet
// Size: 0x288 (Inherited: 0x278)
struct ASQLogisticsRuleSet : ASQGameRuleSet {
	struct FSQLogisticsSettings RuleSettings; // 0x278(0x0c)
	char pad_284[0x4]; // 0x284(0x04)
};

// Class Squad.SQMagazineGroupWidget
// Size: 0x240 (Inherited: 0x230)
struct USQMagazineGroupWidget : USQUserWidget {
	struct TArray<struct USQMagazineWidget*> MagazineWidgets; // 0x230(0x10)

	void InitWidget(); // Function Squad.SQMagazineGroupWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQMagazineWidget
// Size: 0x240 (Inherited: 0x230)
struct USQMagazineWidget : USQUserWidget {
	struct UImage* SelectedImage; // 0x230(0x08)
	struct UImage* AmmoImage; // 0x238(0x08)

	void InitWidget(); // Function Squad.SQMagazineWidget.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQMap
// Size: 0x2c0 (Inherited: 0x230)
struct USQMap : USQUserWidget {
	float PositionUpdateRate; // 0x230(0x04)
	float PositionUpdateTimer; // 0x234(0x04)
	bool bIsMapFollowing; // 0x238(0x01)
	bool bMapFollowToggle; // 0x239(0x01)
	bool bMapFollowPlayerOnByDefault; // 0x23a(0x01)
	char pad_23B[0x1]; // 0x23b(0x01)
	struct FVector2D MapCurrentCoord; // 0x23c(0x08)
	struct FVector2D MapCenterCoord; // 0x244(0x08)
	bool bRunCameraPP; // 0x24c(0x01)
	bool bRunCameraPPForward; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
	float PPBlendMultiplier; // 0x250(0x04)
	float PPBlendValue; // 0x254(0x04)
	float PPBlendFarDistance; // 0x258(0x04)
	float MapDrawX; // 0x25c(0x04)
	float MapDrawY; // 0x260(0x04)
	float MapWidth; // 0x264(0x04)
	float MapHeight; // 0x268(0x04)
	struct FVector2D WorldTR; // 0x26c(0x08)
	struct FVector2D WorldBL; // 0x274(0x08)
	float MajorGridSpacing; // 0x27c(0x04)
	struct FVector2D MapLastClickPosition; // 0x280(0x08)
	struct FVector2D LastMapZoomPos; // 0x288(0x08)
	struct TArray<int> MapZoomLevels; // 0x290(0x10)
	float ZoomFloatCurrent; // 0x2a0(0x04)
	int ZoomStep; // 0x2a4(0x04)
	int ZoomStepMax; // 0x2a8(0x04)
	int ZoomStepMin; // 0x2ac(0x04)
	float ZoomAlpha; // 0x2b0(0x04)
	bool bIsZooming; // 0x2b4(0x01)
	bool bMapIsClosing; // 0x2b5(0x01)
	bool bMapIsOpening; // 0x2b6(0x01)
	bool bIsSpawnScreen; // 0x2b7(0x01)
	bool bIsMapOn; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)

	void ZoomSwitch(); // Function Squad.SQMap.ZoomSwitch // (Native|Public|BlueprintCallable) // @ game+0x8929f0
	void UpdateTickZoom(float DeltaTime, struct FVector2D& MapCoords); // Function Squad.SQMap.UpdateTickZoom // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x892320
	struct FVector2D TranslateWorldToMapZoom(struct FVector& InWorldCoords, bool& OutbIsInRange); // Function Squad.SQMap.TranslateWorldToMapZoom // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x892220
	struct FVector2D TranslateWorldToMapAnchorsDirect(struct FVector& InWorldCoords); // Function Squad.SQMap.TranslateWorldToMapAnchorsDirect // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x892170
	struct FVector TranslateMapToWorldRayTrace(struct FVector2D& InCoords); // Function Squad.SQMap.TranslateMapToWorldRayTrace // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8920c0
	struct FVector TranslateMapToWorld(struct FVector2D& InCoords); // Function Squad.SQMap.TranslateMapToWorld // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x892010
	struct FVector2D TranslateMapPathBorderClamp(struct FVector2D& InCoords, bool& OutbIsClamped); // Function Squad.SQMap.TranslateMapPathBorderClamp // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891f20
	struct FVector2D TranslateMapCoordsIsInRange(struct FVector2D& InCoords, bool& OutbIsInRange); // Function Squad.SQMap.TranslateMapCoordsIsInRange // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891e30
	struct FVector2D TranslateMapCoords(struct FVector2D& InCoords); // Function Squad.SQMap.TranslateMapCoords // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891d90
	struct FVector2D TranslateInverseMapCoords(struct FVector2D& InCoords); // Function Squad.SQMap.TranslateInverseMapCoords // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891cf0
	void SetWorldCoords(); // Function Squad.SQMap.SetWorldCoords // (Native|Public|BlueprintCallable) // @ game+0x891ca0
	bool IsSquadLeader(); // Function Squad.SQMap.IsSquadLeader // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x891690
	bool IsInCameraMan(struct ASQPlayerController* SQPlayerController); // Function Squad.SQMap.IsInCameraMan // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8915c0
	struct FVector2D IsCursorOverMapPos(bool& OutbIsOverMap); // Function Squad.SQMap.IsCursorOverMapPos // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891520
	struct FText GetMapDisplayName(); // Function Squad.SQMap.GetMapDisplayName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8913f0
	float GetMajorGridSpacingInCM(); // Function Squad.SQMap.GetMajorGridSpacingInCM // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8913c0
	struct FVector2D GetCursorPos(); // Function Squad.SQMap.GetCursorPos // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891210
	struct FVector2D GetCursorNormalizedPos(); // Function Squad.SQMap.GetCursorNormalizedPos // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8911d0
	int GetCurrentTeam(); // Function Squad.SQMap.GetCurrentTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8911a0
	void CalculatePathDistanceAndAngle(struct FVector2D& PointStart, struct FVector2D& PointEnd, float& distance, float& Angle); // Function Squad.SQMap.CalculatePathDistanceAndAngle // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x890730
};

// Class Squad.SQMapBoundarySettings
// Size: 0x88 (Inherited: 0x30)
struct USQMapBoundarySettings : UDataAsset {
	float DefaultKillTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct UObject*, float> ClassKillTimes; // 0x38(0x50)
};

// Class Squad.SQMapBoundary
// Size: 0x368 (Inherited: 0x308)
struct ASQMapBoundary : ASQBoundary {
	struct USQMapBoundarySettings* CommonSettings; // 0x308(0x08)
	bool bOverrideDefaultKillTime; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float DefaultKillTime; // 0x314(0x04)
	struct TMap<struct UObject*, float> ClassKillTimes; // 0x318(0x50)

	float FindKillTime(struct UObject*& Class); // Function Squad.SQMapBoundary.FindKillTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x891100
	float CalcKillTimestamp(struct UObject*& Class); // Function Squad.SQMapBoundary.CalcKillTimestamp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x890690
};

// Class Squad.SQMapConversions
// Size: 0x28 (Inherited: 0x28)
struct USQMapConversions : UBlueprintFunctionLibrary {

	bool WorldToMapVector(struct FVector2D& OutMapVector, struct FVector& WorldVectorZeroBased, struct FBox2D& WorldBoundsZeroBased, struct FVector2D& MapBoundsScale); // Function Squad.SQMapConversions.WorldToMapVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x892860
	bool WorldToMapLocation(struct FVector2D& OutMapLocation, struct FVector& WorldLocationZeroBased, struct FBox2D& WorldBoundsZeroBased, struct FVector2D& MapBoundsScale); // Function Squad.SQMapConversions.WorldToMapLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8926d0
	bool WorldToMapGridLocation(struct FVector2D& OutMapGrid, struct FVector& WorldVectorZeroBased, struct FBox2D& WorldBoundsZeroBased, struct FVector2D& MapBoundsScale, struct FVector2D& NumGridLines); // Function Squad.SQMapConversions.WorldToMapGridLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x8924f0
	bool ScreenLocationToMapLocation(struct FVector2D& OutMapLocation, struct FVector2D& ScreenLocation, struct UPanelWidget* MapBody); // Function Squad.SQMapConversions.ScreenLocationToMapLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x891b90
	bool MapToMapGridLocation(struct FVector2D& OutMapGrid, struct FVector2D& MapLocation, struct FVector2D& NumGridLines); // Function Squad.SQMapConversions.MapToMapGridLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x891a50
	bool MapLocationToScreenLocation(struct FVector2D& OutScreenLocation, struct FVector2D& MapLocation, struct UPanelWidget* MapBody); // Function Squad.SQMapConversions.MapLocationToScreenLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x891940
	struct FString MapLocationToGridCoordinateString(struct FVector2D& MapLocation, struct FVector2D& NumGridLines); // Function Squad.SQMapConversions.MapLocationToGridCoordinateString // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x891820
};

// Class Squad.SQMapGrid
// Size: 0x318 (Inherited: 0x230)
struct USQMapGrid : USQUserWidget {
	struct FLinearColor MajorGridColor; // 0x230(0x10)
	struct FLinearColor MinorGridColor; // 0x240(0x10)
	struct FLinearColor TinyGridColor; // 0x250(0x10)
	struct UCurveFloat* MajorGridOpacityCurve; // 0x260(0x08)
	struct UCurveFloat* MinorGridOpacityCurve; // 0x268(0x08)
	struct UCurveFloat* TinyGridOpacityCurve; // 0x270(0x08)
	int MajorGridWidth; // 0x278(0x04)
	int MinorGridWidth; // 0x27c(0x04)
	int TinyGridWidth; // 0x280(0x04)
	struct FVector2D LegendPercentageLocation; // 0x284(0x08)
	struct FVector2D LegendTextOffset; // 0x28c(0x08)
	float MaxLegendPercentageSize; // 0x294(0x04)
	struct FSlateFontInfo LegendScaleFontInfo; // 0x298(0x50)
	struct USQMap* OwnerMap; // 0x2e8(0x08)
	bool bDrawGridMarkers; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	struct FVector2D RealMapSize; // 0x2f4(0x08)
	struct FVector2D RealToPixel; // 0x2fc(0x08)
	struct FVector2D PixelSize; // 0x304(0x08)
	struct FVector2D LinesNeeded; // 0x30c(0x08)
	char pad_314[0x4]; // 0x314(0x04)

	void InitWidget(); // Function Squad.SQMapGrid.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
	void DrawWidget(struct USQMapGrid* MapGrid, struct FPaintContext& Context); // Function Squad.SQMapGrid.DrawWidget // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x890f80
	void DrawLegendLine(struct USQMapGrid* MapGrid, struct FPaintContext& Context, struct FVector2D StepSize, struct FLinearColor Color, float Width, struct FText LegendText, float YOffset); // Function Squad.SQMapGrid.DrawLegendLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x890d00
	void DrawGridMarkers(struct USQMapGrid* MapGrid, struct FPaintContext& Context, struct FVector2D Offset, struct FVector2D StepSize, struct FVector2D GridLinesNeeded, struct FLinearColor Color); // Function Squad.SQMapGrid.DrawGridMarkers // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x890b10
	void DrawGrid(struct USQMapGrid* MapGrid, struct FPaintContext& Context, struct FVector2D Offset, struct FVector2D StepSize, struct FVector2D GridLinesNeeded, int SkipNumber, struct FLinearColor Color, float Width); // Function Squad.SQMapGrid.DrawGrid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8908c0
};

// Class Squad.SQMapItemComponent
// Size: 0x130 (Inherited: 0xd8)
struct USQMapItemComponent : UActorComponent {
	struct FLinearColor Tint; // 0xd8(0x10)
	struct FVector2D CustomWorldPosition; // 0xe8(0x08)
	bool bUseCustomWorldPosition; // 0xf0(0x01)
	bool bUseWorldRotation; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float Rotation; // 0xf4(0x04)
	struct FVector2D RotPivot; // 0xf8(0x08)
	struct FVector2D Size; // 0x100(0x08)
	struct FVector2D Offset; // 0x108(0x08)
	enum class ESQMapItemDrawMode DrawModeX; // 0x110(0x01)
	enum class ESQMapItemDrawMode DrawModeY; // 0x111(0x01)
	bool bIsVisible; // 0x112(0x01)
	char pad_113[0x1]; // 0x113(0x01)
	int TeamIndex; // 0x114(0x04)
	int SquadId; // 0x118(0x04)
	enum class ESQMapMarkerType MapMarkerType; // 0x11c(0x01)
	enum class ESQMapMarkerVisibleTo MapMarkerVisibleTo; // 0x11d(0x01)
	enum class ESQMapItemType Type; // 0x11e(0x01)
	char pad_11F[0x1]; // 0x11f(0x01)
	struct USQMapIconWidget* CustomMapWidget; // 0x120(0x08)
	char pad_128[0x8]; // 0x128(0x08)
};

// Class Squad.SQMapIconComponent
// Size: 0x188 (Inherited: 0x130)
struct USQMapIconComponent : USQMapItemComponent {
	struct UTexture* Texture; // 0x130(0x08)
	enum class ESQMapIconSelectionGroup SelectionGroup; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
	struct UTexture* SelectedTexture; // 0x140(0x08)
	struct FLinearColor SelectedTint; // 0x148(0x10)
	char pad_158[0x30]; // 0x158(0x30)
};

// Class Squad.SQMapIconWidget
// Size: 0x250 (Inherited: 0x230)
struct USQMapIconWidget : UUserWidget {
	struct USQMapItemComponent* RefItem; // 0x230(0x08)
	int MapZOrder; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct USQToolTipBaseWidget* TooltipType; // 0x240(0x08)
	struct USQMap* ParentMap; // 0x248(0x08)

	bool ShouldMarkerUpdate(); // Function Squad.SQMapIconWidget.ShouldMarkerUpdate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x891cc0
	bool IsMarkerVisible(); // Function Squad.SQMapIconWidget.IsMarkerVisible // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x891660
	struct FLinearColor GetSquadColor(); // Function Squad.SQMapIconWidget.GetSquadColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8914e0
	struct FLinearColor GetNeutralColor(); // Function Squad.SQMapIconWidget.GetNeutralColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8914a0
	struct FLinearColor GetFriendlyColor(); // Function Squad.SQMapIconWidget.GetFriendlyColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891290
	struct FLinearColor GetEnemyColor(); // Function Squad.SQMapIconWidget.GetEnemyColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x891250
};

// Class Squad.SQTeamActor
// Size: 0x258 (Inherited: 0x248)
struct ASQTeamActor : AActor {
	char pad_248[0x8]; // 0x248(0x08)
	enum class ESQTeam Team; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)

	void SetTeam(enum class ESQTeam Team); // Function Squad.SQTeamActor.SetTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8fe6a0
	void OnRep_Team(); // Function Squad.SQTeamActor.OnRep_Team // (Native|Public) // @ game+0x85f3b0
	enum class ESQTeam GetTeam(); // Function Squad.SQTeamActor.GetTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e9ce0
};

// Class Squad.SQMapMarker
// Size: 0x280 (Inherited: 0x258)
struct ASQMapMarker : ASQTeamActor {
	char pad_258[0x8]; // 0x258(0x08)
	struct USQMapIconComponent* MapIcon; // 0x260(0x08)
	struct USQCoreStateComponent* StateObject; // 0x268(0x08)
	int Squad; // 0x270(0x04)
	int FireTeamId; // 0x274(0x04)
	enum class ESQEmotes PlacementEmote; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)

	void SetSquad(int Squad); // Function Squad.SQMapMarker.SetSquad // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x89b6d0
	void SetMarkerVisibleTo(enum class ESQMapMarkerVisibleTo VisibleTo); // Function Squad.SQMapMarker.SetMarkerVisibleTo // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x89b4d0
	void SetMarkerType(enum class ESQMapMarkerType MarkerType); // Function Squad.SQMapMarker.SetMarkerType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x89b450
	void SetFireteamId(int FireTeamId); // Function Squad.SQMapMarker.SetFireteamId // (Final|Native|Public|BlueprintCallable) // @ game+0x89b350
	void OnRep_Squad(); // Function Squad.SQMapMarker.OnRep_Squad // (Native|Public) // @ game+0x8674c0
	int GetSquad(); // Function Squad.SQMapMarker.GetSquad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a9b0
	enum class ESQMapMarkerType GetMarkerType(); // Function Squad.SQMapMarker.GetMarkerType // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x867e50
	int GetFireteamId(); // Function Squad.SQMapMarker.GetFireteamId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a840
};

// Class Squad.SQMapMarkerBase
// Size: 0x320 (Inherited: 0x230)
struct USQMapMarkerBase : UUserWidget {
	struct UImage* MarkerImage; // 0x230(0x08)
	struct UCanvasPanelSlot* CanvasPanelSlot; // 0x238(0x08)
	float AnimationEpsilon; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct USQColorsDataAsset* ColorsDataAsset; // 0x248(0x08)
	struct FSQMapMarkerVisualData MarkerData; // 0x250(0xc8)
	bool bHasFaded; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)

	void SetupMapMarker(struct UCanvasPanelSlot* PanelSlot); // Function Squad.SQMapMarkerBase.SetupMapMarker // (Final|Native|Public|BlueprintCallable) // @ game+0x89b760
	void OnScaleChanged(float ScaleValue); // Function Squad.SQMapMarkerBase.OnScaleChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void OnHasFadedChanged(); // Function Squad.SQMapMarkerBase.OnHasFadedChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct FSQMapMarkerVisualData GetMapMarkerData(); // Function Squad.SQMapMarkerBase.GetMapMarkerData // (Final|Native|Public|BlueprintCallable) // @ game+0x89a8d0
};

// Class Squad.SQMapMarkerDataAsset
// Size: 0x100 (Inherited: 0x30)
struct USQMapMarkerDataAsset : UPrimaryDataAsset {
	struct FSQMapMarkerVisualData MarkerVisualData; // 0x30(0xc8)
	bool bIsGlobalMarker; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class Squad.SQMapMarkerInputComponent
// Size: 0xd8 (Inherited: 0xd8)
struct USQMapMarkerInputComponent : UActorComponent {

	void ServerRequestRemoveMapMarker(char ID); // Function Squad.SQMapMarkerInputComponent.ServerRequestRemoveMapMarker // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x89b2a0
	void ServerRequestMapMarker(struct FSQMapMarkerGameplayData MarkerGameplayData); // Function Squad.SQMapMarkerInputComponent.ServerRequestMapMarker // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x89b1f0
	void RefreshMarkerWidgets(); // Function Squad.SQMapMarkerInputComponent.RefreshMarkerWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x89b100
};

// Class Squad.SQMapMarkerManagerComponent
// Size: 0x490 (Inherited: 0xd8)
struct USQMapMarkerManagerComponent : UActorComponent {
	struct FSQStaticMapMarkerArray MarkerArray; // 0xd8(0x148)
	struct FScriptMulticastDelegate MapMarkerWidgetCreatedEvent; // 0x220(0x10)
	struct USQMapWidgetBase* RootWidget; // 0x230(0x08)
	struct ASQHUD* RootHUD; // 0x238(0x08)
	int COMarkerTypeLimits[0x8]; // 0x240(0x20)
	int SLMarkerTypeLimits[0x8]; // 0x260(0x20)
	int FTMarkerTypeLimits[0x8]; // 0x280(0x20)
	float WidgetScale; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct TMap<char, struct USQMapMarkerBase*> RelevantMarkerWidgets; // 0x2a8(0x50)
	struct TMap<char, struct FSQMapMarkerVisualData> RelevantMarkers; // 0x2f8(0x50)
	char pad_348[0x58]; // 0x348(0x58)
	struct TArray<struct APawn*> AdminTypes; // 0x3a0(0x10)
	char pad_3B0[0xe0]; // 0x3b0(0xe0)

	void SetRootWidget(struct USQMapWidgetBase* NewRootWidget); // Function Squad.SQMapMarkerManagerComponent.SetRootWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x89b650
	void SetRootHUD(struct ASQHUD* NewRootHUD); // Function Squad.SQMapMarkerManagerComponent.SetRootHUD // (Final|Native|Public) // @ game+0x89b5d0
	void SetMarkerWidgetScale(float ScaleValue); // Function Squad.SQMapMarkerManagerComponent.SetMarkerWidgetScale // (Final|Native|Public|BlueprintCallable) // @ game+0x89b550
	void RemoveMapMarker(char ID, bool bHasTimedOut); // Function Squad.SQMapMarkerManagerComponent.RemoveMapMarker // (Final|Native|Public|BlueprintCallable) // @ game+0x89b120
	void OnSquadLeaderChangedEvent(struct ASQSquad* Squad, struct ASQPlayerController* Player); // Function Squad.SQMapMarkerManagerComponent.OnSquadLeaderChangedEvent // (Final|Native|Public) // @ game+0x89b040
	void OnSquadDeletedEvent(int OldSquadId, int TeamId); // Function Squad.SQMapMarkerManagerComponent.OnSquadDeletedEvent // (Final|Native|Public) // @ game+0x89af80
	void OnMarkerReceived(struct TArray<int>& MapMarkerModifiedIndices); // Function Squad.SQMapMarkerManagerComponent.OnMarkerReceived // (Final|Native|Public|HasOutParms) // @ game+0x89aed0
	void OnMarkerDeleted(struct TArray<int>& MapMarkerModifiedIndices); // Function Squad.SQMapMarkerManagerComponent.OnMarkerDeleted // (Final|Native|Public|HasOutParms) // @ game+0x89ae20
	void OnFireteamLeaderChangedEvent(struct ASQSquad* Squad, int FireTeamId); // Function Squad.SQMapMarkerManagerComponent.OnFireteamLeaderChangedEvent // (Final|Native|Public) // @ game+0x89ad60
	void OnFireteamDeletedEvent(struct ASQSquad* Squad, int FireTeamId); // Function Squad.SQMapMarkerManagerComponent.OnFireteamDeletedEvent // (Final|Native|Public) // @ game+0x89aca0
	void OnCommanderPromotedEvent(struct ASQPlayerState* NewCommander); // Function Squad.SQMapMarkerManagerComponent.OnCommanderPromotedEvent // (Final|Native|Public) // @ game+0x89ac20
	void OnCommanderDemotedEvent(struct ASQPlayerState* OldCommander); // Function Squad.SQMapMarkerManagerComponent.OnCommanderDemotedEvent // (Final|Native|Public) // @ game+0x89aba0
	void InitializeRelevantMarkers(struct TArray<int>& MapMarkerModifiedIndices); // Function Squad.SQMapMarkerManagerComponent.InitializeRelevantMarkers // (Final|Native|Public|HasOutParms) // @ game+0x89aab0
	void FindMapMarkersByType(struct TArray<struct FSQMapMarkerGameplayData>& OutMarkers, struct USQMapMarkerDataAsset* MarkerType); // Function Squad.SQMapMarkerManagerComponent.FindMapMarkersByType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x89a740
	void DeleteRelevantMarkers(struct TArray<int>& MapMarkerModifiedIndices); // Function Squad.SQMapMarkerManagerComponent.DeleteRelevantMarkers // (Final|Native|Public|HasOutParms) // @ game+0x89a690
};

// Class Squad.SQMapMK2
// Size: 0x2f0 (Inherited: 0x2c0)
struct USQMapMK2 : USQMap {
	struct USQGridMarkerBase* TopGrid; // 0x2c0(0x08)
	struct USQGridMarkerBase* BottomGrid; // 0x2c8(0x08)
	struct USQGridMarkerBase* LeftGrid; // 0x2d0(0x08)
	struct USQGridMarkerBase* RightGrid; // 0x2d8(0x08)
	struct UCanvasPanel* MapCanvas; // 0x2e0(0x08)
	struct UCanvasPanel* RootMapPanel; // 0x2e8(0x08)

	void UpdatePosition(struct FVector2D NewMapCoord); // Function Squad.SQMapMK2.UpdatePosition // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0x89b8a0
	void UpdateDrawOffsets(); // Function Squad.SQMapMK2.UpdateDrawOffsets // (Native|Public|BlueprintCallable) // @ game+0x89b7e0
	void MapFollowPlayer(); // Function Squad.SQMapMK2.MapFollowPlayer // (Native|Public|BlueprintCallable) // @ game+0x89ab80
	void MapCalculateOffsets(); // Function Squad.SQMapMK2.MapCalculateOffsets // (Native|Public|BlueprintCallable) // @ game+0x89ab60
};

// Class Squad.SQMapPawnIconWidget
// Size: 0x268 (Inherited: 0x250)
struct USQMapPawnIconWidget : USQMapIconWidget {
	bool bIsSL; // 0x250(0x01)
	bool bIsInSameSquad; // 0x251(0x01)
	bool bIsInSameTeam; // 0x252(0x01)
	char pad_253[0x5]; // 0x253(0x05)
	struct ASQTeamState* CurrentTeam; // 0x258(0x08)
	bool bIsSelf; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)

	void UpdateTeam(); // Function Squad.SQMapPawnIconWidget.UpdateTeam // (Native|Public|BlueprintCallable) // @ game+0x8573b0
	void UpdateIsSl(); // Function Squad.SQMapPawnIconWidget.UpdateIsSl // (Native|Public|BlueprintCallable) // @ game+0x829740
	void UpdateIsSelf(); // Function Squad.SQMapPawnIconWidget.UpdateIsSelf // (Native|Public|BlueprintCallable) // @ game+0x857390
	void UpdateIsInSameTeam(); // Function Squad.SQMapPawnIconWidget.UpdateIsInSameTeam // (Native|Public|BlueprintCallable) // @ game+0x829e60
	void UpdateIsInSameSquad(); // Function Squad.SQMapPawnIconWidget.UpdateIsInSameSquad // (Native|Public|BlueprintCallable) // @ game+0x829fd0
	struct ASQPlayerState* GetWidgetPlayerState(); // Function Squad.SQMapPawnIconWidget.GetWidgetPlayerState // (Native|Public|BlueprintCallable) // @ game+0x89aa50
};

// Class Squad.SQMapSoldierIconWidget
// Size: 0x278 (Inherited: 0x268)
struct USQMapSoldierIconWidget : USQMapPawnIconWidget {
	bool bIsSelfMedic; // 0x268(0x01)
	bool bIsWithinMedicRange; // 0x269(0x01)
	char pad_26A[0x2]; // 0x26a(0x02)
	float MedicRange; // 0x26c(0x04)
	bool bIsMedic; // 0x270(0x01)
	bool bIsAlive; // 0x271(0x01)
	bool bIsBleeding; // 0x272(0x01)
	bool bIsInVehicle; // 0x273(0x01)
	char pad_274[0x4]; // 0x274(0x04)

	void UpdateIsWithinMedicRange(); // Function Squad.SQMapSoldierIconWidget.UpdateIsWithinMedicRange // (Final|Native|Public|BlueprintCallable) // @ game+0x89b880
	void UpdateIsSelfMedic(); // Function Squad.SQMapSoldierIconWidget.UpdateIsSelfMedic // (Final|Native|Public|BlueprintCallable) // @ game+0x89b860
	void UpdateIsMedic(); // Function Squad.SQMapSoldierIconWidget.UpdateIsMedic // (Final|Native|Public|BlueprintCallable) // @ game+0x89b840
	void UpdateIsInVehicle(); // Function Squad.SQMapSoldierIconWidget.UpdateIsInVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
	void UpdateIsBleeding(); // Function Squad.SQMapSoldierIconWidget.UpdateIsBleeding // (Final|Native|Public|BlueprintCallable) // @ game+0x89b820
	void UpdateIsAlive(); // Function Squad.SQMapSoldierIconWidget.UpdateIsAlive // (Final|Native|Public|BlueprintCallable) // @ game+0x89b800
};

// Class Squad.SQMapTextComponent
// Size: 0x148 (Inherited: 0x130)
struct USQMapTextComponent : USQMapItemComponent {
	struct FText Text; // 0x130(0x18)
};

// Class Squad.SQMapVehicleIconWidget
// Size: 0x268 (Inherited: 0x268)
struct USQMapVehicleIconWidget : USQMapPawnIconWidget {
};

// Class Squad.SQMapWidget
// Size: 0x2a8 (Inherited: 0x270)
struct USQMapWidget : USQCoreStateMapWidget {
	float Angle; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct USQColorsDataAsset* ColorsDataAsset; // 0x278(0x08)
	bool bUseAngleEvent; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float AngleTolerance; // 0x284(0x04)
	float LocationTolerance; // 0x288(0x04)
	char pad_28C[0x1c]; // 0x28c(0x1c)

	void OnTintValueChanged(); // Function Squad.SQMapWidget.OnTintValueChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnAngleChanged(); // Function Squad.SQMapWidget.OnAngleChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	enum class ESQMapWidgetTint GetTintValue(); // Function Squad.SQMapWidget.GetTintValue // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89aa20
	struct FLinearColor GetTintColor(); // Function Squad.SQMapWidget.GetTintColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a9e0
};

// Class Squad.SQMapWidgetDeployable
// Size: 0x2b0 (Inherited: 0x2a8)
struct USQMapWidgetDeployable : USQMapWidget {
	enum class ESQBuildState BuildState; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)

	void OnBuildStateChanged(); // Function Squad.SQMapWidgetDeployable.OnBuildStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetAmmoCrate
// Size: 0x2b0 (Inherited: 0x2b0)
struct USQMapWidgetAmmoCrate : USQMapWidgetDeployable {
};

// Class Squad.SQMapWidgetBase
// Size: 0x260 (Inherited: 0x230)
struct USQMapWidgetBase : UUserWidget {
	struct UPanelWidget* MapBody; // 0x230(0x08)
	char pad_238[0x28]; // 0x238(0x28)

	void SetMapBody(struct UPanelWidget* NewMapBody); // Function Squad.SQMapWidgetBase.SetMapBody // (Final|Native|Public|BlueprintCallable) // @ game+0x89b3d0
	bool RemoveMarkerWidget(struct USQMapMarkerBase* Target); // Function Squad.SQMapWidgetBase.RemoveMarkerWidget // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct FBox2D GetWorldBounds(); // Function Squad.SQMapWidgetBase.GetWorldBounds // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x89aa80
	struct FVector2D GetNumGridLines(); // Function Squad.SQMapWidgetBase.GetNumGridLines // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a980
	struct FVector2D GetMapBoundsScale(); // Function Squad.SQMapWidgetBase.GetMapBoundsScale // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a8a0
	struct UPanelWidget* GetMapBody(); // Function Squad.SQMapWidgetBase.GetMapBody // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89a870
	struct USQMapMarkerBase* CreateMarkerWidget(struct FSQMapMarkerVisualData MapMarkerVisualData); // Function Squad.SQMapWidgetBase.CreateMarkerWidget // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetPawn
// Size: 0x2b8 (Inherited: 0x2a8)
struct USQMapWidgetPawn : USQMapWidget {
	char bIsOwned : 1; // 0x2a8(0x01)
	char bIsOwnedBySelf : 1; // 0x2a8(0x01)
	char bIsInSelfTeam : 1; // 0x2a8(0x01)
	char bIsInSelfSquad : 1; // 0x2a8(0x01)
	char pad_2A8_4 : 4; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	int FireTeamIndex; // 0x2ac(0x04)
	float CameraRotationYaw; // 0x2b0(0x04)
	float IsSelfZOrder; // 0x2b4(0x04)

	void OnIsOwnedChanged(); // Function Squad.SQMapWidgetPawn.OnIsOwnedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsOwnedBySelfChanged(); // Function Squad.SQMapWidgetPawn.OnIsOwnedBySelfChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsInSelfTeam(); // Function Squad.SQMapWidgetPawn.OnIsInSelfTeam // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsInSelfSquad(); // Function Squad.SQMapWidgetPawn.OnIsInSelfSquad // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFireTeamIndexChanged(); // Function Squad.SQMapWidgetPawn.OnFireTeamIndexChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCameraRotationYawChanged(); // Function Squad.SQMapWidgetPawn.OnCameraRotationYawChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetCameraman
// Size: 0x2b8 (Inherited: 0x2b8)
struct USQMapWidgetCameraman : USQMapWidgetPawn {
};

// Class Squad.SQMapWidgetCaptureZone
// Size: 0x328 (Inherited: 0x2a8)
struct USQMapWidgetCaptureZone : USQMapWidget {
	struct FText FlagName; // 0x2a8(0x18)
	struct UTexture2D* FlagTexture; // 0x2c0(0x28)
	struct UTexture2D* DefaultFlag; // 0x2e8(0x28)
	char bUncappable : 1; // 0x310(0x01)
	char pad_310_1 : 7; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	enum class ESQContestingState ContestingState; // 0x314(0x01)
	char OwningTeam; // 0x315(0x01)
	char CapturingTeam; // 0x316(0x01)
	char pad_317[0x1]; // 0x317(0x01)
	float CapturePercent; // 0x318(0x04)
	int CapturePercentDirection; // 0x31c(0x04)
	char TeamKnowledge; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)

	void OnUncappableChanged(); // Function Squad.SQMapWidgetCaptureZone.OnUncappableChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnTeamKnowledgeChanged(); // Function Squad.SQMapWidgetCaptureZone.OnTeamKnowledgeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnOwningTeamChanged(); // Function Squad.SQMapWidgetCaptureZone.OnOwningTeamChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFlagTextureChanged(); // Function Squad.SQMapWidgetCaptureZone.OnFlagTextureChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFlagNameChanged(); // Function Squad.SQMapWidgetCaptureZone.OnFlagNameChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnContestingChanged(); // Function Squad.SQMapWidgetCaptureZone.OnContestingChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCapturingTeamChanged(); // Function Squad.SQMapWidgetCaptureZone.OnCapturingTeamChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCapturePercentDirectionChanged(); // Function Squad.SQMapWidgetCaptureZone.OnCapturePercentDirectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCapturePercentChanged(); // Function Squad.SQMapWidgetCaptureZone.OnCapturePercentChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetDeployableExplosive
// Size: 0x2b8 (Inherited: 0x2b0)
struct USQMapWidgetDeployableExplosive : USQMapWidgetDeployable {
	enum class ESQExplosiveType ExplosiveType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)

	void OnExplosiveTypeChanged(); // Function Squad.SQMapWidgetDeployableExplosive.OnExplosiveTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetSQPawn
// Size: 0x2b8 (Inherited: 0x2b8)
struct USQMapWidgetSQPawn : USQMapWidgetPawn {
};

// Class Squad.SQMapWidgetVehicleSeat
// Size: 0x2b8 (Inherited: 0x2b8)
struct USQMapWidgetVehicleSeat : USQMapWidgetSQPawn {
};

// Class Squad.SQMapWidgetVehicle
// Size: 0x310 (Inherited: 0x2b8)
struct USQMapWidgetVehicle : USQMapWidgetVehicleSeat {
	struct UTexture2D* DefaultIcon; // 0x2b8(0x08)
	float DefaultIconRotation; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct USQVehicleUIStaticDataAsset* StaticUIData; // 0x2c8(0x08)
	bool bHoldsOccupant; // 0x2d0(0x01)
	bool bHoldsSquadLeader; // 0x2d1(0x01)
	bool bHoldsCommander; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	int ClaimingSquadID; // 0x2d4(0x04)
	char bIsInClaimingSquad : 1; // 0x2d8(0x01)
	char pad_2D8_1 : 7; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct TArray<struct FSQVehicleOccupantInfo> VehicleOccupants; // 0x2e0(0x10)
	int SelfInVehicleSeat; // 0x2f0(0x04)
	char pad_2F4[0x1c]; // 0x2f4(0x1c)

	void UpdateHoldsCommander(); // Function Squad.SQMapWidgetVehicle.UpdateHoldsCommander // (Final|Native|Protected|BlueprintCallable) // @ game+0x89fbe0
	void OnVehicleOccupantInfoChanged(int AtIndex); // Function Squad.SQMapWidgetVehicle.OnVehicleOccupantInfoChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnStaticUIDataChanged(); // Function Squad.SQMapWidgetVehicle.OnStaticUIDataChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSelfInVehicleSeatChanged(); // Function Squad.SQMapWidgetVehicle.OnSelfInVehicleSeatChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsInClaimingSquadChanged(); // Function Squad.SQMapWidgetVehicle.OnIsInClaimingSquadChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnHoldsSquadLeaderChanged(); // Function Squad.SQMapWidgetVehicle.OnHoldsSquadLeaderChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnHoldsOccupantChanged(); // Function Squad.SQMapWidgetVehicle.OnHoldsOccupantChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnHoldsCommanderChanged(); // Function Squad.SQMapWidgetVehicle.OnHoldsCommanderChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnClaimingSquadIDChanged(); // Function Squad.SQMapWidgetVehicle.OnClaimingSquadIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	bool IsSelfInVehicle(); // Function Squad.SQMapWidgetVehicle.IsSelfInVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89fa30
};

// Class Squad.SQMapWidgetEmplacement
// Size: 0x330 (Inherited: 0x310)
struct USQMapWidgetEmplacement : USQMapWidgetVehicle {
	int TeamId; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct TArray<struct APawn*> AdminTypes; // 0x318(0x10)
	char pad_328[0x8]; // 0x328(0x08)

	void OnTeamIDChanged(); // Function Squad.SQMapWidgetEmplacement.OnTeamIDChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetForwardBase
// Size: 0x2c8 (Inherited: 0x2b0)
struct USQMapWidgetForwardBase : USQMapWidgetDeployable {
	char bCanSpawn : 1; // 0x2b0(0x01)
	char bSieged : 1; // 0x2b0(0x01)
	char bIsBleeding : 1; // 0x2b0(0x01)
	char pad_2B0_3 : 5; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float MinActivatedTimeStamp; // 0x2b4(0x04)
	float ExclusionRadius; // 0x2b8(0x04)
	float ConstructionRadius; // 0x2bc(0x04)
	float AmmoPoints; // 0x2c0(0x04)
	float ConstructionPoints; // 0x2c4(0x04)

	void OnSiegedChanged(); // Function Squad.SQMapWidgetForwardBase.OnSiegedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnMinActivatedTimeStampChanged(); // Function Squad.SQMapWidgetForwardBase.OnMinActivatedTimeStampChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsBleedingChanged(); // Function Squad.SQMapWidgetForwardBase.OnIsBleedingChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnExclusionRadiusChanged(); // Function Squad.SQMapWidgetForwardBase.OnExclusionRadiusChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnConstructionRadiusChanged(); // Function Squad.SQMapWidgetForwardBase.OnConstructionRadiusChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnConstructionPointsChanged(); // Function Squad.SQMapWidgetForwardBase.OnConstructionPointsChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCanSpawnChanged(); // Function Squad.SQMapWidgetForwardBase.OnCanSpawnChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnAmmoPointsChanged(); // Function Squad.SQMapWidgetForwardBase.OnAmmoPointsChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetHAB
// Size: 0x2b8 (Inherited: 0x2b0)
struct USQMapWidgetHAB : USQMapWidgetDeployable {
	char bSpawningEnabled : 1; // 0x2b0(0x01)
	char bSieged : 1; // 0x2b0(0x01)
	char pad_2B0_2 : 6; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float ActivatedTimeStamp; // 0x2b4(0x04)

	void OnSpawningEnabledChanged(); // Function Squad.SQMapWidgetHAB.OnSpawningEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSiegedChanged(); // Function Squad.SQMapWidgetHAB.OnSiegedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnActivatedTimeStampChanged(); // Function Squad.SQMapWidgetHAB.OnActivatedTimeStampChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetMapMarker
// Size: 0x2c8 (Inherited: 0x2a8)
struct USQMapWidgetMapMarker : USQMapWidget {
	struct UTexture2D* Texture; // 0x2a8(0x08)
	struct FLinearColor Tint; // 0x2b0(0x10)
	int SquadId; // 0x2c0(0x04)
	int FireTeamId; // 0x2c4(0x04)

	void OnTintChanged(); // Function Squad.SQMapWidgetMapMarker.OnTintChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnTextureChanged(); // Function Squad.SQMapWidgetMapMarker.OnTextureChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSquadIdChanged(); // Function Squad.SQMapWidgetMapMarker.OnSquadIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFireteamIdChanged(); // Function Squad.SQMapWidgetMapMarker.OnFireteamIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetMapMarkerObjective
// Size: 0x2c8 (Inherited: 0x2c8)
struct USQMapWidgetMapMarkerObjective : USQMapWidgetMapMarker {
};

// Class Squad.SQMapWidgetMapMarkerSelectable
// Size: 0x2d0 (Inherited: 0x2c8)
struct USQMapWidgetMapMarkerSelectable : USQMapWidgetMapMarker {
	struct USQMapIconComponent* MapIcon; // 0x2c8(0x08)

	void OnRightClicked(); // Function Squad.SQMapWidgetMapMarkerSelectable.OnRightClicked // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetMapMarkerSpotted
// Size: 0x2d0 (Inherited: 0x2d0)
struct USQMapWidgetMapMarkerSpotted : USQMapWidgetMapMarkerSelectable {
};

// Class Squad.SQMapWidgetMapMarkerWaypoint
// Size: 0x2d0 (Inherited: 0x2d0)
struct USQMapWidgetMapMarkerWaypoint : USQMapWidgetMapMarkerSelectable {
};

// Class Squad.SQMapWidgetSpawnPoint
// Size: 0x2c8 (Inherited: 0x2a8)
struct USQMapWidgetSpawnPoint : USQMapWidget {
	bool bSpawnOnSingleClick; // 0x2a8(0x01)
	bool bSpawnOnDoubleClick; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	char bIsSelected : 1; // 0x2ac(0x01)
	char bSieged : 1; // 0x2ac(0x01)
	char bSpawningEnabled : 1; // 0x2ac(0x01)
	char pad_2AC_3 : 5; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float ActivatedTimeStamp; // 0x2b0(0x04)
	enum class ESQSpawnPointType SpawnPointType; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct ASQGameSpawn* OwningGameSpawn; // 0x2b8(0x08)
	char pad_2C0[0x8]; // 0x2c0(0x08)

	void OnSpawnPointTypeChanged(); // Function Squad.SQMapWidgetSpawnPoint.OnSpawnPointTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSpawningEnabledChanged(); // Function Squad.SQMapWidgetSpawnPoint.OnSpawningEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSiegedChanged(); // Function Squad.SQMapWidgetSpawnPoint.OnSiegedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsSelectedChanged(); // Function Squad.SQMapWidgetSpawnPoint.OnIsSelectedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnActivatedTimeStampChanged(); // Function Squad.SQMapWidgetSpawnPoint.OnActivatedTimeStampChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQMapWidgetRallyPoint
// Size: 0x2e0 (Inherited: 0x2c8)
struct USQMapWidgetRallyPoint : USQMapWidgetSpawnPoint {
	int NumberOfSpawns; // 0x2c8(0x04)
	int SquadId; // 0x2cc(0x04)
	char bIsInSelfSquad : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct ASQSquadState* SquadState; // 0x2d8(0x08)

	void OnSquadIdChanged(); // Function Squad.SQMapWidgetRallyPoint.OnSquadIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnNumberOfSpawnsChanged(); // Function Squad.SQMapWidgetRallyPoint.OnNumberOfSpawnsChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsInSelfSquadChanged(); // Function Squad.SQMapWidgetRallyPoint.OnIsInSelfSquadChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnEventSquadStateChanged(struct ASQSquadState* NewSquad, struct ASQSquadState* OldSquad, struct ASQPlayerState* Player); // Function Squad.SQMapWidgetRallyPoint.OnEventSquadStateChanged // (Final|Native|Protected) // @ game+0x89fa60
};

// Class Squad.SQMapWidgetRepairStation
// Size: 0x2b0 (Inherited: 0x2b0)
struct USQMapWidgetRepairStation : USQMapWidgetDeployable {
};

// Class Squad.SQMapWidgetSoldier
// Size: 0x320 (Inherited: 0x2b8)
struct USQMapWidgetSoldier : USQMapWidgetPawn {
	char bIsWounded : 1; // 0x2b8(0x01)
	char bIsBleeding : 1; // 0x2b8(0x01)
	char bIsAlive : 1; // 0x2b8(0x01)
	char bIsInVehicle : 1; // 0x2b8(0x01)
	char bIsUsingFreeLook : 1; // 0x2b8(0x01)
	char pad_2B8_5 : 3; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	enum class ESQAuthorityTypes LeaderState; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	int SquadId; // 0x2c0(0x04)
	int FireTeamId; // 0x2c4(0x04)
	char bIsMedic : 1; // 0x2c8(0x01)
	char bIsWithinCanSelfSeeHealthSatusRange : 1; // 0x2c8(0x01)
	char bCanSelfSeeHealthStatus : 1; // 0x2c8(0x01)
	char pad_2C8_3 : 5; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float HealthStatusRange; // 0x2cc(0x04)
	struct FVector SoldierLocation; // 0x2d0(0x0c)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct USQRoleSettings* CurrentRole; // 0x2e0(0x08)
	struct FSQSoldierInfo SoldierInfo; // 0x2e8(0x28)
	float SquadLeaderZOrder; // 0x310(0x04)
	float MedicZOrder; // 0x314(0x04)
	float VehicleViewConeZOrder; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)

	void OnSquadIdChanged(); // Function Squad.SQMapWidgetSoldier.OnSquadIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSoldierLocationChanged(); // Function Squad.SQMapWidgetSoldier.OnSoldierLocationChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnSoldierInfoChanged(); // Function Squad.SQMapWidgetSoldier.OnSoldierInfoChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnShowIncapChanged(); // Function Squad.SQMapWidgetSoldier.OnShowIncapChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnShowBleedingChanged(); // Function Squad.SQMapWidgetSoldier.OnShowBleedingChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnPlayerChangedRole(struct USQRoleSettings* NewRole); // Function Squad.SQMapWidgetSoldier.OnPlayerChangedRole // (Final|Native|Protected) // @ game+0x89fb60
	void OnLeaderStateChanged(); // Function Squad.SQMapWidgetSoldier.OnLeaderStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsWoundedChanged(); // Function Squad.SQMapWidgetSoldier.OnIsWoundedChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsWithinCanSelfSeeHealthSatusRangeChanged(); // Function Squad.SQMapWidgetSoldier.OnIsWithinCanSelfSeeHealthSatusRangeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsUsingFreeLookChanged(); // Function Squad.SQMapWidgetSoldier.OnIsUsingFreeLookChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsMedicChanged(); // Function Squad.SQMapWidgetSoldier.OnIsMedicChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsInVehicleChanged(); // Function Squad.SQMapWidgetSoldier.OnIsInVehicleChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsBleedingChanged(); // Function Squad.SQMapWidgetSoldier.OnIsBleedingChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnIsAliveChanged(); // Function Squad.SQMapWidgetSoldier.OnIsAliveChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnHealthStatusRangeChanged(); // Function Squad.SQMapWidgetSoldier.OnHealthStatusRangeChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnFireteamIdChanged(); // Function Squad.SQMapWidgetSoldier.OnFireteamIdChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCurrentRoleChanged(); // Function Squad.SQMapWidgetSoldier.OnCurrentRoleChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnCanSelfSeeHealthStatusChanged(); // Function Squad.SQMapWidgetSoldier.OnCanSelfSeeHealthStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	bool GetShowIncap(); // Function Squad.SQMapWidgetSoldier.GetShowIncap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89f9e0
	bool GetShowBleeding(); // Function Squad.SQMapWidgetSoldier.GetShowBleeding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x89f9b0
};

// Class Squad.SQMarker
// Size: 0x248 (Inherited: 0x248)
struct ASQMarker : AActor {
};

// Class Squad.SQMedicBag
// Size: 0x538 (Inherited: 0x4b0)
struct ASQMedicBag : ASQHealingEquipableItem {
	char pad_4B0[0x78]; // 0x4b0(0x78)
	struct USQMedicBagStaticInfo* MedicBagStaticInfo; // 0x528(0x08)
	struct FTimerHandle TimerHandle; // 0x530(0x08)

	void IncreaseHealth(); // Function Squad.SQMedicBag.IncreaseHealth // (Final|Native|Private) // @ game+0x89fa10
};

// Class Squad.SQMedicBagStaticInfo
// Size: 0x560 (Inherited: 0x528)
struct USQMedicBagStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* Healing1pBeginUseMontage; // 0x528(0x08)
	struct UAnimMontage* Healing3pBeginUseMontage; // 0x530(0x08)
	struct UAnimMontage* Healing1pEndUseMontage; // 0x538(0x08)
	struct UAnimMontage* Healing3pEndUseMontage; // 0x540(0x08)
	struct USoundCue* HealSelfSound; // 0x548(0x08)
	struct USoundCue* HealOtherSound; // 0x550(0x08)
	float HealingDelay; // 0x558(0x04)
	float HealingAmount; // 0x55c(0x04)
};

// Class Squad.SQMenuItemWidgetStyle
// Size: 0x1d0 (Inherited: 0x30)
struct USQMenuItemWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQMenuItemStyle MenuItemStyle; // 0x30(0x1a0)
};

// Class Squad.SQMenuSoundsWidgetStyle
// Size: 0x68 (Inherited: 0x30)
struct USQMenuSoundsWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQMenuSoundsStyle SoundsStyle; // 0x30(0x38)
};

// Class Squad.SQMenuWidgetStyle
// Size: 0x230 (Inherited: 0x30)
struct USQMenuWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQMenuStyle MenuStyle; // 0x30(0x200)
};

// Class Squad.SQMeshOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct USQMeshOwnerInterface : UInterface {
};

// Class Squad.SQMortarProjectile
// Size: 0x520 (Inherited: 0x490)
struct ASQMortarProjectile : ASQProjectile {
	char pad_490[0x10]; // 0x490(0x10)
	struct UParticleSystem* SmokeParticleEffect; // 0x4a0(0x08)
	struct USoundCue* SmokeSoundCue; // 0x4a8(0x08)
	struct FLinearColor SmokeColor; // 0x4b0(0x10)
	float NearGroundTriggerDistance; // 0x4c0(0x04)
	float MinFlightTime; // 0x4c4(0x04)
	bool bWatchFlightTime; // 0x4c8(0x01)
	bool bShouldDestroyByLifespan; // 0x4c9(0x01)
	char pad_4CA[0x6]; // 0x4ca(0x06)
	struct UObject* LastingEffectClass; // 0x4d0(0x08)
	struct FName SocketName; // 0x4d8(0x08)
	float ImpactDamageToApply; // 0x4e0(0x04)
	char pad_4E4[0x3c]; // 0x4e4(0x3c)

	void SpawnArtilleryProjectile(struct ASQMortarProjectile* ProjectileClass, struct AController* InstigatorController, struct AActor* ProjectileOwner, struct FVector& Location, struct FRotator& Rotation, float InitialVelocity, bool bCreatedOnServer); // Function Squad.SQMortarProjectile.SpawnArtilleryProjectile // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8a4350
	void CreateSmoke(); // Function Squad.SQMortarProjectile.CreateSmoke // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8a3160
	void BPOnNearGroundDistanceReached(); // Function Squad.SQMortarProjectile.BPOnNearGroundDistanceReached // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnBeginDescending(); // Function Squad.SQMortarProjectile.BPOnBeginDescending // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQVehicleViewWidget
// Size: 0x260 (Inherited: 0x230)
struct USQVehicleViewWidget : USQUserWidget {
	struct TArray<struct UImage*> ZoomImages; // 0x230(0x10)
	int CurrentZoomIndex; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct UCameraShake*> IgnoredShakeClasses; // 0x248(0x10)
	char pad_258[0x8]; // 0x258(0x08)

	void Unzoom(); // Function Squad.SQVehicleViewWidget.Unzoom // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8573b0
	void InitWidget(); // Function Squad.SQVehicleViewWidget.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
	void IncreaseZoomLevel(); // Function Squad.SQVehicleViewWidget.IncreaseZoomLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829740
	void DecreaseZoomLevel(); // Function Squad.SQVehicleViewWidget.DecreaseZoomLevel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
};

// Class Squad.SQMortarViewWidget
// Size: 0x260 (Inherited: 0x260)
struct USQMortarViewWidget : USQVehicleViewWidget {
};

// Class Squad.SQMovementAdjustmentComponent
// Size: 0x450 (Inherited: 0x440)
struct USQMovementAdjustmentComponent : UBoxComponent {
	float SoldierMovementSpeedMultiplayer; // 0x440(0x04)
	char pad_444[0xc]; // 0x444(0x0c)

	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQMovementAdjustmentComponent.OnEndOverlap // (Native|Public) // @ game+0x8a39c0
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQMovementAdjustmentComponent.OnBeginOverlap // (Native|Public|HasOutParms) // @ game+0x8a37d0
};

// Class Squad.SQMovementComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct USQMovementComponentInterface : UInterface {
};

// Class Squad.SQMovementComponentManager
// Size: 0x180 (Inherited: 0x160)
struct USQMovementComponentManager : UPawnMovementComponent {
	char pad_160[0x10]; // 0x160(0x10)
	struct TArray<struct USQMovementComponentBase*> ManagedMovementComponents; // 0x170(0x10)

	void UnRegisterComponent(struct USQMovementComponentBase* MovementComponent); // Function Squad.SQMovementComponentManager.UnRegisterComponent // (Native|Public|BlueprintCallable) // @ game+0x8a4570
	void RegisterComponent(struct USQMovementComponentBase* MovementComponent); // Function Squad.SQMovementComponentManager.RegisterComponent // (Native|Public|BlueprintCallable) // @ game+0x8a3b60
};

// Class Squad.SQMovementComponentNetworker
// Size: 0x108 (Inherited: 0xd8)
struct USQMovementComponentNetworker : UActorComponent {
	struct TArray<struct USQMovementComponentPacked*> NetworkedComponents; // 0xd8(0x10)
	struct TArray<struct FAdjustPositionAndRotationPacket> PendingClientAdjustPositionAndRotation; // 0xe8(0x10)
	struct TArray<struct FMovePacket> PendingServerMove; // 0xf8(0x10)

	void Server_ReplicateMoveToServer(struct TArray<struct FMovePacket> Payload); // Function Squad.SQMovementComponentNetworker.Server_ReplicateMoveToServer // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x8a4040
	void Client_ReplicateClientAdjustment(struct TArray<struct FAdjustPositionAndRotationPacket> Payload); // Function Squad.SQMovementComponentNetworker.Client_ReplicateClientAdjustment // (Net|Native|Event|Protected|NetClient) // @ game+0x8a30b0
};

// Class Squad.SQMovementComponentPacked
// Size: 0x1e0 (Inherited: 0x1c0)
struct USQMovementComponentPacked : USQMovementComponentBase {
	char pad_1C0[0x20]; // 0x1c0(0x20)

	void ClientAdjustRotation(float Timestamp, struct FRotator InRotation, struct FVector InRotationalVelocity); // Function Squad.SQMovementComponentPacked.ClientAdjustRotation // (Net|Native|Event|Protected|HasDefaults|NetClient) // @ game+0x8a2fb0
};

// Class Squad.SQNetworkPollingComponent
// Size: 0x118 (Inherited: 0xd8)
struct USQNetworkPollingComponent : UActorComponent {
	float RollingPacketLossTime; // 0xd8(0x04)
	float TimeoutForFullPacketLoss; // 0xdc(0x04)
	char pad_E0[0x38]; // 0xe0(0x38)

	float GetRollingPacketLossOutgoing(); // Function Squad.SQNetworkPollingComponent.GetRollingPacketLossOutgoing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3680
	float GetRollingPacketLossIncoming(); // Function Squad.SQNetworkPollingComponent.GetRollingPacketLossIncoming // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3650
};

// Class Squad.SQNoDeployZone
// Size: 0x278 (Inherited: 0x250)
struct ASQNoDeployZone : ATriggerBox {
	bool UseBlacklisting; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct TArray<struct ASQDeployable*> AllowedDeployableClasses; // 0x258(0x10)
	struct TArray<struct ASQDeployable*> DisallowedDeployableClasses; // 0x268(0x10)
};

// Class Squad.SQNotificationData
// Size: 0x240 (Inherited: 0x30)
struct USQNotificationData : UDataAsset {
	struct FSQNotificationLayout NotificationLayouts[0xb]; // 0x30(0x210)

	struct FSQNotificationLayout GetNotificationLayout(enum class ESQNotificationTypes NotificationType); // Function Squad.SQNotificationData.GetNotificationLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3320
};

// Class Squad.SQWheeledVehicleBase
// Size: 0xb00 (Inherited: 0xb00)
struct ASQWheeledVehicleBase : ASQGroundVehicle {
	float DamagedDampingRateMultiplier; // 0xaf8(0x04)
	float DampingRateMultiplier; // 0xafc(0x04)

	void DestroyWheel(struct USQDriveTrainComponent* DriveTrainComponent, bool bReverseDamage); // Function Squad.SQWheeledVehicleBase.DestroyWheel // (Final|Native|Protected|BlueprintCallable) // @ game+0x91f520
};

// Class Squad.SQNWheeledVehicle
// Size: 0xb00 (Inherited: 0xb00)
struct ASQNWheeledVehicle : ASQWheeledVehicleBase {
};

// Class Squad.SQNWheeledVehicleMovementComponent
// Size: 0x4a8 (Inherited: 0x450)
struct USQNWheeledVehicleMovementComponent : UWheeledVehicleMovementComponentNW {
	char pad_450[0x18]; // 0x450(0x18)
	struct TArray<int> WheelShaderCounts; // 0x468(0x10)
	bool bEnableTurboBoost; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	float MaxSpeedAllowedForEngineBoosting; // 0x47c(0x04)
	float MaxSpeedToAssistWheels; // 0x480(0x04)
	float WheelLongForceAssistMultiplier; // 0x484(0x04)
	float WheelTorqueAssistMultiplier; // 0x488(0x04)
	float MaxWheelRPMDuringWheelAssist; // 0x48c(0x04)
	char pad_490[0x18]; // 0x490(0x18)
};

// Class Squad.SQObjective
// Size: 0x340 (Inherited: 0x258)
struct ASQObjective : ASQTeamActor {
	char pad_258[0x48]; // 0x258(0x48)
	int TicketAdjustmentByObjectiveMeetingTeamUponObjectiveBeingMet; // 0x2a0(0x04)
	int TicketAdjustmentByOwningTeamUponObjectiveBeingMet; // 0x2a4(0x04)
	int TicketAdjustmentByOpposingTeamUponObjectiveBeingMet; // 0x2a8(0x04)
	bool bHasObjectiveBeenMet; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct FText ObjectiveMetOwningTeamMessage; // 0x2b0(0x18)
	struct FText ObjectiveMetOpposingTeamMessage; // 0x2c8(0x18)
	struct FText ObjectiveShownOwningTeamMessage; // 0x2e0(0x18)
	struct FText ObjectiveShownOpposingTeamMessage; // 0x2f8(0x18)
	bool bIsKnownToEveryone; // 0x310(0x01)
	bool bIsWaitingToBeShown; // 0x311(0x01)
	bool bHiddenUponSpawn; // 0x312(0x01)
	char pad_313[0x1]; // 0x313(0x01)
	struct FVector2D DistanceRangeForAttackMarker; // 0x314(0x08)
	struct FVector2D DistanceRangeForDefendMarker; // 0x31c(0x08)
	struct FVector TeamOneLocationZeroBased; // 0x324(0x0c)
	struct FVector TeamTwoLocationZeroBased; // 0x330(0x0c)
	enum class ESQTeam ObjectiveMetByTeam; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)

	void SetWaitingToBeShown(bool bInIsWaitingToBeShown); // Function Squad.SQObjective.SetWaitingToBeShown // (Native|Public|BlueprintCallable) // @ game+0x8a42c0
	void SetObjectiveMet(bool bObjectiveMet, enum class ESQTeam InTeam); // Function Squad.SQObjective.SetObjectiveMet // (Native|Public|BlueprintCallable) // @ game+0x8a41f0
	void SetKnownToEveryone(bool bInIsKnownToEveryone); // Function Squad.SQObjective.SetKnownToEveryone // (Native|Public|BlueprintCallable) // @ game+0x8a4160
	void OnRep_HasObjectiveBeenMet(); // Function Squad.SQObjective.OnRep_HasObjectiveBeenMet // (Final|Native|Protected) // @ game+0x8a3b00
	void OnMet(); // Function Squad.SQObjective.OnMet // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	bool IsWaitingToBeShown(); // Function Squad.SQObjective.IsWaitingToBeShown // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x8a37a0
	bool IsKnownToEveryone(); // Function Squad.SQObjective.IsKnownToEveryone // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x8a36e0
	bool HasObjectiveBeenMet(); // Function Squad.SQObjective.HasObjectiveBeenMet // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x8a36b0
	struct FText GetObjectiveShownMessage(struct ASQGameRuleSet* RuleSet, enum class ESQTeam InTeam); // Function Squad.SQObjective.GetObjectiveShownMessage // (Native|Event|Public|BlueprintEvent) // @ game+0x8a3520
	struct FText GetObjectiveMetMessage(struct ASQGameRuleSet* RuleSet, enum class ESQTeam InTeam); // Function Squad.SQObjective.GetObjectiveMetMessage // (Native|Event|Public|BlueprintEvent) // @ game+0x8a33f0
	enum class ESQTeam GetObjectiveMetByTeam(); // Function Squad.SQObjective.GetObjectiveMetByTeam // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a33c0
	struct FVector GetLocationForTeam(enum class ESQTeam InTeam); // Function Squad.SQObjective.GetLocationForTeam // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8a3280
};

// Class Squad.SQObjective_Destroyable
// Size: 0x430 (Inherited: 0x340)
struct ASQObjective_Destroyable : ASQObjective {
	char pad_340[0x8]; // 0x340(0x08)
	struct FText WorldText; // 0x348(0x18)
	struct FLinearColor WorldTextColor; // 0x360(0x10)
	struct FSQUsableData UsableData; // 0x370(0x40)
	bool bHasBeenDestroyed; // 0x3b0(0x01)
	char pad_3B1[0x3]; // 0x3b1(0x03)
	float Health; // 0x3b4(0x04)
	struct TArray<struct USQDamageType*> AllowableDamageTypes; // 0x3b8(0x10)
	struct UParticleSystem* DestroyedParticleEffect; // 0x3c8(0x08)
	struct USQShockwave* DestroyedShockwaveEffect; // 0x3d0(0x08)
	struct USoundCue* DestroyedSound; // 0x3d8(0x08)
	struct USoundCue* DestroyedDebrisSound; // 0x3e0(0x08)
	struct FSQDamageTypeEffects DamageEffects; // 0x3e8(0x28)
	struct ASQGameSpawn* SpawnClass; // 0x410(0x08)
	struct ASQGameSpawn* SpawnPoint; // 0x418(0x08)
	float SpawnLocationZOffset; // 0x420(0x04)
	char pad_424[0x4]; // 0x424(0x04)
	struct USQPhysicalMaterialEffects* DefaultEffectsClass; // 0x428(0x08)

	void OnRep_HasBeenDestroyed(); // Function Squad.SQObjective_Destroyable.OnRep_HasBeenDestroyed // (Final|Native|Protected) // @ game+0x8abb60
	void ObjectiveDestroyed(float damage, struct FDamageEvent& DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Squad.SQObjective_Destroyable.ObjectiveDestroyed // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x8ab5f0
	void MulticastPlayDamageEffects(struct UDamageType* DamageTypeClass); // Function Squad.SQObjective_Destroyable.MulticastPlayDamageEffects // (Net|Native|Event|NetMulticast|Protected) // @ game+0x8ab560
	void BPClientObjectiveDestroyed(); // Function Squad.SQObjective_Destroyable.BPClientObjectiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQObjectiveSpawnLocation
// Size: 0x248 (Inherited: 0x248)
struct ASQObjectiveSpawnLocation : AActor {
};

// Class Squad.SQOnlineHelpers
// Size: 0x28 (Inherited: 0x28)
struct USQOnlineHelpers : UObject {

	bool IsUserInSession(struct FSQBlueprintFriend& User, struct FBlueprintSessionResult& Session); // Function Squad.SQOnlineHelpers.IsUserInSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8ab380
	int GetUsersSessionIndex(struct FSQBlueprintFriend& User, struct TArray<struct FBlueprintSessionResult>& Sessions); // Function Squad.SQOnlineHelpers.GetUsersSessionIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8aaf80
	struct TArray<struct FSQBlueprintFriend> GetUsersInSession(struct TArray<struct FSQBlueprintFriend>& Results, struct FBlueprintSessionResult& Session); // Function Squad.SQOnlineHelpers.GetUsersInSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8aada0
};

// Class Squad.SQOptionsWidgetStyle
// Size: 0x68 (Inherited: 0x30)
struct USQOptionsWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQOptionsStyle OptionsStyle; // 0x30(0x38)
};

// Class Squad.SQOrderLines
// Size: 0x270 (Inherited: 0x250)
struct USQOrderLines : USQMapLattice {
	bool bShowTeamOrderLines; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float SelfSquadLineThickness; // 0x254(0x04)
	float OtherSquadLineThickness; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct USQMapMarkerManagerComponent* MapMarkerManagerComponent; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class Squad.SQPacketLossWidget
// Size: 0x260 (Inherited: 0x230)
struct USQPacketLossWidget : USQUserWidget {
	struct UImage* DisplayedImage; // 0x230(0x08)
	struct UTextBlock* DisplayedText; // 0x238(0x08)
	struct UMaterialInterface* PacketLossMaterial; // 0x240(0x08)
	float ShowIndicatorThreasholdFrac; // 0x248(0x04)
	char pad_24C[0xc]; // 0x24c(0x0c)
	struct UMaterialInstanceDynamic* PacketLossMID; // 0x258(0x08)
};

// Class Squad.SQPainCausingVolumeComponent
// Size: 0x470 (Inherited: 0x440)
struct USQPainCausingVolumeComponent : UBoxComponent {
	char bPainCausing : 1; // 0x440(0x01)
	char pad_440_1 : 7; // 0x440(0x01)
	char pad_441[0x3]; // 0x441(0x03)
	float DamagePerSec; // 0x444(0x04)
	struct UDamageType* DamageType; // 0x448(0x08)
	float PainInterval; // 0x450(0x04)
	char bEntryPain : 1; // 0x454(0x01)
	char pad_454_1 : 7; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct AController* DamageInstigator; // 0x458(0x08)
	char pad_460[0x10]; // 0x460(0x10)

	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQPainCausingVolumeComponent.OnBeginOverlap // (Native|Public|HasOutParms) // @ game+0x8ab790
};

// Class Squad.SQPassDamageInterface
// Size: 0x28 (Inherited: 0x28)
struct USQPassDamageInterface : UInterface {

	bool DoesPassDamage(); // Function Squad.SQPassDamageInterface.DoesPassDamage // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8aa9a0
};

// Class Squad.SQPawnInventoryComponent
// Size: 0x2e0 (Inherited: 0xd8)
struct USQPawnInventoryComponent : UActorComponent {
	struct FScriptMulticastDelegate EquippedNewItemEvent; // 0xd8(0x10)
	struct FScriptMulticastDelegate PlayAnimationEvent; // 0xe8(0x10)
	struct FScriptMulticastDelegate PauseAnimationEvent; // 0xf8(0x10)
	struct FScriptMulticastDelegate ResumeAnimationEvent; // 0x108(0x10)
	struct FScriptMulticastDelegate SetAnimationPlayRateEvent; // 0x118(0x10)
	struct FScriptMulticastDelegate EndLoopAnimationEvent; // 0x128(0x10)
	struct FScriptMulticastDelegate StopAnimationEvent; // 0x138(0x10)
	struct FScriptMulticastDelegate AmmoChangedEvent; // 0x148(0x10)
	struct USQItemStaticInfo* CurrentItemStaticInfo; // 0x158(0x08)
	struct USQItemStaticInfo* DefaultStaticInfoClass; // 0x160(0x08)
	struct ASQEquipableItem* CurrentWeapon; // 0x168(0x08)
	char pad_170[0x18]; // 0x170(0x18)
	bool bIsInteracting; // 0x188(0x01)
	bool bIsTimingOut; // 0x189(0x01)
	char pad_18A[0x2]; // 0x18a(0x02)
	float CurrentFadeOut; // 0x18c(0x04)
	float FadeoutDuration; // 0x190(0x04)
	float FadeoutDelay; // 0x194(0x04)
	char bClickInventoryToggle : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	int NextItemSlot; // 0x19c(0x04)
	int NextItemOffset; // 0x1a0(0x04)
	int CurrentWeaponSlot; // 0x1a4(0x04)
	int CurrentWeaponOffset; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct FSQWeaponGroupData> Inventory; // 0x1b0(0x10)
	struct FSQWeaponGroupDataArray RepInventory; // 0x1c0(0x118)
	struct ASQEquipableItem* PendingWeapon; // 0x2d8(0x08)

	void UpdateStaticItemInfo(struct USQItemStaticInfo* InfoObject); // Function Squad.SQPawnInventoryComponent.UpdateStaticItemInfo // (Native|Public|BlueprintCallable) // @ game+0x881bf0
	void UpdateInventorySwitch(int NewSlot, int NewOffset, bool bInteracting); // Function Squad.SQPawnInventoryComponent.UpdateInventorySwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x8ace50
	bool SwitchWeaponDirectly(int NewWeaponSlot, int NewWeaponOffset, bool bInstant); // Function Squad.SQPawnInventoryComponent.SwitchWeaponDirectly // (Final|Native|Public|BlueprintCallable) // @ game+0x8acd50
	bool SwitchWeapon(int NewItemSlot); // Function Squad.SQPawnInventoryComponent.SwitchWeapon // (Native|Public|BlueprintCallable) // @ game+0x8accb0
	bool SwitchItem(int ItemSlot); // Function Squad.SQPawnInventoryComponent.SwitchItem // (Final|Native|Public|BlueprintCallable) // @ game+0x8acc20
	void StopAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, float blendOutTime, bool bStopAllWeaponAnims); // Function Squad.SQPawnInventoryComponent.StopAnimationHandler // (Final|Native|Public) // @ game+0x8aca90
	struct ASQEquipableItem* SpawnEquipableItem(struct FSQInventoryData& ItemClass, bool bSpawnMaxAmmo, struct FSQPersistedAmmoCount& StartingAmmo); // Function Squad.SQPawnInventoryComponent.SpawnEquipableItem // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ac940
	void SetupStaticInfoBindings(struct ASQEquipableItem* Item); // Function Squad.SQPawnInventoryComponent.SetupStaticInfoBindings // (Final|Native|Protected) // @ game+0x8ac810
	void SetAnimationPlayRateHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, float NewPlayRate); // Function Squad.SQPawnInventoryComponent.SetAnimationPlayRateHandler // (Final|Native|Public) // @ game+0x8ac640
	void ServerSwitchWeapon2(struct ASQEquipableItem* NewWeapon); // Function Squad.SQPawnInventoryComponent.ServerSwitchWeapon2 // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8ac4e0
	void ServerSwitchWeapon(int NewWeaponSlot); // Function Squad.SQPawnInventoryComponent.ServerSwitchWeapon // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8ac590
	void ResumeAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQPawnInventoryComponent.ResumeAnimationHandler // (Final|Native|Public) // @ game+0x8ac3e0
	void ResetInventorySwitch(); // Function Squad.SQPawnInventoryComponent.ResetInventorySwitch // (Final|Native|Public|BlueprintCallable) // @ game+0x8ac3c0
	void ReplaceItemInInventory(int Slot, struct FSQInventoryData& ItemClass, int Offset); // Function Squad.SQPawnInventoryComponent.ReplaceItemInInventory // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ac2a0
	struct ASQEquipableItem* RemoveWithoutDestroyingItem(int Slot, int Offset); // Function Squad.SQPawnInventoryComponent.RemoveWithoutDestroyingItem // (Native|Public|BlueprintCallable) // @ game+0x8ac1d0
	void RemoveItemFromInventory(int Slot, int Offset); // Function Squad.SQPawnInventoryComponent.RemoveItemFromInventory // (Native|Public|BlueprintCallable) // @ game+0x8ac110
	void RemoveItemClassFromInventory(struct ASQEquipableItem* EquipableItemToRemove); // Function Squad.SQPawnInventoryComponent.RemoveItemClassFromInventory // (Native|Public|BlueprintCallable) // @ game+0x8ac080
	bool RemoveGroupFromInventory(int Slot); // Function Squad.SQPawnInventoryComponent.RemoveGroupFromInventory // (Native|Public|BlueprintCallable) // @ game+0x8abfe0
	void PlayAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQPawnInventoryComponent.PlayAnimationHandler // (Final|Native|Public) // @ game+0x8abd20
	void PauseAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage); // Function Squad.SQPawnInventoryComponent.PauseAnimationHandler // (Final|Native|Public) // @ game+0x8abc20
	void OnRep_RepInventory(); // Function Squad.SQPawnInventoryComponent.OnRep_RepInventory // (Native|Public) // @ game+0x829fd0
	void OnRep_PendingWeapon(struct ASQEquipableItem* PreviousPendingWeapon); // Function Squad.SQPawnInventoryComponent.OnRep_PendingWeapon // (Final|Native|Protected) // @ game+0x8abb80
	void OnPrevItem(); // Function Squad.SQPawnInventoryComponent.OnPrevItem // (Final|Native|Public|BlueprintCallable) // @ game+0x8abb40
	void OnPendingWeaponPawnOwnerChanged(struct APawn* NewPawnOwner); // Function Squad.SQPawnInventoryComponent.OnPendingWeaponPawnOwnerChanged // (Final|Native|Protected) // @ game+0x8abac0
	void OnNextItem(); // Function Squad.SQPawnInventoryComponent.OnNextItem // (Final|Native|Public|BlueprintCallable) // @ game+0x8ab980
	void OnAmmoChanged(); // Function Squad.SQPawnInventoryComponent.OnAmmoChanged // (Final|Native|Public) // @ game+0x8ab770
	struct ASQEquipableItem* InsertItemIntoInventory(int Slot, struct FSQInventoryData& ItemClass, int Offset, bool bSpawnMaxAmmo); // Function Squad.SQPawnInventoryComponent.InsertItemIntoInventory // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ab1f0
	bool InsertExistingItemIntoInventory(struct ASQEquipableItem* Item, int Slot, int Offset); // Function Squad.SQPawnInventoryComponent.InsertExistingItemIntoInventory // (Native|Public|BlueprintCallable) // @ game+0x8ab0e0
	struct TArray<struct FSQWeaponGroupData> GetInventoryItemGroups(); // Function Squad.SQPawnInventoryComponent.GetInventoryItemGroups // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8aad40
	struct ASQEquipableItem* FindValidWeaponInGroup(int WeaponSlot, int& WeaponOffset); // Function Squad.SQPawnInventoryComponent.FindValidWeaponInGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8aabf0
	struct ASQEquipableItem* FindValidWeaponByClass(struct ASQEquipableItem* WeaponClass); // Function Squad.SQPawnInventoryComponent.FindValidWeaponByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x8aab60
	void EndLoopAnimationHandler(struct UAnimMontage* WeaponMontage, struct UAnimMontage* Soldier1pMontage, struct UAnimMontage* Soldier3pMontage, struct FSQMontageSectionNames SectionNames); // Function Squad.SQPawnInventoryComponent.EndLoopAnimationHandler // (Final|Native|Public) // @ game+0x8aa9d0
	bool CalculateRearmCost(float& OutCost, struct TScriptInterface<Class>& RearmSource, struct TArray<struct FSQRearmWeaponRequest>& RearmRequest); // Function Squad.SQPawnInventoryComponent.CalculateRearmCost // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8aa6f0
	float CalculateMissingAmmoCost(); // Function Squad.SQPawnInventoryComponent.CalculateMissingAmmoCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8aa6c0
	int AddGroupToInventory(int Slot); // Function Squad.SQPawnInventoryComponent.AddGroupToInventory // (Native|Public|BlueprintCallable) // @ game+0x8aa620
};

// Class Squad.SQPerformanceCollectorSubsystem
// Size: 0x118 (Inherited: 0x30)
struct USQPerformanceCollectorSubsystem : UGameInstanceSubsystem {
	char pad_30[0x4]; // 0x30(0x04)
	float Deep_FrameSamplingFrequency; // 0x34(0x04)
	float Deep_PlayerSamplingFrequency; // 0x38(0x04)
	int Deep_RecordSize; // 0x3c(0x04)
	float FrameSamplingFrequency; // 0x40(0x04)
	float PlayerSamplingFrequency; // 0x44(0x04)
	int RecordSize; // 0x48(0x04)
	char pad_4C[0xcc]; // 0x4c(0xcc)
};

// Class Squad.SQPhysicalMaterial
// Size: 0x98 (Inherited: 0x80)
struct USQPhysicalMaterial : UPhysicalMaterial {
	bool bConsiderForPenetration; // 0x80(0x01)
	bool bAllowPenetration; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	float DamageAbsorbed; // 0x84(0x04)
	float ArmorDamageMultiplier; // 0x88(0x04)
	bool bDamageParentActor; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float WheelDampingRateMultiplier; // 0x90(0x04)
	int ArmorThicknessMillimeters; // 0x94(0x04)

	struct USQShockwave* GetShockwave(struct FSQProjectileImpactEffect& InImpactEffect, struct USQShockwave* DefaultShockwave); // Function Squad.SQPhysicalMaterial.GetShockwave // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8d50
	struct UParticleSystem* GetParticle(struct FSQProjectileImpactEffect& InImpactEffect, struct UParticleSystem* DefaultParticle); // Function Squad.SQPhysicalMaterial.GetParticle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ae0
	struct UMaterialInterface* GetDecal(struct FSQProjectileImpactEffect& InImpactEffect, struct UMaterialInterface* DefaultDecal); // Function Squad.SQPhysicalMaterial.GetDecal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8560
};

// Class Squad.SQPhysicalMaterialRedirectors
// Size: 0x80 (Inherited: 0x30)
struct USQPhysicalMaterialRedirectors : UDataAsset {
	struct TMap<struct USQPhysicalMaterial*, struct USQPhysicalMaterial*> Redirectors; // 0x30(0x50)

	struct USQPhysicalMaterial* GetRedirector(struct USQPhysicalMaterial* Key); // Function Squad.SQPhysicalMaterialRedirectors.GetRedirector // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8ca0
};

// Class Squad.SQPhysicalMaterialEffects
// Size: 0x80 (Inherited: 0x28)
struct USQPhysicalMaterialEffects : UObject {
	struct USQPhysicalMaterialRedirectors* Redirectors; // 0x28(0x08)
	struct TMap<struct USQPhysicalMaterial*, struct FSQEffectsSet> Effects; // 0x30(0x50)

	struct FSQProjectileImpactEffect GetThrowableEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialEffects.GetThrowableEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8f50
	struct FSQProjectileImpactEffect GetImpactEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialEffects.GetImpactEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8400
	struct FSQExplosionEffect GetExplosionEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialEffects.GetExplosionEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8930
	struct FSQEffectsSet GetEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialEffects.GetEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8700
	struct FSQProjectileImpactEffect GetBlastEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialEffects.GetBlastEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8400
};

// Class Squad.SQPhysicalMaterialVehiclesEffects
// Size: 0x118 (Inherited: 0x28)
struct USQPhysicalMaterialVehiclesEffects : UObject {
	struct USQPhysicalMaterialRedirectors* Redirectors; // 0x28(0x08)
	struct TMap<struct USQPhysicalMaterial*, struct FSQVehicleEffect> Effects; // 0x30(0x50)
	struct USQPhysicalMaterial* WaterEffectPhysMatOverride; // 0x80(0x08)
	struct FSQVehicleEffect WaterEffectOverride; // 0x88(0x90)

	struct FSQVehicleEffect GetEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialVehiclesEffects.GetEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8850
};

// Class Squad.SQPhysicalMaterialSoldiersEffects
// Size: 0xc0 (Inherited: 0x28)
struct USQPhysicalMaterialSoldiersEffects : UObject {
	struct USQPhysicalMaterialRedirectors* Redirectors; // 0x28(0x08)
	struct TMap<struct USQPhysicalMaterial*, struct FSQSoldierEffect> Effects; // 0x30(0x50)
	struct USQPhysicalMaterial* WaterEffectPhysMatOverride; // 0x80(0x08)
	struct FSQSoldierEffect WaterEffectOverride; // 0x88(0x38)

	struct FSQSoldierEffect GetEffect(struct USQPhysicalMaterial* Material); // Function Squad.SQPhysicalMaterialSoldiersEffects.GetEffect // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b87a0
};

// Class Squad.SQPhysicsVolume
// Size: 0x290 (Inherited: 0x290)
struct ASQPhysicsVolume : APhysicsVolume {

	void BPActorLeavingVolume(struct AActor* Other); // Function Squad.SQPhysicsVolume.BPActorLeavingVolume // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPActorEnteredVolume(struct AActor* Other); // Function Squad.SQPhysicsVolume.BPActorEnteredVolume // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQLocalCameraEffectHandler
// Size: 0x570 (Inherited: 0x28)
struct USQLocalCameraEffectHandler : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct FPostProcessSettings Effect; // 0x30(0x530)
	float BlendValue; // 0x560(0x04)
	char pad_564[0xc]; // 0x564(0x0c)

	void BP_SoldierChanged(struct ASQSoldier* NewSoldier); // Function Squad.SQLocalCameraEffectHandler.BP_SoldierChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_InitCameraEffect(struct ASQPlayerController* InPlayerController); // Function Squad.SQLocalCameraEffectHandler.BP_InitCameraEffect // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_ApplyCameraEffect(float DeltaTime, struct ASQSoldier* SoldierToApplyTo); // Function Squad.SQLocalCameraEffectHandler.BP_ApplyCameraEffect // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQLocalAudioEffectHandler
// Size: 0x28 (Inherited: 0x28)
struct USQLocalAudioEffectHandler : UObject {

	void BP_SoldierChanged(struct ASQSoldier* NewSoldier); // Function Squad.SQLocalAudioEffectHandler.BP_SoldierChanged // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQLocalAudioPlayer
// Size: 0x30 (Inherited: 0x28)
struct USQLocalAudioPlayer : USQLocalAudioEffectHandler {
	struct UAudioComponent* PlayingAudioComponent; // 0x28(0x08)

	void BP_UpdateAudioComponent(float DeltaTime, struct UAudioComponent* AudioComponent, struct ASQSoldier* SoldierToApplyTo); // Function Squad.SQLocalAudioPlayer.BP_UpdateAudioComponent // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_InitAudioEffect(struct UAudioComponent* AudioComponent); // Function Squad.SQLocalAudioPlayer.BP_InitAudioEffect // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQLocalAudioMix
// Size: 0x30 (Inherited: 0x28)
struct USQLocalAudioMix : USQLocalAudioEffectHandler {
	struct USoundMix* AudioEffect; // 0x28(0x08)

	bool BP_UpdateAudioMixing(float DeltaTime, struct ASQSoldier* SoldierToApplyTo); // Function Squad.SQLocalAudioMix.BP_UpdateAudioMixing // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BP_InitAudioEffect(struct ASQPlayerCameraManager* CameraManager); // Function Squad.SQLocalAudioMix.BP_InitAudioEffect // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQPlayerCameraManager
// Size: 0x2770 (Inherited: 0x2700)
struct ASQPlayerCameraManager : APlayerCameraManager {
	struct TArray<struct UCameraShake*> IgnoredShakeClasses; // 0x26f8(0x10)
	bool bDrawStencils; // 0x2708(0x01)
	bool bIgnoreInactiveEffects; // 0x2709(0x01)
	struct UMaterialInterface* StencilPostProcessMaterial; // 0x2710(0x08)
	struct TArray<struct USQLocalCameraEffectHandler*> CameraEffectTypes; // 0x2718(0x10)
	struct TArray<struct USQLocalCameraEffectHandler*> CameraEffects; // 0x2728(0x10)
	struct TArray<struct USQLocalAudioEffectHandler*> AudioEffectTypes; // 0x2738(0x10)
	struct TArray<struct USQLocalAudioEffectHandler*> AudioEffects; // 0x2748(0x10)
	struct ASQSoldier* CurrentSoldier; // 0x2758(0x08)
	char pad_2762[0xe]; // 0x2762(0x0e)

	void ModifyNearClipPlane(float NearClipPlaneDistance); // Function Squad.SQPlayerCameraManager.ModifyNearClipPlane // (Final|Native|Public|BlueprintCallable) // @ game+0x8b9760
	float GetNearClipPlane(); // Function Squad.SQPlayerCameraManager.GetNearClipPlane // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8a90
	float GetLastNearClipPlane(); // Function Squad.SQPlayerCameraManager.GetLastNearClipPlane // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b8a40
	void CalcScreenCenterRay(float Range, struct FVector& OutStart, struct FVector& OutEnd); // Function Squad.SQPlayerCameraManager.CalcScreenCenterRay // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8b5730
};

// Class Squad.SQPlayerController_Menu
// Size: 0xa70 (Inherited: 0xa70)
struct ASQPlayerController_Menu : ASQPlayerController {
};

// Class Squad.SQPlayerState
// Size: 0x7d8 (Inherited: 0x370)
struct ASQPlayerState : APlayerState {
	char pad_370[0x20]; // 0x370(0x20)
	struct FScriptMulticastDelegate OnSquadStateChangedEvent; // 0x390(0x10)
	bool bUseCustomPingReplicationRate; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float SecondsBetweenPingUpdate; // 0x3a4(0x04)
	char pad_3A8[0x4]; // 0x3a8(0x04)
	float TimeBetweenPlayerCacheChecking; // 0x3ac(0x04)
	char pad_3B0[0x28]; // 0x3b0(0x28)
	struct FScriptMulticastDelegate OnTeamStateChangedEvent; // 0x3d8(0x10)
	struct FScriptMulticastDelegate OnRoleChangedEvent; // 0x3e8(0x10)
	char pad_3F8[0x18]; // 0x3f8(0x18)
	struct TArray<struct ASQMapMarker*> RelevantMapMarkers; // 0x410(0x10)
	int TeamId; // 0x420(0x04)
	int LastTeamChangeTime; // 0x424(0x04)
	char pad_428[0x60]; // 0x428(0x60)
	struct TArray<struct ASQSoldier*> SoldiersOnScreenSortedByNearestDistanceCache; // 0x488(0x10)
	struct TArray<struct ASQSoldier*> SoldiersHaveLineOfSightCache; // 0x498(0x10)
	struct TArray<struct ASQSoldier*> EnemiesHaveLineOfSightCache; // 0x4a8(0x10)
	struct TArray<struct ASQSoldier*> FriendliesHaveLineOfSightCache; // 0x4b8(0x10)
	struct TArray<struct ASQSoldier*> AllSoldiersCache; // 0x4c8(0x10)
	struct TArray<struct ASQSoldier*> EnemiesCache; // 0x4d8(0x10)
	struct TArray<struct ASQSoldier*> FriendliesCache; // 0x4e8(0x10)
	struct TArray<struct ASQSoldier*> AllSoldiersSortedByNearestDistanceCache; // 0x4f8(0x10)
	struct TArray<struct APawn*> PawnsOnScreenSortedByNearestDistanceCache; // 0x508(0x10)
	struct TArray<struct APawn*> PawnsHaveLineOfSightCache; // 0x518(0x10)
	struct TArray<struct APawn*> EnemyPawnsHaveLineOfSightCache; // 0x528(0x10)
	struct TArray<struct APawn*> FriendlyPawnsHaveLineOfSightCache; // 0x538(0x10)
	struct TArray<struct APawn*> AllPawnsCache; // 0x548(0x10)
	struct TArray<struct APawn*> EnemyPawnsCache; // 0x558(0x10)
	struct TArray<struct APawn*> FriendlyPawnsCache; // 0x568(0x10)
	struct TArray<struct APawn*> AllPawnsSortedByNearestDistanceCache; // 0x578(0x10)
	struct TArray<struct USQVehicleClaim*> AuthorityVehicleClaimsNotExpired; // 0x588(0x10)
	struct FDeployableItemsArray PlacedDeployablesArray; // 0x598(0x118)
	struct FPlayerStateDataObject PlayerStateData; // 0x6b0(0x68)
	struct USQVehicleSeatComponent* CurrentSeat; // 0x718(0x08)
	struct ASQTeamState* TeamState; // 0x720(0x08)
	struct ASQSquadState* SquadState; // 0x728(0x08)
	struct ASQSoldier* Soldier; // 0x730(0x08)
	struct APawn* CurrentPawn; // 0x738(0x08)
	struct FName CurrentRoleId; // 0x740(0x08)
	struct FName DeployRoleId; // 0x748(0x08)
	struct USQRoleSettings* CurrentRole; // 0x750(0x08)
	struct USQRoleSettings* DeployRole; // 0x758(0x08)
	struct FSQPersistedAmmoState PersistedAmmoState; // 0x760(0x18)
	struct TMap<struct UObject*, struct UObject*> ReplacementClassesMap; // 0x778(0x50)
	char pad_7C8[0x8]; // 0x7c8(0x08)
	struct USQCoreStateComponent* StateObject; // 0x7d0(0x08)

	void UpdateContextVoiceSettings(struct ASQSquadState* Squad, struct ASQPlayerState* Player); // Function Squad.SQPlayerState.UpdateContextVoiceSettings // (Final|Native|Public) // @ game+0x8c8150
	void SetTeamWorkScore(float InTeamWorkScore); // Function Squad.SQPlayerState.SetTeamWorkScore // (Final|Native|Public|BlueprintCallable) // @ game+0x8c80d0
	void SetTeamState(struct ASQTeamState* NewTeamState); // Function Squad.SQPlayerState.SetTeamState // (Native|Public) // @ game+0x8c8040
	void SetSupporterPatch(struct UTexture* InSupporterPatch); // Function Squad.SQPlayerState.SetSupporterPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7fc0
	void SetSquadState(struct ASQSquadState* NewSquadState); // Function Squad.SQPlayerState.SetSquadState // (Native|Public) // @ game+0x8c7f30
	void SetSoldier(struct ASQSoldier* InSoldier); // Function Squad.SQPlayerState.SetSoldier // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7eb0
	void SetRevivedPoints(float InRevivedPoints); // Function Squad.SQPlayerState.SetRevivedPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7e30
	void SetPlayerNamePrefix(struct FString NewPlayerNamePrefix); // Function Squad.SQPlayerState.SetPlayerNamePrefix // (Native|Public|BlueprintCallable) // @ game+0x8c7d80
	void SetObjectiveScore(float InObjectiveScore); // Function Squad.SQPlayerState.SetObjectiveScore // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7d00
	void SetNumWounds(int InWounds); // Function Squad.SQPlayerState.SetNumWounds // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7c80
	void SetNumWounded(int InWounded); // Function Squad.SQPlayerState.SetNumWounded // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7c00
	void SetNumTeamKills(int InNumTeamkills); // Function Squad.SQPlayerState.SetNumTeamKills // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7b80
	void SetNumKills(int InNumKill); // Function Squad.SQPlayerState.SetNumKills // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7b00
	void SetNumDeaths(int InNumDeaths); // Function Squad.SQPlayerState.SetNumDeaths // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7a80
	void SetLives(int InLives); // Function Squad.SQPlayerState.SetLives // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7a00
	void SetIsQA(bool bInIsQA); // Function Squad.SQPlayerState.SetIsQA // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7970
	void SetIsMember(bool bInIsMember); // Function Squad.SQPlayerState.SetIsMember // (Final|Native|Public|BlueprintCallable) // @ game+0x8c78e0
	void SetIsDev(bool bInIsDev); // Function Squad.SQPlayerState.SetIsDev // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7850
	void SetIsAdmin(bool bInIsAdmin); // Function Squad.SQPlayerState.SetIsAdmin // (Final|Native|Public|BlueprintCallable) // @ game+0x8c77c0
	void SetHealPoints(float InHealPoints); // Function Squad.SQPlayerState.SetHealPoints // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7740
	void SetDeployRole(struct USQRoleSettings* InDeployRole); // Function Squad.SQPlayerState.SetDeployRole // (Final|Native|Public|BlueprintCallable) // @ game+0x8c76c0
	void SetCurrentSeat(struct USQVehicleSeatComponent* InCurrentSeat); // Function Squad.SQPlayerState.SetCurrentSeat // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7640
	void SetCurrentRole(struct USQRoleSettings* InCurrentRole); // Function Squad.SQPlayerState.SetCurrentRole // (Final|Native|Public|BlueprintCallable) // @ game+0x8c75c0
	void SetCurrentPawn(struct APawn* InPawn); // Function Squad.SQPlayerState.SetCurrentPawn // (Final|Native|Public|BlueprintCallable) // @ game+0x8c7540
	void SetClanPatch(struct UTexture* InClanPatch); // Function Squad.SQPlayerState.SetClanPatch // (Final|Native|Public|BlueprintCallable) // @ game+0x8c74c0
	void ServerSetPlayerNamePrefix(struct FString NewPlayerNamePrefix); // Function Squad.SQPlayerState.ServerSetPlayerNamePrefix // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8c73f0
	void ServerSendSerializedInventoryItems(struct TArray<char> SerializedData, struct TArray<int> ActiveClanMemberItems); // Function Squad.SQPlayerState.ServerSendSerializedInventoryItems // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8c72c0
	void ServerSendInventoryItemsEditor(struct TArray<int> Items, struct TArray<int> ActiveClanMemberItems); // Function Squad.SQPlayerState.ServerSendInventoryItemsEditor // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8c7190
	void ServerRequestTeamChange(int NewTeam); // Function Squad.SQPlayerState.ServerRequestTeamChange // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8c70d0
	void ServerOnImpact(uint64 ProjectileId, struct FVector NormalImpulse, struct FHitResult Hit); // Function Squad.SQPlayerState.ServerOnImpact // (Net|NetReliableNative|Event|Public|NetServer|HasDefaults|NetValidate) // @ game+0x8c6f50
	void ScorePointsDelayed(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQPlayerState.ScorePointsDelayed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8c6e20
	void ScorePoints(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQPlayerState.ScorePoints // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8c6cf0
	bool RemovedPlacedDeployableItemAt(int Index); // Function Squad.SQPlayerState.RemovedPlacedDeployableItemAt // (Final|Native|Public|BlueprintCallable) // @ game+0x8c6c60
	void OnRep_TeamState(struct ASQTeamState* OldTeamState); // Function Squad.SQPlayerState.OnRep_TeamState // (Native|Public) // @ game+0x8c6bd0
	void OnRep_SquadState(struct ASQSquadState* OldSquadState); // Function Squad.SQPlayerState.OnRep_SquadState // (Native|Public) // @ game+0x8c6b40
	void OnRep_PlayerNamePrefix(struct FString OldPlayerNamePrefix); // Function Squad.SQPlayerState.OnRep_PlayerNamePrefix // (Native|Public) // @ game+0x8c6a90
	void OnRep_FireTeamPosition(); // Function Squad.SQPlayerState.OnRep_FireTeamPosition // (Native|Public) // @ game+0x8c6a70
	void OnRep_FireTeamIndex(); // Function Squad.SQPlayerState.OnRep_FireTeamIndex // (Native|Public) // @ game+0x8c6a50
	void OnRep_DeployRole(); // Function Squad.SQPlayerState.OnRep_DeployRole // (Native|Public) // @ game+0x8c6a30
	void OnRep_CurrentSeat(struct USQVehicleSeatComponent* LastSeat); // Function Squad.SQPlayerState.OnRep_CurrentSeat // (Native|Public) // @ game+0x8c69a0
	void OnRep_CurrentRole(); // Function Squad.SQPlayerState.OnRep_CurrentRole // (Native|Public) // @ game+0x8c6980
	void OnRep_CurrentPawn(); // Function Squad.SQPlayerState.OnRep_CurrentPawn // (Native|Public) // @ game+0x8aa8e0
	void MulticastOnImpact(uint64 ProjectileId, struct FVector NormalImpulse, struct FHitResult Hit); // Function Squad.SQPlayerState.MulticastOnImpact // (Net|NetReliableNative|Event|NetMulticast|Public|HasDefaults) // @ game+0x8c6840
	bool IsSquadLeader(); // Function Squad.SQPlayerState.IsSquadLeader // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6810
	bool IsQA(); // Function Squad.SQPlayerState.IsQA // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c67e0
	bool IsMember(); // Function Squad.SQPlayerState.IsMember // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c67b0
	bool IsFireTeamLeader(); // Function Squad.SQPlayerState.IsFireTeamLeader // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6780
	bool IsDev(); // Function Squad.SQPlayerState.IsDev // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6750
	bool IsCommander(); // Function Squad.SQPlayerState.IsCommander // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6720
	bool IsAlive(); // Function Squad.SQPlayerState.IsAlive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c66f0
	bool IsAdmin(); // Function Squad.SQPlayerState.IsAdmin // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c66c0
	struct FUniqueNetIdRepl GetUniqueNetID(); // Function Squad.SQPlayerState.GetUniqueNetID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c65b0
	float GetTeamWorkScore(); // Function Squad.SQPlayerState.GetTeamWorkScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6580
	struct ASQTeamState* GetTeamState(); // Function Squad.SQPlayerState.GetTeamState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6550
	struct UTexture* GetSupporterPatch(); // Function Squad.SQPlayerState.GetSupporterPatch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6520
	struct ASQSquadState* GetSquadState(); // Function Squad.SQPlayerState.GetSquadState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c64f0
	struct ASQSoldier* GetSoldier(); // Function Squad.SQPlayerState.GetSoldier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c64c0
	struct FString GetShortPlayerName(); // Function Squad.SQPlayerState.GetShortPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6430
	float GetRevivedPoints(); // Function Squad.SQPlayerState.GetRevivedPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6400
	struct FString GetPlayerOnlineID(); // Function Squad.SQPlayerState.GetPlayerOnlineID // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8c6370
	struct FString GetPlayerNamePrefix(); // Function Squad.SQPlayerState.GetPlayerNamePrefix // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6330
	int GetPlacedDeployableItemsCount(); // Function Squad.SQPlayerState.GetPlacedDeployableItemsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6300
	struct ASQDeployable* GetPlacedDeployableAt(int Index); // Function Squad.SQPlayerState.GetPlacedDeployableAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6270
	float GetObjectiveScore(); // Function Squad.SQPlayerState.GetObjectiveScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6240
	int GetNumWounds(); // Function Squad.SQPlayerState.GetNumWounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6210
	int GetNumWounded(); // Function Squad.SQPlayerState.GetNumWounded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c61e0
	int GetNumTeamKills(); // Function Squad.SQPlayerState.GetNumTeamKills // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c61b0
	int GetNumKills(); // Function Squad.SQPlayerState.GetNumKills // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6180
	int GetNumDeaths(); // Function Squad.SQPlayerState.GetNumDeaths // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6150
	int GetLives(); // Function Squad.SQPlayerState.GetLives // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c6090
	float GetHealPoints(); // Function Squad.SQPlayerState.GetHealPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5f90
	struct FString GetFullPlayerName(bool bReturnUnmodified); // Function Squad.SQPlayerState.GetFullPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5eb0
	int GetFireTeamPosition(); // Function Squad.SQPlayerState.GetFireTeamPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5e80
	int GetFireTeamIndex(); // Function Squad.SQPlayerState.GetFireTeamIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5e50
	struct USQRoleSettings* GetDeployRole(); // Function Squad.SQPlayerState.GetDeployRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5d30
	struct ASQVehicle* GetCurrentVehicle(); // Function Squad.SQPlayerState.GetCurrentVehicle // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5d00
	struct ASQVehicleSeat* GetCurrentSeatPawn(); // Function Squad.SQPlayerState.GetCurrentSeatPawn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5cd0
	struct USQVehicleSeatComponent* GetCurrentSeat(); // Function Squad.SQPlayerState.GetCurrentSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5ca0
	struct USQRoleSettings* GetCurrentRole(); // Function Squad.SQPlayerState.GetCurrentRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5c70
	struct APawn* GetCurrentPawn(); // Function Squad.SQPlayerState.GetCurrentPawn // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5c40
	struct UTexture* GetClanPatch(); // Function Squad.SQPlayerState.GetClanPatch // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8c5c10
	void BPOnRep_PlayerNamePrefix(struct FString OldPlayerNamePrefix, struct FString NewPlayerNamePrefix); // Function Squad.SQPlayerState.BPOnRep_PlayerNamePrefix // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void AddPlacedDeployableItem(struct ASQDeployable* Deployable); // Function Squad.SQPlayerState.AddPlacedDeployableItem // (Final|Native|Public|BlueprintCallable) // @ game+0x8c5b90
};

// Class Squad.SQProgressWidget
// Size: 0x250 (Inherited: 0x230)
struct USQProgressWidget : USQUserWidget {
	float TimerDuration; // 0x230(0x04)
	float TimerEnd; // 0x234(0x04)
	bool bTimerActive; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float TimeRemaining; // 0x23c(0x04)
	struct FScriptMulticastDelegate OnTimerReached; // 0x240(0x10)

	void ToggleTimer(); // Function Squad.SQProgressWidget.ToggleTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc970
	void StartTimer(); // Function Squad.SQProgressWidget.StartTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc910
	void ResumeTimerFromTime(float TimerStartedAt); // Function Squad.SQProgressWidget.ResumeTimerFromTime // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc760
	void ResumeTimer(); // Function Squad.SQProgressWidget.ResumeTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc740
	void PauseTimer(); // Function Squad.SQProgressWidget.PauseTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc5c0
	void CancelTimer(); // Function Squad.SQProgressWidget.CancelTimer // (Final|Native|Public|BlueprintCallable) // @ game+0x8cb560
	void BPOnTimerStarted(); // Function Squad.SQProgressWidget.BPOnTimerStarted // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnTimerResumed(); // Function Squad.SQProgressWidget.BPOnTimerResumed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnTimerReached(); // Function Squad.SQProgressWidget.BPOnTimerReached // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnTimerProgress(float RemainingPct); // Function Squad.SQProgressWidget.BPOnTimerProgress // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnTimerPaused(); // Function Squad.SQProgressWidget.BPOnTimerPaused // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnTimerCanceled(); // Function Squad.SQProgressWidget.BPOnTimerCanceled // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQProjectileHitValidator
// Size: 0x28 (Inherited: 0x28)
struct USQProjectileHitValidator : UInterface {

	bool HasValidProjectileOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQProjectileHitValidator.HasValidProjectileOverlap // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cb8c0
	bool HasValidProjectileHit(struct AActor* ProjectileOwner, struct FHitResult& InHit); // Function Squad.SQProjectileHitValidator.HasValidProjectileHit // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cb7b0
	float GetActorImmersionDepth(struct AActor* QueryingActor); // Function Squad.SQProjectileHitValidator.GetActorImmersionDepth // (Native|Event|Public|BlueprintEvent) // @ game+0x8cb5c0
};

// Class Squad.SQProjectileMovement
// Size: 0x200 (Inherited: 0x1e0)
struct USQProjectileMovement : UProjectileMovementComponent {
	struct FVector ConstantAcceleration; // 0x1e0(0x0c)
	float ConstantAccelerationTimeout; // 0x1ec(0x04)
	bool bIgnoreGravityDuringConstantAcceleration; // 0x1f0(0x01)
	bool bIgnoreGravity; // 0x1f1(0x01)
	char pad_1F2[0xe]; // 0x1f2(0x0e)

	void SetFlightToPosition(struct FVector LookatPos, float AngularSpeed, float DeltaTime); // Function Squad.SQProjectileMovement.SetFlightToPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8cc7e0
};

// Class Squad.SQProjectileRootComponent
// Size: 0x440 (Inherited: 0x440)
struct USQProjectileRootComponent : USphereComponent {
};

// Class Squad.SQProjectileSpawnerComponent
// Size: 0x2d0 (Inherited: 0x220)
struct USQProjectileSpawnerComponent : USceneComponent {
	struct UClass* ProjectileClass; // 0x218(0x28)
	struct UClass* TracerProjectileClass; // 0x240(0x28)
	float MuzzleVelocity; // 0x268(0x04)
	float MaxDamageToApply; // 0x26c(0x04)
	bool bCreatedOnServerForDamage; // 0x270(0x01)
	float TimeBetweenShots; // 0x274(0x04)
	int RoundsBetweenTracer; // 0x278(0x04)
	float ShotDeviation; // 0x27c(0x04)
	int ShotCounter; // 0x280(0x04)
	bool bIsFiring; // 0x284(0x01)
	struct FScriptMulticastDelegate OnFired; // 0x288(0x10)
	struct FScriptMulticastDelegate OnStartFiring; // 0x298(0x10)
	struct FScriptMulticastDelegate OnStopFiring; // 0x2a8(0x10)
	char pad_2BA[0x16]; // 0x2ba(0x16)

	void StopFiring(); // Function Squad.SQProjectileSpawnerComponent.StopFiring // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc930
	void StartFiring(); // Function Squad.SQProjectileSpawnerComponent.StartFiring // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc8f0
	void OnRep_IsFiring(bool OldValue); // Function Squad.SQProjectileSpawnerComponent.OnRep_IsFiring // (Final|Native|Private) // @ game+0x8cc530
	void OnProjectileOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQProjectileSpawnerComponent.OnProjectileOverlap // (Final|Native|Private|HasOutParms) // @ game+0x8cc340
	void OnProjectileImpact(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Squad.SQProjectileSpawnerComponent.OnProjectileImpact // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x8cc1a0
	void OnFireEvent__DelegateSignature(); // DelegateFunction Squad.SQProjectileSpawnerComponent.OnFireEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
};

// Class Squad.SQProtectionZone
// Size: 0x3a0 (Inherited: 0x248)
struct ASQProtectionZone : AActor {
	char pad_248[0x10]; // 0x248(0x10)
	struct UBoxComponent* DummyPresetCollisionCPP; // 0x258(0x08)
	float KillHostileInSeconds; // 0x260(0x04)
	char pad_264[0x2c]; // 0x264(0x2c)
	char TeamId; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FText DeployableDestroyedText; // 0x298(0x18)
	struct FText ProjectileDestroyedText; // 0x2b0(0x18)
	struct FText AccessDeniedText; // 0x2c8(0x18)
	struct FText EnemyProtectionZoneText; // 0x2e0(0x18)
	struct TMap<enum class ESQBuffTypes, float> BuffsToApplyOnFriendlies; // 0x2f8(0x50)
	struct TMap<enum class ESQBuffTypes, float> BuffsToApplyOnEnemies; // 0x348(0x50)
	bool bShouldDestroyProjectiles; // 0x398(0x01)
	bool bShouldDestroyDeployables; // 0x399(0x01)
	bool bShouldPushEnemiesOff; // 0x39a(0x01)
	bool bIsProtectionZone; // 0x39b(0x01)
	char pad_39C[0x4]; // 0x39c(0x04)

	void OnCompExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQProtectionZone.OnCompExit // (Final|Native|Protected) // @ game+0x8cbcd0
	void OnCompBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQProtectionZone.OnCompBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x8cbae0
	void CheckOverlap(); // Function Squad.SQProtectionZone.CheckOverlap // (Final|Native|Protected) // @ game+0x8cb580
};

// Class Squad.SQRadialButton
// Size: 0x2f8 (Inherited: 0x2e8)
struct USQRadialButton : USQBaseButton {
	enum class ESQRadialWidgetSizeEnum RadialWidgetSize; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float RadialWidgetAngle; // 0x2ec(0x04)
	struct USoundCue* MouseEnterSoundCue; // 0x2f0(0x08)

	void UpdateRadialAngle(float UpdatedAngle); // Function Squad.SQRadialButton.UpdateRadialAngle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8cc9f0
	void OnHoverEnd(); // Function Squad.SQRadialButton.OnHoverEnd // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x857390
	void OnHoverBegin(); // Function Squad.SQRadialButton.OnHoverBegin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829e60
};

// Class Squad.SQRadialIconButton
// Size: 0x410 (Inherited: 0x2f8)
struct USQRadialIconButton : USQRadialButton {
	struct FVector2D SmallOuterRimDistOffset; // 0x2f8(0x08)
	struct FVector2D MediumOuterRimDistOffset; // 0x300(0x08)
	struct FVector2D LargeOuterRimDistOffset; // 0x308(0x08)
	struct FVector2D SmallIconDistOffset; // 0x310(0x08)
	struct FVector2D MediumIconDistOffset; // 0x318(0x08)
	struct FVector2D LargeIconDistOffset; // 0x320(0x08)
	struct UImage* InnerHoverImage; // 0x328(0x08)
	struct UImage* IconImage; // 0x330(0x08)
	struct UImage* OuterRimImage; // 0x338(0x08)
	struct UTexture2D* IconImageTexture; // 0x340(0x08)
	struct FLinearColor IconImageActiveColor; // 0x348(0x10)
	struct FLinearColor IconImageInactiveColor; // 0x358(0x10)
	struct FLinearColor IconImageHoveredColor; // 0x368(0x10)
	struct FLinearColor IconImagePressedColor; // 0x378(0x10)
	struct UTexture2D* InnerHoverSmallImageTexture; // 0x388(0x08)
	struct UTexture2D* InnerHoverMediumImageTexture; // 0x390(0x08)
	struct UTexture2D* InnerHoverLargeImageTexture; // 0x398(0x08)
	struct FLinearColor InnerHoverInactiveColor; // 0x3a0(0x10)
	struct FLinearColor InnerHoverHoveredColor; // 0x3b0(0x10)
	struct FLinearColor InnerHoverPressedColor; // 0x3c0(0x10)
	struct UTexture2D* OuterRimSmallImageTexture; // 0x3d0(0x08)
	struct UTexture2D* OuterRimMediumImageTexture; // 0x3d8(0x08)
	struct UTexture2D* OuterRimLargeImageTexture; // 0x3e0(0x08)
	struct FLinearColor OuterRimActiveColor; // 0x3e8(0x10)
	struct FLinearColor OuterRimInactiveColor; // 0x3f8(0x10)
	float IconSize; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)

	void UpdateOuterRimImage(); // Function Squad.SQRadialIconButton.UpdateOuterRimImage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x856aa0
	void UpdateInnerHoverImage(); // Function Squad.SQRadialIconButton.UpdateInnerHoverImage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8cc9b0
	void UpdateIconImage(); // Function Squad.SQRadialIconButton.UpdateIconImage // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x857250
};

// Class Squad.SQRadialCenterRoleButton
// Size: 0x440 (Inherited: 0x410)
struct USQRadialCenterRoleButton : USQRadialIconButton {
	bool bIsUnavailable; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float Cost; // 0x414(0x04)
	struct UTextBlock* CostBlock; // 0x418(0x08)
	struct USQRoleSettings* ReferenceRole; // 0x420(0x08)
	struct TScriptInterface<Class> RearmSource; // 0x428(0x10)
	struct ASQPlayerController* OwnerPlayerController; // 0x438(0x08)
};

// Class Squad.SQRadialDeployableButton
// Size: 0x4c0 (Inherited: 0x410)
struct USQRadialDeployableButton : USQRadialIconButton {
	struct FLinearColor TextUnAvailableColor; // 0x410(0x10)
	struct FLinearColor TextAvailableColor; // 0x420(0x10)
	struct FLinearColor RimAvailableColor; // 0x430(0x10)
	struct FLinearColor RimUnAvailableColor; // 0x440(0x10)
	struct FLinearColor IconUnavailableColor; // 0x450(0x10)
	struct FLinearColor InnerHoverUnavailableColor; // 0x460(0x10)
	struct FSQAvailabilityState_Deployable RelatedDeployableState; // 0x470(0x50)

	void UpdateDetailText(); // Function Squad.SQRadialDeployableButton.UpdateDetailText // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc990
	bool IsAvailable(); // Function Squad.SQRadialDeployableButton.IsAvailable // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cbab0
	void GetDetailText(struct FText& DetailText); // Function Squad.SQRadialDeployableButton.GetDetailText // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cb6a0
};

// Class Squad.SQRadialIconToggleButton
// Size: 0x428 (Inherited: 0x410)
struct USQRadialIconToggleButton : USQRadialIconButton {
	bool bToggled; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	struct FLinearColor InnerHoverToggledColor; // 0x414(0x10)
	char pad_424[0x4]; // 0x424(0x04)

	void Toggle(); // Function Squad.SQRadialIconToggleButton.Toggle // (Final|Native|Public|BlueprintCallable) // @ game+0x8cc950
	void OnToggleChanged(); // Function Squad.SQRadialIconToggleButton.OnToggleChanged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQRadialRoleIconButton
// Size: 0x480 (Inherited: 0x410)
struct USQRadialRoleIconButton : USQRadialIconButton {
	bool bIsUnavailable; // 0x410(0x01)
	char pad_411[0x3]; // 0x411(0x03)
	float Cost; // 0x414(0x04)
	struct UTextBlock* CostBlock; // 0x418(0x08)
	struct FLinearColor RimAvailableColor; // 0x420(0x10)
	struct FLinearColor RimUnAvailableColor; // 0x430(0x10)
	struct FLinearColor IconUnavailableColor; // 0x440(0x10)
	struct FLinearColor InnerHoverUnavailableColor; // 0x450(0x10)
	struct USQRoleSettings* ReferenceRole; // 0x460(0x08)
	struct TScriptInterface<Class> RearmSource; // 0x468(0x10)
	struct ASQPlayerController* OwnerPlayerController; // 0x478(0x08)

	void UpdateLimit(); // Function Squad.SQRadialRoleIconButton.UpdateLimit // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8cc9d0
};

// Class Squad.SQRandomizer
// Size: 0x260 (Inherited: 0x248)
struct ASQRandomizer : AActor {
	struct USceneComponent* Root; // 0x248(0x08)
	int RandomSeed; // 0x250(0x04)
	char pad_254[0xc]; // 0x254(0x0c)

	void OnRep_RandomSeed(); // Function Squad.SQRandomizer.OnRep_RandomSeed // (Native|Protected) // @ game+0x85f3b0
	int BPRandRange(int Min, int Max); // Function Squad.SQRandomizer.BPRandRange // (Native|Protected|BlueprintCallable) // @ game+0x8cb490
	struct FLinearColor BPRandHSVColor(struct FLinearColor& BaseColor, bool bRandomizeHue, float MinHue, float MaxHue, bool bRandomizeSaturation, float MinSaturation, float MaxSaturation, bool bRandomizeValue, float MinValue, float MaxValue, bool bRandomizeAlpha, float MinAlpha, float MaxAlpha); // Function Squad.SQRandomizer.BPRandHSVColor // (Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8cb0d0
	struct FLinearColor BPRandColor(struct FLinearColor& BaseColor, bool bRandomizeRed, float MinRed, float MaxRed, bool bRandomizeGreen, float MinGreen, float MaxGreen, bool bRandomizeBlue, float MinBlue, float MaxBlue, bool bRandomizeAlpha, float MinAlpha, float MaxAlpha); // Function Squad.SQRandomizer.BPRandColor // (Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8cad10
	float BPFRandRange(float Min, float Max); // Function Squad.SQRandomizer.BPFRandRange // (Native|Protected|BlueprintCallable) // @ game+0x8cac30
	void BPBeginSeededPlay(); // Function Squad.SQRandomizer.BPBeginSeededPlay // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQRandomizer_SceneComponent
// Size: 0x260 (Inherited: 0x260)
struct ASQRandomizer_SceneComponent : ASQRandomizer {

	void ShowRandomComponent(); // Function Squad.SQRandomizer_SceneComponent.ShowRandomComponent // (Native|Public|BlueprintCallable) // @ game+0x87b8d0
	void DisableAllComponents(); // Function Squad.SQRandomizer_SceneComponent.DisableAllComponents // (Native|Public|BlueprintCallable) // @ game+0x87b7a0
};

// Class Squad.SQRandomizer_StaticMesh
// Size: 0x278 (Inherited: 0x260)
struct ASQRandomizer_StaticMesh : ASQRandomizer {
	struct UStaticMeshComponent* MeshComponent; // 0x260(0x08)
	struct TArray<struct UStaticMesh*> Meshes; // 0x268(0x10)

	void SetMesh(int Index); // Function Squad.SQRandomizer_StaticMesh.SetMesh // (Native|Public|BlueprintCallable) // @ game+0x8d1920
};

// Class Squad.SQRearmSource
// Size: 0x28 (Inherited: 0x28)
struct USQRearmSource : UInterface {

	bool UnbindEventToAmmoUpdated(DelegateProperty& Delegate); // Function Squad.SQRearmSource.UnbindEventToAmmoUpdated // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8d1df0
	enum class ESQRearmType GetRearmType(); // Function Squad.SQRearmSource.GetRearmType // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d09a0
	struct FString GetRearmSuccessString(); // Function Squad.SQRearmSource.GetRearmSuccessString // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d0910
	struct FString GetRearmNoAmmoString(); // Function Squad.SQRearmSource.GetRearmNoAmmoString // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d0880
	float GetAmmo(); // Function Squad.SQRearmSource.GetAmmo // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x885d70
	bool ConsumeAmmo(float AmmoRequired); // Function Squad.SQRearmSource.ConsumeAmmo // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d0170
	bool CanRearmWeapon(struct ASQEquipableItem* Weapon); // Function Squad.SQRearmSource.CanRearmWeapon // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cffb0
	bool CanRearmPawn(struct APawn* Rearmer); // Function Squad.SQRearmSource.CanRearmPawn // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cff10
	bool BindEventToAmmoUpdated(DelegateProperty& Delegate); // Function Squad.SQRearmSource.BindEventToAmmoUpdated // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8cfd50
};

// Class Squad.SQReconnectionCacheSubsystem
// Size: 0x50 (Inherited: 0x30)
struct USQReconnectionCacheSubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	float NonSeamlessReconnectionTimeout; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Squad.SQRepairEquipable
// Size: 0x498 (Inherited: 0x480)
struct ASQRepairEquipable : ASQEquipableItem {
	float TraceLengthCentimeters; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct ASQVehicle* RepairTarget; // 0x488(0x08)
	struct UAudioComponent* AudioComponent; // 0x490(0x08)

	void OnRep_RepairedTarget(struct ASQVehicle* PreviousRepairedTarget); // Function Squad.SQRepairEquipable.OnRep_RepairedTarget // (Final|Native|Protected) // @ game+0x8d1100
};

// Class Squad.SQRepairTool
// Size: 0x4b0 (Inherited: 0x498)
struct ASQRepairTool : ASQRepairEquipable {
	struct USQRepairToolStaticInfo* RepairToolStaticInfo; // 0x498(0x08)
	struct FTimerHandle TimerHandle; // 0x4a0(0x08)
	bool bUseHammer; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)

	void ServerStopRepairing(); // Function Squad.SQRepairTool.ServerStopRepairing // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8d18d0
	void ServerStartRepairing(struct ASQVehicle* RepairedVehicle); // Function Squad.SQRepairTool.ServerStartRepairing // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8d1810
};

// Class Squad.SQRepairToolStaticInfo
// Size: 0x598 (Inherited: 0x528)
struct USQRepairToolStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* RepairingWeaponBeginUseMontage; // 0x528(0x08)
	struct UAnimMontage* Repairing1pBeginUseMontage; // 0x530(0x08)
	struct UAnimMontage* Repairing3pBeginUseMontage; // 0x538(0x08)
	struct UAnimMontage* RepairingWeaponEndUseMontage; // 0x540(0x08)
	struct UAnimMontage* Repairing1pEndUseMontage; // 0x548(0x08)
	struct UAnimMontage* Repairing3pEndUseMontage; // 0x550(0x08)
	struct UAnimMontage* AltRepairingWeaponBeginUseMontage; // 0x558(0x08)
	struct UAnimMontage* AltRepairing1pBeginUseMontage; // 0x560(0x08)
	struct UAnimMontage* AltRepairing3pBeginUseMontage; // 0x568(0x08)
	struct UAnimMontage* AltRepairingWeaponEndUseMontage; // 0x570(0x08)
	struct UAnimMontage* AltRepairing1pEndUseMontage; // 0x578(0x08)
	struct UAnimMontage* AltRepairing3pEndUseMontage; // 0x580(0x08)
	struct USoundCue* RepairingSound; // 0x588(0x08)
	float RepairingInterval; // 0x590(0x04)
	float RepairAmount; // 0x594(0x04)
};

// Class Squad.SQReplaySubsystem
// Size: 0x78 (Inherited: 0x30)
struct USQReplaySubsystem : UGameInstanceSubsystem {
	struct FString DatedReplaySubDirectory; // 0x30(0x10)
	struct FString NamedReplaySubDirectory; // 0x40(0x10)
	bool bUseMultithreading; // 0x50(0x01)
	char pad_51[0x27]; // 0x51(0x27)

	void UpdateSubsystemSettings(); // Function Squad.SQReplaySubsystem.UpdateSubsystemSettings // (Native|Public|BlueprintCallable) // @ game+0x8d1ec0
	void StopRecordingReplay(); // Function Squad.SQReplaySubsystem.StopRecordingReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1b80
	bool StartRecordingNamedReplay(struct FString ReplayName); // Function Squad.SQReplaySubsystem.StartRecordingNamedReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1ad0
	bool StartRecordingDatedReplay(); // Function Squad.SQReplaySubsystem.StartRecordingDatedReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1aa0
	enum class ESQRenameReplayResponse RenameNamedReplay(struct FString ReplayName, struct FString NewReplayName); // Function Squad.SQReplaySubsystem.RenameNamedReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1710
	void PlayExistingReplay(struct FString ReplayToPlay, bool bIsNamedReplay); // Function Squad.SQReplaySubsystem.PlayExistingReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1460
	enum class ESQRenameReplayResponse NameDatedReplay(struct FString ReplayName, struct FString NewReplayName); // Function Squad.SQReplaySubsystem.NameDatedReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d0e40
	bool IsValidReplayPath(struct FString ReplayPath); // Function Squad.SQReplaySubsystem.IsValidReplayPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8d0d10
	void GetListOfNamedReplays(struct TArray<struct FString>& OutReplayPaths, bool bIncludePath, bool bIncludeExtension); // Function Squad.SQReplaySubsystem.GetListOfNamedReplays // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8d0710
	void GetListOfDatedReplays(struct TArray<struct FString>& OutReplayPaths, bool bIncludePath, bool bIncludeExtension); // Function Squad.SQReplaySubsystem.GetListOfDatedReplays // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8d05a0
	bool GetIsRecording(); // Function Squad.SQReplaySubsystem.GetIsRecording // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d0570
	bool DeleteReplay(struct FString ReplayPath, bool bIsNamedReplay); // Function Squad.SQReplaySubsystem.DeleteReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d0220
	bool CanRecordOnServer(); // Function Squad.SQReplaySubsystem.CanRecordOnServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d0050
};

// Class Squad.SQReplayObject
// Size: 0x80 (Inherited: 0x28)
struct USQReplayObject : UObject {
	struct FScriptMulticastDelegate RequestFullReload; // 0x28(0x10)
	struct FScriptMulticastDelegate RequestWidgetReload; // 0x38(0x10)
	struct FString ReplayPath; // 0x48(0x10)
	struct FString ReplayName; // 0x58(0x10)
	bool bIsNamedReplay; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FDateTime DateCreated; // 0x70(0x08)
	int64 SizeInBytes; // 0x78(0x08)

	enum class ESQRenameReplayResponse TryRenameReplay(struct FString NewName); // Function Squad.SQReplayObject.TryRenameReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1d40
	bool SetupReplayObject(struct FString ReplayFullPath, bool bCreateAsNamedReplay); // Function Squad.SQReplayObject.SetupReplayObject // (Final|Native|Public|BlueprintCallable) // @ game+0x8d19b0
	void PlayReplay(); // Function Squad.SQReplayObject.PlayReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d1550
	void DeleteReplay(); // Function Squad.SQReplayObject.DeleteReplay // (Final|Native|Public|BlueprintCallable) // @ game+0x8d0200
};

// Class Squad.SQReplicationGraph
// Size: 0x760 (Inherited: 0x4a0)
struct USQReplicationGraph : UReplicationGraph {
	struct TArray<struct UObject*> SpatializedClasses; // 0x498(0x10)
	struct TArray<struct UObject*> NonSpatializedChildClasses; // 0x4a8(0x10)
	struct TArray<struct UObject*> AlwaysRelevantClasses; // 0x4b8(0x10)
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4c8(0x08)
	struct UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x4d0(0x08)
	struct TMap<int, struct USQReplicationGraphNode_GridSpatialization2DEx*> TeamGridNodes; // 0x4d8(0x50)
	struct TMap<int, struct UReplicationGraphNode_ActorList*> TeamAlwaysRelevantNodes; // 0x528(0x50)
	struct TMap<struct FTeamSquadId, struct UReplicationGraphNode_ActorList*> TeamSquadsAlwaysRelevantNodes; // 0x578(0x50)
	char pad_5D0[0x190]; // 0x5d0(0x190)
};

// Class Squad.SQReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0x298 (Inherited: 0x50)
struct USQReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	char pad_50[0x228]; // 0x50(0x228)
	struct AActor* LastPawn; // 0x278(0x08)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0x280(0x10)
	char pad_290[0x8]; // 0x290(0x08)
};

// Class Squad.SQReplicationGraphNode_PlayerStateFrequencyLimiter
// Size: 0x80 (Inherited: 0x50)
struct USQReplicationGraphNode_PlayerStateFrequencyLimiter : UReplicationGraphNode {
	char pad_50[0x30]; // 0x50(0x30)
};

// Class Squad.SQReplicationGraphNode_GridSpatialization2DEx
// Size: 0x290 (Inherited: 0x230)
struct USQReplicationGraphNode_GridSpatialization2DEx : UReplicationGraphNode_GridSpatialization2D {
	char pad_230[0x10]; // 0x230(0x10)
	struct TSet<struct UNetReplicationGraphConnection*> AvoidCullingConnections; // 0x240(0x50)
};

// Class Squad.SQRestriction_Boolean
// Size: 0x58 (Inherited: 0x58)
struct USQRestriction_Boolean : USQRestriction {

	bool IsRestrictedForTeam(struct ASQTeam* InTeam); // Function Squad.SQRestriction_Boolean.IsRestrictedForTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8641d0
	bool IsRestrictedForPlayer(struct ASQPlayerController* InPlayer); // Function Squad.SQRestriction_Boolean.IsRestrictedForPlayer // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0b60
};

// Class Squad.SQRestriction_ActorsInRange
// Size: 0x70 (Inherited: 0x58)
struct USQRestriction_ActorsInRange : USQRestriction_Boolean {
	float Range; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct AActor* TargetActorClass; // 0x60(0x08)
	int TargetCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)

	bool IsRestrictedWithActorsInRange(struct ASQPlayerController* InPlayer, struct TArray<struct AActor*>& InActorsInRange); // Function Squad.SQRestriction_ActorsInRange.IsRestrictedWithActorsInRange // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0c00
	bool IsAuthorizedWithActorInRange(struct ASQPlayerController* InPlayer, struct AActor* InActorInRange); // Function Squad.SQRestriction_ActorsInRange.IsAuthorizedWithActorInRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0a90
};

// Class Squad.SQRestriction_Cost
// Size: 0x58 (Inherited: 0x58)
struct USQRestriction_Cost : USQRestriction {

	void RefundCostForTeam(struct ASQTeam* InTeam, int InPercentage); // Function Squad.SQRestriction_Cost.RefundCostForTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x8d1640
	void RefundCostForPlayer(struct ASQPlayerController* InPlayer, int InPercentage); // Function Squad.SQRestriction_Cost.RefundCostForPlayer // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x8d1570
	void PayCostForTeam(struct ASQTeam* InTeam); // Function Squad.SQRestriction_Cost.PayCostForTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x8d13d0
	void PayCostForPlayer(struct ASQPlayerController* InPlayer); // Function Squad.SQRestriction_Cost.PayCostForPlayer // (Native|Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x8d1340
	bool HasTeamBasedCost(); // Function Squad.SQRestriction_Cost.HasTeamBasedCost // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x831c40
	bool HasPlayerBasedCost(); // Function Squad.SQRestriction_Cost.HasPlayerBasedCost // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x831ac0
	bool CanTeamBuy(struct ASQTeam* InTeam, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQRestriction_Cost.CanTeamBuy // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0080
	bool CanPlayerBuy(struct ASQPlayerController* InPlayer, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQRestriction_Cost.CanPlayerBuy // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8cfe20
};

// Class Squad.SQRestriction_Count
// Size: 0x70 (Inherited: 0x58)
struct USQRestriction_Count : USQRestriction {
	int BaseAvailability; // 0x58(0x04)
	bool IsUniqueUsage; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct TArray<struct USQCountParameterBase*> Parameters; // 0x60(0x10)

	void OnTeamRemoveUsage(struct ASQTeam* InTeam, int& OutRemovedUsage); // Function Squad.SQRestriction_Count.OnTeamRemoveUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d1260
	void OnTeamAddUsage(struct ASQTeam* InTeam, int& OutAddedUsage); // Function Squad.SQRestriction_Count.OnTeamAddUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d1180
	void OnPlayerRemoveUsage(struct ASQPlayerController* InPlayer, int& OutRemovedUsage); // Function Squad.SQRestriction_Count.OnPlayerRemoveUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d1020
	void OnPlayerAddUsage(struct ASQPlayerController* InPlayer, int& OutAddedUsage); // Function Squad.SQRestriction_Count.OnPlayerAddUsage // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0f40
	void GetAvailabilityForTeam(struct ASQTeam* InTeam, int& OutAvailable, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQRestriction_Count.GetAvailabilityForTeam // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0440
	void GetAvailabilityForPlayer(struct ASQPlayerController* InPlayer, int& OutAvailable, struct FDataTableRowHandle& OutRestrictionReason); // Function Squad.SQRestriction_Count.GetAvailabilityForPlayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0310
};

// Class Squad.SQRestriction_Delay_Base
// Size: 0x58 (Inherited: 0x58)
struct USQRestriction_Delay_Base : USQRestriction {

	bool OnTeamRemoveUsage(struct ASQTeam* InTeam, struct FTimespan& OutNextAvailabilityDelay, struct FDataTableRowHandle& OutDelayReason); // Function Squad.SQRestriction_Delay_Base.OnTeamRemoveUsage // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5d00
	bool OnTeamAddUsage(struct ASQTeam* InTeam, struct FTimespan& OutNextAvailabilityDelay, struct FDataTableRowHandle& OutDelayReason); // Function Squad.SQRestriction_Delay_Base.OnTeamAddUsage // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5bc0
	bool OnPlayerRemoveUsage(struct ASQPlayerController* InPlayer, struct FTimespan& OutNextAvailabilityDelay, struct FDataTableRowHandle& OutDelayReason); // Function Squad.SQRestriction_Delay_Base.OnPlayerRemoveUsage // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5a60
	bool OnPlayerAddUsage(struct ASQPlayerController* InPlayer, struct FTimespan& OutNextAvailabilityDelay, struct FDataTableRowHandle& OutDelayReason); // Function Squad.SQRestriction_Delay_Base.OnPlayerAddUsage // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5920
	bool HasInitialDelay(struct ASQTeam* InTeam, struct FTimespan& OutInitialDelay, int& OutDelayedUsage, struct FDataTableRowHandle& OutDelayReason); // Function Squad.SQRestriction_Delay_Base.HasInitialDelay // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5560
	void GetDefaultDelay(struct FTimespan& OutDefaultDelay); // Function Squad.SQRestriction_Delay_Base.GetDefaultDelay // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5390
};

// Class Squad.SQRestriction_Delay
// Size: 0x78 (Inherited: 0x58)
struct USQRestriction_Delay : USQRestriction_Delay_Base {
	struct FTimespan InitialDelay; // 0x58(0x08)
	int NumberOfDelayedUsage; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FTimespan Delay; // 0x68(0x08)
	bool ApplyDelayOnAddUsage; // 0x70(0x01)
	bool ApplyDelayOnRemoveUsage; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// Class Squad.SQRestriction_DeployableInRange
// Size: 0xc8 (Inherited: 0x58)
struct USQRestriction_DeployableInRange : USQRestriction_Boolean {
	float Range; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSet<enum class ESQTeamRelationShip> TargetTeams; // 0x60(0x50)
	int TargetCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct TArray<enum class ESQBuildState> TargetBuildState; // 0xb8(0x10)

	bool IsRestrictedWithDeployablesInRange(struct ASQPlayerController* InPlayer, struct TArray<struct ASQDeployable*>& InDeployablesInRange); // Function Squad.SQRestriction_DeployableInRange.IsRestrictedWithDeployablesInRange // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0c00
	bool IsAuthorizedWithDeployableInRange(struct ASQPlayerController* InPlayer, struct ASQDeployable* InDeployableInRange); // Function Squad.SQRestriction_DeployableInRange.IsAuthorizedWithDeployableInRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0a90
};

// Class Squad.SQRestriction_FOBInRange
// Size: 0xc8 (Inherited: 0x58)
struct USQRestriction_FOBInRange : USQRestriction_Boolean {
	float Range; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString FobRadiusTableColumnName; // 0x60(0x10)
	struct TSet<enum class ESQTeamRelationShip> TargetTeams; // 0x70(0x50)
	int TargetCount; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	bool IsRestrictedWithFOBsInRange(struct ASQPlayerController* InPlayer, struct TArray<struct ASQForwardBase*>& InFOBsInRange); // Function Squad.SQRestriction_FOBInRange.IsRestrictedWithFOBsInRange // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5810
	bool IsAuthorizedWithFOBInRange(struct ASQPlayerController* InPlayer, struct ASQForwardBase* InFOBInRange); // Function Squad.SQRestriction_FOBInRange.IsAuthorizedWithFOBInRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5740
	float GetRange(struct USQLayer* Layer); // Function Squad.SQRestriction_FOBInRange.GetRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5420
};

// Class Squad.SQRestriction_PlayerInRange
// Size: 0xb8 (Inherited: 0x58)
struct USQRestriction_PlayerInRange : USQRestriction_Boolean {
	float Range; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSet<enum class ESQTeamRelationShip> TargetTeams; // 0x60(0x50)
	int TargetCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	bool IsRestrictedWithPlayersInRange(struct ASQPlayerController* InPlayer, struct TArray<struct ASQPlayerState*>& InPlayersInRange); // Function Squad.SQRestriction_PlayerInRange.IsRestrictedWithPlayersInRange // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0c00
	bool IsAuthorizedWithPlayerInRange(struct ASQPlayerController* InPlayer, struct ASQPlayerState* InPlayerInRange); // Function Squad.SQRestriction_PlayerInRange.IsAuthorizedWithPlayerInRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0a90
};

// Class Squad.SQRestriction_PlayerStatus
// Size: 0x68 (Inherited: 0x58)
struct USQRestriction_PlayerStatus : USQRestriction_Boolean {
	struct TArray<enum class ESQPlayerStatus> RequiredStatus; // 0x58(0x10)
};

// Class Squad.SQRestriction_VehicleInRange
// Size: 0xb8 (Inherited: 0x58)
struct USQRestriction_VehicleInRange : USQRestriction_Boolean {
	float Range; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TSet<enum class ESQTeamRelationShip> TargetTeams; // 0x60(0x50)
	int TargetCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)

	bool IsRestrictedWithVehiclesInRange(struct ASQPlayerController* InPlayer, struct TArray<struct ASQVehicle*>& InVehiclesInRange); // Function Squad.SQRestriction_VehicleInRange.IsRestrictedWithVehiclesInRange // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0c00
	bool IsAuthorizedWithVehicleInRange(struct ASQPlayerController* InPlayer, struct ASQVehicle* InVehicleInRange); // Function Squad.SQRestriction_VehicleInRange.IsAuthorizedWithVehicleInRange // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d0a90
};

// Class Squad.SQRichTextBlock
// Size: 0xc20 (Inherited: 0x108)
struct USQRichTextBlock : UWidget {
	struct FText Text; // 0x108(0x18)
	DelegateProperty TextDelegate; // 0x120(0x10)
	struct FSlateFontInfo Font; // 0x130(0x50)
	struct FLinearColor Color; // 0x180(0x10)
	struct FSlateFontInfo HyperlinkFont; // 0x190(0x50)
	struct FLinearColor HyperlinkColor; // 0x1e0(0x10)
	enum class ETextJustify Justification; // 0x1f0(0x01)
	bool AutoWrapText; // 0x1f1(0x01)
	char pad_1F2[0x2]; // 0x1f2(0x02)
	float WrapTextAt; // 0x1f4(0x04)
	struct FMargin Margin; // 0x1f8(0x10)
	float LineHeightPercentage; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FText TextWithMarkup; // 0x210(0x18)
	char pad_228[0x9f8]; // 0x228(0x9f8)
};

// Class Squad.SQRoleList
// Size: 0x2c8 (Inherited: 0x230)
struct USQRoleList : USQUserWidget {
	bool bCanRunTick; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct TArray<struct USQRoleListGroup*> RoleGroupWidgets; // 0x238(0x10)
	struct TArray<struct USQRoleListUnit*> RoleUnitWidgets; // 0x248(0x10)
	int GridColumns; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct ASQPlayerState* OwnerPlayerState; // 0x260(0x08)
	struct ASQPlayerController* OwnerController; // 0x268(0x08)
	struct TSet<struct FString> CachedRoles; // 0x270(0x50)
	struct USQRoleListUnit* RoleWidgetType; // 0x2c0(0x08)

	void InitWidget(); // Function Squad.SQRoleList.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x8d5700
	void DisableAllRoleTicks(); // Function Squad.SQRoleList.DisableAllRoleTicks // (Final|Native|Public|BlueprintCallable) // @ game+0x8d5330
};

// Class Squad.SQRoleListGroup
// Size: 0x260 (Inherited: 0x230)
struct USQRoleListGroup : USQUserWidget {
	enum class ESQRoleTypeEnum RoleType; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct FText GroupHeaderText; // 0x238(0x18)
	struct UCanvasPanel* GroupHeader; // 0x250(0x08)
	struct UUniformGridPanel* RoleGrid; // 0x258(0x08)

	void InitWidget(); // Function Squad.SQRoleListGroup.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
	struct FText GroupAvailabilityText(); // Function Squad.SQRoleListGroup.GroupAvailabilityText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d54c0
};

// Class Squad.SQRoleListUnit
// Size: 0x300 (Inherited: 0x230)
struct USQRoleListUnit : USQUserWidget {
	bool bCanTick; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct UCanvasPanel* SizeCanvas; // 0x238(0x08)
	struct UImage* MainBgImage; // 0x240(0x08)
	struct UImage* KitNameBgImage; // 0x248(0x08)
	struct UImage* KitIcon; // 0x250(0x08)
	struct UImage* SpecialIcon; // 0x258(0x08)
	struct UTextBlock* KitNameTextBlock; // 0x260(0x08)
	struct UTextBlock* KitCountTeamTextBlock; // 0x268(0x08)
	struct UTextBlock* KitCountTextBlock; // 0x270(0x08)
	struct UUserWidget* RoleToolTipWidgetClass; // 0x278(0x08)
	struct FLinearColor BgColorSelectedRole; // 0x280(0x10)
	struct FLinearColor BgColorNotAvaliable; // 0x290(0x10)
	struct FLinearColor BgColorNotSelectedRole; // 0x2a0(0x10)
	struct FLinearColor ColorKitIconAvailable; // 0x2b0(0x10)
	struct FLinearColor ColorKitIconUnavailable; // 0x2c0(0x10)
	struct UTexture2D* SquadLeaderAbilityIcon; // 0x2d0(0x08)
	struct UTexture2D* MedicAbilityIcon; // 0x2d8(0x08)
	struct USQRoleSettings* RoleReference; // 0x2e0(0x08)
	struct ASQPlayerController* OwnerPlayerController; // 0x2e8(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x2f0(0x08)
	struct USoundCue* MouseEnterSoundCue; // 0x2f8(0x08)

	void SelfTick(); // Function Squad.SQRoleListUnit.SelfTick // (Final|Native|Public|BlueprintCallable) // @ game+0x8d5e40
	void InitWidget(); // Function Squad.SQRoleListUnit.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x8d5720
};

// Class Squad.SQRoleSettings
// Size: 0x170 (Inherited: 0x58)
struct USQRoleSettings : USQSettings {
	struct TArray<struct FSQInventoryWeaponGroupData> Inventory; // 0x58(0x10)
	struct FName Role_Specifics_ActionName; // 0x68(0x08)
	struct FName Role_Specifics_ActionName1; // 0x70(0x08)
	struct UAnimMontage* SoldierMenuAnimMontage; // 0x78(0x08)
	bool bLeavingSquadChangesRole; // 0x80(0x01)
	bool bCanPlaceRallyPoint; // 0x81(0x01)
	bool bCanSeeHealthStatus; // 0x82(0x01)
	bool bIsLeader; // 0x83(0x01)
	bool bIsMedic; // 0x84(0x01)
	bool bIsRecruit; // 0x85(0x01)
	bool bCanBuild; // 0x86(0x01)
	char pad_87[0x1]; // 0x87(0x01)
	struct FText DisplayName; // 0x88(0x18)
	struct UTexture2D* UiIcon; // 0xa0(0x08)
	struct UTexture2D* SpecialWeaponIcon; // 0xa8(0x08)
	struct FText Role_Details; // 0xb0(0x18)
	struct FText Role_Specifics; // 0xc8(0x18)
	struct FSQRoleLimit DefaultLimit; // 0xe0(0x24)
	enum class ESQRoleTypeEnum RoleType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct UClass* SoldierClass; // 0x108(0x28)
	struct UClass* SoldierClassDesert; // 0x130(0x28)
	struct TArray<struct FSQInventoryWeaponGroupData> TestInventory; // 0x158(0x10)
	enum class ESQVehicleRoleAbility VehicleAbility; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)

	bool TryGetSoldierWithLayer(struct USQLayer* InLayer, struct UClass*& OutSoldier); // Function Squad.SQRoleSettings.TryGetSoldierWithLayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8d5e60
	bool IsSquadLeader(); // Function Squad.SQRoleSettings.IsSquadLeader // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool IsMedic(); // Function Squad.SQRoleSettings.IsMedic // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	void GetRoleDisplayName(struct FString& CurrentRoleDisplayName); // Function Squad.SQRoleSettings.GetRoleDisplayName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool CanSeeHealthStatus(); // Function Squad.SQRoleSettings.CanSeeHealthStatus // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool CanPlaceRallyPointWithMinimumTeamMate(); // Function Squad.SQRoleSettings.CanPlaceRallyPointWithMinimumTeamMate // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
	bool CanEnterSeat(struct USQVehicleSeatComponent* Seat); // Function Squad.SQRoleSettings.CanEnterSeat // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x12b8b50
};

// Class Squad.SQRotatingMovementComponent
// Size: 0x280 (Inherited: 0x1e0)
struct USQRotatingMovementComponent : USQMovementComponentPacked {
	struct USceneComponent* UpdatedComponent; // 0x1e0(0x08)
	float InputMultiplier; // 0x1e8(0x04)
	float ErrorTolerance; // 0x1ec(0x04)
	float AngularDeltaCombineThreshold; // 0x1f0(0x04)
	struct FSQRotationConstraints RotationConstraints; // 0x1f4(0x1c)
	char pad_210[0x30]; // 0x210(0x30)
	struct FSQRotationRepMovement RotationReplicatedMovement; // 0x240(0x40)

	void OnRep_RotationReplicatedMovement(); // Function Squad.SQRotatingMovementComponent.OnRep_RotationReplicatedMovement // (Native|Protected) // @ game+0x8d5ba0
	struct FRotator GetCurrentRotationVelocity(); // Function Squad.SQRotatingMovementComponent.GetCurrentRotationVelocity // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d5350
	void AddRotationInput(struct FRotator& InRotationInput); // Function Squad.SQRotatingMovementComponent.AddRotationInput // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8d52a0
};

// Class Squad.SQRotationMovementAudioComponent
// Size: 0x7a0 (Inherited: 0x730)
struct USQRotationMovementAudioComponent : UAudioComponent {
	struct USQMovementComponentBase* PitchMovementComponent; // 0x730(0x08)
	struct USQMovementComponentBase* YawMovementComponent; // 0x738(0x08)
	enum class ESQRotationMovementState RotationMovementState; // 0x740(0x01)
	char pad_741[0x7]; // 0x741(0x07)
	struct USoundBase* StartingSound; // 0x748(0x08)
	struct USoundBase* MovingSound; // 0x750(0x08)
	struct USoundBase* StoppingSound; // 0x758(0x08)
	float SlowIdleDuration; // 0x760(0x04)
	float SlowIdleTickInterval; // 0x764(0x04)
	float IdleFadeOutDuration; // 0x768(0x04)
	float StartingDuration; // 0x76c(0x04)
	float MovingToStoppingDuration; // 0x770(0x04)
	float StoppingDuration; // 0x774(0x04)
	char pad_778[0x28]; // 0x778(0x28)
};

// Class Squad.SQRotorSetup
// Size: 0xd0 (Inherited: 0x30)
struct USQRotorSetup : UDataAsset {
	struct FName RotorName; // 0x30(0x08)
	struct USQRotor* RotorClass; // 0x38(0x08)
	float Radius; // 0x40(0x04)
	float Mass; // 0x44(0x04)
	struct FVector ThrustAxis; // 0x48(0x0c)
	struct FVector ThrustVectoring; // 0x54(0x0c)
	float ThrustCoefficient; // 0x60(0x04)
	struct FName ThrustSocketName; // 0x64(0x08)
	float TorqueMultiplier; // 0x6c(0x04)
	float RotationalTorqueMultiplier; // 0x70(0x04)
	float ThrustMultiplier; // 0x74(0x04)
	struct FName AnimatedSocketName; // 0x78(0x08)
	float AnimationSpeedMultiplier; // 0x80(0x04)
	enum class ESQAxis AnimationAxis; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct UCurveFloat* StartupAcceleration; // 0x88(0x08)
	float StartupAccelerationFactor; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UCurveFloat* StoppingDeceleration; // 0x98(0x08)
	float StoppingDecelerationFactor; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UCurveFloat* NoInputDeceleration; // 0xa8(0x08)
	float DecelerationMultiplier; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UCurveFloat* InputAcceleration; // 0xb8(0x08)
	float InputFactor; // 0xc0(0x04)
	float MaxRPM; // 0xc4(0x04)
	float IdleRPM; // 0xc8(0x04)
	enum class ESQRotorType RotorType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class Squad.SQRotor
// Size: 0x60 (Inherited: 0x28)
struct USQRotor : UObject {
	struct USQRotorSetup* RotorSetup; // 0x28(0x08)
	char pad_30[0x28]; // 0x30(0x28)
	struct UObject* WorldContextObject; // 0x58(0x08)
};

// Class Squad.SQRotorBladesComponent
// Size: 0x660 (Inherited: 0x5a0)
struct USQRotorBladesComponent : USQVehicleComponent {
	struct UCameraShake* DestructionCameraShake; // 0x598(0x08)
	float DestructionShakeScale; // 0x5a0(0x04)
	float CollisionDestructionThrustThreshold; // 0x5a4(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x5a8(0x10)
	float DamagePerSec; // 0x5b8(0x04)
	bool bIsMainRotor; // 0x5bc(0x01)
	struct TArray<struct AActor*> IgnoredActors; // 0x5c0(0x10)
	char pad_5D5[0x6b]; // 0x5d5(0x6b)
	struct ASQHelicopter2* Owner; // 0x640(0x08)
	bool bInCollision; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UStaticMeshComponent* OverlapMesh; // 0x650(0x08)
	char pad_658[0x8]; // 0x658(0x08)

	bool TakeFatalDamage(); // Function Squad.SQRotorBladesComponent.TakeFatalDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x8d8800
	bool IsHealthy(); // Function Squad.SQRotorBladesComponent.IsHealthy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d8510
	void DamageRotor(); // Function Squad.SQRotorBladesComponent.DamageRotor // (Final|Native|Public|BlueprintCallable) // @ game+0x8d8330
};

// Class Squad.SQVehicleEngine
// Size: 0x5a0 (Inherited: 0x5a0)
struct USQVehicleEngine : USQVehicleComponent {
	struct UCurveFloat* HealthVsDamageCurve; // 0x598(0x08)

	bool IsEngineToggleActive(); // Function Squad.SQVehicleEngine.IsEngineToggleActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cd50
	bool IsEngineActive(); // Function Squad.SQVehicleEngine.IsEngineActive // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cd20
	float GetCurrentEngineToggleRequiredDuration(); // Function Squad.SQVehicleEngine.GetCurrentEngineToggleRequiredDuration // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cb20
	float GetCurrentEngineTogglePercentage(); // Function Squad.SQVehicleEngine.GetCurrentEngineTogglePercentage // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cae0
};

// Class Squad.SQVehicleEngineComponent
// Size: 0x690 (Inherited: 0x5a0)
struct USQVehicleEngineComponent : USQVehicleEngine {
	struct FScriptMulticastDelegate OnEngineActiveEvent; // 0x5a0(0x10)
	struct USoundCue* EngineStartSound; // 0x5b0(0x08)
	struct USoundCue* EngineCompletedStartSound; // 0x5b8(0x08)
	struct USoundCue* EngineFailedStartSound; // 0x5c0(0x08)
	struct USoundCue* EngineStopSound; // 0x5c8(0x08)
	struct USoundCue* EngineRPMSound; // 0x5d0(0x08)
	struct USoundCue* EngineExhaustSound; // 0x5d8(0x08)
	struct USoundCue* LandingSound; // 0x5e0(0x08)
	float EngineIdleFadeInAfterEngineStartTime; // 0x5e8(0x04)
	float EngineIdleFadeOutAfterEngineStopTime; // 0x5ec(0x04)
	float GearChangingAlphaLerpSpeed; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct TArray<struct FSQEngineMovementSoundObject> EngineMovementSounds; // 0x5f8(0x10)
	struct UAudioComponent* EngineExhaustStartAC; // 0x608(0x08)
	struct UAudioComponent* EngineRPMAC; // 0x610(0x08)
	struct UAudioComponent* EngineExhaustAC; // 0x618(0x08)
	struct UAudioComponent* EngineExhaustStopAC; // 0x620(0x08)
	struct UAudioComponent* EngineStartAC; // 0x628(0x08)
	struct UAudioComponent* EngineCompletedStartAC; // 0x630(0x08)
	struct UAudioComponent* EngineFailedStartAC; // 0x638(0x08)
	struct UAudioComponent* EngineStopAC; // 0x640(0x08)
	struct UAudioComponent* EngineSpeedAC; // 0x648(0x08)
	struct UParticleSystemComponent* ExhaustPSC; // 0x650(0x08)
	struct UCameraShake* EngineVibrationCameraShake; // 0x658(0x08)
	struct UCurveFloat* RPMToShakeScaleCurve; // 0x660(0x08)
	bool bIsEngineActive; // 0x668(0x01)
	bool bIsEngineToggleActive; // 0x669(0x01)
	char pad_66A[0x2]; // 0x66a(0x02)
	float ActivateEngineDelay; // 0x66c(0x04)
	float DeActivateEngineDelay; // 0x670(0x04)
	char pad_674[0xc]; // 0x674(0x0c)
	struct UCameraShake* VibrationCameraShake; // 0x680(0x08)
	struct APlayerCameraManager* VibrationCameraManager; // 0x688(0x08)

	void StopEngineImmediately(); // Function Squad.SQVehicleEngineComponent.StopEngineImmediately // (Final|Native|Public|BlueprintCallable) // @ game+0x90d770
	void ServerSetEngineToggleActiveInput(bool bInIsEngineToggleActive); // Function Squad.SQVehicleEngineComponent.ServerSetEngineToggleActiveInput // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x90d630
	void ServerSetEngineActiveInput(bool bNewEngineActive); // Function Squad.SQVehicleEngineComponent.ServerSetEngineActiveInput // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable|NetValidate) // @ game+0x90d570
	void OnRep_EngineToggleActive(); // Function Squad.SQVehicleEngineComponent.OnRep_EngineToggleActive // (Native|Protected) // @ game+0x8e31a0
	void OnRep_EngineActive(); // Function Squad.SQVehicleEngineComponent.OnRep_EngineActive // (Native|Protected) // @ game+0x90d410
	void OnPlayerExitedVehicleHandler(struct ASQVehicle* Vehicle, struct APlayerController* Player, int Seat); // Function Squad.SQVehicleEngineComponent.OnPlayerExitedVehicleHandler // (Final|Native|Protected) // @ game+0x90d310
	void OnPlayerEnteredVehicleHandler(struct ASQVehicle* Vehicle, struct APlayerController* Player, int Seat); // Function Squad.SQVehicleEngineComponent.OnPlayerEnteredVehicleHandler // (Final|Native|Protected) // @ game+0x90d210
};

// Class Squad.SQRotorComponent
// Size: 0x690 (Inherited: 0x690)
struct USQRotorComponent : USQVehicleEngineComponent {
};

// Class Squad.SQRotorVehicleMovementComponent
// Size: 0x300 (Inherited: 0x2d0)
struct USQRotorVehicleMovementComponent : USQForceNetMovementComponent {
	struct TArray<struct USQRotorSetup*> RotorsSetup; // 0x2c8(0x10)
	struct TArray<struct USQRotor*> Rotors; // 0x2d8(0x10)
	char pad_2F0[0x10]; // 0x2f0(0x10)

	void ToggleRotorLockByType(enum class ESQRotorType& RotorType); // Function Squad.SQRotorVehicleMovementComponent.ToggleRotorLockByType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8d8830
	void AddThrustByType(enum class ESQRotorType& RotorType, float Thrust); // Function Squad.SQRotorVehicleMovementComponent.AddThrustByType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8d80a0
	void AddThrust(int RotorIdx, float Thrust); // Function Squad.SQRotorVehicleMovementComponent.AddThrust // (Final|Native|Public|BlueprintCallable) // @ game+0x8d7fd0
};

// Class Squad.SQRotorWashEffectListener
// Size: 0xf0 (Inherited: 0xd8)
struct USQRotorWashEffectListener : UActorComponent {
	struct TArray<struct USQRotorWashEffectSender*> ActiveEmitters; // 0xd8(0x10)
	float EmitterCullDistance; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)

	void UnregisterRotorWashEffectEmitter(struct USQRotorWashEffectSender* Emitter); // Function Squad.SQRotorWashEffectListener.UnregisterRotorWashEffectEmitter // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x8d8940
	void SetEmitterCullDistance(float NewCullDistance); // Function Squad.SQRotorWashEffectListener.SetEmitterCullDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x8d86e0
	void RegisterRotorWashEffectEmitter(struct USQRotorWashEffectSender* Emitter); // Function Squad.SQRotorWashEffectListener.RegisterRotorWashEffectEmitter // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x8d8640
	void GetEmittersCulled(struct TArray<struct USQRotorWashEffectSender*>& OutEmitters); // Function Squad.SQRotorWashEffectListener.GetEmittersCulled // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8d8350
	void BPEmitterUnregistered(struct USQRotorWashEffectSender* Emitter); // Function Squad.SQRotorWashEffectListener.BPEmitterUnregistered // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPEmitterRegistered(struct USQRotorWashEffectSender* Emitter); // Function Squad.SQRotorWashEffectListener.BPEmitterRegistered // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQRotorWashEffectSender
// Size: 0x250 (Inherited: 0x220)
struct USQRotorWashEffectSender : USceneComponent {
	struct TArray<struct USQRotorWashEffectListener*> ActiveListeners; // 0x218(0x10)
	float EffectRadius; // 0x228(0x04)
	struct FRotorWashData EmitterData; // 0x230(0x18)
	char pad_24C[0x4]; // 0x24c(0x04)

	void UnregisterListener(struct USQRotorWashEffectListener* Listener); // Function Squad.SQRotorWashEffectSender.UnregisterListener // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x8d88c0
	void RegisterListener(struct USQRotorWashEffectListener* Listener); // Function Squad.SQRotorWashEffectSender.RegisterListener // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x8d85c0
	void Initialize(); // Function Squad.SQRotorWashEffectSender.Initialize // (BlueprintCosmetic|Native|Event|Public|BlueprintEvent) // @ game+0x8d84f0
};

// Class Squad.SQRulesetState
// Size: 0x250 (Inherited: 0x248)
struct ASQRulesetState : AInfo {
	bool bRulesetEnabled; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
};

// Class Squad.SQSaveGameWrapper
// Size: 0x58 (Inherited: 0x28)
struct USQSaveGameWrapper : UObject {
	struct USaveGame* SaveGameClass; // 0x28(0x08)
	struct FString SlotName; // 0x30(0x10)
	bool bClientOnly; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct USaveGame* SaveGame; // 0x48(0x08)
	char pad_50[0x8]; // 0x50(0x08)

	void SetSavedGame(struct USaveGame* NewSaveGame); // Function Squad.SQSaveGameWrapper.SetSavedGame // (Final|Native|Public|BlueprintCallable) // @ game+0x8d8760
	void Save(); // Function Squad.SQSaveGameWrapper.Save // (Final|Native|Public|BlueprintCallable) // @ game+0x8d86c0
	struct USaveGame* GetSavedGame(); // Function Squad.SQSaveGameWrapper.GetSavedGame // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8d84a0
};

// Class Squad.SQScoreboard
// Size: 0x2e0 (Inherited: 0x230)
struct USQScoreboard : USQUserWidget {
	struct USQScoreboardTeam* ScoreboardFriendly; // 0x230(0x08)
	struct USQScoreboardTeam* ScoreboardEnemy; // 0x238(0x08)
	struct ASQPlayerController* SQPC; // 0x240(0x08)
	struct ASQGameState* SQGameState; // 0x248(0x08)
	struct FTimerHandle UpdateStateTimerHandle; // 0x250(0x08)
	struct USQScoreboardTeam* ScoreboardTeamType; // 0x258(0x08)
	struct FText WinningTeamText; // 0x260(0x18)
	struct FText TicketsRemainingText; // 0x278(0x18)
	struct FText DrawText; // 0x290(0x18)
	struct UImage* GameTimeClockImage; // 0x2a8(0x08)
	struct UTextBlock* RemainingGameTimeText; // 0x2b0(0x08)
	struct UImage* ScoreboardFlairFlag1; // 0x2b8(0x08)
	struct UImage* ScoreboardFlairFlag2; // 0x2c0(0x08)
	struct UTextBlock* GameResultText; // 0x2c8(0x08)
	struct UTextBlock* GameResultTicketsRemaining; // 0x2d0(0x08)
	struct UCanvasPanel* GameResultCanvas; // 0x2d8(0x08)

	void UpdateState(); // Function Squad.SQScoreboard.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8b30
	void InitWidget(); // Function Squad.SQScoreboard.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQScoreboardPlayer
// Size: 0x3c8 (Inherited: 0x230)
struct USQScoreboardPlayer : USQUserWidget {
	char pad_230[0x10]; // 0x230(0x10)
	struct USQStatefulButton* TalkingButton; // 0x240(0x08)
	struct ASQPlayerController* SQPC; // 0x248(0x08)
	struct ASQPlayerState* SQPlayerState; // 0x250(0x08)
	struct ASQPlayerState* OwnerSQPlayerState; // 0x258(0x08)
	char pad_260[0x18]; // 0x260(0x18)
	struct FLinearColor SelfColor; // 0x278(0x10)
	struct FLinearColor OtherColor; // 0x288(0x10)
	struct FLinearColor BleedingColor; // 0x298(0x10)
	struct FLinearColor IncapColor; // 0x2a8(0x10)
	struct FLinearColor DeadColor; // 0x2b8(0x10)
	struct UTexture2D* BleedingTexture; // 0x2c8(0x08)
	struct UTexture2D* IncapTexture; // 0x2d0(0x08)
	struct UTexture2D* DeadTexture; // 0x2d8(0x08)
	struct FText HealthTooltipDead; // 0x2e0(0x18)
	struct FText HealthTooltipIncap; // 0x2f8(0x18)
	struct FText HealthTooltipBleeding; // 0x310(0x18)
	bool bShowAllStats; // 0x328(0x01)
	bool bIsFriendlyScoreboard; // 0x329(0x01)
	char pad_32A[0x6]; // 0x32a(0x06)
	struct UCanvasPanel* LeaderPanel; // 0x330(0x08)
	struct UHorizontalBox* EndOfRoundPanel; // 0x338(0x08)
	struct USpacer* NotEndOfRoundSpacer; // 0x340(0x08)
	struct UTextBlock* LeaderText; // 0x348(0x08)
	struct UTextBlock* PlayerNameText; // 0x350(0x08)
	struct UTextBlock* KillsText; // 0x358(0x08)
	struct UTextBlock* IncapsText; // 0x360(0x08)
	struct UTextBlock* DeathsText; // 0x368(0x08)
	struct UTextBlock* RevivesText; // 0x370(0x08)
	struct UTextBlock* HealsText; // 0x378(0x08)
	struct UTextBlock* TeamworkText; // 0x380(0x08)
	struct UTextBlock* ObjectivesText; // 0x388(0x08)
	struct UTextBlock* ScoreText; // 0x390(0x08)
	struct UTextBlock* PingText; // 0x398(0x08)
	struct UImage* LeaderTypeImage; // 0x3a0(0x08)
	struct UImage* FireteamImage; // 0x3a8(0x08)
	struct UImage* HealthStateImage; // 0x3b0(0x08)
	struct UImage* VehicleImage; // 0x3b8(0x08)
	struct UImage* RoleImage; // 0x3c0(0x08)

	void UpdateState(); // Function Squad.SQScoreboardPlayer.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
	void OnMutePlayer(int CurrentState); // Function Squad.SQScoreboardPlayer.OnMutePlayer // (Final|Native|Protected) // @ game+0x8d8540
	void InitWidget(); // Function Squad.SQScoreboardPlayer.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
	struct UTexture2D* GetRoleIcon(); // Function Squad.SQScoreboardPlayer.GetRoleIcon // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void ChangeVoipColor(enum class ESQVoiceChannel Channel); // Function Squad.SQScoreboardPlayer.ChangeVoipColor // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8170
};

// Class Squad.SQScoreboardSquad
// Size: 0x308 (Inherited: 0x230)
struct USQScoreboardSquad : USQUserWidget {
	struct ASQPlayerController* SQPC; // 0x230(0x08)
	struct ASQSquadState* SquadState; // 0x238(0x08)
	struct TArray<struct FPlayerWidgetPair> DisplayedPlayers; // 0x240(0x10)
	bool bShowAllStats; // 0x250(0x01)
	bool bUseAccumulativeLifetimeScores; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	struct FLinearColor OwnSquadColor; // 0x254(0x10)
	struct FLinearColor FriendlySquadColor; // 0x264(0x10)
	struct FLinearColor EnemySquadColor; // 0x274(0x10)
	bool bIsFriendlyScoreboard; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct USQScoreboardPlayer* ScoreboardPlayerType; // 0x288(0x08)
	struct UHorizontalBox* EndOfRoundHorizontalBox; // 0x290(0x08)
	struct UGridPanel* PlayersGrid; // 0x298(0x08)
	struct USpacer* NotEndOfRoundSpacer; // 0x2a0(0x08)
	struct UTextBlock* SquadNumberText; // 0x2a8(0x08)
	struct UTextBlock* SquadNameText; // 0x2b0(0x08)
	struct UTextBlock* SquadKillsText; // 0x2b8(0x08)
	struct UTextBlock* SquadIncapsText; // 0x2c0(0x08)
	struct UTextBlock* SquadDeathsText; // 0x2c8(0x08)
	struct UTextBlock* SquadRevivesText; // 0x2d0(0x08)
	struct UTextBlock* SquadHealsText; // 0x2d8(0x08)
	struct UTextBlock* SquadTeamworkText; // 0x2e0(0x08)
	struct UTextBlock* SquadObjectiveText; // 0x2e8(0x08)
	struct UTextBlock* SquadScoreText; // 0x2f0(0x08)
	struct UImage* SquadColorImage; // 0x2f8(0x08)
	struct UImage* SquadTalkingImage; // 0x300(0x08)

	void UpdateState(); // Function Squad.SQScoreboardSquad.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8b50
	void InitWidget(); // Function Squad.SQScoreboardSquad.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQScoreboardTeam
// Size: 0x3a8 (Inherited: 0x230)
struct USQScoreboardTeam : USQUserWidget {
	struct USQScoreboardTeamScore* ScoreboardTeamScore; // 0x230(0x08)
	struct UHorizontalBox* EndOfRoundHorizontalBox; // 0x238(0x08)
	struct UVerticalBox* TopVerticalBox; // 0x240(0x08)
	struct USpacer* NotEndOfRoundSpacer; // 0x248(0x08)
	struct USpacer* EnemyTeamPingAligner; // 0x250(0x08)
	struct UHorizontalBox* TeamHorizontalBox; // 0x258(0x08)
	struct UGridPanel* SquadsGrid; // 0x260(0x08)
	struct UCanvasPanel* NonSquadPlayersCanvasPanel; // 0x268(0x08)
	struct UGridPanel* PlayersGrid; // 0x270(0x08)
	struct UBorder* ColoredHeaderTabImage; // 0x278(0x08)
	struct UImage* RemainingTicketsImage; // 0x280(0x08)
	struct UImage* ColoredHeaderBarImage; // 0x288(0x08)
	struct UImage* FlagImage; // 0x290(0x08)
	struct UTextBlock* PlayerNumberText; // 0x298(0x08)
	struct UTextBlock* RemainingTicketsText; // 0x2a0(0x08)
	struct UTextBlock* TeamNameText; // 0x2a8(0x08)
	struct ASQPlayerController* SQPC; // 0x2b0(0x08)
	struct ASQPlayerState* SQPlayerState; // 0x2b8(0x08)
	struct ASQTeamState* SQTeamState; // 0x2c0(0x08)
	struct ASQGameState* SQGameState; // 0x2c8(0x08)
	struct USQScoreboardPlayer* OwnerPlayerWidget; // 0x2d0(0x08)
	struct USQScoreboardSquad* OwnerPlayerSquadWidget; // 0x2d8(0x08)
	int TeamKills; // 0x2e0(0x04)
	int TeamDeaths; // 0x2e4(0x04)
	int TeamIncaps; // 0x2e8(0x04)
	int TeamWounds; // 0x2ec(0x04)
	int TeamRevives; // 0x2f0(0x04)
	int TeamHeals; // 0x2f4(0x04)
	int TeamTeamKills; // 0x2f8(0x04)
	int TeamTeamwork; // 0x2fc(0x04)
	int TeamObjective; // 0x300(0x04)
	int TeamScore; // 0x304(0x04)
	struct FLinearColor FriendlyTeamColor; // 0x308(0x10)
	struct FLinearColor EnemyTeamColor; // 0x318(0x10)
	bool bIsFriendlyScoreboard; // 0x328(0x01)
	bool bShowAllStats; // 0x329(0x01)
	char pad_32A[0x2]; // 0x32a(0x02)
	float EndOfRoundEnemyWidth; // 0x32c(0x04)
	float DuringRoundEnemyWidth; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FText RemainingTicketsTextString; // 0x338(0x18)
	struct FText PlayersText; // 0x350(0x18)
	struct TArray<struct FSquadWidgetPair> DisplayedSquads; // 0x368(0x10)
	struct TArray<struct FPlayerWidgetPair> DisplayedPlayers; // 0x378(0x10)
	struct TArray<struct FSQRemoteTalkerDisplayInfo> FormerTalkers; // 0x388(0x10)
	struct USQScoreboardSquad* ScoreboardSquadType; // 0x398(0x08)
	struct USQScoreboardPlayer* ScoreboardPlayerType; // 0x3a0(0x08)

	void UpdateState(); // Function Squad.SQScoreboardTeam.UpdateState // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8b70
	void UpdateSquads(); // Function Squad.SQScoreboardTeam.UpdateSquads // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8b10
	void UpdatePlayers(); // Function Squad.SQScoreboardTeam.UpdatePlayers // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8af0
	void UpdatePlayerJoinedSquad(struct ASQPlayerState* Player); // Function Squad.SQScoreboardTeam.UpdatePlayerJoinedSquad // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d8a70
	void UpdateAllSpeakers(struct TArray<struct FSQRemoteTalkerDisplayInfo>& CurrentTalkers); // Function Squad.SQScoreboardTeam.UpdateAllSpeakers // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x8d89c0
	void ToggleShowAllStats(); // Function Squad.SQScoreboardTeam.ToggleShowAllStats // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829740
	void SortSquads(); // Function Squad.SQScoreboardTeam.SortSquads // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d87e0
	void InitWidget(); // Function Squad.SQScoreboardTeam.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x8d84d0
	void CreateNewSquad(struct ASQSquadState* NewSquad); // Function Squad.SQScoreboardTeam.CreateNewSquad // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d82b0
	void CreateNewPlayer(struct ASQTeamState* Team, struct ASQPlayerState* Player); // Function Squad.SQScoreboardTeam.CreateNewPlayer // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8d81f0
	void CleanDataForWidget(); // Function Squad.SQScoreboardTeam.CleanDataForWidget // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x829fd0
};

// Class Squad.SQScoreboardTeamScore
// Size: 0x280 (Inherited: 0x230)
struct USQScoreboardTeamScore : USQUserWidget {
	struct UHorizontalBox* EndOfRoundPanel; // 0x230(0x08)
	struct USpacer* NotEndOfRoundSpacer; // 0x238(0x08)
	struct UTextBlock* KillsText; // 0x240(0x08)
	struct UTextBlock* IncapsText; // 0x248(0x08)
	struct UTextBlock* DeathsText; // 0x250(0x08)
	struct UTextBlock* RevivesText; // 0x258(0x08)
	struct UTextBlock* HealsText; // 0x260(0x08)
	struct UTextBlock* TeamworkText; // 0x268(0x08)
	struct UTextBlock* ObjectivesText; // 0x270(0x08)
	struct UTextBlock* ScoreText; // 0x278(0x08)

	void InitWidget(); // Function Squad.SQScoreboardTeamScore.InitWidget // (Native|Public|BlueprintCallable) // @ game+0x829740
};

// Class Squad.SQScoreboardWidgetStyle
// Size: 0x138 (Inherited: 0x30)
struct USQScoreboardWidgetStyle : USlateWidgetStyleContainerBase {
	struct FSQScoreboardStyle ScoreboardStyle; // 0x30(0x108)
};

// Class Squad.SQScriptCondition
// Size: 0x48 (Inherited: 0x28)
struct USQScriptCondition : UObject {
	char pad_28[0x20]; // 0x28(0x20)

	void EvaluationResult(bool bNewValue); // Function Squad.SQScriptCondition.EvaluationResult // (Final|Native|Private|BlueprintCallable) // @ game+0x8db110
	void Evaluate(); // Function Squad.SQScriptCondition.Evaluate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void BPInitialize(); // Function Squad.SQScriptCondition.BPInitialize // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQScriptAction
// Size: 0x30 (Inherited: 0x28)
struct USQScriptAction : UObject {
	int MaxActionExecutions; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	void Execute(struct AActor* Context); // Function Squad.SQScriptAction.Execute // (Final|Native|Public) // @ game+0x8db1a0
	void Cancel(); // Function Squad.SQScriptAction.Cancel // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPExecute(struct AActor* Context); // Function Squad.SQScriptAction.BPExecute // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQScriptActionExecutor
// Size: 0x258 (Inherited: 0x248)
struct ASQScriptActionExecutor : AActor {
	struct TArray<struct FScriptContainer> Scripts; // 0x248(0x10)

	void OnConditionValueUpdated(struct USQScriptCondition* ConditionObject, bool bNewValue); // Function Squad.SQScriptActionExecutor.OnConditionValueUpdated // (Final|Native|Protected) // @ game+0x8db420
};

// Class Squad.SQSeatProgressWidget
// Size: 0x268 (Inherited: 0x250)
struct USQSeatProgressWidget : USQProgressWidget {
	float TotalTime; // 0x250(0x04)
	char pad_254[0x4]; // 0x254(0x04)
	struct ASQVehicle* WithVehicle; // 0x258(0x08)
	enum class ESeatProgressMenuMode MenuMode; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)

	void FinishOnServer(); // Function Squad.SQSeatProgressWidget.FinishOnServer // (Final|Native|Protected|BlueprintCallable) // @ game+0x8db330
	void BPOnShowVehicleInventory(); // Function Squad.SQSeatProgressWidget.BPOnShowVehicleInventory // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQServerBrowserWidget
// Size: 0x268 (Inherited: 0x230)
struct USQServerBrowserWidget : USQUserWidget {
	enum class ESQSortStates ServerNameSortedState; // 0x230(0x01)
	enum class ESQSortStates MapNameSortedState; // 0x231(0x01)
	enum class ESQSortStates GameModeSortedState; // 0x232(0x01)
	enum class ESQSortStates NumPlayersSortedState; // 0x233(0x01)
	enum class ESQSortStates PingSortedState; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct TArray<struct USQServerListItemWidget*> SessionList; // 0x238(0x10)
	struct TArray<struct UUserWidget*> SessionSortList; // 0x248(0x10)
	bool bCanStartNewFindSessions; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct USQFindSessionsCallbackProxy* CurrentCallback; // 0x260(0x08)

	void UpdateSortedState(enum class ESQSortLevels SortLevel); // Function Squad.SQServerBrowserWidget.UpdateSortedState // (Native|Public|BlueprintCallable) // @ game+0x8dcc90
	void UpdateIndexes(); // Function Squad.SQServerBrowserWidget.UpdateIndexes // (Native|Public|BlueprintCallable) // @ game+0x829740
	void StartFindSessions(); // Function Squad.SQServerBrowserWidget.StartFindSessions // (Final|Native|Private|BlueprintCallable) // @ game+0x8dbc70
	void SortServerName(bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortServerName // (Native|Public|BlueprintCallable) // @ game+0x8dbbe0
	void SortPing(bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortPing // (Native|Public|BlueprintCallable) // @ game+0x8dbb50
	void SortNumPlayers(bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortNumPlayers // (Native|Public|BlueprintCallable) // @ game+0x8dbac0
	void SortMapName(bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortMapName // (Native|Public|BlueprintCallable) // @ game+0x8dba30
	void SortGameMode(bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortGameMode // (Native|Public|BlueprintCallable) // @ game+0x8db9a0
	void SortByName(enum class ESQSortLevels SortByColumn, bool bIsAscending); // Function Squad.SQServerBrowserWidget.SortByName // (Native|Public|BlueprintCallable) // @ game+0x8db8d0
	void ResetSortedState(); // Function Squad.SQServerBrowserWidget.ResetSortedState // (Native|Public|BlueprintCallable) // @ game+0x8cc9d0
	void OnUpdateSession(struct TArray<struct FBlueprintSessionResult>& Results); // Function Squad.SQServerBrowserWidget.OnUpdateSession // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void OnSuccess(struct TArray<struct FBlueprintSessionResult>& Results); // Function Squad.SQServerBrowserWidget.OnSuccess // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x12b8b50
	void OnFindSessionsNewSessionUpdate(struct FBlueprintSessionResult& SessionResult); // Function Squad.SQServerBrowserWidget.OnFindSessionsNewSessionUpdate // (Final|Native|Private|HasOutParms) // @ game+0x8db630
	void OnFindSessionsCompleted(struct TArray<struct FBlueprintSessionResult>& Results, bool bSuccess); // Function Squad.SQServerBrowserWidget.OnFindSessionsCompleted // (Final|Native|Private|HasOutParms) // @ game+0x8db510
	void OnFindSessionsCancelled(); // Function Squad.SQServerBrowserWidget.OnFindSessionsCancelled // (Final|Native|Private) // @ game+0x8db4f0
	void OnFailure(); // Function Squad.SQServerBrowserWidget.OnFailure // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQServerListItemWidget
// Size: 0x3d0 (Inherited: 0x230)
struct USQServerListItemWidget : UUserWidget {
	int ItemIndex; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct FBlueprintSessionResult SessionResult; // 0x238(0xb8)
	struct FString ServerName; // 0x2f0(0x10)
	bool bAnticheatProtected; // 0x300(0x01)
	bool bIsModded; // 0x301(0x01)
	bool bIsWhitelisted; // 0x302(0x01)
	char pad_303[0x5]; // 0x303(0x05)
	struct FString GameVersion; // 0x308(0x10)
	struct FSQSessionFlagStruct SessionFlagStruct; // 0x318(0x08)
	int ServerHealth; // 0x320(0x04)
	bool bLicensedServer; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	int MatchTimeout; // 0x328(0x04)
	bool bPasswordProtected; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct FString LayerNameString; // 0x330(0x10)
	struct USQLayer* Layer; // 0x340(0x08)
	struct FText LayerName; // 0x348(0x18)
	struct FTimespan PlayedTime; // 0x360(0x08)
	struct USQFactionSetup* TeamOneFactionSetup; // 0x368(0x08)
	struct USQFactionSetup* TeamTwoFactionSetup; // 0x370(0x08)
	struct FString GameMode; // 0x378(0x10)
	int Ping; // 0x388(0x04)
	int NumPlayers; // 0x38c(0x04)
	int MaxNumPlayers; // 0x390(0x04)
	int NumReservedSlots; // 0x394(0x04)
	int NumQueuedTotal; // 0x398(0x04)
	int NumQueuedPublic; // 0x39c(0x04)
	int PublicQueueLimit; // 0x3a0(0x04)
	int NumQueuedReservedMembers; // 0x3a4(0x04)
	struct FSQModInfoRequest ModDetailsRequest; // 0x3a8(0x18)
	struct TArray<struct FSQModLoadProgress> ModLoadProgressArray; // 0x3c0(0x10)

	void SetSession(struct FBlueprintSessionResult& Result); // Function Squad.SQServerListItemWidget.SetSession // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8db780
	void ServerConnectionCheckUpdate(struct FSQConnectionCheckResponse UpdateResponse); // Function Squad.SQServerListItemWidget.ServerConnectionCheckUpdate // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct FString GetServerURL(); // Function Squad.SQServerListItemWidget.GetServerURL // (Native|Public|BlueprintCallable) // @ game+0x8db350
	void ClientJoinAccepted(); // Function Squad.SQServerListItemWidget.ClientJoinAccepted // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	struct TArray<struct FSQModLoadProgress> CheckMissingMods(); // Function Squad.SQServerListItemWidget.CheckMissingMods // (Native|Public|BlueprintCallable) // @ game+0x8db010
};

// Class Squad.SQSettingsService
// Size: 0x28 (Inherited: 0x28)
struct USQSettingsService : UBlueprintFunctionLibrary {

	bool TryGetTeamLayerConfig(struct UObject* WorldContextObject, int TeamId, struct USQLayerTeamConfig* LayerTeamConfigClass, struct USQLayerTeamConfig*& OutTeamConfig); // Function Squad.SQSettingsService.TryGetTeamLayerConfig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dcb50
	bool TryGetLocalPlayerTeamLayerConfig(struct UObject* WorldContextObject, struct USQLayerTeamConfig* LayerTeamConfigClass, struct USQLayerTeamConfig*& OutTeamConfig); // Function Squad.SQSettingsService.TryGetLocalPlayerTeamLayerConfig // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dca50
	bool TryGetLocalPlayerFactionSetup(struct UObject* WorldContextObject, struct USQFactionSetup* FactionSetupClass, struct USQFactionSetup*& OutFactionSetup); // Function Squad.SQSettingsService.TryGetLocalPlayerFactionSetup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc950
	bool TryGetLocalPlayerFaction(struct UObject* WorldContextObject, struct USQFaction* FactionClass, struct USQFaction*& OutFaction); // Function Squad.SQSettingsService.TryGetLocalPlayerFaction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc850
	bool TryGetFactionSetup(struct UObject* WorldContextObject, struct FName FactionSetupId, struct USQFactionSetup* FactionSetupClass, struct USQFactionSetup*& OutFactionSetup); // Function Squad.SQSettingsService.TryGetFactionSetup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc710
	bool TryGetFaction(struct UObject* WorldContextObject, struct FName FactionID, struct USQFaction* FactionClass, struct USQFaction*& OutFaction); // Function Squad.SQSettingsService.TryGetFaction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc5d0
	bool TryGetCurrentLevel(struct UObject* WorldContextObject, struct USQLevel* LevelClass, struct USQLevel*& OutLevel); // Function Squad.SQSettingsService.TryGetCurrentLevel // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc4d0
	bool TryGetCurrentLayer(struct UObject* WorldContextObject, struct USQLayer* LayerClass, struct USQLayer*& OutLayer); // Function Squad.SQSettingsService.TryGetCurrentLayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc3d0
	bool TryGetCurrentFactionSetup(struct UObject* WorldContextObject, int TeamId, struct USQFactionSetup* FactionSetupClass, struct USQFactionSetup*& OutFactionSetup); // Function Squad.SQSettingsService.TryGetCurrentFactionSetup // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc290
	bool TryGetCurrentFaction(struct UObject* WorldContextObject, int TeamId, struct USQFaction* FactionClass, struct USQFaction*& OutFaction); // Function Squad.SQSettingsService.TryGetCurrentFaction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc150
	bool TryGetAvailableLevels(struct UObject* WorldContextObject, struct USQLevel* LevelClass, struct TArray<struct USQLevel*>& OutAvailableLevels); // Function Squad.SQSettingsService.TryGetAvailableLevels // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dc020
	bool TryGetAvailableLayers(struct UObject* WorldContextObject, struct USQLayer* LayerClass, struct TArray<struct USQLayer*>& OutAvailableLayers); // Function Squad.SQSettingsService.TryGetAvailableLayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dbef0
	bool TryGetAvailableFactionSetups(struct UObject* WorldContextObject, struct USQFactionSetup* FactionSetupClass, struct TArray<struct USQFactionSetup*>& OutAvailableFactionSetups); // Function Squad.SQSettingsService.TryGetAvailableFactionSetups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dbc90
	bool TryGetAvailableFactions(struct UObject* WorldContextObject, struct USQFaction* FactionClass, struct TArray<struct USQFaction*>& OutAvailableFactions); // Function Squad.SQSettingsService.TryGetAvailableFactions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8dbdc0
};

// Class Squad.SQShockwave
// Size: 0xd0 (Inherited: 0x28)
struct USQShockwave : UObject {
	enum class ESQShockwaveEffectType ShockwaveEffectType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float Strength; // 0x2c(0x04)
	struct TArray<struct FSQShockwaveQualitySetting> ShockwaveQualitySettings; // 0x30(0x10)
	struct FSQCameraShake CameraShake; // 0x40(0x20)
	struct FSQCameraShake SecondaryCameraShake; // 0x60(0x20)
	int VerticalSteps; // 0x80(0x04)
	int HorizontalSteps; // 0x84(0x04)
	struct FRotator DefaultRotation; // 0x88(0x0c)
	struct FVector DefaultLocationOffset; // 0x94(0x0c)
	float Range; // 0xa0(0x04)
	float PitchRange; // 0xa4(0x04)
	float YawRange; // 0xa8(0x04)
	float CullingDistance; // 0xac(0x04)
	float NearbyExplosionEventRadius; // 0xb0(0x04)
	int MaxSoundsToSpawn; // 0xb4(0x04)
	int MaxDecalsToSpawn; // 0xb8(0x04)
	bool bDebugLines; // 0xbc(0x01)
	bool bDebugSpheres; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct UParticleSystem* Emitter; // 0xc0(0x08)
	struct USQPhysicalMaterialEffects* DefaultEffectsClass; // 0xc8(0x08)

	void NearbyExplosionEvent(struct AActor* ProjectileActor, struct FVector& Location, float DistanceFromEffect); // Function Squad.SQShockwave.NearbyExplosionEvent // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x12b8b50
	struct FSQShockwaveQualitySetting GetShockwaveSetting(); // Function Squad.SQShockwave.GetShockwaveSetting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8db3e0
	void Explode(struct UWorld* World, struct AActor* ProjectileActor, struct FVector& Location); // Function Squad.SQShockwave.Explode // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8db220
};

// Class Squad.SQShockwaveDirected
// Size: 0xd8 (Inherited: 0xd0)
struct USQShockwaveDirected : USQShockwave {
	bool bFractionalOffsettingForHorizontalSteps; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class Squad.SQShovelStaticInfo
// Size: 0x558 (Inherited: 0x528)
struct USQShovelStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* DigWeaponMontage; // 0x528(0x08)
	struct UAnimMontage* Dig1pMontage; // 0x530(0x08)
	struct UAnimMontage* Dig3pMontage; // 0x538(0x08)
	struct UAnimMontage* DestroyWeaponMontage; // 0x540(0x08)
	struct UAnimMontage* Destroy1pMontage; // 0x548(0x08)
	struct UAnimMontage* Destroy3pMontage; // 0x550(0x08)
};

// Class Squad.SQSimpleMovementComponent
// Size: 0x200 (Inherited: 0x1c0)
struct USQSimpleMovementComponent : USQMovementComponentBase {
	struct TScriptInterface<Class> UpdatedMeshOwner; // 0x1c0(0x10)
	char pad_1D0[0x24]; // 0x1d0(0x24)
	float LocationInputAcceleration; // 0x1f4(0x04)
	float RotationInputAcceleration; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)

	void AddRotationInput(struct FRotator& InRotationInput); // Function Squad.SQSimpleMovementComponent.AddRotationInput // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8e0210
	void AddMoveInput(struct FVector& InMoveInput); // Function Squad.SQSimpleMovementComponent.AddMoveInput // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8e0180
};

// Class Squad.SQSoldierStaticInfo
// Size: 0x60 (Inherited: 0x30)
struct USQSoldierStaticInfo : UDataAsset {
	float MaximumReviveTime; // 0x30(0x04)
	float ReviveRecoveryPerSecond; // 0x34(0x04)
	float HorizontalFallingDamageMultiplier; // 0x38(0x04)
	float MaximumHorizontalSafeFallingSpeed; // 0x3c(0x04)
	struct UCurveFloat* DamageRevivePenaltyCurve; // 0x40(0x08)
	float GrabbingDistance; // 0x48(0x04)
	float DraggingDropThresholdAngle; // 0x4c(0x04)
	float GrabbingSphereRadius; // 0x50(0x04)
	float MinBipodPronePitch; // 0x54(0x04)
	float MaxBipodPronePitch; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Squad.SQSoldierMedicalComponent
// Size: 0x230 (Inherited: 0x220)
struct USQSoldierMedicalComponent : USceneComponent {
	float SoldierHealthPerSecond; // 0x218(0x04)
	float ConstructionPointsPerSecondHealth; // 0x21c(0x04)
	float AmmoPointsPerSecondHealth; // 0x220(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// Class Squad.SQSoldierMovement
// Size: 0x8c0 (Inherited: 0x730)
struct USQSoldierMovement : UCharacterMovementComponent {
	struct UCurveFloat* SoldierDefaultInclineMovementSpeedCurve; // 0x730(0x08)
	float WalkSpeedMultiplier; // 0x738(0x04)
	float StrafeSpeedMultiplier; // 0x73c(0x04)
	float LeaningStandSpeedMultiplier; // 0x740(0x04)
	float LeaningCrouchSpeedMultiplier; // 0x744(0x04)
	float BackwardsWalkSpeedMultiplier; // 0x748(0x04)
	float DraggingSpeedMultiplier; // 0x74c(0x04)
	float OutsidePhysicsSpeedMultiplier; // 0x750(0x04)
	float AnimationSpeedLimiter; // 0x754(0x04)
	float SprintSpeedMultiplier; // 0x758(0x04)
	float MaxSprintAcceleration; // 0x75c(0x04)
	bool WasRunning; // 0x760(0x01)
	char pad_761[0x3]; // 0x761(0x03)
	float MaxWalkSpeedProne; // 0x764(0x04)
	float ProneHalfHeight; // 0x768(0x04)
	char bCanWalkOffLedgesWhenProne : 1; // 0x76c(0x01)
	char bCanSprintWhenCrouched : 1; // 0x76c(0x01)
	char bWantsToProne : 1; // 0x76c(0x01)
	char bProneMaintainsBaseLocation : 1; // 0x76c(0x01)
	char pad_76C_4 : 4; // 0x76c(0x01)
	char pad_76D[0x3]; // 0x76d(0x03)
	float StickyGroundMultiplier; // 0x770(0x04)
	float Stamina; // 0x774(0x04)
	float StaminaMax; // 0x778(0x04)
	float TiredThreshold; // 0x77c(0x04)
	float ExhaustedThreshold; // 0x780(0x04)
	float ExhaustedPenalty; // 0x784(0x04)
	bool bStaminaExhausted; // 0x788(0x01)
	char pad_789[0x3]; // 0x789(0x03)
	float StaminaRegenRate; // 0x78c(0x04)
	float HurtStaminaRegenRate; // 0x790(0x04)
	bool bIsHurt; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)
	float UpdateStaminaFrequency; // 0x798(0x04)
	char pad_79C[0x4]; // 0x79c(0x04)
	struct FTimerHandle StaminaUpdateTimerHandle; // 0x7a0(0x08)
	float WalkPenalty; // 0x7a8(0x04)
	float ClimbingPenalty; // 0x7ac(0x04)
	float MovePenalty; // 0x7b0(0x04)
	float SprintPenalty; // 0x7b4(0x04)
	float CrouchPenalty; // 0x7b8(0x04)
	float CrouchSprintPenalty; // 0x7bc(0x04)
	float PronePenalty; // 0x7c0(0x04)
	float ProneSprintPenalty; // 0x7c4(0x04)
	float DraggingPenalty; // 0x7c8(0x04)
	float StandLeanPenalty; // 0x7cc(0x04)
	float CrouchLeanPenalty; // 0x7d0(0x04)
	float BurstLeanPenalty; // 0x7d4(0x04)
	float StandStaminaRegenMultiplier; // 0x7d8(0x04)
	float CrouchStaminaRegenMultiplier; // 0x7dc(0x04)
	float ProneStaminaRegenMultiplier; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	char bLimitConsecutiveJumping : 1; // 0x7e8(0x01)
	char pad_7E8_1 : 7; // 0x7e8(0x01)
	char pad_7E9[0x3]; // 0x7e9(0x03)
	float ConsecutiveJumpingPenaltyReductionTime; // 0x7ec(0x04)
	struct TArray<float> ConsecutiveJumpingVelocityMultipliers; // 0x7f0(0x10)
	int ConsecutiveJumpingArrayIndex; // 0x800(0x04)
	float LastJumpPenaltyChangeTime; // 0x804(0x04)
	char bStaminaLimitsRunning : 1; // 0x808(0x01)
	char bStaminaLimitsJumping : 1; // 0x808(0x01)
	char pad_808_2 : 6; // 0x808(0x01)
	char pad_809[0x3]; // 0x809(0x03)
	float StaminaUseThreshold; // 0x80c(0x04)
	char bJumpingUsesStamina : 1; // 0x810(0x01)
	char pad_810_1 : 7; // 0x810(0x01)
	char pad_811[0x3]; // 0x811(0x03)
	float StaminaLossPerJump; // 0x814(0x04)
	struct UCurveFloat* SoldierWaterMovementSpeedCurve; // 0x818(0x08)
	struct UCurveFloat* SoldierWaterFallSpeedCurve; // 0x820(0x08)
	struct UCurveFloat* SoldierWaterStaminaDrainCurve; // 0x828(0x08)
	char pad_830[0x8]; // 0x830(0x08)
	struct TArray<struct FVector> ClimbMovePath; // 0x838(0x10)
	struct TArray<float> ClimbInterpolationTimes; // 0x848(0x10)
	float BipodMaxAnglePerIteration; // 0x858(0x04)
	char pad_85C[0x14]; // 0x85c(0x14)
	struct ASQSoldier* SquadCharacterOwner; // 0x870(0x08)
	int ServerUpdateRate; // 0x878(0x04)
	int NonRenderedUpdateRate; // 0x87c(0x04)
	int NearByNonRenderedUpdateRate; // 0x880(0x04)
	int NearByNonRenderedUpdateRateDistance; // 0x884(0x04)
	struct TArray<float> DistanceFactorThesholds; // 0x888(0x10)
	struct TArray<struct USkinnedMeshComponent*> SkinnedComponents; // 0x898(0x10)
	char pad_8A8[0x8]; // 0x8a8(0x08)
	char pad_8B0_0 : 2; // 0x8b0(0x01)
	char bAimDownSights : 1; // 0x8b0(0x01)
	char pad_8B0_3 : 5; // 0x8b0(0x01)
	char pad_8B1[0xf]; // 0x8b1(0x0f)

	void UpdateStamina(); // Function Squad.SQSoldierMovement.UpdateStamina // (Native|Public) // @ game+0x8e6b40
	void SetIsHurt(bool bHurt); // Function Squad.SQSoldierMovement.SetIsHurt // (Final|Native|Public) // @ game+0x8e68f0
	bool IsWalkPressed(); // Function Squad.SQSoldierMovement.IsWalkPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5bc0
	bool IsStaminaOverThreshold(); // Function Squad.SQSoldierMovement.IsStaminaOverThreshold // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5b90
	bool IsSprintPressed(); // Function Squad.SQSoldierMovement.IsSprintPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5b30
	bool IsSprinting(); // Function Squad.SQSoldierMovement.IsSprinting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5b60
	bool IsProne(); // Function Squad.SQSoldierMovement.IsProne // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5ad0
	bool IsLeaningRight(); // Function Squad.SQSoldierMovement.IsLeaningRight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e59b0
	bool IsLeaningLeft(); // Function Squad.SQSoldierMovement.IsLeaningLeft // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5980
	bool IsDragging(); // Function Squad.SQSoldierMovement.IsDragging // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5950
	bool IsChestImmersed(); // Function Squad.SQSoldierMovement.IsChestImmersed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5880
	bool IsAimingDownSights(); // Function Squad.SQSoldierMovement.IsAimingDownSights // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5850
	float GetWaterImmersionPercentage(); // Function Squad.SQSoldierMovement.GetWaterImmersionPercentage // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e57d0
	float GetWaterDepth(); // Function Squad.SQSoldierMovement.GetWaterDepth // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5790
	float GetProneWeight(); // Function Squad.SQSoldierMovement.GetProneWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5750
	float GetJumpVelocity(); // Function Squad.SQSoldierMovement.GetJumpVelocity // (Native|Public|BlueprintCallable) // @ game+0x8818b0
	float GetCrouchWeight(); // Function Squad.SQSoldierMovement.GetCrouchWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5710
	bool CanSprint(); // Function Squad.SQSoldierMovement.CanSprint // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5620
	bool CanRun(); // Function Squad.SQSoldierMovement.CanRun // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e55f0
	bool CanJump(); // Function Squad.SQSoldierMovement.CanJump // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e55c0
	bool CanCrouchInCurrentState(); // Function Squad.SQSoldierMovement.CanCrouchInCurrentState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5590
	float CalculateStamina(float Penalty, float StanceRegenMultiplier); // Function Squad.SQSoldierMovement.CalculateStamina // (Native|Public) // @ game+0x8e54b0
	void ApplyStaminaBurstLoss(float Penalty); // Function Squad.SQSoldierMovement.ApplyStaminaBurstLoss // (Native|Public) // @ game+0x8e51e0
};

// Class Squad.SQSoldierNew
// Size: 0x2420 (Inherited: 0x1ee0)
struct ASQSoldierNew : ASQSoldier {
	char pad_1EE0[0x30]; // 0x1ee0(0x30)
	struct UAnimMontage* IdleMontage; // 0x1f10(0x08)
	struct FSQClimbData ClimbData; // 0x1f18(0x178)
	bool bClimbingEnabled; // 0x2090(0x01)
	char pad_2091[0x7]; // 0x2091(0x07)
	struct FSQClimbInfo ClimbInfo; // 0x2098(0x30)
	char pad_20C8[0x88]; // 0x20c8(0x88)
	struct USQBoundaryListener* BoundaryListener; // 0x2150(0x08)
	char pad_2158[0x8]; // 0x2158(0x08)
	struct USkeletalMeshComponent* UpperMesh1P; // 0x2160(0x08)
	struct USpringArmComponent* SpringArm1P; // 0x2168(0x08)
	struct USQItemStaticInfo* CurrentItemStaticInfo; // 0x2170(0x08)
	struct USQBotComponent* BotComponent; // 0x2178(0x08)
	struct FRotator ControlRotation; // 0x2180(0x0c)
	struct FRotator AimRotation1P; // 0x218c(0x0c)
	float RequiredProneTransitionTime; // 0x2198(0x04)
	bool bCachedIsUsingItem; // 0x219c(0x01)
	bool bCachedIsUsingGrenade; // 0x219d(0x01)
	bool bCachedLeanLeft; // 0x219e(0x01)
	bool bCachedLeanRight; // 0x219f(0x01)
	float CachedFwdPct; // 0x21a0(0x04)
	float CachedStrafePct; // 0x21a4(0x04)
	bool bShot; // 0x21a8(0x01)
	bool bWasCrouchedBeforeProne; // 0x21a9(0x01)
	bool bIsCameraRecoilActive; // 0x21aa(0x01)
	char pad_21AB[0x1]; // 0x21ab(0x01)
	float SpringArmTargetHeight1p; // 0x21ac(0x04)
	float SpringArmHeight1pInterpSpeed; // 0x21b0(0x04)
	float TempSpringArmHeight1p; // 0x21b4(0x04)
	float CurrentSpringArmHeight1p; // 0x21b8(0x04)
	float SpringArmClimbingHeight; // 0x21bc(0x04)
	float SpringArmCrouchingMovingHeight; // 0x21c0(0x04)
	float SpringArmCrouchingStaticHeight; // 0x21c4(0x04)
	float SpringArmProneHeight; // 0x21c8(0x04)
	struct FVector Base1pOffset; // 0x21cc(0x0c)
	struct FVector RawBase1pOffset; // 0x21d8(0x0c)
	bool bSwitchedSoldierStance; // 0x21e4(0x01)
	char pad_21E5[0x3]; // 0x21e5(0x03)
	int ViewMode3p; // 0x21e8(0x04)
	struct FVector ViewPos3p; // 0x21ec(0x0c)
	float ViewDistance3p; // 0x21f8(0x04)
	struct FRotator ViewOrientation3p; // 0x21fc(0x0c)
	int ViewScrollDistance3p; // 0x2208(0x04)
	struct FRotator ViewAdjustingDelta3p; // 0x220c(0x0c)
	float ViewTogglePressTime; // 0x2218(0x04)
	bool bAdjustingView3p; // 0x221c(0x01)
	bool bLastInThirdPersonView; // 0x221d(0x01)
	char pad_221E[0x2]; // 0x221e(0x02)
	struct UAnimMontage* StartCrouch_1P_Montage; // 0x2220(0x08)
	struct UAnimMontage* EndCrouch_1P_Montage; // 0x2228(0x08)
	struct UAnimMontage* DraggingStart1pMontage; // 0x2230(0x08)
	struct UAnimMontage* DraggingStart3pMontage; // 0x2238(0x08)
	struct UAnimMontage* DraggingEnd1pMontage; // 0x2240(0x08)
	struct UAnimMontage* DraggingEnd3pMontage; // 0x2248(0x08)
	struct USQFreeLookComponent* FreeLookComponent; // 0x2250(0x08)
	struct FRotator VaultClimbAo; // 0x2258(0x0c)
	struct FRotator CachedVaultClimbAo2; // 0x2264(0x0c)
	float CachedVaultClimbAoYawInterpSpeed; // 0x2270(0x04)
	float CachedVaultClimbAoPitchInterpSpeed; // 0x2274(0x04)
	struct ASQEquipableItem* PreviousWeapon; // 0x2278(0x08)
	bool bPreviousWeaponMagHasAmmo; // 0x2280(0x01)
	bool bCachedIsSprinting; // 0x2281(0x01)
	char pad_2282[0x6]; // 0x2282(0x06)
	struct USceneComponent* WeaponDeviationRot; // 0x2288(0x08)
	bool bAccuracyDebugVisible; // 0x2290(0x01)
	char pad_2291[0x7]; // 0x2291(0x07)
	struct USQAnimInstanceSoldier3P* CachedAnimInstance3p; // 0x2298(0x08)
	struct USQAnimInstanceSoldier1P* CachedAnimInstance1p; // 0x22a0(0x08)
	float SoldierPlayTime1p; // 0x22a8(0x04)
	float SoldierPlayTime3p; // 0x22ac(0x04)
	float Bipod3pSkelMeshOffset; // 0x22b0(0x04)
	float BeginBipod3pSkelMeshOffset; // 0x22b4(0x04)
	float CachedBipodTransitionAlpha; // 0x22b8(0x04)
	bool bIsBipodDeployed; // 0x22bc(0x01)
	char pad_22BD[0x3]; // 0x22bd(0x03)
	struct FVector BipodHitLocZeroBased; // 0x22c0(0x0c)
	char pad_22CC[0x4]; // 0x22cc(0x04)
	struct USceneComponent* BipodObject; // 0x22d0(0x08)
	char pad_22D8[0xc]; // 0x22d8(0x0c)
	struct FVector CachedDeployed1pBipodLocation; // 0x22e4(0x0c)
	float BipodHitLocSpringArm1PHeight; // 0x22f0(0x04)
	float BipodNonDeployedSpringArm1pRelativeHeight; // 0x22f4(0x04)
	char pad_22F8[0x74]; // 0x22f8(0x74)
	float BipodSpringArmFloorTraceLength; // 0x236c(0x04)
	float DeployedBipodCapsuleRadius; // 0x2370(0x04)
	float BipodClientServerAcceptableRange; // 0x2374(0x04)
	float BipodObjectMaxDelta; // 0x2378(0x04)
	float BipodDepth; // 0x237c(0x04)
	float BipodStandingMinDeployHeight; // 0x2380(0x04)
	float BipodStandingMaxDeployHeight; // 0x2384(0x04)
	float BipodCrouchingMinDeployHeight; // 0x2388(0x04)
	float BipodCrouchingMaxDeployHeight; // 0x238c(0x04)
	float BipodProneMinDeployHeight; // 0x2390(0x04)
	float BipodProneMaxDeployHeight; // 0x2394(0x04)
	float BipodCameraProbeSize; // 0x2398(0x04)
	char pad_239C[0x4]; // 0x239c(0x04)
	bool bWeaponLowered; // 0x23a0(0x01)
	char pad_23A1[0x3]; // 0x23a1(0x03)
	struct FName ChestSocketName; // 0x23a4(0x08)
	char bIsChestImmersed : 1; // 0x23ac(0x01)
	char bItemRaisedAboveHead : 1; // 0x23ac(0x01)
	char pad_23AC_2 : 6; // 0x23ac(0x01)
	char pad_23AD[0x3]; // 0x23ad(0x03)
	struct FScriptMulticastDelegate OnPawnPossessedEvent; // 0x23b0(0x10)
	struct FScriptMulticastDelegate OnPawnUnPossessedEvent; // 0x23c0(0x10)
	struct USQAnimDataEmotes* EmoteData; // 0x23d0(0x08)
	struct FSQVoipAnim MouthAnim; // 0x23d8(0x20)
	struct FSQVoipAnim HandActionRadioAnim; // 0x23f8(0x20)
	bool bIsPlayingVoipHandAnim; // 0x2418(0x01)
	char pad_2419[0x7]; // 0x2419(0x07)

	bool WeaponMagazineHasAmmo(); // Function Squad.SQSoldierNew.WeaponMagazineHasAmmo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e6c70
	void UpdateToProneCapsuleMotion(float DeltaSeconds); // Function Squad.SQSoldierNew.UpdateToProneCapsuleMotion // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6bf0
	void UpdateStaticItemInfo(struct USQItemStaticInfo* InfoObject); // Function Squad.SQSoldierNew.UpdateStaticItemInfo // (Native|Public|BlueprintCallable) // @ game+0x8e6b60
	void UpdateCachedAnimInstance3p(); // Function Squad.SQSoldierNew.UpdateCachedAnimInstance3p // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6b20
	void Update1pRelativeLocation(); // Function Squad.SQSoldierNew.Update1pRelativeLocation // (Native|Public|BlueprintCallable) // @ game+0x8e6b00
	void Update1pCamStanceHeight(float DeltaSeconds); // Function Squad.SQSoldierNew.Update1pCamStanceHeight // (Native|Public|BlueprintCallable) // @ game+0x8e6a80
	void ToggleViewReleased(); // Function Squad.SQSoldierNew.ToggleViewReleased // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6a60
	void ToggleViewPressed(); // Function Squad.SQSoldierNew.ToggleViewPressed // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6a40
	void ToggleThirdPersonView(); // Function Squad.SQSoldierNew.ToggleThirdPersonView // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6a20
	void ToggleBipod(); // Function Squad.SQSoldierNew.ToggleBipod // (Native|Public|BlueprintCallable) // @ game+0x8e6a00
	void TickUpdateThirdPersonView(float DeltaTime); // Function Squad.SQSoldierNew.TickUpdateThirdPersonView // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6980
	void ServerRetractBipod(); // Function Squad.SQSoldierNew.ServerRetractBipod // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8e68a0
	void ServerRaiseItemAboveHead(bool bShouldRaise); // Function Squad.SQSoldierNew.ServerRaiseItemAboveHead // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x8e67e0
	void ServerLowerWeapon(bool bValue); // Function Squad.SQSoldierNew.ServerLowerWeapon // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x8e6720
	void ServerDeployBipod(struct FVector RemoteBipodDeploymentLocationZeroBased, struct FVector RemoteActorLocationZeroBased); // Function Squad.SQSoldierNew.ServerDeployBipod // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x8e6630
	void ServerClimb(struct FTransform ClientTransformZeroBased, struct FSQClimbInfo ClientInfo); // Function Squad.SQSoldierNew.ServerClimb // (Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate) // @ game+0x8e64c0
	void PlayOrStopMontage(struct UAnimInstance* AnimInstance, struct UAnimMontage* Montage, bool bStopAnimation, float blendOutTime); // Function Squad.SQSoldierNew.PlayOrStopMontage // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6370
	void PlayOrStopAnimations(struct UAnimMontage* FirstPersonAnim, struct UAnimMontage* ThirdPersonAnim, bool bStopAnimation, float blendOutTime); // Function Squad.SQSoldierNew.PlayOrStopAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x8e6220
	void OutOfBoundsKillCallback(); // Function Squad.SQSoldierNew.OutOfBoundsKillCallback // (Final|Native|Public) // @ game+0x8e6200
	void OnRep_WeaponLoweredChanged(bool bVal); // Function Squad.SQSoldierNew.OnRep_WeaponLoweredChanged // (Final|Native|Private) // @ game+0x8e6150
	void OnRep_ItemRaisedAboveHeadChanged(bool bVal); // Function Squad.SQSoldierNew.OnRep_ItemRaisedAboveHeadChanged // (Final|Native|Private) // @ game+0x8e60c0
	void OnRep_ClimbInfo(struct FSQClimbInfo PrevClimbInfo); // Function Squad.SQSoldierNew.OnRep_ClimbInfo // (Final|Native|Private) // @ game+0x8e5f40
	void OnRep_Bipod(bool bBipodWasDeployed); // Function Squad.SQSoldierNew.OnRep_Bipod // (Final|Native|Protected) // @ game+0x8e5eb0
	void OnPossessionChanged__DelegateSignature(); // DelegateFunction Squad.SQSoldierNew.OnPossessionChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	void OnExitBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQSoldierNew.OnExitBoundary // (Final|Native|Public) // @ game+0x8e5df0
	void OnEquip__DelegateSignature(struct USQItemStaticInfo* StaticInfo); // DelegateFunction Squad.SQSoldierNew.OnEquip__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	void OnEnterBoundary(struct USQBoundaryListener* Listener, struct ASQBoundary* Boundary); // Function Squad.SQSoldierNew.OnEnterBoundary // (Final|Native|Public) // @ game+0x8e5d30
	void On_RepIsPlayingVoipHandAnim(); // Function Squad.SQSoldierNew.On_RepIsPlayingVoipHandAnim // (Final|Native|Private) // @ game+0x8e61e0
	void MulticastPlayEmoteAnim(enum class ESQEmotes Emote); // Function Squad.SQSoldierNew.MulticastPlayEmoteAnim // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x8e5cb0
	void MulticastPlayCustomEmote(struct FName CustomName); // Function Squad.SQSoldierNew.MulticastPlayCustomEmote // (Final|Net|Native|Event|NetMulticast|Private) // @ game+0x8e5c20
	bool IsWeaponLowered(); // Function Squad.SQSoldierNew.IsWeaponLowered // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5bf0
	bool IsPullingTriggerOnWeapon(); // Function Squad.SQSoldierNew.IsPullingTriggerOnWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5b00
	bool IsOutOfMapBounds(); // Function Squad.SQSoldierNew.IsOutOfMapBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5aa0
	bool IsMontagePlaying(struct UAnimMontage* FirstPersonAnim, struct UAnimMontage* ThirdPersonAnim); // Function Squad.SQSoldierNew.IsMontagePlaying // (Final|Native|Public|BlueprintCallable) // @ game+0x8e59e0
	bool IsClimbing(bool bRequiredOnly); // Function Squad.SQSoldierNew.IsClimbing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e58b0
	void InputClimb(); // Function Squad.SQSoldierNew.InputClimb // (Final|Native|Private) // @ game+0x8e5830
	void IncreaseCameraDistance(); // Function Squad.SQSoldierNew.IncreaseCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x8e5810
	void DecreaseCameraDistance(); // Function Squad.SQSoldierNew.DecreaseCameraDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x8e56f0
	void ClientRejectClimb(); // Function Squad.SQSoldierNew.ClientRejectClimb // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x8e56d0
	void ClientRejectBipod(); // Function Squad.SQSoldierNew.ClientRejectBipod // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x8e56b0
	bool CheckItemCollision(); // Function Squad.SQSoldierNew.CheckItemCollision // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5680
	bool CanZoom(); // Function Squad.SQSoldierNew.CanZoom // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e5650
	void CalcCamera_BP(float DeltaTime, struct FVector& InLocation, struct FRotator& InRotation, float InFOV, struct FVector& OutLocation, struct FRotator& OutRotation, float& OutFOV); // Function Squad.SQSoldierNew.CalcCamera_BP // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x8e5260
};

// Class Squad.SQSoldierRagdollComponent
// Size: 0x188 (Inherited: 0xd8)
struct USQSoldierRagdollComponent : UActorComponent {
	float TimeTillAutoGetUp; // 0xd8(0x04)
	float AutoGetUpRetryFrequency; // 0xdc(0x04)
	float RecoveryBlendSeconds; // 0xe0(0x04)
	float FreezeBodyCheckFrequency; // 0xe4(0x04)
	struct FName PelvisBoneName; // 0xe8(0x08)
	struct FName RightFootName; // 0xf0(0x08)
	struct FName LeftFootName; // 0xf8(0x08)
	struct UPhysicsAsset* RagdollPhysicsAsset; // 0x100(0x08)
	float CorrectionBaseRatio; // 0x108(0x04)
	float CorrectionMaxAddedRatio; // 0x10c(0x04)
	float ErrorStateSecondsToMaxRatio; // 0x110(0x04)
	float LinearErrorThreshold; // 0x114(0x04)
	float LinearVelocitySleepThreshold; // 0x118(0x04)
	float BulletImpactMultiplier; // 0x11c(0x04)
	float ExplosionImpactMultiplier; // 0x120(0x04)
	float SecondsWithVehicleCollision; // 0x124(0x04)
	char pad_128[0x1]; // 0x128(0x01)
	enum class ESQSoldierRagdollReason RagdollState; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	struct FVector_NetQuantize100 ServerPelvisLocationZeroBased; // 0x12c(0x0c)
	struct FVector UnragdolLocationOffset; // 0x138(0x0c)
	char pad_144[0x14]; // 0x144(0x14)
	char bBodyHasSettled : 1; // 0x158(0x01)
	char pad_158_1 : 7; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct ASQEquipableItem* DroppedWeapon; // 0x160(0x08)
	struct ASQSoldierNew* OwnerSoldier; // 0x168(0x08)
	char pad_170[0x10]; // 0x170(0x10)
	struct UPhysicsHandleComponent* FreezeBodyConstraintHandle; // 0x180(0x08)

	void SetRagdollState(enum class ESQSoldierRagdollReason NewRagdollState); // Function Squad.SQSoldierRagdollComponent.SetRagdollState // (Native|Public|BlueprintCallable) // @ game+0x8ea3e0
	void SetDragging(bool bIsDragging); // Function Squad.SQSoldierRagdollComponent.SetDragging // (Final|Native|Public) // @ game+0x8ea350
	void ServerSetRagdollState(enum class ESQSoldierRagdollReason NewRagdollState); // Function Squad.SQSoldierRagdollComponent.ServerSetRagdollState // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x8ea2a0
	void OnRep_RagdollState(); // Function Squad.SQSoldierRagdollComponent.OnRep_RagdollState // (Native|Protected) // @ game+0x8526c0
	bool IsInRagdoll(); // Function Squad.SQSoldierRagdollComponent.IsInRagdoll // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ea0c0
	enum class ESQSoldierRagdollReason GetRagdollState(); // Function Squad.SQSoldierRagdollComponent.GetRagdollState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8e9f40
};

// Class Squad.SQSoldierWaterDamageComponent
// Size: 0x168 (Inherited: 0x168)
struct USQSoldierWaterDamageComponent : UODKWaterDamageComponent {
};

// Class Squad.SQSoundNodeDistanceDelay
// Size: 0x50 (Inherited: 0x40)
struct USQSoundNodeDistanceDelay : USoundNode {
	float SpeedOfSound; // 0x40(0x04)
	float DelayMax; // 0x44(0x04)
	float TestDistance; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Squad.SQSoundNodeEmitterListenerAudioVolumeSwitch
// Size: 0x48 (Inherited: 0x40)
struct USQSoundNodeEmitterListenerAudioVolumeSwitch : USoundNode {
	enum class ESQAudioVolumeType TestAudioVolumeType; // 0x40(0x01)
	bool bIsListener; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class Squad.SQSoundNodeFixedDistanceCrossFade
// Size: 0x58 (Inherited: 0x40)
struct USQSoundNodeFixedDistanceCrossFade : USoundNode {
	struct TArray<struct FSQDistanceDatum> CrossFadeInput; // 0x40(0x10)
	float TestDistance; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Squad.SQSoundNodeFixedDistanceSwitch
// Size: 0x68 (Inherited: 0x40)
struct USQSoundNodeFixedDistanceSwitch : USoundNode {
	struct TArray<float> TransitionDistancesInMeters; // 0x40(0x10)
	struct TArray<float> InputVolumes; // 0x50(0x10)
	float TestDistance; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Squad.SQSoundNodeFlyBy
// Size: 0x58 (Inherited: 0x40)
struct USQSoundNodeFlyBy : USoundNode {
	float SpeedOfSound; // 0x40(0x04)
	float MidpointTime; // 0x44(0x04)
	float DopplerIntensity; // 0x48(0x04)
	bool bUseListenerLocationForSoundSource; // 0x4c(0x01)
	bool bOverrideSpatialization; // 0x4d(0x01)
	bool bUseSpatialization; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float TestPitchRelativeVelocityInMeters; // 0x50(0x04)
	float TestStartTime; // 0x54(0x04)
};

// Class Squad.SQSoundNodeListenerType
// Size: 0x48 (Inherited: 0x40)
struct USQSoundNodeListenerType : USoundNode {
	bool bLooping; // 0x40(0x01)
	bool bRestartSoundWaveWhenListenerTypeChanges; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float ListenerTypeCheckFrequency; // 0x44(0x04)
};

// Class Squad.SQSoundNodeLooping
// Size: 0xb0 (Inherited: 0x40)
struct USQSoundNodeLooping : USoundNode {
	bool bIgnoreStartingBufferRequests; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FName StoppingBoolParameterName; // 0x44(0x08)
	struct FName ContinueFiringBoolParameterName; // 0x4c(0x08)
	struct FName QueuedSoundMaxLimitParameterName; // 0x54(0x08)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct USoundWave*> StartingSounds; // 0x60(0x10)
	struct TArray<struct USoundWave*> LoopingSounds; // 0x70(0x10)
	struct TArray<struct USoundWave*> FinishingSounds; // 0x80(0x10)
	int MinSamplesToInject; // 0x90(0x04)
	int MaxSamplesToInject; // 0x94(0x04)
	int SampleRate; // 0x98(0x04)
	bool bCreateStereoSoundWave; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	struct USoundConcurrency* SoundConcurrencySettings; // 0xa0(0x08)
	float MaxDuration; // 0xa8(0x04)
	int TestShotCount; // 0xac(0x04)
};

// Class Squad.SQSoundNodePhysMatSwitch
// Size: 0x58 (Inherited: 0x40)
struct USQSoundNodePhysMatSwitch : USoundNode {
	int TestPhysMatIndex; // 0x40(0x04)
	bool bPlayDefaultSoundIfPinIsEmpty; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct UPhysicalMaterial*> PhysMatInputs; // 0x48(0x10)
};

// Class Squad.SQSoundNodeRandom
// Size: 0x80 (Inherited: 0x40)
struct USQSoundNodeRandom : USoundNode {
	struct TArray<struct USoundWave*> Sounds; // 0x40(0x10)
	struct TArray<float> Weights; // 0x50(0x10)
	int PreselectAtLevelLoad; // 0x60(0x04)
	char bRandomizeWithoutReplacement : 1; // 0x64(0x01)
	char pad_64_1 : 7; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<struct FSQSoundWeight> RuntimeSounds; // 0x68(0x10)
	int RuntimeNumRandomSoundsUsed; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class Squad.SQSoundNodeRandomStart
// Size: 0x48 (Inherited: 0x40)
struct USQSoundNodeRandomStart : USoundNode {
	float StartMin; // 0x40(0x04)
	float StartMax; // 0x44(0x04)
};

// Class Squad.SQSoundNodeWavePlayer
// Size: 0x58 (Inherited: 0x40)
struct USQSoundNodeWavePlayer : USoundNode {
	struct USoundWave* SoundWave; // 0x40(0x08)
	char bLooping : 1; // 0x48(0x01)
	char bRandomizeStartTime : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float StartMin; // 0x4c(0x04)
	float StartMax; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Squad.SQSoundSplineActor
// Size: 0x270 (Inherited: 0x248)
struct ASQSoundSplineActor : AActor {
	struct USplineComponent* Spline; // 0x248(0x08)
	struct USphereComponent* Sphere; // 0x250(0x08)
	bool bDrawDebugSphere; // 0x258(0x01)
	bool bDrawDebugPoints; // 0x259(0x01)
	char pad_25A[0x2]; // 0x25a(0x02)
	float DistanceAccuracy; // 0x25c(0x04)
	struct UAudioComponent* Sound; // 0x260(0x08)
	struct APlayerCameraManager* CachedPlayerCameraManager; // 0x268(0x08)
};

// Class Squad.SQSoundWaveLooping
// Size: 0x310 (Inherited: 0x2c0)
struct USQSoundWaveLooping : USoundWave {
	char pad_2C0[0x38]; // 0x2c0(0x38)
	struct TArray<struct USoundWave*> LoopingSounds; // 0x2f8(0x10)
	char pad_308[0x8]; // 0x308(0x08)
};

// Class Squad.SQSpectatorMan
// Size: 0x310 (Inherited: 0x2d0)
struct ASQSpectatorMan : ASpectatorPawn {
	char pad_2D0[0x8]; // 0x2d0(0x08)
	enum class ESQListenerType ListenerType; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct USpringArmComponent* SpringArm; // 0x2e0(0x08)
	struct UCameraComponent* FirstPersonCameraComponent; // 0x2e8(0x08)
	struct UTexture* CameraManHUDIconTexture; // 0x2f0(0x08)
	bool bIsTryingToGainAltitude; // 0x2f8(0x01)
	bool bIsTryingToLoseAltitude; // 0x2f9(0x01)
	char pad_2FA[0x16]; // 0x2fa(0x16)

	void ServerSetFlySpeedTarget(float InFlySpeedTarget); // Function Squad.SQSpectatorMan.ServerSetFlySpeedTarget // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8ea1f0
	void ServerSetDecelerationTarget(float InDecelerationTarget); // Function Squad.SQSpectatorMan.ServerSetDecelerationTarget // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x8ea140
	void DrawHUD(struct ASQHUD* SquadHUD, struct UCanvas* Canvas); // Function Squad.SQSpectatorMan.DrawHUD // (Native|Event|Public|BlueprintEvent) // @ game+0x8e9d50
};

// Class Squad.SQSquad
// Size: 0x6e8 (Inherited: 0x248)
struct ASQSquad : AInfo {
	struct TArray<struct ASQMapMarker*> LatestSpotMarkers; // 0x248(0x10)
	struct TArray<struct ASQMapMarker*> LatestActionMarkers; // 0x258(0x10)
	struct TArray<struct ASQMapMarker*> LatestPOIMarkers; // 0x268(0x10)
	struct TArray<struct ASQMapMarker*> LatestFireteamMarkers; // 0x278(0x10)
	struct TArray<struct ASQMapMarker*> LatestRequestMarkers; // 0x288(0x10)
	struct ASQTeam* Team; // 0x298(0x08)
	struct ASQSquadState* SquadStateClass; // 0x2a0(0x08)
	struct ASQSquadStatePrivateToTeam* TeamPrivateSquadStateClass; // 0x2a8(0x08)
	struct ASQSquadRallyPoint* SquadRallyPointClass; // 0x2b0(0x08)
	struct ASQSquadState* SquadState; // 0x2b8(0x08)
	struct ASQSquadStatePrivateToTeam* TeamPrivateSquadState; // 0x2c0(0x08)
	struct ASQPlayerController* Leader; // 0x2c8(0x08)
	float RejoinSquadDelayAfterKick; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct ASQSquadRallyPoint* rallypoint; // 0x2d8(0x08)
	float RpMembersToPlaceRadius; // 0x2e0(0x04)
	float RpEnemiesNearCheckRadius; // 0x2e4(0x04)
	int RpNeededMembersToPlace; // 0x2e8(0x04)
	int RpNonSLMemberPunishment; // 0x2ec(0x04)
	struct FText RpMembersErrorMessage; // 0x2f0(0x18)
	struct FText RpMembersNonSlErrorMessage; // 0x308(0x18)
	struct FText RpTimerErrorMessage; // 0x320(0x18)
	struct FText RpEnemiesNearErrorMessage; // 0x338(0x18)
	struct FText PlayerJoinedMessage; // 0x350(0x18)
	struct FText PlayerLeftMessage; // 0x368(0x18)
	struct FText LeaderChangedMessage; // 0x380(0x18)
	struct FText RpLeaderChangedTimeMessage; // 0x398(0x18)
	float RpLastPlacementTime; // 0x3b0(0x04)
	float RpTimeToReset; // 0x3b4(0x04)
	float RpEnemiesNearbyTimeSubtract; // 0x3b8(0x04)
	float RpLeaderChangedResetTime; // 0x3bc(0x04)
	bool bRpUsesLeaderChangeResetTime; // 0x3c0(0x01)
	bool RpUsesResetTimer; // 0x3c1(0x01)
	char pad_3C2[0x2]; // 0x3c2(0x02)
	float ClaimingGracePeriod; // 0x3c4(0x04)
	int ClaimingTotalNumMembersNeededTogether; // 0x3c8(0x04)
	float ClaimingMembersTogetherRadius; // 0x3cc(0x04)
	int ClaimingNumMembersInSquadForOne; // 0x3d0(0x04)
	int ClaimingNumMembersInSquadForTwo; // 0x3d4(0x04)
	int ClaimingNumMembersInSquadForThree; // 0x3d8(0x04)
	int ClaimingNumMembersInSquadForFour; // 0x3dc(0x04)
	float ClaimingTimeToExpire; // 0x3e0(0x04)
	int NumberOfMembersWithVehicleClaimToMakeSquadPartyToClaim; // 0x3e4(0x04)
	struct TArray<struct USQVehicleClaim*> VehicleClaims; // 0x3e8(0x10)
	struct FText ActiveVehicleClaimDroppedNearMainBaseMessage; // 0x3f8(0x18)
	struct FText ActiveVehicleClaimDroppedNearFireBaseMessage; // 0x410(0x18)
	struct FText ActiveVehicleClaimDroppedOnBattlefieldMessage; // 0x428(0x18)
	struct FText ActiveVehicleClaimDestroyedMessage; // 0x440(0x18)
	struct FText ActiveVehicleClaimPickedUpMessage; // 0x458(0x18)
	struct FText NeedLeaderRoleToClaimVehicleMessage; // 0x470(0x18)
	struct FText OverVehicleClaimingLimitMessage; // 0x488(0x18)
	struct FText OverVehicleClaimingLimitActiveUseDetailsMessage; // 0x4a0(0x18)
	struct FText OverVehicleClaimingLimitDestroyedDetailsMessage; // 0x4b8(0x18)
	struct FText OverVehicleClaimingLimitLeftDetailsMessage; // 0x4d0(0x18)
	struct FText OverVehicleClaimingLimitDestroyedOrLeftDetailsMessage; // 0x4e8(0x18)
	struct FText OverVehicleClaimingLimitDestroyedOrLeftTimerMessage; // 0x500(0x18)
	struct FText NotEnoughMembersForClaimingSingleVehicleMessage; // 0x518(0x18)
	struct FText NotEnoughMembersNearToClaimVehicleMessage; // 0x530(0x18)
	struct FText VehicleClaimSuccessMessage; // 0x548(0x18)
	struct FText ClaimGracePeriodFailMessage; // 0x560(0x18)
	struct FText UnableToReleaseOlderVehicleClaimMessage; // 0x578(0x18)
	struct FText AnotherSquadClaimedOurVehicleMessage; // 0x590(0x18)
	struct FText UnableToApproveVehicleClaimMessage; // 0x5a8(0x18)
	struct FText KickedFromSquadMessage; // 0x5c0(0x18)
	struct FText LeftSquadMessage; // 0x5d8(0x18)
	struct FText ForceRecruitKitMessage; // 0x5f0(0x18)
	struct TArray<struct FSQFireTeam> FireTeams; // 0x608(0x10)
	struct USQConfig* SquadConfig; // 0x618(0x08)
	struct ASQVehicle* LastVehicleMemberFailedToEnter; // 0x620(0x08)
	char pad_628[0x50]; // 0x628(0x50)
	struct FScriptMulticastDelegate OnPlayerJoinSquad; // 0x678(0x10)
	struct FScriptMulticastDelegate OnPlayerPartSquad; // 0x688(0x10)
	struct FScriptMulticastDelegate OnPlayerBecomeSquadLeader; // 0x698(0x10)
	struct FScriptMulticastDelegate OnFireteamDisbanded; // 0x6a8(0x10)
	struct FScriptMulticastDelegate OnFireteamUpdated; // 0x6b8(0x10)
	char pad_6C8[0x20]; // 0x6c8(0x20)

	bool TryClaimVehicle(struct ASQVehicle* Vehicle); // Function Squad.SQSquad.TryClaimVehicle // (Final|Native|Public) // @ game+0x8ea640
	void TryApproveVehicleClaim(); // Function Squad.SQSquad.TryApproveVehicleClaim // (Final|Native|Public) // @ game+0x8ea620
	void OnPlayerJoinPartSquadEvent__DelegateSignature(struct ASQSquad* Squad, struct ASQPlayerController* Player); // DelegateFunction Squad.SQSquad.OnPlayerJoinPartSquadEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	void OnFireteamChangedEvent__DelegateSignature(struct ASQSquad* Squad, int FireTeamId); // DelegateFunction Squad.SQSquad.OnFireteamChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	bool GiveSquadLeader(struct ASQPlayerState* PlayerState); // Function Squad.SQSquad.GiveSquadLeader // (Final|Native|Public|BlueprintCallable) // @ game+0x8ea030
	struct TArray<struct USQVehicleClaim*> GetBlockingPartyVehicleClaims(); // Function Squad.SQSquad.GetBlockingPartyVehicleClaims // (Final|Native|Public|Const) // @ game+0x8e9eb0
	struct TArray<struct USQVehicleClaim*> GetBlockingDirectVehicleClaims(); // Function Squad.SQSquad.GetBlockingDirectVehicleClaims // (Final|Native|Public|Const) // @ game+0x8e9e20
};

// Class Squad.SQSquadList
// Size: 0x248 (Inherited: 0x230)
struct USQSquadList : USQUserWidget {
	bool bIsOpening; // 0x230(0x01)
	bool bIsClosing; // 0x231(0x01)
	char pad_232[0x6]; // 0x232(0x06)
	struct ASQPlayerState* OwnerPlayerState; // 0x238(0x08)
	struct ASQPlayerController* OwnerPlayerController; // 0x240(0x08)

	void InitWidget(); // Function Squad.SQSquadList.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x843e90
};

// Class Squad.SQSquadMemberList
// Size: 0x2a8 (Inherited: 0x230)
struct USQSquadMemberList : USQUserWidget {
	struct USQSquadMemberListItem* SquadMemberListItemClass; // 0x230(0x08)
	struct UImage* BG_IMGCPP; // 0x238(0x08)
	struct UImage* IconImageCPP; // 0x240(0x08)
	struct UButton* InviteButtonCPP; // 0x248(0x08)
	struct UTextBlock* InviteButtonTextCPP; // 0x250(0x08)
	struct UTextBlock* MemberCountCPP; // 0x258(0x08)
	struct UButton* LockButtonCPP; // 0x260(0x08)
	struct UTextBlock* SquadNameCPP; // 0x268(0x08)
	struct UTextBlock* SquadNumberCPP; // 0x270(0x08)
	struct UVerticalBox* MemberListBoxCPP; // 0x278(0x08)
	struct ASQPlayerController* ParentPC; // 0x280(0x08)
	char pad_288[0x18]; // 0x288(0x18)
	struct ASQPlayerState* CurrentlyOpenedItemPS; // 0x2a0(0x08)

	void RefreshSquadInfo(); // Function Squad.SQSquadMemberList.RefreshSquadInfo // (Final|Native|Protected|BlueprintCallable) // @ game+0x8ed890
	void RefreshList(); // Function Squad.SQSquadMemberList.RefreshList // (Final|Native|Protected|BlueprintCallable) // @ game+0x8ed870
	void OnLockButtonClicked(); // Function Squad.SQSquadMemberList.OnLockButtonClicked // (Final|Native|Protected) // @ game+0x843e90
	void OnInviteButtonClicked(); // Function Squad.SQSquadMemberList.OnInviteButtonClicked // (Final|Native|Protected) // @ game+0x8ed730
	void Init(); // Function Squad.SQSquadMemberList.Init // (Final|Native|Protected|BlueprintCallable) // @ game+0x8ed690
};

// Class Squad.SQSquadMemberListItem
// Size: 0x2e0 (Inherited: 0x230)
struct USQSquadMemberListItem : USQUserWidget {
	struct TArray<struct UTexture2D*> RankTextures; // 0x230(0x10)
	struct UButton* ActionMenuBtnCPP; // 0x240(0x08)
	struct UButton* PromoteToSLBtnCPP; // 0x248(0x08)
	struct UButton* KickBtnCPP; // 0x250(0x08)
	struct UButton* SLInviteBtnCPP; // 0x258(0x08)
	struct TArray<struct UVerticalBox*> MenuPanelsCPP; // 0x260(0x10)
	struct UImage* KitBGCPP; // 0x270(0x08)
	struct UImage* KitIconCPP; // 0x278(0x08)
	struct UTextBlock* NamePCPP; // 0x280(0x08)
	struct UImage* NameBGCPP; // 0x288(0x08)
	struct UImage* RankBGCPP; // 0x290(0x08)
	struct UImage* RankIconCPP; // 0x298(0x08)
	struct UImage* VehicleBGCPP; // 0x2a0(0x08)
	struct UImage* VehicleIconCPP; // 0x2a8(0x08)
	struct UImage* WeaponIconCPP; // 0x2b0(0x08)
	struct UTextBlock* PlayerNameCPP; // 0x2b8(0x08)
	struct ASQPlayerState* PlayerStateIdentifier; // 0x2c0(0x08)
	char pad_2C8[0x4]; // 0x2c8(0x04)
	bool bIsHovering; // 0x2cc(0x01)
	char pad_2CD[0xb]; // 0x2cd(0x0b)
	struct USQSquadMemberList* Manager; // 0x2d8(0x08)

	void ShowActionMenu(int MenuIdx); // Function Squad.SQSquadMemberListItem.ShowActionMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x8edb50
	void OnSLInvite(); // Function Squad.SQSquadMemberListItem.OnSLInvite // (Final|Native|Protected) // @ game+0x8ed850
	void OnPromoteToSL(); // Function Squad.SQSquadMemberListItem.OnPromoteToSL // (Final|Native|Protected) // @ game+0x8ed770
	void OnKick(); // Function Squad.SQSquadMemberListItem.OnKick // (Final|Native|Protected) // @ game+0x8ed750
	void OnActionButton(); // Function Squad.SQSquadMemberListItem.OnActionButton // (Final|Native|Protected) // @ game+0x8ed710
	void InitEventHandlers(); // Function Squad.SQSquadMemberListItem.InitEventHandlers // (Final|Native|Protected|BlueprintCallable) // @ game+0x8ed6b0
	void BPInitWidgetRefs(); // Function Squad.SQSquadMemberListItem.BPInitWidgetRefs // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQSquadRallyPoint
// Size: 0x450 (Inherited: 0x440)
struct ASQSquadRallyPoint : ASQGameRallyPoint {
	struct ASQSquad* AuthoritySquad; // 0x440(0x08)
	struct ASQSquadState* SquadState; // 0x448(0x08)

	void OnRep_SquadState(); // Function Squad.SQSquadRallyPoint.OnRep_SquadState // (Native|Public) // @ game+0x86d740
};

// Class Squad.SQSquadSelection
// Size: 0x268 (Inherited: 0x230)
struct USQSquadSelection : USQUserWidget {
	struct ASQPlayerController* OwnerPlayerController; // 0x230(0x08)
	struct UCanvasPanel* CreateSquadCanvas; // 0x238(0x08)
	struct USQCreateSquadButton* CreateSquadButton; // 0x240(0x08)
	struct UEditableTextBox* SquadNameTextBox; // 0x248(0x08)
	struct UScrollBox* SquadsList; // 0x250(0x08)
	struct FScriptMulticastDelegate OnNewSquadCreated; // 0x258(0x10)

	void ShowSquadCreationWidgets(); // Function Squad.SQSquadSelection.ShowSquadCreationWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x8edbd0
	void SelfTick(); // Function Squad.SQSquadSelection.SelfTick // (Final|Native|Public|BlueprintCallable) // @ game+0x8edb30
	void RethrowSquadCreated(); // Function Squad.SQSquadSelection.RethrowSquadCreated // (Final|Native|Public) // @ game+0x8ed8b0
	void LeaveSquad(); // Function Squad.SQSquadSelection.LeaveSquad // (Final|Native|Public|BlueprintCallable) // @ game+0x8ed6f0
	void InitWidget(); // Function Squad.SQSquadSelection.InitWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x8ed6d0
	void HideSquadCreationWidgets(); // Function Squad.SQSquadSelection.HideSquadCreationWidgets // (Final|Native|Public|BlueprintCallable) // @ game+0x8ed670
};

// Class Squad.SQSquadState
// Size: 0x338 (Inherited: 0x248)
struct ASQSquadState : AInfo {
	struct ASQSquad* AuthoritySquad; // 0x248(0x08)
	int MaxSize; // 0x250(0x04)
	int NumKills; // 0x254(0x04)
	int NumDeaths; // 0x258(0x04)
	int NumWoundeds; // 0x25c(0x04)
	int NumWounds; // 0x260(0x04)
	int NumTeamkills; // 0x264(0x04)
	float Score; // 0x268(0x04)
	float TeamWorkScore; // 0x26c(0x04)
	float ObjectiveScore; // 0x270(0x04)
	float HealPoints; // 0x274(0x04)
	float RevivedPoints; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct USQCoreStateComponent* StateObject; // 0x280(0x08)
	bool bIsCommandSquad; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	int ID; // 0x28c(0x04)
	int TeamId; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct ASQPlayerState*> PlayerStates; // 0x298(0x10)
	struct ASQPlayerState* LeaderState; // 0x2a8(0x08)
	struct FString Name; // 0x2b0(0x10)
	bool bIsLocked; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float CreationTimeStamp; // 0x2c4(0x04)
	struct FString SquadCreatorName; // 0x2c8(0x10)
	struct FString SquadCreatorSteamID; // 0x2d8(0x10)
	char pad_2E8[0x50]; // 0x2e8(0x50)

	void ScorePointsDelayed(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQSquadState.ScorePointsDelayed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8eda00
	void ScorePoints(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQSquadState.ScorePoints // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8ed8d0
	void RemovePlayerState(struct ASQPlayerState* PlayerState); // Function Squad.SQSquadState.RemovePlayerState // (Native|Public) // @ game+0x844930
	void OnRep_TeamId(); // Function Squad.SQSquadState.OnRep_TeamId // (Final|Native|Public) // @ game+0x8ed790
	void OnRep_PlayerStates(); // Function Squad.SQSquadState.OnRep_PlayerStates // (Final|Native|Public) // @ game+0x8ed830
	void OnRep_Name(); // Function Squad.SQSquadState.OnRep_Name // (Final|Native|Public) // @ game+0x8ed790
	void OnRep_LeaderState(struct ASQPlayerState* LastLeaderState); // Function Squad.SQSquadState.OnRep_LeaderState // (Final|Native|Public) // @ game+0x8ed7b0
	void OnRep_IsLocked(); // Function Squad.SQSquadState.OnRep_IsLocked // (Final|Native|Public) // @ game+0x8ed790
	void OnRep_Id(); // Function Squad.SQSquadState.OnRep_Id // (Final|Native|Public) // @ game+0x8ed790
	int GetPlayerCount(); // Function Squad.SQSquadState.GetPlayerCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ed5c0
	void BroadcastPlayerLeaveEvent(struct ASQPlayerState* PlayerState); // Function Squad.SQSquadState.BroadcastPlayerLeaveEvent // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x8ed4e0
	void BroadcastPlayerJoinEvent(struct ASQPlayerState* PlayerState); // Function Squad.SQSquadState.BroadcastPlayerJoinEvent // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x8ed430
	void BroadcastLeaderChangeEvent(struct ASQPlayerState* PlayerState); // Function Squad.SQSquadState.BroadcastLeaderChangeEvent // (Net|NetReliableNative|Event|NetMulticast|Public|NetValidate) // @ game+0x8ed380
	void AddPlayerState(struct ASQPlayerState* PlayerState); // Function Squad.SQSquadState.AddPlayerState // (Native|Public) // @ game+0x8449c0
};

// Class Squad.SQSquadStateData
// Size: 0x118 (Inherited: 0xd0)
struct USQSquadStateData : USQCoreStateData {
	enum class ESQMapMarkerVisibleTo Visibility; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct APawn*> AdminTypes; // 0xd8(0x10)
	bool bVisibleWhenNeutral; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct ASQSquadState* SquadState; // 0xf0(0x08)
	int SquadId; // 0xf8(0x04)
	int TeamId; // 0xfc(0x04)
	char pad_100[0x8]; // 0x100(0x08)
	struct ASQSquadState* CachedSquadState; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
};

// Class Squad.SQSquadStateMapData
// Size: 0x180 (Inherited: 0x118)
struct USQSquadStateMapData : USQSquadStateData {
	char pad_118[0x8]; // 0x118(0x08)
	struct USQCoreStateMapWidget* MapWidgetClass; // 0x120(0x08)
	float WorldLocationTolerance; // 0x128(0x04)
	bool bInterpolateWorldLocation; // 0x12c(0x01)
	bool bUseWorldRotation; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
	float YawTolerance; // 0x130(0x04)
	bool bInterpolateYaw; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct FVector WorldLocation; // 0x138(0x0c)
	float Yaw; // 0x144(0x04)
	char PackedYaw; // 0x148(0x01)
	char pad_149[0xb]; // 0x149(0x0b)
	struct FVector_NetQuantize RepWorldLocation; // 0x154(0x0c)
	char pad_160[0x20]; // 0x160(0x20)
};

// Class Squad.SQSquadStateDataDeployable
// Size: 0x188 (Inherited: 0x180)
struct USQSquadStateDataDeployable : USQSquadStateMapData {
	enum class ESQBuildState BuildState; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// Class Squad.SQSquadStateDataAmmoCrate
// Size: 0x188 (Inherited: 0x188)
struct USQSquadStateDataAmmoCrate : USQSquadStateDataDeployable {
};

// Class Squad.SQSquadStateDataPawn
// Size: 0x1a8 (Inherited: 0x180)
struct USQSquadStateDataPawn : USQSquadStateMapData {
	bool bHiddenWhenUnpossessed; // 0x180(0x01)
	bool bHiddenWhenNotLocallyControlled; // 0x181(0x01)
	bool bHideWidgetWhenUnpossessed; // 0x182(0x01)
	char pad_183[0x1]; // 0x183(0x01)
	float CameraRotaionYawTolerance; // 0x184(0x04)
	struct ASQPlayerState* OwnerPlayerState; // 0x188(0x08)
	char pad_190[0x4]; // 0x190(0x04)
	int CachedPlayerId; // 0x194(0x04)
	int FireTeamIndex; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
	struct ASQPlayerState* CachedOwnerPlayerState; // 0x1a0(0x08)
};

// Class Squad.SQSquadStateDataCameraman
// Size: 0x1a8 (Inherited: 0x1a8)
struct USQSquadStateDataCameraman : USQSquadStateDataPawn {
};

// Class Squad.SQSquadStateDataCaptureZone
// Size: 0x208 (Inherited: 0x180)
struct USQSquadStateDataCaptureZone : USQSquadStateMapData {
	struct FText FlagName; // 0x180(0x18)
	char bUncappable : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct UTexture2D* FlagTexture; // 0x1a0(0x28)
	struct UTexture2D* NeutralFlag; // 0x1c8(0x28)
	char OwningTeam; // 0x1f0(0x01)
	char CapturingTeam; // 0x1f1(0x01)
	char pad_1F2[0x2]; // 0x1f2(0x02)
	uint32 TeamCapturabilities; // 0x1f4(0x04)
	uint32 TeamKnowledge; // 0x1f8(0x04)
	float CapturePercent; // 0x1fc(0x04)
	uint32 CapturePercentDirection; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
};

// Class Squad.SQSquadStateDataDeployableExplosive
// Size: 0x190 (Inherited: 0x188)
struct USQSquadStateDataDeployableExplosive : USQSquadStateDataDeployable {
	enum class ESQExplosiveType ExplosiveType; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// Class Squad.SQSquadStateDataSQPawn
// Size: 0x1a8 (Inherited: 0x1a8)
struct USQSquadStateDataSQPawn : USQSquadStateDataPawn {
};

// Class Squad.SQSquadStateDataVehicleSeat
// Size: 0x1a8 (Inherited: 0x1a8)
struct USQSquadStateDataVehicleSeat : USQSquadStateDataSQPawn {
};

// Class Squad.SQSquadStateDataVehicle
// Size: 0x2d0 (Inherited: 0x1a8)
struct USQSquadStateDataVehicle : USQSquadStateDataVehicleSeat {
	struct USQVehicleUIStaticDataAsset* StaticUIData; // 0x1a8(0x08)
	char bHoldsOccupant : 1; // 0x1b0(0x01)
	char bHoldsSquadLeader : 1; // 0x1b0(0x01)
	char pad_1B0_2 : 6; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	int ClaimingSquadID; // 0x1b4(0x04)
	struct FVehicleOccupantsArray VehicleOccupants; // 0x1b8(0x118)
};

// Class Squad.SQSquadStateDataEmplacement
// Size: 0x2d0 (Inherited: 0x2d0)
struct USQSquadStateDataEmplacement : USQSquadStateDataVehicle {
};

// Class Squad.SQSquadStateDataForwardBase
// Size: 0x1a0 (Inherited: 0x188)
struct USQSquadStateDataForwardBase : USQSquadStateDataDeployable {
	char bCanSpawn : 1; // 0x188(0x01)
	char bSieged : 1; // 0x188(0x01)
	char bIsBleeding : 1; // 0x188(0x01)
	char pad_188_3 : 5; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float MinActivatedTimeStamp; // 0x18c(0x04)
	float ExclusionRadius; // 0x190(0x04)
	float ConstructionRadius; // 0x194(0x04)
	float AmmoPoints; // 0x198(0x04)
	float ConstructionPoints; // 0x19c(0x04)
};

// Class Squad.SQSquadStateDataHAB
// Size: 0x190 (Inherited: 0x188)
struct USQSquadStateDataHAB : USQSquadStateDataDeployable {
	char bSieged : 1; // 0x188(0x01)
	char bSpawningEnabled : 1; // 0x188(0x01)
	char pad_188_2 : 6; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float ActivatedTimeStamp; // 0x18c(0x04)
};

// Class Squad.SQSquadStateDataHABInterface
// Size: 0x28 (Inherited: 0x28)
struct USQSquadStateDataHABInterface : UInterface {

	struct ASQGameSpawn* GetGameSpawn(); // Function Squad.SQSquadStateDataHABInterface.GetGameSpawn // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8ed590
};

// Class Squad.SQSquadStateDataMapMarker
// Size: 0x1a0 (Inherited: 0x180)
struct USQSquadStateDataMapMarker : USQSquadStateMapData {
	struct UTexture2D* Texture; // 0x180(0x08)
	struct FLinearColor Tint; // 0x188(0x10)
	int FireTeamId; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// Class Squad.SQSquadStateDataMapMarkerObjective
// Size: 0x1a0 (Inherited: 0x1a0)
struct USQSquadStateDataMapMarkerObjective : USQSquadStateDataMapMarker {
};

// Class Squad.SQSquadStateDataMapMarkerSelectable
// Size: 0x1a8 (Inherited: 0x1a0)
struct USQSquadStateDataMapMarkerSelectable : USQSquadStateDataMapMarker {
	struct USQMapIconComponent* MapIcon; // 0x1a0(0x08)
};

// Class Squad.SQSquadStateDataMapMarkerSpotted
// Size: 0x1a8 (Inherited: 0x1a8)
struct USQSquadStateDataMapMarkerSpotted : USQSquadStateDataMapMarkerSelectable {
};

// Class Squad.SQSquadStateDataMapMarkerWaypoint
// Size: 0x1a8 (Inherited: 0x1a8)
struct USQSquadStateDataMapMarkerWaypoint : USQSquadStateDataMapMarkerSelectable {
};

// Class Squad.SQSquadStateDataPlayerState
// Size: 0x178 (Inherited: 0x118)
struct USQSquadStateDataPlayerState : USQSquadStateData {
	char bIsSquadLeader : 1; // 0x118(0x01)
	char bIsFireTeamLeader : 1; // 0x118(0x01)
	char pad_118_2 : 6; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	int FireTeamIndex; // 0x11c(0x04)
	int FireTeamPosition; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct USQRoleSettings* DeployRole; // 0x128(0x08)
	struct USQVehicleUIStaticDataAsset* CurrentVehicleData; // 0x130(0x08)
	struct ASQPlayerState* PlayerState; // 0x138(0x08)
	int PlayerId; // 0x140(0x04)
	struct FSQCoreStateId SelectionComponentId; // 0x144(0x02)
	enum class ESQVoiceChannel VoipChannel; // 0x146(0x01)
	bool bIsMuted; // 0x147(0x01)
	char pad_148[0x30]; // 0x148(0x30)

	struct FString GetPlayerName(); // Function Squad.SQSquadStateDataPlayerState.GetPlayerName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ed5e0
};

// Class Squad.SQSquadStateDataSpawnPoint
// Size: 0x198 (Inherited: 0x180)
struct USQSquadStateDataSpawnPoint : USQSquadStateMapData {
	struct ASQGameSpawn* OwningGameSpawn; // 0x180(0x08)
	enum class ESQSpawnPointType SpawnPointType; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	char bSieged : 1; // 0x18c(0x01)
	char bSpawningEnabled : 1; // 0x18c(0x01)
	char pad_18C_2 : 6; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	float ActivatedTimeStamp; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
};

// Class Squad.SQSquadStateDataRallyPoint
// Size: 0x1a0 (Inherited: 0x198)
struct USQSquadStateDataRallyPoint : USQSquadStateDataSpawnPoint {
	int NumberOfSpawns; // 0x198(0x04)
	char pad_19C[0x4]; // 0x19c(0x04)
};

// Class Squad.SQSquadStateDataRepairStation
// Size: 0x188 (Inherited: 0x188)
struct USQSquadStateDataRepairStation : USQSquadStateDataDeployable {
};

// Class Squad.SQSquadStateDataSoldier
// Size: 0x1d8 (Inherited: 0x1a8)
struct USQSquadStateDataSoldier : USQSquadStateDataPawn {
	float HealthStatusRange; // 0x1a8(0x04)
	char bIsBleeding : 1; // 0x1ac(0x01)
	char bIsWounded : 1; // 0x1ac(0x01)
	char bIsAlive : 1; // 0x1ac(0x01)
	char bIsInVehicle : 1; // 0x1ac(0x01)
	char bIsUsingFreeLook : 1; // 0x1ac(0x01)
	char bIsMedic : 1; // 0x1ac(0x01)
	char pad_1AC_6 : 2; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct FSQSoldierInfo SoldierInfo; // 0x1b0(0x28)
};

// Class Squad.SQSquadStateDataSquadState
// Size: 0x140 (Inherited: 0x118)
struct USQSquadStateDataSquadState : USQSquadStateData {
	struct FString SquadName; // 0x118(0x10)
	struct FString LeaderName; // 0x128(0x10)
	char MemberNum; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	char bIsLocked : 1; // 0x13c(0x01)
	char bIsCommandSquad : 1; // 0x13c(0x01)
	char pad_13C_2 : 6; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
};

// Class Squad.SQSquadStatePrivateToTeam
// Size: 0x268 (Inherited: 0x248)
struct ASQSquadStatePrivateToTeam : AInfo {
	char pad_248[0x8]; // 0x248(0x08)
	struct ASQSquad* AuthoritySquad; // 0x250(0x08)
	struct ASQTeamStatePrivate* PrivateTeamState; // 0x258(0x08)
	struct ASQSquadState* SquadState; // 0x260(0x08)
};

// Class Squad.SQStagingTimerText
// Size: 0x268 (Inherited: 0x230)
struct USQStagingTimerText : UUserWidget {
	int NearZeroThreshold; // 0x230(0x04)
	char pad_234[0x4]; // 0x234(0x04)
	struct ASQTeamPrep* TeamPrepRef; // 0x238(0x08)
	struct UTextBlock* TextBlockCPP; // 0x240(0x08)
	struct FText StagingPhaseText; // 0x248(0x18)
	char pad_260[0x8]; // 0x260(0x08)

	void OnFellBelowThreshold(); // Function Squad.SQStagingTimerText.OnFellBelowThreshold // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQStatefulButton
// Size: 0x288 (Inherited: 0x230)
struct USQStatefulButton : USQUserWidget {
	struct TArray<struct UTexture2D*> StateImages; // 0x230(0x10)
	struct FLinearColor NormalTint; // 0x240(0x10)
	struct FLinearColor HoveredTint; // 0x250(0x10)
	struct UImage* CurrentImage; // 0x260(0x08)
	bool bIsHovering; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float HoveringColorBlend; // 0x26c(0x04)
	float HoverColorBlendSpeed; // 0x270(0x04)
	char pad_274[0x14]; // 0x274(0x14)

	void OnPressed(); // Function Squad.SQStatefulButton.OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	int GetCurrentState(); // Function Squad.SQStatefulButton.GetCurrentState // (Final|Native|Public|BlueprintCallable) // @ game+0x89a840
	void ChangeImage(int ImageIndex); // Function Squad.SQStatefulButton.ChangeImage // (Native|Public|BlueprintCallable) // @ game+0x8f4bc0
};

// Class Squad.SQStaticTurretMovementComponent
// Size: 0x270 (Inherited: 0x250)
struct USQStaticTurretMovementComponent : USQNetMoveComponent {
	bool bApplyRotationToUpdatedComponent; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct USceneComponent* YawComponent; // 0x258(0x08)
	struct USceneComponent* PitchComponent; // 0x260(0x08)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class Squad.SQSteamInventory
// Size: 0x160 (Inherited: 0x30)
struct USQSteamInventory : UGameInstanceSubsystem {
	char pad_30[0x28]; // 0x30(0x28)
	struct UDataTable* SupporterPatches; // 0x58(0x08)
	struct UDataTable* WeaponReplacements; // 0x60(0x08)
	struct UDataTable* ClanPacks; // 0x68(0x08)
	struct UCoreGetAllItemsCallbackProxy* CallbackProxy; // 0x70(0x08)
	int DefaultOWIClanPatchID; // 0x78(0x04)
	int DefaultClanFounderPatchID; // 0x7c(0x04)
	int DefaultClanFounderTagID; // 0x80(0x04)
	char pad_84[0xdc]; // 0x84(0xdc)

	void OnGetCacheSuccess(struct TArray<struct FBlueprintOnlineItem>& Results); // Function Squad.SQSteamInventory.OnGetCacheSuccess // (Final|Native|Public|HasOutParms) // @ game+0x8f5460
};

// Class Squad.SQSteamInventoryUI
// Size: 0xe8 (Inherited: 0x30)
struct USQSteamInventoryUI : UGameInstanceSubsystem {
	struct FScriptMulticastDelegate OnCachedSteamItems; // 0x30(0x10)
	struct TMap<int, struct USQSteamItem*> CachedSteamIds; // 0x40(0x50)
	char pad_90[0x50]; // 0x90(0x50)
	struct UCoreGetAllItemsCallbackProxy* CallbackProxy; // 0xe0(0x08)

	void OnGetCacheSuccess(struct TArray<struct FBlueprintOnlineItem>& Results); // Function Squad.SQSteamInventoryUI.OnGetCacheSuccess // (Final|Native|Public|HasOutParms) // @ game+0x8f5570
	struct TArray<struct USQSteamItem*> GetItemsOfClass(struct USQSteamItem* ItemClass); // Function Squad.SQSteamInventoryUI.GetItemsOfClass // (Final|Native|Public|BlueprintCallable) // @ game+0x8f5090
	struct TArray<struct USQSteamItem*> GetIncompatibleItems(struct USQSteamItem* ItemToCheckFor, bool bEnabledOnly); // Function Squad.SQSteamInventoryUI.GetIncompatibleItems // (Final|Native|Public|BlueprintCallable) // @ game+0x8f4f80
	struct USQSteamItem* GetFirstIncompatibleItem(struct USQSteamItem* ItemToCheckFor, bool bEnabledOnly); // Function Squad.SQSteamInventoryUI.GetFirstIncompatibleItem // (Final|Native|Public|BlueprintCallable) // @ game+0x8f4eb0
	void CacheSteamItems(); // Function Squad.SQSteamInventoryUI.CacheSteamItems // (Final|Native|Public|BlueprintCallable) // @ game+0x8f4ba0
};

// Class Squad.SQSteamInventoryUIBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQSteamInventoryUIBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	struct USQSteamInventoryUI* GetSteamInventory(struct UObject* WorldContextObject); // Function Squad.SQSteamInventoryUIBlueprintFunctionLibrary.GetSteamInventory // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8f52a0
};

// Class Squad.SQSteamItem
// Size: 0x40 (Inherited: 0x28)
struct USQSteamItem : UObject {
	int SteamId; // 0x28(0x04)
	bool bEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FScriptMulticastDelegate OnStateChanged; // 0x30(0x10)

	bool SetEnabled(bool bNewEnable, bool bOverrideIncompatibles); // Function Squad.SQSteamItem.SetEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x8f6400
	bool IsCompatibleWith(struct USQSteamItem* OtherItem); // Function Squad.SQSteamItem.IsCompatibleWith // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8f53a0
};

// Class Squad.SQWeaponSkinData
// Size: 0xc8 (Inherited: 0x40)
struct USQWeaponSkinData : USQSteamItem {
	struct FSQWeaponReplacementItem ReplacementData; // 0x40(0x88)
};

// Class Squad.SQSupporterPatchData
// Size: 0x80 (Inherited: 0x40)
struct USQSupporterPatchData : USQSteamItem {
	struct FSQPatchItem PatchData; // 0x40(0x40)
};

// Class Squad.SQMainPatchData
// Size: 0x80 (Inherited: 0x40)
struct USQMainPatchData : USQSteamItem {
	struct FSQPatchItem PatchData; // 0x40(0x40)
};

// Class Squad.SQSuppressionInfo
// Size: 0x48 (Inherited: 0x28)
struct USQSuppressionInfo : UObject {
	float SuppressSwayFactorRelease; // 0x28(0x04)
	float AddSuppressSway; // 0x2c(0x04)
	float MinSuppressSwayFactor; // 0x30(0x04)
	float MaxSuppressSwayFactor; // 0x34(0x04)
	float LofSuppressRange; // 0x38(0x04)
	float LofSuppressInterpSpeed; // 0x3c(0x04)
	float LofSuppressAlphaFactor; // 0x40(0x04)
	float LofSuppressRotationAlphaRelease; // 0x44(0x04)
};

// Class Squad.SQSwitchTeamButton
// Size: 0x2f0 (Inherited: 0x2e8)
struct USQSwitchTeamButton : USQBaseButton {
	struct ASQPlayerController* OwnerPlayerController; // 0x2e8(0x08)
};

// Class Squad.SQTabButton
// Size: 0x310 (Inherited: 0x2e8)
struct USQTabButton : USQBaseButton {
	char pad_2E8[0x8]; // 0x2e8(0x08)
	struct UWidgetSwitcher* ParentWidgetSwitcher; // 0x2f0(0x08)
	struct UImage* MainBgImage; // 0x2f8(0x08)
	struct UTextBlock* TabTextBlock; // 0x300(0x08)
	struct ASQPlayerState* OwnerPlayerState; // 0x308(0x08)
};

// Class Squad.SQTeamDataCacher
// Size: 0x108 (Inherited: 0xd8)
struct USQTeamDataCacher : UActorComponent {
	struct TArray<struct UObject*> LoadedClasses; // 0xd8(0x10)
	struct TArray<struct UObject*> LoadedCDOs; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)
};

// Class Squad.SQTeamInfo
// Size: 0x380 (Inherited: 0x28)
struct USQTeamInfo : UObject {
	struct FString ShortName; // 0x28(0x10)
	struct FString Name; // 0x38(0x10)
	struct FText Description; // 0x48(0x18)
	struct FText CommanderRequirementsText; // 0x60(0x18)
	bool bBuddyRallyPointEnabled; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct ASQSoldier* SoldierClass; // 0x80(0x08)
	struct UStaticMesh* RallyPointMesh; // 0x88(0x08)
	struct TArray<struct USQRoleSettings*> Roles; // 0x90(0x10)
	struct TArray<struct FSQRoleGroupLimit> GroupLimits; // 0xa0(0x10)
	struct TArray<struct FSQDeployableLimit> DeployableFOBLimits; // 0xb0(0x10)
	struct USQRoleSettings* DefaultRole; // 0xc0(0x08)
	struct USQRoleSettings* LeaveSquadRole; // 0xc8(0x08)
	struct UTexture2D* MapFlag; // 0xd0(0x08)
	struct UTexture2D* HudFlag; // 0xd8(0x08)
	struct UTexture2D* HudBadge; // 0xe0(0x08)
	struct UTexture2D* TeamImage; // 0xe8(0x08)
	struct FSQCommanderSounds CommanderSoundsList; // 0xf0(0x140)
	struct FSQTeamEventSounds TeamEventSoundsList; // 0x230(0xc8)
	struct FSQMedicCalls MedicCall; // 0x2f8(0x78)
	struct TArray<struct FSQObjectiveSounds> ObjectiveSoundsList; // 0x370(0x10)
};

// Class Squad.SQTeamInterface
// Size: 0x28 (Inherited: 0x28)
struct USQTeamInterface : UInterface {

	void OnTeamChange(int PreviousTeam); // Function Squad.SQTeamInterface.OnTeamChange // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8fe3c0
	int GetTeamId(); // Function Squad.SQTeamInterface.GetTeamId // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8fdd50
};

// Class Squad.SQTeamPrep
// Size: 0x298 (Inherited: 0x248)
struct ASQTeamPrep : AActor {
	int TeamId; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct UPrimitiveComponent* VehicleStagingPrimitive; // 0x250(0x08)
	char pad_258[0x18]; // 0x258(0x18)
	float StagingTimeInSeconds; // 0x270(0x04)
	int ReplicatedRemainingTime; // 0x274(0x04)
	char pad_278[0x18]; // 0x278(0x18)
	struct ASQSoldier* LocalSoldier; // 0x290(0x08)

	void StartCountdown(struct FName NewMatchState); // Function Squad.SQTeamPrep.StartCountdown // (Final|Native|Protected) // @ game+0x8fe7b0
	void OnCompExit(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQTeamPrep.OnCompExit // (Final|Native|Protected) // @ game+0x8fe1c0
	void OnCompBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQTeamPrep.OnCompBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x8fdfd0
	int GetStagingTimeRemaining(); // Function Squad.SQTeamPrep.GetStagingTimeRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdd20
	void CheckOverlap(); // Function Squad.SQTeamPrep.CheckOverlap // (Final|Native|Protected) // @ game+0x8fd4a0
};

// Class Squad.SQTeamSpawnGroup
// Size: 0x430 (Inherited: 0x420)
struct ASQTeamSpawnGroup : ASQGameSpawn {
	struct TArray<struct ASQTeamSpawnPoint*> SpawnPoints; // 0x420(0x10)
};

// Class Squad.SQTeamSpawnPoint
// Size: 0x428 (Inherited: 0x420)
struct ASQTeamSpawnPoint : ASQGameSpawn {
	struct ASQTeamSpawnGroup* Group; // 0x420(0x08)
};

// Class Squad.SQTeamState
// Size: 0x3f8 (Inherited: 0x248)
struct ASQTeamState : AInfo {
	int Tickets; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ASQTeam* AuthorityTeam; // 0x250(0x08)
	struct USQTeamDataCacher* DataCacher; // 0x258(0x08)
	int ID; // 0x260(0x04)
	float Score; // 0x264(0x04)
	float TeamWorkScore; // 0x268(0x04)
	float ObjectiveScore; // 0x26c(0x04)
	int NumKills; // 0x270(0x04)
	int NumDeaths; // 0x274(0x04)
	int NumWoundeds; // 0x278(0x04)
	int NumWounds; // 0x27c(0x04)
	int NumTeamkills; // 0x280(0x04)
	float HealPoints; // 0x284(0x04)
	float RevivedPoints; // 0x288(0x04)
	char pad_28C[0x24]; // 0x28c(0x24)
	struct TArray<struct ASQSquadState*> IndexedSquadStates; // 0x2b0(0x10)
	struct TArray<struct ASQSquadState*> SquadStates; // 0x2c0(0x10)
	char pad_2D0[0x40]; // 0x2d0(0x40)
	struct TArray<struct ASQPlayerState*> PlayerStates; // 0x310(0x10)
	struct ASQCommanderState* CommanderState; // 0x320(0x08)
	struct FName FactionSetupId; // 0x328(0x08)
	struct USQFactionSetup* FactionSetup; // 0x330(0x08)
	struct FScriptMulticastDelegate OnDeployableTeamAvailabilityUpdate; // 0x338(0x10)
	struct FScriptMulticastDelegate OnDeployablePersonalAvailabilityUpdate; // 0x348(0x10)
	struct FScriptMulticastDelegate OnRoleTeamAvailabilityUpdate; // 0x358(0x10)
	struct FScriptMulticastDelegate OnRolePersonalAvailabilityUpdate; // 0x368(0x10)
	struct FScriptMulticastDelegate OnActionTeamAvailabilityUpdate; // 0x378(0x10)
	struct FScriptMulticastDelegate OnActionPersonalAvailabilityUpdate; // 0x388(0x10)
	struct FScriptMulticastDelegate OnVehicleTeamAvailabilityUpdate; // 0x398(0x10)
	struct FScriptMulticastDelegate OnVehiclePersonalAvailabilityUpdate; // 0x3a8(0x10)
	struct TArray<struct FSQAvailabilityState_Deployable> DeployableAvailabilities; // 0x3b8(0x10)
	struct TArray<struct FSQAvailabilityState_Role> RoleAvailabilities; // 0x3c8(0x10)
	struct TArray<struct FSQAvailabilityState_Action> ActionAvailabilities; // 0x3d8(0x10)
	struct TArray<struct FSQAvailabilityState_Vehicle> VehicleAvailabilities; // 0x3e8(0x10)

	bool TryGetVehicleAvailability(struct ASQPlayerController* InPlayer, struct USQVehicleSettings* InVehicleSetting, struct FSQAvailabilityState_Vehicle& OutUpdatedVehicleState); // Function Squad.SQTeamState.TryGetVehicleAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff240
	bool TryGetRoleRearmAvailability(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource, struct USQRoleSettings* InRoleSetting, struct FSQAvailabilityState_Role& OutUpdatedRoleState, float& OutCost); // Function Squad.SQTeamState.TryGetRoleRearmAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8ff020
	bool TryGetRoleAvailability(struct ASQPlayerController* InPlayer, struct USQRoleSettings* InRoleSetting, struct FSQAvailabilityState_Role& OutUpdatedRoleState); // Function Squad.SQTeamState.TryGetRoleAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8feec0
	bool TryGetFactionShortName(struct FText& OutShortName); // Function Squad.SQTeamState.TryGetFactionShortName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fedd0
	bool TryGetFactionSetupDisplayName(struct FText& OutDisplayName); // Function Squad.SQTeamState.TryGetFactionSetupDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fece0
	bool TryGetFactionDisplayName(struct FText& OutDisplayName); // Function Squad.SQTeamState.TryGetFactionDisplayName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8febf0
	bool TryGetDeployableAvailability(struct ASQPlayerController* InPlayer, struct USQDeployableSettings* InDeployableSetting, struct FSQAvailabilityState_Deployable& OutUpdatedDeployableState); // Function Squad.SQTeamState.TryGetDeployableAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8feaa0
	bool TryGetActiveRoleAvailability(struct ASQPlayerController* InPlayer, struct FSQAvailabilityState_Role& OutActiveRoleState); // Function Squad.SQTeamState.TryGetActiveRoleAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fe980
	bool TryGetActionAvailability(struct ASQPlayerController* InPlayer, struct USQActionSettings* InActionSetting, struct FSQAvailabilityState_Action& OutUpdatedActionState); // Function Squad.SQTeamState.TryGetActionAvailability // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fe830
	void SetTickets(int InTickets); // Function Squad.SQTeamState.SetTickets // (Final|Native|Public|BlueprintCallable) // @ game+0x8fe720
	void ScorePointsDelayed(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQTeamState.ScorePointsDelayed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fe570
	void ScorePoints(int Points, struct FString Reason, struct FName& ScoreGroup); // Function Squad.SQTeamState.ScorePoints // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x8fe440
	void RemovePlayerState(struct ASQPlayerState* PlayerState); // Function Squad.SQTeamState.RemovePlayerState // (Native|Public) // @ game+0x844930
	void RefreshSquadStates(); // Function Squad.SQTeamState.RefreshSquadStates // (Native|Public) // @ game+0x85ec90
	void OnRep_VehicleAvailabilities(); // Function Squad.SQTeamState.OnRep_VehicleAvailabilities // (Final|Native|Private) // @ game+0x8fe3a0
	void OnRep_RoleAvailabilities(); // Function Squad.SQTeamState.OnRep_RoleAvailabilities // (Final|Native|Private) // @ game+0x8fe380
	void OnRep_IndexedSquadStates(); // Function Squad.SQTeamState.OnRep_IndexedSquadStates // (Native|Public) // @ game+0x8645e0
	void OnRep_FactionSetup(); // Function Squad.SQTeamState.OnRep_FactionSetup // (Final|Native|Private) // @ game+0x87b7a0
	void OnRep_DeployableAvailabilities(); // Function Squad.SQTeamState.OnRep_DeployableAvailabilities // (Final|Native|Private) // @ game+0x8cb5a0
	void OnRep_ActionsAvailabilities(); // Function Squad.SQTeamState.OnRep_ActionsAvailabilities // (Final|Native|Private) // @ game+0x8a3160
	bool IsConfigured(); // Function Squad.SQTeamState.IsConfigured // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdfa0
	void GetVehiclesForTeam(struct TArray<struct FSQAvailabilityState_Vehicle>& OutVehicles); // Function Squad.SQTeamState.GetVehiclesForTeam // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdec0
	void GetVehicles(struct ASQPlayerController* InPlayer, struct TArray<struct FSQAvailabilityState_Vehicle>& OutVehicles); // Function Squad.SQTeamState.GetVehicles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdda0
	int GetTickets(); // Function Squad.SQTeamState.GetTickets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdd80
	void GetRolesForRearm(struct ASQPlayerController* InPlayer, struct TScriptInterface<Class>& InRearmSource, struct TArray<struct FSQAvailabilityState_Role>& OutRoles); // Function Squad.SQTeamState.GetRolesForRearm // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fdba0
	void GetRoles(struct ASQPlayerController* InPlayer, struct TArray<struct FSQAvailabilityState_Role>& OutRoles); // Function Squad.SQTeamState.GetRoles // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fda80
	int GetPlayerCount(); // Function Squad.SQTeamState.GetPlayerCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fda50
	struct USQRoleSettings* GetLeaveSquadRole(); // Function Squad.SQTeamState.GetLeaveSquadRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fda20
	int GetFirstAvailableSquadId(); // Function Squad.SQTeamState.GetFirstAvailableSquadId // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x8fd9d0
	struct FString GetFactionSetupDisplayName(); // Function Squad.SQTeamState.GetFactionSetupDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd940
	struct FName GetFactionId(); // Function Squad.SQTeamState.GetFactionId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd900
	struct FString GetFactionDisplayName(); // Function Squad.SQTeamState.GetFactionDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd870
	struct USQFaction* GetFaction(); // Function Squad.SQTeamState.GetFaction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd840
	void GetDeployablesForTeam(struct TArray<struct FSQAvailabilityState_Deployable>& OutDeployables); // Function Squad.SQTeamState.GetDeployablesForTeam // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd760
	void GetDeployables(struct ASQPlayerController* InPlayer, struct TArray<struct FSQAvailabilityState_Deployable>& OutDeployables); // Function Squad.SQTeamState.GetDeployables // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd640
	struct USQRoleSettings* GetDefaultSquadLeaderRole(); // Function Squad.SQTeamState.GetDefaultSquadLeaderRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd610
	struct USQRoleSettings* GetDefaultRole(); // Function Squad.SQTeamState.GetDefaultRole // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd5e0
	void GetActions(struct ASQPlayerController* InPlayer, struct TArray<struct FSQAvailabilityState_Action>& OutActions); // Function Squad.SQTeamState.GetActions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fd4c0
	void AdjustTickets(int InDelta); // Function Squad.SQTeamState.AdjustTickets // (Final|Native|Public|BlueprintCallable) // @ game+0x8fd410
	void AddPlayerState(struct ASQPlayerState* PlayerState); // Function Squad.SQTeamState.AddPlayerState // (Native|Public) // @ game+0x8449c0
};

// Class Squad.SQTeamStatePrivate
// Size: 0x278 (Inherited: 0x248)
struct ASQTeamStatePrivate : AInfo {
	char pad_248[0x8]; // 0x248(0x08)
	struct TArray<struct ASQSquadStatePrivateToTeam*> IndexedTeamPrivateSquadStates; // 0x250(0x10)
	struct TArray<struct ASQSquadStatePrivateToTeam*> TeamPrivateSquadStates; // 0x260(0x10)
	int ID; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)

	void OnRep_IndexedTeamPrivateSquadStates(); // Function Squad.SQTeamStatePrivate.OnRep_IndexedTeamPrivateSquadStates // (Native|Public) // @ game+0x85f3b0
	int GetId(); // Function Squad.SQTeamStatePrivate.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x8fda00
};

// Class Squad.SQTemperatureComponent
// Size: 0x260 (Inherited: 0x220)
struct USQTemperatureComponent : USceneComponent {
	struct ASQLastingEffect* TemperatureLastingEffect; // 0x218(0x08)
	struct FScriptMulticastDelegate OnTemperatureIncrementEvent; // 0x220(0x10)
	float IncrementalTriggerTemperature; // 0x230(0x04)
	struct FVector2D TemperatureRange; // 0x234(0x08)
	float TemperatureDrift; // 0x23c(0x04)
	struct AController* LastTempChanger; // 0x240(0x08)
	float CurrentTemperature; // 0x248(0x04)
	float HigherTempTrigger; // 0x24c(0x04)
	float LowerTempTrigger; // 0x250(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)

	void OnRep_CurrentTemperature(float PreviousTemperature); // Function Squad.SQTemperatureComponent.OnRep_CurrentTemperature // (Final|Native|Public) // @ game+0x8fe300
	void AdjustTemperature(float DegressOfAdjustment, struct AController* TempChanger); // Function Squad.SQTemperatureComponent.AdjustTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x8fd340
};

// Class Squad.SQToastWidget
// Size: 0x260 (Inherited: 0x230)
struct USQToastWidget : UUserWidget {
	struct FScriptMulticastDelegate ToastTextUpdated; // 0x230(0x10)
	struct FText ToastText; // 0x240(0x18)
	float InitialLifetime; // 0x258(0x04)
	char pad_25C[0x4]; // 0x25c(0x04)

	void ToastTextUpdatedEvent__DelegateSignature(struct FText ToastText); // DelegateFunction Squad.SQToastWidget.ToastTextUpdatedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x12b8b50
	void SetToastText(struct FText& InToastText); // Function Squad.SQToastWidget.SetToastText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x9066a0
	void SetLifetime(float InLifetime); // Function Squad.SQToastWidget.SetLifetime // (Native|Public|BlueprintCallable) // @ game+0x8cc9f0
	struct FText GetToastText(); // Function Squad.SQToastWidget.GetToastText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9065e0
};

// Class Squad.SQToolTipBaseWidget
// Size: 0x240 (Inherited: 0x230)
struct USQToolTipBaseWidget : UUserWidget {
	struct USQMap* OwnerMap; // 0x230(0x08)
	struct USQMapIconWidget* ParentWidget; // 0x238(0x08)
};

// Class Squad.SQTournamentModeRuleset
// Size: 0x288 (Inherited: 0x278)
struct ASQTournamentModeRuleset : ASQGameRuleSet {
	struct TArray<struct FSQSettingsRestriction> Restrictions; // 0x278(0x10)
};

// Class Squad.SQTournamentModeRulesetState
// Size: 0x268 (Inherited: 0x250)
struct ASQTournamentModeRulesetState : ASQRulesetState {
	struct TArray<struct FSQSettingsRestriction> Restrictions; // 0x250(0x10)
	char pad_260[0x8]; // 0x260(0x08)

	void OnRep_Restrictions(); // Function Squad.SQTournamentModeRulesetState.OnRep_Restrictions // (Final|Native|Public) // @ game+0x906680
};

// Class Squad.SQTrackedVehicle
// Size: 0xb00 (Inherited: 0xb00)
struct ASQTrackedVehicle : ASQGroundVehicle {
};

// Class Squad.SQWheeledVehicleMovementComponentTank
// Size: 0x408 (Inherited: 0x2d8)
struct USQWheeledVehicleMovementComponentTank : UWheeledVehicleMovementComponent {
	struct FVehicleTankEngineData EngineSetup; // 0x2d8(0xa0)
	struct FVehicleTankTransmissionData TransmissionSetup; // 0x378(0x48)
	float RawBothTracksThrottleInput; // 0x3c0(0x04)
	float RawLeftTrackThrottleInput; // 0x3c4(0x04)
	float RawRightTrackThrottleInput; // 0x3c8(0x04)
	float BothTracksThrottleInput; // 0x3cc(0x04)
	float LeftTrackThrottleInput; // 0x3d0(0x04)
	float RightTrackThrottleInput; // 0x3d4(0x04)
	struct TArray<float> WheelSpeeds; // 0x3d8(0x10)
	struct TArray<float> WheelAngles; // 0x3e8(0x10)
	float LeftTrackSpeed; // 0x3f8(0x04)
	float RightTrackSpeed; // 0x3fc(0x04)
	char pad_400[0x8]; // 0x400(0x08)

	void SetRightTrackThrottleInput(float InThrottle); // Function Squad.SQWheeledVehicleMovementComponentTank.SetRightTrackThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x91f8e0
	void SetLeftTrackThrottleInput(float InThrottle); // Function Squad.SQWheeledVehicleMovementComponentTank.SetLeftTrackThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x91f790
	void SetBothTracksThrottleInput(float InThrottle); // Function Squad.SQWheeledVehicleMovementComponentTank.SetBothTracksThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x91f710
	float GetRightTrackSpeed(); // Function Squad.SQWheeledVehicleMovementComponentTank.GetRightTrackSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91f630
	float GetLeftTrackSpeed(); // Function Squad.SQWheeledVehicleMovementComponentTank.GetLeftTrackSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91f5f0
};

// Class Squad.SQTrackedVehicleMovementComponent
// Size: 0x420 (Inherited: 0x408)
struct USQTrackedVehicleMovementComponent : USQWheeledVehicleMovementComponentTank {
	char pad_408[0x18]; // 0x408(0x18)
};

// Class Squad.SQVelocityRotatingMovementComponent
// Size: 0x2d8 (Inherited: 0x1e0)
struct USQVelocityRotatingMovementComponent : USQMovementComponentPacked {
	float AngularDeltaCombineThreshold; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct USceneComponent* UpdatedComponent; // 0x1e8(0x08)
	float AccelerationMultiplier; // 0x1f0(0x04)
	float NoInputDecelerationMultiplier; // 0x1f4(0x04)
	float DecelerationMultiplier; // 0x1f8(0x04)
	float StabilizationSpeed; // 0x1fc(0x04)
	struct FSQRotationConstraints RotationConstraints; // 0x200(0x1c)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct UCurveFloat* ParentYawToMinPitch; // 0x220(0x08)
	struct UCurveFloat* ParentYawToMaxPitch; // 0x228(0x08)
	struct USQVelocityRotatingMovementComponent* HeadingParentComponent; // 0x230(0x08)
	char pad_238[0x48]; // 0x238(0x48)
	struct FSQRotationVelocityRepMovement RotationReplicatedMovement; // 0x280(0x50)
	bool IsDisabled; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)

	bool ToggleStabilization(); // Function Squad.SQVelocityRotatingMovementComponent.ToggleStabilization // (Native|Public|BlueprintCallable) // @ game+0x916000
	void SetStabilizationTargetHeading(struct FRotator& InTargetHeading); // Function Squad.SQVelocityRotatingMovementComponent.SetStabilizationTargetHeading // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x915d50
	void SetStabilizationEnabled(bool bInIsStabilizationEnabled); // Function Squad.SQVelocityRotatingMovementComponent.SetStabilizationEnabled // (Native|Public|BlueprintCallable) // @ game+0x8674e0
	void ServerSetStabilizationTargetHeading(struct FRotator InTargetHeading); // Function Squad.SQVelocityRotatingMovementComponent.ServerSetStabilizationTargetHeading // (Net|NetReliableNative|Event|Protected|NetServer|HasDefaults|NetValidate) // @ game+0x915ca0
	void OnRep_RotationReplicatedMovement(); // Function Squad.SQVelocityRotatingMovementComponent.OnRep_RotationReplicatedMovement // (Native|Protected) // @ game+0x915b10
	bool IsStabilizationEnabled(); // Function Squad.SQVelocityRotatingMovementComponent.IsStabilizationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915720
	struct FQuat GetWorldRotation(); // Function Squad.SQVelocityRotatingMovementComponent.GetWorldRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x915620
	struct FRotator GetCurrentRotation(); // Function Squad.SQVelocityRotatingMovementComponent.GetCurrentRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9153a0
	struct FVector GetCurrentLocation(); // Function Squad.SQVelocityRotatingMovementComponent.GetCurrentLocation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x915360
	void ClientSetStabilizationTargetHeading(struct FRotator InTargetHeading); // Function Squad.SQVelocityRotatingMovementComponent.ClientSetStabilizationTargetHeading // (Net|NetReliableNative|Event|Protected|HasDefaults|NetClient) // @ game+0x914f70
	void AddRotationInput(struct FRotator& InRotationInput); // Function Squad.SQVelocityRotatingMovementComponent.AddRotationInput // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x914cf0
};

// Class Squad.SQTurretMovementComponent
// Size: 0x310 (Inherited: 0x2d8)
struct USQTurretMovementComponent : USQVelocityRotatingMovementComponent {
	struct USceneComponent* UpdatedPitchComponent; // 0x2d8(0x08)
	struct USceneComponent* UpdatedYawComponent; // 0x2e0(0x08)
	float YawStabilizationSpeed; // 0x2e8(0x04)
	float PitchStabilizationSpeed; // 0x2ec(0x04)
	float MaxYawSpeed; // 0x2f0(0x04)
	float MaxPitchSpeed; // 0x2f4(0x04)
	bool bHasAcceleration; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	struct FVector2D InputMultiplier; // 0x2fc(0x08)
	char pad_304[0xc]; // 0x304(0x0c)
};

// Class Squad.SQUISettings
// Size: 0x88 (Inherited: 0x38)
struct USQUISettings : UDeveloperSettings {
	struct FColor Yellow; // 0x38(0x04)
	struct FColor Grey; // 0x3c(0x04)
	struct FColor Other; // 0x40(0x04)
	struct FLinearColor NeutralColor; // 0x44(0x10)
	struct FLinearColor FriendlyColor; // 0x54(0x10)
	struct FLinearColor EnemyColor; // 0x64(0x10)
	struct FLinearColor SquadColor; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Squad.SQUpdateSessionsCallbackProxy
// Size: 0xf8 (Inherited: 0x28)
struct USQUpdateSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FScriptMulticastDelegate OnSuccess; // 0x28(0x10)
	struct FScriptMulticastDelegate OnFailure; // 0x38(0x10)
	char pad_48[0xa8]; // 0x48(0xa8)
	struct UObject* WorldContextObject; // 0xf0(0x08)

	struct USQUpdateSessionsCallbackProxy* UpdateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // Function Squad.SQUpdateSessionsCallbackProxy.UpdateSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x90aad0
	struct FSQSessionFlagStruct GetSessionFlagStruct(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetSessionFlagStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86ce60
	struct FString GetServerName(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86ccc0
	struct FString GetSearchKeywords(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetSearchKeywords // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86cb20
	int GetPingInMs(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c930
	bool GetPasswordProtected(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetPasswordProtected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c7e0
	int GetMaxPlayers(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c660
	int GetMatchTimeout(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetMatchTimeout // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c510
	struct FString GetMapName(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetMapName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c370
	bool GetLicensedServer(struct UObject* WorldContextObject, struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetLicensedServer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x909980
	struct FString GetGameVersion(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetGameVersion // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86c030
	struct FString GetGameMode(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetGameMode // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86be90
	int GetCurrentPlayers(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86bd40
	bool GetAnticheatProtected(struct FBlueprintSessionResult& Result); // Function Squad.SQUpdateSessionsCallbackProxy.GetAnticheatProtected // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x86bbc0
};

// Class Squad.SQUsable
// Size: 0x28 (Inherited: 0x28)
struct USQUsable : UInterface {

	bool ShouldDisplayPrompt(struct AController* User); // Function Squad.SQUsable.ShouldDisplayPrompt // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8cff10
	void ServerStopUsed(struct AController* User); // Function Squad.SQUsable.ServerStopUsed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x90a7d0
	void ServerOnUsed(struct AController* User); // Function Squad.SQUsable.ServerOnUsed // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x90a740
	struct FSQUsableData GetUsableData(); // Function Squad.SQUsable.GetUsableData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x909dd0
	int GetInterfaceTeam(); // Function Squad.SQUsable.GetInterfaceTeam // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x909920
	void BPStopUsed(struct AController* User); // Function Squad.SQUsable.BPStopUsed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPOnUsed(struct AController* User); // Function Squad.SQUsable.BPOnUsed // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPHidePrompt(); // Function Squad.SQUsable.BPHidePrompt // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	void BPDisplayPrompt(struct AController* User); // Function Squad.SQUsable.BPDisplayPrompt // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQVehicleAmmoBox
// Size: 0x600 (Inherited: 0x5a0)
struct USQVehicleAmmoBox : USQVehicleComponent {
	struct FSQAmmoReductionConfig AmmoReduction; // 0x598(0x20)
	int DamageToParentWhenBurning; // 0x5b8(0x04)
	int SecondsBetweenDamageEvents; // 0x5bc(0x04)
	float DamageToParentOnDetonation; // 0x5c0(0x04)
	float MinBurningTimeBeforeDetonation; // 0x5c4(0x04)
	float MaxBurningTimeBeforeDetonation; // 0x5c8(0x04)
	float BaseTimeToDetonation; // 0x5cc(0x04)
	bool bEnableDetonationByOverdamage; // 0x5d0(0x01)
	float OverdamageForInstantDetonation; // 0x5d4(0x04)
	struct UDamageType* DetonationDamageType; // 0x5d8(0x08)
	struct UDamageType* BurningDamageType; // 0x5e0(0x08)
	float TimePercentageLeftForDetonation; // 0x5e8(0x04)
	char pad_5F1[0xf]; // 0x5f1(0x0f)

	void Detonate(); // Function Squad.SQVehicleAmmoBox.Detonate // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x90ca90
	void DestroyWeaponAmmo(struct ASQWeapon* Weapon, float TargetAmmoPercentage, bool bAffectCurrentMag); // Function Squad.SQVehicleAmmoBox.DestroyWeaponAmmo // (Final|Native|Private|Const) // @ game+0x90c980
	void DestroyVehicleWeaponAmmo(); // Function Squad.SQVehicleAmmoBox.DestroyVehicleWeaponAmmo // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x90c960
};

// Class Squad.SQVehicleAnimInstance
// Size: 0x990 (Inherited: 0x970)
struct USQVehicleAnimInstance : UVehicleAnimInstance {
	struct ASQGroundVehicle* Vehicle; // 0x970(0x08)
	bool bIsEngineActive; // 0x978(0x01)
	char pad_979[0x3]; // 0x979(0x03)
	struct FRotator SteeringWheelRotation; // 0x97c(0x0c)
	bool bIsInAmphibiousMode; // 0x988(0x01)
	char pad_989[0x7]; // 0x989(0x07)
};

// Class Squad.SQVehicleBuoyancyComponent
// Size: 0x278 (Inherited: 0x268)
struct USQVehicleBuoyancyComponent : USQBuoyancyComponent {
	bool bUseDefaults; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct UWheeledVehicleMovementComponent* VehicleMovementComponent; // 0x270(0x08)

	void ResetToDefaults(); // Function Squad.SQVehicleBuoyancyComponent.ResetToDefaults // (Final|Native|Public|BlueprintCallable) // @ game+0x90d550
};

// Class Squad.SQVehicleBurningComponent
// Size: 0x250 (Inherited: 0x220)
struct USQVehicleBurningComponent : USceneComponent {
	struct FName ParticleAttachBone; // 0x218(0x08)
	struct ASQLastingEffect* TemperatureLastingEffect; // 0x220(0x08)
	bool bIsDebugging; // 0x22a(0x01)
	float VehicleBurnRatePct; // 0x22c(0x04)
	float VehicleFlippedBurnRatePct; // 0x230(0x04)
	float VehicleAbandonedBurnRatePct; // 0x234(0x04)
	float SoldierBurnRatePct; // 0x238(0x04)
	float StartBurnHealthPercent; // 0x23c(0x04)
	struct FTimerHandle EffectTimerHandle; // 0x240(0x08)
	struct FTimerHandle BurnTimerHandle; // 0x248(0x08)
};

// Class Squad.SQVehicleCenterOfMassFXComponent
// Size: 0x4f0 (Inherited: 0x4b0)
struct USQVehicleCenterOfMassFXComponent : UStaticMeshComponent {
	struct UParticleSystem* WaterEntryEffect; // 0x4a8(0x08)
	struct UParticleSystem* WaterExitEffect; // 0x4b0(0x08)
	struct USoundCue* WaterEntrySound; // 0x4b8(0x08)
	struct USoundCue* WaterExitSound; // 0x4c0(0x08)
	struct FScriptMulticastDelegate OnBeginOverlapDelegate; // 0x4c8(0x10)
	struct FScriptMulticastDelegate OnEndOverlapDelegate; // 0x4d8(0x10)

	void OnCenterOfMassFXComponentEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex); // Function Squad.SQVehicleCenterOfMassFXComponent.OnCenterOfMassFXComponentEndOverlap // (Final|Native|Private) // @ game+0x90d0d0
	void OnCenterOfMassFXComponentBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQVehicleCenterOfMassFXComponent.OnCenterOfMassFXComponentBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x90cee0
};

// Class Squad.SQVehicleClaim
// Size: 0x60 (Inherited: 0x28)
struct USQVehicleClaim : UObject {
	struct ASQVehicle* VehicleClaimed; // 0x28(0x08)
	struct ASQSquad* ClaimingSquad; // 0x30(0x08)
	struct TArray<struct ASQPlayerState*> PlayersPartyToClaim; // 0x38(0x10)
	enum class ESQVehicleClaimStatus Status; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float TimeOfClaim; // 0x4c(0x04)
	float TimeOfExpiration; // 0x50(0x04)
	bool bExpired; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FTimerHandle ExpirationTimerHandle; // 0x58(0x08)

	struct ASQVehicle* GetVehicleClaimed(); // Function Squad.SQVehicleClaim.GetVehicleClaimed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cca0
	float GetTimeUntilExpiration(); // Function Squad.SQVehicleClaim.GetTimeUntilExpiration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cc70
	float GetTimeOfClaim(); // Function Squad.SQVehicleClaim.GetTimeOfClaim // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cc40
	enum class ESQVehicleClaimStatus GetStatus(); // Function Squad.SQVehicleClaim.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cc10
	struct ASQSquad* GetClaimingSquad(); // Function Squad.SQVehicleClaim.GetClaimingSquad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x90cab0
};

// Class Squad.SQVehicleCleanupDataAsset
// Size: 0x60 (Inherited: 0x30)
struct USQVehicleCleanupDataAsset : UDataAsset {
	struct TArray<enum class EObjectTypeQuery> ObjectCollisionTypes; // 0x30(0x10)
	struct TArray<struct AActor*> ObjectClasses; // 0x40(0x10)
	float ScanRadius; // 0x50(0x04)
	float ScanFrequency; // 0x54(0x04)
	float SelfDestructionTime; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Squad.SQVehicleCleanupComponent
// Size: 0x108 (Inherited: 0xd8)
struct USQVehicleCleanupComponent : UActorComponent {
	struct USQVehicleCleanupDataAsset* CleanupStaticInfo; // 0xd8(0x08)
	char pad_E0[0x8]; // 0xe0(0x08)
	struct ASQVehicle* OwnerVehicle; // 0xe8(0x08)
	char pad_F0[0x18]; // 0xf0(0x18)

	void ResetDestructionTimer(); // Function Squad.SQVehicleCleanupComponent.ResetDestructionTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x90d530
};

// Class Squad.SQVehicleComponentBluePrintable
// Size: 0x5a0 (Inherited: 0x5a0)
struct USQVehicleComponentBluePrintable : USQVehicleComponent {
};

// Class Squad.SQVehicleDepotComponent
// Size: 0x290 (Inherited: 0x220)
struct USQVehicleDepotComponent : USceneComponent {
	float SecondsPerMag; // 0x220(0x04)
	float VehicleHealthPerSecond; // 0x224(0x04)
	float ConstructionPointsPerSecondRepair; // 0x228(0x04)
	float SoldierHealthPerSecond; // 0x22c(0x04)
	struct TMap<struct ASQVehicle*, float> TimeInRearm; // 0x230(0x50)
	struct TArray<struct AActor*> CurrentOverlappedActors; // 0x280(0x10)
};

// Class Squad.SQVehicleExitPointComponent
// Size: 0x220 (Inherited: 0x220)
struct USQVehicleExitPointComponent : USceneComponent {
	bool bIsWaterExitPoint; // 0x218(0x01)

	bool CanExit(); // Function Squad.SQVehicleExitPointComponent.CanExit // (Native|Public|BlueprintCallable) // @ game+0x910430
};

// Class Squad.SQVehicleGasCan
// Size: 0x5b0 (Inherited: 0x5a0)
struct USQVehicleGasCan : USQVehicleComponent {
	float BaseDamage; // 0x598(0x04)
	float MinimumDamage; // 0x59c(0x04)
	float KillZoneRadius; // 0x5a0(0x04)
	float DamageInnerRadius; // 0x5a4(0x04)
	float DamageOuterRadius; // 0x5a8(0x04)
	float DamageFalloff; // 0x5ac(0x04)
};

// Class Squad.SQVehicleInventoryComponent
// Size: 0x2f0 (Inherited: 0x2e0)
struct USQVehicleInventoryComponent : USQPawnInventoryComponent {
	struct TArray<struct FSQVehicleWeaponConfig> Weapons; // 0x2e0(0x10)
};

// Class Squad.SQVehicleMovementComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct USQVehicleMovementComponentInterface : UInterface {

	void SetThrottleInput(float Input); // Function Squad.SQVehicleMovementComponentInterface.SetThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x911a60
	void SetSteeringInput(float Input); // Function Squad.SQVehicleMovementComponentInterface.SetSteeringInput // (Native|Public|BlueprintCallable) // @ game+0x9119e0
	void SetShouldSimulate(bool InbShouldSimulate); // Function Squad.SQVehicleMovementComponentInterface.SetShouldSimulate // (Native|Public|BlueprintCallable) // @ game+0x872190
	void SetRawThrottleInput(float RawInput); // Function Squad.SQVehicleMovementComponentInterface.SetRawThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x911780
	void SetRawSteeringInput(float RawInput); // Function Squad.SQVehicleMovementComponentInterface.SetRawSteeringInput // (Native|Public|BlueprintCallable) // @ game+0x911700
	void SetEngineBoostTorqueMultiplier(float InEngineBoostTorqueMultiplier); // Function Squad.SQVehicleMovementComponentInterface.SetEngineBoostTorqueMultiplier // (Native|Public|BlueprintCallable) // @ game+0x911680
	float GetThrottleInput(); // Function Squad.SQVehicleMovementComponentInterface.GetThrottleInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x885c60
	float GetSteeringInput(); // Function Squad.SQVehicleMovementComponentInterface.GetSteeringInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910ab0
	bool GetShouldSimulate(); // Function Squad.SQVehicleMovementComponentInterface.GetShouldSimulate // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910a20
	float GetRawThrottleInput(); // Function Squad.SQVehicleMovementComponentInterface.GetRawThrottleInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910940
	float GetRawSteeringInput(); // Function Squad.SQVehicleMovementComponentInterface.GetRawSteeringInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910910
	float GetMaxSpringForce(); // Function Squad.SQVehicleMovementComponentInterface.GetMaxSpringForce // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9108a0
	float GetHandbrakeInput(); // Function Squad.SQVehicleMovementComponentInterface.GetHandbrakeInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910840
	float GetBrakeInput(); // Function Squad.SQVehicleMovementComponentInterface.GetBrakeInput // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910780
};

// Class Squad.SQVehicleResourceWeaponInventoryComponent
// Size: 0x358 (Inherited: 0x2f0)
struct USQVehicleResourceWeaponInventoryComponent : USQVehicleInventoryComponent {
	struct FScriptMulticastDelegate OnResourcesChangedEvent; // 0x2f0(0x10)
	bool bSpawnWithMaxResources; // 0x300(0x01)
	char pad_301[0x27]; // 0x301(0x27)
	int CurrentConstructionAmount; // 0x328(0x04)
	int CurrentAmmoAmount; // 0x32c(0x04)
	int TotalSharedResourceAmount; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct ASQVehicleResource*> ResourceClasses; // 0x338(0x10)
	struct TArray<struct ASQVehicleResource*> Resources; // 0x348(0x10)

	void UpdateVisibilities(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.UpdateVisibilities // (Final|Native|Public|BlueprintCallable) // @ game+0x911e00
	void SetStaticMeshResourcesConstruction(struct TArray<struct UStaticMeshComponent*> InStaticMeshResources); // Function Squad.SQVehicleResourceWeaponInventoryComponent.SetStaticMeshResourcesConstruction // (Final|Native|Public|BlueprintCallable) // @ game+0x9118f0
	void SetStaticMeshResourcesAmmo(struct TArray<struct UStaticMeshComponent*> InStaticMeshResources); // Function Squad.SQVehicleResourceWeaponInventoryComponent.SetStaticMeshResourcesAmmo // (Final|Native|Public|BlueprintCallable) // @ game+0x911800
	void OnRep_ResourcesChanged(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.OnRep_ResourcesChanged // (Final|Native|Protected) // @ game+0x910f50
	bool HasConstructionWeapon(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.HasConstructionWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910da0
	int GetTotalSharedResourceAmount(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.GetTotalSharedResourceAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910ae0
	int GetCurrentSharedResourceAmount(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.GetCurrentSharedResourceAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9107e0
	int GetAmmoPoints(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.GetAmmoPoints // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910750
	struct ASQVehicleResource* FindConstructionWeapon(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.FindConstructionWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9105a0
	struct ASQVehicleResource* FindAmmoWeapon(); // Function Squad.SQVehicleResourceWeaponInventoryComponent.FindAmmoWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910570
};

// Class Squad.SQVehicleSeatComponent
// Size: 0x290 (Inherited: 0x220)
struct USQVehicleSeatComponent : USceneComponent {
	struct FSQVehicleSeatConfig SeatConfig; // 0x218(0x50)
	int AnimationSeatState; // 0x268(0x04)
	struct ASQVehicleSeat* SeatPawn; // 0x270(0x08)
	struct ASQPlayerState* SeatedPlayer; // 0x278(0x08)
	struct ASQSoldier* SeatedSoldier; // 0x280(0x08)
	char pad_28C[0x4]; // 0x28c(0x04)

	bool TransitionComplete(); // Function Squad.SQVehicleSeatComponent.TransitionComplete // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x911cb0
	void OnRep_SeatPawn(); // Function Squad.SQVehicleSeatComponent.OnRep_SeatPawn // (Native|Public) // @ game+0x910ff0
	void OnRep_AnimationSeatState(); // Function Squad.SQVehicleSeatComponent.OnRep_AnimationSeatState // (Final|Native|Public) // @ game+0x910f30
	enum class ESQSoldierSeatState GetSoldierSeatState(); // Function Squad.SQVehicleSeatComponent.GetSoldierSeatState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910a80
	struct USQVehicleInventoryComponent* GetSeatPawnInventory(); // Function Squad.SQVehicleSeatComponent.GetSeatPawnInventory // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9109f0
	struct ASQEquipableItem* GetSeatPawnEquipableItem(); // Function Squad.SQVehicleSeatComponent.GetSeatPawnEquipableItem // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9109c0
	struct ASQVehicleSeat* GetSeatPawn(); // Function Squad.SQVehicleSeatComponent.GetSeatPawn // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x910990
	void ChangeSeatState(int StateIndex); // Function Squad.SQVehicleSeatComponent.ChangeSeatState // (Final|Native|Public|BlueprintCallable) // @ game+0x9104f0
	bool CanSeatBeRepaired(enum class ESQRepairSource RepairSource); // Function Squad.SQVehicleSeatComponent.CanSeatBeRepaired // (Native|Event|Public|BlueprintEvent) // @ game+0x910460
};

// Class Squad.SQVehicleSettings
// Size: 0x58 (Inherited: 0x58)
struct USQVehicleSettings : USQSettings {

	bool TryGetVehicleWithLayer(struct USQLayer* InLayer, struct UClass*& OutVehicle); // Function Squad.SQVehicleSettings.TryGetVehicleWithLayer // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x911ce0
	bool ShouldCauseSieged(struct ASQGameSpawn* Spawn); // Function Squad.SQVehicleSettings.ShouldCauseSieged // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x911b70
};

// Class Squad.SQWeapon_Effects
// Size: 0xa30 (Inherited: 0x7a0)
struct ASQWeapon_Effects : ASQWeapon {
	struct FSQWeaponSounds WeaponSounds; // 0x7a0(0x88)
	struct FSQWeaponAnims WeaponAnimations; // 0x828(0x48)
	struct FSQRecoilData RecoilData; // 0x870(0x48)
	struct FSQWeaponEffects WeaponEffects; // 0x8b8(0x38)
	struct FSQWeaponSpring WeaponSpringConfig; // 0x8f0(0x24)
	char pad_914[0x4]; // 0x914(0x04)
	struct UCurveFloat* RecoilCurve; // 0x918(0x08)
	struct FVector WeaponOffset; // 0x920(0x0c)
	struct FVector SightsViewOffset; // 0x92c(0x0c)
	char pad_938[0xf8]; // 0x938(0xf8)

	void InterpRecoil(float Value); // Function Squad.SQWeapon_Effects.InterpRecoil // (Native|Public) // @ game+0x91f690
};

// Class Squad.SQVehicleWeapon
// Size: 0xa70 (Inherited: 0xa30)
struct ASQVehicleWeapon : ASQWeapon_Effects {
	bool bIsOverheated; // 0xa30(0x01)
	bool bInputEnabled; // 0xa31(0x01)
	char pad_A32[0x6]; // 0xa32(0x06)
	struct TArray<struct FSQVehicleRecoil> RecoilFactor; // 0xa38(0x10)
	bool bReturnToPitchOriginOnReload; // 0xa48(0x01)
	bool bReturnToYawOriginOnReload; // 0xa49(0x01)
	char pad_A4A[0x2]; // 0xa4a(0x02)
	float SecondsToReturnToOriginOnReload; // 0xa4c(0x04)
	bool bReloadDirectlyFromFob; // 0xa50(0x01)
	char pad_A51[0x2]; // 0xa51(0x02)
	bool bIgnoreCameraChange; // 0xa53(0x01)
	bool bEnableTrueFpCamera; // 0xa54(0x01)
	char pad_A55[0x17]; // 0xa55(0x17)
	bool bStartWithNoAmmo; // 0xa6c(0x01)
	char pad_A6D[0x3]; // 0xa6d(0x03)

	void SoldierLeavesVehicle(struct ASQSoldier* Soldier); // Function Squad.SQVehicleWeapon.SoldierLeavesVehicle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8e0e50
	void SoldierEntersVehicle(struct ASQSoldier* Soldier); // Function Squad.SQVehicleWeapon.SoldierEntersVehicle // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x8e1ae0
	struct FRotator GetWeaponRotation(); // Function Squad.SQVehicleWeapon.GetWeaponRotation // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x915570
	struct ASQSoldier* GetSoldier(); // Function Squad.SQVehicleWeapon.GetSoldier // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915510
	struct ASQVehicleSeat* GetOwnerSeat(); // Function Squad.SQVehicleWeapon.GetOwnerSeat // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9154a0
};

// Class Squad.SQVehicleSmokeGenerator
// Size: 0xab0 (Inherited: 0xa70)
struct ASQVehicleSmokeGenerator : ASQVehicleWeapon {
	struct UAudioComponent* SmokeGeneratorSound; // 0xa70(0x08)
	struct ASQGroundVehicle* VehicleRef; // 0xa78(0x08)
	struct TArray<struct UParticleSystemComponent*> SmokeGenerators; // 0xa80(0x10)
	struct USoundBase* LoopingSmokeGenSound; // 0xa90(0x08)
	float FadeInDuration; // 0xa98(0x04)
	float FadeoutDuration; // 0xa9c(0x04)
	struct USoundBase* EndUseSound; // 0xaa0(0x08)
	char pad_AA8[0x8]; // 0xaa8(0x08)

	void SetupParticleSystem(struct AActor* OwnerActor); // Function Squad.SQVehicleSmokeGenerator.SetupParticleSystem // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void ServerUseGenerator(); // Function Squad.SQVehicleSmokeGenerator.ServerUseGenerator // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x911630
	void ServerStopGenerator(); // Function Squad.SQVehicleSmokeGenerator.ServerStopGenerator // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x9115e0
	void MulticastDeactivate(); // Function Squad.SQVehicleSmokeGenerator.MulticastDeactivate // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x910ea0
	void MulticastActivate(); // Function Squad.SQVehicleSmokeGenerator.MulticastActivate // (Net|NetReliableNative|Event|NetMulticast|Protected|NetValidate) // @ game+0x910e50
};

// Class Squad.SQVehicleSpawner
// Size: 0x320 (Inherited: 0x2f0)
struct ASQVehicleSpawner : ASQSpawner {
	enum class ESQTeam NeutralCopyVehicleFromTeam; // 0x2e8(0x01)
	struct USQVehicleSettings* SpecificVehicle; // 0x2f0(0x28)
	char pad_319[0x7]; // 0x319(0x07)

	void StartLoadAndSpawnVehicle(struct FSQVehicleSettingEntry& InVehicleSettings); // Function Squad.SQVehicleSpawner.StartLoadAndSpawnVehicle // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x911c10
	void OnVehicleSpawned(struct ASQVehicle* OutVehicle); // Function Squad.SQVehicleSpawner.OnVehicleSpawned // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
	void OnVehicleLoaded(struct UClass* InVehicleReference, struct FSQVehicleSettingEntry InVehicleSetting); // Function Squad.SQVehicleSpawner.OnVehicleLoaded // (Final|Native|Protected) // @ game+0x911030
	bool GetVehicleToSpawn(struct TArray<struct FSQAvailabilityState_Vehicle>& InVehicleAvailabilityStates, struct FSQAvailabilityState_Vehicle& OutSelectedVehicle, int& OutSelectedIndex); // Function Squad.SQVehicleSpawner.GetVehicleToSpawn // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x910bd0
	void GetVehicleReference(struct USQVehicleSettings* InVehicleSettings, struct UClass*& OutVehicleReference); // Function Squad.SQVehicleSpawner.GetVehicleReference // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862cb0
	int GetVehiclePriority(struct FSQAvailabilityState_Vehicle& InAvailableVehicle); // Function Squad.SQVehicleSpawner.GetVehiclePriority // (Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862be0
	bool CanSpawnVehicle(struct USQVehicleSettings* InAvailableVehicle); // Function Squad.SQVehicleSpawner.CanSpawnVehicle // (Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x862a90
};

// Class Squad.SQVehicleSpawnerSettings
// Size: 0x58 (Inherited: 0x58)
struct USQVehicleSpawnerSettings : USQSettings {

	bool SelectVehicleToSpawn(struct TArray<struct FSQAvailabilityState_Vehicle>& InVehicles, struct FSQAvailabilityState_Vehicle& OutSelectVehicle); // Function Squad.SQVehicleSpawnerSettings.SelectVehicleToSpawn // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x8646c0
	bool IsVehicleMatching(struct USQVehicleSettings* InAvailableVehicle); // Function Squad.SQVehicleSpawnerSettings.IsVehicleMatching // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x8641d0
};

// Class Squad.SQVehicleTrack
// Size: 0x5c0 (Inherited: 0x5b0)
struct USQVehicleTrack : USQDriveTrainComponent {
	bool bRightSideTrack; // 0x5b0(0x01)
	bool bLeftSideTrack; // 0x5b1(0x01)
	char pad_5B2[0xe]; // 0x5b2(0x0e)
};

// Class Squad.SQVehicleTurret
// Size: 0x3e0 (Inherited: 0x3d0)
struct ASQVehicleTurret : ASQVehicleSeat {
	char pad_3D0[0x10]; // 0x3d0(0x10)

	bool IsCurrentWeaponInputEnabled(); // Function Squad.SQVehicleTurret.IsCurrentWeaponInputEnabled // (Native|Protected|BlueprintCallable) // @ game+0x9156c0
	struct USQTurretMovementComponent* GetTurretMovementComponent(); // Function Squad.SQVehicleTurret.GetTurretMovementComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x915540
};

// Class Squad.SQVehicleTurretClosedTop
// Size: 0x440 (Inherited: 0x3e0)
struct ASQVehicleTurretClosedTop : ASQVehicleTurret {
	bool bCanStabilize; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	float HealthToEnableStabilizer; // 0x3e4(0x04)
	struct USoundBase* StabilizationToggleSound; // 0x3e8(0x08)
	int GunLineOfSightSeatIndex; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct USQVehicleViewWidget* TurretOverlay; // 0x3f8(0x08)
	int CurrentZoom; // 0x400(0x04)
	char pad_404[0x4]; // 0x404(0x04)
	struct TArray<float> ZoomLevels; // 0x408(0x10)
	struct USoundBase* ZoomToggleSound; // 0x418(0x08)
	float ZoomToggleSoundPitch; // 0x420(0x04)
	char pad_424[0x1c]; // 0x424(0x1c)

	void ResetZoom(); // Function Squad.SQVehicleTurretClosedTop.ResetZoom // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	bool IsStabilizationEnabled(); // Function Squad.SQVehicleTurretClosedTop.IsStabilizationEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9156f0
	void BP_OnVehicleZoom(); // Function Squad.SQVehicleTurretClosedTop.BP_OnVehicleZoom // (Event|Protected|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQVehicleTurretOpenTop
// Size: 0x3e0 (Inherited: 0x3e0)
struct ASQVehicleTurretOpenTop : ASQVehicleTurret {
};

// Class Squad.SQVehicleWeaponAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct USQVehicleWeaponAnimInstance : UAnimInstance {
	float Pitch; // 0x268(0x04)
	float Yaw; // 0x26c(0x04)
	float CurrentMagRemainingRoundsTime; // 0x270(0x04)
	float CurrentMagRemainingRoundsMultiplier; // 0x274(0x04)
};

// Class Squad.SQVehicleWeaponTOW
// Size: 0xae0 (Inherited: 0xa70)
struct ASQVehicleWeaponTOW : ASQVehicleWeapon {
	char pad_A70[0x10]; // 0xa70(0x10)
	struct USQVehicleViewWidget* ViewWidgetClass; // 0xa80(0x08)
	struct UMaterial* ReticlePPMatCPP; // 0xa88(0x08)
	float MissileRotationSpeed; // 0xa90(0x04)
	float AimStartOffset; // 0xa94(0x04)
	float AimMaxDistance; // 0xa98(0x04)
	float ProjectileCorrectionDistance; // 0xa9c(0x04)
	float FOVMultiplier; // 0xaa0(0x04)
	float SceneFringeIntensityInZoom; // 0xaa4(0x04)
	float PPBlendWeight; // 0xaa8(0x04)
	float FireDelay; // 0xaac(0x04)
	struct UCameraComponent* CameraComponent; // 0xab0(0x08)
	struct ASQHUD* LastPlayerHud; // 0xab8(0x08)
	char pad_AC0[0x20]; // 0xac0(0x20)

	void DelayedFireWeapon(); // Function Squad.SQVehicleWeaponTOW.DelayedFireWeapon // (Native|Protected) // @ game+0x914ff0
	void BlueprintOnPreFire(); // Function Squad.SQVehicleWeaponTOW.BlueprintOnPreFire // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
};

// Class Squad.SQVehicleWheel
// Size: 0x5c0 (Inherited: 0x5b0)
struct USQVehicleWheel : USQDriveTrainComponent {
	struct FName BoneName; // 0x5b0(0x08)
	char pad_5B8[0x8]; // 0x5b8(0x08)

	struct FName GetBoneName(); // Function Squad.SQVehicleWheel.GetBoneName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915070
};

// Class Squad.SQVehicleWheel_Front
// Size: 0xf8 (Inherited: 0xf8)
struct USQVehicleWheel_Front : UVehicleWheel {
};

// Class Squad.SQVehicleWheel_Rear
// Size: 0xf8 (Inherited: 0xf8)
struct USQVehicleWheel_Rear : USQVehicleWheel_Front {
};

// Class Squad.SQVehicleWheel_Tracked
// Size: 0x108 (Inherited: 0xf8)
struct USQVehicleWheel_Tracked : UVehicleWheel {
	struct FVector SuspensionDirection; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Squad.SQVoteSession
// Size: 0x88 (Inherited: 0x28)
struct USQVoteSession : UObject {
	struct FSQVote Vote; // 0x28(0x38)
	struct FSQVoteSessionInfo State; // 0x60(0x28)

	bool HasTimedOut(); // Function Squad.SQVoteSession.HasTimedOut // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915690
	bool HasFinishedPresentingResults(); // Function Squad.SQVoteSession.HasFinishedPresentingResults // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915660
	struct FName GetWinnerChoiceId(); // Function Squad.SQVoteSession.GetWinnerChoiceId // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x9155b0
	struct FTimespan GetRemainingTime(); // Function Squad.SQVoteSession.GetRemainingTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x9154d0
	struct FName GetId(); // Function Squad.SQVoteSession.GetId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915460
	struct FTimespan GetDuration(); // Function Squad.SQVoteSession.GetDuration // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x915420
	struct FDataTableRowHandle GetData(); // Function Squad.SQVoteSession.GetData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9153e0
	void GetChoiceState(struct FName& ChoiceId, struct FSQVoteSessionChoiceInfo& OutState); // Function Squad.SQVoteSession.GetChoiceState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9151a0
	void GetChoicesPerVoteOrder(struct TArray<struct FName>& OutChoiceId); // Function Squad.SQVoteSession.GetChoicesPerVoteOrder // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x9152b0
	void GetChoiceDescription(struct FName& ChoiceId, struct FSQChoice& OutChoice); // Function Squad.SQVoteSession.GetChoiceDescription // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x915090
};

// Class Squad.SQVoteSessionAuthority
// Size: 0xf8 (Inherited: 0x88)
struct USQVoteSessionAuthority : USQVoteSession {
	enum class ESQAdminAccessLevels AccessFilter; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<int> TeamFilter; // 0x90(0x10)
	struct TArray<struct USQVotingComponent*> Voters; // 0xa0(0x10)
	struct TArray<struct FName> RecordedVotes; // 0xb0(0x10)
	struct FScriptMulticastDelegate RS_OnResult; // 0xc0(0x10)
	struct FScriptMulticastDelegate RS_OnPresentationEnded; // 0xd0(0x10)
	bool HasChanges; // 0xe0(0x01)
	bool IsFinished; // 0xe1(0x01)
	bool HasPresentationEnded; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	struct FName WinnerId; // 0xe4(0x08)
	char pad_EC[0xc]; // 0xec(0x0c)

	void Start(struct UObject* WorldContextObject, struct FSQVote& VoteTemplate, struct TArray<struct USQVotingComponent*> InitialVoters); // Function Squad.SQVoteSessionAuthority.Start // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x915e10
	bool ShouldFinalize(); // Function Squad.SQVoteSessionAuthority.ShouldFinalize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x915de0
	void RemoveVoter(struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.RemoveVoter // (Final|Native|Public|BlueprintCallable) // @ game+0x915c20
	void RemoveVote(struct FName& ChoiceId, struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.RemoveVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x915b50
	void PropagateChanges(); // Function Squad.SQVoteSessionAuthority.PropagateChanges // (Final|Native|Public|BlueprintCallable) // @ game+0x915b30
	int OnRemoveVotesFrom(struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.OnRemoveVotesFrom // (Native|Event|Public|BlueprintEvent) // @ game+0x915a70
	int OnRemoveVoter(struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.OnRemoveVoter // (Native|Event|Public|BlueprintEvent) // @ game+0x9159d0
	int OnRemoveVote(struct FName& ChoiceId, struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.OnRemoveVote // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x9158e0
	int OnAddVoter(struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.OnAddVoter // (Native|Event|Public|BlueprintEvent) // @ game+0x915840
	int OnAddVote(struct FName& ChoiceId, struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.OnAddVote // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x915750
	struct UWorld* GetWorld(); // Function Squad.SQVoteSessionAuthority.GetWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x9155f0
	struct FName Finalize(); // Function Squad.SQVoteSessionAuthority.Finalize // (Final|Native|Public|BlueprintCallable) // @ game+0x915030
	void EndPresentation(); // Function Squad.SQVoteSessionAuthority.EndPresentation // (Final|Native|Public|BlueprintCallable) // @ game+0x915010
	void Cancel(); // Function Squad.SQVoteSessionAuthority.Cancel // (Final|Native|Public|BlueprintCallable) // @ game+0x914f50
	void BP_Tick(float DeltaTime); // Function Squad.SQVoteSessionAuthority.BP_Tick // (Event|Public|BlueprintEvent) // @ game+0x12b8b50
	bool AreAllVoteRecieved(); // Function Squad.SQVoteSessionAuthority.AreAllVoteRecieved // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x914f20
	void AddVoter(struct USQVotingComponent* Voter, bool NotifyVoter); // Function Squad.SQVoteSessionAuthority.AddVoter // (Final|Native|Public|BlueprintCallable) // @ game+0x914e50
	void AddVote(struct FName& ChoiceId, struct USQVotingComponent* Voter); // Function Squad.SQVoteSessionAuthority.AddVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x914d80
};

// Class Squad.SQVoteSessionClient
// Size: 0xa8 (Inherited: 0x88)
struct USQVoteSessionClient : USQVoteSession {
	struct FScriptMulticastDelegate AddVoteSignal; // 0x88(0x10)
	struct FScriptMulticastDelegate RemoveVoteSignal; // 0x98(0x10)

	void SendVoteByChoice(struct FSQChoice& Choice, bool Positive); // Function Squad.SQVoteSessionClient.SendVoteByChoice // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91baa0
	void SendVote(struct FName& ChoiceId, bool Positive); // Function Squad.SQVoteSessionClient.SendVote // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91b9d0
};

// Class Squad.SQVotingComponent
// Size: 0x180 (Inherited: 0xd8)
struct USQVotingComponent : UActorComponent {
	struct FName PlayerName; // 0xd8(0x08)
	struct TArray<struct FSQVoteStateContainer> ActiveVoteStates; // 0xe0(0x10)
	struct TMap<struct FName, struct USQVoteSession*> ActiveVotes; // 0xf0(0x50)
	struct FScriptMulticastDelegate RS_OnVoteStart; // 0x140(0x10)
	struct FScriptMulticastDelegate RS_OnVoteUpdate; // 0x150(0x10)
	struct FScriptMulticastDelegate RS_OnVoteEnded; // 0x160(0x10)
	struct FScriptMulticastDelegate RS_OnVoteDisplayResults; // 0x170(0x10)

	void Server_RemoveVoteByIds(struct FName VoteId, struct FName ChoiceId); // Function Squad.SQVotingComponent.Server_RemoveVoteByIds // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c4d0
	void Server_AddVoteByIds(struct FName VoteId, struct FName ChoiceId); // Function Squad.SQVotingComponent.Server_AddVoteByIds // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x91c3d0
	void RemoveVoteByIds(struct FName& VoteId, struct FName& ChoiceId); // Function Squad.SQVotingComponent.RemoveVoteByIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91b8f0
	void OnVoteUpdated(struct USQVoteSessionClient* VoteSession); // Function Squad.SQVotingComponent.OnVoteUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void OnVoteStarted(struct USQVoteSessionClient* VoteSession); // Function Squad.SQVotingComponent.OnVoteStarted // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	void OnVoteInput(int ChoiceIndex); // Function Squad.SQVotingComponent.OnVoteInput // (Final|Native|Public|BlueprintCallable) // @ game+0x91b530
	void OnVoteEnded(struct USQVoteSessionClient* VoteSession, struct FSQChoice& Winner); // Function Squad.SQVotingComponent.OnVoteEnded // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x12b8b50
	bool HasVoteInProgress(); // Function Squad.SQVotingComponent.HasVoteInProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a5d0
	struct FName GetPlayerIdentifier(); // Function Squad.SQVotingComponent.GetPlayerIdentifier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a490
	void AddVoteByIds(struct FName& VoteId, struct FName& ChoiceId); // Function Squad.SQVotingComponent.AddVoteByIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919eb0
};

// Class Squad.SQVotingService
// Size: 0x28 (Inherited: 0x28)
struct USQVotingService : UBlueprintFunctionLibrary {

	bool StartVote_Level(struct UObject* WorldContextObject, struct TArray<struct USQLevel*>& InLevels, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingService.StartVote_Level // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91cf90
	bool StartVote_Layer(struct UObject* WorldContextObject, struct TArray<struct USQLayer*>& InLayers, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingService.StartVote_Layer // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91cd40
	bool StartVote_Generic(struct UObject* WorldContextObject, struct FSQVoteConfig& InVoteConfig, struct TArray<struct FSQChoice>& InChoices, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingService.StartVote_Generic // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91c970
	bool StartVote_FactionSetup(struct UObject* WorldContextObject, int TeamId, struct TArray<struct USQFactionSetup*>& InFactionsSetups, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingService.StartVote_FactionSetup // (Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91c6a0
	void RemovePlayerFromCurrentVotes(struct UObject* WorldContextObject, struct APlayerController* LeavingPlayer); // Function Squad.SQVotingService.RemovePlayerFromCurrentVotes // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x91b7c0
	void JoinPlayerToCurrentVotes(struct UObject* WorldContextObject, struct APlayerController* NewPlayer); // Function Squad.SQVotingService.JoinPlayerToCurrentVotes // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x91ae60
	bool IsUsingLevelVote(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsUsingLevelVote // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91adb0
	bool IsUsingLayerVote(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsUsingLayerVote // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91ad30
	bool IsUsingFactionVote(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsUsingFactionVote // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91acb0
	bool IsLevelVoteInProgress(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsLevelVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91aba0
	bool IsLevelVoteId(struct FName& InVoteId); // Function Squad.SQVotingService.IsLevelVoteId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91ab10
	bool IsLayerVoteInProgress(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsLayerVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91aa90
	bool IsLayerVoteId(struct FName& InVoteId); // Function Squad.SQVotingService.IsLayerVoteId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91aa00
	bool IsGenericVoteInProgress(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsGenericVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91a980
	bool IsFactionVoteInProgress(struct UObject* WorldContextObject, int TeamId); // Function Squad.SQVotingService.IsFactionVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91a890
	bool IsFactionVoteId(struct FName& InVoteId, int& OutTeamId); // Function Squad.SQVotingService.IsFactionVoteId // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x91a7b0
	bool IsAnyVoteInProgress(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsAnyVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91a730
	bool IsAnyFactionVoteInProgress(struct UObject* WorldContextObject); // Function Squad.SQVotingService.IsAnyFactionVoteInProgress // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x91a6b0
	struct USQVotingComponent* GetLocalVotingComponent(struct UObject* WorldContextObject); // Function Squad.SQVotingService.GetLocalVotingComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x91a2b0
};

// Class Squad.SQVotingState
// Size: 0x100 (Inherited: 0xd8)
struct USQVotingState : UActorComponent {
	struct TArray<struct USQVoteSessionAuthority*> ActiveVotes; // 0xd8(0x10)
	bool LevelVoteInProgress; // 0xe8(0x01)
	bool LayerVoteInProgress; // 0xe9(0x01)
	bool GenericVoteProgress; // 0xea(0x01)
	char pad_EB[0x5]; // 0xeb(0x05)
	struct TArray<int> FactionVotesInProgress; // 0xf0(0x10)

	bool StartVote_Level(struct TArray<struct USQLevel*>& InLevels, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingState.StartVote_Level // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91d0d0
	bool StartVote_Layer(struct TArray<struct USQLayer*>& InLayers, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingState.StartVote_Layer // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91ce80
	bool StartVote_Generic(struct FSQVoteConfig& InVoteConfig, struct TArray<struct FSQChoice>& InChoices, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingState.StartVote_Generic // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91cb70
	bool StartVote_FactionSetup(int TeamId, struct TArray<struct USQFactionSetup*>& InFactionsSetups, struct USQVoteSessionAuthority*& OutAuthoritySession); // Function Squad.SQVotingState.StartVote_FactionSetup // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91c820
	void RemovePlayerFromCurrentVotes(struct APlayerController* LeavingPlayer); // Function Squad.SQVotingState.RemovePlayerFromCurrentVotes // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x91b870
	void JoinPlayerToCurrentVotes(struct APlayerController* NewPlayer); // Function Squad.SQVotingState.JoinPlayerToCurrentVotes // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x91af10
	bool HasAnyVoteInProgress(); // Function Squad.SQVotingState.HasAnyVoteInProgress // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a5a0
	void ApplySlomoFactor(float TimeDilationFactor); // Function Squad.SQVotingState.ApplySlomoFactor // (Final|Native|Public|BlueprintCallable) // @ game+0x919f90
};

// Class Squad.SQWaterBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USQWaterBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool WaterHasValidOverlap(struct ASQWaterBody* OverlappedWaterBody, struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function Squad.SQWaterBlueprintFunctionLibrary.WaterHasValidOverlap // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91d3a0
	bool WaterHasValidHit(struct ASQWaterBody* HitWaterBody, struct AActor* ProjectileOwner, struct FHitResult& InHit); // Function Squad.SQWaterBlueprintFunctionLibrary.WaterHasValidHit // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x91d260
	bool IsAValidWaterBody(struct AActor* ActorToCheck); // Function Squad.SQWaterBlueprintFunctionLibrary.IsAValidWaterBody // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91a600
	float GetActorImmersionDepthInWater(struct ASQWaterBody* WaterBody, struct AActor* QueryingActor); // Function Squad.SQWaterBlueprintFunctionLibrary.GetActorImmersionDepthInWater // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x91a170
};

// Class Squad.SQWaterDamageComponent
// Size: 0x168 (Inherited: 0x168)
struct USQWaterDamageComponent : UODKWaterDamageComponent {
};

// Class Squad.SQWaterMovementComponent
// Size: 0x168 (Inherited: 0x140)
struct USQWaterMovementComponent : UODKWaterMovementComponent {
	char pad_140[0x28]; // 0x140(0x28)
};

// Class Squad.SQWaterVolume
// Size: 0x2a8 (Inherited: 0x290)
struct ASQWaterVolume : APhysicsVolume {
	float WaterForce; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct TArray<struct TWeakObjectPtr<struct ASQSoldier>> SoldiersInVolume; // 0x298(0x10)
};

// Class Squad.ADSPostProcessSettings
// Size: 0x580 (Inherited: 0x30)
struct UADSPostProcessSettings : UDataAsset {
	struct UCurveFloat* BlendCurve; // 0x30(0x08)
	float MaxBlurAmount; // 0x38(0x04)
	int BlurSteps; // 0x3c(0x04)
	float BlurDist; // 0x40(0x04)
	float PinholeSize; // 0x44(0x04)
	float PinholeFadeSize; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FPostProcessSettings PPSettings; // 0x50(0x530)
};

// Class Squad.SQWeaponAnimInstance
// Size: 0x2b0 (Inherited: 0x2a0)
struct USQWeaponAnimInstance : USQItemAnimInstance {
	bool bMagHasAmmo; // 0x298(0x01)
	bool bIsWeaponFiring; // 0x299(0x01)
	bool bIsReloading; // 0x29a(0x01)
	float MagHasAmmoAlpha; // 0x29c(0x04)
	float NotMagHasAmmoAlpha; // 0x2a0(0x04)
	float CurrentMagRemainingRoundsTime; // 0x2a4(0x04)
	float CurrentMagRemainingRoundsMultiplier; // 0x2a8(0x04)
	float AdjustAdsSightItemAnimPos; // 0x2ac(0x04)
};

// Class Squad.SQWeaponAttachment
// Size: 0x4c0 (Inherited: 0x4b0)
struct USQWeaponAttachment : UStaticMeshComponent {
	struct FName SocketName; // 0x4a8(0x08)
	struct ASQWeapon* AttachedWeapon; // 0x4b0(0x08)
	bool bShowIn1P; // 0x4b8(0x01)
	bool bShowIn3P; // 0x4b9(0x01)
};

// Class Squad.SQWeaponAttachment_Scope
// Size: 0x560 (Inherited: 0x4c0)
struct USQWeaponAttachment_Scope : USQWeaponAttachment {
	float MeshTransitionPercentage; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct UStaticMesh* ADSMesh; // 0x4c8(0x08)
	struct FTransform ADSMeshTransform; // 0x4d0(0x30)
	struct UStaticMesh* NonADSMesh; // 0x500(0x08)
	char pad_508[0x8]; // 0x508(0x08)
	struct FTransform NonADSMeshTransform; // 0x510(0x30)
	struct TArray<struct FSQMeshTransitionSettings> InToADSMeshTransitionSettings; // 0x540(0x10)
	struct TArray<struct FSQMeshTransitionSettings> OutFromADSMeshTransitionSettings; // 0x550(0x10)

	void ShowADSMesh(); // Function Squad.SQWeaponAttachment_Scope.ShowADSMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x91f960
	void SetMeshTransitionSetting(struct FSQMeshTransitionSettings& MeshTransitionSetting); // Function Squad.SQWeaponAttachment_Scope.SetMeshTransitionSetting // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91f810
	void HideADSMesh(); // Function Squad.SQWeaponAttachment_Scope.HideADSMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x91f670
};

// Class Squad.SQWeaponStaticInfo
// Size: 0x978 (Inherited: 0x528)
struct USQWeaponStaticInfo : USQItemStaticInfo {
	struct UAnimMontage* ReloadBipodWeaponMontage; // 0x528(0x08)
	struct UAnimMontage* ReloadBipod1pMontage; // 0x530(0x08)
	struct UAnimMontage* ReloadBipod3pMontage; // 0x538(0x08)
	struct UAnimMontage* ReloadDryWeaponMontage; // 0x540(0x08)
	struct UAnimMontage* ReloadDry1pMontage; // 0x548(0x08)
	struct UAnimMontage* ReloadDry3pMontage; // 0x550(0x08)
	struct UAnimMontage* ReloadDryBipodWeaponMontage; // 0x558(0x08)
	struct UAnimMontage* ReloadDryBipod1pMontage; // 0x560(0x08)
	struct UAnimMontage* ReloadDryBipod3pMontage; // 0x568(0x08)
	struct TArray<struct UAnimMontage*> RandomFire1pMontage; // 0x570(0x10)
	struct UAnimMontage* FireAdd3pMontage; // 0x580(0x08)
	struct UAnimMontage* FireTriggerWeaponMontage; // 0x588(0x08)
	struct UAnimMontage* FireTrigger1pMontage; // 0x590(0x08)
	struct UAnimMontage* FireTrigger3pMontage; // 0x598(0x08)
	struct UAnimMontage* FireSway1pMontage; // 0x5a0(0x08)
	struct UAnimMontage* FireSway1pBlendInMontage; // 0x5a8(0x08)
	struct UAnimMontage* FireAds1pMontage; // 0x5b0(0x08)
	struct UAnimMontage* FireAds3pMontage; // 0x5b8(0x08)
	struct UAnimMontage* FireBipodWeaponMontage; // 0x5c0(0x08)
	struct UAnimMontage* FireBipod1pMontage; // 0x5c8(0x08)
	struct UAnimMontage* FireBipod3pMontage; // 0x5d0(0x08)
	struct UAnimMontage* FireAddBipod1pMontage; // 0x5d8(0x08)
	struct UAnimMontage* FireAddBipod3pMontage; // 0x5e0(0x08)
	struct FSQMontageSectionNames BipodEndLoopSectionNames; // 0x5e8(0x28)
	struct UAnimMontage* BipodWeaponMontage; // 0x610(0x08)
	struct UAnimMontage* Bipod1pMontage; // 0x618(0x08)
	struct UAnimMontage* Bipod3pMontage; // 0x620(0x08)
	struct UAnimMontage* FiremodeBipodMontage; // 0x628(0x08)
	struct UAnimMontage* FiremodeBipodWeaponMontage; // 0x630(0x08)
	struct UAnimMontage* FiremodeMontage; // 0x638(0x08)
	struct UAnimMontage* FiremodeWeaponMontage; // 0x640(0x08)
	struct UAnimMontage* BobbingAimProneSway1pMontage; // 0x648(0x08)
	struct UAnimMontage* BobbingAim1pMontage; // 0x650(0x08)
	struct FName MuzzleFlashEffectSocket; // 0x658(0x08)
	struct UParticleSystem* MuzzleFlashEffect1P; // 0x660(0x08)
	struct UParticleSystem* MuzzleFlashEffect3P; // 0x668(0x08)
	float ShellEjectionCullDistanceInMeters; // 0x670(0x04)
	struct FName ShellEjectionEffectSocket; // 0x674(0x08)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct UParticleSystem* ShellEjectionEffect1p; // 0x680(0x08)
	struct UParticleSystem* ShellEjectionEffect3p; // 0x688(0x08)
	float RecoilCameraOffsetFactor; // 0x690(0x04)
	float RecoilCameraOffsetInterpSpeed; // 0x694(0x04)
	float RecoilLofCameraOffsetLimit; // 0x698(0x04)
	float RecoilLofAttackInterpSpeed; // 0x69c(0x04)
	float RecoilCanReleaseInterpSpeed; // 0x6a0(0x04)
	float RecoilLofReleaseInterpSpeed; // 0x6a4(0x04)
	float RecoilWeaponRelLocFactor; // 0x6a8(0x04)
	float RecoilCameraShotInterpSpeed; // 0x6ac(0x04)
	float RecoilAdsCameraShotInterpSpeed; // 0x6b0(0x04)
	float MoveRecoilFactorRelease; // 0x6b4(0x04)
	float AddMoveRecoil; // 0x6b8(0x04)
	float MaxMoveRecoilFactor; // 0x6bc(0x04)
	float MinMoveRecoilFactor; // 0x6c0(0x04)
	float LowStaminaRecoilFactor; // 0x6c4(0x04)
	float FullStaminaRecoilFactor; // 0x6c8(0x04)
	struct FVector ProneAdsRecoilMean; // 0x6cc(0x0c)
	struct FVector ProneAdsRecoilSigma; // 0x6d8(0x0c)
	struct FVector ProneRecoilMean; // 0x6e4(0x0c)
	struct FVector ProneRecoilSigma; // 0x6f0(0x0c)
	struct FVector CrouchAdsRecoilMean; // 0x6fc(0x0c)
	struct FVector CrouchAdsRecoilSigma; // 0x708(0x0c)
	struct FVector CrouchRecoilMean; // 0x714(0x0c)
	struct FVector CrouchRecoilSigma; // 0x720(0x0c)
	struct FVector StandAdsRecoilMean; // 0x72c(0x0c)
	struct FVector StandAdsRecoilSigma; // 0x738(0x0c)
	struct FVector StandRecoilMean; // 0x744(0x0c)
	struct FVector StandRecoilSigma; // 0x750(0x0c)
	struct FVector ProneTransitionRecoilMean; // 0x75c(0x0c)
	struct FVector ProneTransitionRecoilSigma; // 0x768(0x0c)
	struct FVector BipodAdsRecoilMean; // 0x774(0x0c)
	struct FVector BipodAdsRecoilSigma; // 0x780(0x0c)
	struct FVector BipodRecoilMean; // 0x78c(0x0c)
	struct FVector BipodRecoilSigma; // 0x798(0x0c)
	float DeviationVisuFbInterpSpeed_YZ; // 0x7a4(0x04)
	float DeviationVisuFbInterpSpeed_Final; // 0x7a8(0x04)
	float DeviationVisuFbMax; // 0x7ac(0x04)
	float MinShotDeviationFactor; // 0x7b0(0x04)
	float MaxShotDeviationFactor; // 0x7b4(0x04)
	float AddShotDeviationFactor; // 0x7b8(0x04)
	float AddShotDeviationFactorAds; // 0x7bc(0x04)
	float ShotDeviationFactorRelease; // 0x7c0(0x04)
	float LowStaminaDeviationFactor; // 0x7c4(0x04)
	float FullStaminaDeviationFactor; // 0x7c8(0x04)
	float MoveDeviationFactorRelease; // 0x7cc(0x04)
	float AddMoveDeviation; // 0x7d0(0x04)
	float MaxMoveDeviationFactor; // 0x7d4(0x04)
	float MinMoveDeviationFactor; // 0x7d8(0x04)
	float MinBipodAdsDeviation; // 0x7dc(0x04)
	float MinBipodDeviation; // 0x7e0(0x04)
	float MinProneAdsDeviation; // 0x7e4(0x04)
	float MinProneDeviation; // 0x7e8(0x04)
	float MinCrouchAdsDeviation; // 0x7ec(0x04)
	float MinCrouchDeviation; // 0x7f0(0x04)
	float MinStandAdsDeviation; // 0x7f4(0x04)
	float MinStandDeviation; // 0x7f8(0x04)
	float MinProneTransitionDeviation; // 0x7fc(0x04)
	float SwayInterpSpeed_YZ; // 0x800(0x04)
	float SwayInterpSpeed_Final; // 0x804(0x04)
	float HasSway; // 0x808(0x04)
	float MoveSwayFactorRelease; // 0x80c(0x04)
	float AddMoveSway; // 0x810(0x04)
	float MinMoveSwayFactor; // 0x814(0x04)
	float MaxMoveSwayFactor; // 0x818(0x04)
	float LowStaminaSwayFactor; // 0x81c(0x04)
	float FullStaminaSwayFactor; // 0x820(0x04)
	float HoldingBreathSwayFactor; // 0x824(0x04)
	float ProneAdsSwayMin; // 0x828(0x04)
	float ProneSwayMin; // 0x82c(0x04)
	float CrouchAdsSwayMin; // 0x830(0x04)
	float CrouchSwayMin; // 0x834(0x04)
	float StandAdsSwayMin; // 0x838(0x04)
	float StandSwayMin; // 0x83c(0x04)
	float ProneTransitionSwayMin; // 0x840(0x04)
	bool bHasBipod; // 0x844(0x01)
	char pad_845[0x3]; // 0x845(0x03)
	float BipodLength; // 0x848(0x04)
	float BipodHeightRaw; // 0x84c(0x04)
	bool bHasAdjustableSight; // 0x850(0x01)
	bool bLeanHeadWhenAds; // 0x851(0x01)
	char pad_852[0x6]; // 0x852(0x06)
	struct TArray<struct FSQAdjustableSightMontageSet> AdsSightsAnim; // 0x858(0x10)
	struct UAnimMontage* BaseAds1pMontage; // 0x868(0x08)
	struct UAnimMontage* AdsTransition1pMontage; // 0x870(0x08)
	struct UAnimMontage* FromAdsTransition1pMontage; // 0x878(0x08)
	struct UAnimSequence* AdjustableAdsSightItemAnim; // 0x880(0x08)
	float AdjustableAdsSightItemFrameRate; // 0x888(0x04)
	bool bHasAdsTransition; // 0x88c(0x01)
	char pad_88D[0x3]; // 0x88d(0x03)
	struct FVector Aim1pWeaponMeshPosition; // 0x890(0x0c)
	struct FVector Aim1pWeaponMeshRescale; // 0x89c(0x0c)
	float Steady1pHipFireDuration; // 0x8a8(0x04)
	bool bPlaySoundOnMagEmpty; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	int PlaySoundOnEmptyUse; // 0x8b0(0x04)
	int PlaySoundOnEmptyAltUse; // 0x8b4(0x04)
	struct USoundCue* ToggleFiremodeSound1P; // 0x8b8(0x08)
	struct USoundCue* ToggleFiremodeSound3P; // 0x8c0(0x08)
	struct USoundCue* FromAdsSound1p; // 0x8c8(0x08)
	struct USoundCue* FromAdsSound3p; // 0x8d0(0x08)
	struct USoundCue* ToAdsSound1p; // 0x8d8(0x08)
	struct USoundCue* ToAdsSound3p; // 0x8e0(0x08)
	struct USoundCue* SightSwitchingSound1p; // 0x8e8(0x08)
	struct USoundCue* SightSwitchingSound3p; // 0x8f0(0x08)
	struct USoundCue* MagEmptySound1p; // 0x8f8(0x08)
	struct USoundCue* MagEmptySound3p; // 0x900(0x08)
	struct USoundCue* EmptyUseSound1p; // 0x908(0x08)
	struct USoundCue* EmptyUseSound3p; // 0x910(0x08)
	struct USoundCue* EmptyAltUseSound1p; // 0x918(0x08)
	struct USoundCue* EmptyAltUseSound3p; // 0x920(0x08)
	struct FSQMontageSectionNames BobbingAimEndLoopSectionNames; // 0x928(0x28)
	struct FText DefaultZeroingText; // 0x950(0x18)
	struct FName AimDirectionSocketName; // 0x968(0x08)
	bool bShowZeroingInHud; // 0x970(0x01)
	char pad_971[0x7]; // 0x971(0x07)
};

// Class Squad.SQWheeledVehicle
// Size: 0xb00 (Inherited: 0xb00)
struct ASQWheeledVehicle : ASQWheeledVehicleBase {
};

// Class Squad.SQWheeledVehicleMovementComponent
// Size: 0x478 (Inherited: 0x460)
struct USQWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent4W {
	char pad_460[0x18]; // 0x460(0x18)
};

// Class Squad.SQWorldSettings
// Size: 0x990 (Inherited: 0x3c8)
struct ASQWorldSettings : AWorldSettings {
	struct FVector2D MapGridSpacing; // 0x3c8(0x08)
	struct AActor* MapTextureCornerZero; // 0x3d0(0x08)
	struct AActor* MapTextureCornerOne; // 0x3d8(0x08)
	struct FSQMinimapMakerSettings MinimapMakerSettings; // 0x3e0(0x550)
	struct AActor* MapCameraLocation; // 0x930(0x08)
	struct TArray<struct ASQGameRuleSet*> MapRulesets; // 0x938(0x10)
	struct FText DisplayTitle; // 0x948(0x18)
	struct FScriptMulticastDelegate OnMapTextureChange; // 0x960(0x10)
	int SeaLevel; // 0x970(0x04)
	int HelicoptersAltitudeThreshold; // 0x974(0x04)
	bool bCanDriverSwitchTo3rdPerson; // 0x978(0x01)
	char pad_979[0x7]; // 0x979(0x07)
	struct UTexture* MapTexture; // 0x980(0x08)
	char pad_988[0x8]; // 0x988(0x08)

	void SetMapTexture(struct UTexture* Value); // Function Squad.SQWorldSettings.SetMapTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x9200b0
	bool GetCanDriverSwitchTo3rdPerson(); // Function Squad.SQWorldSettings.GetCanDriverSwitchTo3rdPerson // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x920080
};

// Class Squad.SQVehicleWreckTurret
// Size: 0x4c0 (Inherited: 0x4b0)
struct USQVehicleWreckTurret : UStaticMeshComponent {
	int ClearTime; // 0x4a8(0x04)
	char pad_4B4[0xc]; // 0x4b4(0x0c)

	void DestroyTurret(); // Function Squad.SQVehicleWreckTurret.DestroyTurret // (Native|Event|Public|BlueprintEvent) // @ game+0x920060
};

// Class Squad.SQVehicleWreckTurretAmmocook
// Size: 0x4f0 (Inherited: 0x4c0)
struct USQVehicleWreckTurretAmmocook : USQVehicleWreckTurret {
	float BlastForce; // 0x4b8(0x04)
	float ConeAngle; // 0x4bc(0x04)
	struct FVector2D BlastXOffset; // 0x4c0(0x08)
	struct FVector2D BlastYOffset; // 0x4c8(0x08)
	struct FVector BlastDirection; // 0x4d0(0x0c)
	struct FVector Offset; // 0x4dc(0x0c)

	void BlastTurret(); // Function Squad.SQVehicleWreckTurretAmmocook.BlastTurret // (Native|Public|BlueprintCallable) // @ game+0x920040
};

