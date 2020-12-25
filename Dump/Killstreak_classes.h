// Class Killstreak.AkPoolComponent
// Size: 0x148 (Inherited: 0xd0)
struct UAkPoolComponent : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct UAkComponent* PooledAkComponentClass; // 0xd8(0x08)
	struct TArray<struct UAkComponent*> UnusedComponentsArray; // 0xe0(0x10)
	struct TSet<struct UAkComponent*> UsedComponentsSet; // 0xf0(0x50)
	struct UAkComponent* PeekedAkComponent; // 0x140(0x08)
};

// Class Killstreak.ItemCollection
// Size: 0x98 (Inherited: 0x30)
struct UItemCollection : public UPrimaryDataAsset {
	struct FPrimaryAssetRules Rules; // 0x30(0x0c)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FGameplayTagQuery CollectionQuery; // 0x40(0x48)
	struct FName PrimaryAssetType; // 0x88(0x08)
	char UnknownData_90[0x8]; // 0x90(0x08)
};

// Class Killstreak.ApparelCollection
// Size: 0xd8 (Inherited: 0x98)
struct UApparelCollection : public UItemCollection {
	struct FText ApparelCollectionName; // 0x98(0x18)
	struct FText ApparelCollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class Killstreak.AttachmentCollection
// Size: 0x148 (Inherited: 0x98)
struct UAttachmentCollection : public UItemCollection {
	struct FText AttachmentCollectionName; // 0x98(0x18)
	struct FText AttachmentCollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0x80]; // 0xc8(0x80)

	void GetCompatibleAttachmentsForWeaponType(struct FGameplayTag WeaponType, struct TArray<struct TSoftObjectPtr<struct UKSWeaponAttachment>> OutCompatibleAttachments); // Function Killstreak.AttachmentCollection.GetCompatibleAttachmentsForWeaponType
};

// Class Killstreak.BakedOcclusionLUT
// Size: 0xb0 (Inherited: 0x28)
struct UBakedOcclusionLUT : public UObject {
	struct TMap<uint32_t, char> LUT; // 0x28(0x50)
	struct TArray<uint16_t> OctreeSampleMap; // 0x78(0x10)
	struct TArray<struct FIntVector> OctreeLocations; // 0x88(0x10)
	float DistanceOutputMin; // 0x98(0x04)
	float DistanceOutputMax; // 0x9c(0x04)
	float DistanceMin; // 0xa0(0x04)
	float DistanceMax; // 0xa4(0x04)
	float fOcclusionMultiplier; // 0xa8(0x04)
	float fOcclusionDistanceMultiplier; // 0xac(0x04)
};

// Class Killstreak.AudioOcclusionComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioOcclusionComponent : public UActorComponent {
	struct UBakedOcclusionLUT* LUT; // 0xb0(0x08)

	float GetPathedOcclusion(struct FVector Other); // Function Killstreak.AudioOcclusionComponent.GetPathedOcclusion
};

// Class Killstreak.EnvironmentListenerComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UEnvironmentListenerComponent : public UActorComponent {
	struct FName CurrentEnvironmentTag; // 0xb0(0x08)
	struct FName StartingEnvironment; // 0xb8(0x08)
	struct FWeakObjectPtr<struct UEnvironmentTrackerComponent> LastTrackerComponent; // 0xc0(0x08)

	void ViewTargetEnvironmentChanged(struct FName OldEnvironmentTag, struct FName NewEnvironmentTag); // Function Killstreak.EnvironmentListenerComponent.ViewTargetEnvironmentChanged
	void OnEnvironmentChanged(struct FName OldEnvironmentTag); // Function Killstreak.EnvironmentListenerComponent.OnEnvironmentChanged
	struct FName GetCurrentEnvironment(); // Function Killstreak.EnvironmentListenerComponent.GetCurrentEnvironment
};

// Class Killstreak.EnvironmentTrackerComponent
// Size: 0x138 (Inherited: 0xb0)
struct UEnvironmentTrackerComponent : public UActorComponent {
	struct TArray<struct UObject*> EnvironmentVolumes; // 0xb0(0x10)
	struct TMap<struct FName, int32_t> CachedEnvironmentCounts; // 0xc0(0x50)
	struct FName CachedCurrentEnvironment; // 0x110(0x08)
	struct FName LastEnvironment; // 0x118(0x08)
	struct FName DefaultEnvironment; // 0x120(0x08)
	struct FMulticastInlineDelegate OnEnvironmentChanged; // 0x128(0x10)

	struct FName ReevalulateEnvironment(); // Function Killstreak.EnvironmentTrackerComponent.ReevalulateEnvironment
	void OnRep_CurrentEnvironment(); // Function Killstreak.EnvironmentTrackerComponent.OnRep_CurrentEnvironment
	struct FName GetCurrentEnvironment(); // Function Killstreak.EnvironmentTrackerComponent.GetCurrentEnvironment
	void EndTouchingOwnerUpdatedComponent(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.EnvironmentTrackerComponent.EndTouchingOwnerUpdatedComponent
	void BlueprintEnvironmentChanged(struct FName OldEnvironment); // Function Killstreak.EnvironmentTrackerComponent.BlueprintEnvironmentChanged
	void BeginTouchingOwnerUpdatedComponent(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.EnvironmentTrackerComponent.BeginTouchingOwnerUpdatedComponent
};

// Class Killstreak.EnvironmentVolume
// Size: 0x268 (Inherited: 0x258)
struct AEnvironmentVolume : public ATriggerVolume {
	char UnknownData_258[0x8]; // 0x258(0x08)
	struct FName EnvironmentTag; // 0x260(0x08)
};

// Class Killstreak.PreviewActorLoadoutComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UPreviewActorLoadoutComponent : public UActorComponent {
	struct AKSJobSelectPreviewActor* PreviewActorOwner; // 0xb0(0x08)
};

// Class Killstreak.RogueScreenLoadoutComponent
// Size: 0x120 (Inherited: 0xb8)
struct URogueScreenLoadoutComponent : public UPreviewActorLoadoutComponent {
	struct UKSJobItem* CurrentJob; // 0xb8(0x08)
	struct UKSSkinBundle* OverrideSkin; // 0xc0(0x08)
	struct TMap<struct UKSItem*, struct UKSItem*> SkinMap; // 0xc8(0x50)
	bool bBoundToLoadoutFactory; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	int32_t LastLoadoutId; // 0x11c(0x04)

	void LoadoutDeleted(int32_t InLoadoutId); // Function Killstreak.RogueScreenLoadoutComponent.LoadoutDeleted
	void LoadoutChanged(struct UPUMG_Loadout* InLoadout); // Function Killstreak.RogueScreenLoadoutComponent.LoadoutChanged
};

// Class Killstreak.FavoritePreviewLoadoutComponent
// Size: 0x148 (Inherited: 0x120)
struct UFavoritePreviewLoadoutComponent : public URogueScreenLoadoutComponent {
	struct TSoftObjectPtr<struct UKSJobItem> FailSafeFavoriteJob; // 0x120(0x28)

	void CheckForPreferredJobChange(struct UPUMG_Loadout* InLoadout); // Function Killstreak.FavoritePreviewLoadoutComponent.CheckForPreferredJobChange
};

// Class Killstreak.JobCollection
// Size: 0xd8 (Inherited: 0x98)
struct UJobCollection : public UItemCollection {
	struct FText CollectionName; // 0x98(0x18)
	struct FText CollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

// Class Killstreak.KSJobRole
// Size: 0x78 (Inherited: 0x30)
struct UKSJobRole : public UDataAsset {
	struct FText JobRoleDisplayName; // 0x30(0x18)
	struct FName JobRoleName; // 0x48(0x08)
	struct FText JobRoleDescription; // 0x50(0x18)
	int32_t JobRoleSortOrder; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct UTexture2D* JobRoleIcon; // 0x70(0x08)

	struct UTexture2D* GetRoleIcon(); // Function Killstreak.KSJobRole.GetRoleIcon
};

// Class Killstreak.KickbackModuleRandom
// Size: 0x40 (Inherited: 0x28)
struct UKickbackModuleRandom : public UKickbackModule {
	float MinAmplitude; // 0x28(0x04)
	float MaxAmplitude; // 0x2c(0x04)
	float MinDuration; // 0x30(0x04)
	float MaxDuration; // 0x34(0x04)
	float MaxOffsetFromVertical; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Killstreak.KillstreakGameSingleton
// Size: 0x88 (Inherited: 0x28)
struct UKillstreakGameSingleton : public UPlatformGameSingleton {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// Class Killstreak.KSAccoladeTracker
// Size: 0x98 (Inherited: 0x28)
struct UKSAccoladeTracker : public UObject {
	char UnknownData_28[0x10]; // 0x28(0x10)
	struct FAccoladeDisplayInfo AccoladeDisplayInfo; // 0x38(0x60)

	void StartTracking(); // Function Killstreak.KSAccoladeTracker.StartTracking
	void ResetTracker(); // Function Killstreak.KSAccoladeTracker.ResetTracker
	void NativeHandleElimEvent(struct FCombatEventInfo ElimEvent); // Function Killstreak.KSAccoladeTracker.NativeHandleElimEvent
	void NativeHandleDownEvent(struct FCombatEventInfo DownEvent); // Function Killstreak.KSAccoladeTracker.NativeHandleDownEvent
	void HandleElimEvent(struct FCombatEventInfo ElimEvent); // Function Killstreak.KSAccoladeTracker.HandleElimEvent
	void HandleDownEvent(struct FCombatEventInfo DownEvent); // Function Killstreak.KSAccoladeTracker.HandleDownEvent
	struct FAccoladeDisplayInfo GetPrimaryAccoladeDisplayInfo(); // Function Killstreak.KSAccoladeTracker.GetPrimaryAccoladeDisplayInfo
	bool GetOwningGameMode(struct AKSGameMode* OutGameMode); // Function Killstreak.KSAccoladeTracker.GetOwningGameMode
	void DispatchGameStateAccoladeDisplay(struct AKSPlayerState* RelevantPlayer, struct FAccoladeDisplayInfo AccoladeToDisplay, bool IgnoreRelevantPlayerId); // Function Killstreak.KSAccoladeTracker.DispatchGameStateAccoladeDisplay
};

// Class Killstreak.KSAcquisition
// Size: 0x50 (Inherited: 0x28)
struct UKSAcquisition : public UObject {
	struct TArray<struct UPUMG_StoreItem*> AcquisitionItems; // 0x28(0x10)
	char UnknownData_38[0x18]; // 0x38(0x18)

	bool IsVoucherAcquisition(); // Function Killstreak.KSAcquisition.IsVoucherAcquisition
	bool IsPurchase(); // Function Killstreak.KSAcquisition.IsPurchase
	bool IsBundleAcquisition(); // Function Killstreak.KSAcquisition.IsBundleAcquisition
};

// Class Killstreak.KSAcquisitionManager
// Size: 0x88 (Inherited: 0x50)
struct UKSAcquisitionManager : public UPUMG_AcquisitionManager {
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct FMulticastInlineDelegate OnAcquisitionReady; // 0x58(0x10)
	struct TArray<struct UKSAcquisition*> QueuedAcquisitions; // 0x68(0x10)
	struct UKSAcquisition* PendingAcquisition; // 0x78(0x08)
	bool bIsDisplayingAcquisition; // 0x80(0x01)
	char UnknownData_81[0x7]; // 0x81(0x07)

	struct UKSAcquisition* GetNextAcquistion(bool KeepAcquistionsBlocked); // Function Killstreak.KSAcquisitionManager.GetNextAcquistion
	void CreateAcquisitionForItem(struct UPUMG_StoreItem* StoreItem); // Function Killstreak.KSAcquisitionManager.CreateAcquisitionForItem
};

// Class Killstreak.KSActivityInstanceManager
// Size: 0xc8 (Inherited: 0x28)
struct UKSActivityInstanceManager : public UObject {
	char UnknownData_28[0xa0]; // 0x28(0xa0)
};

// Class Killstreak.KSActivity
// Size: 0x2b0 (Inherited: 0xf8)
struct UKSActivity : public UPlatformInventoryItem {
	int64_t ProgressLootId; // 0xf8(0x08)
	int64_t RemoveProgressLootId; // 0x100(0x08)
	int64_t RewardVendorId; // 0x108(0x08)
	int64_t RewardXpTableId; // 0x110(0x08)
	struct TArray<int64_t> EntitlementItemIds; // 0x118(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSActivity>> ChildActivities; // 0x128(0x10)
	SoftClassProperty TrackerClass; // 0x138(0x28)
	struct TMap<struct FString, float> TrackerConfig; // 0x160(0x50)
	struct TMap<struct FString, struct FString> TrackerStringConfig; // 0x1b0(0x50)
	bool bIsClientAuthority; // 0x200(0x01)
	bool bCreateTrackerIfFinished; // 0x201(0x01)
	bool bAlwaysAllowProgress; // 0x202(0x01)
	bool bRequireAchievements; // 0x203(0x01)
	bool bRequireRewards; // 0x204(0x01)
	bool bRequireRanked; // 0x205(0x01)
	bool bAlwaysPackageActivityIfCreated; // 0x206(0x01)
	char UnknownData_207[0x1]; // 0x207(0x01)
	struct FActivityAchievementInfo AchievementInfo; // 0x208(0x58)
	enum class EKSActivityProgressDisplayType ProgressDisplayPreference; // 0x260(0x01)
	enum class EKSActivityClientNotifyFrequency ClientNotifyFrequency; // 0x261(0x01)
	char UnknownData_262[0x6]; // 0x262(0x06)
	struct TArray<struct FActivityTierStructure> ActivityTierData; // 0x268(0x10)
	bool bShowInPostMatchLobby; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct FActivityReference Reference; // 0x280(0x30)

	void InitNewlyCreatedActivity(int64_t InItemId, int64_t InProgressLootId, int64_t InRewardXpTableId, int64_t InRewardVendorId); // Function Killstreak.KSActivity.InitNewlyCreatedActivity
	bool GetTierDataForProgress(int32_t Progress, struct FActivityTierStructure TierData); // Function Killstreak.KSActivity.GetTierDataForProgress
	struct UKSActivityInstance* GetInstanceForPlayer(struct UObject* WorldContextObject, struct AKSPlayerController* Player); // Function Killstreak.KSActivity.GetInstanceForPlayer
};

// Class Killstreak.KSJobActivity
// Size: 0x2d8 (Inherited: 0x2b0)
struct UKSJobActivity : public UKSActivity {
	struct TSoftObjectPtr<struct UKSJobItem> ReferenceJob; // 0x2b0(0x28)
};

// Class Killstreak.KSMapActivity
// Size: 0x2d0 (Inherited: 0x2b0)
struct UKSMapActivity : public UKSActivity {
	struct FString ReferenceMap; // 0x2b0(0x10)
	struct FString ReferenceGameMode; // 0x2c0(0x10)
};

// Class Killstreak.KSActivityInstance
// Size: 0x1c8 (Inherited: 0x28)
struct UKSActivityInstance : public UObject {
	struct FMulticastInlineDelegate OnProgressIncremented; // 0x28(0x10)
	struct FMulticastInlineDelegate OnProgressTierReached; // 0x38(0x10)
	struct FMulticastInlineDelegate OnProgressCompleted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnProgressInitialized; // 0x58(0x10)
	struct UKSEventTracker* TrackerInstance; // 0x68(0x08)
	int32_t ProgressCount; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct TArray<struct FActivityTier> ActivityTiers; // 0x78(0x10)
	char UnknownData_88[0x20]; // 0x88(0x20)
	struct FWeakObjectPtr<struct AKSPlayerController> PlayerController; // 0xa8(0x08)
	struct UKSActivity* Activity; // 0xb0(0x08)
	struct TArray<struct UKSActivityInstance*> ChildActivityInstances; // 0xb8(0x10)
	struct FWeakObjectPtr<struct UKSActivityManagerBase> ActivityManager; // 0xc8(0x08)
	bool bIsInitialized; // 0xd0(0x01)
	char UnknownData_D1[0x1]; // 0xd1(0x01)
	bool bIsChildActivity; // 0xd2(0x01)
	char UnknownData_D3[0x1]; // 0xd3(0x01)
	int32_t ProgressEarned; // 0xd4(0x04)
	struct TMap<struct FString, double> PlatformProgressPerAchievement; // 0xd8(0x50)
	struct TMap<enum class ERewardSource, float> ProgressEarnedBySource; // 0x128(0x50)
	struct TMap<struct FString, float> ProgressEarnedByEvent; // 0x178(0x50)

	void UpdateActivityTiers(); // Function Killstreak.KSActivityInstance.UpdateActivityTiers
	void OnEventTrackerTriggered(int32_t Count); // Function Killstreak.KSActivityInstance.OnEventTrackerTriggered
	bool IsUnlocked(); // Function Killstreak.KSActivityInstance.IsUnlocked
	bool IsFinished(); // Function Killstreak.KSActivityInstance.IsFinished
	bool IsActive(); // Function Killstreak.KSActivityInstance.IsActive
	bool IncrementProgress(int32_t Count); // Function Killstreak.KSActivityInstance.IncrementProgress
	bool HasAuthority(); // Function Killstreak.KSActivityInstance.HasAuthority
	void GetTiersForXpRange(struct TArray<struct FActivityTier> Tiers, int32_t StartingCount, int32_t EndingCount); // Function Killstreak.KSActivityInstance.GetTiersForXpRange
	void GetTiers(struct TArray<struct FActivityTier> Tiers); // Function Killstreak.KSActivityInstance.GetTiers
	bool GetTierDataForProgress(int32_t Progress, struct FActivityTierStructure TierData); // Function Killstreak.KSActivityInstance.GetTierDataForProgress
	bool GetTierCompletionTime(struct UObject* WorldContextObject, struct FActivityTier Tier, struct FDateTime TimeCompleted); // Function Killstreak.KSActivityInstance.GetTierCompletionTime
	struct FActivityTier GetProgressTierForSpecifiedProgressCount(int32_t SpecifiedCount); // Function Killstreak.KSActivityInstance.GetProgressTierForSpecifiedProgressCount
	struct FActivityTier GetProgressTier(); // Function Killstreak.KSActivityInstance.GetProgressTier
	bool GetProgressPercentageToNextTier(float ProgressPercentage); // Function Killstreak.KSActivityInstance.GetProgressPercentageToNextTier
	bool GetProgressPercentageToMaxTier(float ProgressPercentage); // Function Killstreak.KSActivityInstance.GetProgressPercentageToMaxTier
	float GetProgressFromSource(enum class ERewardSource Source); // Function Killstreak.KSActivityInstance.GetProgressFromSource
	float GetProgressFromEvent(struct FString EventName); // Function Killstreak.KSActivityInstance.GetProgressFromEvent
	int32_t GetProgressEarned(); // Function Killstreak.KSActivityInstance.GetProgressEarned
	struct FText GetProgressDisplayText(enum class EKSActivityProgressDisplayType DisplayType); // Function Killstreak.KSActivityInstance.GetProgressDisplayText
	int32_t GetProgressCount(); // Function Killstreak.KSActivityInstance.GetProgressCount
	int64_t GetPlayerId(); // Function Killstreak.KSActivityInstance.GetPlayerId
	struct FActivityTier GetNextTier(); // Function Killstreak.KSActivityInstance.GetNextTier
	bool GetMaxTier(struct FActivityTier MaxTier); // Function Killstreak.KSActivityInstance.GetMaxTier
	struct FDateTime GetLastProgressTime(); // Function Killstreak.KSActivityInstance.GetLastProgressTime
	int32_t GetInventoryProgressCount(); // Function Killstreak.KSActivityInstance.GetInventoryProgressCount
	struct FInventoryId GetInventoryId(); // Function Killstreak.KSActivityInstance.GetInventoryId
	void CreateTracker(); // Function Killstreak.KSActivityInstance.CreateTracker
};

// Class Killstreak.KSActivityManagerBase
// Size: 0x210 (Inherited: 0x28)
struct UKSActivityManagerBase : public UObject {
	struct FWeakObjectPtr<struct UKSGameInstance> GameInstance; // 0x28(0x08)
	struct FWeakObjectPtr<struct AKSGameMode> GameMode; // 0x30(0x08)
	char UnknownData_38[0x140]; // 0x38(0x140)
	int32_t VendorsLoadGroupId; // 0x178(0x04)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct TSoftObjectPtr<struct UKSActivity>> Activities; // 0x180(0x10)
	struct TArray<struct FWeakObjectPtr<struct AKSPlayerController>> PlayerControllers; // 0x190(0x10)
	char UnknownData_1A0[0x50]; // 0x1a0(0x50)
	enum class EKSActivityManagerSetupPhase SetupPhase; // 0x1f0(0x01)
	char UnknownData_1F1[0x1f]; // 0x1f1(0x1f)

	void RequestActivitiesLoad(); // Function Killstreak.KSActivityManagerBase.RequestActivitiesLoad
	bool QueryActivityInstancesByTime(struct TArray<struct UKSActivityInstance*> ActivityInstances, struct FTimespan TimeWindow, struct TArray<struct UKSActivityInstance*> Results, enum class EKSActivityTimeQueryType QueryType, struct AKSPlayerController* Player); // Function Killstreak.KSActivityManagerBase.QueryActivityInstancesByTime
	bool QueryActivityInstances(struct TArray<struct UKSActivityInstance*> ActivityInstances, enum class EKSActivityInstanceQueryType QueryType, struct TArray<struct UKSActivityInstance*> Results); // Function Killstreak.KSActivityManagerBase.QueryActivityInstances
	void OnStoreVendorsLoaded(int32_t GroupId, struct TArray<int32_t> VendorIds); // Function Killstreak.KSActivityManagerBase.OnStoreVendorsLoaded
	void OnSetupPhaseStarted(enum class EKSActivityManagerSetupPhase Phase); // Function Killstreak.KSActivityManagerBase.OnSetupPhaseStarted
	void OnSetupPhaseFinished(enum class EKSActivityManagerSetupPhase Phase); // Function Killstreak.KSActivityManagerBase.OnSetupPhaseFinished
	void OnServerPlayerPostLogin(struct AGameModeBase* InGameMode, struct APlayerController* NewPlayer); // Function Killstreak.KSActivityManagerBase.OnServerPlayerPostLogin
	void OnServerPlayerLogout(struct AGameModeBase* InGameMode, struct AController* Player); // Function Killstreak.KSActivityManagerBase.OnServerPlayerLogout
	void OnGameModePhaseChanged(struct FName PreviousPhaseName, struct FName NewPhaseName); // Function Killstreak.KSActivityManagerBase.OnGameModePhaseChanged
	void OnGameModeInitialized(struct AGameModeBase* InGameMode); // Function Killstreak.KSActivityManagerBase.OnGameModeInitialized
	void OnClientLoggedIn(); // Function Killstreak.KSActivityManagerBase.OnClientLoggedIn
	void OnAllActivitiesLoaded(); // Function Killstreak.KSActivityManagerBase.OnAllActivitiesLoaded
	bool IsSetupFinished(); // Function Killstreak.KSActivityManagerBase.IsSetupFinished
	void GoToNextSetupPhase(); // Function Killstreak.KSActivityManagerBase.GoToNextSetupPhase
	bool GetActivityInstances(struct TArray<struct UKSActivityInstance*> ActivityInstances, struct AKSPlayerController* Player); // Function Killstreak.KSActivityManagerBase.GetActivityInstances
	struct UKSActivityInstance* GetActivityInstanceByItemId(int64_t ItemId, struct AKSPlayerController* Player); // Function Killstreak.KSActivityManagerBase.GetActivityInstanceByItemId
	struct UKSActivityInstance* GetActivityInstance(struct FInventoryId InventoryId); // Function Killstreak.KSActivityManagerBase.GetActivityInstance
	struct UKSActivity* FindActivity(int64_t ReferenceValue1, int64_t ReferenceValue2, int64_t ReferenceValue3); // Function Killstreak.KSActivityManagerBase.FindActivity
	bool FindActivitiesByJob(struct UKSJobItem* JobItem, struct TArray<struct UKSJobActivity*> JobActivities); // Function Killstreak.KSActivityManagerBase.FindActivitiesByJob
	bool DoesRequireSetupPhase(enum class EKSActivityManagerSetupPhase Phase); // Function Killstreak.KSActivityManagerBase.DoesRequireSetupPhase
	void AttemptInitialActivityCreation(); // Function Killstreak.KSActivityManagerBase.AttemptInitialActivityCreation
};

// Class Killstreak.KSActivityTestManager
// Size: 0x248 (Inherited: 0x220)
struct AKSActivityTestManager : public AActor {
	struct TArray<struct UKSActivity*> Activities; // 0x220(0x10)
	bool bInitializeOnBeginPlay; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)
	struct TArray<struct UKSActivityInstance*> ActivityInstances; // 0x238(0x10)

	void DirectlySetupActivityTrackingForPlayer(struct AKSPlayerController* PlayerController); // Function Killstreak.KSActivityTestManager.DirectlySetupActivityTrackingForPlayer
};

// Class Killstreak.KSLagCompensatedActor
// Size: 0x260 (Inherited: 0x220)
struct AKSLagCompensatedActor : public AActor {
	struct AKSLagCompensatedActor* RealActor; // 0x220(0x08)
	struct AKSLagCompensatedActor* FakeActor; // 0x228(0x08)
	float PredictedSpawnTimeoutTime; // 0x230(0x04)
	bool bDestroyFakeOnYieldToReal; // 0x234(0x01)
	char UnknownData_235[0x3]; // 0x235(0x03)
	int32_t DefaultTeamNum; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct FSerializedMctsNetId InstigatorId; // 0x240(0x08)
	uint64_t LagCompActorID; // 0x248(0x08)
	char UnknownData_250[0x10]; // 0x250(0x10)

	void YieldToRealActor(); // Function Killstreak.KSLagCompensatedActor.YieldToRealActor
	void TryToDestroy(); // Function Killstreak.KSLagCompensatedActor.TryToDestroy
	void SetLagCompActorIDFromWeapon(struct AKSWeapon* SpawningWeapon); // Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromWeapon
	void SetLagCompActorIDFromParentProjectile(struct AKSProjectile* ParentProjectile, int32_t Index); // Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromParentProjectile
	void SetLagCompActorIDFromParentAgent(struct AKSAgentBase* ParentAgent, int32_t Index); // Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromParentAgent
	void SetLagCompActorIDFromModInstance(struct UKSPlayerModInstance* SpawningModInst); // Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromModInstance
	void RealActorTakeOver(); // Function Killstreak.KSLagCompensatedActor.RealActorTakeOver
	void RealActorDestroyed(struct AActor* Real); // Function Killstreak.KSLagCompensatedActor.RealActorDestroyed
	void OnTakeOverAsRealActor(); // Function Killstreak.KSLagCompensatedActor.OnTakeOverAsRealActor
	void OnRep_LagCompActorID(); // Function Killstreak.KSLagCompensatedActor.OnRep_LagCompActorID
	void OnRealActorSpawn(struct AKSLagCompensatedActor* Real); // Function Killstreak.KSLagCompensatedActor.OnRealActorSpawn
	void OnPlayerStateChanged(struct APlayerState* InPlayerState); // Function Killstreak.KSLagCompensatedActor.OnPlayerStateChanged
	void OnPlayerSpawned(struct AKSCharacterBase* InCharacter); // Function Killstreak.KSLagCompensatedActor.OnPlayerSpawned
	bool IsClientPredictedActor(); // Function Killstreak.KSLagCompensatedActor.IsClientPredictedActor
	bool IsActiveRealActor(); // Function Killstreak.KSLagCompensatedActor.IsActiveRealActor
	void InitializeRealActor(); // Function Killstreak.KSLagCompensatedActor.InitializeRealActor
	void InitializeFakeActor(); // Function Killstreak.KSLagCompensatedActor.InitializeFakeActor
	void FakeDestroyCleanup(); // Function Killstreak.KSLagCompensatedActor.FakeDestroyCleanup
};

// Class Killstreak.KSAgentBase
// Size: 0x2c8 (Inherited: 0x260)
struct AKSAgentBase : public AKSLagCompensatedActor {
	char UnknownData_260[0x8]; // 0x260(0x08)
	struct FMulticastInlineDelegate OnAgentRefund; // 0x268(0x10)
	bool BeginMissionOnPlay; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct UInterpToMovementComponent* MovementComponent; // 0x280(0x08)
	struct UBoxComponent* CollisionBox; // 0x288(0x08)
	struct FWeakObjectPtr<struct AController> OwningPlayer; // 0x290(0x08)
	float MaxHealth; // 0x298(0x04)
	enum class EAgentRefundMethod RefundMethod; // 0x29c(0x01)
	char UnknownData_29D[0x3]; // 0x29d(0x03)
	struct UKSWeaponAsset* AssociatedWeaponAsset; // 0x2a0(0x08)
	float CurrentHealth; // 0x2a8(0x04)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate OnHealthUpdate; // 0x2b0(0x10)
	int32_t OriginalOwnerId; // 0x2c0(0x04)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)

	void RefundAgentAsset(); // Function Killstreak.KSAgentBase.RefundAgentAsset
	void OnRep_CurrentHealth(); // Function Killstreak.KSAgentBase.OnRep_CurrentHealth
	void OnMissionBegin(); // Function Killstreak.KSAgentBase.OnMissionBegin
	void MovementPlaybackStop(struct FHitResult ImpactResult, float Time); // Function Killstreak.KSAgentBase.MovementPlaybackStop
	void BroadcastMissionBegin(); // Function Killstreak.KSAgentBase.BroadcastMissionBegin
};

// Class Killstreak.KSAgent_Aimed
// Size: 0x3a0 (Inherited: 0x2c8)
struct AKSAgent_Aimed : public AKSAgentBase {
	bool bDisplayAimTargeter; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	SoftClassProperty AimTargeterWidget; // 0x2d0(0x28)
	struct FAimData CachedAim; // 0x2f8(0x50)
	struct UKSWeaponAsset* WeaponAsset; // 0x348(0x08)
	struct UKSWeaponAsset_WithProjectile* CachedProjectileAsset; // 0x350(0x08)
	struct FTimerHandle StateTransitionHandle; // 0x358(0x08)
	float ExpectedTransitionEndTime; // 0x360(0x04)
	int32_t CurrentAmmo; // 0x364(0x04)
	int32_t CurrentBurstCount; // 0x368(0x04)
	enum class EWeaponStateNew FiringState; // 0x36c(0x01)
	char UnknownData_36D[0x3]; // 0x36d(0x03)
	int32_t NextShotId; // 0x370(0x04)
	struct FVector TargeterLocation; // 0x374(0x0c)
	float ProjectileSimFrequency; // 0x380(0x04)
	float MaxSimTime; // 0x384(0x04)
	char UnknownData_388[0x18]; // 0x388(0x18)

	void StartPreFire(); // Function Killstreak.KSAgent_Aimed.StartPreFire
	void StartPostFire(); // Function Killstreak.KSAgent_Aimed.StartPostFire
	void StartIdle(); // Function Killstreak.KSAgent_Aimed.StartIdle
	void StartFire(); // Function Killstreak.KSAgent_Aimed.StartFire
	void StartCooldown(); // Function Killstreak.KSAgent_Aimed.StartCooldown
	void StartBuildup(); // Function Killstreak.KSAgent_Aimed.StartBuildup
	bool ShouldShowTargeter(); // Function Killstreak.KSAgent_Aimed.ShouldShowTargeter
	void SetWeaponAsset(struct UKSWeaponAsset* InAsset); // Function Killstreak.KSAgent_Aimed.SetWeaponAsset
	void SetCachedAim(struct FAimData NewAim); // Function Killstreak.KSAgent_Aimed.SetCachedAim
	void RefillAmmo(); // Function Killstreak.KSAgent_Aimed.RefillAmmo
	void OnRep_WeaponAsset(); // Function Killstreak.KSAgent_Aimed.OnRep_WeaponAsset
	void OnRep_FiringState(); // Function Killstreak.KSAgent_Aimed.OnRep_FiringState
	void OnFiringStateChanged(enum class EWeaponStateNew NewState); // Function Killstreak.KSAgent_Aimed.OnFiringStateChanged
	void OnFiringComplete(); // Function Killstreak.KSAgent_Aimed.OnFiringComplete
	bool IsFiring(); // Function Killstreak.KSAgent_Aimed.IsFiring
	struct FVector GetWorldTargetingLocation(); // Function Killstreak.KSAgent_Aimed.GetWorldTargetingLocation
	void EndPostFire(); // Function Killstreak.KSAgent_Aimed.EndPostFire
	void ClearCachedAim(); // Function Killstreak.KSAgent_Aimed.ClearCachedAim
	bool BlueprintWantsToKeepFiring(); // Function Killstreak.KSAgent_Aimed.BlueprintWantsToKeepFiring
	bool AgentFire(struct FAimData AimData); // Function Killstreak.KSAgent_Aimed.AgentFire
};

// Class Killstreak.KSAgent_RevealDrone
// Size: 0x370 (Inherited: 0x2c8)
struct AKSAgent_RevealDrone : public AKSAgentBase {
	float MaxFlightSpeed; // 0x2c8(0x04)
	float DistanceToFly; // 0x2cc(0x04)
	float TimeBetweenPings; // 0x2d0(0x04)
	float RevealPeriodDuration; // 0x2d4(0x04)
	struct FPGame_ReplicatedTimer ReplicatedRevealTimer; // 0x2d8(0x38)
	float UpdateReplicatedTimerPeriod; // 0x310(0x04)
	bool bAppliesScrambleEffectToEnemies; // 0x314(0x01)
	char UnknownData_315[0x43]; // 0x315(0x43)
	struct TArray<struct AKSCharacter*> CurrentSweepFoundChars; // 0x358(0x10)
	char UnknownData_368[0x8]; // 0x368(0x08)

	void UpdateReplicatedTimer(); // Function Killstreak.KSAgent_RevealDrone.UpdateReplicatedTimer
	void StartNextReveal(); // Function Killstreak.KSAgent_RevealDrone.StartNextReveal
	void SetPlayerOwner(struct AKSCharacter* InOwner); // Function Killstreak.KSAgent_RevealDrone.SetPlayerOwner
	void ScrambleEnemies(); // Function Killstreak.KSAgent_RevealDrone.ScrambleEnemies
	void RevealOpposingTeam(struct AKSPlayerController* PlayerController, float Threshold); // Function Killstreak.KSAgent_RevealDrone.RevealOpposingTeam
	void Ping(int32_t Team, float Threshold, float SweepSpeed, float SweepTimeRemaining); // Function Killstreak.KSAgent_RevealDrone.Ping
	void GetRevealPeriodDuration(float Duration, float RemainingTime); // Function Killstreak.KSAgent_RevealDrone.GetRevealPeriodDuration
	void EndRevealPeriod(); // Function Killstreak.KSAgent_RevealDrone.EndRevealPeriod
};

// Class Killstreak.KSAgent_RevivalDrone
// Size: 0x390 (Inherited: 0x2c8)
struct AKSAgent_RevivalDrone : public AKSAgentBase {
	char UnknownData_2C8[0x50]; // 0x2c8(0x50)
	struct FMulticastInlineDelegate OnAbort; // 0x318(0x10)
	struct FMulticastInlineDelegate OnArrive; // 0x328(0x10)
	float MaxFlightSpeed; // 0x338(0x04)
	float InvisibleMovementTime; // 0x33c(0x04)
	float ReviveTime; // 0x340(0x04)
	float ReviveHealth; // 0x344(0x04)
	bool bDroneVisibility; // 0x348(0x01)
	bool bDroneVulnerability; // 0x349(0x01)
	bool bOngoingReviveEffectsActive; // 0x34a(0x01)
	char UnknownData_34B[0x1]; // 0x34b(0x01)
	struct FWeakObjectPtr<struct AKSCharacter> TargetCharacter; // 0x34c(0x08)
	enum class EReviveDroneState MovementStage; // 0x354(0x01)
	enum class EReviveDroneFlightPath FlightPath; // 0x355(0x01)
	char UnknownData_356[0x2]; // 0x356(0x02)
	float PreferredHoverHeight; // 0x358(0x04)
	float TransitHeight; // 0x35c(0x04)
	float HoverCorrectionTime; // 0x360(0x04)
	float DepartureHeight; // 0x364(0x04)
	bool bUseCustomReviveTime; // 0x368(0x01)
	char UnknownData_369[0x3]; // 0x369(0x03)
	float CustomReviveTime; // 0x36c(0x04)
	bool bInheritReviveTimeMods; // 0x370(0x01)
	bool DrawOutline; // 0x371(0x01)
	char OutlineStencilColor; // 0x372(0x01)
	char UnknownData_373[0x5]; // 0x373(0x05)
	struct UKSPlayerMod* ApplyOnReleaseMod; // 0x378(0x08)
	bool bDrawEnemyDroneOutline; // 0x380(0x01)
	char UnknownData_381[0x7]; // 0x381(0x07)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x388(0x08)

	void TargetStartGuaranteedRevive(struct AKSCharacter* InCharacter); // Function Killstreak.KSAgent_RevivalDrone.TargetStartGuaranteedRevive
	void StartReviveEffects(); // Function Killstreak.KSAgent_RevivalDrone.StartReviveEffects
	void SetOutlineVisibility(bool UseOutline); // Function Killstreak.KSAgent_RevivalDrone.SetOutlineVisibility
	void SetFriendlyOutlineVisibility(bool UseOutline); // Function Killstreak.KSAgent_RevivalDrone.SetFriendlyOutlineVisibility
	void OnTargetKilled(struct AKSCharacterBase* Killer, struct AKSCharacterBase* Killed); // Function Killstreak.KSAgent_RevivalDrone.OnTargetKilled
	void OnReviveEnd(struct AKSCharacter* RevivingCharacter, bool SuccessfulRevive); // Function Killstreak.KSAgent_RevivalDrone.OnReviveEnd
	void OnRep_OngoingReviveEffectsActive(); // Function Killstreak.KSAgent_RevivalDrone.OnRep_OngoingReviveEffectsActive
	void OnRep_DroneVulnerability(); // Function Killstreak.KSAgent_RevivalDrone.OnRep_DroneVulnerability
	void OnRep_DroneVisibility(); // Function Killstreak.KSAgent_RevivalDrone.OnRep_DroneVisibility
	float GetReviveProgress(); // Function Killstreak.KSAgent_RevivalDrone.GetReviveProgress
	enum class EReviveDroneState GetMovementStage(); // Function Killstreak.KSAgent_RevivalDrone.GetMovementStage
	enum class EReviveDroneFlightPath GetFlightPath(); // Function Killstreak.KSAgent_RevivalDrone.GetFlightPath
	void EventStartReviveEffects(); // Function Killstreak.KSAgent_RevivalDrone.EventStartReviveEffects
	void EventOngoingReviveEffectsStarted(); // Function Killstreak.KSAgent_RevivalDrone.EventOngoingReviveEffectsStarted
	void EventEndReviveEffects(); // Function Killstreak.KSAgent_RevivalDrone.EventEndReviveEffects
	void BroadcastMovementState(enum class EReviveDroneState State); // Function Killstreak.KSAgent_RevivalDrone.BroadcastMovementState
	void BroadcastEndReviveEffects(); // Function Killstreak.KSAgent_RevivalDrone.BroadcastEndReviveEffects
	void BroadcastDroneVulnerability(bool Vulnerable); // Function Killstreak.KSAgent_RevivalDrone.BroadcastDroneVulnerability
	void BroadcastDroneVisibility(bool Visible); // Function Killstreak.KSAgent_RevivalDrone.BroadcastDroneVisibility
	void BeginRevive(); // Function Killstreak.KSAgent_RevivalDrone.BeginRevive
	void ApplyDroneVulnerabilityInternal(); // Function Killstreak.KSAgent_RevivalDrone.ApplyDroneVulnerabilityInternal
	void ApplyDroneVisibilityInternal(); // Function Killstreak.KSAgent_RevivalDrone.ApplyDroneVisibilityInternal
	void ActivateDroneOngoingEffects(); // Function Killstreak.KSAgent_RevivalDrone.ActivateDroneOngoingEffects
};

// Class Killstreak.KSAIActorCollection
// Size: 0xe0 (Inherited: 0xb0)
struct UKSAIActorCollection : public UActorComponent {
	struct TArray<struct AKSDropLocation*> DropLocations; // 0xb0(0x10)
	struct UDataTable* BotNameTable; // 0xc0(0x08)
	char UnknownData_C8[0x18]; // 0xc8(0x18)
};

// Class Killstreak.KSAIActorCollection_Extraction
// Size: 0xf0 (Inherited: 0xe0)
struct UKSAIActorCollection_Extraction : public UKSAIActorCollection {
	struct TArray<struct AKSDefensePoint*> DefensePoints; // 0xe0(0x10)
};

// Class Killstreak.KSAIController
// Size: 0x5b0 (Inherited: 0x328)
struct AKSAIController : public AAIController {
	char UnknownData_328[0x50]; // 0x328(0x50)
	struct AKSCharacterBase* KSCharacter; // 0x378(0x08)
	struct AKSCharacter* CachedKSCharacter; // 0x380(0x08)
	struct AKSWayPointSet* WayPointSet; // 0x388(0x08)
	bool bShouldReverseWayPointSetDirection; // 0x390(0x01)
	char UnknownData_391[0x17]; // 0x391(0x17)
	struct AKSPlayerShop* Shop; // 0x3a8(0x08)
	char UnknownData_3B0[0x30]; // 0x3b0(0x30)
	struct AActor* StartPointToSpawnAt; // 0x3e0(0x08)
	struct AKSCharacter* CharacterToSpawn; // 0x3e8(0x08)
	struct UBehaviorTree* TreeToRun; // 0x3f0(0x08)
	struct UKSBTDifficulty* InitialDifficulty; // 0x3f8(0x08)
	struct UKSBTDifficulty* CachedDifficulty; // 0x400(0x08)
	char UnknownData_408[0x8]; // 0x408(0x08)
	struct UDataTable* DifficultyTable; // 0x410(0x08)
	struct FKSBTDifficultyConfig SpawnDifficultyConfig; // 0x418(0x78)
	struct UDataTable* ObjectivePriorityTable; // 0x490(0x08)
	struct UDataTable* ItemPriorityTable; // 0x498(0x08)
	struct UDataTable* AbilityTable; // 0x4a0(0x08)
	struct FKSInitialLoadout InitialLoadout; // 0x4a8(0x10)
	char UnknownData_4B8[0x18]; // 0x4b8(0x18)
	struct UKSAIPerceptionComponent* KSAIPerception; // 0x4d0(0x08)
	char UnknownData_4D8[0x28]; // 0x4d8(0x28)
	struct AActor* ActorForFocalOffset; // 0x500(0x08)
	char UnknownData_508[0x10]; // 0x508(0x10)
	float CrowdCollisionQueryRange; // 0x518(0x04)
	float CrowdPathOptimizationRange; // 0x51c(0x04)
	float CrowdAvoidanceRangeMultiplier; // 0x520(0x04)
	float CrowdSeparationWeight; // 0x524(0x04)
	bool bStartWithCrowdFollowing; // 0x528(0x01)
	char UnknownData_529[0x3]; // 0x529(0x03)
	int32_t TeamNumber; // 0x52c(0x04)
	char UnknownData_530[0x30]; // 0x530(0x30)
	struct FGameplayTagQuery AllowedJobQuery; // 0x560(0x48)
	char UnknownData_5A8[0x8]; // 0x5a8(0x08)

	void SetNavigationInteractTarget(struct TSoftObjectPtr<struct AActor> InteractTargetIn); // Function Killstreak.KSAIController.SetNavigationInteractTarget
	void OnPawnKilled(struct AKSCharacterBase* KillerCharacter, struct AKSCharacterBase* KilledCharacter); // Function Killstreak.KSAIController.OnPawnKilled
	void OnCosmeticLoadoutComplete(); // Function Killstreak.KSAIController.OnCosmeticLoadoutComplete
	void HandleTeamSidesFlipped(); // Function Killstreak.KSAIController.HandleTeamSidesFlipped
	void HandleJobChanged(); // Function Killstreak.KSAIController.HandleJobChanged
	struct AKSCharacter* GetOwnedCharacter(); // Function Killstreak.KSAIController.GetOwnedCharacter
	struct AActor* GetNavigationInteractTarget(); // Function Killstreak.KSAIController.GetNavigationInteractTarget
	struct UKSAIPerceptionComponent* GetKSPerceptionComponent(); // Function Killstreak.KSAIController.GetKSPerceptionComponent
	void ClearNavigationInteractTarget(); // Function Killstreak.KSAIController.ClearNavigationInteractTarget
};

// Class Killstreak.KSAIDifficultyComponent
// Size: 0x1d0 (Inherited: 0xb0)
struct UKSAIDifficultyComponent : public UActorComponent {
	struct UKSBTDifficulty* Difficulty; // 0xb0(0x08)
	struct UDataTable* DifficultyTable; // 0xb8(0x08)
	bool AllowDynamicDifficulty; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct FKSBTDifficultyConfig DifficultySpawnConfig; // 0xc8(0x78)
	float AccuracyMultiplierStandard; // 0x140(0x04)
	float AccuracyMultiplierThrownMelee; // 0x144(0x04)
	float AccuracyMultiplierWhenBlinded; // 0x148(0x04)
	float AccuracyMultiplierWhenCrosshairHidden; // 0x14c(0x04)
	float NewTargetAccuracyMultiplier; // 0x150(0x04)
	float NewTargetTime; // 0x154(0x04)
	float AttackDelayClipPercentMin; // 0x158(0x04)
	float AttackDelayClipPercentMax; // 0x15c(0x04)
	float AttackDelay; // 0x160(0x04)
	float DamageDealtMultiplier; // 0x164(0x04)
	float HeadshotDamageDealtMultiplier; // 0x168(0x04)
	float DamageTakenMultiplier; // 0x16c(0x04)
	float HeadshotDamageTakenMultiplier; // 0x170(0x04)
	float AimForHeadshotProbability; // 0x174(0x04)
	float DodgeRollProbability; // 0x178(0x04)
	float StrafeProbability; // 0x17c(0x04)
	float ThrowGrenadeProbability; // 0x180(0x04)
	float ThrowMeleeProbability; // 0x184(0x04)
	float PerceptionStrengthMin; // 0x188(0x04)
	float PerceptionStrengthMax; // 0x18c(0x04)
	float PerceptionStrength; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)
	struct TArray<struct UKSBTAction*> AllowedActions; // 0x198(0x10)
	struct TArray<struct UKSBTAction*> DisallowedActions; // 0x1a8(0x10)
	float SpeedMultiplier; // 0x1b8(0x04)
	struct FWeakObjectPtr<struct AKSWeapon> LastFiredWeapon; // 0x1bc(0x08)
	int32_t AttacksSinceLastAttackDelay; // 0x1c4(0x04)
	int32_t AttacksNeededToTriggerAttackDelay; // 0x1c8(0x04)
	char UnknownData_1CC[0x4]; // 0x1cc(0x04)

	struct UKSBTDifficulty* GetCurrentDifficulty(); // Function Killstreak.KSAIDifficultyComponent.GetCurrentDifficulty
	void ChangeDifficulty(struct UKSBTDifficulty* DifficultyIn); // Function Killstreak.KSAIDifficultyComponent.ChangeDifficulty
};

// Class Killstreak.KSAIItemPriorityComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UKSAIItemPriorityComponent : public UActorComponent {
	struct TArray<struct FKSBTItemPriorityTableRow> ItemPriorities; // 0xb0(0x10)

	void InsertPriority(struct FKSBTItemPriorityTableRow ItemPriority); // Function Killstreak.KSAIItemPriorityComponent.InsertPriority
	void InsertPriorities(struct UDataTable* ItemPriorityTable); // Function Killstreak.KSAIItemPriorityComponent.InsertPriorities
	float GetWeightByName(struct FString ItemName); // Function Killstreak.KSAIItemPriorityComponent.GetWeightByName
	float GetWeight(struct TSoftObjectPtr<struct UKSItem> Item); // Function Killstreak.KSAIItemPriorityComponent.GetWeight
	float GetShopPurchaseWeightByName(struct FString ItemName); // Function Killstreak.KSAIItemPriorityComponent.GetShopPurchaseWeightByName
	float GetShopPurchaseWeight(struct TSoftObjectPtr<struct UKSItem> Item); // Function Killstreak.KSAIItemPriorityComponent.GetShopPurchaseWeight
	float GetShopPriorityGroupByName(struct FString ItemName); // Function Killstreak.KSAIItemPriorityComponent.GetShopPriorityGroupByName
	float GetShopPriorityGroup(struct TSoftObjectPtr<struct UKSItem> Item); // Function Killstreak.KSAIItemPriorityComponent.GetShopPriorityGroup
	float GetPriorityMultiplierByName(struct FString ItemName); // Function Killstreak.KSAIItemPriorityComponent.GetPriorityMultiplierByName
	float GetPriorityMultiplier(struct TSoftObjectPtr<struct UKSItem> Item); // Function Killstreak.KSAIItemPriorityComponent.GetPriorityMultiplier
	void ClearPriorities(); // Function Killstreak.KSAIItemPriorityComponent.ClearPriorities
};

// Class Killstreak.KSAimAssistActor
// Size: 0x2b0 (Inherited: 0x220)
struct AKSAimAssistActor : public AActor {
	char UnknownData_220[0x10]; // 0x220(0x10)
	int32_t TeamNumOverride; // 0x230(0x04)
	char UnknownData_234[0x4]; // 0x234(0x04)
	struct UKSAimAssistAnchorComponent* AimAssistAnchor; // 0x238(0x08)
	char UnknownData_240[0x8]; // 0x240(0x08)
	struct TMap<struct FName, enum class EHitLocationType> BoneToHitLocationTypeMap; // 0x248(0x50)
	bool bCanBeKilled; // 0x298(0x01)
	char UnknownData_299[0x3]; // 0x299(0x03)
	float MaxHealth; // 0x29c(0x04)
	bool bLocallyKilled; // 0x2a0(0x01)
	char UnknownData_2A1[0x3]; // 0x2a1(0x03)
	struct FAimAssistActorHealthInfo HealthInfo; // 0x2a4(0x08)
	char UnknownData_2AC[0x4]; // 0x2ac(0x04)

	void ResetHealth(); // Function Killstreak.KSAimAssistActor.ResetHealth
	void OnRep_HealthInfo(); // Function Killstreak.KSAimAssistActor.OnRep_HealthInfo
	void OnKilled(); // Function Killstreak.KSAimAssistActor.OnKilled
	float ModifyIncomingDamageTaken(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser, struct AActor* DamagedActor); // Function Killstreak.KSAimAssistActor.ModifyIncomingDamageTaken
	bool IsValidIncomingDamage(struct UDamageType* DamageTypeClass, struct AController* EventInstigator, struct AActor* DamageCauser, struct AActor* DamagedActor); // Function Killstreak.KSAimAssistActor.IsValidIncomingDamage
	struct FVector GetAAHeadLocation(); // Function Killstreak.KSAimAssistActor.GetAAHeadLocation
	struct FVector GetAABodyLocation(); // Function Killstreak.KSAimAssistActor.GetAABodyLocation
	bool CanBeHitByWeapon(struct UKSWeaponAsset* Weapon); // Function Killstreak.KSAimAssistActor.CanBeHitByWeapon
	bool AimAssistRightNow(struct AKSPlayerController* PlayerController); // Function Killstreak.KSAimAssistActor.AimAssistRightNow
};

// Class Killstreak.KSAimAssistAnchorComponent
// Size: 0x460 (Inherited: 0x450)
struct UKSAimAssistAnchorComponent : public USphereComponent {
	float AimAssistPriority; // 0x450(0x04)
	char UnknownData_454[0xc]; // 0x454(0x0c)
};

// Class Killstreak.KSAimAssistComponent
// Size: 0x140 (Inherited: 0xb0)
struct UKSAimAssistComponent : public UActorComponent {
	struct AKSPlayerController* PlayerOwner; // 0xb0(0x08)
	struct TArray<struct FRankedAimAssistTarget> AssistTargetStack; // 0xb8(0x10)
	float CurrentTargetWeightStickiness; // 0xc8(0x04)
	float ProjectionSpaceStackBoundary; // 0xcc(0x04)
	bool bUseStackBoundaryFovScaling; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	float FovBaseline; // 0xd4(0x04)
	struct UCurveFloat* AimAssistEffectivenessCurve; // 0xd8(0x08)
	enum class EKSAimAssistActivationType ActivationType; // 0xe0(0x01)
	enum class EKSAimAssistInputFlag FrictionAllowedInputMode; // 0xe1(0x01)
	enum class EKSAimAssistInputFlag LockAllowedInputMode; // 0xe2(0x01)
	enum class EKSAimAssistInputFlag SnapAllowedInputMode; // 0xe3(0x01)
	enum class EKSAimAssistInputFlag CorrectionAllowedInputMode; // 0xe4(0x01)
	char UnknownData_E5[0x7]; // 0xe5(0x07)
	bool bAssistGadgets; // 0xec(0x01)
	bool bAimLockUsesTargetVelocity; // 0xed(0x01)
	bool bAimLockMeshSmoothCompensation; // 0xee(0x01)
	bool bAimLockUsesOwnVelocity; // 0xef(0x01)
	bool bComplexAimLockDeltaRotCalculation; // 0xf0(0x01)
	bool bComplexLookLocationCalculation; // 0xf1(0x01)
	char UnknownData_F2[0x2]; // 0xf2(0x02)
	float MaxAimLockEvaluationInterval; // 0xf4(0x04)
	bool bOldLockValid; // 0xf8(0x01)
	char UnknownData_F9[0x3]; // 0xf9(0x03)
	struct FRotator OldLockDeltaRot; // 0xfc(0x0c)
	struct FVector OldLockRelativeLocation; // 0x108(0x0c)
	struct FRotator OldInputRot; // 0x114(0x0c)
	struct UObject* LastAimAssistTarget; // 0x120(0x08)
	bool bLastTargetCrouching; // 0x128(0x01)
	char UnknownData_129[0x3]; // 0x129(0x03)
	struct FVector2D LastLockAssistPosition; // 0x12c(0x08)
	float LastBoundaryFactor; // 0x134(0x04)
	float AimAssistVisibilityUpdatePeriod; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)

	bool GetScaledProjectionBoundsForActor(struct APlayerController* Player, struct AActor* InActor, struct FBox2D OutBounds); // Function Killstreak.KSAimAssistComponent.GetScaledProjectionBoundsForActor
	float GetProjectionSpaceStackBoundary(); // Function Killstreak.KSAimAssistComponent.GetProjectionSpaceStackBoundary
	struct AKSPlayerController* GetPlayerOwner(); // Function Killstreak.KSAimAssistComponent.GetPlayerOwner
	float GetAssistRingScreenSize(struct APlayerController* Player, float ProjectionSpaceSize); // Function Killstreak.KSAimAssistComponent.GetAssistRingScreenSize
	bool GetActorScreenBoundsForActor(struct APlayerController* Player, struct AActor* InActor, struct FBox2D OutBounds); // Function Killstreak.KSAimAssistComponent.GetActorScreenBoundsForActor
};

// Class Killstreak.KSAimAssistDataBase
// Size: 0x38 (Inherited: 0x30)
struct UKSAimAssistDataBase : public UDataAsset {
	enum class EControllerInputType JoyConFallback; // 0x30(0x01)
	enum class EControllerInputType JoyConADSFallback; // 0x31(0x01)
	enum class EControllerInputType TouchFallback; // 0x32(0x01)
	enum class EControllerInputType TouchADSFallback; // 0x33(0x01)
	enum class EControllerInputType PCGamepadADSFallback; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
};

// Class Killstreak.KSAimCorrectionData
// Size: 0x128 (Inherited: 0x38)
struct UKSAimCorrectionData : public UKSAimAssistDataBase {
	struct TMap<enum class EControllerInputType, bool> AllowAimCorrection; // 0x38(0x50)
	struct TMap<enum class EControllerInputType, float> AimCorrectionOffset; // 0x88(0x50)
	struct TMap<enum class EControllerInputType, float> AimCorrectionRange; // 0xd8(0x50)
};

// Class Killstreak.KSAimFrictionData
// Size: 0x128 (Inherited: 0x38)
struct UKSAimFrictionData : public UKSAimAssistDataBase {
	struct TMap<enum class EControllerInputType, bool> RequireInputForAimFriction; // 0x38(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveVector*> AimFrictionCurve; // 0x88(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveFloat*> AimFrictionDistanceCurve; // 0xd8(0x50)
};

// Class Killstreak.KSAimLockData
// Size: 0x128 (Inherited: 0x38)
struct UKSAimLockData : public UKSAimAssistDataBase {
	struct TMap<enum class EControllerInputType, bool> RequireInputForAimLock; // 0x38(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveVector*> AimLockCurve; // 0x88(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveFloat*> AimLockDistanceCurve; // 0xd8(0x50)
};

// Class Killstreak.KSAimSnapData
// Size: 0x128 (Inherited: 0x38)
struct UKSAimSnapData : public UKSAimAssistDataBase {
	struct TMap<enum class EControllerInputType, struct FRotator> MaxAimSnapRotation; // 0x38(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveFloat*> AimSnapDistanceCurve; // 0x88(0x50)
	struct TMap<enum class EControllerInputType, struct UCurveVector*> AimSnapCurve; // 0xd8(0x50)
};

// Class Killstreak.KSAIObjectivePriorityComponent
// Size: 0x118 (Inherited: 0xb0)
struct UKSAIObjectivePriorityComponent : public UActorComponent {
	struct UDataTable* ObjectivePriorityTable; // 0xb0(0x08)
	struct TMap<struct FName, struct FKSBTObjectivePriorityTableRow> ObjectivePriorities; // 0xb8(0x50)
	struct TArray<struct FKSBTObjectivePriorityTableRow> SortedPriorities; // 0x108(0x10)

	void UpdatePriority(struct FName Key, struct FKSBTObjectivePriorityTableRow ObjectivePriority, bool ShouldResort); // Function Killstreak.KSAIObjectivePriorityComponent.UpdatePriority
	void UpdatePriorities(struct UDataTable* ObjectivePriorityTableIn); // Function Killstreak.KSAIObjectivePriorityComponent.UpdatePriorities
	void Setup(struct UDataTable* ObjectivePriorityTableIn); // Function Killstreak.KSAIObjectivePriorityComponent.Setup
	void InsertPriority(struct FName Key, struct FKSBTObjectivePriorityTableRow ObjectivePriority, bool ShouldResort); // Function Killstreak.KSAIObjectivePriorityComponent.InsertPriority
	void InsertPriorities(struct UDataTable* ObjectivePriorityTableIn); // Function Killstreak.KSAIObjectivePriorityComponent.InsertPriorities
	float GetPriority(struct FName Key); // Function Killstreak.KSAIObjectivePriorityComponent.GetPriority
	void ClearPriorities(); // Function Killstreak.KSAIObjectivePriorityComponent.ClearPriorities
	void ApplyPrioritiesFromDifficulty(struct UDataTable* ObjectivePriorityTableIn); // Function Killstreak.KSAIObjectivePriorityComponent.ApplyPrioritiesFromDifficulty
};

// Class Killstreak.KSAISense_MapPoint
// Size: 0x90 (Inherited: 0x80)
struct UKSAISense_MapPoint : public UAISense {
	struct TArray<struct FKSAIMapPointStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class Killstreak.KSAISense_Objective
// Size: 0xf8 (Inherited: 0xe8)
struct UKSAISense_Objective : public UAISense_Hearing {
	struct TArray<struct FAIObjectiveEvent> ObjectiveEvents; // 0xe8(0x10)

	void ReportObjectiveEvent(struct UObject* WorldContextObject, struct FVector ObjectiveLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function Killstreak.KSAISense_Objective.ReportObjectiveEvent
};

// Class Killstreak.KSAISense_Player
// Size: 0x90 (Inherited: 0x80)
struct UKSAISense_Player : public UAISense {
	struct TArray<struct FKSAIPlayerStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class Killstreak.KSAISense_Team
// Size: 0x90 (Inherited: 0x80)
struct UKSAISense_Team : public UAISense {
	struct TArray<struct FKSAITeamStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class Killstreak.KSAISenseEvent_Objective
// Size: 0x58 (Inherited: 0x28)
struct UKSAISenseEvent_Objective : public UAISenseEvent {
	struct FAIObjectiveEvent Event; // 0x28(0x30)
};

// Class Killstreak.KSAkComponent
// Size: 0x430 (Inherited: 0x3f0)
struct UKSAkComponent : public UAkComponent {
	enum class EOcclusionType OcclusionType; // 0x3f0(0x01)
	char UnknownData_3F1[0x3]; // 0x3f1(0x03)
	float MinTimeBetweenOcclusionUpdates; // 0x3f4(0x04)
	float OcclusionDistanceMultiplier; // 0x3f8(0x04)
	int32_t OcclusionInterpolationMilliseconds; // 0x3fc(0x04)
	float CurrentObstruction; // 0x400(0x04)
	float CurrentOcclusion; // 0x404(0x04)
	char UnknownData_408[0x4]; // 0x408(0x04)
	bool RequiresListenerDistance; // 0x40c(0x01)
	char UnknownData_40D[0x3]; // 0x40d(0x03)
	float MinTimeBetweenDistanceUpdates; // 0x410(0x04)
	char UnknownData_414[0x4]; // 0x414(0x04)
	bool RequiresListenerDirection; // 0x418(0x01)
	char UnknownData_419[0x3]; // 0x419(0x03)
	float MinTimeBetweenDirectionUpdates; // 0x41c(0x04)
	char UnknownData_420[0x8]; // 0x420(0x08)
	struct UBakedOcclusionLUT* LUT; // 0x428(0x08)
};

// Class Killstreak.KSAkAmbientSound
// Size: 0x260 (Inherited: 0x220)
struct AKSAkAmbientSound : public AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	struct UKSAkAmbientComponent* AkComponent; // 0x228(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x01)
	bool AutoPost; // 0x231(0x01)
	bool ForceNoTickingOnAkComponent; // 0x232(0x01)
	char UnknownData_233[0x2d]; // 0x233(0x2d)

	void StopAmbientSound(); // Function Killstreak.KSAkAmbientSound.StopAmbientSound
	void StopAllKSAmbientSounds(struct UObject* WorldContextObject); // Function Killstreak.KSAkAmbientSound.StopAllKSAmbientSounds
	void StartAmbientSound(); // Function Killstreak.KSAkAmbientSound.StartAmbientSound
	void StartAllKSAmbientSounds(struct UObject* WorldContextObject); // Function Killstreak.KSAkAmbientSound.StartAllKSAmbientSounds
};

// Class Killstreak.KSItemDrop
// Size: 0x360 (Inherited: 0x220)
struct AKSItemDrop : public AActor {
	char UnknownData_220[0x18]; // 0x220(0x18)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x238(0x08)
	char UnknownData_240[0x10]; // 0x240(0x10)
	struct TArray<struct AKSCharacter*> AllowedCharacters; // 0x250(0x10)
	float ItemDropInteractDuration; // 0x260(0x04)
	bool bIsInstantPickup; // 0x264(0x01)
	bool bAllowManualInstantPickup; // 0x265(0x01)
	char UnknownData_266[0x2]; // 0x266(0x02)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x268(0x08)
	struct FVector SightOffset; // 0x270(0x0c)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct AActor*> ActorsSeenBy; // 0x280(0x10)
	struct UKSItem* ItemAsset; // 0x290(0x08)
	struct UKSInteractionType* InteractionType; // 0x298(0x08)
	bool bDestroyOnPickUp; // 0x2a0(0x01)
	char UnknownData_2A1[0x7]; // 0x2a1(0x07)
	struct FMulticastInlineDelegate OnItemPickup; // 0x2a8(0x10)
	char UnknownData_2B8[0x20]; // 0x2b8(0x20)
	struct AKSCharacter* PendingPickupCharacter; // 0x2d8(0x08)
	struct UKSInteractionManager* CurrentInteractionManager; // 0x2e0(0x08)
	struct UKSStaticMeshComponent* CollisionMesh; // 0x2e8(0x08)
	char UnknownData_2F0[0x3]; // 0x2f0(0x03)
	enum class EPlayerSilhouetteType InactiveStencilValue; // 0x2f3(0x01)
	enum class EPlayerSilhouetteType ActiveStencilValue; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	struct FRotator LootSiteSpawnRotation; // 0x2f8(0x0c)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct FGameplayTagContainer SkinTagContainer; // 0x308(0x20)
	char UnknownData_328[0x18]; // 0x328(0x18)
	struct AController* DropHidePlayer; // 0x340(0x08)
	bool bClientDropUnhide; // 0x348(0x01)
	char UnknownData_349[0x3]; // 0x349(0x03)
	int32_t OriginalOwnerId; // 0x34c(0x04)
	bool bIsPlayerDrop; // 0x350(0x01)
	char UnknownData_351[0x7]; // 0x351(0x07)
	struct UAkAudioEvent* PickupSound; // 0x358(0x08)

	bool ShouldShowViewedItemLabel(); // Function Killstreak.KSItemDrop.ShouldShowViewedItemLabel
	void SetInactiveStencilValue(enum class EPlayerSilhouetteType Value); // Function Killstreak.KSItemDrop.SetInactiveStencilValue
	void SetActiveStencilValue(enum class EPlayerSilhouetteType Value); // Function Killstreak.KSItemDrop.SetActiveStencilValue
	void PlayDestroyedEffects(); // Function Killstreak.KSItemDrop.PlayDestroyedEffects
	bool Pickup(struct AKSCharacter* Receiver, bool bActivate); // Function Killstreak.KSItemDrop.Pickup
	void OverridePickupFunction(struct FDelegate ItemPickupOverride); // Function Killstreak.KSItemDrop.OverridePickupFunction
	void OnRootMeshDetached(struct UKSStaticMeshComponent* ResponsibleMesh); // Function Killstreak.KSItemDrop.OnRootMeshDetached
	void OnRep_PendingPickupCharacter(); // Function Killstreak.KSItemDrop.OnRep_PendingPickupCharacter
	void OnRep_ItemAsset(); // Function Killstreak.KSItemDrop.OnRep_ItemAsset
	void OnRep_DropHidePlayer(); // Function Killstreak.KSItemDrop.OnRep_DropHidePlayer
	struct FDelegate GetPickupDelegate(); // Function Killstreak.KSItemDrop.GetPickupDelegate
	struct AKSCharacter* GetPendingPickupCharacter(); // Function Killstreak.KSItemDrop.GetPendingPickupCharacter
	struct FRotator GetLootSiteSpawnRotation(); // Function Killstreak.KSItemDrop.GetLootSiteSpawnRotation
	bool GetLabelInfoForSecondaryTitle(struct FText LabelText); // Function Killstreak.KSItemDrop.GetLabelInfoForSecondaryTitle
	bool GetLabelInfoForPrimaryTitle(struct FText LabelText); // Function Killstreak.KSItemDrop.GetLabelInfoForPrimaryTitle
	struct UKSItem* GetItemAsset(); // Function Killstreak.KSItemDrop.GetItemAsset
	void EndOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSItemDrop.EndOverlap
	bool CanBePickedUpByCharacterInternal(struct AKSCharacter* Receiver); // Function Killstreak.KSItemDrop.CanBePickedUpByCharacterInternal
	bool CanBePickedUpByCharacter(struct AKSCharacter* Receiver); // Function Killstreak.KSItemDrop.CanBePickedUpByCharacter
	void CalculateRandomImpulse(struct FVector LinearImpulse, struct FVector AngularImpulse); // Function Killstreak.KSItemDrop.CalculateRandomImpulse
	void BeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSItemDrop.BeginOverlap
	void AsyncItemGiveComplete(struct UKSItem* Item, struct UObject* GivenObject, struct FGiveItemParameters InGiveItemParameters, bool bSuccess); // Function Killstreak.KSItemDrop.AsyncItemGiveComplete
	void ApplyRandomImpulse(); // Function Killstreak.KSItemDrop.ApplyRandomImpulse
	void AllowPickup(struct AKSCharacter* Character); // Function Killstreak.KSItemDrop.AllowPickup
};

// Class Killstreak.KSAmmoDrop
// Size: 0x368 (Inherited: 0x360)
struct AKSAmmoDrop : public AKSItemDrop {
	int32_t Amount; // 0x360(0x04)
	char UnknownData_364[0x4]; // 0x364(0x04)
};

// Class Killstreak.KSItem
// Size: 0x168 (Inherited: 0xf8)
struct UKSItem : public UPlatformInventoryItem {
	SoftClassProperty ItemDropClass; // 0xf8(0x28)
	int32_t ItemPrice; // 0x120(0x04)
	char UnknownData_124[0x4]; // 0x124(0x04)
	struct UTexture2D* DefaultItemIcon; // 0x128(0x08)
	SoftClassProperty SpecialItemWidgetClass; // 0x130(0x28)
	struct FColor ColorCode; // 0x158(0x04)
	struct FPrimaryAssetRules Rules; // 0x15c(0x0c)

	bool SoftGiveToAsync(struct TSoftObjectPtr<struct UKSItem> Item, struct AActor* Owner, struct FGiveItemParameters InGiveItemParameters, struct FDelegate GivenToEvent); // Function Killstreak.KSItem.SoftGiveToAsync
	bool SoftCreateDropAsync(struct TSoftObjectPtr<struct UKSItem> Item, struct FTransform SpawnTransform, struct UObject* WorldContextObject, struct FDropItemParameters InDropItemParameters, struct FDelegate ItemDroppedEvent, bool bEnablePhysics, struct FVector InSpawnLinearVelocity, struct FVector InSpawnAngularVelocity); // Function Killstreak.KSItem.SoftCreateDropAsync
	void InitNewlyCreatedItem(int64_t InItemId); // Function Killstreak.KSItem.InitNewlyCreatedItem
	bool GiveToAsync(struct UKSItem* Item, struct AActor* Owner, struct FGiveItemParameters InGiveItemParameters, struct FDelegate GivenToEvent); // Function Killstreak.KSItem.GiveToAsync
	bool GiveTo(struct UKSItem* Item, struct AActor* Owner, struct FGiveItemParameters InGiveItemParameters, struct UObject* OutObject); // Function Killstreak.KSItem.GiveTo
	SoftClassProperty GetSpecialItemWidgetClass(); // Function Killstreak.KSItem.GetSpecialItemWidgetClass
	struct TSoftObjectPtr<struct UTexture2D> GetPurchasePreviewIcon(); // Function Killstreak.KSItem.GetPurchasePreviewIcon
	int32_t GetItemPrice(); // Function Killstreak.KSItem.GetItemPrice
	SoftClassProperty GetItemDropClass(); // Function Killstreak.KSItem.GetItemDropClass
	struct TArray<struct FItemDisplayStat> GetItemDisplayStats(); // Function Killstreak.KSItem.GetItemDisplayStats
	struct FText GetItemCategoryText(); // Function Killstreak.KSItem.GetItemCategoryText
	struct FColor GetColorCode(); // Function Killstreak.KSItem.GetColorCode
	bool CreateDropAsync(struct UKSItem* Item, struct FTransform SpawnTransform, struct UObject* WorldContextObject, struct FDropItemParameters InDropItemParameters, struct FDelegate ItemDroppedEvent, bool bEnablePhysics, struct FVector InSpawnLinearVelocity, struct FVector InSpawnAngularVelocity); // Function Killstreak.KSItem.CreateDropAsync
	struct AKSItemDrop* CreateDrop(struct UKSItem* Item, struct FTransform SpawnTransform, struct UObject* WorldContextObject, struct FDropItemParameters InDropItemParameters); // Function Killstreak.KSItem.CreateDrop
	bool CanBePickedUpByCharacter(struct AKSCharacter* PotentialOwner); // Function Killstreak.KSItem.CanBePickedUpByCharacter
	bool CanBePickedUpBy(struct AActor* PotentialOwner); // Function Killstreak.KSItem.CanBePickedUpBy
};

// Class Killstreak.KSAmmoDropAsset
// Size: 0x170 (Inherited: 0x168)
struct UKSAmmoDropAsset : public UKSItem {
	enum class EAmmoType AmmoType; // 0x168(0x01)
	char UnknownData_169[0x3]; // 0x169(0x03)
	int32_t AmmoCount; // 0x16c(0x04)

	enum class EAmmoType GetAmmoType(); // Function Killstreak.KSAmmoDropAsset.GetAmmoType
};

// Class Killstreak.KSAnalogStickFilter
// Size: 0x38 (Inherited: 0x28)
struct UKSAnalogStickFilter : public UObject {
	enum class EKSAnalogStickType StickType; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct UKSPlayerInput* PlayerInput; // 0x30(0x08)
};

// Class Killstreak.KSAnimationAuditComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UKSAnimationAuditComponent : public UActorComponent {
	struct UKSAnimInstance* CurrentAnimInst; // 0xb0(0x08)

	void AnimAuditStop(struct UKSAnimInstance* AnimInst, bool bExportImmediately); // Function Killstreak.KSAnimationAuditComponent.AnimAuditStop
	void AnimAuditStart(struct UKSAnimInstance* AnimInst); // Function Killstreak.KSAnimationAuditComponent.AnimAuditStart
	void AnimAuditClear(struct UKSAnimInstance* AnimInst); // Function Killstreak.KSAnimationAuditComponent.AnimAuditClear
};

// Class Killstreak.KSAnimInstance
// Size: 0x290 (Inherited: 0x270)
struct UKSAnimInstance : public USkinnedAnimInstance {
	bool bIsInLobbyViewer; // 0x270(0x01)
	bool bRecordAnimStats; // 0x271(0x01)
	char UnknownData_272[0x6]; // 0x272(0x06)
	struct UKSAnimationAuditComponent* AuditingComponent; // 0x278(0x08)
	char UnknownData_280[0x10]; // 0x280(0x10)

	void SetLobbyState(bool bInModelViewer); // Function Killstreak.KSAnimInstance.SetLobbyState
	void Montage_JumpToRandomSection(struct TArray<struct FName> SectionNames, struct UAnimMontage* Montage, bool bDisallowCurrentSection); // Function Killstreak.KSAnimInstance.Montage_JumpToRandomSection
};

// Class Killstreak.KSAnimNotify_EmotionDuration
// Size: 0x40 (Inherited: 0x38)
struct UKSAnimNotify_EmotionDuration : public UAnimNotify {
	enum class EKSEmotion Emotion; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	float Duration; // 0x3c(0x04)
};

// Class Killstreak.KSAnimNotify_PlayParticleEffect
// Size: 0xa0 (Inherited: 0x90)
struct UKSAnimNotify_PlayParticleEffect : public UAnimNotify_PlayParticleEffect {
	struct FName SkinTableRowName; // 0x90(0x08)
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class Killstreak.KSAnimNotifyState_Emotion
// Size: 0x38 (Inherited: 0x30)
struct UKSAnimNotifyState_Emotion : public UAnimNotifyState {
	enum class EKSEmotion Emotion; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
};

// Class Killstreak.KSAnimNotifyState_Prop
// Size: 0x78 (Inherited: 0x30)
struct UKSAnimNotifyState_Prop : public UAnimNotifyState {
	struct USkeletalMesh* SkeletalMesh; // 0x30(0x08)
	struct UAnimInstance* AnimClass; // 0x38(0x08)
	struct UStaticMesh* StaticMesh; // 0x40(0x08)
	struct FPoolAttachmentInfo PropAttachmentInfo; // 0x48(0x30)
};

// Class Killstreak.KSAnimNotifyState_Trail
// Size: 0x60 (Inherited: 0x58)
struct UKSAnimNotifyState_Trail : public UAnimNotifyState_Trail {
	struct FName SkinTableRowName; // 0x58(0x08)
};

// Class Killstreak.KSAnimNotifyState_WeaponProp
// Size: 0x98 (Inherited: 0x30)
struct UKSAnimNotifyState_WeaponProp : public UAnimNotifyState {
	struct FSoftObjectPath WeaponAsset; // 0x30(0x18)
	struct FName AnimClassRowNameOverride; // 0x48(0x08)
	struct UAnimMontage* ActivationMontage; // 0x50(0x08)
	struct FName PropIdentifier; // 0x58(0x08)
	float ExtendedLifetime; // 0x60(0x04)
	struct FPoolAttachmentInfo PropAttachmentInfo; // 0x64(0x30)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Killstreak.KSAnnouncer
// Size: 0x458 (Inherited: 0x220)
struct AKSAnnouncer : public AInfo {
	char UnknownData_220[0x18]; // 0x220(0x18)
	struct UAkComponent* AnnouncerAkComponent; // 0x238(0x08)
	struct TMap<struct FName, struct FTimeAnnouncementList> PhaseTimeAnnouncements; // 0x240(0x50)
	struct UAkAudioEvent* SuddenDeathAnnouncement; // 0x290(0x08)
	char UnknownData_298[0x2]; // 0x298(0x02)
	uint16_t RemainingKillThreshold; // 0x29a(0x02)
	uint16_t RemainingKillThresholdAlly; // 0x29c(0x02)
	char UnknownData_29E[0x2]; // 0x29e(0x02)
	struct TMap<uint16_t, struct UAkAudioEvent*> EliminationAnnouncements; // 0x2a0(0x50)
	struct TMap<uint16_t, struct UAkAudioEvent*> EliminationAnnouncementsAlly; // 0x2f0(0x50)
	struct UAkAudioEvent* FallbackEliminationAnnouncement; // 0x340(0x08)
	struct UAkAudioEvent* FallbackEliminationAnnouncementAlly; // 0x348(0x08)
	char UnknownData_350[0x70]; // 0x350(0x70)
	struct FAnnouncementList AnnouncementList; // 0x3c0(0x88)
	char UnknownData_448[0x8]; // 0x448(0x08)
	float MaxAnnouncementDuration; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)

	bool ShouldPlayTimeAnnouncementFromGroup(struct TArray<struct FName> Groups); // Function Killstreak.KSAnnouncer.ShouldPlayTimeAnnouncementFromGroup
	void QueueAnnouncementStruct(struct FAnnouncement Announcement, int32_t TeamNum, bool DelayProcessing); // Function Killstreak.KSAnnouncer.QueueAnnouncementStruct
	void QueueAnnouncement(struct UAkAudioEvent* AkEvent, struct UAkAudioEvent* AltAkEvent, float Priority, float Lifetime, float Delay, float Lockout, int32_t TeamNum, bool DelayProcessing, struct AKSPlayerState* TargetPlayer, struct UAkAudioEvent* TargetPlayerAkEvent); // Function Killstreak.KSAnnouncer.QueueAnnouncement
	void ProcessTimeAnnouncementList(struct FTimeAnnouncementList TimeAnnouncementList, float Time, int32_t TeamNum); // Function Killstreak.KSAnnouncer.ProcessTimeAnnouncementList
	void ProcessQueue(); // Function Killstreak.KSAnnouncer.ProcessQueue
	void OnObjectiveTimerZero(); // Function Killstreak.KSAnnouncer.OnObjectiveTimerZero
	void OnMatchTimerUpdate(float TimeInWholeSeconds); // Function Killstreak.KSAnnouncer.OnMatchTimerUpdate
	void OnLockoutComplete(); // Function Killstreak.KSAnnouncer.OnLockoutComplete
	void OnLocalViewTargetMovementModeChanged(char OldMode, char OldCustomMode, char NewMode, char NewCustomMode); // Function Killstreak.KSAnnouncer.OnLocalViewTargetMovementModeChanged
	void OnLocalViewTargetChanged(struct AKSPlayerController* Controller, struct AActor* OldViewTarget, struct AActor* NewViewTarget); // Function Killstreak.KSAnnouncer.OnLocalViewTargetChanged
	void OnControlPointTimerUpdate(float Time); // Function Killstreak.KSAnnouncer.OnControlPointTimerUpdate
	void LocalPlayerControllerDestroyed(struct AActor* PlayerController); // Function Killstreak.KSAnnouncer.LocalPlayerControllerDestroyed
	int32_t GetTeamOverrideForAnnouncementGroup(struct TArray<struct FName> Groups); // Function Killstreak.KSAnnouncer.GetTeamOverrideForAnnouncementGroup
	struct AKSPlayerController* GetPlayerController(); // Function Killstreak.KSAnnouncer.GetPlayerController
	void EventQueueInGame(); // Function Killstreak.KSAnnouncer.EventQueueInGame
	void EventLocalPlayerControllerDestroyed(struct AKSPlayerController* PlayerController); // Function Killstreak.KSAnnouncer.EventLocalPlayerControllerDestroyed
	void AnnouncePlayerDeath(struct FCombatEventInfo CombatEvent); // Function Killstreak.KSAnnouncer.AnnouncePlayerDeath
};

// Class Killstreak.KSApparelAsset
// Size: 0x1d8 (Inherited: 0x168)
struct UKSApparelAsset : public UKSItem {
	int32_t Priority; // 0x168(0x04)
	struct FGameplayTag ApparelSlot; // 0x16c(0x08)
	char UnknownData_174[0x4]; // 0x174(0x04)
	struct FGameplayTagContainer SlotsToOverride; // 0x178(0x20)
	char UnknownData_198[0x28]; // 0x198(0x28)
	int32_t AsyncLoadPriority; // 0x1c0(0x04)
	int32_t LocalPlayerAsyncLoadPriority; // 0x1c4(0x04)
	char UnknownData_1C8[0x10]; // 0x1c8(0x10)

	struct FGameplayTag GetSlot(); // Function Killstreak.KSApparelAsset.GetSlot
};

// Class Killstreak.KSApparelAsset_SkinDataTables
// Size: 0x1f8 (Inherited: 0x1d8)
struct UKSApparelAsset_SkinDataTables : public UKSApparelAsset {
	struct TArray<struct FSoftDataTableInfo> AssetDataTables; // 0x1d8(0x10)
	struct TArray<struct FName> ApparelObjectsToInfluence; // 0x1e8(0x10)
};

// Class Killstreak.KSApparelAsset_CustomComponent
// Size: 0x220 (Inherited: 0x1f8)
struct UKSApparelAsset_CustomComponent : public UKSApparelAsset_SkinDataTables {
	SoftClassProperty CustomComponentClass; // 0x1f8(0x28)
};

// Class Killstreak.KSApparelAsset_SkinnedMesh
// Size: 0x248 (Inherited: 0x1f8)
struct UKSApparelAsset_SkinnedMesh : public UKSApparelAsset_SkinDataTables {
	SoftClassProperty MeshClass; // 0x1f8(0x28)
	struct FName AttachPointName; // 0x220(0x08)
	struct FName CollisionProfile; // 0x228(0x08)
	bool bSlaveToCharacterMesh; // 0x230(0x01)
	bool bSimulatePhysics; // 0x231(0x01)
	char UnknownData_232[0x6]; // 0x232(0x06)
	struct TArray<struct FName> ApparelObjectsToListenTo; // 0x238(0x10)
};

// Class Killstreak.KSEquipment
// Size: 0x2b0 (Inherited: 0x220)
struct AKSEquipment : public AInfo {
	bool bInitialized; // 0x220(0x01)
	char UnknownData_221[0x3]; // 0x221(0x03)
	struct FKSEquipRepInfo EquipInfo; // 0x224(0x14)
	char UnknownData_238[0x18]; // 0x238(0x18)
	struct TScriptInterface<None> EquipmentManagerOwner; // 0x250(0x10)
	struct UKSEquipmentManagerComponent* EquipmentManagerComponent; // 0x260(0x08)
	char UnknownData_268[0x18]; // 0x268(0x18)
	struct FGiveItemParameters GiveParameters; // 0x280(0x0c)
	uint16_t EquipmentId; // 0x28c(0x02)
	char UnknownData_28E[0x2]; // 0x28e(0x02)
	struct UKSEquipmentCosmeticComponent* EquipmentCosmeticComponent; // 0x290(0x08)
	char UnknownData_298[0x8]; // 0x298(0x08)
	struct FMulticastInlineDelegate OnCosmeticComponentCreated; // 0x2a0(0x10)

	void Unequip(bool bLocal, bool bWillReequip); // Function Killstreak.KSEquipment.Unequip
	bool SetEquipPoint(struct FGameplayTag InEquipPoint); // Function Killstreak.KSEquipment.SetEquipPoint
	void OnUnequipped(bool bWillReequip); // Function Killstreak.KSEquipment.OnUnequipped
	void OnRep_EquipPoint(); // Function Killstreak.KSEquipment.OnRep_EquipPoint
	void OnRep_EquipmentId(); // Function Killstreak.KSEquipment.OnRep_EquipmentId
	void OnEquipped(); // Function Killstreak.KSEquipment.OnEquipped
	bool IsInitialized(); // Function Killstreak.KSEquipment.IsInitialized
	bool IsInAction(); // Function Killstreak.KSEquipment.IsInAction
	bool IsEquipped(); // Function Killstreak.KSEquipment.IsEquipped
	struct UKSItem* GetKSItem(); // Function Killstreak.KSEquipment.GetKSItem
	struct FGiveItemParameters GetGiveParameters(); // Function Killstreak.KSEquipment.GetGiveParameters
	struct FGameplayTag GetEquipPoint(); // Function Killstreak.KSEquipment.GetEquipPoint
	uint16_t GetEquipmentId(); // Function Killstreak.KSEquipment.GetEquipmentId
	struct UKSEquipmentCosmeticComponent* GetCosmeticComponent(); // Function Killstreak.KSEquipment.GetCosmeticComponent
	bool EquipNoPoint(); // Function Killstreak.KSEquipment.EquipNoPoint
	void Drop(); // Function Killstreak.KSEquipment.Drop
};

// Class Killstreak.KSWeapon
// Size: 0x6e8 (Inherited: 0x2b0)
struct AKSWeapon : public AKSEquipment {
	bool bCanSwapOnFire; // 0x2b0(0x01)
	bool bCanSwapOnDown; // 0x2b1(0x01)
	bool bCanSwapOutOnInteraction; // 0x2b2(0x01)
	bool bCanSwapOutWhileAimingDownSights; // 0x2b3(0x01)
	char UnknownData_2B4[0x14]; // 0x2b4(0x14)
	struct AKSItemDrop* LoadedDropClass; // 0x2c8(0x08)
	char UnknownData_2D0[0x8]; // 0x2d0(0x08)
	bool bNoWeaponAsset; // 0x2d8(0x01)
	char UnknownData_2D9[0x7]; // 0x2d9(0x07)
	struct TSoftObjectPtr<struct UKSWeaponAsset> WeaponAssetPtr; // 0x2e0(0x28)
	struct UKSWeaponAsset* WeaponAsset; // 0x308(0x08)
	char UnknownData_310[0x10]; // 0x310(0x10)
	uint32_t AutoSwapOutWeaponId; // 0x320(0x04)
	char UnknownData_324[0x4]; // 0x324(0x04)
	struct FAuxiliaryWeaponInfo AuxiliaryWeaponInfo; // 0x328(0x10)
	struct TMap<struct FName, struct AKSWeapon*> AuxiliaryWeapons; // 0x338(0x50)
	struct FMulticastInlineDelegate OnCreatedDeployable; // 0x388(0x10)
	enum class EKSWeaponDestroyReason DestroyReason; // 0x398(0x01)
	char UnknownData_399[0x7]; // 0x399(0x07)
	struct AKSCharacter* CharacterOwner; // 0x3a0(0x08)
	bool bUseCompressStateTransmission; // 0x3a8(0x01)
	char UnknownData_3A9[0x17]; // 0x3a9(0x17)
	enum class EWeaponStateNew WeaponState; // 0x3c0(0x01)
	enum class EWeaponStateNew LocalWeaponState; // 0x3c1(0x01)
	char UnknownData_3C2[0x2]; // 0x3c2(0x02)
	float LastStateChangeTimeStamp; // 0x3c4(0x04)
	struct TArray<struct FWeaponStateChangeRequest> PendingStateChangeRequests; // 0x3c8(0x10)
	char UnknownData_3D8[0x2]; // 0x3d8(0x02)
	uint16_t NextStateRequestId; // 0x3da(0x02)
	char UnknownData_3DC[0x4]; // 0x3dc(0x04)
	struct FMulticastInlineDelegate OnWeaponStateChangedDel; // 0x3e0(0x10)
	char UnknownData_3F0[0x30]; // 0x3f0(0x30)
	bool bPendingFire; // 0x420(0x01)
	bool bBotPendingFire; // 0x421(0x01)
	bool bFireOnce; // 0x422(0x01)
	char UnknownData_423[0x1]; // 0x423(0x01)
	int32_t KickbackShotIndex; // 0x424(0x04)
	float KickbackResetTimeLeft; // 0x428(0x04)
	int32_t BurstShotIndex; // 0x42c(0x04)
	float MinCookTimeStamp; // 0x430(0x04)
	bool bUsingPostFireForgiveness; // 0x434(0x01)
	char UnknownData_435[0x3]; // 0x435(0x03)
	float PrefireStartTime; // 0x438(0x04)
	struct FKSActionRestrictor FireLockout; // 0x43c(0x0c)
	struct FMulticastInlineDelegate OnFire; // 0x448(0x10)
	struct FMulticastInlineDelegate OnReloadFailed; // 0x458(0x10)
	float DeathShotForgivenessTime; // 0x468(0x04)
	bool bTryToReloadEveryTickOnEmpty; // 0x46c(0x01)
	char UnknownData_46D[0x3]; // 0x46d(0x03)
	int32_t CachedReloadSize; // 0x470(0x04)
	int32_t AmmoInClip; // 0x474(0x04)
	int32_t ClipSize; // 0x478(0x04)
	int32_t AmmoConsumedSinceLastReload; // 0x47c(0x04)
	struct FWeaponStateChangeRequest LastReloadRequest; // 0x480(0x10)
	bool bWeaponStartsLoaded; // 0x490(0x01)
	enum class EReloadReplicationFlags ReloadReplicationFlags; // 0x491(0x01)
	char UnknownData_492[0x6]; // 0x492(0x06)
	struct FMulticastInlineDelegate OnExhaustedDel; // 0x498(0x10)
	bool bShouldResumeReload; // 0x4a8(0x01)
	bool bFirstReload; // 0x4a9(0x01)
	char UnknownData_4AA[0x6]; // 0x4aa(0x06)
	struct FMulticastInlineDelegate OnAmmoChangedDel; // 0x4b0(0x10)
	char UnknownData_4C0[0x18]; // 0x4c0(0x18)
	struct FMulticastInlineDelegate OnAmmoInClipConsumed; // 0x4d8(0x10)
	char UnknownData_4E8[0x8]; // 0x4e8(0x08)
	struct UDamageType* LoadedDamageTypeClass; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnHiddenInteractableUpdate; // 0x4f8(0x10)
	struct AActor* CachedHiddenInteractable; // 0x508(0x08)
	char UnknownData_510[0x18]; // 0x510(0x18)
	float NextExpectedTimerEndTime; // 0x528(0x04)
	char UnknownData_52C[0x4]; // 0x52c(0x04)
	struct FTimerHandle ActiveTimer; // 0x530(0x08)
	bool bCanEverInterruptSprinting; // 0x538(0x01)
	char UnknownData_539[0x3]; // 0x539(0x03)
	float SprintRecoveryRemaining; // 0x53c(0x04)
	bool bReleasedFireInSprintRecovery; // 0x540(0x01)
	bool bDodgeRollInterruptedReload; // 0x541(0x01)
	bool bSprintCanInterruptReload; // 0x542(0x01)
	bool bDodgeRollCanInterruptReload; // 0x543(0x01)
	float DodgeRollRecoveryRemaining; // 0x544(0x04)
	char UnknownData_548[0x18]; // 0x548(0x18)
	bool bInLockon; // 0x560(0x01)
	char UnknownData_561[0x3]; // 0x561(0x03)
	float LockonProgress; // 0x564(0x04)
	float LockonDuration; // 0x568(0x04)
	struct FRotator LockonStartRotation; // 0x56c(0x0c)
	struct FRotator LockonEndRotation; // 0x578(0x0c)
	char UnknownData_584[0x58]; // 0x584(0x58)
	struct FRandomStream WeaponRandomStream; // 0x5dc(0x08)
	char UnknownData_5E4[0x54]; // 0x5e4(0x54)
	struct UKSAimFrictionData* AimAssistFrictionData; // 0x638(0x08)
	struct UKSAimMagnetismData* AimAssistMagnetismData; // 0x640(0x08)
	struct UKSAimLockData* AimAssistLockData; // 0x648(0x08)
	struct UKSAimSnapData* AimAssistSnapData; // 0x650(0x08)
	bool bRequireInputForAimAssistFriction; // 0x658(0x01)
	bool bRequireInputForAimAssistMagnetism; // 0x659(0x01)
	bool bRequireInputForAimAssistLock; // 0x65a(0x01)
	char UnknownData_65B[0x5]; // 0x65b(0x05)
	struct UCurveVector* AimAssistFrictionCurve; // 0x660(0x08)
	struct UCurveFloat* AimAssistFrictionDistanceCurve; // 0x668(0x08)
	struct UCurveVector* AimAssistMagnetismCurve; // 0x670(0x08)
	struct UCurveFloat* AimAssistMagnetismDistanceCurve; // 0x678(0x08)
	struct UCurveVector* AimAssistLockCurve; // 0x680(0x08)
	struct UCurveFloat* AimAssistLockDistanceCurve; // 0x688(0x08)
	bool bRequireInputForHipAimAssistFriction; // 0x690(0x01)
	bool bRequireInputForHipAimAssistMagnetism; // 0x691(0x01)
	bool bRequireInputForHipAimAssistLock; // 0x692(0x01)
	char UnknownData_693[0x5]; // 0x693(0x05)
	struct UCurveVector* HipAimAssistFrictionCurve; // 0x698(0x08)
	struct UCurveFloat* HipAimAssistFrictionDistanceCurve; // 0x6a0(0x08)
	struct UCurveVector* HipAimAssistMagnetismCurve; // 0x6a8(0x08)
	struct UCurveFloat* HipAimAssistMagnetismDistanceCurve; // 0x6b0(0x08)
	struct UCurveVector* HipAimAssistLockCurve; // 0x6b8(0x08)
	struct UCurveFloat* HipAimAssistLockDistanceCurve; // 0x6c0(0x08)
	struct FRotator MaxAimAssistSnapRotation; // 0x6c8(0x0c)
	char UnknownData_6D4[0x4]; // 0x6d4(0x04)
	struct UCurveFloat* AimAssistSnapDistanceCurve; // 0x6d8(0x08)
	struct UCurveVector* AimAssistSnapCurve; // 0x6e0(0x08)

	void UpdateHiddenInteractable(); // Function Killstreak.KSWeapon.UpdateHiddenInteractable
	bool StopFireOnRelease(); // Function Killstreak.KSWeapon.StopFireOnRelease
	void StopFire(); // Function Killstreak.KSWeapon.StopFire
	void StopDefaultAim(); // Function Killstreak.KSWeapon.StopDefaultAim
	bool StopAltFire(); // Function Killstreak.KSWeapon.StopAltFire
	void StopAimOverShoulder(); // Function Killstreak.KSWeapon.StopAimOverShoulder
	void StopAimDownSights(); // Function Killstreak.KSWeapon.StopAimDownSights
	void StateRequestTimeoutExpired(); // Function Killstreak.KSWeapon.StateRequestTimeoutExpired
	bool StartRetrieving(); // Function Killstreak.KSWeapon.StartRetrieving
	bool StartReload(); // Function Killstreak.KSWeapon.StartReload
	bool StartHolstering(); // Function Killstreak.KSWeapon.StartHolstering
	bool StartFire(); // Function Killstreak.KSWeapon.StartFire
	void StartDefaultAim(); // Function Killstreak.KSWeapon.StartDefaultAim
	bool StartAltFire(); // Function Killstreak.KSWeapon.StartAltFire
	void StartAimOverShoulder(); // Function Killstreak.KSWeapon.StartAimOverShoulder
	void StartAimDownSights(); // Function Killstreak.KSWeapon.StartAimDownSights
	void SimulateConsumeAmmo(int32_t AmmoInClipAfterConsume, int32_t AmmoToConsumeFromInventory); // Function Killstreak.KSWeapon.SimulateConsumeAmmo
	bool ShouldStartReloadInterruptSprinting(); // Function Killstreak.KSWeapon.ShouldStartReloadInterruptSprinting
	bool ShouldStartHolsterInterruptSprinting(); // Function Killstreak.KSWeapon.ShouldStartHolsterInterruptSprinting
	bool ShouldStartFireInterruptSprinting(); // Function Killstreak.KSWeapon.ShouldStartFireInterruptSprinting
	bool ShouldStartFireInterruptAimDownSights(); // Function Killstreak.KSWeapon.ShouldStartFireInterruptAimDownSights
	bool ShouldQuickMeleeAsBackupFire(); // Function Killstreak.KSWeapon.ShouldQuickMeleeAsBackupFire
	bool ShouldEACRecordAsMeleeAttackNow(); // Function Killstreak.KSWeapon.ShouldEACRecordAsMeleeAttackNow
	bool ShouldConsumeAmmoDirectlyFromInventory(); // Function Killstreak.KSWeapon.ShouldConsumeAmmoDirectlyFromInventory
	bool ShouldBeRemovedWhenExhausted(); // Function Killstreak.KSWeapon.ShouldBeRemovedWhenExhausted
	void SetAutoSwapOutWeaponId(uint32_t OtherWeaponId); // Function Killstreak.KSWeapon.SetAutoSwapOutWeaponId
	void ServerRetrieveActiveWeaponCompressed(struct FWeaponStateChangeRequest request, uint16_t LastRequestId); // Function Killstreak.KSWeapon.ServerRetrieveActiveWeaponCompressed
	void ServerRetrieveActiveWeapon(struct FWeaponStateChangeRequest request); // Function Killstreak.KSWeapon.ServerRetrieveActiveWeapon
	void ServerRequestStateChangeCompressed(struct FWeaponStateChangeRequest request, uint16_t LastRequestId); // Function Killstreak.KSWeapon.ServerRequestStateChangeCompressed
	void ServerRequestStateChange(struct FWeaponStateChangeRequest request); // Function Killstreak.KSWeapon.ServerRequestStateChange
	void ServerPostReloadCompressed(struct FWeaponStateChangeRequest request, int32_t AmmoDelta, uint16_t LastRequestId); // Function Killstreak.KSWeapon.ServerPostReloadCompressed
	void ServerPostReload(struct FWeaponStateChangeRequest request, int32_t AmmoDelta); // Function Killstreak.KSWeapon.ServerPostReload
	void ServerCookReleasedCompressed(struct FWeaponStateChangeRequest request, float AdditionalCookTime, uint16_t LastRequestId); // Function Killstreak.KSWeapon.ServerCookReleasedCompressed
	void ServerCookReleased(struct FWeaponStateChangeRequest request, float AdditionalCookTime); // Function Killstreak.KSWeapon.ServerCookReleased
	void Reload(); // Function Killstreak.KSWeapon.Reload
	void ProcessHits(struct FAimData ReceivedAim, struct TArray<struct FHitResult> Hits); // Function Killstreak.KSWeapon.ProcessHits
	void PreLoadAmmo(); // Function Killstreak.KSWeapon.PreLoadAmmo
	bool OwnerIsTransitioningAimState(); // Function Killstreak.KSWeapon.OwnerIsTransitioningAimState
	bool OwnerIsSwimming(); // Function Killstreak.KSWeapon.OwnerIsSwimming
	bool OwnerIsSprinting(); // Function Killstreak.KSWeapon.OwnerIsSprinting
	bool OwnerIsReloadingAnyWeapon(); // Function Killstreak.KSWeapon.OwnerIsReloadingAnyWeapon
	bool OwnerIsMovingOnGround(); // Function Killstreak.KSWeapon.OwnerIsMovingOnGround
	bool OwnerIsLocallyViewed(); // Function Killstreak.KSWeapon.OwnerIsLocallyViewed
	bool OwnerIsFreeFalling(); // Function Killstreak.KSWeapon.OwnerIsFreeFalling
	bool OwnerIsFiringMeleeWeapon(); // Function Killstreak.KSWeapon.OwnerIsFiringMeleeWeapon
	bool OwnerIsDowned(); // Function Killstreak.KSWeapon.OwnerIsDowned
	bool OwnerIsAlive(); // Function Killstreak.KSWeapon.OwnerIsAlive
	bool OwnerHasAmmo(); // Function Killstreak.KSWeapon.OwnerHasAmmo
	float OnStartRetrieving(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartRetrieving
	float OnStartReloadCooldown(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartReloadCooldown
	float OnStartPreReload(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartPreReload
	float OnStartPreFire(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartPreFire
	float OnStartPostReload(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartPostReload
	float OnStartPostFire(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartPostFire
	void OnStartInactive(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartInactive
	float OnStartHolstering(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartHolstering
	float OnStartCooldown(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartCooldown
	float OnStartBuildup(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnStartBuildup
	void OnRep_WeaponState(); // Function Killstreak.KSWeapon.OnRep_WeaponState
	void OnRep_WeaponAsset(); // Function Killstreak.KSWeapon.OnRep_WeaponAsset
	void OnRep_AuxiliaryWeaponInfo(); // Function Killstreak.KSWeapon.OnRep_AuxiliaryWeaponInfo
	void OnRep_AutoSwapOutWeaponId(); // Function Killstreak.KSWeapon.OnRep_AutoSwapOutWeaponId
	void OnRep_Ammo(); // Function Killstreak.KSWeapon.OnRep_Ammo
	void OnPostMantleLockoutEnd(); // Function Killstreak.KSWeapon.OnPostMantleLockoutEnd
	void OnOwnerMovementModeChangedNative(char OldMode, char OldCustomMode, char NewMode, char NewCustomMode); // Function Killstreak.KSWeapon.OnOwnerMovementModeChangedNative
	void OnOwnerMovementModeChanged(char OldMode, char OldCustomMode, char NewMode, char NewCustomMode); // Function Killstreak.KSWeapon.OnOwnerMovementModeChanged
	void OnEndRetrieving(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndRetrieving
	void OnEndReloadCooldown(enum class EWeaponStateNew NewState); // Function Killstreak.KSWeapon.OnEndReloadCooldown
	void OnEndPreReload(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndPreReload
	void OnEndPreFire(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndPreFire
	void OnEndPostReload(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndPostReload
	void OnEndPostFire(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndPostFire
	void OnEndInactive(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndInactive
	void OnEndIdleState(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndIdleState
	void OnEndHolstering(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndHolstering
	void OnEndCooldown(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndCooldown
	void OnEndBuildup(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.OnEndBuildup
	void OnBeginIdleState(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.OnBeginIdleState
	float ModifyDamageDealt(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser, struct AActor* DamagedActor); // Function Killstreak.KSWeapon.ModifyDamageDealt
	bool IsRetrieving(); // Function Killstreak.KSWeapon.IsRetrieving
	bool IsReloading(); // Function Killstreak.KSWeapon.IsReloading
	bool IsInSprintRecovery(); // Function Killstreak.KSWeapon.IsInSprintRecovery
	bool IsInReloadingLoop(); // Function Killstreak.KSWeapon.IsInReloadingLoop
	bool IsInFiringLoop(); // Function Killstreak.KSWeapon.IsInFiringLoop
	bool IsInDodgeRollRecovery(); // Function Killstreak.KSWeapon.IsInDodgeRollRecovery
	bool IsHolstering(); // Function Killstreak.KSWeapon.IsHolstering
	bool IsFiring(); // Function Killstreak.KSWeapon.IsFiring
	bool IsExhausted(); // Function Killstreak.KSWeapon.IsExhausted
	bool IsEquippedMelee(); // Function Killstreak.KSWeapon.IsEquippedMelee
	bool IsEquippedMainWeapon(); // Function Killstreak.KSWeapon.IsEquippedMainWeapon
	bool IsEquippedGrenade(); // Function Killstreak.KSWeapon.IsEquippedGrenade
	bool IsClipFull(); // Function Killstreak.KSWeapon.IsClipFull
	bool IsClipEmpty(); // Function Killstreak.KSWeapon.IsClipEmpty
	bool IsActiveWeapon(); // Function Killstreak.KSWeapon.IsActiveWeapon
	bool InstantReload(); // Function Killstreak.KSWeapon.InstantReload
	bool HasAttachment(struct UKSWeaponAttachmentInstance* InAttachment); // Function Killstreak.KSWeapon.HasAttachment
	void HandleExhausted(); // Function Killstreak.KSWeapon.HandleExhausted
	enum class EWeaponStateNew GetWeaponState(); // Function Killstreak.KSWeapon.GetWeaponState
	struct UKSWeaponComponent* GetWeaponComponent(); // Function Killstreak.KSWeapon.GetWeaponComponent
	struct UKSWeaponAsset* GetWeaponAsset(); // Function Killstreak.KSWeapon.GetWeaponAsset
	float GetWalkSpeedModifier(); // Function Killstreak.KSWeapon.GetWalkSpeedModifier
	float GetReloadCooldownTime(); // Function Killstreak.KSWeapon.GetReloadCooldownTime
	float GetPreReloadTime(); // Function Killstreak.KSWeapon.GetPreReloadTime
	float GetPostReloadTime(); // Function Killstreak.KSWeapon.GetPostReloadTime
	float GetMovementAccuracyPenalty(); // Function Killstreak.KSWeapon.GetMovementAccuracyPenalty
	float GetMaxFiringAccuracyLoss(); // Function Killstreak.KSWeapon.GetMaxFiringAccuracyLoss
	float GetLimbDamageAmount(); // Function Killstreak.KSWeapon.GetLimbDamageAmount
	struct AKSPlayerState* GetKSPlayerState(); // Function Killstreak.KSWeapon.GetKSPlayerState
	float GetInAirAccuracyModifier(); // Function Killstreak.KSWeapon.GetInAirAccuracyModifier
	struct AActor* GetHiddenInteractable(); // Function Killstreak.KSWeapon.GetHiddenInteractable
	float GetHeadDamageAmount(); // Function Killstreak.KSWeapon.GetHeadDamageAmount
	struct AController* GetDamageInstigator(); // Function Killstreak.KSWeapon.GetDamageInstigator
	float GetDamageFalloffRangeScaler(); // Function Killstreak.KSWeapon.GetDamageFalloffRangeScaler
	float GetCrouchAccuracyModifier(); // Function Killstreak.KSWeapon.GetCrouchAccuracyModifier
	int32_t GetClipSize(); // Function Killstreak.KSWeapon.GetClipSize
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSWeapon.GetCharacterOwner
	bool GetCanUseOffGround(); // Function Killstreak.KSWeapon.GetCanUseOffGround
	float GetBaseDamageAmount(); // Function Killstreak.KSWeapon.GetBaseDamageAmount
	float GetBaseAccuracy(); // Function Killstreak.KSWeapon.GetBaseAccuracy
	void GetAttachments(struct TArray<struct UKSWeaponAttachment*> OutWeaponAttachments); // Function Killstreak.KSWeapon.GetAttachments
	void GetAttachmentInstances(struct TArray<struct UKSWeaponAttachmentInstance*> OutWeaponAttachmentInstances); // Function Killstreak.KSWeapon.GetAttachmentInstances
	struct UKSWeaponAttachmentInstance* GetAttachment(struct FGameplayTag InAttachPoint); // Function Killstreak.KSWeapon.GetAttachment
	enum class EAmmoType GetAmmoType(); // Function Killstreak.KSWeapon.GetAmmoType
	int32_t GetAmmoInOwnerInventory(); // Function Killstreak.KSWeapon.GetAmmoInOwnerInventory
	int32_t GetAmmoInClip(); // Function Killstreak.KSWeapon.GetAmmoInClip
	float GetAimOverShoulderAccuracyModifier(); // Function Killstreak.KSWeapon.GetAimOverShoulderAccuracyModifier
	float GetAimDownSightsFOV(); // Function Killstreak.KSWeapon.GetAimDownSightsFOV
	float GetAccuracyReturnRate(); // Function Killstreak.KSWeapon.GetAccuracyReturnRate
	float GetAccuracyReturnDelay(); // Function Killstreak.KSWeapon.GetAccuracyReturnDelay
	float GetAccuracyLossPerShot(); // Function Killstreak.KSWeapon.GetAccuracyLossPerShot
	void FireWeapon(); // Function Killstreak.KSWeapon.FireWeapon
	void EndState(enum class EWeaponStateNew NextState); // Function Killstreak.KSWeapon.EndState
	void ConsumePendingFire(); // Function Killstreak.KSWeapon.ConsumePendingFire
	int32_t ConsumeAmmo(); // Function Killstreak.KSWeapon.ConsumeAmmo
	void ClientStateChangeRejected(uint16_t nRequestId, enum class EWeaponStateNew RestoreState); // Function Killstreak.KSWeapon.ClientStateChangeRejected
	void ClientStateChangeAccepted(uint16_t nRequestId); // Function Killstreak.KSWeapon.ClientStateChangeAccepted
	void ClientRecoverSeedMisalignment(uint16_t RequestID, struct FRandomStream ServerStream); // Function Killstreak.KSWeapon.ClientRecoverSeedMisalignment
	void ClientNotifyRecoveryFinish(); // Function Killstreak.KSWeapon.ClientNotifyRecoveryFinish
	void ClientForceUpdateAmmoInClip(int32_t NewAmmo); // Function Killstreak.KSWeapon.ClientForceUpdateAmmoInClip
	void ClientForceIdleFromFire(); // Function Killstreak.KSWeapon.ClientForceIdleFromFire
	void ClientFixLastReload(uint16_t RequestID, int32_t InAmmoInClip); // Function Killstreak.KSWeapon.ClientFixLastReload
	void ClientFireWeaponRejected(uint16_t nRequestId); // Function Killstreak.KSWeapon.ClientFireWeaponRejected
	void CheckExhausted(); // Function Killstreak.KSWeapon.CheckExhausted
	bool CheckDeathShotForgiveness(); // Function Killstreak.KSWeapon.CheckDeathShotForgiveness
	bool CanUseAnAimStateNow(); // Function Killstreak.KSWeapon.CanUseAnAimStateNow
	bool CanToggleOutOfAimDownSightsNow(); // Function Killstreak.KSWeapon.CanToggleOutOfAimDownSightsNow
	bool CanToggleIntoAimDownSightsNow(); // Function Killstreak.KSWeapon.CanToggleIntoAimDownSightsNow
	bool CanStartReloadNow(); // Function Killstreak.KSWeapon.CanStartReloadNow
	bool CanStartFireNow(); // Function Killstreak.KSWeapon.CanStartFireNow
	bool CanRetrieveNow(); // Function Killstreak.KSWeapon.CanRetrieveNow
	bool CanReloadNowCommon(); // Function Killstreak.KSWeapon.CanReloadNowCommon
	bool CanRefireNow(); // Function Killstreak.KSWeapon.CanRefireNow
	bool CanReceiveAttachment(struct UKSWeaponAttachment* InAttachment, struct FGameplayTagContainer AvailableAttachPoints); // Function Killstreak.KSWeapon.CanReceiveAttachment
	bool CanInteractWith(struct AActor* InteractableTarget); // Function Killstreak.KSWeapon.CanInteractWith
	bool CanHolsterNow(); // Function Killstreak.KSWeapon.CanHolsterNow
	bool CanFireNowCommon(); // Function Killstreak.KSWeapon.CanFireNowCommon
	bool CanEverReload(); // Function Killstreak.KSWeapon.CanEverReload
	bool CanEverAimOverShoulder(); // Function Killstreak.KSWeapon.CanEverAimOverShoulder
	bool CanEverAimDownSights(); // Function Killstreak.KSWeapon.CanEverAimDownSights
	bool CanEverAimAlternate(); // Function Killstreak.KSWeapon.CanEverAimAlternate
	bool CanDropNow(); // Function Killstreak.KSWeapon.CanDropNow
	bool CanCookNow(); // Function Killstreak.KSWeapon.CanCookNow
	bool CanContinueReloadNow(); // Function Killstreak.KSWeapon.CanContinueReloadNow
	bool CancelHolstering(); // Function Killstreak.KSWeapon.CancelHolstering
	bool CanBeSwappedTo(bool bByForce); // Function Killstreak.KSWeapon.CanBeSwappedTo
	bool CanBeSwappedFrom(); // Function Killstreak.KSWeapon.CanBeSwappedFrom
	bool CanBeInterruptedNow(); // Function Killstreak.KSWeapon.CanBeInterruptedNow
	float CalculateDamageFromHitInfo(struct FHitResult HitInfo); // Function Killstreak.KSWeapon.CalculateDamageFromHitInfo
	float CalculateDamageFalloffFromHitResults(struct FHitResult HitInfo); // Function Killstreak.KSWeapon.CalculateDamageFalloffFromHitResults
	float CalculateDamageFalloffFromDistance(float Distance); // Function Killstreak.KSWeapon.CalculateDamageFalloffFromDistance
	void BeginState(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon.BeginState
	void AltFireInitiated(); // Function Killstreak.KSWeapon.AltFireInitiated
	void AltFireEnded(); // Function Killstreak.KSWeapon.AltFireEnded
	bool AllowZiplineRightNow(); // Function Killstreak.KSWeapon.AllowZiplineRightNow
	bool AllowSprintingRightNow(); // Function Killstreak.KSWeapon.AllowSprintingRightNow
	bool AllowDodgeRollRightNow(); // Function Killstreak.KSWeapon.AllowDodgeRollRightNow
	void AimTransitionComplete(enum class EKSCharacterAimMode NewAimState); // Function Killstreak.KSWeapon.AimTransitionComplete
	bool AbortReload(); // Function Killstreak.KSWeapon.AbortReload
	void AbortFire(); // Function Killstreak.KSWeapon.AbortFire
};

// Class Killstreak.KSArmor
// Size: 0x6f0 (Inherited: 0x6e8)
struct AKSArmor : public AKSWeapon {
	float Durability; // 0x6e8(0x04)
	bool bArmorIsBroken; // 0x6ec(0x01)
	char UnknownData_6ED[0x3]; // 0x6ed(0x03)

	bool ShouldDestroyOnBreak(); // Function Killstreak.KSArmor.ShouldDestroyOnBreak
	float RepairArmor(float DurabilityToAdd); // Function Killstreak.KSArmor.RepairArmor
	bool IsRepairableArmor(); // Function Killstreak.KSArmor.IsRepairableArmor
	bool IsArmorBeingRepaired(); // Function Killstreak.KSArmor.IsArmorBeingRepaired
	float GetMaxDurability(); // Function Killstreak.KSArmor.GetMaxDurability
	float GetDurability(); // Function Killstreak.KSArmor.GetDurability
	struct UKSArmorAsset* GetArmorAsset(); // Function Killstreak.KSArmor.GetArmorAsset
	bool CanArmorBeRepaired(); // Function Killstreak.KSArmor.CanArmorBeRepaired
	bool CanAbsorbDamageType(struct UDamageType* DamageTypeClass); // Function Killstreak.KSArmor.CanAbsorbDamageType
	float CalcAbsorbRadialDamage(float Damage, struct FRadialDamageEvent RadialDamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSArmor.CalcAbsorbRadialDamage
	float CalcAbsorbPointDamage(float Damage, struct FPointDamageEvent PointDamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSArmor.CalcAbsorbPointDamage
};

// Class Killstreak.KSWeaponAsset
// Size: 0x760 (Inherited: 0x168)
struct UKSWeaponAsset : public UKSItem {
	struct UDataTable* ItemDisplayStatParamsTable; // 0x168(0x08)
	struct FText WeaponDisplayName; // 0x170(0x18)
	struct FText WeaponDescription; // 0x188(0x18)
	struct FGameplayTag WeaponType; // 0x1a0(0x08)
	enum class EKSWeaponEquipType WeaponEquipType; // 0x1a8(0x01)
	char UnknownData_1A9[0x7]; // 0x1a9(0x07)
	SoftClassProperty WeaponClass; // 0x1b0(0x28)
	SoftClassProperty WeaponComponentClass; // 0x1d8(0x28)
	SoftClassProperty WeaponAmmoWidgetClass; // 0x200(0x28)
	SoftClassProperty WeaponDropClass; // 0x228(0x28)
	bool bUnique; // 0x250(0x01)
	bool bShouldBeRemovedWhenExhausted; // 0x251(0x01)
	bool bCanBeDropped; // 0x252(0x01)
	bool bForceUprightDrops; // 0x253(0x01)
	bool bDoesRestoreAmmo; // 0x254(0x01)
	bool bModsCanReplenishAmmo; // 0x255(0x01)
	bool bCanEverFire; // 0x256(0x01)
	bool bLagCompensatedFire; // 0x257(0x01)
	bool bIgnoreNoFire; // 0x258(0x01)
	bool bLimitNumInPlay; // 0x259(0x01)
	char UnknownData_25A[0x2]; // 0x25a(0x02)
	int32_t MaxNumInPlay; // 0x25c(0x04)
	bool bUsesEquipPoint; // 0x260(0x01)
	char UnknownData_261[0x7]; // 0x261(0x07)
	struct FGameplayTagContainer ValidEquipPoints; // 0x268(0x20)
	enum class EFireModeType FireModeType; // 0x288(0x01)
	enum class EWeaponCastType CastType; // 0x289(0x01)
	char UnknownData_28A[0x2]; // 0x28a(0x02)
	int32_t RoundsPerBurst; // 0x28c(0x04)
	bool bUseAltFire; // 0x290(0x01)
	bool bUseBuildupForCooking; // 0x291(0x01)
	char UnknownData_292[0x2]; // 0x292(0x02)
	float BuildupTime; // 0x294(0x04)
	float PreFireTime; // 0x298(0x04)
	float PreFireInterruptThreshold; // 0x29c(0x04)
	float AltPreFireTime; // 0x2a0(0x04)
	float PostFireTime; // 0x2a4(0x04)
	float AltPostFireTime; // 0x2a8(0x04)
	float PostFireForgivenessTime; // 0x2ac(0x04)
	bool bSwapAfterFire; // 0x2b0(0x01)
	char UnknownData_2B1[0x3]; // 0x2b1(0x03)
	float CooldownTime; // 0x2b4(0x04)
	bool bCanEverReload; // 0x2b8(0x01)
	bool bConsumeAmmoDirectlyFromInventory; // 0x2b9(0x01)
	char UnknownData_2BA[0x2]; // 0x2ba(0x02)
	int32_t ClipSize; // 0x2bc(0x04)
	enum class EReloadType ReloadType; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	float PreReloadTime; // 0x2c4(0x04)
	float PostReloadTime; // 0x2c8(0x04)
	float ReloadCooldownTime; // 0x2cc(0x04)
	bool bReloadOnEmptyWhileScoped; // 0x2d0(0x01)
	char UnknownData_2D1[0x3]; // 0x2d1(0x03)
	float FirstShotPreReloadTime; // 0x2d4(0x04)
	bool bCanInterruptPreReload; // 0x2d8(0x01)
	enum class EAmmoType AmmoType; // 0x2d9(0x01)
	char UnknownData_2DA[0x2]; // 0x2da(0x02)
	int32_t DefaultAmmo; // 0x2dc(0x04)
	bool bUnlimitedAmmo; // 0x2e0(0x01)
	bool bMuteEmptyClipWarnings; // 0x2e1(0x01)
	char UnknownData_2E2[0x2]; // 0x2e2(0x02)
	float HolsterTime; // 0x2e4(0x04)
	bool bShouldRestrictHolsterInPostFire; // 0x2e8(0x01)
	char UnknownData_2E9[0x3]; // 0x2e9(0x03)
	float RetriveTime; // 0x2ec(0x04)
	bool bCanFireFromRetrieve; // 0x2f0(0x01)
	enum class EReticleType ReticleType; // 0x2f1(0x01)
	char UnknownData_2F2[0x6]; // 0x2f2(0x06)
	struct FWeaponStateGraph WeaponStateGraph; // 0x2f8(0x140)
	bool bDoRadialDamage; // 0x438(0x01)
	bool bIsRadialDamageConical; // 0x439(0x01)
	char UnknownData_43A[0x2]; // 0x43a(0x02)
	float HeadDamageAmount; // 0x43c(0x04)
	float DamageAmount; // 0x440(0x04)
	float LimbDamageAmount; // 0x444(0x04)
	struct FInterpCurveFloat DamageFalloffCurve; // 0x448(0x18)
	struct FRadialDamageParams RadialDamageParams; // 0x460(0x14)
	bool bIgnoreFriendlies; // 0x474(0x01)
	bool bIgnoreSelf; // 0x475(0x01)
	bool bIgnoreWalls; // 0x476(0x01)
	char UnknownData_477[0x1]; // 0x477(0x01)
	float RadialConicalHalfAngle; // 0x478(0x04)
	char UnknownData_47C[0x4]; // 0x47c(0x04)
	SoftClassProperty DamageTypeClass; // 0x480(0x28)
	float CautionRadius; // 0x4a8(0x04)
	int32_t ShotPenetrationCount; // 0x4ac(0x04)
	float DefaultAimTransitionTime; // 0x4b0(0x04)
	bool bCanEverAimOverShoulder; // 0x4b4(0x01)
	char UnknownData_4B5[0x3]; // 0x4b5(0x03)
	float AimOverShoulderTransitionTime; // 0x4b8(0x04)
	bool bCanEverAimDownSights; // 0x4bc(0x01)
	char UnknownData_4BD[0x3]; // 0x4bd(0x03)
	float AimDownSightsTransitionTime; // 0x4c0(0x04)
	bool bLockoutAimStateInCooldown; // 0x4c4(0x01)
	char UnknownData_4C5[0x3]; // 0x4c5(0x03)
	float AimDownSightsFov; // 0x4c8(0x04)
	bool bCanEverAimAlternate; // 0x4cc(0x01)
	char UnknownData_4CD[0x3]; // 0x4cd(0x03)
	float AimAlternateTransitionTime; // 0x4d0(0x04)
	bool bPrefireLockon; // 0x4d4(0x01)
	char UnknownData_4D5[0x3]; // 0x4d5(0x03)
	float PrefireLockonAngle; // 0x4d8(0x04)
	float PrefireLockonDistance; // 0x4dc(0x04)
	bool bPrefireOverlapSkipsToFire; // 0x4e0(0x01)
	char UnknownData_4E1[0x7]; // 0x4e1(0x07)
	struct TArray<struct FPrefireSkipWindow> PrefireSkipWindows; // 0x4e8(0x10)
	float PrefireOverlapGracePeriod; // 0x4f8(0x04)
	enum class EThirdPersonAimOriginType ThirdPersonAimOriginType; // 0x4fc(0x01)
	char UnknownData_4FD[0x3]; // 0x4fd(0x03)
	struct FVector ThirdPersonFixedRelativeOffset; // 0x500(0x0c)
	struct FName ThirdPersonAimOriginSocketName; // 0x50c(0x08)
	float BaseAccuracy; // 0x514(0x04)
	float CrouchAccuracyModifier; // 0x518(0x04)
	float AimOverShoulderAccuracyModifier; // 0x51c(0x04)
	float InAirAccuracyModifier; // 0x520(0x04)
	float MovementAccuracyPenalty; // 0x524(0x04)
	float AccuracyLossPerShot; // 0x528(0x04)
	float MaxFiringAccuracyLoss; // 0x52c(0x04)
	float AccuracyReturnRate; // 0x530(0x04)
	float AccuracyReturnDelay; // 0x534(0x04)
	struct UKickbackModule* KickbackModule; // 0x538(0x08)
	float KickbackApplicationTimeOverride; // 0x540(0x04)
	bool bCanResetKickback; // 0x544(0x01)
	char UnknownData_545[0x3]; // 0x545(0x03)
	float KickbackResetTime; // 0x548(0x04)
	bool bUseKickbackRecovery; // 0x54c(0x01)
	char UnknownData_54D[0x3]; // 0x54d(0x03)
	float KickbackRecoveryDelay; // 0x550(0x04)
	float KickbackRecoveryRate; // 0x554(0x04)
	float KickbackRecoveryAcceleration; // 0x558(0x04)
	float MaxCumulativeKickbackVerticalAngle; // 0x55c(0x04)
	float GamepadKickbackScaling; // 0x560(0x04)
	float SprintRecoveryTime; // 0x564(0x04)
	bool bStartFireInterruptsSprinting; // 0x568(0x01)
	bool bStartReloadInterruptsSprinting; // 0x569(0x01)
	bool bStartHolsterInterruptsSprinting; // 0x56a(0x01)
	char UnknownData_56B[0x1]; // 0x56b(0x01)
	float DodgeRollRecoveryTime; // 0x56c(0x04)
	bool bShouldPreventDodgeRollDuringFire; // 0x570(0x01)
	bool bCanFireWhileInPowerSlide; // 0x571(0x01)
	bool bIsAudible; // 0x572(0x01)
	char UnknownData_573[0x1]; // 0x573(0x01)
	float AudibleRange; // 0x574(0x04)
	float WalkSpeedModifier; // 0x578(0x04)
	float ADSSpeedModifier; // 0x57c(0x04)
	bool bCanUseOffGround; // 0x580(0x01)
	char UnknownData_581[0x7]; // 0x581(0x07)
	struct FGameplayTagContainer ValidWeaponAttachmentPoints; // 0x588(0x20)
	struct TSet<struct TSoftObjectPtr<struct UKSWeaponAttachment>> ValidAttachments; // 0x5a8(0x50)
	int32_t AttachmentSlotCount; // 0x5f8(0x04)
	char UnknownData_5FC[0x4]; // 0x5fc(0x04)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UKSWeaponAsset>> AuxiliaryWeapons; // 0x600(0x50)
	struct TSoftObjectPtr<struct UForceFeedbackEffect> VibrationEffect; // 0x650(0x28)
	struct TSoftObjectPtr<struct UForceFeedbackEffect> AlternativeVibrationEffect; // 0x678(0x28)
	struct TSoftObjectPtr<struct UForceFeedbackAttenuation> AlternativeVibrationAttenuation; // 0x6a0(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAsset> WeaponUpgrade; // 0x6c8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> ItemRenderImage; // 0x6f0(0x28)
	float ADSRollMultiplier; // 0x718(0x04)
	float ADSBumpStartStopMultiplier; // 0x71c(0x04)
	float ADSBumpLoopingMultiplier; // 0x720(0x04)
	struct FADSBlurValues ADSBlurValuesInfo; // 0x724(0x30)
	bool EnableCustomMask; // 0x754(0x01)
	char UnknownData_755[0x3]; // 0x755(0x03)
	struct UTexture2D* CustomMaskTexture; // 0x758(0x08)

	struct AKSWeapon* TryToEquipToCharacterNoPointGiven(struct UKSWeaponAsset* WeaponAsset, struct AKSCharacter* InOwner, struct FGiveItemParameters InGiveItemParameters, bool bAllowSyncLoad); // Function Killstreak.KSWeaponAsset.TryToEquipToCharacterNoPointGiven
	struct AKSWeapon* TryToEquipToCharacter(struct UKSWeaponAsset* WeaponAsset, struct AKSCharacter* InOwner, struct FGameplayTag EquipPoint, struct FGiveItemParameters InGiveItemParameters, bool bAllowSyncLoad); // Function Killstreak.KSWeaponAsset.TryToEquipToCharacter
	bool ShouldUseBuildupForCooking(); // Function Killstreak.KSWeaponAsset.ShouldUseBuildupForCooking
	bool ShouldStartReloadInterruptSprinting(); // Function Killstreak.KSWeaponAsset.ShouldStartReloadInterruptSprinting
	bool ShouldStartHolsterInterruptSprinting(); // Function Killstreak.KSWeaponAsset.ShouldStartHolsterInterruptSprinting
	bool ShouldStartFireInterruptSprinting(); // Function Killstreak.KSWeaponAsset.ShouldStartFireInterruptSprinting
	bool ShouldPreventDodgeRollDuringFire(); // Function Killstreak.KSWeaponAsset.ShouldPreventDodgeRollDuringFire
	bool ShouldPrefireOverlapSkipToFire(); // Function Killstreak.KSWeaponAsset.ShouldPrefireOverlapSkipToFire
	bool ShouldMuteEmptyClipWarnings(); // Function Killstreak.KSWeaponAsset.ShouldMuteEmptyClipWarnings
	bool ShouldLockonPrefire(); // Function Killstreak.KSWeaponAsset.ShouldLockonPrefire
	bool ShouldLagCompensateFire(struct AKSPlayerState* FiringPlayer); // Function Killstreak.KSWeaponAsset.ShouldLagCompensateFire
	bool ShouldForceUprightDrops(); // Function Killstreak.KSWeaponAsset.ShouldForceUprightDrops
	bool ShouldDoRadialDamage(); // Function Killstreak.KSWeaponAsset.ShouldDoRadialDamage
	bool ShouldBeRemovedWhenExhausted(); // Function Killstreak.KSWeaponAsset.ShouldBeRemovedWhenExhausted
	bool RequiresAnEquipPoint(); // Function Killstreak.KSWeaponAsset.RequiresAnEquipPoint
	struct FInterpCurveVector2D MakeKickbackCurve(int32_t nShotIndex, float AbsoluteMaxDuration); // Function Killstreak.KSWeaponAsset.MakeKickbackCurve
	bool LockoutAimStateInCooldown(); // Function Killstreak.KSWeaponAsset.LockoutAimStateInCooldown
	bool LimitNumInPlay(); // Function Killstreak.KSWeaponAsset.LimitNumInPlay
	bool IsUnique(); // Function Killstreak.KSWeaponAsset.IsUnique
	bool IsRadialDamageConical(); // Function Killstreak.KSWeaponAsset.IsRadialDamageConical
	bool IsGadget(); // Function Killstreak.KSWeaponAsset.IsGadget
	float IsAudible(); // Function Killstreak.KSWeaponAsset.IsAudible
	bool HasKickback(); // Function Killstreak.KSWeaponAsset.HasKickback
	struct TSoftObjectPtr<struct UKSWeaponAsset> GetWeaponUpgrade(); // Function Killstreak.KSWeaponAsset.GetWeaponUpgrade
	struct FGameplayTag GetWeaponType(); // Function Killstreak.KSWeaponAsset.GetWeaponType
	void GetWeaponStats(struct TArray<struct FString> OutStats); // Function Killstreak.KSWeaponAsset.GetWeaponStats
	struct FString GetWeaponNameAsString(); // Function Killstreak.KSWeaponAsset.GetWeaponNameAsString
	struct FText GetWeaponName(); // Function Killstreak.KSWeaponAsset.GetWeaponName
	struct FGameplayTag GetWeaponEquipType(); // Function Killstreak.KSWeaponAsset.GetWeaponEquipType
	SoftClassProperty GetWeaponDropClass(); // Function Killstreak.KSWeaponAsset.GetWeaponDropClass
	struct FString GetWeaponDescriptionAsString(); // Function Killstreak.KSWeaponAsset.GetWeaponDescriptionAsString
	struct FText GetWeaponDescription(); // Function Killstreak.KSWeaponAsset.GetWeaponDescription
	SoftClassProperty GetWeaponComponentClass(); // Function Killstreak.KSWeaponAsset.GetWeaponComponentClass
	SoftClassProperty GetWeaponClass(); // Function Killstreak.KSWeaponAsset.GetWeaponClass
	void GetWeaponAttachmentPoints(struct FGameplayTagContainer OutAttachPoints); // Function Killstreak.KSWeaponAsset.GetWeaponAttachmentPoints
	SoftClassProperty GetWeaponAmmoWidgetClass(); // Function Killstreak.KSWeaponAsset.GetWeaponAmmoWidgetClass
	float GetWalkSpeedModifier(); // Function Killstreak.KSWeaponAsset.GetWalkSpeedModifier
	struct TSoftObjectPtr<struct UForceFeedbackEffect> GetVibrationEffect(); // Function Killstreak.KSWeaponAsset.GetVibrationEffect
	struct FGameplayTagContainer GetValidEquipPoints(); // Function Killstreak.KSWeaponAsset.GetValidEquipPoints
	struct TSet<struct TSoftObjectPtr<struct UKSWeaponAttachment>> GetValidAttachments(); // Function Killstreak.KSWeaponAsset.GetValidAttachments
	bool GetUseAltFire(); // Function Killstreak.KSWeaponAsset.GetUseAltFire
	bool GetUnlimitedAmmo(); // Function Killstreak.KSWeaponAsset.GetUnlimitedAmmo
	struct FVector GetThirdPersonFixedRelativeOffset(); // Function Killstreak.KSWeaponAsset.GetThirdPersonFixedRelativeOffset
	bool GetSwapAfterFire(); // Function Killstreak.KSWeaponAsset.GetSwapAfterFire
	float GetSprintRecoveryTime(); // Function Killstreak.KSWeaponAsset.GetSprintRecoveryTime
	struct TSoftObjectPtr<struct UTexture2D> GetSoftItemRenderImage(); // Function Killstreak.KSWeaponAsset.GetSoftItemRenderImage
	int32_t GetShotPenetrationCount(); // Function Killstreak.KSWeaponAsset.GetShotPenetrationCount
	int32_t GetRoundsPerBurst(); // Function Killstreak.KSWeaponAsset.GetRoundsPerBurst
	float GetRetrieveTime(); // Function Killstreak.KSWeaponAsset.GetRetrieveTime
	enum class EReticleType GetReticleType(); // Function Killstreak.KSWeaponAsset.GetReticleType
	enum class EReloadType GetReloadType(); // Function Killstreak.KSWeaponAsset.GetReloadType
	float GetReloadCooldownTime(); // Function Killstreak.KSWeaponAsset.GetReloadCooldownTime
	bool GetRadialIgnoreWalls(); // Function Killstreak.KSWeaponAsset.GetRadialIgnoreWalls
	bool GetRadialIgnoreSelf(); // Function Killstreak.KSWeaponAsset.GetRadialIgnoreSelf
	bool GetRadialIgnoreFriendlies(); // Function Killstreak.KSWeaponAsset.GetRadialIgnoreFriendlies
	struct FRadialDamageParams GetRadialDamageParams(); // Function Killstreak.KSWeaponAsset.GetRadialDamageParams
	float GetRadialConicalHalfAngle(); // Function Killstreak.KSWeaponAsset.GetRadialConicalHalfAngle
	float GetPreReloadTime(); // Function Killstreak.KSWeaponAsset.GetPreReloadTime
	float GetPreFireTime(); // Function Killstreak.KSWeaponAsset.GetPreFireTime
	int32_t GetPrefireSkipWindowNum(); // Function Killstreak.KSWeaponAsset.GetPrefireSkipWindowNum
	struct FPrefireSkipWindow GetPrefireSkipWindow(int32_t Index); // Function Killstreak.KSWeaponAsset.GetPrefireSkipWindow
	float GetPrefireOverlapGracePeriod(); // Function Killstreak.KSWeaponAsset.GetPrefireOverlapGracePeriod
	float GetPrefireLockonDistance(); // Function Killstreak.KSWeaponAsset.GetPrefireLockonDistance
	float GetPrefireLockonAngle(); // Function Killstreak.KSWeaponAsset.GetPrefireLockonAngle
	float GetPreFireInterruptThreshold(); // Function Killstreak.KSWeaponAsset.GetPreFireInterruptThreshold
	float GetPostReloadTime(); // Function Killstreak.KSWeaponAsset.GetPostReloadTime
	float GetPostFireTime(); // Function Killstreak.KSWeaponAsset.GetPostFireTime
	float GetPostFireForgivenessTime(); // Function Killstreak.KSWeaponAsset.GetPostFireForgivenessTime
	float GetOuterRadius(); // Function Killstreak.KSWeaponAsset.GetOuterRadius
	float GetMovementAccuracyPenalty(); // Function Killstreak.KSWeaponAsset.GetMovementAccuracyPenalty
	int32_t GetMaxNumInPlay(); // Function Killstreak.KSWeaponAsset.GetMaxNumInPlay
	float GetMaxFiringAccuracyLoss(); // Function Killstreak.KSWeaponAsset.GetMaxFiringAccuracyLoss
	float GetMaxFalloffDistance(); // Function Killstreak.KSWeaponAsset.GetMaxFalloffDistance
	float GetMaxCumulativeKickbackVerticalAngle(); // Function Killstreak.KSWeaponAsset.GetMaxCumulativeKickbackVerticalAngle
	float GetLimbDamageAmount(); // Function Killstreak.KSWeaponAsset.GetLimbDamageAmount
	float GetKickbackResetTime(); // Function Killstreak.KSWeaponAsset.GetKickbackResetTime
	float GetKickbackRecoveryRate(); // Function Killstreak.KSWeaponAsset.GetKickbackRecoveryRate
	float GetKickbackRecoveryDelay(); // Function Killstreak.KSWeaponAsset.GetKickbackRecoveryDelay
	float GetKickbackRecoveryAcceleration(); // Function Killstreak.KSWeaponAsset.GetKickbackRecoveryAcceleration
	float GetKickbackApplicationOverride(); // Function Killstreak.KSWeaponAsset.GetKickbackApplicationOverride
	float GetInnerRadius(); // Function Killstreak.KSWeaponAsset.GetInnerRadius
	float GetInAirAccuracyModifier(); // Function Killstreak.KSWeaponAsset.GetInAirAccuracyModifier
	float GetHolsterTime(); // Function Killstreak.KSWeaponAsset.GetHolsterTime
	float GetHeadDamageAmount(); // Function Killstreak.KSWeaponAsset.GetHeadDamageAmount
	float GetGamepadKickbackScaling(); // Function Killstreak.KSWeaponAsset.GetGamepadKickbackScaling
	float GetFirstShotPreReloadTime(); // Function Killstreak.KSWeaponAsset.GetFirstShotPreReloadTime
	enum class EFireModeType GetFireModeType(); // Function Killstreak.KSWeaponAsset.GetFireModeType
	float GetDodgeRollRecoveryTime(); // Function Killstreak.KSWeaponAsset.GetDodgeRollRecoveryTime
	int32_t GetDefaultAmmo(); // Function Killstreak.KSWeaponAsset.GetDefaultAmmo
	float GetDefaultAimTransitionTime(); // Function Killstreak.KSWeaponAsset.GetDefaultAimTransitionTime
	SoftClassProperty GetDamageTypeClass(); // Function Killstreak.KSWeaponAsset.GetDamageTypeClass
	float GetDamageAmount(); // Function Killstreak.KSWeaponAsset.GetDamageAmount
	float GetCrouchAccuracyModifier(); // Function Killstreak.KSWeaponAsset.GetCrouchAccuracyModifier
	float GetCooldownDownTime(); // Function Killstreak.KSWeaponAsset.GetCooldownDownTime
	bool GetConsumeAmmoDirectlyFromInventory(); // Function Killstreak.KSWeaponAsset.GetConsumeAmmoDirectlyFromInventory
	void GetCompatibleAttachments(struct TArray<struct UKSWeaponAttachment*> OutAttachments); // Function Killstreak.KSWeaponAsset.GetCompatibleAttachments
	void GetCompatibleAttachmentAssets(struct TArray<struct TSoftObjectPtr<struct UKSWeaponAttachment>> OutAttachments); // Function Killstreak.KSWeaponAsset.GetCompatibleAttachmentAssets
	int32_t GetClipSize(); // Function Killstreak.KSWeaponAsset.GetClipSize
	float GetCautionRadius(); // Function Killstreak.KSWeaponAsset.GetCautionRadius
	enum class EWeaponCastType GetCastType(); // Function Killstreak.KSWeaponAsset.GetCastType
	bool GetCanUseOffGround(); // Function Killstreak.KSWeaponAsset.GetCanUseOffGround
	float GetCanFireWhileInPowerSlide(); // Function Killstreak.KSWeaponAsset.GetCanFireWhileInPowerSlide
	float GetBuildupTime(); // Function Killstreak.KSWeaponAsset.GetBuildupTime
	float GetBaseRadialDamage(); // Function Killstreak.KSWeaponAsset.GetBaseRadialDamage
	float GetBaseAccuracy(); // Function Killstreak.KSWeaponAsset.GetBaseAccuracy
	float GetAudibleRange(); // Function Killstreak.KSWeaponAsset.GetAudibleRange
	int32_t GetAttachmentSlotCount(); // Function Killstreak.KSWeaponAsset.GetAttachmentSlotCount
	enum class EAmmoType GetAmmoType(); // Function Killstreak.KSWeaponAsset.GetAmmoType
	struct TSoftObjectPtr<struct UForceFeedbackEffect> GetAlternativeVibrationEffect(); // Function Killstreak.KSWeaponAsset.GetAlternativeVibrationEffect
	struct TSoftObjectPtr<struct UForceFeedbackAttenuation> GetAlternativeVibrationAttenuation(); // Function Killstreak.KSWeaponAsset.GetAlternativeVibrationAttenuation
	float GetAlternatePreFireTime(); // Function Killstreak.KSWeaponAsset.GetAlternatePreFireTime
	float GetAlternatePostFireTime(); // Function Killstreak.KSWeaponAsset.GetAlternatePostFireTime
	float GetAimOverShoulderTransitionTime(); // Function Killstreak.KSWeaponAsset.GetAimOverShoulderTransitionTime
	float GetAimOverShoulderAccuracyModifier(); // Function Killstreak.KSWeaponAsset.GetAimOverShoulderAccuracyModifier
	float GetAimDownSightsTransitionTime(); // Function Killstreak.KSWeaponAsset.GetAimDownSightsTransitionTime
	float GetAimDownSightsFOV(); // Function Killstreak.KSWeaponAsset.GetAimDownSightsFOV
	float GetAimAlternateTransitionTime(); // Function Killstreak.KSWeaponAsset.GetAimAlternateTransitionTime
	float GetADSSpeedModifier(); // Function Killstreak.KSWeaponAsset.GetADSSpeedModifier
	float GetADSRollMultiplier(); // Function Killstreak.KSWeaponAsset.GetADSRollMultiplier
	float GetADSBumpStartStopMultiplier(); // Function Killstreak.KSWeaponAsset.GetADSBumpStartStopMultiplier
	float GetADSBumpLoopingMultiplier(); // Function Killstreak.KSWeaponAsset.GetADSBumpLoopingMultiplier
	struct FADSBlurValues GetADSBlurValuesInfo(); // Function Killstreak.KSWeaponAsset.GetADSBlurValuesInfo
	float GetAccuracyReturnRate(); // Function Killstreak.KSWeaponAsset.GetAccuracyReturnRate
	float GetAccuracyReturnDelay(); // Function Killstreak.KSWeaponAsset.GetAccuracyReturnDelay
	float GetAccuracyLossPerShot(); // Function Killstreak.KSWeaponAsset.GetAccuracyLossPerShot
	bool DoesScopingAllowAutoReload(); // Function Killstreak.KSWeaponAsset.DoesScopingAllowAutoReload
	bool DoesRestoreAmmo(); // Function Killstreak.KSWeaponAsset.DoesRestoreAmmo
	bool DoesIgnoreNoFire(); // Function Killstreak.KSWeaponAsset.DoesIgnoreNoFire
	struct AKSProjectile* CreateProjectile(struct UObject* WorldContextObject, struct UKSWeaponAsset* WeaponAsset, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct FDropItemParameters InDropItemParameters, struct AKSWeapon* SpawningWeapon, struct AActor* SpawningOwner, struct APawn* SpawningInstigator, bool bDeferConstruction); // Function Killstreak.KSWeaponAsset.CreateProjectile
	struct AKSProjectile* CreateAndExplodeProjectile(struct UObject* WorldContextObject, struct UKSWeaponAsset* WeaponAsset, struct FVector SpawnLocation, struct FRotator SpawnRotation, struct FDropItemParameters InDropItemParameters, struct AKSWeapon* SpawningWeapon, struct AActor* SpawningOwner, struct APawn* SpawningInstigator, bool bDeferConstruction); // Function Killstreak.KSWeaponAsset.CreateAndExplodeProjectile
	float ConeHalfAngleToAccuracy(float HalfAngle); // Function Killstreak.KSWeaponAsset.ConeHalfAngleToAccuracy
	bool CanWeaponStateTransition(enum class EWeaponStateNew OldState, enum class EWeaponStateNew NewState); // Function Killstreak.KSWeaponAsset.CanWeaponStateTransition
	bool CanResetKickback(); // Function Killstreak.KSWeaponAsset.CanResetKickback
	bool CanRecoverFromKickback(); // Function Killstreak.KSWeaponAsset.CanRecoverFromKickback
	bool CanReceiveAttachment(struct UKSWeaponAttachment* InAttachment, struct FGameplayTagContainer AvailableAttachPoints); // Function Killstreak.KSWeaponAsset.CanReceiveAttachment
	bool CanModsReplenishAmmo(); // Function Killstreak.KSWeaponAsset.CanModsReplenishAmmo
	bool CanInterruptPreReload(); // Function Killstreak.KSWeaponAsset.CanInterruptPreReload
	bool CanEverReload(); // Function Killstreak.KSWeaponAsset.CanEverReload
	bool CanEverFire(); // Function Killstreak.KSWeaponAsset.CanEverFire
	bool CanEverAimOverShoulder(); // Function Killstreak.KSWeaponAsset.CanEverAimOverShoulder
	bool CanEverAimDownSights(); // Function Killstreak.KSWeaponAsset.CanEverAimDownSights
	bool CanEverAimAlternate(); // Function Killstreak.KSWeaponAsset.CanEverAimAlternate
	bool CanBeDropped(); // Function Killstreak.KSWeaponAsset.CanBeDropped
	float CalculateDamageFromProjectileHit(struct FHitResult HitInfo, struct AKSProjectile* Projectile); // Function Killstreak.KSWeaponAsset.CalculateDamageFromProjectileHit
	float CalculateDamageFromInstantHit(struct FHitResult HitInfo, float DamageFalloffRangeScaler); // Function Killstreak.KSWeaponAsset.CalculateDamageFromInstantHit
	float CalculateDamageFalloffFromProjectileHit(struct FHitResult HitInfo, struct AKSProjectile* Projectile); // Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromProjectileHit
	float CalculateDamageFalloffFromHitResults(struct FHitResult HitInfo, float FalloffRangeScaler); // Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromHitResults
	float CalculateDamageFalloffFromDistance(float Distance, float FalloffRangeScaler); // Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromDistance
	float AccuracyToConeHalfAngle(float Accuracy); // Function Killstreak.KSWeaponAsset.AccuracyToConeHalfAngle
};

// Class Killstreak.KSArmorAsset
// Size: 0x770 (Inherited: 0x760)
struct UKSArmorAsset : public UKSWeaponAsset {
	float Durability; // 0x760(0x04)
	float DamageAbsorbPercent; // 0x764(0x04)
	int32_t DisplayLevel; // 0x768(0x04)
	bool bAbsorbsHeadDamage; // 0x76c(0x01)
	bool bAbsorbsBreakingHit; // 0x76d(0x01)
	bool bArmorIsRepairable; // 0x76e(0x01)
	bool bDestroyOnBreak; // 0x76f(0x01)

	bool ShouldDestroyOnBreak(); // Function Killstreak.KSArmorAsset.ShouldDestroyOnBreak
	bool IsArmorRepairable(); // Function Killstreak.KSArmorAsset.IsArmorRepairable
	float GetMaxDurability(); // Function Killstreak.KSArmorAsset.GetMaxDurability
	int32_t GetDisplayLevel(); // Function Killstreak.KSArmorAsset.GetDisplayLevel
	float GetDamageAbsorbPercent(); // Function Killstreak.KSArmorAsset.GetDamageAbsorbPercent
	bool DoesAbsorbBreakingHit(); // Function Killstreak.KSArmorAsset.DoesAbsorbBreakingHit
	float CalcAbsorbRadialDamage(float Damage, struct FRadialDamageEvent RadialDamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSArmorAsset.CalcAbsorbRadialDamage
	float CalcAbsorbPointDamage(float Damage, struct FPointDamageEvent PointDamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSArmorAsset.CalcAbsorbPointDamage
};

// Class Killstreak.KSWeaponAssetDrop
// Size: 0x7d8 (Inherited: 0x360)
struct AKSWeaponAssetDrop : public AKSItemDrop {
	char UnknownData_360[0x8]; // 0x360(0x08)
	struct FMulticastInlineDelegate OnProjectileSpawned; // 0x368(0x10)
	char UnknownData_378[0x18]; // 0x378(0x18)
	struct AKSProjectile* ReturnProjectile; // 0x390(0x08)
	char UnknownData_398[0x8]; // 0x398(0x08)
	struct UKSWeaponComponent* WeaponComponent; // 0x3a0(0x08)
	struct UKSWeaponAsset* WeaponAsset; // 0x3a8(0x08)
	uint16_t WeaponComponentEquipmentId; // 0x3b0(0x02)
	char UnknownData_3B2[0x6]; // 0x3b2(0x06)
	struct UKSWeaponAsset* CachedWeaponAsset; // 0x3b8(0x08)
	char UnknownData_3C0[0xe8]; // 0x3c0(0xe8)
	struct FBundledAmmoInfo BundledAmmo; // 0x4a8(0x0c)
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FKSWeaponDropAttachmentContainer AttachmentContainer; // 0x4b8(0x128)
	struct FKSEquipmentContainer EquipmentContainer; // 0x5e0(0x1f0)
	float CosmeticZOffset; // 0x7d0(0x04)
	char UnknownData_7D4[0x4]; // 0x7d4(0x04)

	void SetBundledAmmoToDefault(); // Function Killstreak.KSWeaponAssetDrop.SetBundledAmmoToDefault
	void OverrideDropAmmo(int32_t ReserveAmmo, int32_t AmmoInClip); // Function Killstreak.KSWeaponAssetDrop.OverrideDropAmmo
	void OnReturnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSWeaponAssetDrop.OnReturnProjectileStopped
	void OnRep_ReturnProjectile(); // Function Killstreak.KSWeaponAssetDrop.OnRep_ReturnProjectile
	struct UKSWeaponComponent* GetWeaponComponent(); // Function Killstreak.KSWeaponAssetDrop.GetWeaponComponent
	struct UKSWeaponAsset* GetWeaponAsset(); // Function Killstreak.KSWeaponAssetDrop.GetWeaponAsset
	struct AKSProjectile* GetReturnProjectile(); // Function Killstreak.KSWeaponAssetDrop.GetReturnProjectile
	bool GetLabelInfoForFireModeType(enum class EFireModeType FireModeType); // Function Killstreak.KSWeaponAssetDrop.GetLabelInfoForFireModeType
	bool GetLabelInfoForAmmoType(enum class EAmmoType AmmoType); // Function Killstreak.KSWeaponAssetDrop.GetLabelInfoForAmmoType
	bool CanPickupReplenishAmmo(); // Function Killstreak.KSWeaponAssetDrop.CanPickupReplenishAmmo
	void BroadcastPickupFailedInventoryFull(struct AKSCharacter* Receiver); // Function Killstreak.KSWeaponAssetDrop.BroadcastPickupFailedInventoryFull
	bool AddAttachment(struct UKSWeaponAttachment* InAttachment); // Function Killstreak.KSWeaponAssetDrop.AddAttachment
};

// Class Killstreak.KSArmorAssetDrop
// Size: 0x7e0 (Inherited: 0x7d8)
struct AKSArmorAssetDrop : public AKSWeaponAssetDrop {
	float RemainingDurability; // 0x7d8(0x04)
	char UnknownData_7DC[0x4]; // 0x7dc(0x04)
};

// Class Killstreak.KSAssetManager
// Size: 0x678 (Inherited: 0x588)
struct UKSAssetManager : public UPInv_AssetManager {
	char UnknownData_588[0xf0]; // 0x588(0xf0)
};

// Class Killstreak.KSAssetQueryHelperComponent
// Size: 0x110 (Inherited: 0xb0)
struct UKSAssetQueryHelperComponent : public UActorComponent {
	struct FGameplayTagQuery PrimaryAssetQuery; // 0xb0(0x48)
	struct TArray<struct FPrimaryAssetId> AssetIds; // 0xf8(0x10)
	int32_t LastResolvedIndex; // 0x108(0x04)
	bool bHasInitalizedAssetIdList; // 0x10c(0x01)
	char UnknownData_10D[0x3]; // 0x10d(0x03)

	struct UObject* ResolvePreviousAssetId(); // Function Killstreak.KSAssetQueryHelperComponent.ResolvePreviousAssetId
	struct UObject* ResolveNextAssetId(); // Function Killstreak.KSAssetQueryHelperComponent.ResolveNextAssetId
	struct UObject* ResolveAssetIdAtIndex(int32_t Index); // Function Killstreak.KSAssetQueryHelperComponent.ResolveAssetIdAtIndex
	int32_t GetLastResolvedIndex(); // Function Killstreak.KSAssetQueryHelperComponent.GetLastResolvedIndex
};

// Class Killstreak.KSNeutralBombDrop
// Size: 0x938 (Inherited: 0x7d8)
struct AKSNeutralBombDrop : public AKSWeaponAssetDrop {
	char UnknownData_7D8[0x4]; // 0x7d8(0x04)
	float CurrentInteractionProgress; // 0x7dc(0x04)
	struct AKSCharacter* CurrentInteractor; // 0x7e0(0x08)
	float NeutralPickupTime; // 0x7e8(0x04)
	char UnknownData_7EC[0x4]; // 0x7ec(0x04)
	struct FText NeutralPickupPrompt; // 0x7f0(0x18)
	struct FText NeutralPickupProgressText; // 0x808(0x18)
	float DisarmTime; // 0x820(0x04)
	char UnknownData_824[0x4]; // 0x824(0x04)
	struct FText DisarmPrompt; // 0x828(0x18)
	struct FText DisarmProgressText; // 0x840(0x18)
	struct UKSInteractionType* DisarmInteractionType; // 0x858(0x08)
	float MaxDisarmInteractionDistance; // 0x860(0x04)
	char UnknownData_864[0x4]; // 0x864(0x04)
	SoftClassProperty MinimapDisplayWidget; // 0x868(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x890(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x8b8(0x28)
	struct FName DisarmCameraName; // 0x8e0(0x08)
	float DisarmCameraTransitionInTime; // 0x8e8(0x04)
	float DisarmCameraTransitionOutTime; // 0x8ec(0x04)
	bool bDisarmForceCameraShoulder; // 0x8f0(0x01)
	enum class ECameraShoulder DisarmCameraShoulder; // 0x8f1(0x01)
	char UnknownData_8F2[0x2]; // 0x8f2(0x02)
	float DisarmCameraMaxRotation; // 0x8f4(0x04)
	bool DisarmCameraRotationLockout; // 0x8f8(0x01)
	bool bLockPitch; // 0x8f9(0x01)
	bool bLockYaw; // 0x8fa(0x01)
	bool bDisarmCameraShake; // 0x8fb(0x01)
	char UnknownData_8FC[0x4]; // 0x8fc(0x04)
	struct UCameraShake* DisarmCameraShake; // 0x900(0x08)
	char UnknownData_908[0x4]; // 0x908(0x04)
	int32_t TeamSpottingBitmask; // 0x90c(0x04)
	float MaxSpottingRange; // 0x910(0x04)
	float SpottingSweepRadius; // 0x914(0x04)
	float GroundCheckDistance; // 0x918(0x04)
	char UnknownData_91C[0xc]; // 0x91c(0x0c)
	struct FName SoundEventName; // 0x928(0x08)
	float SoundEventLoudness; // 0x930(0x04)
	float RepeatTimeToNotifyBots; // 0x934(0x04)

	void RequestBombReset(); // Function Killstreak.KSNeutralBombDrop.RequestBombReset
	void OnOverlapBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSNeutralBombDrop.OnOverlapBegin
	void OnNeutralBombStateChanged(struct FKSNeutralBombState NewState); // Function Killstreak.KSNeutralBombDrop.OnNeutralBombStateChanged
	void NotifyBots(); // Function Killstreak.KSNeutralBombDrop.NotifyBots
	bool IsSpottedByTeam(struct AKSTeamState* Team); // Function Killstreak.KSNeutralBombDrop.IsSpottedByTeam
	bool IsSpottedByPlayer(struct AController* Controller); // Function Killstreak.KSNeutralBombDrop.IsSpottedByPlayer
	float GetCurrentInteractionProgress(); // Function Killstreak.KSNeutralBombDrop.GetCurrentInteractionProgress
	void ExplodeCosmetic(); // Function Killstreak.KSNeutralBombDrop.ExplodeCosmetic
	void Explode(); // Function Killstreak.KSNeutralBombDrop.Explode
};

// Class Killstreak.KSObjectiveBase
// Size: 0x380 (Inherited: 0x220)
struct AKSObjectiveBase : public AActor {
	char UnknownData_220[0x10]; // 0x220(0x10)
	struct FMulticastInlineDelegate OnObjectiveUpdate; // 0x230(0x10)
	enum class EObjectiveIconType MapIconType; // 0x240(0x01)
	char UnknownData_241[0x3]; // 0x241(0x03)
	int32_t DisplayId; // 0x244(0x04)
	int32_t ActiveObjectiveIndex; // 0x248(0x04)
	bool bUsed; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	struct FObjectiveState ObjectiveState; // 0x250(0x14)
	int32_t ObjectiveId; // 0x264(0x04)
	enum class EObjectiveType ObjectiveType; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	struct FName DefaultState; // 0x26c(0x08)
	struct FName InitialActivateState; // 0x274(0x08)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct FText DisplayName; // 0x280(0x18)
	struct FString ObjectiveDisplayLabel; // 0x298(0x10)
	bool bAppendActiveIndexToLabel; // 0x2a8(0x01)
	char UnknownData_2A9[0x1f]; // 0x2a9(0x1f)
	int32_t ObjectiveLootGroup; // 0x2c8(0x04)
	struct FVector NavigationLocation; // 0x2cc(0x0c)
	char UnknownData_2D8[0xc]; // 0x2d8(0x0c)
	bool UseNavLocationForDistance; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	SoftClassProperty MinimapDisplayWidget; // 0x2e8(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x310(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x338(0x28)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x360(0x08)
	char UnknownData_368[0x8]; // 0x368(0x08)
	struct FName SoundEventName; // 0x370(0x08)
	float SoundEventLoudness; // 0x378(0x04)
	float RepeatTimeToNotifyBots; // 0x37c(0x04)

	void SetState(struct FName NewState, int32_t NewOwner); // Function Killstreak.KSObjectiveBase.SetState
	void ResetState(bool ClearOwner); // Function Killstreak.KSObjectiveBase.ResetState
	void OnRep_ObjectiveState(); // Function Killstreak.KSObjectiveBase.OnRep_ObjectiveState
	void OnRep_ObjectiveId(); // Function Killstreak.KSObjectiveBase.OnRep_ObjectiveId
	void NotifyBots(); // Function Killstreak.KSObjectiveBase.NotifyBots
	void HandleNewState(); // Function Killstreak.KSObjectiveBase.HandleNewState
	struct FName GetPreviousState(); // Function Killstreak.KSObjectiveBase.GetPreviousState
	int32_t GetOwningTeamOrPlayer(); // Function Killstreak.KSObjectiveBase.GetOwningTeamOrPlayer
	float GetObjectiveMeterProgressTotal(); // Function Killstreak.KSObjectiveBase.GetObjectiveMeterProgressTotal
	float GetObjectiveMeterProgress(); // Function Killstreak.KSObjectiveBase.GetObjectiveMeterProgress
	int32_t GetObjectiveId(); // Function Killstreak.KSObjectiveBase.GetObjectiveId
	struct FText GetObjectiveDisplayName(); // Function Killstreak.KSObjectiveBase.GetObjectiveDisplayName
	struct FString GetObjectiveDisplayLabel(); // Function Killstreak.KSObjectiveBase.GetObjectiveDisplayLabel
	struct FName GetCurrentState(); // Function Killstreak.KSObjectiveBase.GetCurrentState
	bool CanChangeState(struct FName NewState, int32_t NewOwner); // Function Killstreak.KSObjectiveBase.CanChangeState
	void CallOnTeamSidesFlipped(); // Function Killstreak.KSObjectiveBase.CallOnTeamSidesFlipped
	void AssignObjectiveId(int32_t NewId); // Function Killstreak.KSObjectiveBase.AssignObjectiveId
	void ActivateObjective(int32_t NewOwner); // Function Killstreak.KSObjectiveBase.ActivateObjective
};

// Class Killstreak.KSExtractionComputer
// Size: 0x468 (Inherited: 0x380)
struct AKSExtractionComputer : public AKSObjectiveBase {
	char UnknownData_380[0x8]; // 0x380(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x388(0x08)
	char UnknownData_390[0x10]; // 0x390(0x10)
	int32_t FavoredSide; // 0x3a0(0x04)
	float TimeToHack; // 0x3a4(0x04)
	float TimeToDehack; // 0x3a8(0x04)
	float CurrentInteractionProgress; // 0x3ac(0x04)
	struct UKSInteractionManager* CurrentInteractionManager; // 0x3b0(0x08)
	struct AKSCharacter* ComputerUser; // 0x3b8(0x08)
	struct FText HackingInteractionProgressText; // 0x3c0(0x18)
	struct FText DehackingInteractionProgressText; // 0x3d8(0x18)
	struct FText HackingInteractionPromptText; // 0x3f0(0x18)
	struct FText DehackingInteractionPromptText; // 0x408(0x18)
	struct USphereComponent* InteractionRangeSphereComponent; // 0x420(0x08)
	struct FVector RelativeInteractionPoint; // 0x428(0x0c)
	struct FName CameraName; // 0x434(0x08)
	float CameraTransitionInTime; // 0x43c(0x04)
	float CameraTransitionOutTime; // 0x440(0x04)
	bool bForceCameraShoulder; // 0x444(0x01)
	enum class ECameraShoulder CameraShoulder; // 0x445(0x01)
	char UnknownData_446[0x2]; // 0x446(0x02)
	float CameraMaxRotation; // 0x448(0x04)
	bool CameraRotationLockout; // 0x44c(0x01)
	bool bLockPitch; // 0x44d(0x01)
	bool bLockYaw; // 0x44e(0x01)
	bool FacesInteract; // 0x44f(0x01)
	bool bCameraShake; // 0x450(0x01)
	char UnknownData_451[0x7]; // 0x451(0x07)
	struct UCameraShake* CameraShake; // 0x458(0x08)
	char UnknownData_460[0x8]; // 0x460(0x08)

	void LocalHoverStateChanged(bool bIsHovered); // Function Killstreak.KSExtractionComputer.LocalHoverStateChanged
	void InteractionEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSExtractionComputer.InteractionEndOverlap
	void InteractionComplete(); // Function Killstreak.KSExtractionComputer.InteractionComplete
};

// Class Killstreak.KSAudioManager
// Size: 0x140 (Inherited: 0x28)
struct UKSAudioManager : public UObject {
	struct UKSAudioPlayerStateParameterData* AudioPlayerStateParameters; // 0x28(0x08)
	char UnknownData_30[0x20]; // 0x30(0x20)
	struct TMap<struct FString, struct UDataTable*> LoadedAudioDataTables; // 0x50(0x50)
	char UnknownData_A0[0x80]; // 0xa0(0x80)
	struct FWeakObjectPtr<struct UKSGameInstance> WeakGameInstance; // 0x120(0x08)
	char UnknownData_128[0x18]; // 0x128(0x18)

	void HandleTeamCinematicStarted(); // Function Killstreak.KSAudioManager.HandleTeamCinematicStarted
	void HandleSkydiveStarted(struct AKSCharacter* Diver); // Function Killstreak.KSAudioManager.HandleSkydiveStarted
	void HandleSkydiveSkipped(struct AKSCharacter* Diver); // Function Killstreak.KSAudioManager.HandleSkydiveSkipped
	void HandleSkydiveEnded(struct AKSCharacter* Diver); // Function Killstreak.KSAudioManager.HandleSkydiveEnded
	void HandleRoundHasEnded(int32_t RoundWinner, int32_t MatchWinner); // Function Killstreak.KSAudioManager.HandleRoundHasEnded
	void HandlePostSelectionPhaseBeginFadeOut(); // Function Killstreak.KSAudioManager.HandlePostSelectionPhaseBeginFadeOut
	void HandlePhaseChanged(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function Killstreak.KSAudioManager.HandlePhaseChanged
	void HandleMatchTimerUpdate(float TimeInWholeSeconds); // Function Killstreak.KSAudioManager.HandleMatchTimerUpdate
	void HandleLoadingScreenEnded(); // Function Killstreak.KSAudioManager.HandleLoadingScreenEnded
	void HandleLoadingScreenBegan(); // Function Killstreak.KSAudioManager.HandleLoadingScreenBegan
	void HandleLeavingMap(); // Function Killstreak.KSAudioManager.HandleLeavingMap
	void HandleLastManStanding(struct AKSPlayerState* LastPlayer); // Function Killstreak.KSAudioManager.HandleLastManStanding
	void HandleKillcamStarted(); // Function Killstreak.KSAudioManager.HandleKillcamStarted
	void HandleGameStateEndPlay(struct AKSGameState* GameState); // Function Killstreak.KSAudioManager.HandleGameStateEndPlay
	void HandleGameStateBeginPlay(struct AKSGameState* GameState); // Function Killstreak.KSAudioManager.HandleGameStateBeginPlay
	void HandleGameModeReceived(); // Function Killstreak.KSAudioManager.HandleGameModeReceived
	void HandleDropshipDoorOpened(); // Function Killstreak.KSAudioManager.HandleDropshipDoorOpened
	void HandleControlPointCaptured(struct AKSTeamState* CapturingTeam); // Function Killstreak.KSAudioManager.HandleControlPointCaptured
	void HandleBombStateChanged(struct FKSNeutralBombState BombState); // Function Killstreak.KSAudioManager.HandleBombStateChanged
};

// Class Killstreak.KSAudioPlayer
// Size: 0x500 (Inherited: 0x220)
struct AKSAudioPlayer : public AInfo {
	struct TMap<enum class EGameplayAudioEvent, struct UKSAudioPlayerEventActionData*> GameplayEventActionMap; // 0x220(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> MapLevelStartEventActionMap; // 0x270(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> MapLevelEndEventActionMap; // 0x2c0(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> GameModeStartEventActionMap; // 0x310(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> GameModeEndEventActionMap; // 0x360(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> PlayerCharacterStartEventActionMap; // 0x3b0(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> PlayerCharacterEndEventActionMap; // 0x400(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> MusicPackStartEventActionMap; // 0x450(0x50)
	struct TMap<struct FString, struct UKSAudioPlayerEventActionData*> MusicPackEndEventActionMap; // 0x4a0(0x50)
	struct UKSAudioPlayerEventActionData* AudioPlayerBeginPlayEventActionData; // 0x4f0(0x08)
	struct UKSAudioPlayerEventActionData* AudioPlayerEndPlayEventActionData; // 0x4f8(0x08)

	struct TArray<struct FString> ComposeEventNamePriorityArray(struct FString EventName, struct UKSAudioPlayerStateParameterData* CurrentStateParameters); // Function Killstreak.KSAudioPlayer.ComposeEventNamePriorityArray
	struct TArray<struct FString> ComposeBankNamePriorityArray(struct FString BankPrefix, struct UKSAudioPlayerStateParameterData* CurrentStateParameters); // Function Killstreak.KSAudioPlayer.ComposeBankNamePriorityArray
};

// Class Killstreak.KSAudioPlayerEventActionData
// Size: 0xa0 (Inherited: 0x30)
struct UKSAudioPlayerEventActionData : public UDataAsset {
	struct TArray<struct FString> BanksToLoad; // 0x30(0x10)
	struct TArray<struct FString> BanksToUnload; // 0x40(0x10)
	struct TArray<struct FString> ContainersToPlay; // 0x50(0x10)
	struct TArray<struct FString> ContainersToStop; // 0x60(0x10)
	struct TArray<struct FString> TablesToLoad; // 0x70(0x10)
	struct TArray<struct FString> TablesToUnload; // 0x80(0x10)
	struct TArray<struct FString> EventsToPost; // 0x90(0x10)
};

// Class Killstreak.KSAudioPlayerStateParameterData
// Size: 0xb8 (Inherited: 0x28)
struct UKSAudioPlayerStateParameterData : public UObject {
	struct FString ActiveGameMode; // 0x28(0x10)
	struct FString ActiveMapLevel; // 0x38(0x10)
	struct FString ActiveMusicPack; // 0x48(0x10)
	struct FString ActivePlayerCharacter; // 0x58(0x10)
	bool IsSpectating; // 0x68(0x01)
	char UnknownData_69[0x7]; // 0x69(0x07)
	struct FString PreviousGameMode; // 0x70(0x10)
	struct FString PreviousMapLevel; // 0x80(0x10)
	struct FString PreviousMusicPack; // 0x90(0x10)
	struct FString PreviousPlayerCharacter; // 0xa0(0x10)
	bool PreviousIsSpectating; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)

	bool HasActivePlayerCharacter(); // Function Killstreak.KSAudioPlayerStateParameterData.HasActivePlayerCharacter
	bool HasActiveMusicPack(); // Function Killstreak.KSAudioPlayerStateParameterData.HasActiveMusicPack
	bool HasActiveMapLevel(); // Function Killstreak.KSAudioPlayerStateParameterData.HasActiveMapLevel
	bool HasActiveGameMode(); // Function Killstreak.KSAudioPlayerStateParameterData.HasActiveGameMode
	struct FString GetPreviousPlayerCharacter(); // Function Killstreak.KSAudioPlayerStateParameterData.GetPreviousPlayerCharacter
	struct FString GetPreviousMusicPack(); // Function Killstreak.KSAudioPlayerStateParameterData.GetPreviousMusicPack
	struct FString GetPreviousMapLevel(); // Function Killstreak.KSAudioPlayerStateParameterData.GetPreviousMapLevel
	bool GetPreviousIsSpectating(); // Function Killstreak.KSAudioPlayerStateParameterData.GetPreviousIsSpectating
	struct FString GetPreviousGameMode(); // Function Killstreak.KSAudioPlayerStateParameterData.GetPreviousGameMode
	bool GetIsSpectating(); // Function Killstreak.KSAudioPlayerStateParameterData.GetIsSpectating
	struct FString GetActivePlayerCharacter(); // Function Killstreak.KSAudioPlayerStateParameterData.GetActivePlayerCharacter
	struct FString GetActiveMusicPack(); // Function Killstreak.KSAudioPlayerStateParameterData.GetActiveMusicPack
	struct FString GetActiveMapLevel(); // Function Killstreak.KSAudioPlayerStateParameterData.GetActiveMapLevel
	struct FString GetActiveGameMode(); // Function Killstreak.KSAudioPlayerStateParameterData.GetActiveGameMode
};

// Class Killstreak.KSAutoPickupComponent
// Size: 0x160 (Inherited: 0xb0)
struct UKSAutoPickupComponent : public UActorComponent {
	float AutoPickupMinPickupTimeSinceCreation; // 0xb0(0x04)
	float AutoPickupDistance; // 0xb4(0x04)
	float AutoPickupQueryInterval; // 0xb8(0x04)
	bool bActivateAutoPickups; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	struct TMap<struct UKSItem*, int32_t> ItemPriorityMap; // 0xc0(0x50)
	bool bAutoPickupClusivityEnabled; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)
	struct FGameplayTagQuery ClusivityQuery; // 0x118(0x48)

	void OnOwnerPossessionChanged(struct AController* Controller); // Function Killstreak.KSAutoPickupComponent.OnOwnerPossessionChanged
	void OnAutoPickupPreferenceChanged(bool bAutoPickupEnabled); // Function Killstreak.KSAutoPickupComponent.OnAutoPickupPreferenceChanged
};

// Class Killstreak.KSAvatar
// Size: 0x190 (Inherited: 0x168)
struct UKSAvatar : public UKSItem {
	struct TSoftObjectPtr<struct UTexture2D> LargeAvatarIcon; // 0x168(0x28)

	struct TSoftObjectPtr<struct UTexture2D> GetSoftLargeAvatarIcon(); // Function Killstreak.KSAvatar.GetSoftLargeAvatarIcon
};

// Class Killstreak.KSAvenger
// Size: 0xb8 (Inherited: 0x98)
struct UKSAvenger : public UKSAccoladeTracker {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct TArray<struct FPlayerCombatInfo> PlayerTrackers; // 0xa0(0x10)
	float MaxTrackerTimer; // 0xb0(0x04)
	char UnknownData_B4[0x4]; // 0xb4(0x04)

	void StoreCombatInfo(struct FCombatEventInfo ElimEvent); // Function Killstreak.KSAvenger.StoreCombatInfo
	void RemoveTracker(struct FPlayerCombatInfo CurrentTrackPlayer); // Function Killstreak.KSAvenger.RemoveTracker
	bool CheckPlayerTrackers(struct AKSPlayerState* Instigator, struct AKSPlayerState* Victim); // Function Killstreak.KSAvenger.CheckPlayerTrackers
};

// Class Killstreak.KSBanner
// Size: 0x1b8 (Inherited: 0x168)
struct UKSBanner : public UKSItem {
	struct TSoftObjectPtr<struct UTexture2D> SmallBannerIcon; // 0x168(0x28)
	struct TSoftObjectPtr<struct UTexture2D> LargeBannerIcon; // 0x190(0x28)

	struct TSoftObjectPtr<struct UTexture2D> GetSoftSmallBannerIcon(); // Function Killstreak.KSBanner.GetSoftSmallBannerIcon
	struct TSoftObjectPtr<struct UTexture2D> GetSoftLargeBannerIcon(); // Function Killstreak.KSBanner.GetSoftLargeBannerIcon
};

// Class Killstreak.KSBattlePassProgressionActivity
// Size: 0x2b8 (Inherited: 0x2b0)
struct UKSBattlePassProgressionActivity : public UKSActivity {
	enum class EKSBattlePassProgressionActivityType ReferenceType; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
};

// Class Killstreak.KSBattlePassProgressionManager
// Size: 0x220 (Inherited: 0x210)
struct UKSBattlePassProgressionManager : public UKSActivityManagerBase {
	struct FMulticastInlineDelegate OnMiniBattlePassProgressionActivityReady; // 0x210(0x10)

	bool ShouldDisplayMiniBattlePass(); // Function Killstreak.KSBattlePassProgressionManager.ShouldDisplayMiniBattlePass
	int32_t GetMiniBattlePassXpItemId(); // Function Killstreak.KSBattlePassProgressionManager.GetMiniBattlePassXpItemId
	struct UKSActivityInstance* GetActivityInstanceByType(enum class EKSBattlePassProgressionActivityType Type, struct AKSPlayerController* Player); // Function Killstreak.KSBattlePassProgressionManager.GetActivityInstanceByType
	struct UKSBattlePassProgressionActivity* FindActivityByType(enum class EKSBattlePassProgressionActivityType Type); // Function Killstreak.KSBattlePassProgressionManager.FindActivityByType
};

// Class Killstreak.KSPlayerBehaviorRuleComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UKSPlayerBehaviorRuleComponent : public UKSBehaviorRuleBaseComponent {
	struct AController* FilteredPlayer; // 0xb0(0x08)
	struct AKSTeamState* FilteredTeam; // 0xb8(0x08)
	enum class EPlayerBehaviorChangeReact PlayerSetChangeReaction; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)

	void SetTeamFilter(struct AKSTeamState* NewFilteredTeam); // Function Killstreak.KSPlayerBehaviorRuleComponent.SetTeamFilter
	void SetPlayerFilter(struct AController* NewFilteredPlayer); // Function Killstreak.KSPlayerBehaviorRuleComponent.SetPlayerFilter
	void OnPlayerFilterControllerLogout(bool bWasActive); // Function Killstreak.KSPlayerBehaviorRuleComponent.OnPlayerFilterControllerLogout
	void ClearTeamFilter(); // Function Killstreak.KSPlayerBehaviorRuleComponent.ClearTeamFilter
	void ClearPlayerFilter(); // Function Killstreak.KSPlayerBehaviorRuleComponent.ClearPlayerFilter
	void ClearBehaviorChange(struct TArray<struct AController*> Players); // Function Killstreak.KSPlayerBehaviorRuleComponent.ClearBehaviorChange
	void ApplyBehaviorChange(struct TArray<struct AController*> Players); // Function Killstreak.KSPlayerBehaviorRuleComponent.ApplyBehaviorChange
};

// Class Killstreak.KSFXCurveComponent
// Size: 0x130 (Inherited: 0xb0)
struct UKSFXCurveComponent : public UActorComponent {
	char UnknownData_B0[0x50]; // 0xb0(0x50)
	struct UMaterialInstanceDynamic* PostProcessMID; // 0x100(0x08)
	struct UMaterialInterface* PostProcessMIDParent; // 0x108(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x110(0x08)
	struct UParticleSystem* ParticleSystemParent; // 0x118(0x08)
	bool bPlaying; // 0x120(0x01)
	bool bReversing; // 0x121(0x01)
	bool bLooping; // 0x122(0x01)
	char UnknownData_123[0x1]; // 0x123(0x01)
	float CurrentTime; // 0x124(0x04)
	char UnknownData_128[0x8]; // 0x128(0x08)

	void UpdateScalarTrack(struct FName TrackName, float TrackValue); // Function Killstreak.KSFXCurveComponent.UpdateScalarTrack
	void UpdateColorTrack(struct FName TrackName, struct FLinearColor TrackValue); // Function Killstreak.KSFXCurveComponent.UpdateColorTrack
	void Stop(); // Function Killstreak.KSFXCurveComponent.Stop
	void Reverse(); // Function Killstreak.KSFXCurveComponent.Reverse
	void ResetTime(); // Function Killstreak.KSFXCurveComponent.ResetTime
	void Play(); // Function Killstreak.KSFXCurveComponent.Play
	bool IsPlaying(); // Function Killstreak.KSFXCurveComponent.IsPlaying
	struct FName GetFxID(); // Function Killstreak.KSFXCurveComponent.GetFxID
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSFXCurveComponent.GetCharacterOwner
};

// Class Killstreak.KSBloodSplatterComponent
// Size: 0x138 (Inherited: 0x130)
struct UKSBloodSplatterComponent : public UKSFXCurveComponent {
	float Damage; // 0x130(0x04)
	char UnknownData_134[0x4]; // 0x134(0x04)

	void AddDamageInstance(float DamageAmount, struct FVector DamageOrigin); // Function Killstreak.KSBloodSplatterComponent.AddDamageInstance
};

// Class Killstreak.KSBlueprintableInteractable
// Size: 0x2f0 (Inherited: 0x220)
struct AKSBlueprintableInteractable : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x228(0x08)
	float Duration; // 0x230(0x04)
	bool bCanInteractFromBehind; // 0x234(0x01)
	bool bCanInteractWhileDowned; // 0x235(0x01)
	bool bShouldDisplayInteractionProgress; // 0x236(0x01)
	char UnknownData_237[0x1]; // 0x237(0x01)
	struct FName InteractionName; // 0x238(0x08)
	int32_t MaxNumberOfInteractors; // 0x240(0x04)
	int32_t InteractionPriority; // 0x244(0x04)
	bool bInteractionAllowed; // 0x248(0x01)
	char UnknownData_249[0x7]; // 0x249(0x07)
	struct UKSInteractionType* InteractionType; // 0x250(0x08)
	struct TArray<struct UPrimitiveComponent*> OutlinedComponents; // 0x258(0x10)
	char UnknownData_268[0x10]; // 0x268(0x10)
	struct TArray<struct UKSInteractionManager*> ActiveInteractions; // 0x278(0x10)
	int32_t NumActiveInteractions; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct FText ProgressText; // 0x290(0x18)
	struct FText PromptText; // 0x2a8(0x18)
	struct FMulticastInlineDelegate OnInteractionStarted; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnInteractionEnded; // 0x2d0(0x10)
	struct FMulticastInlineDelegate OnInteractionComplete; // 0x2e0(0x10)

	void SetInteractability(bool NewInteractable); // Function Killstreak.KSBlueprintableInteractable.SetInteractability
	void InterruptInteraction(struct AKSCharacter* InteractingCharacter, bool bForce); // Function Killstreak.KSBlueprintableInteractable.InterruptInteraction
	void InterruptAllInteractions(bool bForce); // Function Killstreak.KSBlueprintableInteractable.InterruptAllInteractions
	bool InternalCanInteractOnPress(struct AKSCharacter* InteractingCharacter); // Function Killstreak.KSBlueprintableInteractable.InternalCanInteractOnPress
	bool InternalCanInteractOnHold(struct AKSCharacter* InteractingCharacter); // Function Killstreak.KSBlueprintableInteractable.InternalCanInteractOnHold
	void BlueprintInteractionStarted(struct AKSCharacter* InteractingCharacter, float InDuration); // Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionStarted
	struct FVector BlueprintInteractionPoint(); // Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionPoint
	void BlueprintInteractionEnded(struct AKSCharacter* InteractingCharacter); // Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionEnded
	void AddOutlinedPrimitiveComponent(struct UPrimitiveComponent* InComponent); // Function Killstreak.KSBlueprintableInteractable.AddOutlinedPrimitiveComponent
};

// Class Killstreak.KSInteractionState
// Size: 0x30 (Inherited: 0x28)
struct UKSInteractionState : public UObject {
	enum class EKSInteractionResult Result; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class Killstreak.KSBorder
// Size: 0x1b8 (Inherited: 0x168)
struct UKSBorder : public UKSItem {
	struct TSoftObjectPtr<struct UTexture2D> SmallBorderIcon; // 0x168(0x28)
	struct TSoftObjectPtr<struct UTexture2D> LargeBorderIcon; // 0x190(0x28)

	struct TSoftObjectPtr<struct UTexture2D> GetSoftSmallBorderIcon(); // Function Killstreak.KSBorder.GetSoftSmallBorderIcon
	struct TSoftObjectPtr<struct UTexture2D> GetSoftLargeBorderIcon(); // Function Killstreak.KSBorder.GetSoftLargeBorderIcon
};

// Class Killstreak.KSBotDefinition
// Size: 0x1d8 (Inherited: 0x30)
struct UKSBotDefinition : public UDataAsset {
	struct FString FriendlySearchName; // 0x30(0x10)
	struct FBotSpawnTableRow Info; // 0x40(0x198)
};

// Class Killstreak.KSBotDefinitionCollection
// Size: 0x40 (Inherited: 0x30)
struct UKSBotDefinitionCollection : public UDataAsset {
	struct TArray<struct UKSBotDefinition*> BotDefinitions; // 0x30(0x10)
};

// Class Killstreak.KSBotEncounter
// Size: 0x68 (Inherited: 0x30)
struct UKSBotEncounter : public UDataAsset {
	int32_t BotSideNumber; // 0x30(0x04)
	bool bUseTeamInsteadOfSide; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	int32_t BotTeamNumber; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct UKSEncounterWave*> BotWaves; // 0x40(0x10)
	struct FName nmEncounterName; // 0x50(0x08)
	char UnknownData_58[0x8]; // 0x58(0x08)
	struct AKSTeamState* CachedTeamState; // 0x60(0x08)

	char GetTotalWaveNumber(); // Function Killstreak.KSBotEncounter.GetTotalWaveNumber
	struct FName GetEncounterName(); // Function Killstreak.KSBotEncounter.GetEncounterName
	char GetCurrentWaveNumber(); // Function Killstreak.KSBotEncounter.GetCurrentWaveNumber
	struct UKSEncounterWave* GetCurrentWave(); // Function Killstreak.KSBotEncounter.GetCurrentWave
	struct TArray<struct FName> ChooseNSpawnTableRows(int32_t nCount); // Function Killstreak.KSBotEncounter.ChooseNSpawnTableRows
	int32_t AdvanceWave(); // Function Killstreak.KSBotEncounter.AdvanceWave
};

// Class Killstreak.KSBotFactory
// Size: 0x338 (Inherited: 0x220)
struct AKSBotFactory : public AActor {
	bool bFinishPrecacheOnBeginPlay; // 0x220(0x01)
	bool bUseTeamInsteadOfSide; // 0x221(0x01)
	char UnknownData_222[0x2]; // 0x222(0x02)
	int32_t SideNum; // 0x224(0x04)
	int32_t TeamNum; // 0x228(0x04)
	enum class ECharacterBehaviorState InitialBehaviorState; // 0x22c(0x01)
	char UnknownData_22D[0x3]; // 0x22d(0x03)
	struct UKSBotDefinitionCollection* SpawnCollection; // 0x230(0x08)
	bool bSpawnHidden; // 0x238(0x01)
	bool bRandomBot; // 0x239(0x01)
	bool bWithoutReplacement; // 0x23a(0x01)
	bool bRandomLoadout; // 0x23b(0x01)
	bool bPreserveAIControllers; // 0x23c(0x01)
	bool OverrideTeamSizeFromQueue; // 0x23d(0x01)
	char UnknownData_23E[0x2]; // 0x23e(0x02)
	int32_t FillTeamTo; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)
	struct AKSWayPointSet* WayPointSet; // 0x248(0x08)
	bool ShouldReverseWayPointSetDirection; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct TArray<struct APlayerStart*> SpawnPoints; // 0x258(0x10)
	int32_t SpawnOnBeginPlay; // 0x268(0x04)
	int32_t SpawnOnRoundStart; // 0x26c(0x04)
	struct AKSDropShipLocation* AssociatedDropShipLocation; // 0x270(0x08)
	int32_t SpawnOnRoundSetup; // 0x278(0x04)
	int32_t SpawnOnCollectionTimeout; // 0x27c(0x04)
	int32_t SpawnOnHackTimeout; // 0x280(0x04)
	int32_t SpawnOnEscapeTimeout; // 0x284(0x04)
	int32_t SpawnOnDownloadStart; // 0x288(0x04)
	int32_t SpawnOnAlarm; // 0x28c(0x04)
	int32_t MinSpawnCount; // 0x290(0x04)
	int32_t MaxSpawnCount; // 0x294(0x04)
	bool bMaintainCountOnBotDeath; // 0x298(0x01)
	char UnknownData_299[0x7]; // 0x299(0x07)
	struct TArray<struct AKSAIController*> ActiveBots; // 0x2a0(0x10)
	struct AKSTeamState* TeamState; // 0x2b0(0x08)
	int32_t NextSequentialSpawnStart; // 0x2b8(0x04)
	int32_t CurrentLoadoutSeed; // 0x2bc(0x04)
	struct TArray<struct FName> RelevantObjectiveStates; // 0x2c0(0x10)
	struct TArray<struct FName> RelevantGameStatesForObjectiveSpawning; // 0x2d0(0x10)
	int32_t NumberOfTimesToSpawnForObjectiveRelevancy; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
	struct UBoxComponent* RelevancyVolume; // 0x2e8(0x08)
	struct TArray<struct AKSCharacter*> ContainedPlayers; // 0x2f0(0x10)
	struct TArray<struct AKSObjectiveBase*> ContainedObjectives; // 0x300(0x10)
	char UnknownData_310[0x28]; // 0x310(0x28)

	void UnhideSpawnedBots(); // Function Killstreak.KSBotFactory.UnhideSpawnedBots
	struct TArray<struct AKSAIController*> Spawn(int32_t Count); // Function Killstreak.KSBotFactory.Spawn
	void ShuffleSpawnPoints(); // Function Killstreak.KSBotFactory.ShuffleSpawnPoints
	void SetWayPointSet(struct AKSWayPointSet* InWPS); // Function Killstreak.KSBotFactory.SetWayPointSet
	void SetSpawnPoints(struct TArray<struct APlayerStart*> InPlayerStarts); // Function Killstreak.KSBotFactory.SetSpawnPoints
	void SetSideNum(int32_t InSideNum); // Function Killstreak.KSBotFactory.SetSideNum
	void SetShouldReverseWayPointSetDirection(bool InShouldReverse); // Function Killstreak.KSBotFactory.SetShouldReverseWayPointSetDirection
	void SetBotSpawnCollection(struct UKSBotDefinitionCollection* InSpawnCollection); // Function Killstreak.KSBotFactory.SetBotSpawnCollection
	void RestartBots(); // Function Killstreak.KSBotFactory.RestartBots
	void OnSpawnedBotDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSBotFactory.OnSpawnedBotDestroyed
	void OnRoundStart(struct FRoundInitState RoundInitState); // Function Killstreak.KSBotFactory.OnRoundStart
	void OnRoundSetup(struct FRoundInitState RoundInitState); // Function Killstreak.KSBotFactory.OnRoundSetup
	void OnRelevancyOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSBotFactory.OnRelevancyOverlapEnd
	void OnRelevancyOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSBotFactory.OnRelevancyOverlapBegin
	void OnPhaseChanged(struct FName PreviousPhaseName, struct FName NewPhaseName); // Function Killstreak.KSBotFactory.OnPhaseChanged
	void OnExtractionPhaseTimeout(struct FName PhaseName); // Function Killstreak.KSBotFactory.OnExtractionPhaseTimeout
	void OnAllPlayersFinishedPrePrep(); // Function Killstreak.KSBotFactory.OnAllPlayersFinishedPrePrep
	void OnAlarmPeriodStart(); // Function Killstreak.KSBotFactory.OnAlarmPeriodStart
	void HideSpawnedBots(); // Function Killstreak.KSBotFactory.HideSpawnedBots
	int32_t GetTeamSize(); // Function Killstreak.KSBotFactory.GetTeamSize
};

// Class Killstreak.KSBotJobConfigMap
// Size: 0x80 (Inherited: 0x30)
struct UKSBotJobConfigMap : public UDataAsset {
	struct TMap<struct TSoftObjectPtr<struct UKSJobItem>, struct FKSBotJobConfig> JobConfigs; // 0x30(0x50)
};

// Class Killstreak.KSBoxDeadZoneFilter
// Size: 0x48 (Inherited: 0x38)
struct UKSBoxDeadZoneFilter : public UKSAnalogStickFilter {
	struct FVector2D InnerDeadZone; // 0x38(0x08)
	struct FVector2D OuterDeadZone; // 0x40(0x08)
};

// Class Killstreak.KSBRC_GiveEquipment
// Size: 0xe0 (Inherited: 0xc8)
struct UKSBRC_GiveEquipment : public UKSPlayerBehaviorRuleComponent {
	bool bAddToLoadout; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
	struct TArray<struct UKSItem*> ItemsToGive; // 0xd0(0x10)
};

// Class Killstreak.KSBTAbilityConditionValidator
// Size: 0x1b0 (Inherited: 0x30)
struct UKSBTAbilityConditionValidator : public UDataAsset {
	bool bShouldUsePerceptionFilter; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct TArray<struct UAISense*> SensesToUse; // 0x38(0x10)
	struct FKSPerceptionFilter PerceptionFilter; // 0x48(0x158)
	int32_t MinPerceivedStimuliCount; // 0x1a0(0x04)
	bool bCheckCombatTarget; // 0x1a4(0x01)
	bool bCheckTargetVisible; // 0x1a5(0x01)
	bool bCheckTargetHidden; // 0x1a6(0x01)
	bool bCheckDistance; // 0x1a7(0x01)
	float MinDistanceMeters; // 0x1a8(0x04)
	float MaxDistanceMeters; // 0x1ac(0x04)
};

// Class Killstreak.KSBTAction
// Size: 0x40 (Inherited: 0x30)
struct UKSBTAction : public UDataAsset {
	struct FString ActionName; // 0x30(0x10)
};

// Class Killstreak.KSBTD_AbilityState
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_AbilityState : public UBTDecorator_BlackboardBase {
	bool bCheckAbilityReady; // 0x90(0x01)
	char AbilityReady; // 0x91(0x01)
	bool bCheckActive; // 0x92(0x01)
	char AbilityActive; // 0x93(0x01)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Killstreak.KSBTD_AnyActorPerceived
// Size: 0x1d0 (Inherited: 0x68)
struct UKSBTD_AnyActorPerceived : public UBTDecorator {
	struct TArray<struct UAISense*> SensesToUse; // 0x68(0x10)
	struct FKSPerceptionFilter PerceptionFilter; // 0x78(0x158)
};

// Class Killstreak.KSBTD_BlackboardPerceived
// Size: 0xa8 (Inherited: 0x90)
struct UKSBTD_BlackboardPerceived : public UBTDecorator_BlackboardBase {
	struct TArray<struct UAISense*> SensesToUse; // 0x90(0x10)
	struct FName PerceptionEvent; // 0xa0(0x08)
};

// Class Killstreak.KSBTD_CanActivateAbility
// Size: 0x90 (Inherited: 0x68)
struct UKSBTD_CanActivateAbility : public UBTDecorator {
	struct TSoftObjectPtr<struct UKSPlayerMod> Ability; // 0x68(0x28)
};

// Class Killstreak.KSBTD_CanActivateUniqueAbility
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_CanActivateUniqueAbility : public UBTDecorator {
	struct UDataTable* AbilityValidatorTable; // 0x68(0x08)
};

// Class Killstreak.KSBTD_CharacterState
// Size: 0x128 (Inherited: 0x90)
struct UKSBTD_CharacterState : public UBTDecorator_BlackboardBase {
	struct FKSCharacterStateFilter CharacterStateFilter; // 0x90(0x98)
};

// Class Killstreak.KSBTD_CheckRole
// Size: 0x80 (Inherited: 0x68)
struct UKSBTD_CheckRole : public UBTDecorator {
	struct TArray<enum class ECharacterRole> RequiredRoles; // 0x68(0x10)
	bool RequireAll; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
};

// Class Killstreak.KSBTD_CheckUniqueAbilityType
// Size: 0x78 (Inherited: 0x68)
struct UKSBTD_CheckUniqueAbilityType : public UBTDecorator {
	struct UDataTable* AbilityValidatorTable; // 0x68(0x08)
	enum class EAbilityExecutionType AbilityExecutionType; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Killstreak.KSBTD_CompareBetweenBlackboards
// Size: 0x108 (Inherited: 0x68)
struct UKSBTD_CompareBetweenBlackboards : public UBTDecorator {
	struct FBlackboardKeySelector SourceBlackboardActor; // 0x68(0x28)
	struct FBlackboardKeySelector SourceKey; // 0x90(0x28)
	struct FBlackboardKeySelector TargetBlackboardActor; // 0xb8(0x28)
	struct FBlackboardKeySelector TargetKey; // 0xe0(0x28)
};

// Class Killstreak.KSBTD_CompareBlackboardToValue
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_CompareBlackboardToValue : public UBTDecorator_BlackboardBase {
	float TargetValue; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Killstreak.KSBTD_CompareGrenadeFuseTimeLeft
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_CompareGrenadeFuseTimeLeft : public UBTDecorator {
	float Time; // 0x68(0x04)
	char ArithmeticOperation; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class Killstreak.KSBTD_CompareKeyToObjective
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_CompareKeyToObjective : public UBTDecorator_BlackboardBase {
	struct UKSBTObjective* Objective; // 0x90(0x08)
};

// Class Killstreak.KSBTD_CompareMatchPhaseTimeLeft
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_CompareMatchPhaseTimeLeft : public UBTDecorator {
	float Time; // 0x68(0x04)
	char ArithmeticOperation; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class Killstreak.KSBTD_CompareRoundNumber
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_CompareRoundNumber : public UBTDecorator {
	int32_t RoundNumber; // 0x68(0x04)
	char ArithmeticOperation; // 0x6c(0x01)
	char UnknownData_6D[0x3]; // 0x6d(0x03)
};

// Class Killstreak.KSBTD_DestroyableHazardState
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_DestroyableHazardState : public UBTDecorator_BlackboardBase {
	struct FKSDestroyableHazardStateFilter DestroyableHazardStateFilter; // 0x90(0x07)
	char UnknownData_97[0x1]; // 0x97(0x01)
};

// Class Killstreak.KSBTD_DestructibleState
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_DestructibleState : public UBTDecorator_BlackboardBase {
	struct FKSDestructibleStateFilter DestructibleStateFilter; // 0x90(0x02)
	char UnknownData_92[0x6]; // 0x92(0x06)
};

// Class Killstreak.KSBTD_DistanceFromBlackboard
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_DistanceFromBlackboard : public UBTDecorator_BlackboardBase {
	char ArithmeticOperation; // 0x90(0x01)
	char UnknownData_91[0x3]; // 0x91(0x03)
	float DistanceThreshold; // 0x94(0x04)
};

// Class Killstreak.KSBTD_EquipmentState
// Size: 0xf8 (Inherited: 0x68)
struct UKSBTD_EquipmentState : public UBTDecorator {
	struct FGameplayTag EquipPoint; // 0x68(0x08)
	bool bCheckIsEquipped; // 0x70(0x01)
	char IsEquipped; // 0x71(0x01)
	bool bCheckIsActiveWeapon; // 0x72(0x01)
	char IsActiveWeapon; // 0x73(0x01)
	bool bCheckIsReloading; // 0x74(0x01)
	char IsReloading; // 0x75(0x01)
	bool bCheckEquipmentType; // 0x76(0x01)
	char EquipmentType; // 0x77(0x01)
	struct FGameplayTagContainer ComparedEquipmentTypes; // 0x78(0x20)
	bool bCheckEquipmentClass; // 0x98(0x01)
	char EquipmentClassComparison; // 0x99(0x01)
	char UnknownData_9A[0x6]; // 0x9a(0x06)
	SoftClassProperty ComparedEquipmentClass; // 0xa0(0x28)
	bool bCheckComponentClass; // 0xc8(0x01)
	char ComponentClassComparison; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)
	SoftClassProperty ComparedComponentClass; // 0xd0(0x28)
};

// Class Killstreak.KSBTD_GameState
// Size: 0x78 (Inherited: 0x68)
struct UKSBTD_GameState : public UBTDecorator {
	bool bCheckMatchInProgress; // 0x68(0x01)
	char MatchInProgress; // 0x69(0x01)
	bool bCheckMatchPhase; // 0x6a(0x01)
	char MatchPhase; // 0x6b(0x01)
	struct FName MatchPhaseName; // 0x6c(0x08)
	char UnknownData_74[0x4]; // 0x74(0x04)
};

// Class Killstreak.KSBTD_HasAmmo
// Size: 0x80 (Inherited: 0x68)
struct UKSBTD_HasAmmo : public UBTDecorator {
	struct FGameplayTag EquipPoint; // 0x68(0x08)
	char ClipOperation; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	float ClipPercentage; // 0x74(0x04)
	bool bOrCheck; // 0x78(0x01)
	char InventoryOperation; // 0x79(0x01)
	char UnknownData_7A[0x2]; // 0x7a(0x02)
	float InventoryPercentage; // 0x7c(0x04)
};

// Class Killstreak.KSBTD_HasBeenHitRecently
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_HasBeenHitRecently : public UBTDecorator {
	float MaxTimeSinceHit; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Killstreak.KSBTD_HasSwappedEquipment
// Size: 0x90 (Inherited: 0x68)
struct UKSBTD_HasSwappedEquipment : public UBTDecorator {
	struct FBlackboardKeySelector CachedWeaponClassKey; // 0x68(0x28)
};

// Class Killstreak.KSBTD_InteractableState
// Size: 0xa8 (Inherited: 0x90)
struct UKSBTD_InteractableState : public UBTDecorator_BlackboardBase {
	struct FKSInteractableStateFilter InteractableStateFilter; // 0x90(0x18)
};

// Class Killstreak.KSBTD_IsActionAllowed
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_IsActionAllowed : public UBTDecorator {
	struct UKSBTAction* Action; // 0x68(0x08)
};

// Class Killstreak.KSBTD_IsApproachingDropLocation
// Size: 0xb8 (Inherited: 0x68)
struct UKSBTD_IsApproachingDropLocation : public UBTDecorator {
	struct FBlackboardKeySelector DropLocationKey; // 0x68(0x28)
	struct FBlackboardKeySelector DropLocationVectorKey; // 0x90(0x28)
};

// Class Killstreak.KSBTD_IsApproachingFall
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_IsApproachingFall : public UBTDecorator {
	float LookAheadDistance; // 0x68(0x04)
	float FallDistance; // 0x6c(0x04)
};

// Class Killstreak.KSBTD_IsGameMode
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_IsGameMode : public UBTDecorator {
	struct AGameModeBase* GameModeClass; // 0x68(0x08)
};

// Class Killstreak.KSBTD_IsWeaponFiring
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_IsWeaponFiring : public UBTDecorator {
	struct FGameplayTag EquipPoint; // 0x68(0x08)
};

// Class Killstreak.KSBTD_IsWeaponReady
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_IsWeaponReady : public UBTDecorator {
	struct FGameplayTag EquipPoint; // 0x68(0x08)
};

// Class Killstreak.KSBTD_ItemDropState
// Size: 0xa0 (Inherited: 0x90)
struct UKSBTD_ItemDropState : public UBTDecorator_BlackboardBase {
	struct FKSItemDropStateFilter ItemDropStateFilter; // 0x90(0x10)
};

// Class Killstreak.KSBTD_NearbyEnemyCount
// Size: 0x88 (Inherited: 0x68)
struct UKSBTD_NearbyEnemyCount : public UBTDecorator {
	struct TArray<struct UAISense*> SensesToUse; // 0x68(0x10)
	char ArithmeticOperation; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	int32_t EnemyCount; // 0x7c(0x04)
	float DistanceThreshold; // 0x80(0x04)
	bool bCheckLOS; // 0x84(0x01)
	char UnknownData_85[0x3]; // 0x85(0x03)
};

// Class Killstreak.KSBTD_RandomCooldown
// Size: 0x70 (Inherited: 0x68)
struct UKSBTD_RandomCooldown : public UBTDecorator {
	float MinCoolDownTime; // 0x68(0x04)
	float MaxCoolDownTime; // 0x6c(0x04)
};

// Class Killstreak.KSBTD_ShouldCrouchAtPoint
// Size: 0x90 (Inherited: 0x68)
struct UKSBTD_ShouldCrouchAtPoint : public UBTDecorator {
	struct FBlackboardKeySelector PointKey; // 0x68(0x28)
};

// Class Killstreak.KSBTD_WillActiveGrenadeHitTarget
// Size: 0x98 (Inherited: 0x90)
struct UKSBTD_WillActiveGrenadeHitTarget : public UBTDecorator_BlackboardBase {
	float OverrideMinRadius; // 0x90(0x04)
	char UnknownData_94[0x4]; // 0x94(0x04)
};

// Class Killstreak.KSBTDifficulty
// Size: 0x40 (Inherited: 0x30)
struct UKSBTDifficulty : public UDataAsset {
	struct FString DifficultyName; // 0x30(0x10)
};

// Class Killstreak.KSBTObjective
// Size: 0x70 (Inherited: 0x30)
struct UKSBTObjective : public UDataAsset {
	struct FString ObjectiveName; // 0x30(0x10)
	struct FString ObjectiveTargetKeyName; // 0x40(0x10)
	struct TArray<struct UKSBTAction*> RequiredActions; // 0x50(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> RequiredAbilities; // 0x60(0x10)
};

// Class Killstreak.KSBTTargetSelector
// Size: 0x1a0 (Inherited: 0x30)
struct UKSBTTargetSelector : public UDataAsset {
	struct TArray<struct UAISense*> SensesToUse; // 0x30(0x10)
	struct FKSPerceptionFilter PerceptionFilter; // 0x40(0x158)
	bool SelectCombatTargetOfResult; // 0x198(0x01)
	bool SelectClosestTarget; // 0x199(0x01)
	bool SelectFurthestTarget; // 0x19a(0x01)
	bool SelectRandomTarget; // 0x19b(0x01)
	char UnknownData_19C[0x4]; // 0x19c(0x04)
};

// Class Killstreak.KSBTTask_ActivateAbility
// Size: 0x98 (Inherited: 0x70)
struct UKSBTTask_ActivateAbility : public UBTTaskNode {
	struct TSoftObjectPtr<struct UKSPlayerMod> ActivatedAbility; // 0x70(0x28)
};

// Class Killstreak.KSBTTask_LookAt
// Size: 0xc0 (Inherited: 0xa0)
struct UKSBTTask_LookAt : public UBTTask_RotateToFaceBBEntry {
	char UnknownData_A0[0x4]; // 0xa0(0x04)
	float LookRotationRate; // 0xa4(0x04)
	struct FRotator HorizonAngle; // 0xa8(0x0c)
	int32_t CorridorSmoothingCount; // 0xb4(0x04)
	int32_t FirstCorridorIndex; // 0xb8(0x04)
	char UnknownData_BC[0x4]; // 0xbc(0x04)
};

// Class Killstreak.KSBTTask_AimAt
// Size: 0xd8 (Inherited: 0xc0)
struct UKSBTTask_AimAt : public UKSBTTask_LookAt {
	float AimRadius; // 0xc0(0x04)
	struct FVector AimOffset; // 0xc4(0x0c)
	float AimAheadSeconds; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
};

// Class Killstreak.KSBTTask_CopyActorLocation
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_CopyActorLocation : public UBTTaskNode {
	struct FBlackboardKeySelector ActorKey; // 0x70(0x28)
	struct FBlackboardKeySelector LocationKey; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_CopyObjectFacingVector
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_CopyObjectFacingVector : public UBTTaskNode {
	struct FBlackboardKeySelector CopyTarget; // 0x70(0x28)
	struct FBlackboardKeySelector FacingVector; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_GetNavigationInteractTarget
// Size: 0x98 (Inherited: 0x70)
struct UKSBTTask_GetNavigationInteractTarget : public UBTTaskNode {
	struct FBlackboardKeySelector InteractTarget; // 0x70(0x28)
};

// Class Killstreak.KSBTTask_GetRotationFromPoint
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_GetRotationFromPoint : public UBTTaskNode {
	struct FBlackboardKeySelector MapPointActorKey; // 0x70(0x28)
	struct FBlackboardKeySelector MapPointRotationKey; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_InteractWith
// Size: 0xa0 (Inherited: 0x98)
struct UKSBTTask_InteractWith : public UBTTask_BlackboardBase {
	bool ShouldHold; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class Killstreak.KSBTTask_LeaveDefensePoint
// Size: 0x98 (Inherited: 0x70)
struct UKSBTTask_LeaveDefensePoint : public UBTTaskNode {
	struct FBlackboardKeySelector DefensePoint; // 0x70(0x28)
};

// Class Killstreak.KSBTTask_LookInDirection
// Size: 0xa0 (Inherited: 0x70)
struct UKSBTTask_LookInDirection : public UBTTaskNode {
	struct FBlackboardKeySelector DirectionKey; // 0x70(0x28)
	float LookRotationRate; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class Killstreak.KSBTTask_MakeNoiseEvent
// Size: 0x80 (Inherited: 0x70)
struct UKSBTTask_MakeNoiseEvent : public UBTTaskNode {
	float Loudness; // 0x70(0x04)
	struct FName EventTag; // 0x74(0x08)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// Class Killstreak.KSBTTask_MoveToBlackboard
// Size: 0xf0 (Inherited: 0xb0)
struct UKSBTTask_MoveToBlackboard : public UBTTask_MoveTo {
	float SpeedMultiplier; // 0xb0(0x04)
	bool bSprint; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
	struct UKSBTAction* MoveAction; // 0xb8(0x08)
	struct UKSBTAction* SprintAction; // 0xc0(0x08)
	struct FBlackboardKeySelector AcceptableRadiusOverrideKey; // 0xc8(0x28)
};

// Class Killstreak.KSBTTask_MoveToward
// Size: 0xd0 (Inherited: 0xb8)
struct UKSBTTask_MoveToward : public UBTTask_MoveDirectlyToward {
	float SpeedMultiplier; // 0xb8(0x04)
	bool bSprint; // 0xbc(0x01)
	char UnknownData_BD[0x3]; // 0xbd(0x03)
	struct UKSBTAction* MoveAction; // 0xc0(0x08)
	struct UKSBTAction* SprintAction; // 0xc8(0x08)
};

// Class Killstreak.KSBTTask_PerformRandomDodgeRoll
// Size: 0xa0 (Inherited: 0x70)
struct UKSBTTask_PerformRandomDodgeRoll : public UBTTask_PawnActionBase {
	struct TArray<float> PreferredAngles; // 0x70(0x10)
	struct TArray<float> SecondaryAngles; // 0x80(0x10)
	float MinDodgeRollMovementPercent; // 0x90(0x04)
	float DodgeRollCheckDistance; // 0x94(0x04)
	float MaximumHeightChangePerCheckDistance; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class Killstreak.KSBTTask_PlayVO
// Size: 0x80 (Inherited: 0x70)
struct UKSBTTask_PlayVO : public UBTTaskNode {
	struct FGameplayTag VOEvent; // 0x70(0x08)
	float ChanceToPlay; // 0x78(0x04)
	char UnknownData_7C[0x4]; // 0x7c(0x04)
};

// Class Killstreak.KSBTTask_RandomizeWayPointDefensePoint
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_RandomizeWayPointDefensePoint : public UBTTaskNode {
	struct FBlackboardKeySelector WayPoint; // 0x70(0x28)
	struct FBlackboardKeySelector DefensePoint; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_RunBehaviorForTarget
// Size: 0x168 (Inherited: 0x78)
struct UKSBTTask_RunBehaviorForTarget : public UBTTask_RunBehavior {
	struct TArray<struct FBlackboardKeySelector> SourceKeyVector; // 0x78(0x10)
	struct TArray<struct FBlackboardKeySelector> TargetKeyVector; // 0x88(0x10)
	struct TArray<float> SourceFloatVector; // 0x98(0x10)
	struct TArray<struct FBlackboardKeySelector> TargetFloatKeyVector; // 0xa8(0x10)
	struct TArray<bool> TempBools; // 0xb8(0x10)
	struct TArray<struct UObject*> TempClasses; // 0xc8(0x10)
	struct TArray<char> TempEnums; // 0xd8(0x10)
	struct TArray<float> TempFloats; // 0xe8(0x10)
	struct TArray<int32_t> TempInts; // 0xf8(0x10)
	struct TArray<struct FName> TempNames; // 0x108(0x10)
	struct TArray<char> TempNativeEnums; // 0x118(0x10)
	struct TArray<struct UObject*> TempObjects; // 0x128(0x10)
	struct TArray<struct FRotator> TempRotators; // 0x138(0x10)
	struct TArray<struct FString> TempStrings; // 0x148(0x10)
	struct TArray<struct FVector> TempVectors; // 0x158(0x10)
};

// Class Killstreak.KSBTTask_SelectBlackboardTarget
// Size: 0x200 (Inherited: 0x70)
struct UKSBTTask_SelectBlackboardTarget : public UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
	struct TArray<struct UAISense*> SensesToUse; // 0x98(0x10)
	struct FKSPerceptionFilter PerceptionFilter; // 0xa8(0x158)
};

// Class Killstreak.KSBTTask_SelectDefensePoint
// Size: 0x98 (Inherited: 0x70)
struct UKSBTTask_SelectDefensePoint : public UBTTaskNode {
	struct FBlackboardKeySelector DefensePointActorKey; // 0x70(0x28)
};

// Class Killstreak.KSBTTask_SelectDropLocation
// Size: 0xf0 (Inherited: 0x70)
struct UKSBTTask_SelectDropLocation : public UBTTaskNode {
	bool InitializeDropLocation; // 0x70(0x01)
	bool InitializeWayPointSet; // 0x71(0x01)
	char UnknownData_72[0x6]; // 0x72(0x06)
	struct FBlackboardKeySelector DropLocationKey; // 0x78(0x28)
	struct FBlackboardKeySelector DropLocationVectorKey; // 0xa0(0x28)
	struct FBlackboardKeySelector FlightLocationVectorKey; // 0xc8(0x28)
};

// Class Killstreak.KSBTTask_SelectEvadePoint
// Size: 0x208 (Inherited: 0x70)
struct UKSBTTask_SelectEvadePoint : public UBTTaskNode {
	struct FBlackboardKeySelector EvadePointKey; // 0x70(0x28)
	struct TArray<struct UAISense*> SensesToUse; // 0x98(0x10)
	struct FKSPerceptionFilter PerceptionFilter; // 0xa8(0x158)
	float Distance; // 0x200(0x04)
	char UnknownData_204[0x4]; // 0x204(0x04)
};

// Class Killstreak.KSBTTask_SelectIngressPoint
// Size: 0xa0 (Inherited: 0x70)
struct UKSBTTask_SelectIngressPoint : public UBTTaskNode {
	struct FBlackboardKeySelector IngressPointActorKey; // 0x70(0x28)
	bool bShouldLeave; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class Killstreak.KSBTTask_SelectObjective
// Size: 0xe8 (Inherited: 0x70)
struct UKSBTTask_SelectObjective : public UBTTaskNode {
	struct FBlackboardKeySelector ObjectiveTargetKey; // 0x70(0x28)
	struct FBlackboardKeySelector ObjectiveTypeKey; // 0x98(0x28)
	struct TArray<struct UKSBTObjective*> BlackboardKeyObjectives; // 0xc0(0x10)
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct UKSBTObjective* CurrentHighestPriorityObjective; // 0xd8(0x08)
	struct AActor* CurrentHighestPriorityActor; // 0xe0(0x08)
};

// Class Killstreak.KSBTTask_SelectTargetOfTarget
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_SelectTargetOfTarget : public UBTTaskNode {
	struct FBlackboardKeySelector CopyTarget; // 0x70(0x28)
	struct FBlackboardKeySelector KeyToCopy; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_SetBehaviorState
// Size: 0x78 (Inherited: 0x70)
struct UKSBTTask_SetBehaviorState : public UBTTaskNode {
	enum class ECharacterBehaviorState BehaviorState; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Killstreak.KSBTTask_SetBetweenBlackboards
// Size: 0x110 (Inherited: 0x70)
struct UKSBTTask_SetBetweenBlackboards : public UBTTaskNode {
	struct FBlackboardKeySelector SourceBlackboardActor; // 0x70(0x28)
	struct FBlackboardKeySelector SourceKey; // 0x98(0x28)
	struct FBlackboardKeySelector TargetBlackboardActor; // 0xc0(0x28)
	struct FBlackboardKeySelector TargetKey; // 0xe8(0x28)
};

// Class Killstreak.KSBTTask_SetBoolOnBlackboard
// Size: 0xa0 (Inherited: 0x98)
struct UKSBTTask_SetBoolOnBlackboard : public UBTTask_BlackboardBase {
	bool BoolValue; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)
};

// Class Killstreak.KSBTTask_SetFloatOnBlackboard
// Size: 0xa0 (Inherited: 0x98)
struct UKSBTTask_SetFloatOnBlackboard : public UBTTask_BlackboardBase {
	float FloatValue; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

// Class Killstreak.KSBTTask_SetObjectiveOnBlackboard
// Size: 0xa0 (Inherited: 0x98)
struct UKSBTTask_SetObjectiveOnBlackboard : public UBTTask_BlackboardBase {
	struct UKSBTObjective* Objective; // 0x98(0x08)
};

// Class Killstreak.KSBTTask_SetTimer
// Size: 0xa0 (Inherited: 0x98)
struct UKSBTTask_SetTimer : public UBTTask_BlackboardBase {
	float Duration; // 0x98(0x04)
	float RandomDeviation; // 0x9c(0x04)
};

// Class Killstreak.KSBTTask_SetWaypointDefenseTimer
// Size: 0xc0 (Inherited: 0x70)
struct UKSBTTask_SetWaypointDefenseTimer : public UBTTaskNode {
	struct FBlackboardKeySelector WayPoint; // 0x70(0x28)
	struct FBlackboardKeySelector DefenseTimer; // 0x98(0x28)
};

// Class Killstreak.KSBTTask_SetWeaponRanges
// Size: 0xd0 (Inherited: 0x70)
struct UKSBTTask_SetWeaponRanges : public UBTTaskNode {
	struct UDataTable* WeaponRangeConfigTable; // 0x70(0x08)
	struct FGameplayTag EquipPoint; // 0x78(0x08)
	struct FBlackboardKeySelector IdealAttackRangeKey; // 0x80(0x28)
	struct FBlackboardKeySelector StartAttackRangeKey; // 0xa8(0x28)
};

// Class Killstreak.KSBTTask_SkydiveToward
// Size: 0x100 (Inherited: 0xd0)
struct UKSBTTask_SkydiveToward : public UKSBTTask_MoveToward {
	struct FBlackboardKeySelector TargetSkydiveLocation; // 0xd0(0x28)
	float BlendStartDistance; // 0xf8(0x04)
	float BlendEndDistance; // 0xfc(0x04)
};

// Class Killstreak.KSBTTask_Strafe
// Size: 0x108 (Inherited: 0xf0)
struct UKSBTTask_Strafe : public UKSBTTask_MoveToBlackboard {
	float DirectionAngleMax; // 0xf0(0x04)
	float DirectionAngleMin; // 0xf4(0x04)
	bool bInvertAngle; // 0xf8(0x01)
	char UnknownData_F9[0x3]; // 0xf9(0x03)
	float MinDistance; // 0xfc(0x04)
	float MaxDistance; // 0x100(0x04)
	char UnknownData_104[0x4]; // 0x104(0x04)
};

// Class Killstreak.KSBTTask_UpdateCachedWeapon
// Size: 0x98 (Inherited: 0x70)
struct UKSBTTask_UpdateCachedWeapon : public UBTTaskNode {
	struct FBlackboardKeySelector CachedWeaponClassKey; // 0x70(0x28)
};

// Class Killstreak.KSBTTask_WeaponDistanceChecks
// Size: 0x168 (Inherited: 0x70)
struct UKSBTTask_WeaponDistanceChecks : public UBTTaskNode {
	float IntervalCheckRangeMeters; // 0x70(0x04)
	char UnknownData_74[0x4]; // 0x74(0x04)
	struct FBlackboardKeySelector CombatTargetKey; // 0x78(0x28)
	struct FBlackboardKeySelector IdealAttackRangeKey; // 0xa0(0x28)
	struct FBlackboardKeySelector StartAttackRangeKey; // 0xc8(0x28)
	struct FBlackboardKeySelector InIdealRangeKey; // 0xf0(0x28)
	struct FBlackboardKeySelector InAttackRangeKey; // 0x118(0x28)
	struct FBlackboardKeySelector TooCloseKey; // 0x140(0x28)
};

// Class Killstreak.KSBTTaskNode_SetCrowdFollowing
// Size: 0x78 (Inherited: 0x70)
struct UKSBTTaskNode_SetCrowdFollowing : public UBTTaskNode {
	bool bEnable; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// Class Killstreak.KSBuild
// Size: 0x350 (Inherited: 0x260)
struct AKSBuild : public AKSLagCompensatedActor {
	char UnknownData_260[0x30]; // 0x260(0x30)
	float PointDamageMultiplier; // 0x290(0x04)
	float RadialDamageMultiplier; // 0x294(0x04)
	float MaxHealth; // 0x298(0x04)
	float Health; // 0x29c(0x04)
	float SelfDestructDelay; // 0x2a0(0x04)
	float KillDestructionDelay; // 0x2a4(0x04)
	char UnknownData_2A8[0x10]; // 0x2a8(0x10)
	struct UBoxComponent* Box; // 0x2b8(0x08)
	struct UKSNavModifierComponent* KSNavModifierComponent; // 0x2c0(0x08)
	struct FMulticastInlineDelegate OnBuildComponentDestroyedDel; // 0x2c8(0x10)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x2d8(0x08)
	struct FMulticastInlineDelegate OnBuildReclaim; // 0x2e0(0x10)
	bool bCanReclaim; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	struct FVector RelativeInteractionPoint; // 0x2f4(0x0c)
	float ReclaimTime; // 0x300(0x04)
	bool bRestoreWeaponOnReclaim; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	struct UKSWeaponAsset_Build* WeaponToRestore; // 0x308(0x08)
	struct FText ReclaimItemName; // 0x310(0x18)
	struct UKSInteractionType* ReclaimInteractionType; // 0x328(0x08)
	bool bBeingReclaimed; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x338(0x08)
	char UnknownData_340[0x8]; // 0x340(0x08)
	int32_t OriginalOwnerId; // 0x348(0x04)
	char UnknownData_34C[0x4]; // 0x34c(0x04)

	void YieldToRealTimerExpired(); // Function Killstreak.KSBuild.YieldToRealTimerExpired
	void SelfDestructAfterDelay(); // Function Killstreak.KSBuild.SelfDestructAfterDelay
	void SelfDestruct(); // Function Killstreak.KSBuild.SelfDestruct
	void OnSelfDestructDelayStart(); // Function Killstreak.KSBuild.OnSelfDestructDelayStart
	void OnSelfDestruct(); // Function Killstreak.KSBuild.OnSelfDestruct
	void OnRep_Health(); // Function Killstreak.KSBuild.OnRep_Health
	void OnRadialDamageTaken(struct UDamageType* DamageType); // Function Killstreak.KSBuild.OnRadialDamageTaken
	void OnPointDamageTaken(struct UDamageType* DamageType, struct UPrimitiveComponent* PrimitiveComponent, struct FName HitBone); // Function Killstreak.KSBuild.OnPointDamageTaken
	void OnKilled(); // Function Killstreak.KSBuild.OnKilled
	void OnHealthChanged(); // Function Killstreak.KSBuild.OnHealthChanged
	void OnBuildComponentDestroyed(struct UPrimitiveComponent* PrimitiveComponent); // Function Killstreak.KSBuild.OnBuildComponentDestroyed
	void KillDestructionTimerComplete(); // Function Killstreak.KSBuild.KillDestructionTimerComplete
	float GetRealActorTakeoverDelay(); // Function Killstreak.KSBuild.GetRealActorTakeoverDelay
	struct AKSPlayerState* GetPlayerStateOwner(); // Function Killstreak.KSBuild.GetPlayerStateOwner
	void GetOutlineableMeshes(struct TArray<struct UPrimitiveComponent*> OutMeshes); // Function Killstreak.KSBuild.GetOutlineableMeshes
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSBuild.GetCharacterOwner
	struct UKSWeaponAsset_Build* GetBuildWeaponAsset(); // Function Killstreak.KSBuild.GetBuildWeaponAsset
	void DestroyBuildComponent(struct UPrimitiveComponent* PrimitiveComponent); // Function Killstreak.KSBuild.DestroyBuildComponent
	float ComponentTakeDamage(struct UPrimitiveComponent* PrimitiveComponent, float DamageAmount); // Function Killstreak.KSBuild.ComponentTakeDamage
	void BroadcastSelfDestructStart(); // Function Killstreak.KSBuild.BroadcastSelfDestructStart
	void BroadcastSelfDestruct(); // Function Killstreak.KSBuild.BroadcastSelfDestruct
	void BroadcastDestroyBuildComponent(struct UPrimitiveComponent* PrimitiveComponent); // Function Killstreak.KSBuild.BroadcastDestroyBuildComponent
};

// Class Killstreak.KSBuild_APS
// Size: 0x388 (Inherited: 0x350)
struct AKSBuild_APS : public AKSBuild {
	char UnknownData_350[0x8]; // 0x350(0x08)
	struct USphereComponent* DetectionSphere; // 0x358(0x08)
	float DetectionSphereRadius; // 0x360(0x04)
	int32_t MaxProjectilesDestroyed; // 0x364(0x04)
	float TimeToActivate; // 0x368(0x04)
	char UnknownData_36C[0x4]; // 0x36c(0x04)
	struct TArray<struct AKSProjectile*> MarkedProjectiles; // 0x370(0x10)
	char UnknownData_380[0x4]; // 0x380(0x04)
	bool bIsActive; // 0x384(0x01)
	char UnknownData_385[0x3]; // 0x385(0x03)

	void OnRep_Active(); // Function Killstreak.KSBuild_APS.OnRep_Active
	void OnProjectileIntercepted(struct FVector InterceptedProjectileLocation); // Function Killstreak.KSBuild_APS.OnProjectileIntercepted
	void OnMarkedProjectileDestroyed(struct AActor* InActor); // Function Killstreak.KSBuild_APS.OnMarkedProjectileDestroyed
	void OnDeactivated(); // Function Killstreak.KSBuild_APS.OnDeactivated
	void OnActorOverlapBegin(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Killstreak.KSBuild_APS.OnActorOverlapBegin
	void OnActivated(); // Function Killstreak.KSBuild_APS.OnActivated
	void BroadcastProjectileIntercept(struct AKSProjectile* DestroyedProjectile, struct FVector BackupLocation); // Function Killstreak.KSBuild_APS.BroadcastProjectileIntercept
};

// Class Killstreak.KSBuildPreview
// Size: 0x238 (Inherited: 0x220)
struct AKSBuildPreview : public AActor {
	struct UMaterialInterface* ValidBuildMaterial; // 0x220(0x08)
	struct UMaterialInterface* InvalidBuildMaterial; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)
};

// Class Killstreak.KSCash
// Size: 0x188 (Inherited: 0x168)
struct UKSCash : public UKSItem {
	int32_t Amount; // 0x168(0x04)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct FText CashReasonText; // 0x170(0x18)
};

// Class Killstreak.KSCashDrop
// Size: 0x368 (Inherited: 0x360)
struct AKSCashDrop : public AKSItemDrop {
	int32_t Amount; // 0x360(0x04)
	char UnknownData_364[0x4]; // 0x364(0x04)
};

// Class Killstreak.KSCashExtractionPoint
// Size: 0x4c0 (Inherited: 0x380)
struct AKSCashExtractionPoint : public AKSObjectiveBase {
	char UnknownData_380[0x8]; // 0x380(0x08)
	int32_t ContainedCash; // 0x388(0x04)
	char UnknownData_38C[0x4]; // 0x38c(0x04)
	struct FPGame_ReplicatedTimer ReplicatedStateTimer; // 0x390(0x38)
	char UnknownData_3C8[0x10]; // 0x3c8(0x10)
	float UpdateReplicatedTimerPeriod; // 0x3d8(0x04)
	float PreparingStateDuration; // 0x3dc(0x04)
	float DepositingStateDuration; // 0x3e0(0x04)
	float ExtractedStateDuration; // 0x3e4(0x04)
	float CooldownStateDuration; // 0x3e8(0x04)
	char UnknownData_3EC[0x4]; // 0x3ec(0x04)
	struct FText CallInInteractionPrompt; // 0x3f0(0x18)
	struct FText CallInInteractionProgressText; // 0x408(0x18)
	struct FText DepositInteractionPrompt; // 0x420(0x18)
	struct FText DepositInteractionProgressText; // 0x438(0x18)
	struct FText CancelInteractionPrompt; // 0x450(0x18)
	struct FText CancelInteractionProgressText; // 0x468(0x18)
	struct USphereComponent* InteractionRangeSphereComponent; // 0x480(0x08)
	float CallInInteractDuration; // 0x488(0x04)
	float DepositInteractDuration; // 0x48c(0x04)
	float CancelInteractDuration; // 0x490(0x04)
	char UnknownData_494[0x4]; // 0x494(0x04)
	struct TArray<struct AKSCharacter*> Interactors; // 0x498(0x10)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x4a8(0x08)
	char UnknownData_4B0[0x10]; // 0x4b0(0x10)

	void StateTimerExpired(); // Function Killstreak.KSCashExtractionPoint.StateTimerExpired
	bool ShouldShowLabel(); // Function Killstreak.KSCashExtractionPoint.ShouldShowLabel
	void OnRep_ContainedCash(); // Function Killstreak.KSCashExtractionPoint.OnRep_ContainedCash
	void HideCashPoint(); // Function Killstreak.KSCashExtractionPoint.HideCashPoint
	void GetRemainingTimeInState(float RemainingTime, float TotalDuration); // Function Killstreak.KSCashExtractionPoint.GetRemainingTimeInState
	void ActivateCashPoint(); // Function Killstreak.KSCashExtractionPoint.ActivateCashPoint
};

// Class Killstreak.KSCharacterBase
// Size: 0xba0 (Inherited: 0x4c0)
struct AKSCharacterBase : public ACharacter {
	char UnknownData_4C0[0x18]; // 0x4c0(0x18)
	struct FMulticastInlineDelegate OnTakeArmorDamage; // 0x4d8(0x10)
	char UnknownData_4E8[0x18]; // 0x4e8(0x18)
	struct FMulticastInlineDelegate OnHealthChangedDel; // 0x500(0x10)
	char UnknownData_510[0x18]; // 0x510(0x18)
	float HealthRegenerationPerSecond; // 0x528(0x04)
	float HealthRegenerationPeriod; // 0x52c(0x04)
	float HealthRegenerationDelay; // 0x530(0x04)
	char UnknownData_534[0x4]; // 0x534(0x04)
	struct FMulticastInlineDelegate OnHealthRegenDelayTimerActive; // 0x538(0x10)
	struct FMulticastInlineDelegate OnHealthRegenDelayTimerTick; // 0x548(0x10)
	struct FMulticastInlineDelegate OnHealthRegenDelayTimerComplete; // 0x558(0x10)
	struct UKSTimerComponent* HealthRegenDelayTimer; // 0x568(0x08)
	char UnknownData_570[0x8]; // 0x570(0x08)
	float CurrentOverheal; // 0x578(0x04)
	float OverhealDecayPerSecond; // 0x57c(0x04)
	float OverhealDecayPeriod; // 0x580(0x04)
	char UnknownData_584[0x24]; // 0x584(0x24)
	struct FMulticastInlineDelegate OnOverhealChanged; // 0x5a8(0x10)
	float QueuedMovementForgivenessPeriod; // 0x5b8(0x04)
	float QueuedMovementForgivenessEndTime; // 0x5bc(0x04)
	enum class EKSQueuedMovement CurrentQueuedMovement; // 0x5c0(0x01)
	char UnknownData_5C1[0x3]; // 0x5c1(0x03)
	struct FName FreeFallCollisionProfileName; // 0x5c4(0x08)
	char UnknownData_5CC[0x14]; // 0x5cc(0x14)
	struct UCameraShake* CurrentFreeFallCameraShake; // 0x5e0(0x08)
	struct UKSVelocityCameraShake* FreeFallCameraShake; // 0x5e8(0x08)
	struct FMulticastInlineDelegate OnEndFreeFallDel; // 0x5f0(0x10)
	bool bRealWantsCrouch; // 0x600(0x01)
	char UnknownData_601[0x7]; // 0x601(0x07)
	struct FMulticastInlineDelegate OnSprintChanged; // 0x608(0x10)
	bool bReplicatedSprinting; // 0x618(0x01)
	char UnknownData_619[0x3]; // 0x619(0x03)
	struct FVector_NetQuantizeNormal ReplicatedAccelDirection; // 0x61c(0x0c)
	struct FMulticastInlineDelegate OnPowerSlideChanged; // 0x628(0x10)
	struct FKSPowerSlideInfo bReplicatedPowerSlide; // 0x638(0x02)
	char UnknownData_63A[0x2]; // 0x63a(0x02)
	float DodgeRollDuration; // 0x63c(0x04)
	bool bReplicatedDodgeRoll; // 0x640(0x01)
	char UnknownData_641[0x7]; // 0x641(0x07)
	struct FMulticastInlineDelegate OnDOdgeRollChanged; // 0x648(0x10)
	char UnknownData_658[0x30]; // 0x658(0x30)
	struct FKSLungeInfo LungeInfo; // 0x688(0x10)
	struct FMulticastInlineDelegate OnLungeChanged; // 0x698(0x10)
	bool bReplicatedAbilityMovement; // 0x6a8(0x01)
	bool bReplicatedZipLineBracing; // 0x6a9(0x01)
	bool bReplicatedZipLineEnding; // 0x6aa(0x01)
	bool bReplicatedUpline; // 0x6ab(0x01)
	float SecondsAwayToBraceOnZipLine; // 0x6ac(0x04)
	float SecondsAwayToEndOnZipLine; // 0x6b0(0x04)
	char UnknownData_6B4[0x4]; // 0x6b4(0x04)
	struct FKSZipLineInfo ReplicatedZipLineInfo; // 0x6b8(0x10)
	bool bPrevPressedJump; // 0x6c8(0x01)
	char UnknownData_6C9[0x7]; // 0x6c9(0x07)
	struct FMulticastInlineDelegate OnJumpedDel; // 0x6d0(0x10)
	struct FMulticastInlineDelegate OnLandedDel; // 0x6e0(0x10)
	struct FMulticastInlineDelegate OnStartFallingDel; // 0x6f0(0x10)
	char UnknownData_700[0x16]; // 0x700(0x16)
	bool bReplicatedStun; // 0x716(0x01)
	char UnknownData_717[0x21]; // 0x717(0x21)
	bool bReplicatedHardLand; // 0x738(0x01)
	char UnknownData_739[0x37]; // 0x739(0x37)
	struct UCameraShake* CurrentSprintCameraShake; // 0x770(0x08)
	struct UKSSprintCameraShake* SprintCameraShake; // 0x778(0x08)
	struct UCameraShake* CurrentLandedCameraShake; // 0x780(0x08)
	struct UKSCharacterCameraShake* LandedCameraShake; // 0x788(0x08)
	struct FMulticastInlineDelegate OnAimStateChanged; // 0x790(0x10)
	struct USceneComponent* GrenadeThrowComponent; // 0x7a0(0x08)
	struct USceneComponent* MeleeThrowComponent; // 0x7a8(0x08)
	enum class EKSCharacterAimMode ReplicatedAimState; // 0x7b0(0x01)
	enum class EKSCharacterAimMode LastReplicatedAimState; // 0x7b1(0x01)
	bool bEnableSmoothedAimRotation; // 0x7b2(0x01)
	char UnknownData_7B3[0x1]; // 0x7b3(0x01)
	struct FReplicatedViewInfo ViewInfo; // 0x7b4(0x08)
	bool bUseCameraLagSubstepping; // 0x7bc(0x01)
	char UnknownData_7BD[0x3]; // 0x7bd(0x03)
	float CameraLagMaxTimeStep; // 0x7c0(0x04)
	float CameraRotationLagSpeed; // 0x7c4(0x04)
	struct FRotator PreviousDesiredRot; // 0x7c8(0x0c)
	struct FRotator SmoothedViewRotation; // 0x7d4(0x0c)
	bool bIsSmoothingAimRotation; // 0x7e0(0x01)
	char UnknownData_7E1[0x7]; // 0x7e1(0x07)
	struct FMulticastInlineDelegate OnKilled; // 0x7e8(0x10)
	struct FKSDeathInfo DeathInfo; // 0x7f8(0x28)
	struct UKSDamageTypeBase* InstantDeathDamageType; // 0x820(0x08)
	bool bRadialMiss; // 0x828(0x01)
	char UnknownData_829[0x7]; // 0x829(0x07)
	struct AKSCharacterBase* LastCharacterToDamageMe; // 0x830(0x08)
	char UnknownData_838[0x18]; // 0x838(0x18)
	struct FMulticastInlineDelegate OnDeathStateChangedDel; // 0x850(0x10)
	char UnknownData_860[0x38]; // 0x860(0x38)
	struct USphereComponent* HeadCollisionComponent; // 0x898(0x08)
	struct USkeletalMeshComponent* ZiplineMeshComponent; // 0x8a0(0x08)
	struct USkeletalMeshComponent* UplineMeshComponent; // 0x8a8(0x08)
	struct APlayerState* BackupPlayerState; // 0x8b0(0x08)
	char UnknownData_8B8[0x10]; // 0x8b8(0x10)
	struct FMulticastInlineDelegate OnPlayerStateChangedDel; // 0x8c8(0x10)
	char UnknownData_8D8[0x18]; // 0x8d8(0x18)
	struct TArray<struct FName> HeadBones; // 0x8f0(0x10)
	struct TArray<struct FName> LimbBones; // 0x900(0x10)
	struct TMap<struct FName, enum class EHitLocationType> CachedBoneToHitLocationType; // 0x910(0x50)
	struct TArray<struct FName> HeadshotPassthroughBones; // 0x960(0x10)
	float OutlineZFadeMin; // 0x970(0x04)
	float OutlineZFadeMax; // 0x974(0x04)
	struct FLinearColor RevealedOutlineColorFriendly; // 0x978(0x10)
	struct FLinearColor RevealedOutlineColorEnemy; // 0x988(0x10)
	struct FLinearColor SpawnImmuneOutlineColorEnemy; // 0x998(0x10)
	float FriendlyOutlineFadeDistanceMin; // 0x9a8(0x04)
	float FriendlyOutlineFadeDistanceMax; // 0x9ac(0x04)
	bool bReevaluateSilhouetteNextTick; // 0x9b0(0x01)
	bool bForceSilhouette; // 0x9b1(0x01)
	enum class EPlayerSilhouetteType ForcedSilhouetteType; // 0x9b2(0x01)
	bool bForcedFillSilhouette; // 0x9b3(0x01)
	bool bForcedMarkSilhouette; // 0x9b4(0x01)
	enum class EPlayerSilhouetteType SilhouetteType; // 0x9b5(0x01)
	bool bFillSilhouette; // 0x9b6(0x01)
	bool bMarkSilhouette; // 0x9b7(0x01)
	char UnknownData_9B8[0x10]; // 0x9b8(0x10)
	bool bSilhouetteComponentsDirty; // 0x9c8(0x01)
	char UnknownData_9C9[0x7]; // 0x9c9(0x07)
	struct TArray<struct UPrimitiveComponent*> CachedSilhouetteComponents; // 0x9d0(0x10)
	struct FMulticastInlineDelegate OnRevealChanged; // 0x9e0(0x10)
	struct FKSMantleInfo ReplicatedMantleInfo; // 0x9f0(0x44)
	char UnknownData_A34[0x4]; // 0xa34(0x04)
	struct FMulticastInlineDelegate OnMantleChanged; // 0xa38(0x10)
	char UnknownData_A48[0x18]; // 0xa48(0x18)
	bool CachedAimAssistVisibility; // 0xa60(0x01)
	char UnknownData_A61[0x3]; // 0xa61(0x03)
	float NextValidAimAssistVisibiltyTime; // 0xa64(0x04)
	bool bCanEverBeConsideredForAimAssist; // 0xa68(0x01)
	char UnknownData_A69[0x3]; // 0xa69(0x03)
	struct FName InteractionState; // 0xa6c(0x08)
	float InteractionHeight; // 0xa74(0x04)
	float InteractionTime; // 0xa78(0x04)
	char UnknownData_A7C[0x34]; // 0xa7c(0x34)
	struct FMulticastInlineDelegate OnSwimmingChangedDel; // 0xab0(0x10)
	struct FMulticastInlineDelegate OnSubmergedChangedDel; // 0xac0(0x10)
	struct FMulticastInlineDelegate OnBreathUpdate; // 0xad0(0x10)
	bool bIsSubmerged; // 0xae0(0x01)
	char UnknownData_AE1[0x3]; // 0xae1(0x03)
	float MaximumLungCapacity; // 0xae4(0x04)
	float CurrentLungCapacity; // 0xae8(0x04)
	float LungCapacityRecoveryTime; // 0xaec(0x04)
	bool bDestroyOnRoundSetup; // 0xaf0(0x01)
	char RoundCreated; // 0xaf1(0x01)
	char UnknownData_AF2[0x1e]; // 0xaf2(0x1e)
	bool bIgnoreCollisionWithTeammates; // 0xb10(0x01)
	char UnknownData_B11[0x7]; // 0xb11(0x07)
	struct TMap<struct FName, struct FKSCharacterSocketInfo> CharacterSockets; // 0xb18(0x50)
	struct AKSCharacterBase* TeammateToNudge; // 0xb68(0x08)
	struct FMulticastInlineDelegate OnEmoteStartedPlaying; // 0xb70(0x10)
	struct FMulticastInlineDelegate OnEmoteStoppedPlaying; // 0xb80(0x10)
	bool bIsSpawnImmune; // 0xb90(0x01)
	char UnknownData_B91[0xf]; // 0xb91(0x0f)

	void UpdateDebugHealthVisibility(); // Function Killstreak.KSCharacterBase.UpdateDebugHealthVisibility
	void UnSubmerge(bool bClientSimulation); // Function Killstreak.KSCharacterBase.UnSubmerge
	void Submerge(bool bClientSimulation); // Function Killstreak.KSCharacterBase.Submerge
	void StopSprint(bool bInterrupted); // Function Killstreak.KSCharacterBase.StopSprint
	void StopRegenerationTimers(); // Function Killstreak.KSCharacterBase.StopRegenerationTimers
	void StartSprint(); // Function Killstreak.KSCharacterBase.StartSprint
	struct UCameraShake* StartCameraShake(struct UCameraShake* ShakeClass); // Function Killstreak.KSCharacterBase.StartCameraShake
	void ShowDebugLocation(bool bVisible); // Function Killstreak.KSCharacterBase.ShowDebugLocation
	void SetRevealed(bool Reveal); // Function Killstreak.KSCharacterBase.SetRevealed
	void SetHealth(float NewHealth); // Function Killstreak.KSCharacterBase.SetHealth
	void RevealToWholeTeam(float Duration, struct AController* Revealer, float Delay, enum class EPlayerSilhouetteType Type, bool Fill, bool Mark); // Function Killstreak.KSCharacterBase.RevealToWholeTeam
	void RevealForDuration(float RevealTime); // Function Killstreak.KSCharacterBase.RevealForDuration
	struct FRevealInfo Reveal(float Duration, struct AController* Revealer, enum class EPlayerSilhouetteType Type, bool Fill, bool Mark); // Function Killstreak.KSCharacterBase.Reveal
	void ResetHealthRegeneration(); // Function Killstreak.KSCharacterBase.ResetHealthRegeneration
	void ResetHealthRegenDelay(); // Function Killstreak.KSCharacterBase.ResetHealthRegenDelay
	void ResetFreeFallState(); // Function Killstreak.KSCharacterBase.ResetFreeFallState
	void RemoveCameraShake(struct UCameraShake* CameraShake); // Function Killstreak.KSCharacterBase.RemoveCameraShake
	void OverhealDecayTick(); // Function Killstreak.KSCharacterBase.OverhealDecayTick
	float Overheal(float OverhealValue, struct AController* HealInstigator, struct AActor* HealCauser); // Function Killstreak.KSCharacterBase.Overheal
	void OnTeamUpdated(); // Function Killstreak.KSCharacterBase.OnTeamUpdated
	void OnStopDefaultAim(); // Function Killstreak.KSCharacterBase.OnStopDefaultAim
	void OnStopAimOverShoulder(); // Function Killstreak.KSCharacterBase.OnStopAimOverShoulder
	void OnStopAimDownSights(); // Function Killstreak.KSCharacterBase.OnStopAimDownSights
	void OnStopAimAlternate(); // Function Killstreak.KSCharacterBase.OnStopAimAlternate
	void OnStartDefaultAim(); // Function Killstreak.KSCharacterBase.OnStartDefaultAim
	void OnStartAimOverShoulder(); // Function Killstreak.KSCharacterBase.OnStartAimOverShoulder
	void OnStartAimDownSights(); // Function Killstreak.KSCharacterBase.OnStartAimDownSights
	void OnStartAimAlternate(); // Function Killstreak.KSCharacterBase.OnStartAimAlternate
	void OnRep_Sprint(); // Function Killstreak.KSCharacterBase.OnRep_Sprint
	void OnRep_Silhouette(); // Function Killstreak.KSCharacterBase.OnRep_Silhouette
	void OnRep_ReplicatedStun(); // Function Killstreak.KSCharacterBase.OnRep_ReplicatedStun
	void OnRep_ReplicatedAimState(); // Function Killstreak.KSCharacterBase.OnRep_ReplicatedAimState
	void OnRep_ReplicatedAbilityMovement(); // Function Killstreak.KSCharacterBase.OnRep_ReplicatedAbilityMovement
	void OnRep_PowerSlide(); // Function Killstreak.KSCharacterBase.OnRep_PowerSlide
	void OnRep_MantleInfo(); // Function Killstreak.KSCharacterBase.OnRep_MantleInfo
	void OnRep_LungeInfo(); // Function Killstreak.KSCharacterBase.OnRep_LungeInfo
	void OnRep_IsSubmerged(); // Function Killstreak.KSCharacterBase.OnRep_IsSubmerged
	void OnRep_DeathState(); // Function Killstreak.KSCharacterBase.OnRep_DeathState
	void OnRep_CurrentOverheal(); // Function Killstreak.KSCharacterBase.OnRep_CurrentOverheal
	void OnRep_CurrentLungCapacity(); // Function Killstreak.KSCharacterBase.OnRep_CurrentLungCapacity
	void OnRep_BackupPlayerState(); // Function Killstreak.KSCharacterBase.OnRep_BackupPlayerState
	void OnLeaveTeam(struct AKSTeamState* OldTeam); // Function Killstreak.KSCharacterBase.OnLeaveTeam
	void OnJoinTeam(struct AKSTeamState* NewTeam); // Function Killstreak.KSCharacterBase.OnJoinTeam
	void OnEndPowerSlide(enum class EKSPowerSlideEndReason EndReason); // Function Killstreak.KSCharacterBase.OnEndPowerSlide
	void OnBeginPowerSlide(); // Function Killstreak.KSCharacterBase.OnBeginPowerSlide
	void LockoutMovement(float Time); // Function Killstreak.KSCharacterBase.LockoutMovement
	bool IsUnderwater(); // Function Killstreak.KSCharacterBase.IsUnderwater
	bool IsThermalDetectable(); // Function Killstreak.KSCharacterBase.IsThermalDetectable
	bool IsStunned(); // Function Killstreak.KSCharacterBase.IsStunned
	bool IsSprinting(); // Function Killstreak.KSCharacterBase.IsSprinting
	bool IsRevealPermanent(); // Function Killstreak.KSCharacterBase.IsRevealPermanent
	bool IsRevealedToLocalPlayer(); // Function Killstreak.KSCharacterBase.IsRevealedToLocalPlayer
	bool IsRevealed(); // Function Killstreak.KSCharacterBase.IsRevealed
	bool IsPlayingEmote(); // Function Killstreak.KSCharacterBase.IsPlayingEmote
	bool IsLunging(); // Function Killstreak.KSCharacterBase.IsLunging
	bool IsLocallyViewed(); // Function Killstreak.KSCharacterBase.IsLocallyViewed
	bool IsLaunched(); // Function Killstreak.KSCharacterBase.IsLaunched
	bool IsInPowerSlide(); // Function Killstreak.KSCharacterBase.IsInPowerSlide
	bool IsInHardLandLockout(); // Function Killstreak.KSCharacterBase.IsInHardLandLockout
	bool IsInAimTransition(); // Function Killstreak.KSCharacterBase.IsInAimTransition
	bool IsDeadOrDestroyed(); // Function Killstreak.KSCharacterBase.IsDeadOrDestroyed
	bool IsBot(); // Function Killstreak.KSCharacterBase.IsBot
	bool IsAimingOverShoulder(); // Function Killstreak.KSCharacterBase.IsAimingOverShoulder
	bool IsAimingDownSights(); // Function Killstreak.KSCharacterBase.IsAimingDownSights
	bool IsAimingAlternate(); // Function Killstreak.KSCharacterBase.IsAimingAlternate
	bool IsAiming(); // Function Killstreak.KSCharacterBase.IsAiming
	bool IsAbilityMoving(); // Function Killstreak.KSCharacterBase.IsAbilityMoving
	void HealthRegenerationTick(); // Function Killstreak.KSCharacterBase.HealthRegenerationTick
	void HealthRegenerationStopped(bool bFullyHealed); // Function Killstreak.KSCharacterBase.HealthRegenerationStopped
	void HealthRegenerationStarted(); // Function Killstreak.KSCharacterBase.HealthRegenerationStarted
	void HealthRegenDelayTimerTick(float Seconds); // Function Killstreak.KSCharacterBase.HealthRegenDelayTimerTick
	void HealthRegenDelayTimerComplete(); // Function Killstreak.KSCharacterBase.HealthRegenDelayTimerComplete
	void HealthRegenDelayTimerActive(bool bActive); // Function Killstreak.KSCharacterBase.HealthRegenDelayTimerActive
	float Heal(float HealAmount, struct AController* HealInstigator, struct AActor* HealCauser); // Function Killstreak.KSCharacterBase.Heal
	bool HasCharacterSocket(struct FName InSocketName); // Function Killstreak.KSCharacterBase.HasCharacterSocket
	float GetZiplineAdjustHeight(); // Function Killstreak.KSCharacterBase.GetZiplineAdjustHeight
	struct AActor* GetStartSpot(); // Function Killstreak.KSCharacterBase.GetStartSpot
	enum class EKSCharacterAimMode GetReplicatedAimState(); // Function Killstreak.KSCharacterBase.GetReplicatedAimState
	float GetPowerSlideProgress(); // Function Killstreak.KSCharacterBase.GetPowerSlideProgress
	float GetPowerSlideAngle(); // Function Killstreak.KSCharacterBase.GetPowerSlideAngle
	struct FTransform GetMeleeThrowTransform(); // Function Killstreak.KSCharacterBase.GetMeleeThrowTransform
	struct FVector GetMeleeThrowLocation(); // Function Killstreak.KSCharacterBase.GetMeleeThrowLocation
	float GetMaximumLungCapacity(); // Function Killstreak.KSCharacterBase.GetMaximumLungCapacity
	float GetMaxHealth(); // Function Killstreak.KSCharacterBase.GetMaxHealth
	float GetLungRecoveryTime(); // Function Killstreak.KSCharacterBase.GetLungRecoveryTime
	enum class EKSCharacterAimMode GetLastReplicatedAimState(); // Function Killstreak.KSCharacterBase.GetLastReplicatedAimState
	struct AKSPlayerState* GetKSPlayerState(); // Function Killstreak.KSCharacterBase.GetKSPlayerState
	struct UKSCharacterMovementComponent* GetKSMovementComponent(); // Function Killstreak.KSCharacterBase.GetKSMovementComponent
	struct UKSCharacterAnimInst* GetKSCharacterAnimInst(); // Function Killstreak.KSCharacterBase.GetKSCharacterAnimInst
	struct AKSCharacter* GetKSCharacter(); // Function Killstreak.KSCharacterBase.GetKSCharacter
	struct AKSPlayerState* GetKSBestPlayerState(); // Function Killstreak.KSCharacterBase.GetKSBestPlayerState
	struct UKSAnimInstance* GetKSAnimInstance(); // Function Killstreak.KSCharacterBase.GetKSAnimInstance
	struct FName GetInteractionState(); // Function Killstreak.KSCharacterBase.GetInteractionState
	bool GetImmediateDeathRagdoll(); // Function Killstreak.KSCharacterBase.GetImmediateDeathRagdoll
	float GetHealthRegenDelayTime(); // Function Killstreak.KSCharacterBase.GetHealthRegenDelayTime
	float GetHealthPct(); // Function Killstreak.KSCharacterBase.GetHealthPct
	float GetHealth(); // Function Killstreak.KSCharacterBase.GetHealth
	struct FTransform GetGrenadeThrowTransform(); // Function Killstreak.KSCharacterBase.GetGrenadeThrowTransform
	struct FVector GetGrenadeThrowLocation(); // Function Killstreak.KSCharacterBase.GetGrenadeThrowLocation
	enum class EKSDeathState GetDeathState(); // Function Killstreak.KSCharacterBase.GetDeathState
	float GetCurrentOverheal(); // Function Killstreak.KSCharacterBase.GetCurrentOverheal
	float GetCurrentLungCapacity(); // Function Killstreak.KSCharacterBase.GetCurrentLungCapacity
	struct FVector GetCurrentDesiredMovementDirection(); // Function Killstreak.KSCharacterBase.GetCurrentDesiredMovementDirection
	enum class EKSCharacterAimMode GetCurrentAimState(); // Function Killstreak.KSCharacterBase.GetCurrentAimState
	struct FVector GetCurrentAccelDirection(); // Function Killstreak.KSCharacterBase.GetCurrentAccelDirection
	struct FTransform GetCharacterSocketTransform(struct FName InSocketName); // Function Killstreak.KSCharacterBase.GetCharacterSocketTransform
	struct FRotator GetCharacterSocketRotator(struct FName InSocketName); // Function Killstreak.KSCharacterBase.GetCharacterSocketRotator
	struct FVector GetCharacterSocketLocation(struct FName InSocketName); // Function Killstreak.KSCharacterBase.GetCharacterSocketLocation
	struct APlayerState* GetBestPlayerState(); // Function Killstreak.KSCharacterBase.GetBestPlayerState
	struct APlayerState* GetBackupPlayerState(); // Function Killstreak.KSCharacterBase.GetBackupPlayerState
	void ForceStartHealthRegeneration(); // Function Killstreak.KSCharacterBase.ForceStartHealthRegeneration
	void ForceSilhouette(bool bInForceSilhouette, enum class EPlayerSilhouetteType InSilhouetteType, bool InFillSilhouette, bool InMarkSilhouette); // Function Killstreak.KSCharacterBase.ForceSilhouette
	void EndAbilityMovement(); // Function Killstreak.KSCharacterBase.EndAbilityMovement
	void DoStun(float StunDuration, bool FreezeInPlace); // Function Killstreak.KSCharacterBase.DoStun
	void DoHardLandAvoid(); // Function Killstreak.KSCharacterBase.DoHardLandAvoid
	void DoHardLand(float LockoutDuration); // Function Killstreak.KSCharacterBase.DoHardLand
	bool CanViewDebugHealth(); // Function Killstreak.KSCharacterBase.CanViewDebugHealth
	void BroadcastInstantInteraction(struct FName InInteractionState, float InInteractionHeight); // Function Killstreak.KSCharacterBase.BroadcastInstantInteraction
	void BroadcastHealthRegenerationStopped(bool bFullyHealed); // Function Killstreak.KSCharacterBase.BroadcastHealthRegenerationStopped
	void BroadcastHardLandAvoid(); // Function Killstreak.KSCharacterBase.BroadcastHardLandAvoid
	void BlueprintOnStopSwimming(); // Function Killstreak.KSCharacterBase.BlueprintOnStopSwimming
	void BlueprintOnStopSubmerged(); // Function Killstreak.KSCharacterBase.BlueprintOnStopSubmerged
	void BlueprintOnStartSwimming(); // Function Killstreak.KSCharacterBase.BlueprintOnStartSwimming
	void BlueprintOnStartSubmerged(); // Function Killstreak.KSCharacterBase.BlueprintOnStartSubmerged
	void BeginDodgeRoll(); // Function Killstreak.KSCharacterBase.BeginDodgeRoll
	void BeginAbilityMovement(); // Function Killstreak.KSCharacterBase.BeginAbilityMovement
	bool AllowSprintingRightNow(); // Function Killstreak.KSCharacterBase.AllowSprintingRightNow
	bool AllowPowerSlideRightNow(); // Function Killstreak.KSCharacterBase.AllowPowerSlideRightNow
};

// Class Killstreak.KSCharacter
// Size: 0x33d0 (Inherited: 0xba0)
struct AKSCharacter : public AKSCharacterBase {
	char UnknownData_BA0[0x31]; // 0xba0(0x31)
	bool bTapRadialButtonToUseLastSelectedItem; // 0xbd1(0x01)
	char UnknownData_BD2[0xd6]; // 0xbd2(0xd6)
	struct TArray<struct FName> ReleasedInputsOnOpenUI; // 0xca8(0x10)
	struct TArray<struct FName> ExcludedReleasedInputsOnOpenRadialMenu; // 0xcb8(0x10)
	struct TArray<struct FName> ExcludedReleasedInputsOnOpenEscapeMenu; // 0xcc8(0x10)
	struct TArray<struct FName> ExcludedReleasedInputsOnOpenScoreboard; // 0xcd8(0x10)
	struct TArray<struct FName> ExcludedReleasedInputsOnOpenMap; // 0xce8(0x10)
	struct TArray<struct FName> ReleasedInputsOnCloseRadialMenu; // 0xcf8(0x10)
	struct FMulticastInlineDelegate OnPossessedBy; // 0xd08(0x10)
	struct FMulticastInlineDelegate OnUnpossessed; // 0xd18(0x10)
	struct AKSPlayerController* CachedKSPlayerController; // 0xd28(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0xd30(0x08)
	struct UKSInteractionType* InteractionType; // 0xd38(0x08)
	struct UKSAutoPickupComponent* AutoPickupComponent; // 0xd40(0x08)
	bool bProcessingReverseFriendlyFireDamageEvent; // 0xd48(0x01)
	char UnknownData_D49[0x1f]; // 0xd49(0x1f)
	struct UKSOutOfBoundsManager* OutOfBoundsManager; // 0xd68(0x08)
	float MinimumFlinchHeight; // 0xd70(0x04)
	float MinimumFlinchDamage; // 0xd74(0x04)
	float MaximumFlinchHeight; // 0xd78(0x04)
	float MaximumFlinchDamage; // 0xd7c(0x04)
	float FlinchDuration; // 0xd80(0x04)
	float FlinchRecoveryRate; // 0xd84(0x04)
	bool bFlinchSnipersOnly; // 0xd88(0x01)
	char UnknownData_D89[0x7]; // 0xd89(0x07)
	struct TMap<struct AKSPlayerState*, float> DamageRecord; // 0xd90(0x50)
	float DamageRecordResetTime; // 0xde0(0x04)
	char UnknownData_DE4[0x4]; // 0xde4(0x04)
	struct FTimerHandle DamageRecordResetTimer; // 0xde8(0x08)
	struct FKSShotgunHitChangeList ReplicatedShotgunHits; // 0xdf0(0x88)
	struct FMulticastInlineDelegate OnNewShotgunHit; // 0xe78(0x10)
	char UnknownData_E88[0x50]; // 0xe88(0x50)
	struct FMulticastInlineDelegate OnPlayHitFromPointDamageDel; // 0xed8(0x10)
	struct FMulticastInlineDelegate OnPlayHitFromRadialDamageDel; // 0xee8(0x10)
	char UnknownData_EF8[0x50]; // 0xef8(0x50)
	float KillCamHitRecordTime; // 0xf48(0x04)
	char UnknownData_F4C[0x34]; // 0xf4c(0x34)
	struct FMulticastInlineDelegate OnLocalViewChanged; // 0xf80(0x10)
	struct TArray<struct FWeakObjectPtr<struct APlayerController>> LocalViewers; // 0xf90(0x10)
	struct FPostProcessSettings BlendableSettings; // 0xfa0(0x540)
	struct FMulticastInlineDelegate OnCanRemoveBackPackChanged; // 0x14e0(0x10)
	struct FMulticastInlineDelegate OnCharacterFreeFallStartedDel; // 0x14f0(0x10)
	struct FMulticastInlineDelegate OnCharacterFreeFallCompletedDel; // 0x1500(0x10)
	char UnknownData_1510[0x8]; // 0x1510(0x08)
	struct FText RemoveBackpackInteractionPromptText; // 0x1518(0x18)
	float SkyDiveMaxPitch; // 0x1530(0x04)
	float SkyDiveMinPitch; // 0x1534(0x04)
	float SkyDiveExitDistance; // 0x1538(0x04)
	float SkyDiveExitThreshold; // 0x153c(0x04)
	float SkyDiveForceExitDistance; // 0x1540(0x04)
	bool bPostSkyDiveDodgeRoll; // 0x1544(0x01)
	bool bLeftHandMantleIK; // 0x1545(0x01)
	bool bRightHandMantleIK; // 0x1546(0x01)
	char UnknownData_1547[0x1]; // 0x1547(0x01)
	struct FVector LeftHandMantleIKLocation; // 0x1548(0x0c)
	struct FVector RightHandMantleIKLocation; // 0x1554(0x0c)
	float LeftHandMantleIKAlpha; // 0x1560(0x04)
	float RightHandMantleIKAlpha; // 0x1564(0x04)
	bool bFadeOutLeftHandMantleIK; // 0x1568(0x01)
	bool bFadeOutRightHandMantleIK; // 0x1569(0x01)
	char UnknownData_156A[0x6]; // 0x156a(0x06)
	struct TArray<struct FSmoothedComponentInfo> SmoothedComponents; // 0x1570(0x10)
	struct TArray<struct UKSSmoothingComponent*> RegisteredSmoothingComponents; // 0x1580(0x10)
	char UnknownData_1590[0x98]; // 0x1590(0x98)
	struct UCurveFloat* SprintImpulseCurve; // 0x1628(0x08)
	float SprintPressLeeway; // 0x1630(0x04)
	float SprintLeewayExpire; // 0x1634(0x04)
	bool bFacingVaultWall; // 0x1638(0x01)
	bool bWantsToAutoSprint; // 0x1639(0x01)
	bool bAutoSprintTimerComplete; // 0x163a(0x01)
	char UnknownData_163B[0x1]; // 0x163b(0x01)
	float AutoSprintDelay; // 0x163c(0x04)
	char UnknownData_1640[0x8]; // 0x1640(0x08)
	float LeftHandMantleIKOffset; // 0x1648(0x04)
	float RightHandMantleIKOffset; // 0x164c(0x04)
	float HandMantleIKFadeTime; // 0x1650(0x04)
	float MantleIKHandsToWallForwardOffset; // 0x1654(0x04)
	float CrouchCameraShiftInterpSpeed; // 0x1658(0x04)
	float CrouchCameraBoomLengthScale; // 0x165c(0x04)
	float RiseFromCrouchDelayTime; // 0x1660(0x04)
	char UnknownData_1664[0x4]; // 0x1664(0x04)
	float CameraInterpSpeed; // 0x1668(0x04)
	bool bUsingEmoteCamera; // 0x166c(0x01)
	char UnknownData_166D[0x3]; // 0x166d(0x03)
	float CurrentEmoteCameraVertOffset; // 0x1670(0x04)
	float CurrentEmoteCameraInterpSpeed; // 0x1674(0x04)
	float StandEmoteCameraVertOffset; // 0x1678(0x04)
	float CrouchEmoteCameraVertOffset; // 0x167c(0x04)
	float ProneEmoteCameraVertOffset; // 0x1680(0x04)
	float StandEmoteCameraInterpSpeed; // 0x1684(0x04)
	float CrouchEmoteCameraInterpSpeed; // 0x1688(0x04)
	float ProneEmoteCameraInterpSpeed; // 0x168c(0x04)
	float SprintCameraChangeDuration; // 0x1690(0x04)
	float SprintOutCameraChangeDuration; // 0x1694(0x04)
	char UnknownData_1698[0x48]; // 0x1698(0x48)
	float GamepadInput; // 0x16e0(0x04)
	bool HasGamepadInput; // 0x16e4(0x01)
	bool bZiplineActive; // 0x16e5(0x01)
	char UnknownData_16E6[0x2]; // 0x16e6(0x02)
	float ZipLineShoulderCameraBoomLength; // 0x16e8(0x04)
	float ZipLineShoulderBoomLengthChangeTime; // 0x16ec(0x04)
	struct UKSModInst_Activated* AbilityMovementMod; // 0x16f0(0x08)
	float ZiplineMeshHeightAdjust; // 0x16f8(0x04)
	float SwimCameraBoomFloatHeight; // 0x16fc(0x04)
	float DrownDamagePeriod; // 0x1700(0x04)
	float DrownPerTickDamage; // 0x1704(0x04)
	struct UDamageType* DrownDamageType; // 0x1708(0x08)
	char UnknownData_1710[0x8]; // 0x1710(0x08)
	struct UPGame_PositionHistoryComponent* PositionHistoryComponent; // 0x1718(0x08)
	char UnknownData_1720[0x8]; // 0x1720(0x08)
	struct FMulticastInlineDelegate OnOutOfBoundsBeginDel; // 0x1728(0x10)
	struct FMulticastInlineDelegate OnOutOfBoundsWarningEndDel; // 0x1738(0x10)
	struct FMulticastInlineDelegate OnOutOfBoundsEndDel; // 0x1748(0x10)
	struct FKSOutOfBoundsInfo OutOfBoundsInfo; // 0x1758(0x08)
	bool bLocalOutOfBounds; // 0x1760(0x01)
	char UnknownData_1761[0x7]; // 0x1761(0x07)
	struct FPGame_ReplicatedTimer ReplicatedEMPLockoutTimer; // 0x1768(0x38)
	char UnknownData_17A0[0x18]; // 0x17a0(0x18)
	bool bIsEMPLocked; // 0x17b8(0x01)
	char UnknownData_17B9[0x7]; // 0x17b9(0x07)
	struct FMulticastInlineDelegate OnEMPLocked; // 0x17c0(0x10)
	struct FMulticastInlineDelegate OnEMPLockoutTick; // 0x17d0(0x10)
	char UnknownData_17E0[0x18]; // 0x17e0(0x18)
	bool bIsOnFire; // 0x17f8(0x01)
	char UnknownData_17F9[0x3]; // 0x17f9(0x03)
	float CachedPrimaryWeaponFieldOfView; // 0x17fc(0x04)
	struct UKSSmoothingComponent* CameraRootComponent; // 0x1800(0x08)
	struct UKSSpringArmComponent* MainCameraBoom; // 0x1808(0x08)
	struct UCameraComponent* MainCameraComponent; // 0x1810(0x08)
	struct UKSSpringArmComponent* SprintCameraBoom; // 0x1818(0x08)
	struct UCameraComponent* SprintCameraComponent; // 0x1820(0x08)
	struct UKSSpringArmComponent* TransitionCameraBoom; // 0x1828(0x08)
	struct UCameraComponent* TransitionCameraComponent; // 0x1830(0x08)
	struct UKSSpringArmComponent* ShoulderCameraBoom; // 0x1838(0x08)
	struct UCameraComponent* ShoulderCameraComponent; // 0x1840(0x08)
	struct UCameraComponent* FirstPersonCameraComponent; // 0x1848(0x08)
	struct UKSSpringArmComponent* TabletCameraBoom; // 0x1850(0x08)
	struct UCameraComponent* TabletCameraComponent; // 0x1858(0x08)
	struct UKSSpringArmComponent* ActionCameraBoom1; // 0x1860(0x08)
	struct UCameraComponent* ActionCameraComponent; // 0x1868(0x08)
	struct UKSSpringArmComponent* SwimCameraBoom; // 0x1870(0x08)
	struct UCameraComponent* SwimCameraComponent; // 0x1878(0x08)
	struct UCameraComponent* ActiveCameraComponent; // 0x1880(0x08)
	char UnknownData_1888[0x8]; // 0x1888(0x08)
	struct UCameraComponent* PendingCameraComponent; // 0x1890(0x08)
	char UnknownData_1898[0x8]; // 0x1898(0x08)
	enum class ECameraShoulder CameraShoulder; // 0x18a0(0x01)
	enum class ECameraShoulder DesiredCameraShoulder; // 0x18a1(0x01)
	char UnknownData_18A2[0x2]; // 0x18a2(0x02)
	float ShoulderSwapProgress; // 0x18a4(0x04)
	float ShoulderSwapTime; // 0x18a8(0x04)
	float ShoulderSwapCooldownTime; // 0x18ac(0x04)
	float ShoulderSwapBlendExponent; // 0x18b0(0x04)
	float NextShoulderSwapTime; // 0x18b4(0x04)
	char UnknownData_18B8[0x4]; // 0x18b8(0x04)
	float AimDownSightsScopeInterpSpeed; // 0x18bc(0x04)
	float CrouchAOSCamVertOffset; // 0x18c0(0x04)
	float CrouchAOSAimVertOffset; // 0x18c4(0x04)
	float CrouchAOSCamVertOffsetBlendTime; // 0x18c8(0x04)
	char UnknownData_18CC[0x34]; // 0x18cc(0x34)
	bool bFocalPointMaintenanceEnabled; // 0x1900(0x01)
	bool bMantainFocualPointOnCameraTransition; // 0x1901(0x01)
	char UnknownData_1902[0x2]; // 0x1902(0x02)
	float CameraFocualThreshold; // 0x1904(0x04)
	float MaximumFocalPointMaintenanceAngle; // 0x1908(0x04)
	float MaximumFocalPointMaintenanceAngleLeaveADS; // 0x190c(0x04)
	float MinimumFocalPointMaintenanceDistance; // 0x1910(0x04)
	struct FRotator CameraTransitionRotationDelta; // 0x1914(0x0c)
	struct FRotator CameraTransitionRotationDeltaRemaining; // 0x1920(0x0c)
	bool bUseAdvancedFocalPointTracking; // 0x192c(0x01)
	bool bUseFocalPointDoubleCheck; // 0x192d(0x01)
	char UnknownData_192E[0x2]; // 0x192e(0x02)
	float FocalPointDoubleCheckAllowedBlockDistance; // 0x1930(0x04)
	char UnknownData_1934[0x4]; // 0x1934(0x04)
	struct FVector RelativeFocalPoint; // 0x1938(0x0c)
	struct FRotator AppliedFocalPointCorrection; // 0x1944(0x0c)
	struct FName MeshADSPitchPivotBoneName; // 0x1950(0x08)
	float AimSnapThrottleTime; // 0x1958(0x04)
	char UnknownData_195C[0x14]; // 0x195c(0x14)
	struct UKSAimAssistAnchorComponent* CachedSnapAnchor; // 0x1970(0x08)
	float NextValidAimSnapTime; // 0x1978(0x04)
	char UnknownData_197C[0x4]; // 0x197c(0x04)
	float LockoutCameraCooldownSpeed; // 0x1980(0x04)
	char UnknownData_1984[0x1c]; // 0x1984(0x1c)
	struct FRotator NonFocalPointRotation; // 0x19a0(0x0c)
	struct FRotator AppliedFocalPointYawRotation; // 0x19ac(0x0c)
	struct UCurveFloat* CameraPivotCurve; // 0x19b8(0x08)
	bool bPivotCameraToActorNotLocation; // 0x19c0(0x01)
	bool bTrackTargetAfterPivotingToIt; // 0x19c1(0x01)
	char UnknownData_19C2[0x36]; // 0x19c2(0x36)
	struct AActor* CameraPivotTargetActor; // 0x19f8(0x08)
	char UnknownData_1A00[0x10]; // 0x1a00(0x10)
	enum class EKSCharacterAimMode AimState; // 0x1a10(0x01)
	enum class EKSCharacterAimMode DesiredAimState; // 0x1a11(0x01)
	bool bAimPressed; // 0x1a12(0x01)
	bool bWasAimDownSightsWhenAimPressed; // 0x1a13(0x01)
	bool bWasAimAlternateWhenAimPressed; // 0x1a14(0x01)
	char UnknownData_1A15[0x3]; // 0x1a15(0x03)
	float AimHoldTime; // 0x1a18(0x04)
	float AimOverShoulderHoldTime; // 0x1a1c(0x04)
	struct TMap<enum class EKSMaterialHideType, struct UMaterial*> MaterialHideTypeMap; // 0x1a20(0x50)
	struct TMap<int32_t, enum class EKSMaterialHideType> MaterialIndexesToHide; // 0x1a70(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> HiddenMaterials; // 0x1ac0(0x50)
	bool bIsAimLocked; // 0x1b10(0x01)
	char UnknownData_1B11[0x7]; // 0x1b11(0x07)
	struct FMulticastInlineDelegate OnAimLockedChangedDel; // 0x1b18(0x10)
	bool bIsCrosshairHidden; // 0x1b28(0x01)
	char UnknownData_1B29[0x7]; // 0x1b29(0x07)
	struct FMulticastInlineDelegate OnCrosshairHiddenChangedDel; // 0x1b30(0x10)
	char UnknownData_1B40[0x48]; // 0x1b40(0x48)
	struct FGameplayTagContainer AvailableEquipPoints_New; // 0x1b88(0x20)
	struct TArray<struct FKSInitialInventoryItem> InitialInventory; // 0x1ba8(0x10)
	struct TArray<struct FKSInitialAmmo> InitialAmmo; // 0x1bb8(0x10)
	struct UKSEquipmentManagerComponent* EquipmentManagerComponent; // 0x1bc8(0x08)
	bool bDropAmmoOnDeath; // 0x1bd0(0x01)
	char UnknownData_1BD1[0x7]; // 0x1bd1(0x07)
	struct FGameplayTagContainer WeaponSlotsToDropOnDeath; // 0x1bd8(0x20)
	struct TArray<struct FGameplayTagContainer> ActiveWeaponSlotTiers; // 0x1bf8(0x10)
	struct TArray<struct FGameplayTagContainer> GrenadeSlotTiers; // 0x1c08(0x10)
	struct TArray<struct FKSLootLockerItem> LootLockerInventory; // 0x1c18(0x10)
	struct FGameplayTag StartingActiveWeaponEquipPoint; // 0x1c28(0x08)
	struct UKSSwapHandlerProfile* MainSwapHandlerProfile; // 0x1c30(0x08)
	struct UKSSwapHandlerProfile* GadgetSwapHandlerProfile; // 0x1c38(0x08)
	struct UKSSwapHandlerProfile* MedpackSwapHandlerProfile; // 0x1c40(0x08)
	struct UKSSwapHandlerProfile* PassiveSwapHandlerProfile; // 0x1c48(0x08)
	struct UKSSwapHandlerProfile* QuickMeleeSwapHandlerProfile; // 0x1c50(0x08)
	struct UKSWeaponAsset* EmergencyWeaponAsset; // 0x1c58(0x08)
	char UnknownData_1C60[0x8]; // 0x1c60(0x08)
	struct FText ObjectiveWeaponDropPrompt; // 0x1c68(0x18)
	struct FText ObjectiveWeaponDropProgressText; // 0x1c80(0x18)
	float DropObjectiveWeaponInteractTime; // 0x1c98(0x04)
	char UnknownData_1C9C[0x1c]; // 0x1c9c(0x1c)
	bool bSelfDestruct; // 0x1cb8(0x01)
	char UnknownData_1CB9[0x77]; // 0x1cb9(0x77)
	struct TMap<struct FName, int32_t> SubTypeComponentIndexMap; // 0x1d30(0x50)
	float MeleeHoldTime; // 0x1d80(0x04)
	int32_t PrimaryTier; // 0x1d84(0x04)
	int32_t SecondaryTier; // 0x1d88(0x04)
	int32_t MeleeTier; // 0x1d8c(0x04)
	float WeaponDropHoldTime; // 0x1d90(0x04)
	float WeaponDoubleTapTime; // 0x1d94(0x04)
	struct FMulticastInlineDelegate OnActiveWeaponChangedDel; // 0x1d98(0x10)
	char UnknownData_1DA8[0x18]; // 0x1da8(0x18)
	struct FMulticastInlineDelegate OnActiveGrenadeChangedDel; // 0x1dc0(0x10)
	char UnknownData_1DD0[0x18]; // 0x1dd0(0x18)
	struct FMulticastInlineDelegate OnActiveMedPackChangedDel; // 0x1de8(0x10)
	char UnknownData_1DF8[0x18]; // 0x1df8(0x18)
	struct FTimerHandle MeleeHoldTimer; // 0x1e10(0x08)
	struct FTimerHandle DoubleTapTimer; // 0x1e18(0x08)
	struct FTimerHandle DropHoldTimer; // 0x1e20(0x08)
	float WeaponSwapThrottleExpire; // 0x1e28(0x04)
	float WeaponSwapThrottlePeriod; // 0x1e2c(0x04)
	float QuickMeleeHoldTime; // 0x1e30(0x04)
	char UnknownData_1E34[0x4]; // 0x1e34(0x04)
	struct AKSWeapon_Melee* CurrentQuickMeleeWeapon; // 0x1e38(0x08)
	bool bQuickMeleeHoldCompleted; // 0x1e40(0x01)
	char UnknownData_1E41[0x1f]; // 0x1e41(0x1f)
	struct FMulticastInlineDelegate OnStartFireFailed; // 0x1e60(0x10)
	bool bNoFire; // 0x1e70(0x01)
	char UnknownData_1E71[0x1f]; // 0x1e71(0x1f)
	bool IsFireWeaponHeld; // 0x1e90(0x01)
	bool bIsThrowGrenadeHeld; // 0x1e91(0x01)
	bool IsPendingFire; // 0x1e92(0x01)
	bool IsAimDownSightsHeld; // 0x1e93(0x01)
	char UnknownData_1E94[0x4]; // 0x1e94(0x04)
	struct FString SwingMontageSection; // 0x1e98(0x10)
	char UnknownData_1EA8[0x10]; // 0x1ea8(0x10)
	struct FMulticastInlineDelegate OnWeaponInventoryChanged; // 0x1eb8(0x10)
	struct FMulticastInlineDelegate OnMeleeHoldStart; // 0x1ec8(0x10)
	struct FMulticastInlineDelegate OnMeleeHoldEnd; // 0x1ed8(0x10)
	struct UKSWeaponComponent* ActiveWeaponComponent[0xb]; // 0x1ee8(0x58)
	uint16_t ActiveEquipmentId[0xb]; // 0x1f40(0x16)
	char UnknownData_1F56[0x2]; // 0x1f56(0x02)
	struct FKSEquipmentContainer EquipmentContainer; // 0x1f58(0x1f0)
	struct TMap<uint16_t, struct FKSPendingWeaponStateUpdates> PendingWeaponStateUpdates; // 0x2148(0x50)
	struct FMulticastInlineDelegate OnEquipmentAddedDel; // 0x2198(0x10)
	char UnknownData_21A8[0x18]; // 0x21a8(0x18)
	struct FMulticastInlineDelegate OnEquipmentRemovedDel; // 0x21c0(0x10)
	char UnknownData_21D0[0x18]; // 0x21d0(0x18)
	struct FMulticastInlineDelegate OnEquipmentBecomeActiveDel; // 0x21e8(0x10)
	char UnknownData_21F8[0x18]; // 0x21f8(0x18)
	struct FMulticastInlineDelegate OnEquipmentEndActiveDel; // 0x2210(0x10)
	char UnknownData_2220[0x18]; // 0x2220(0x18)
	struct FMulticastInlineDelegate OnSpecialAmmoEvent; // 0x2238(0x10)
	struct TMap<enum class EAmmoType, struct UKSAmmoDropAsset*> AmmoDropAssets; // 0x2248(0x50)
	struct FKSAmmoManager AmmoManager; // 0x2298(0x130)
	char UnknownData_23C8[0x18]; // 0x23c8(0x18)
	float OutOfSightWeaponPickupRange; // 0x23e0(0x04)
	float WeaponPickupRange; // 0x23e4(0x04)
	struct USphereComponent* PickUpSphereComponent; // 0x23e8(0x08)
	float LabelPickupRange; // 0x23f0(0x04)
	char UnknownData_23F4[0x4]; // 0x23f4(0x04)
	struct FMulticastInlineDelegate OnItemPickedUp; // 0x23f8(0x10)
	struct TMap<struct AActor*, float> OutOfRangePickups; // 0x2408(0x50)
	char UnknownData_2458[0x4]; // 0x2458(0x04)
	float ReloadTapThreshold; // 0x245c(0x04)
	float ContextualPressTime; // 0x2460(0x04)
	bool bWantsToInteract; // 0x2464(0x01)
	char UnknownData_2465[0x3]; // 0x2465(0x03)
	float Health; // 0x2468(0x04)
	float CachedMaxHealth; // 0x246c(0x04)
	float DownedHealth; // 0x2470(0x04)
	float RevivedHealth; // 0x2474(0x04)
	int32_t ArmorHelmetLevel; // 0x2478(0x04)
	int32_t ArmorVestLevel; // 0x247c(0x04)
	float ArmorDurabilityPercent; // 0x2480(0x04)
	float CurrentArmorDurability; // 0x2484(0x04)
	float MaxHealthBonus; // 0x2488(0x04)
	float MaxMaxHealthBonus; // 0x248c(0x04)
	float LocalMaxHealthBonus; // 0x2490(0x04)
	char UnknownData_2494[0x4]; // 0x2494(0x04)
	struct FMulticastInlineDelegate OnMaxHealthBonusChanged; // 0x2498(0x10)
	bool bDowned; // 0x24a8(0x01)
	char UnknownData_24A9[0x7]; // 0x24a9(0x07)
	struct UKSTimerComponent* GiveUpTimer; // 0x24b0(0x08)
	float GiveUpHoldTime; // 0x24b8(0x04)
	char UnknownData_24BC[0x4]; // 0x24bc(0x04)
	struct FMulticastInlineDelegate OnGiveUpTimerActive; // 0x24c0(0x10)
	struct FMulticastInlineDelegate OnGiveUpTimerTick; // 0x24d0(0x10)
	struct FMulticastInlineDelegate OnGiveUpAllowed; // 0x24e0(0x10)
	float DownedImmuneTime; // 0x24f0(0x04)
	float DownedImmuneTimeStamp; // 0x24f4(0x04)
	char UnknownData_24F8[0x4]; // 0x24f8(0x04)
	bool bAllowGiveUp; // 0x24fc(0x01)
	char UnknownData_24FD[0x3]; // 0x24fd(0x03)
	float BleedPeriod; // 0x2500(0x04)
	float BleedDamage; // 0x2504(0x04)
	struct UDamageType* BleedDamageType; // 0x2508(0x08)
	char UnknownData_2510[0x8]; // 0x2510(0x08)
	struct AController* DownInstigator; // 0x2518(0x08)
	struct UDamageType* DownDamageType; // 0x2520(0x08)
	struct AActor* DownDamageCauser; // 0x2528(0x08)
	char UnknownData_2530[0x48]; // 0x2530(0x48)
	struct FMulticastInlineDelegate OnCharacterDownedChangedDel; // 0x2578(0x10)
	int32_t DownSpree; // 0x2588(0x04)
	char UnknownData_258C[0x4]; // 0x258c(0x04)
	struct TArray<struct UAkAudioEvent*> DownSpreeSounds; // 0x2590(0x10)
	float DefaultAssistDuration; // 0x25a0(0x04)
	char UnknownData_25A4[0x4]; // 0x25a4(0x04)
	struct TArray<struct FAssistTag> DownAssistTagQueue; // 0x25a8(0x10)
	struct TArray<struct APlayerState*> DownAssists; // 0x25b8(0x10)
	struct AController* KillInstigator; // 0x25c8(0x08)
	struct TArray<struct APlayerState*> EliminationAssists; // 0x25d0(0x10)
	struct TArray<struct APlayerState*> PlayersWithEliminationCredit; // 0x25e0(0x10)
	char UnknownData_25F0[0x8]; // 0x25f0(0x08)
	struct FText ReviveInteractionProgressText; // 0x25f8(0x18)
	struct FText ReviveInteractionPromptText; // 0x2610(0x18)
	struct UCameraShake* InteractionCameraShake; // 0x2628(0x08)
	float TimeToRevive; // 0x2630(0x04)
	float bForceCrouchOnRevive; // 0x2634(0x04)
	struct FReviveInfo ReviveInfo; // 0x2638(0x30)
	bool bCanMoveWhileRevivingOther; // 0x2668(0x01)
	char UnknownData_2669[0xf]; // 0x2669(0x0f)
	struct USphereComponent* ReviveRangeSphereComponent; // 0x2678(0x08)
	char UnknownData_2680[0x58]; // 0x2680(0x58)
	struct FWeakObjectPtr<struct AActor> ActorTargetingMeForRevive; // 0x26d8(0x08)
	struct FMulticastInlineDelegate OnStartReviveDel; // 0x26e0(0x10)
	char UnknownData_26F0[0x18]; // 0x26f0(0x18)
	struct FMulticastInlineDelegate OnStartReviveOtherDel; // 0x2708(0x10)
	char UnknownData_2718[0x18]; // 0x2718(0x18)
	struct FMulticastInlineDelegate OnReviveInterruptedDel; // 0x2730(0x10)
	char UnknownData_2740[0x18]; // 0x2740(0x18)
	struct FMulticastInlineDelegate OnReviveOtherInterruptedDel; // 0x2758(0x10)
	char UnknownData_2768[0x18]; // 0x2768(0x18)
	struct FMulticastInlineDelegate OnReviveCompletedDel; // 0x2780(0x10)
	char UnknownData_2790[0x18]; // 0x2790(0x18)
	struct FMulticastInlineDelegate OnReviveOtherCompletedDel; // 0x27a8(0x10)
	char UnknownData_27B8[0x18]; // 0x27b8(0x18)
	int32_t NumOngoingRemoteRevives; // 0x27d0(0x04)
	char UnknownData_27D4[0x24]; // 0x27d4(0x24)
	struct FMulticastInlineDelegate OnShoulderSwapChanged; // 0x27f8(0x10)
	struct UKSInteractionManager* InteractionManager; // 0x2808(0x08)
	struct UKSInteractionManager* ReceivedInteractionManager; // 0x2810(0x08)
	struct FWeakObjectPtr<struct AActor> InteractionHoverTarget; // 0x2818(0x08)
	bool bHoverTargetPress; // 0x2820(0x01)
	bool bHoverTargetHold; // 0x2821(0x01)
	char UnknownData_2822[0x6]; // 0x2822(0x06)
	struct AActor* InteractionTarget; // 0x2828(0x08)
	bool IsInInteraction; // 0x2830(0x01)
	char UnknownData_2831[0x7]; // 0x2831(0x07)
	struct UKSInteractionType* MostRecentInteractionType; // 0x2838(0x08)
	enum class EKSInteractionResult MostRecentInteractionResult; // 0x2840(0x01)
	char UnknownData_2841[0x3]; // 0x2841(0x03)
	struct FVector MostRecentInteractionStartLocation; // 0x2844(0x0c)
	bool InteractionFacesRotation; // 0x2850(0x01)
	char UnknownData_2851[0x7]; // 0x2851(0x07)
	struct FKSInteractableCameraTransition InteractionCameraTransition; // 0x2858(0x30)
	struct UKSInteractionType* DefaultInteractionType; // 0x2888(0x08)
	float InteractionDistance; // 0x2890(0x04)
	float MaxInteractionAngle; // 0x2894(0x04)
	float InteractionHoldTime; // 0x2898(0x04)
	float InteractionPriorityBaseModifier; // 0x289c(0x04)
	bool bUncrouchAfterInteraction; // 0x28a0(0x01)
	bool bInteractionCrouchLock; // 0x28a1(0x01)
	char UnknownData_28A2[0x1e]; // 0x28a2(0x1e)
	struct FTimerHandle InstantInteractHandle; // 0x28c0(0x08)
	float InstantInteractCooldownTime; // 0x28c8(0x04)
	char UnknownData_28CC[0x4]; // 0x28cc(0x04)
	struct FMulticastInlineDelegate OnHoveredInteractableChanged; // 0x28d0(0x10)
	struct FMulticastInlineDelegate OnInteractStart; // 0x28e0(0x10)
	struct FMulticastInlineDelegate OnRemotePlayerInteractStart; // 0x28f0(0x10)
	struct FMulticastInlineDelegate OnInteractEnd; // 0x2900(0x10)
	struct FMulticastInlineDelegate OnRemotePlayerInteractEnd; // 0x2910(0x10)
	struct FMulticastInlineDelegate OnInteractSuccess; // 0x2920(0x10)
	struct FMulticastInlineDelegate OnInteractFailed; // 0x2930(0x10)
	struct FMulticastInlineDelegate OnInteractInterrupted; // 0x2940(0x10)
	struct FMulticastInlineDelegate OnChargingActionStart; // 0x2950(0x10)
	struct FMulticastInlineDelegate OnChargingActionEnd; // 0x2960(0x10)
	struct FVector BaseLocalDropLocation; // 0x2970(0x0c)
	char UnknownData_297C[0x4]; // 0x297c(0x04)
	struct TMap<int32_t, float> TierToDropYawMap; // 0x2980(0x50)
	struct TMap<struct FGameplayTag, float> EquipPointToDropYawMap; // 0x29d0(0x50)
	float AmmoDropYaw; // 0x2a20(0x04)
	float DropLateralSpeed; // 0x2a24(0x04)
	float DropLateralSpeedVariance; // 0x2a28(0x04)
	float CompanionAmmoHeightShift; // 0x2a2c(0x04)
	float DropAngleVariance; // 0x2a30(0x04)
	char UnknownData_2A34[0x14]; // 0x2a34(0x14)
	bool bInRagdoll; // 0x2a48(0x01)
	bool bInPreRagdoll; // 0x2a49(0x01)
	char UnknownData_2A4A[0x1a]; // 0x2a4a(0x1a)
	float TryToStopRagdollInterval; // 0x2a64(0x04)
	float RagdollFreezeSpeed; // 0x2a68(0x04)
	char UnknownData_2A6C[0x18]; // 0x2a6c(0x18)
	float DeathDisplayLifespan; // 0x2a84(0x04)
	SoftClassProperty MinimapDeathDisplayWidget; // 0x2a88(0x28)
	SoftClassProperty FullmapDeathDisplayWidget; // 0x2ab0(0x28)
	SoftClassProperty OverlayDeathDisplayWidget; // 0x2ad8(0x28)
	bool bUseScreenSizeCutoff; // 0x2b00(0x01)
	char UnknownData_2B01[0x3]; // 0x2b01(0x03)
	float PlayerHoverRange; // 0x2b04(0x04)
	float HoverMinScreenHeightPct; // 0x2b08(0x04)
	float HoverMinScreenHeightPctADS; // 0x2b0c(0x04)
	bool bUseConeHover; // 0x2b10(0x01)
	char UnknownData_2B11[0x3]; // 0x2b11(0x03)
	float HoverConeAngle; // 0x2b14(0x04)
	float ADSHoverConeScreenRadius; // 0x2b18(0x04)
	float AlwaysHoverDistance; // 0x2b1c(0x04)
	bool bUnhoverWhenOccludedByHoveredCharacter; // 0x2b20(0x01)
	char UnknownData_2B21[0xb]; // 0x2b21(0x0b)
	bool bIsHovered; // 0x2b2c(0x01)
	char UnknownData_2B2D[0x3]; // 0x2b2d(0x03)
	float CachedCameraFOV; // 0x2b30(0x04)
	struct FVector2D CachedViewPortSize; // 0x2b34(0x08)
	float CachedHalfTanFOV; // 0x2b3c(0x04)
	char UnknownData_2B40[0xe8]; // 0x2b40(0xe8)
	bool bGodMode; // 0x2c28(0x01)
	enum class EKSRevealType RevealedStatus; // 0x2c29(0x01)
	bool bRevealedToLocalPlayer; // 0x2c2a(0x01)
	char UnknownData_2C2B[0x5]; // 0x2c2b(0x05)
	struct FRevealManager RevealManager; // 0x2c30(0x168)
	char UnknownData_2D98[0x8]; // 0x2d98(0x08)
	struct UKSPlayerMod* FlashBangEffectMod; // 0x2da0(0x08)
	char UnknownData_2DA8[0x8]; // 0x2da8(0x08)
	bool bScrambled; // 0x2db0(0x01)
	bool bMedPackPressed; // 0x2db1(0x01)
	char UnknownData_2DB2[0x6]; // 0x2db2(0x06)
	struct FMulticastInlineDelegate OnStickDel; // 0x2db8(0x10)
	struct FMulticastInlineDelegate OnMedPackFailed; // 0x2dc8(0x10)
	struct FMulticastInlineDelegate OnGrenadeFailed; // 0x2dd8(0x10)
	struct FMulticastInlineDelegate OnWeaponPickupInventoryFull; // 0x2de8(0x10)
	struct FMulticastInlineDelegate OnItemPickupSuccess; // 0x2df8(0x10)
	bool bReplicatedActivatingMod; // 0x2e08(0x01)
	char UnknownData_2E09[0x7]; // 0x2e09(0x07)
	struct FMulticastInlineDelegate OnModsUpdated; // 0x2e10(0x10)
	struct FMulticastInlineDelegate OnActivatableModsUpdated; // 0x2e20(0x10)
	char UnknownData_2E30[0x18]; // 0x2e30(0x18)
	bool bRotationInputAllowsAimAssist; // 0x2e48(0x01)
	char UnknownData_2E49[0x3]; // 0x2e49(0x03)
	float MinimumRotationInputForAimAssist; // 0x2e4c(0x04)
	char UnknownData_2E50[0x10]; // 0x2e50(0x10)
	struct FHaulingInfo HaulerInfo; // 0x2e60(0x10)
	bool AllowEnemyHauling; // 0x2e70(0x01)
	char UnknownData_2E71[0x7]; // 0x2e71(0x07)
	struct FText HaulEnemyInteractionPromptText; // 0x2e78(0x18)
	struct FName FriendlyCarrySocketName; // 0x2e90(0x08)
	struct FName EnemyCarrySocketName; // 0x2e98(0x08)
	char UnknownData_2EA0[0x10]; // 0x2ea0(0x10)
	struct FCarriedInfo CarriedInfo; // 0x2eb0(0x10)
	struct FMulticastInlineDelegate OnGamepadAbilityCycle; // 0x2ec0(0x10)
	char UnknownData_2ED0[0x1c]; // 0x2ed0(0x1c)
	float ChordDelay; // 0x2eec(0x04)
	float HoldDelay; // 0x2ef0(0x04)
	float DamageForMaxForceFeedback; // 0x2ef4(0x04)
	float DamageForceFeedbackScale; // 0x2ef8(0x04)
	float DamageForceFeedbackDuration; // 0x2efc(0x04)
	bool bDamageForceFeedbackUsesSmallMotors; // 0x2f00(0x01)
	char UnknownData_2F01[0x3]; // 0x2f01(0x03)
	float ForceFeedbackOnErrorMagnitude; // 0x2f04(0x04)
	float ForceFeedbackOnErrorDuration; // 0x2f08(0x04)
	float LandingSpeedForMaxForceFeedback; // 0x2f0c(0x04)
	struct UForceFeedbackComponent* LandForceFeedbackComponent; // 0x2f10(0x08)
	struct UForceFeedbackEffect* JumpForceFeedbackEffect; // 0x2f18(0x08)
	struct UForceFeedbackEffect* DownedForceFeedbackEffect; // 0x2f20(0x08)
	struct UForceFeedbackEffect* BeingRevivedForceFeedbackEffect; // 0x2f28(0x08)
	struct UKSAIDifficultyComponent* DifficultyComponent; // 0x2f30(0x08)
	struct UKSAIObjectivePriorityComponent* ObjectivePriorityComponent; // 0x2f38(0x08)
	struct UKSAIItemPriorityComponent* ItemPriorityComponent; // 0x2f40(0x08)
	struct UKSAIItemPriorityComponent* TempItemPriorityComponent; // 0x2f48(0x08)
	struct TArray<struct TScriptInterface<None>> ReplicatedFootstepOverrides; // 0x2f50(0x10)
	struct TArray<struct TScriptInterface<None>> AutonomousProxyFootstepOverrides; // 0x2f60(0x10)
	struct UNavArea* MovingNavAreaClass; // 0x2f70(0x08)
	struct UNavArea* StillNavAreaClass; // 0x2f78(0x08)
	struct UKSNavModifierComponent* KSNavModifierComponent; // 0x2f80(0x08)
	float NavModificationUpdateTimerPeriod; // 0x2f88(0x04)
	char UnknownData_2F8C[0xc]; // 0x2f8c(0x0c)
	struct FName DamagedHearingEventTag; // 0x2f98(0x08)
	float DamageForDefaultLoudness; // 0x2fa0(0x04)
	struct FName FireHearingEventTag; // 0x2fa4(0x08)
	float FireRangeForDefaultLoudness; // 0x2fac(0x04)
	struct FName FootstepHearingEventTag; // 0x2fb0(0x08)
	float MovementSpeedForDefaultLoudness; // 0x2fb8(0x04)
	float TeamEventRange; // 0x2fbc(0x04)
	char UnknownData_2FC0[0xc]; // 0x2fc0(0x0c)
	struct FName BotName; // 0x2fcc(0x08)
	float BotADSAccuracy; // 0x2fd4(0x04)
	bool bRandomBotName; // 0x2fd8(0x01)
	bool bBot; // 0x2fd9(0x01)
	enum class ECharacterBehaviorState CurrentBehaviorState; // 0x2fda(0x01)
	char UnknownData_2FDB[0x5]; // 0x2fdb(0x05)
	struct FMulticastInlineDelegate OnBehaviorStateChanged; // 0x2fe0(0x10)
	struct UKSAkComponent* CharacterAkComponent; // 0x2ff0(0x08)
	struct UKSVOComponent* VOComponentClass; // 0x2ff8(0x08)
	struct UKSVOComponent* VOComponent; // 0x3000(0x08)
	struct TArray<struct UDataTable*> PossibleVOTables; // 0x3008(0x10)
	char UnknownData_3018[0x4]; // 0x3018(0x04)
	struct FGameplayTag DownOtherVOEvent; // 0x301c(0x08)
	float NameplateZOffset; // 0x3024(0x04)
	float CurrentNameplateZOffset; // 0x3028(0x04)
	float CurrentNameplateAimZOffset; // 0x302c(0x04)
	float NameplateAimZOffset; // 0x3030(0x04)
	float NameplateAimZOffsetBlendTime; // 0x3034(0x04)
	float TargetNameplateAimZOffset; // 0x3038(0x04)
	float CurrentNameplateCrouchZOffset; // 0x303c(0x04)
	float NameplateCrouchZOffset; // 0x3040(0x04)
	float NameplateCrouchZOffsetBlendTime; // 0x3044(0x04)
	float TargetNameplateCrouchZOffset; // 0x3048(0x04)
	enum class EKSVehicleState VehicleState; // 0x304c(0x01)
	char UnknownData_304D[0x3]; // 0x304d(0x03)
	struct AKSVehicle* CurrentVehicle; // 0x3050(0x08)
	char UnknownData_3058[0x10]; // 0x3058(0x10)
	struct FMulticastInlineDelegate OnVehicleStateChanged; // 0x3068(0x10)
	struct FMulticastInlineDelegate OnDestructibleSpeedOverlap; // 0x3078(0x10)
	bool bDoDrawDebugLines; // 0x3088(0x01)
	char UnknownData_3089[0x3]; // 0x3089(0x03)
	struct FName MuzzleBone; // 0x308c(0x08)
	struct FName LeftElbowBone; // 0x3094(0x08)
	struct FName LeftWristBone; // 0x309c(0x08)
	struct FName RightElbowBone; // 0x30a4(0x08)
	struct FName RightWristBone; // 0x30ac(0x08)
	float HiddenArmScale; // 0x30b4(0x04)
	bool bShowWeaponWhenArmVisible; // 0x30b8(0x01)
	char UnknownData_30B9[0x3]; // 0x30b9(0x03)
	float MaxDistancePenetrationCheck; // 0x30bc(0x04)
	enum class EKSArmVisibilityType LeftArmVisibility; // 0x30c0(0x01)
	enum class EKSArmVisibilityType RightArmVisibility; // 0x30c1(0x01)
	char UnknownData_30C2[0x2]; // 0x30c2(0x02)
	struct FName PelvisBone; // 0x30c4(0x08)
	char UnknownData_30CC[0x4]; // 0x30cc(0x04)
	struct TArray<struct UKSApparelAsset*> DefaultApparelSetup; // 0x30d0(0x10)
	struct TMap<struct FAppliedApparelKey, struct UKSApparelAsset*> AppliedApparelMap; // 0x30e0(0x50)
	struct TMap<struct FName, struct FAppliedApparelKey> SlotToApparelKeyMap; // 0x3130(0x50)
	struct TArray<struct UKSApparelAsset*> ApparelAssets; // 0x3180(0x10)
	bool bNoApparel; // 0x3190(0x01)
	char UnknownData_3191[0x7]; // 0x3191(0x07)
	struct TArray<struct FWeakObjectPtr<struct UKSApparelAsset>> LocalApparelAssets; // 0x3198(0x10)
	bool bApparelAssetMapDirty; // 0x31a8(0x01)
	char UnknownData_31A9[0x7]; // 0x31a9(0x07)
	struct FTimerHandle ApparelTimeoutHandle; // 0x31b0(0x08)
	float ApparelTimeoutTime; // 0x31b8(0x04)
	bool bFirstApparelApplicationSuccess; // 0x31bc(0x01)
	char UnknownData_31BD[0x63]; // 0x31bd(0x63)
	struct FMulticastInlineDelegate OnNewApparelApplicationFinishedDel; // 0x3220(0x10)
	char UnknownData_3230[0x10]; // 0x3230(0x10)
	enum class EKSCharacterGender Gender; // 0x3240(0x01)
	enum class EKSCharacterGender LocalGender; // 0x3241(0x01)
	char UnknownData_3242[0x6]; // 0x3242(0x06)
	struct FMulticastInlineDelegate OnGenderChangedDel; // 0x3248(0x10)
	char UnknownData_3258[0x18]; // 0x3258(0x18)
	struct USkinObjectManagerComponent* SkinsManager; // 0x3270(0x08)
	struct UMultiSkinObject* DefaultBodyApparelSkinObject; // 0x3278(0x08)
	struct FGameplayTagContainer SkinTagContainer; // 0x3280(0x20)
	struct TArray<struct FDataTableInfo> DefaultApparelSkinTables; // 0x32a0(0x10)
	char UnknownData_32B0[0x18]; // 0x32b0(0x18)
	bool bUseCameraProximityFading; // 0x32c8(0x01)
	char UnknownData_32C9[0x3]; // 0x32c9(0x03)
	float CameraFadeStartDistance; // 0x32cc(0x04)
	float CameraFadeEndDistance; // 0x32d0(0x04)
	struct FName FadeAlphaParamName; // 0x32d4(0x08)
	float LastCameraProximityAlpha; // 0x32dc(0x04)
	struct TMap<struct FName, struct UKSFXCurveComponent*> ActiveFXCurveComponents; // 0x32e0(0x50)
	enum class EKSEmotion Emotion; // 0x3330(0x01)
	enum class EKSEmotion LocalEmotion; // 0x3331(0x01)
	enum class EKSEmotion LastEmotion; // 0x3332(0x01)
	char UnknownData_3333[0x1]; // 0x3333(0x01)
	float EmotionFloat; // 0x3334(0x04)
	struct FMulticastInlineDelegate OnEmotionChangedDel; // 0x3338(0x10)
	struct AActor* CurrentEmotePhysicsProp; // 0x3348(0x08)
	struct UKSAnimationAuditComponent* AnimationAuditComponent; // 0x3350(0x08)
	struct UMaterialInstanceDynamic* ADSBlurMID; // 0x3358(0x08)
	float TimeToRepairArmor; // 0x3360(0x04)
	float DurabilityASecond; // 0x3364(0x04)
	bool bRepairAllArmorAtOnce; // 0x3368(0x01)
	char UnknownData_3369[0x7]; // 0x3369(0x07)
	struct FText ArmorRepairProgressText; // 0x3370(0x18)
	struct FText ArmorRepairPromptText; // 0x3388(0x18)
	bool bCanRepairArmor; // 0x33a0(0x01)
	bool bRepairableArmorEquipped; // 0x33a1(0x01)
	bool bIsRepairingArmor; // 0x33a2(0x01)
	char UnknownData_33A3[0x5]; // 0x33a3(0x05)
	struct FMulticastInlineDelegate OnRepairableArmorEquippedDel; // 0x33a8(0x10)
	struct FMulticastInlineDelegate OnArmorInteractAvailableDel; // 0x33b8(0x10)
	char UnknownData_33C8[0x8]; // 0x33c8(0x08)

	void ViewedPawnTakeDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* DamageCauser, struct FVector DamageOrigin); // Function Killstreak.KSCharacter.ViewedPawnTakeDamage
	void ViewedPawnNoLongerRevealed(); // Function Killstreak.KSCharacter.ViewedPawnNoLongerRevealed
	void ViewedPawnInstigatedHeadshot(struct FCombatEventInfo DamageInfo); // Function Killstreak.KSCharacter.ViewedPawnInstigatedHeadshot
	void ViewedPawnInstigatedDamage(struct FCombatEventInfo DamageInfo); // Function Killstreak.KSCharacter.ViewedPawnInstigatedDamage
	void ViewedPawnHasBeenRevealed(bool Permanent); // Function Killstreak.KSCharacter.ViewedPawnHasBeenRevealed
	void VehicleStateChanged(enum class EKSVehicleState CurrentVehicleState); // Function Killstreak.KSCharacter.VehicleStateChanged
	void UpdateNavModification(); // Function Killstreak.KSCharacter.UpdateNavModification
	void UpdateMantleHands(enum class EKSPlayerHand Hand, bool bEnable); // Function Killstreak.KSCharacter.UpdateMantleHands
	void UpdateHoveredInteractable(); // Function Killstreak.KSCharacter.UpdateHoveredInteractable
	void UpdateAmmo(enum class EAmmoType AmmoType, int32_t AmmoDelta); // Function Killstreak.KSCharacter.UpdateAmmo
	void UpdateAimStatus(); // Function Killstreak.KSCharacter.UpdateAimStatus
	void UnSelectToRevive(struct AActor* Reviver); // Function Killstreak.KSCharacter.UnSelectToRevive
	void UnregisterFootstepOverride(struct TScriptInterface<None> ToRemove); // Function Killstreak.KSCharacter.UnregisterFootstepOverride
	void UnlockShoulderSwap(bool ForceFullUnlock); // Function Killstreak.KSCharacter.UnlockShoulderSwap
	void UnhideZiplinePulley(); // Function Killstreak.KSCharacter.UnhideZiplinePulley
	void UnhideUplineDevice(); // Function Killstreak.KSCharacter.UnhideUplineDevice
	void UnHideADSMaterials(); // Function Killstreak.KSCharacter.UnHideADSMaterials
	void TryToStopRagdoll(); // Function Killstreak.KSCharacter.TryToStopRagdoll
	void TryToStopAiming(bool IsInterrupt); // Function Killstreak.KSCharacter.TryToStopAiming
	void TryToAimOverShoulder(bool bSkipUpdate); // Function Killstreak.KSCharacter.TryToAimOverShoulder
	void TryToAimDownSights(bool bSkipUpdate); // Function Killstreak.KSCharacter.TryToAimDownSights
	void TryToAimAlternate(bool bSkipUpdate); // Function Killstreak.KSCharacter.TryToAimAlternate
	void ToggleSprint(); // Function Killstreak.KSCharacter.ToggleSprint
	void ToggleScopeZoomIndexUp(); // Function Killstreak.KSCharacter.ToggleScopeZoomIndexUp
	void ToggleScopeZoomIndexLoop(); // Function Killstreak.KSCharacter.ToggleScopeZoomIndexLoop
	void ToggleScopeZoomIndexDown(); // Function Killstreak.KSCharacter.ToggleScopeZoomIndexDown
	void ToggleCrouch(); // Function Killstreak.KSCharacter.ToggleCrouch
	void ToggleCarry(); // Function Killstreak.KSCharacter.ToggleCarry
	void ThrowGrenadeReleased(); // Function Killstreak.KSCharacter.ThrowGrenadeReleased
	void ThrowGrenadePressed(); // Function Killstreak.KSCharacter.ThrowGrenadePressed
	void TagForDownAssist(struct APlayerState* Assistant, float Duration); // Function Killstreak.KSCharacter.TagForDownAssist
	void SwapWeapon(struct AKSWeapon* NextWeapon, bool bForce); // Function Killstreak.KSCharacter.SwapWeapon
	void SwapToSecondary(); // Function Killstreak.KSCharacter.SwapToSecondary
	void SwapToPrimary(); // Function Killstreak.KSCharacter.SwapToPrimary
	void SwapToPreviousWeaponWithLoadedClip(bool bForce); // Function Killstreak.KSCharacter.SwapToPreviousWeaponWithLoadedClip
	void SwapToPreviousWeaponWithAmmo(bool bForce); // Function Killstreak.KSCharacter.SwapToPreviousWeaponWithAmmo
	void SwapToPreviousWeapon(bool bForce); // Function Killstreak.KSCharacter.SwapToPreviousWeapon
	void SwapToNextWeaponWithLoadedClip(bool bForce); // Function Killstreak.KSCharacter.SwapToNextWeaponWithLoadedClip
	void SwapToNextWeaponWithAmmo(bool bForce); // Function Killstreak.KSCharacter.SwapToNextWeaponWithAmmo
	void SwapToNextWeapon(bool bForce); // Function Killstreak.KSCharacter.SwapToNextWeapon
	void SwapToNextGrenade(bool bForce); // Function Killstreak.KSCharacter.SwapToNextGrenade
	void SwapToMelee(); // Function Killstreak.KSCharacter.SwapToMelee
	void SwapToMacGuffin(); // Function Killstreak.KSCharacter.SwapToMacGuffin
	void SwapSeatsTimerComplete(); // Function Killstreak.KSCharacter.SwapSeatsTimerComplete
	void SwapSeatsReleased(); // Function Killstreak.KSCharacter.SwapSeatsReleased
	void SwapSeatsPressed(); // Function Killstreak.KSCharacter.SwapSeatsPressed
	void SwapGrenade(struct AKSWeapon* NextWeapon, bool bForce); // Function Killstreak.KSCharacter.SwapGrenade
	void SwapActiveGrenade(); // Function Killstreak.KSCharacter.SwapActiveGrenade
	void StopRevealedToLocalPlayer(); // Function Killstreak.KSCharacter.StopRevealedToLocalPlayer
	void StopReveal(struct FRevealInfo InRevealInfo); // Function Killstreak.KSCharacter.StopReveal
	void StopKSEffect(struct FName InFXID); // Function Killstreak.KSCharacter.StopKSEffect
	void StopFire(); // Function Killstreak.KSCharacter.StopFire
	bool StopAnimEvent(struct FName AnimEventName, struct UKSCharacterAnimInst* CharAnimInstance); // Function Killstreak.KSCharacter.StopAnimEvent
	void StopAimDownSights(); // Function Killstreak.KSCharacter.StopAimDownSights
	void StopActiveHaul(); // Function Killstreak.KSCharacter.StopActiveHaul
	void StartRevealedToLocalPlayer(); // Function Killstreak.KSCharacter.StartRevealedToLocalPlayer
	void StartLockoutCamera(); // Function Killstreak.KSCharacter.StartLockoutCamera
	struct UKSFXCurveComponent* StartKSSpecialEffect(struct FKSSpecialEffect Effect, float PlayRate, bool bRestart); // Function Killstreak.KSCharacter.StartKSSpecialEffect
	void StartHacking(); // Function Killstreak.KSCharacter.StartHacking
	bool StartFire(); // Function Killstreak.KSCharacter.StartFire
	void SprintImpulseTimelineProgress(float Value); // Function Killstreak.KSCharacter.SprintImpulseTimelineProgress
	void SetupChords(); // Function Killstreak.KSCharacter.SetupChords
	void SetSelfDestruct(bool InSelfDestruct); // Function Killstreak.KSCharacter.SetSelfDestruct
	void SetPrimaryHeatSource(struct UKSHeatSourceComponent* InHeatSource); // Function Killstreak.KSCharacter.SetPrimaryHeatSource
	void SetOnFire(float Duration); // Function Killstreak.KSCharacter.SetOnFire
	void SetNoFire(); // Function Killstreak.KSCharacter.SetNoFire
	void SetInteractionFacesRotation(bool FacesRotation); // Function Killstreak.KSCharacter.SetInteractionFacesRotation
	void SetInteractionCameraTransition(struct FKSInteractableCameraTransition CameraTransition); // Function Killstreak.KSCharacter.SetInteractionCameraTransition
	void SetGodMode(bool InGodMode); // Function Killstreak.KSCharacter.SetGodMode
	void SetActorTargetingMeForRevive(struct AActor* Reviver); // Function Killstreak.KSCharacter.SetActorTargetingMeForRevive
	void SetActiveCameraSimple(struct FName Tag, float InBlendTime); // Function Killstreak.KSCharacter.SetActiveCameraSimple
	void SetActiveCamera(struct FName Tag, struct FViewTargetTransitionParams InBlendParams); // Function Killstreak.KSCharacter.SetActiveCamera
	void ServerTryToCarry(struct AActor* CarryTarget); // Function Killstreak.KSCharacter.ServerTryToCarry
	void ServerSwapToNextGrenade(bool bForce); // Function Killstreak.KSCharacter.ServerSwapToNextGrenade
	void ServerStopGiveUpTimer(); // Function Killstreak.KSCharacter.ServerStopGiveUpTimer
	void ServerStopCarryChecked(struct AActor* CarryTarget); // Function Killstreak.KSCharacter.ServerStopCarryChecked
	void ServerStopCarry(); // Function Killstreak.KSCharacter.ServerStopCarry
	void ServerStartGiveUpTimer(); // Function Killstreak.KSCharacter.ServerStartGiveUpTimer
	void ServerSetActiveWeaponToNone(int32_t InIndex); // Function Killstreak.KSCharacter.ServerSetActiveWeaponToNone
	void ServerRequestActivateAbilityRelease(int32_t Ability); // Function Killstreak.KSCharacter.ServerRequestActivateAbilityRelease
	void ServerRequestActivateAbility(int32_t Ability); // Function Killstreak.KSCharacter.ServerRequestActivateAbility
	void ServerGetInNextEmptySeat(); // Function Killstreak.KSCharacter.ServerGetInNextEmptySeat
	void ServerGetInDriverSeat(); // Function Killstreak.KSCharacter.ServerGetInDriverSeat
	void ServerExitVehicle(); // Function Killstreak.KSCharacter.ServerExitVehicle
	void ServerDropWeapon(struct AKSWeapon* InWeapon); // Function Killstreak.KSCharacter.ServerDropWeapon
	void ServerChangeShoulderCamera(enum class ECameraShoulder InShoulder); // Function Killstreak.KSCharacter.ServerChangeShoulderCamera
	void ServerAbilityWeaponPrepareSwapTo(struct AKSWeapon* Weapon); // Function Killstreak.KSCharacter.ServerAbilityWeaponPrepareSwapTo
	void SelectToRevive(struct AActor* Reviver); // Function Killstreak.KSCharacter.SelectToRevive
	void RotateToFace(struct FVector Location); // Function Killstreak.KSCharacter.RotateToFace
	void ReviveOverlapStopped(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSCharacter.ReviveOverlapStopped
	void ReverseKSEffect(struct FName InFXID); // Function Killstreak.KSCharacter.ReverseKSEffect
	void RevealToWholeTeamWithInfo(float Duration, struct AController* Revealer, struct TArray<struct FRevealInfo> OutRevealInfos, enum class EPlayerSilhouetteType Type, bool Fill, bool Mark); // Function Killstreak.KSCharacter.RevealToWholeTeamWithInfo
	void ResetKSEffectTime(struct FName InFXID); // Function Killstreak.KSCharacter.ResetKSEffectTime
	void ReportFootstepNoise(float Speed); // Function Killstreak.KSCharacter.ReportFootstepNoise
	void ReportFireNoise(float Range); // Function Killstreak.KSCharacter.ReportFireNoise
	void ReportDamageEvent(struct AActor* Damager, float Damage, struct FVector OriginLocation, struct FVector HitLocation); // Function Killstreak.KSCharacter.ReportDamageEvent
	void ReportDamagedNoise(float Damage); // Function Killstreak.KSCharacter.ReportDamagedNoise
	void ReplicateSpecialAmmoEvent(enum class EAmmoType AmmoType, int32_t AmmoDelta, struct FName EventName); // Function Killstreak.KSCharacter.ReplicateSpecialAmmoEvent
	bool RemoveWeaponFromInventory(struct AKSWeapon* InWeapon); // Function Killstreak.KSCharacter.RemoveWeaponFromInventory
	void RemoveSkinTag(struct FGameplayTag InSkinTag); // Function Killstreak.KSCharacter.RemoveSkinTag
	void RemoveParticleEffects(struct TArray<struct UParticleSystemComponent*> ParticleSystems); // Function Killstreak.KSCharacter.RemoveParticleEffects
	void RemoveOutOfRangePickup(struct AActor* OtherActor); // Function Killstreak.KSCharacter.RemoveOutOfRangePickup
	bool RemoveMod(struct UKSPlayerMod* Mod, bool RemoveAll); // Function Killstreak.KSCharacter.RemoveMod
	void RemoveEffectCurve(struct FName InFXID); // Function Killstreak.KSCharacter.RemoveEffectCurve
	void RemoveBlendable(struct TScriptInterface<None> InBlendableObject); // Function Killstreak.KSCharacter.RemoveBlendable
	void RemoveBackpack(); // Function Killstreak.KSCharacter.RemoveBackpack
	void RemoveActionRestriction(int32_t ID); // Function Killstreak.KSCharacter.RemoveActionRestriction
	void RemotePlayerPickupItem(struct AKSItemDrop* ItemDropClass, struct UKSItem* Item); // Function Killstreak.KSCharacter.RemotePlayerPickupItem
	void RemotePlayerInteractStart(float InteractDuration, struct AActor* InteractTarget); // Function Killstreak.KSCharacter.RemotePlayerInteractStart
	void RemotePlayerInteractEnd(enum class EKSInteractionResult Result, struct FVector InteractionLocation, struct AActor* OldInteractTarget); // Function Killstreak.KSCharacter.RemotePlayerInteractEnd
	void RemoteClientNotifyLand(struct FHitResult LandingHit); // Function Killstreak.KSCharacter.RemoteClientNotifyLand
	void Reload(); // Function Killstreak.KSCharacter.Reload
	void ReleaseGiveUp(); // Function Killstreak.KSCharacter.ReleaseGiveUp
	void ReleaseCrouch(); // Function Killstreak.KSCharacter.ReleaseCrouch
	void ReleaseAllActiveInputs(); // Function Killstreak.KSCharacter.ReleaseAllActiveInputs
	void ReleaseActiveInputsOfType(enum class EInputReleaseType InputReleaseType); // Function Killstreak.KSCharacter.ReleaseActiveInputsOfType
	void ReleaseActiveInputs(struct TArray<struct FName> InputsToRelease); // Function Killstreak.KSCharacter.ReleaseActiveInputs
	void RegisterFootstepOverride(struct TScriptInterface<None> ToAdd); // Function Killstreak.KSCharacter.RegisterFootstepOverride
	void ReevaluateNoFire(struct UPrimitiveComponent* LeftOverlapper); // Function Killstreak.KSCharacter.ReevaluateNoFire
	void QuickMeleeHoldTimerComplete(); // Function Killstreak.KSCharacter.QuickMeleeHoldTimerComplete
	bool QueryModsForAnimEvent(struct FName AnimEventName, struct UKSCharacterAnimInst* CharAnimInst); // Function Killstreak.KSCharacter.QueryModsForAnimEvent
	void PrimaryWeaponFOVChanged(float NewFOV); // Function Killstreak.KSCharacter.PrimaryWeaponFOVChanged
	void PrimarySprayDecalExpired(struct UPoolableDecalComponent* InDecalComponent); // Function Killstreak.KSCharacter.PrimarySprayDecalExpired
	void PressGiveUp(); // Function Killstreak.KSCharacter.PressGiveUp
	void PlayVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSCharacter.PlayVO
	void PlayHitFromRadialDamage(struct FDamageEffect Effect); // Function Killstreak.KSCharacter.PlayHitFromRadialDamage
	void PlayHitFromPointDamage(struct FDamageEffect Effect); // Function Killstreak.KSCharacter.PlayHitFromPointDamage
	void PlayActionCameraSequence(struct FName SequenceName); // Function Killstreak.KSCharacter.PlayActionCameraSequence
	void OutOfBoundsWarningEnd(); // Function Killstreak.KSCharacter.OutOfBoundsWarningEnd
	void OutOfBoundsOverlapEnd(); // Function Killstreak.KSCharacter.OutOfBoundsOverlapEnd
	void OutOfBoundsOverlapBegin(float WarningLength); // Function Killstreak.KSCharacter.OutOfBoundsOverlapBegin
	void OnWeaponSwapSuccessful(struct AKSWeapon* FromWeapon, struct AKSWeapon* ToWeapon); // Function Killstreak.KSCharacter.OnWeaponSwapSuccessful
	void OnWeaponSwapFailed(struct AKSWeapon* FromWeapon, struct AKSWeapon* ToWeapon); // Function Killstreak.KSCharacter.OnWeaponSwapFailed
	void OnUnhovered(float ExtraTime); // Function Killstreak.KSCharacter.OnUnhovered
	void OnStopAimDownSightsCheckpoint(); // Function Killstreak.KSCharacter.OnStopAimDownSightsCheckpoint
	void OnStartAimDownSightsCheckpoint(); // Function Killstreak.KSCharacter.OnStartAimDownSightsCheckpoint
	void OnReviveStart(struct AKSCharacter* Reviver, float ReviveTime, bool Remote); // Function Killstreak.KSCharacter.OnReviveStart
	void OnReviveInterrupt(struct AKSCharacter* Reviver); // Function Killstreak.KSCharacter.OnReviveInterrupt
	void OnReviveComplete(struct AKSCharacter* Reviver); // Function Killstreak.KSCharacter.OnReviveComplete
	void OnRep_VehicleState(); // Function Killstreak.KSCharacter.OnRep_VehicleState
	void OnRep_StartingActiveWeaponEquipPoint(); // Function Killstreak.KSCharacter.OnRep_StartingActiveWeaponEquipPoint
	void OnRep_SelfDestruct(); // Function Killstreak.KSCharacter.OnRep_SelfDestruct
	void OnRep_Scrambled(); // Function Killstreak.KSCharacter.OnRep_Scrambled
	void OnRep_ReviveInfo(); // Function Killstreak.KSCharacter.OnRep_ReviveInfo
	void OnRep_RevealedStatus(); // Function Killstreak.KSCharacter.OnRep_RevealedStatus
	void OnRep_OutOfBoundsInfo(); // Function Killstreak.KSCharacter.OnRep_OutOfBoundsInfo
	void OnRep_OnFire(); // Function Killstreak.KSCharacter.OnRep_OnFire
	void OnRep_IsInInteraction(); // Function Killstreak.KSCharacter.OnRep_IsInInteraction
	void OnRep_Health(); // Function Killstreak.KSCharacter.OnRep_Health
	void OnRep_HaulingInfo(); // Function Killstreak.KSCharacter.OnRep_HaulingInfo
	void OnRep_GiveUpTimer(); // Function Killstreak.KSCharacter.OnRep_GiveUpTimer
	void OnRep_Gender(); // Function Killstreak.KSCharacter.OnRep_Gender
	void OnRep_EMPLockout(); // Function Killstreak.KSCharacter.OnRep_EMPLockout
	void OnRep_Emotion(); // Function Killstreak.KSCharacter.OnRep_Emotion
	void OnRep_Downed(); // Function Killstreak.KSCharacter.OnRep_Downed
	void OnRep_CurrentBehaviorState(); // Function Killstreak.KSCharacter.OnRep_CurrentBehaviorState
	void OnRep_CarriedInfo(); // Function Killstreak.KSCharacter.OnRep_CarriedInfo
	void OnRep_CameraShoulder(); // Function Killstreak.KSCharacter.OnRep_CameraShoulder
	void OnRep_CameraPivotTargetActor(); // Function Killstreak.KSCharacter.OnRep_CameraPivotTargetActor
	void OnRep_bRepairableArmorEquipped(); // Function Killstreak.KSCharacter.OnRep_bRepairableArmorEquipped
	void OnRep_Bot(); // Function Killstreak.KSCharacter.OnRep_Bot
	void OnRep_bCanRepairArmor(); // Function Killstreak.KSCharacter.OnRep_bCanRepairArmor
	void OnRep_ApparelAssets(); // Function Killstreak.KSCharacter.OnRep_ApparelAssets
	void OnRep_AllowGiveUp(); // Function Killstreak.KSCharacter.OnRep_AllowGiveUp
	void OnRep_ActiveEquipmentId(); // Function Killstreak.KSCharacter.OnRep_ActiveEquipmentId
	void OnImmuneStart(); // Function Killstreak.KSCharacter.OnImmuneStart
	void OnImmuneEnd(); // Function Killstreak.KSCharacter.OnImmuneEnd
	void OnHovered(); // Function Killstreak.KSCharacter.OnHovered
	void OnGrenadeClassLoaded(struct UKSWeaponAsset_Grenade* pGrenadeWeaponAsset); // Function Killstreak.KSCharacter.OnGrenadeClassLoaded
	void OnGadgetSwapped(); // Function Killstreak.KSCharacter.OnGadgetSwapped
	void OnFieldOfViewModChange(); // Function Killstreak.KSCharacter.OnFieldOfViewModChange
	void OnEndOutOfBounds(); // Function Killstreak.KSCharacter.OnEndOutOfBounds
	void OnDeathDestroy(); // Function Killstreak.KSCharacter.OnDeathDestroy
	void OnDeathCleanup(); // Function Killstreak.KSCharacter.OnDeathCleanup
	void OnBeginOutOfBounds(); // Function Killstreak.KSCharacter.OnBeginOutOfBounds
	void OnArmorRegenerationStart(float RegenerationTime); // Function Killstreak.KSCharacter.OnArmorRegenerationStart
	void OnArmorRegenerationInterrupt(); // Function Killstreak.KSCharacter.OnArmorRegenerationInterrupt
	void OnArmorRegenerationComplete(); // Function Killstreak.KSCharacter.OnArmorRegenerationComplete
	void OnArmorInteractStart(float InteractTime); // Function Killstreak.KSCharacter.OnArmorInteractStart
	void OnArmorInteractInterrupt(); // Function Killstreak.KSCharacter.OnArmorInteractInterrupt
	void OnArmorInteractComplete(); // Function Killstreak.KSCharacter.OnArmorInteractComplete
	void OnApparelTimeoutExpire(); // Function Killstreak.KSCharacter.OnApparelTimeoutExpire
	void NoseDiveCameraTransition(bool bEnterNoseDive, float AnimLength); // Function Killstreak.KSCharacter.NoseDiveCameraTransition
	void NativeJumpToSwingMontage(struct FString SwingMontageSectionName); // Function Killstreak.KSCharacter.NativeJumpToSwingMontage
	void MoveRight(float Value); // Function Killstreak.KSCharacter.MoveRight
	void MoveForward(float Value); // Function Killstreak.KSCharacter.MoveForward
	void MeleeReleased(); // Function Killstreak.KSCharacter.MeleeReleased
	void MeleePressed(); // Function Killstreak.KSCharacter.MeleePressed
	void MedPackReleased(); // Function Killstreak.KSCharacter.MedPackReleased
	void MedPackPressed(); // Function Killstreak.KSCharacter.MedPackPressed
	void LogShotgunHitData(struct FShotgunHitData HitData); // Function Killstreak.KSCharacter.LogShotgunHitData
	void LockShoulderSwap(); // Function Killstreak.KSCharacter.LockShoulderSwap
	void KillIfDowned(); // Function Killstreak.KSCharacter.KillIfDowned
	void JumpToSwingMontage(struct FString SwingMontageSectionName); // Function Killstreak.KSCharacter.JumpToSwingMontage
	bool IsZipLining(); // Function Killstreak.KSCharacter.IsZipLining
	bool IsUsingEmoteCamera(); // Function Killstreak.KSCharacter.IsUsingEmoteCamera
	bool IsShoulderSwapLocked(); // Function Killstreak.KSCharacter.IsShoulderSwapLocked
	bool IsRevivingAnotherPlayer(struct AKSCharacter* OutReviveTarget, bool bCountRemoteRevives); // Function Killstreak.KSCharacter.IsRevivingAnotherPlayer
	bool IsRevealable(); // Function Killstreak.KSCharacter.IsRevealable
	bool IsRepairableArmorEquipped(); // Function Killstreak.KSCharacter.IsRepairableArmorEquipped
	bool IsPerformingAnInteraction(); // Function Killstreak.KSCharacter.IsPerformingAnInteraction
	bool IsOutOfRangePickup(struct AActor* OtherActor); // Function Killstreak.KSCharacter.IsOutOfRangePickup
	bool IsOutOfBounds(float RemainingTime); // Function Killstreak.KSCharacter.IsOutOfBounds
	bool IsOnFire(); // Function Killstreak.KSCharacter.IsOnFire
	bool IsLocallyHovered(); // Function Killstreak.KSCharacter.IsLocallyHovered
	bool IsLobby(); // Function Killstreak.KSCharacter.IsLobby
	bool IsInVehicle(); // Function Killstreak.KSCharacter.IsInVehicle
	bool IsInRagdoll(); // Function Killstreak.KSCharacter.IsInRagdoll
	bool IsInLockoutCameraCooldown(); // Function Killstreak.KSCharacter.IsInLockoutCameraCooldown
	bool IsInLockoutCamera(); // Function Killstreak.KSCharacter.IsInLockoutCamera
	bool IsHaulingRightNow(); // Function Killstreak.KSCharacter.IsHaulingRightNow
	bool IsDowned(); // Function Killstreak.KSCharacter.IsDowned
	bool IsCrosshairHidden(); // Function Killstreak.KSCharacter.IsCrosshairHidden
	bool IsBlinded(); // Function Killstreak.KSCharacter.IsBlinded
	bool IsBeingRevived(struct AKSCharacter* Reviver, float Progress); // Function Killstreak.KSCharacter.IsBeingRevived
	bool IsAnyEquippedWeaponTakingAction(struct AKSWeapon* IgnoredWeapon); // Function Killstreak.KSCharacter.IsAnyEquippedWeaponTakingAction
	bool IsAimLocked(); // Function Killstreak.KSCharacter.IsAimLocked
	bool IsActiveWeapon(struct AKSWeapon* InWeapon); // Function Killstreak.KSCharacter.IsActiveWeapon
	void InvalidateAllRevealOfMe(); // Function Killstreak.KSCharacter.InvalidateAllRevealOfMe
	void InterruptNonCharacterRevive(); // Function Killstreak.KSCharacter.InterruptNonCharacterRevive
	void InterruptAimDownSightsToggle(bool bReturnWhenComplete); // Function Killstreak.KSCharacter.InterruptAimDownSightsToggle
	void InterruptAimAlternateToggle(bool bReturnWhenComplete); // Function Killstreak.KSCharacter.InterruptAimAlternateToggle
	void InstantRevive(struct AKSCharacter* Reviver); // Function Killstreak.KSCharacter.InstantRevive
	void InputStopSprint(); // Function Killstreak.KSCharacter.InputStopSprint
	void InputStopFire(); // Function Killstreak.KSCharacter.InputStopFire
	void InputStartSprint(); // Function Killstreak.KSCharacter.InputStartSprint
	void InputStartFire(); // Function Killstreak.KSCharacter.InputStartFire
	bool InitRagdoll(); // Function Killstreak.KSCharacter.InitRagdoll
	void HideZiplinePulley(); // Function Killstreak.KSCharacter.HideZiplinePulley
	void HideUplineDevice(); // Function Killstreak.KSCharacter.HideUplineDevice
	void HideADSMaterials(); // Function Killstreak.KSCharacter.HideADSMaterials
	bool HasModAny(struct TArray<struct UKSPlayerMod*> TestPlayerMods); // Function Killstreak.KSCharacter.HasModAny
	bool HasMod(struct UKSPlayerMod* TestPlayerMod); // Function Killstreak.KSCharacter.HasMod
	bool HasEquipPoint(struct FGameplayTag EquipPoint); // Function Killstreak.KSCharacter.HasEquipPoint
	void HandleDownEvent(struct FCombatEventInfo EventInfo, int32_t ExpBonus); // Function Killstreak.KSCharacter.HandleDownEvent
	void GiveUpTimerTick(float Seconds); // Function Killstreak.KSCharacter.GiveUpTimerTick
	void GiveUpTimerComplete(); // Function Killstreak.KSCharacter.GiveUpTimerComplete
	void GiveUpTimerActive(bool bActive); // Function Killstreak.KSCharacter.GiveUpTimerActive
	bool GiveModInstance(struct UKSPlayerMod* Mod, struct AKSPlayerState* ModInstigator, struct UKSPlayerModInstance* Instance, bool Unique); // Function Killstreak.KSCharacter.GiveModInstance
	bool GiveMod(struct UKSPlayerMod* Mod, struct AKSPlayerState* ModInstigator, bool Unique); // Function Killstreak.KSCharacter.GiveMod
	struct AKSWeapon* GetWeaponByAsset(struct UKSWeaponAsset* InAsset); // Function Killstreak.KSCharacter.GetWeaponByAsset
	struct AKSWeapon* GetWeaponAtEquipPoint(struct FGameplayTag EquipPoint); // Function Killstreak.KSCharacter.GetWeaponAtEquipPoint
	struct UKSVOComponent* GetVOComponent(); // Function Killstreak.KSCharacter.GetVOComponent
	struct FGameplayTagContainer GetValidWeaponPoints(); // Function Killstreak.KSCharacter.GetValidWeaponPoints
	struct FGameplayTagContainer GetUsedEquipPoints(); // Function Killstreak.KSCharacter.GetUsedEquipPoints
	bool GetSpecialties(struct TArray<struct UKSSpecialty*> OutSpecialties); // Function Killstreak.KSCharacter.GetSpecialties
	struct FName GetSeatAimCameraTag(); // Function Killstreak.KSCharacter.GetSeatAimCameraTag
	struct AKSCharacter* GetReviver(); // Function Killstreak.KSCharacter.GetReviver
	struct FName GetReviveeOverrideMontage(); // Function Killstreak.KSCharacter.GetReviveeOverrideMontage
	struct UKSHeatSourceComponent* GetPrimaryHeatSource(); // Function Killstreak.KSCharacter.GetPrimaryHeatSource
	struct USphereComponent* GetPickupSphere(); // Function Killstreak.KSCharacter.GetPickupSphere
	void GetOverrideByLocation(struct FVector WorldLocation, bool outShouldOverride, struct FName outOverrideName); // Function Killstreak.KSCharacter.GetOverrideByLocation
	struct UKSInteractionType* GetMostRecentInteractionType(); // Function Killstreak.KSCharacter.GetMostRecentInteractionType
	bool GetModInstances(struct TArray<struct UKSPlayerModInstance*> OutMods); // Function Killstreak.KSCharacter.GetModInstances
	float GetMaxHealthBonus(); // Function Killstreak.KSCharacter.GetMaxHealthBonus
	enum class EKSArmVisibilityType GetLeftArmVisibility(); // Function Killstreak.KSCharacter.GetLeftArmVisibility
	bool GetIsInInteraction(); // Function Killstreak.KSCharacter.GetIsInInteraction
	struct AActor* GetInteractionTarget(); // Function Killstreak.KSCharacter.GetInteractionTarget
	void GetHitPawnEffectOverride(struct UParticleSystem* ParticleSystem); // Function Killstreak.KSCharacter.GetHitPawnEffectOverride
	void GetHitHeadAudioEventOverride(struct UAkAudioEvent* SoundEffect); // Function Killstreak.KSCharacter.GetHitHeadAudioEventOverride
	void GetHitByAudioEventOverride(struct UAkAudioEvent* SoundEffect); // Function Killstreak.KSCharacter.GetHitByAudioEventOverride
	void GetHitBodyAudioEventOverride(struct UAkAudioEvent* SoundEffect); // Function Killstreak.KSCharacter.GetHitBodyAudioEventOverride
	float GetGiveUpTime(); // Function Killstreak.KSCharacter.GetGiveUpTime
	enum class EKSCharacterGender GetGender(); // Function Killstreak.KSCharacter.GetGender
	struct UKSFXCurveComponent* GetFXCurveComponentByFXID(struct FName InFXID); // Function Killstreak.KSCharacter.GetFXCurveComponentByFXID
	float GetFlashBangEffectDurationFromDistance(float Distance); // Function Killstreak.KSCharacter.GetFlashBangEffectDurationFromDistance
	bool GetFieldOfViewFromMods(float OutFov); // Function Killstreak.KSCharacter.GetFieldOfViewFromMods
	struct UKSEquipmentManagerComponent* GetEquipmentManagerComponent(); // Function Killstreak.KSCharacter.GetEquipmentManagerComponent
	struct AKSEquipment* GetEquipmentAtEquipPoint(struct FGameplayTag EquipPoint); // Function Killstreak.KSCharacter.GetEquipmentAtEquipPoint
	void GetDownedTransitionMontage(struct UAnimMontage* OutAnimMontage); // Function Killstreak.KSCharacter.GetDownedTransitionMontage
	float GetDownedImmuneTime(); // Function Killstreak.KSCharacter.GetDownedImmuneTime
	enum class ECameraShoulder GetDesiredCameraShoulder(); // Function Killstreak.KSCharacter.GetDesiredCameraShoulder
	struct UKSVehicleSeatComponent* GetCurrentVehicleSeat(); // Function Killstreak.KSCharacter.GetCurrentVehicleSeat
	struct AKSVehicle* GetCurrentVehicle(); // Function Killstreak.KSCharacter.GetCurrentVehicle
	void GetCurrentReviveDuration(float Duration, float RemainingTime); // Function Killstreak.KSCharacter.GetCurrentReviveDuration
	struct FName GetCurrentCharacterEmotionAsName(); // Function Killstreak.KSCharacter.GetCurrentCharacterEmotionAsName
	enum class ECameraShoulder GetCurrentCameraShoulder(); // Function Killstreak.KSCharacter.GetCurrentCameraShoulder
	int32_t GetCurrentAbilityIndex(); // Function Killstreak.KSCharacter.GetCurrentAbilityIndex
	struct FGameplayTagContainer GetCompatibleEquipPoints(struct UKSWeaponAsset* InWeaponAsset); // Function Killstreak.KSCharacter.GetCompatibleEquipPoints
	struct UKSAkComponent* GetCharacterAkComponent(); // Function Killstreak.KSCharacter.GetCharacterAkComponent
	struct TScriptInterface<None> GetCarriedObject(); // Function Killstreak.KSCharacter.GetCarriedObject
	float GetCameraShoulderSwapProgress(); // Function Killstreak.KSCharacter.GetCameraShoulderSwapProgress
	struct UMultiSkinObject* GetBodyApparelSkinObject(); // Function Killstreak.KSCharacter.GetBodyApparelSkinObject
	enum class ECharacterBehaviorState GetBehaviorState(); // Function Killstreak.KSCharacter.GetBehaviorState
	float GetBasePickupRange(); // Function Killstreak.KSCharacter.GetBasePickupRange
	void GetAvailableEquipPoints(struct FGameplayTagContainer OutEquipPoints); // Function Killstreak.KSCharacter.GetAvailableEquipPoints
	float GetArmorDurability(); // Function Killstreak.KSCharacter.GetArmorDurability
	struct UMultiSkinObject* GetApparelSkinObjectByName(struct FName InSkinObjectName); // Function Killstreak.KSCharacter.GetApparelSkinObjectByName
	int32_t GetAmmoCount(enum class EAmmoType AmmoType); // Function Killstreak.KSCharacter.GetAmmoCount
	void GetAllEquippedWeapons(struct TArray<struct AKSWeapon*> OutWeapons); // Function Killstreak.KSCharacter.GetAllEquippedWeapons
	struct UKSWeaponComponent* GetActiveWeaponComponentForSubType(struct FName SubType); // Function Killstreak.KSCharacter.GetActiveWeaponComponentForSubType
	struct UKSWeaponComponent* GetActiveWeaponComponentAtIndex(int32_t Index); // Function Killstreak.KSCharacter.GetActiveWeaponComponentAtIndex
	struct UKSWeaponComponent* GetActiveWeaponComponent(); // Function Killstreak.KSCharacter.GetActiveWeaponComponent
	struct AKSWeapon* GetActiveWeapon(); // Function Killstreak.KSCharacter.GetActiveWeapon
	struct AKSWeapon* GetActiveTemporary(); // Function Killstreak.KSCharacter.GetActiveTemporary
	bool GetActiveMods(struct TArray<struct UKSPlayerMod*> OutMods); // Function Killstreak.KSCharacter.GetActiveMods
	struct AKSWeapon* GetActiveMelee(); // Function Killstreak.KSCharacter.GetActiveMelee
	struct AKSWeapon* GetActiveMedPack(); // Function Killstreak.KSCharacter.GetActiveMedPack
	struct AKSWeapon* GetActiveMainWeapon(); // Function Killstreak.KSCharacter.GetActiveMainWeapon
	struct UKSWeaponAnimInstance* GetActiveKSWeaponAnimInst(int32_t Index); // Function Killstreak.KSCharacter.GetActiveKSWeaponAnimInst
	struct AKSWeapon* GetActiveGrenade(); // Function Killstreak.KSCharacter.GetActiveGrenade
	struct FGameplayTagContainer GetActiveGadgetPoints(); // Function Killstreak.KSCharacter.GetActiveGadgetPoints
	struct FGameplayTagContainer GetActiveEquipPoints(); // Function Killstreak.KSCharacter.GetActiveEquipPoints
	struct FName GetActiveCameraTag(); // Function Killstreak.KSCharacter.GetActiveCameraTag
	struct UCameraComponent* GetActiveCamera(); // Function Killstreak.KSCharacter.GetActiveCamera
	struct AKSWeapon_Aimed* GetActiveAimedWeapon(); // Function Killstreak.KSCharacter.GetActiveAimedWeapon
	bool GetActivatableMods(struct TArray<struct UKSModInst_Activated*> OutMods); // Function Killstreak.KSCharacter.GetActivatableMods
	struct UKSModInst_Activated* GetAbilityMovementMod(); // Function Killstreak.KSCharacter.GetAbilityMovementMod
	void GamepadToggleSprint(); // Function Killstreak.KSCharacter.GamepadToggleSprint
	void GamepadSwapPressed(); // Function Killstreak.KSCharacter.GamepadSwapPressed
	void GamepadSwapMeleePressed(); // Function Killstreak.KSCharacter.GamepadSwapMeleePressed
	void GamepadSwapMacGuffinPressed(); // Function Killstreak.KSCharacter.GamepadSwapMacGuffinPressed
	void GamepadLookUp(float Value); // Function Killstreak.KSCharacter.GamepadLookUp
	void GamepadLookRight(float Value); // Function Killstreak.KSCharacter.GamepadLookRight
	void ForceToShoulder(enum class ECameraShoulder ForcedShoulder); // Function Killstreak.KSCharacter.ForceToShoulder
	void ForceMainCameraBoomUpdate(); // Function Killstreak.KSCharacter.ForceMainCameraBoomUpdate
	void FinishHacking(); // Function Killstreak.KSCharacter.FinishHacking
	int32_t FindTierOfEquipPoint(struct FGameplayTag EquipPoint); // Function Killstreak.KSCharacter.FindTierOfEquipPoint
	struct TArray<int32_t> FindAllTiersOfEquipPoint(struct FGameplayTag EquipPoint); // Function Killstreak.KSCharacter.FindAllTiersOfEquipPoint
	void ExtinguishFire(); // Function Killstreak.KSCharacter.ExtinguishFire
	void ExitVehiclePressed(); // Function Killstreak.KSCharacter.ExitVehiclePressed
	void EventSetupCamerasForSpectator(bool Enabled); // Function Killstreak.KSCharacter.EventSetupCamerasForSpectator
	void EvaluateCameraProximityFade(); // Function Killstreak.KSCharacter.EvaluateCameraProximityFade
	void EndOutOfBounds(); // Function Killstreak.KSCharacter.EndOutOfBounds
	void EndLockoutCamera(); // Function Killstreak.KSCharacter.EndLockoutCamera
	void DrownDamageTick(); // Function Killstreak.KSCharacter.DrownDamageTick
	void DropButtonReleased(); // Function Killstreak.KSCharacter.DropButtonReleased
	void DropButtonPressed(); // Function Killstreak.KSCharacter.DropButtonPressed
	void DropActiveWeapon(); // Function Killstreak.KSCharacter.DropActiveWeapon
	void DropActiveGrenade(); // Function Killstreak.KSCharacter.DropActiveGrenade
	void DownPlayer(struct AController* EventInstigator, struct UDamageType* DamageType, enum class EHitLocationType HitLocationType, struct AActor* DamageCauser, float DamageDealt); // Function Killstreak.KSCharacter.DownPlayer
	void DoSetOnFire(); // Function Killstreak.KSCharacter.DoSetOnFire
	void DoExtinguishFire(); // Function Killstreak.KSCharacter.DoExtinguishFire
	bool DoesTransitionSupportFocalPoint(struct FName ActiveCamera, struct FName PendingCamera); // Function Killstreak.KSCharacter.DoesTransitionSupportFocalPoint
	void DetachViewTargetOnlyBPComponents(); // Function Killstreak.KSCharacter.DetachViewTargetOnlyBPComponents
	void DestructibleSpeedGateOverlappedEvent(struct FVector BreakingLocation, struct FVector BreakingDirection, struct FVector BreakingNormal); // Function Killstreak.KSCharacter.DestructibleSpeedGateOverlappedEvent
	void DamageRecordReset(); // Function Killstreak.KSCharacter.DamageRecordReset
	void CreditEliminationAssist(struct APlayerState* Assistant); // Function Killstreak.KSCharacter.CreditEliminationAssist
	void CreditDownAssist(struct APlayerState* Assistant); // Function Killstreak.KSCharacter.CreditDownAssist
	void ContextualPingRepeat(); // Function Killstreak.KSCharacter.ContextualPingRepeat
	void ContextualPingPressed(); // Function Killstreak.KSCharacter.ContextualPingPressed
	void ContextualPingHoldRelease(); // Function Killstreak.KSCharacter.ContextualPingHoldRelease
	void ContextualPingHold(); // Function Killstreak.KSCharacter.ContextualPingHold
	void ContextualButtonReleased(); // Function Killstreak.KSCharacter.ContextualButtonReleased
	void ContextualButtonPressed(); // Function Killstreak.KSCharacter.ContextualButtonPressed
	void ContextualButtonHeldReleased(); // Function Killstreak.KSCharacter.ContextualButtonHeldReleased
	void ContextualButtonHeld(); // Function Killstreak.KSCharacter.ContextualButtonHeld
	void CompleteNonCharacterRevive(); // Function Killstreak.KSCharacter.CompleteNonCharacterRevive
	void CloneCharacterMesh(struct USkeletalMeshComponent* ClonedMesh); // Function Killstreak.KSCharacter.CloneCharacterMesh
	void ClientSwapTo(struct AKSWeapon* InWeapon); // Function Killstreak.KSCharacter.ClientSwapTo
	void ClientSwapFrom(struct AKSWeapon* InWeapon); // Function Killstreak.KSCharacter.ClientSwapFrom
	void ClientStopInteractAcknowledge(char InInteractRequestId, enum class EKSInteractionResult Result); // Function Killstreak.KSCharacter.ClientStopInteractAcknowledge
	void ClientNotifyStuck(); // Function Killstreak.KSCharacter.ClientNotifyStuck
	void ClientInteractAcknowledge(char InInteractRequestId, bool bFailed, float InteractDuration, bool bRequiresManualInterrupt); // Function Killstreak.KSCharacter.ClientInteractAcknowledge
	void ClientBroadcastModEvent(struct FName ModEvent); // Function Killstreak.KSCharacter.ClientBroadcastModEvent
	void ClearMaxHealthBonus(); // Function Killstreak.KSCharacter.ClearMaxHealthBonus
	void ClearAllApparel(); // Function Killstreak.KSCharacter.ClearAllApparel
	void ClearActorTargetingMeForRevive(); // Function Killstreak.KSCharacter.ClearActorTargetingMeForRevive
	void ChangeShoulderCamera(enum class ECameraShoulder InShoulder); // Function Killstreak.KSCharacter.ChangeShoulderCamera
	bool CanInteractWithTest(struct AActor* InInteractionTarget, bool bPress, bool bHold); // Function Killstreak.KSCharacter.CanInteractWithTest
	bool CanInteractWith(struct AActor* InInteractionTarget); // Function Killstreak.KSCharacter.CanInteractWith
	bool CanGiveUp(); // Function Killstreak.KSCharacter.CanGiveUp
	bool CanFireRightNow(enum class EKSAbilityUsageFailureType OutAbilityFailureType, bool bAltFire, bool bIgnoreNoFire); // Function Killstreak.KSCharacter.CanFireRightNow
	bool CanFireGrenadeNow(bool bBroadcastFeedback); // Function Killstreak.KSCharacter.CanFireGrenadeNow
	void CancelBleed(); // Function Killstreak.KSCharacter.CancelBleed
	bool CanCarryDownedAllies(); // Function Killstreak.KSCharacter.CanCarryDownedAllies
	bool CanBeRevivedBy(struct AKSCharacter* Other, bool bIgnoreOverlap, struct AKSWeapon* IgnoredWeapon); // Function Killstreak.KSCharacter.CanBeRevivedBy
	bool CanAimOverShoulderNow(); // Function Killstreak.KSCharacter.CanAimOverShoulderNow
	bool CanAimDownSightsNow(); // Function Killstreak.KSCharacter.CanAimDownSightsNow
	bool CanAimAlternateNow(); // Function Killstreak.KSCharacter.CanAimAlternateNow
	bool CanActiveWeaponCanToggleOutOfAimDownSightsNow(); // Function Killstreak.KSCharacter.CanActiveWeaponCanToggleOutOfAimDownSightsNow
	bool CanActiveWeaponCanToggleIntoAimDownSightsNow(); // Function Killstreak.KSCharacter.CanActiveWeaponCanToggleIntoAimDownSightsNow
	bool CanActivateAbilityNow(struct UKSModInst_Activated* Mod, bool bBroadcastFeedback); // Function Killstreak.KSCharacter.CanActivateAbilityNow
	void CacheLatestHit(float Damage, struct UDamageType* DamageTypeClass, float DamageImpulse, struct FVector RelativeImpactLocation, struct FName BoneName, struct AActor* DamageCauser); // Function Killstreak.KSCharacter.CacheLatestHit
	void BroadcastWeaponComponentStateChange(uint32_t BroadcastId, uint16_t nEquipmentId, struct FKSWeaponDataUpdateContainer NewState); // Function Killstreak.KSCharacter.BroadcastWeaponComponentStateChange
	void BroadcastWeaponComponentPostReload(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastWeaponComponentPostReload
	void BroadcastWeaponComponentFiredFull(uint32_t BroadcastId, uint16_t nEquipmentId, struct FFullFireRepData Data); // Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredFull
	void BroadcastWeaponComponentFiredAmmo(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredAmmo
	void BroadcastWeaponComponentFiredAimAndAmmo(uint32_t BroadcastId, uint16_t nEquipmentId, struct FAimData Aim, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredAimAndAmmo
	void BroadcastWeaponComponentFired(uint32_t BroadcastId, uint16_t nEquipmentId, struct FAimData Aim); // Function Killstreak.KSCharacter.BroadcastWeaponComponentFired
	void BroadcastWeaponComponentEmptyFire(uint32_t BroadcastId, uint16_t nEquipmentId); // Function Killstreak.KSCharacter.BroadcastWeaponComponentEmptyFire
	void BroadcastWeaponComponentAmmoChange(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastWeaponComponentAmmoChange
	void BroadcastTakeRadialDamage(struct FDamageEffect Effect); // Function Killstreak.KSCharacter.BroadcastTakeRadialDamage
	void BroadcastTakePointDamage(struct FDamageEffect Effect); // Function Killstreak.KSCharacter.BroadcastTakePointDamage
	void BroadcastSpecialAmmoEvent(enum class EAmmoType AmmoType, int32_t AmmoDelta, struct FName EventName); // Function Killstreak.KSCharacter.BroadcastSpecialAmmoEvent
	void BroadcastSkydiveSkipped(); // Function Killstreak.KSCharacter.BroadcastSkydiveSkipped
	void BroadcastReviveStart(struct AKSCharacter* Reviver, float ReviveTime, bool Remote); // Function Killstreak.KSCharacter.BroadcastReviveStart
	void BroadcastReviveInterrupt(struct AKSCharacter* Reviver); // Function Killstreak.KSCharacter.BroadcastReviveInterrupt
	void BroadcastReviveComplete(struct AKSCharacter* Reviver); // Function Killstreak.KSCharacter.BroadcastReviveComplete
	void BroadcastReliableWeaponComponentStateChange(uint32_t BroadcastId, uint16_t nEquipmentId, struct FKSWeaponDataUpdateContainer NewState); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentStateChange
	void BroadcastReliableWeaponComponentPostReload(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentPostReload
	void BroadcastReliableWeaponComponentFiredFull(uint32_t BroadcastId, uint16_t nEquipmentId, struct FFullFireRepData Data); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredFull
	void BroadcastReliableWeaponComponentFiredAmmo(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredAmmo
	void BroadcastReliableWeaponComponentFiredAimAndAmmo(uint32_t BroadcastId, uint16_t nEquipmentId, struct FAimData Aim, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredAimAndAmmo
	void BroadcastReliableWeaponComponentFired(uint32_t BroadcastId, uint16_t nEquipmentId, struct FAimData Aim); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFired
	void BroadcastReliableWeaponComponentEmptyFire(uint32_t BroadcastId, uint16_t nEquipmentId); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentEmptyFire
	void BroadcastReliableWeaponComponentAmmoChange(uint32_t BroadcastId, uint16_t nEquipmentId, char AmmoInClip); // Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentAmmoChange
	void BroadcastModEvent(struct FName ModEvent); // Function Killstreak.KSCharacter.BroadcastModEvent
	void BroadcastGrenadeExplodeInHand(struct UKSWeaponAsset_Grenade* pGrenadeWeaponAsset); // Function Killstreak.KSCharacter.BroadcastGrenadeExplodeInHand
	void BroadcastArmorRegenerationInterrupt(); // Function Killstreak.KSCharacter.BroadcastArmorRegenerationInterrupt
	void BroadcastArmorRegenerationComplete(); // Function Killstreak.KSCharacter.BroadcastArmorRegenerationComplete
	void BroadcastArmorInteractStart(float InteractTime); // Function Killstreak.KSCharacter.BroadcastArmorInteractStart
	void BroadcastArmorInteractInterrupt(); // Function Killstreak.KSCharacter.BroadcastArmorInteractInterrupt
	void BroadcastArmorInteractComplete(float RegenerationTime); // Function Killstreak.KSCharacter.BroadcastArmorInteractComplete
	bool BlueprintHandleDeath(); // Function Killstreak.KSCharacter.BlueprintHandleDeath
	void BeginOutOfBounds(float WarningLength); // Function Killstreak.KSCharacter.BeginOutOfBounds
	void BeginNonCharacterRevive(struct AKSPlayerState* ReviveInstigator, float Duration, struct FName OverrideReviveeMontage); // Function Killstreak.KSCharacter.BeginNonCharacterRevive
	void BeginInstantRevive(struct AKSCharacter* Reviver, float Duration, bool Guaranteed); // Function Killstreak.KSCharacter.BeginInstantRevive
	void AutoSprintTimerComplete(); // Function Killstreak.KSCharacter.AutoSprintTimerComplete
	void AttachViewTargetOnlyBPComponents(); // Function Killstreak.KSCharacter.AttachViewTargetOnlyBPComponents
	void ApplyMaxHealthBonus(float Bonus, struct AController* EventInstigator, struct AActor* EventCauser); // Function Killstreak.KSCharacter.ApplyMaxHealthBonus
	void ApplyLastHitImpulse(bool UpdateTargetRotation, bool AffectCapsule); // Function Killstreak.KSCharacter.ApplyLastHitImpulse
	void ApplyFlinchFromPointDamage(float Damage, struct UDamageType* DamageTypeClass, struct FVector RelativeImpactLocation, struct FVector RelativeImpactNormal, struct FName BoneName, struct AActor* DamageCauser); // Function Killstreak.KSCharacter.ApplyFlinchFromPointDamage
	void ApplyCameraProximityFade(float Alpha); // Function Killstreak.KSCharacter.ApplyCameraProximityFade
	bool ApplyApparelAsset(struct UKSApparelAsset* ApparelAsset); // Function Killstreak.KSCharacter.ApplyApparelAsset
	bool AnyActivatableModsActive(); // Function Killstreak.KSCharacter.AnyActivatableModsActive
	void AnimAuditStop(); // Function Killstreak.KSCharacter.AnimAuditStop
	void AnimAuditStart(); // Function Killstreak.KSCharacter.AnimAuditStart
	void AnimAuditResume(); // Function Killstreak.KSCharacter.AnimAuditResume
	void AnimAuditClear(); // Function Killstreak.KSCharacter.AnimAuditClear
	void AimDownSightsToggle(); // Function Killstreak.KSCharacter.AimDownSightsToggle
	void AimDownSightsReleased(); // Function Killstreak.KSCharacter.AimDownSightsReleased
	void AimDownSightsPressed(); // Function Killstreak.KSCharacter.AimDownSightsPressed
	void AddSkinTag(struct FGameplayTag InSkinTag); // Function Killstreak.KSCharacter.AddSkinTag
	struct TArray<struct UParticleSystemComponent*> AddParticleEffects(struct TArray<struct FKSParticleSystemAttachment> ParticleSystemAttachments); // Function Killstreak.KSCharacter.AddParticleEffects
	void AddOutOfRangePickup(struct AActor* OtherActor, float PickupDistance); // Function Killstreak.KSCharacter.AddOutOfRangePickup
	void AddOrUpdateBlendable(struct TScriptInterface<None> InBlendableObject, float InWeight); // Function Killstreak.KSCharacter.AddOrUpdateBlendable
	int32_t AddActionRestrictionForDuration(struct FKSActionRestrictor ActionRestrictor, float Duration); // Function Killstreak.KSCharacter.AddActionRestrictionForDuration
	int32_t AddActionRestriction(struct FKSActionRestrictor ActionRestrictor); // Function Killstreak.KSCharacter.AddActionRestriction
	bool ActivatableModAtIndexActive(int32_t AbilityIndex); // Function Killstreak.KSCharacter.ActivatableModAtIndexActive
	void AbortFireAllWeapons(); // Function Killstreak.KSCharacter.AbortFireAllWeapons
	void AbilityChargeUpdated(struct UKSPlayerMod_Activated* ChargingMod); // Function Killstreak.KSCharacter.AbilityChargeUpdated
	void AbilityActivated(int32_t AbilityIndex); // Function Killstreak.KSCharacter.AbilityActivated
};

// Class Killstreak.KSCharacterAnimInst
// Size: 0x1010 (Inherited: 0x290)
struct UKSCharacterAnimInst : public UKSAnimInstance {
	bool bEmoteMontagePlayingGlobal; // 0x290(0x01)
	bool bEmoteMontagePlayingLocal; // 0x291(0x01)
	char UnknownData_292[0x2]; // 0x292(0x02)
	struct FName EmoteSlotName; // 0x294(0x08)
	float EmoteFastBlendMultiplier; // 0x29c(0x04)
	float EmoteSlowBlendMultiplier; // 0x2a0(0x04)
	bool bSprayIsPlaying; // 0x2a4(0x01)
	char UnknownData_2A5[0x3]; // 0x2a5(0x03)
	int32_t CurrentMeshLOD; // 0x2a8(0x04)
	float Speed; // 0x2ac(0x04)
	float SpeedXY; // 0x2b0(0x04)
	float SpeedZ; // 0x2b4(0x04)
	float Forward; // 0x2b8(0x04)
	float Right; // 0x2bc(0x04)
	float BodyLean; // 0x2c0(0x04)
	struct FRotator BodyLeanRotator; // 0x2c4(0x0c)
	struct FRotator HeadLeanRotator; // 0x2d0(0x0c)
	bool bEnableAnimMirroring; // 0x2dc(0x01)
	char UnknownData_2DD[0x3]; // 0x2dd(0x03)
	char bCanTransitionDirections : 1; // 0x2e0(0x01)
	char UnknownData_2E0_1 : 7; // 0x2e0(0x01)
	char UnknownData_2E1[0x3]; // 0x2e1(0x03)
	bool bEnableMovementImprovements; // 0x2e4(0x01)
	bool bEnableDynamicLobbyPose; // 0x2e5(0x01)
	char UnknownData_2E6[0x2]; // 0x2e6(0x02)
	float SprintImpulseAmount; // 0x2e8(0x04)
	struct FVector2D SprintLeftRightBodyLeanRange; // 0x2ec(0x08)
	float ForwardRotate; // 0x2f4(0x04)
	float RightRotate; // 0x2f8(0x04)
	float BackRotate; // 0x2fc(0x04)
	float LeftRotate; // 0x300(0x04)
	float ForwardRotatePostMirror; // 0x304(0x04)
	float RightRotatePostMirror; // 0x308(0x04)
	float BackRotatePostMirror; // 0x30c(0x04)
	float LeftRotatePostMirror; // 0x310(0x04)
	struct FVector ForwardCrouchPelvicVector; // 0x314(0x0c)
	struct FVector ForwardCrouchFeetIKVector; // 0x320(0x0c)
	struct FVector BackCrouchPelvicVector; // 0x32c(0x0c)
	struct FVector BackCrouchFeetIKVector; // 0x338(0x0c)
	struct FVector LeftCrouchPelvicVector; // 0x344(0x0c)
	struct FVector LeftCrouchFeetIKVector; // 0x350(0x0c)
	struct FVector RightCrouchPelvicVector; // 0x35c(0x0c)
	struct FVector RightCrouchFeetIKVector; // 0x368(0x0c)
	float ForwardCrouchPelvicOffset; // 0x374(0x04)
	float ForwardCrouchFeetIKOffset; // 0x378(0x04)
	float BackCrouchPelvicOffset; // 0x37c(0x04)
	float BackCrouchFeetIKOffset; // 0x380(0x04)
	float LeftCrouchPelvicOffset; // 0x384(0x04)
	float LeftCrouchFeetIKOffset; // 0x388(0x04)
	float RightCrouchPelvicOffset; // 0x38c(0x04)
	float RightCrouchFeetIKOffset; // 0x390(0x04)
	float CurrentAccelVectorLength; // 0x394(0x04)
	float MaxSlowWalkSpeed; // 0x398(0x04)
	float MaxWalkSpeed; // 0x39c(0x04)
	float MaxADSWalkSpeed; // 0x3a0(0x04)
	float MaxSprintSpeed; // 0x3a4(0x04)
	float MaxCrouchSpeed; // 0x3a8(0x04)
	float MaxADSCrouchSpeed; // 0x3ac(0x04)
	char bShouldTransitionADSCrouch : 1; // 0x3b0(0x01)
	char UnknownData_3B0_1 : 7; // 0x3b0(0x01)
	char UnknownData_3B1[0x3]; // 0x3b1(0x03)
	float CurSpeedFraction; // 0x3b4(0x04)
	float CurMaxSpeed; // 0x3b8(0x04)
	float CurSpeedScaling; // 0x3bc(0x04)
	bool bDoCheckFirstStepCurve; // 0x3c0(0x01)
	char UnknownData_3C1[0x3]; // 0x3c1(0x03)
	float FirstStepTransitionAlpha; // 0x3c4(0x04)
	float SpeedWarpingAlpha; // 0x3c8(0x04)
	float ParachuteMovementPitch; // 0x3cc(0x04)
	float ParachuteMovementYaw; // 0x3d0(0x04)
	float ParachuteMovementForward; // 0x3d4(0x04)
	float ParachuteMovementLateral; // 0x3d8(0x04)
	bool bSkydiveTurnOverridesStrafe; // 0x3dc(0x01)
	bool bIsNoseDiving; // 0x3dd(0x01)
	char UnknownData_3DE[0x2]; // 0x3de(0x02)
	float ParachuteYawInterpSpeed; // 0x3e0(0x04)
	float ParachutePitchInterpSpeed; // 0x3e4(0x04)
	float ParachuteForwardInterpSpeed; // 0x3e8(0x04)
	float ParachuteLateralInterpSpeed; // 0x3ec(0x04)
	float ParachuteForwardThreshold; // 0x3f0(0x04)
	bool bParachuteReady; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	float ParachuteYawRotationFactor; // 0x3f8(0x04)
	struct FVector LastFreeFallMovementVector; // 0x3fc(0x0c)
	struct FFloatHitSpringState HitSpringRollState; // 0x408(0x08)
	struct FFloatHitSpringState HitSpringPitchState; // 0x410(0x08)
	struct FFloatHitSpringState HitSpringYawState; // 0x418(0x08)
	float HitRotationAmountRoll; // 0x420(0x04)
	float HitRotationAmountPitch; // 0x424(0x04)
	float HitRotationAmountYaw; // 0x428(0x04)
	float HitRotationPitchMax; // 0x42c(0x04)
	float HitRotationRollMax; // 0x430(0x04)
	float HitRotationYawMax; // 0x434(0x04)
	struct FVector PelvisHitOffset; // 0x438(0x0c)
	struct FRotator SpineHitOffset; // 0x444(0x0c)
	struct FRotator NeckHitOffset; // 0x450(0x0c)
	struct FRotator ArmHitOffset; // 0x45c(0x0c)
	struct TArray<struct FHitReaction> QueuedHits; // 0x468(0x10)
	struct UCurveVector* HitReactionTimeScale; // 0x478(0x08)
	struct UCurveFloat* HitReactionDamageScale; // 0x480(0x08)
	float ADSHitReactionBlend; // 0x488(0x04)
	float AOSHitReactionBlend; // 0x48c(0x04)
	float HipfireHitReactionBlend; // 0x490(0x04)
	float SimClientHitReactionBlend; // 0x494(0x04)
	float CurrentHitReactionBlend; // 0x498(0x04)
	float SpineFireRotationLimit; // 0x49c(0x04)
	float NeckFireRotationLimit; // 0x4a0(0x04)
	float ClavicleFireRotationLimit; // 0x4a4(0x04)
	float UpperArmFireRotationPitchLimit; // 0x4a8(0x04)
	float UpperArmFireRotationYawLimit; // 0x4ac(0x04)
	float ForearmFireRotationLimit; // 0x4b0(0x04)
	struct FFloatHitSpringState SpineFireSpringState; // 0x4b4(0x08)
	struct FFloatHitSpringState NeckFireSpringState; // 0x4bc(0x08)
	struct FFloatHitSpringState ClavicleFireSpringState; // 0x4c4(0x08)
	struct FFloatHitSpringState UpperArmFireSpringState; // 0x4cc(0x08)
	struct FFloatHitSpringState UpperArmFireYawSpringState; // 0x4d4(0x08)
	struct FFloatHitSpringState ForearmFireSpringState; // 0x4dc(0x08)
	float SpineFireRotationAmountPitch; // 0x4e4(0x04)
	float NeckFireRotationAmountPitch; // 0x4e8(0x04)
	float ClavicleFireRotationAmountYaw; // 0x4ec(0x04)
	float UpperArmFireRotationAmountPitch; // 0x4f0(0x04)
	float UpperArmFireRotationAmountYaw; // 0x4f4(0x04)
	float ForarmFireRotationAmountPitch; // 0x4f8(0x04)
	struct FRotator SpineFireOffset; // 0x4fc(0x0c)
	struct FRotator NeckFireOffset; // 0x508(0x0c)
	struct FRotator ClavicleFireOffset; // 0x514(0x0c)
	struct FRotator UpperArmFireOffset; // 0x520(0x0c)
	struct FRotator ForearmFireOffset; // 0x52c(0x0c)
	float WeaponFireAlpha; // 0x538(0x04)
	float WeaponAdditiveAlpha; // 0x53c(0x04)
	struct FRecoilProfile CurrentRecoilProfile; // 0x540(0x1ec)
	int32_t FireImpulseCounter; // 0x72c(0x04)
	bool bIsRecoiling; // 0x730(0x01)
	bool bBypassRecoiling; // 0x731(0x01)
	char UnknownData_732[0x6]; // 0x732(0x06)
	struct TMap<struct FName, struct UKSCharacterAnimInst*> SubAnimInstances; // 0x738(0x50)
	bool bCanSwitchStartAnim; // 0x788(0x01)
	bool bTriggerCustomPivot; // 0x789(0x01)
	bool bActionDisablesLeftHandIKAlpha; // 0x78a(0x01)
	bool bActionDisablesRightHandIKAlpha; // 0x78b(0x01)
	bool bActionDisablesLeftHandGripOnly; // 0x78c(0x01)
	bool bActionDisablesRightHandGripOnly; // 0x78d(0x01)
	bool bForceDisableLHIK; // 0x78e(0x01)
	bool bForceDisableRHIK; // 0x78f(0x01)
	float ADSRollValue; // 0x790(0x04)
	struct FVector ADSBumpValue; // 0x794(0x0c)
	bool bWantsNonComOffset; // 0x7a0(0x01)
	bool bIsWeaponNonComOffset; // 0x7a1(0x01)
	bool bSkinUseNonComOffset; // 0x7a2(0x01)
	char UnknownData_7A3[0x1]; // 0x7a3(0x01)
	float EngHeadAdditiveAlpha; // 0x7a4(0x04)
	bool bTestGadgetAdditive; // 0x7a8(0x01)
	char UnknownData_7A9[0x3]; // 0x7a9(0x03)
	float LeftHandIKAlpha; // 0x7ac(0x04)
	float LeftHandIKAlphaTarget; // 0x7b0(0x04)
	float RightHandIKAlpha; // 0x7b4(0x04)
	float RightHandIKAlphaTarget; // 0x7b8(0x04)
	float UplineIKAlpha; // 0x7bc(0x04)
	float UplineIKAlphaTarget; // 0x7c0(0x04)
	int32_t NextLeftHandIKForceRequestId; // 0x7c4(0x04)
	bool bLeftHandIKForceOffFromRequests; // 0x7c8(0x01)
	char UnknownData_7C9[0x7]; // 0x7c9(0x07)
	struct TSet<int32_t> LeftHandIkForceOffRequests; // 0x7d0(0x50)
	bool bLeftHandIKOffFromMainInstNotifyStates; // 0x820(0x01)
	char UnknownData_821[0x57]; // 0x821(0x57)
	float FootIKAlpha; // 0x878(0x04)
	float FootIKAlphaTarget; // 0x87c(0x04)
	struct FMulticastInlineDelegate OnBeginZipline; // 0x880(0x10)
	struct FMulticastInlineDelegate OnEndZipline; // 0x890(0x10)
	struct FVector ZiplineRootOffset; // 0x8a0(0x0c)
	struct FVector AppliedADSRootTranslation; // 0x8ac(0x0c)
	struct FVector DefaultADSRootTranslation; // 0x8b8(0x0c)
	bool ApplyAimstoZiplineMontage; // 0x8c4(0x01)
	bool ZiplineMontageLHIKOverride; // 0x8c5(0x01)
	char UnknownData_8C6[0x2]; // 0x8c6(0x02)
	float ZiplineMontageLHIKAlpha; // 0x8c8(0x04)
	bool ActionPreventsZiplineIntro; // 0x8cc(0x01)
	bool ShieldIsActive; // 0x8cd(0x01)
	char UnknownData_8CE[0x2]; // 0x8ce(0x02)
	struct FVector2D ForwardRotateInputRange; // 0x8d0(0x08)
	struct FVector2D ForwardRotateOutputRange; // 0x8d8(0x08)
	struct FVector2D RightRotateInputRange; // 0x8e0(0x08)
	struct FVector2D RightRotateOutputRange; // 0x8e8(0x08)
	enum class EKSMovementDirection MovementDirection; // 0x8f0(0x01)
	enum class EKSMovementDirection LocomotionStartDirection; // 0x8f1(0x01)
	enum class EKSMovementDirection LocomotionStopDirection; // 0x8f2(0x01)
	enum class EKSMovementDirection LocomotionPivotDirection; // 0x8f3(0x01)
	float MovementDirectionRotate; // 0x8f4(0x04)
	float MovementDirectionRotateOnStartOrStop; // 0x8f8(0x04)
	float DirectionBlendSpeed; // 0x8fc(0x04)
	char UnknownData_900[0x4]; // 0x900(0x04)
	float DirectionChangedBlendSpeed; // 0x904(0x04)
	bool bUseLimitedMovement; // 0x908(0x01)
	bool bEngUseLimitedMovement; // 0x909(0x01)
	bool bComUseLimitedMovement; // 0x90a(0x01)
	bool bNonComUseLimitedMovement; // 0x90b(0x01)
	char bZeroVelocity : 1; // 0x90c(0x01)
	char bZeroAcceleration : 1; // 0x90c(0x01)
	char bJumping : 1; // 0x90c(0x01)
	char bWasJumping : 1; // 0x90c(0x01)
	char UnknownData_90C_4 : 4; // 0x90c(0x01)
	char UnknownData_90D[0x3]; // 0x90d(0x03)
	bool bDisableUpperBodyLands; // 0x910(0x01)
	char UnknownData_911[0x3]; // 0x911(0x03)
	char bFalling : 1; // 0x914(0x01)
	char bInFreeFall : 1; // 0x914(0x01)
	char bInWingSuit : 1; // 0x914(0x01)
	char bReadyForFreeFall : 1; // 0x914(0x01)
	char bVaulting : 1; // 0x914(0x01)
	char bIsMantling : 1; // 0x914(0x01)
	char bMantleIsVault : 1; // 0x914(0x01)
	char UnknownData_915[0x3]; // 0x915(0x03)
	float TotalVaultDuration; // 0x918(0x04)
	char UnknownData_91C[0x4]; // 0x91c(0x04)
	struct UAnimSequence* CurrentMantleSequence; // 0x920(0x08)
	struct FMantleConfig CurrentMantleConfig; // 0x928(0xa8)
	float VaultStartTime; // 0x9d0(0x04)
	float PreVaultWorldHeight; // 0x9d4(0x04)
	float CurrentVaultTime; // 0x9d8(0x04)
	char UnknownData_9DC[0x4]; // 0x9dc(0x04)
	struct FInterpCurveFloat VaultTimeScaleCurve; // 0x9e0(0x18)
	struct FInterpCurveFloat VaultScaledVertCurve; // 0x9f8(0x18)
	struct FVector MantleGrabLocation; // 0xa10(0x0c)
	float MantleDistanceToTop; // 0xa1c(0x04)
	struct FVector MantleTowardsWallDir; // 0xa20(0x0c)
	bool bMantleIKLeftHand; // 0xa2c(0x01)
	bool bMantleIKRightHand; // 0xa2d(0x01)
	char UnknownData_A2E[0x2]; // 0xa2e(0x02)
	float MantleIKLeftHandAlpha; // 0xa30(0x04)
	float MantleIKRightHandAlpha; // 0xa34(0x04)
	struct FVector MantleIKLeftHandLocation; // 0xa38(0x0c)
	struct FVector MantleIKRightHandLocation; // 0xa44(0x0c)
	char bDodgeRolling : 1; // 0xa50(0x01)
	char UnknownData_A50_1 : 7; // 0xa50(0x01)
	char UnknownData_A51[0x3]; // 0xa51(0x03)
	float DodgeRollDuration; // 0xa54(0x04)
	char bIsInPowerSlide : 1; // 0xa58(0x01)
	char bAbilityMovement : 1; // 0xa58(0x01)
	char bZipLining : 1; // 0xa58(0x01)
	char bZipLineBracing : 1; // 0xa58(0x01)
	char bZipLineEnding : 1; // 0xa58(0x01)
	char bZipLineIsUpline : 1; // 0xa58(0x01)
	char bZipLineIntro : 1; // 0xa58(0x01)
	char bStunned : 1; // 0xa58(0x01)
	char bIsBlinded : 1; // 0xa59(0x01)
	char bHardLand : 1; // 0xa59(0x01)
	char bCrouching : 1; // 0xa59(0x01)
	char bWantsToCrouch : 1; // 0xa59(0x01)
	char bWasCrouchedBeforeRoll : 1; // 0xa59(0x01)
	char bSprinting : 1; // 0xa59(0x01)
	char bIsInVehicle : 1; // 0xa59(0x01)
	char UnknownData_A5A[0x6]; // 0xa5a(0x06)
	struct UAnimSequence* VehicleIdle; // 0xa60(0x08)
	char bIsSwimming : 1; // 0xa68(0x01)
	char bIsSubmerged : 1; // 0xa68(0x01)
	char UnknownData_A68_2 : 6; // 0xa68(0x01)
	char UnknownData_A69[0x3]; // 0xa69(0x03)
	struct FRotator SwimSpineRotation; // 0xa6c(0x0c)
	float AdditiveLandsAlphaMin; // 0xa78(0x04)
	float AdditiveLandsAlphaMax; // 0xa7c(0x04)
	char bUpdateMovement : 1; // 0xa80(0x01)
	char bCombat : 1; // 0xa80(0x01)
	char bDead : 1; // 0xa80(0x01)
	char bDowned : 1; // 0xa80(0x01)
	char bKnockedBack : 1; // 0xa80(0x01)
	char bIsStopped : 1; // 0xa80(0x01)
	char UnknownData_A80_6 : 2; // 0xa80(0x01)
	char UnknownData_A81[0x3]; // 0xa81(0x03)
	struct FRotator DownedRootFacing; // 0xa84(0x0c)
	struct FMulticastInlineDelegate OnGoDown; // 0xa90(0x10)
	char bActivatingMod : 1; // 0xaa0(0x01)
	char bAnyModsActive : 1; // 0xaa0(0x01)
	char UnknownData_AA0_2 : 6; // 0xaa0(0x01)
	char UnknownData_AA1[0x3]; // 0xaa1(0x03)
	bool bEnableSprintAdditiveForAbilities; // 0xaa4(0x01)
	char UnknownData_AA5[0x3]; // 0xaa5(0x03)
	struct FName InteractionState; // 0xaa8(0x08)
	bool bIsReviving; // 0xab0(0x01)
	char UnknownData_AB1[0x3]; // 0xab1(0x03)
	float IsInVehicleAlpha; // 0xab4(0x04)
	float IsInVehicleInverseAlpha; // 0xab8(0x04)
	float MinZSpeedforJumpLand; // 0xabc(0x04)
	char bCachedCameraLockout : 1; // 0xac0(0x01)
	char bCachedCameraLockoutCooldown : 1; // 0xac0(0x01)
	char UnknownData_AC0_2 : 6; // 0xac0(0x01)
	char UnknownData_AC1[0x7]; // 0xac1(0x07)
	float CachedCameraLockoutAlpha; // 0xac8(0x04)
	char UnknownData_ACC[0x4]; // 0xacc(0x04)
	struct UAnimSequence* FallDown; // 0xad0(0x08)
	float AdditiveLandsAlpha; // 0xad8(0x04)
	bool bDownedCosmetic; // 0xadc(0x01)
	bool bWasRecentlyRevived; // 0xadd(0x01)
	bool bHasManuallyCanceledDownedCosmetic; // 0xade(0x01)
	char UnknownData_ADF[0x1]; // 0xadf(0x01)
	struct FVector AccelDirection; // 0xae0(0x0c)
	struct FVector LocalAccelDirection; // 0xaec(0x0c)
	struct FVector PreviousLocalAccelDirection; // 0xaf8(0x0c)
	struct FVector Velocity; // 0xb04(0x0c)
	struct FVector LocalVelocity; // 0xb10(0x0c)
	struct FVector LocalRelativeVelocity; // 0xb1c(0x0c)
	float FwdBackIntroLean; // 0xb28(0x04)
	float LeftRightIntroLean; // 0xb2c(0x04)
	float IntroLeanMultiplier; // 0xb30(0x04)
	float IntroLeanSpeed; // 0xb34(0x04)
	float VelocityVsAccelDotProduct; // 0xb38(0x04)
	struct FVector FacingDirection; // 0xb3c(0x0c)
	struct FVector FloorNormal; // 0xb48(0x0c)
	struct FVector AccelRightDirection; // 0xb54(0x0c)
	struct FVector AccelNormDirection; // 0xb60(0x0c)
	float SlopeAngle; // 0xb6c(0x04)
	float SlopeAngleTarget; // 0xb70(0x04)
	struct FVector2D SlopeAngleDirectional; // 0xb74(0x08)
	struct FRotator SlopeAngleDirectionalRotation; // 0xb7c(0x0c)
	struct FRotator PowerSlideSlopeAngleRotation; // 0xb88(0x0c)
	float SlopeFeetAlpha; // 0xb94(0x04)
	float SlopeFeetAlphaTarget; // 0xb98(0x04)
	struct FVector FootHeightAdjustmentOnSlope; // 0xb9c(0x0c)
	struct FVector PelvisAdjustmentOnSlope; // 0xba8(0x0c)
	struct FVector RootAdjustmentOnSlope; // 0xbb4(0x0c)
	bool bDisableFeetTilting; // 0xbc0(0x01)
	char UnknownData_BC1[0x3]; // 0xbc1(0x03)
	float fSlopeInterpSpeed; // 0xbc4(0x04)
	enum class EKSLocomotionState LocomotionState; // 0xbc8(0x01)
	bool HasLocomotionStartLocation; // 0xbc9(0x01)
	char UnknownData_BCA[0x2]; // 0xbca(0x02)
	struct FVector LocomotionStartLocation; // 0xbcc(0x0c)
	float DistFromLocomotionStart; // 0xbd8(0x04)
	float DistFromLocomotionStartMax; // 0xbdc(0x04)
	bool HasLocomotionStopLocation; // 0xbe0(0x01)
	char UnknownData_BE1[0x3]; // 0xbe1(0x03)
	struct FVector LocomotionStopLocation; // 0xbe4(0x0c)
	float DistFromLocomotionStop; // 0xbf0(0x04)
	float LocomotionStopBufferTime; // 0xbf4(0x04)
	float LocomotionStopBufferExpireTime; // 0xbf8(0x04)
	bool bSuccessPivotCompleteThisFrame; // 0xbfc(0x01)
	bool HasLocomotionPivotLocation; // 0xbfd(0x01)
	bool HasLocomotionPrePivotLocation; // 0xbfe(0x01)
	bool HasLocomotionPostPivotLocation; // 0xbff(0x01)
	float LocomotionPivotThreshold; // 0xc00(0x04)
	struct FVector LocomotionPivotLocation; // 0xc04(0x0c)
	struct FVector CachedLocomotionPivotLocation; // 0xc10(0x0c)
	float DistFromLocomotionPivot; // 0xc1c(0x04)
	float DistFromLocomotionPivotMax; // 0xc20(0x04)
	struct FVector LocomotionPrePivotLocation; // 0xc24(0x0c)
	float DistFromLocomotionPrePivot; // 0xc30(0x04)
	struct FVector LocomotionPostPivotLocation; // 0xc34(0x0c)
	float DistFromLocomotionPostPivot; // 0xc40(0x04)
	bool bLocomotionStartUsesPivotDistance; // 0xc44(0x01)
	bool HasJumpStartLocation; // 0xc45(0x01)
	char UnknownData_C46[0x2]; // 0xc46(0x02)
	struct FVector JumpStartLocation; // 0xc48(0x0c)
	bool IsSprintJumping; // 0xc54(0x01)
	bool IsShortJumping; // 0xc55(0x01)
	char UnknownData_C56[0x2]; // 0xc56(0x02)
	float DistFromJumpStart; // 0xc58(0x04)
	float DistFromJumpStartMax; // 0xc5c(0x04)
	float ShortJumpThreshold; // 0xc60(0x04)
	bool HasJumpLandLocation; // 0xc64(0x01)
	bool JumpLandLocationOnGround; // 0xc65(0x01)
	char UnknownData_C66[0x2]; // 0xc66(0x02)
	struct FVector JumpLandLocation; // 0xc68(0x0c)
	struct FVector JumpLandLocationTarget; // 0xc74(0x0c)
	float JumpLandLocationInterpSpeed; // 0xc80(0x04)
	char UnknownData_C84[0x1c]; // 0xc84(0x1c)
	float DistFromJumpLand; // 0xca0(0x04)
	float InitialDistFromJumpLand; // 0xca4(0x04)
	float DistFromJumpLandTarget; // 0xca8(0x04)
	float DistFromJumpLandInterpSpeed; // 0xcac(0x04)
	struct FVector SmoothedVelocity; // 0xcb0(0x0c)
	float SmoothedVelocityInterp; // 0xcbc(0x04)
	float SmoothedVelocitySpeedThreshold; // 0xcc0(0x04)
	float SmoothedVelocityInterpRate; // 0xcc4(0x04)
	float SmoothedVelocityInterpRateBelowThreshold; // 0xcc8(0x04)
	float PowerSlideProgress; // 0xccc(0x04)
	float PowerSlideAngle; // 0xcd0(0x04)
	struct FRotator PowerSlideRotation; // 0xcd4(0x0c)
	enum class EKSPowerSlideEndReason PowerSlideEndReason; // 0xce0(0x01)
	bool bIsPowerSlidingOnSlope; // 0xce1(0x01)
	bool bIsLocallyViewed; // 0xce2(0x01)
	bool JumpLandLocationInWater; // 0xce3(0x01)
	float DesiredComponentYaw; // 0xce4(0x04)
	bool bTurnInPlaceInProgress; // 0xce8(0x01)
	char UnknownData_CE9[0x3]; // 0xce9(0x03)
	float TurnInPlaceTurnValue; // 0xcec(0x04)
	float CurrentTurnInPlaceThreshold; // 0xcf0(0x04)
	enum class EKSTurnInPlaceAnimationVariant LastTurnInPlaceAnimationVariant; // 0xcf4(0x01)
	char UnknownData_CF5[0x3]; // 0xcf5(0x03)
	float TurnInPlaceMinThreshold; // 0xcf8(0x04)
	float TurnInPlaceMaxOffset; // 0xcfc(0x04)
	float TurnInPlaceRetriggerMinThreshold; // 0xd00(0x04)
	float TurnInPlaceRecoverySpeedWithAcceleration; // 0xd04(0x04)
	float TurnInPlaceRecoverySpeed90; // 0xd08(0x04)
	float TurnInPlaceRecoverySpeed180; // 0xd0c(0x04)
	struct FRotator AppliedTurnInPlaceRotator; // 0xd10(0x0c)
	struct FRotator WorldTurnInPlaceRotator; // 0xd1c(0x0c)
	char UnknownData_D28[0x10]; // 0xd28(0x10)
	bool bDisableTurnInPlaceCounterRotate; // 0xd38(0x01)
	char UnknownData_D39[0x3]; // 0xd39(0x03)
	float EnableCounterRotateBlendTime; // 0xd3c(0x04)
	float DisableCounterRotateBlendTime; // 0xd40(0x04)
	bool bShouldSplitUpperBody; // 0xd44(0x01)
	bool bEnableSplitUpperBodyForAbilities; // 0xd45(0x01)
	bool bDisableUpperBodyTurnInPlace; // 0xd46(0x01)
	bool bIsLockedToWorldRotation; // 0xd47(0x01)
	bool IsLockedToWorldRotationAlpha; // 0xd48(0x01)
	char UnknownData_D49[0x3]; // 0xd49(0x03)
	struct FRotator LockedWorldRotation; // 0xd4c(0x0c)
	struct TSet<char> WorldRotationLockIds; // 0xd58(0x50)
	char NextWorldRotationLockId; // 0xda8(0x01)
	char UnknownData_DA9[0x1f]; // 0xda9(0x1f)
	bool bIsAimOverShoulder; // 0xdc8(0x01)
	bool bIsLeavingAOS; // 0xdc9(0x01)
	bool bIsAimDownSights; // 0xdca(0x01)
	char UnknownData_DCB[0x1]; // 0xdcb(0x01)
	float IsAimDownSightsAlpha; // 0xdcc(0x04)
	bool bIsAimDownSightsFirstPerson; // 0xdd0(0x01)
	char UnknownData_DD1[0x3]; // 0xdd1(0x03)
	float IsAimDownSightsFirstPersonAlpha; // 0xdd4(0x04)
	bool bIs3PAimDownSights; // 0xdd8(0x01)
	char UnknownData_DD9[0x3]; // 0xdd9(0x03)
	struct FRotator PreviousCachedAimRotation; // 0xddc(0x0c)
	struct FRotator CachedAimRotation; // 0xde8(0x0c)
	struct FRotator DeltaAimRotation; // 0xdf4(0x0c)
	struct FRotator ThirdPersonAppliedAimRotator; // 0xe00(0x0c)
	float ThirdPersonAimYaw; // 0xe0c(0x04)
	float ThirdPersonAimYawInverted; // 0xe10(0x04)
	float ThirdPersonAimYawCosmetic; // 0xe14(0x04)
	float ThirdPersonEngagedAimYawCosmetic; // 0xe18(0x04)
	float ThirdPersonAimPitch; // 0xe1c(0x04)
	float ThirdPersonAimPitchInverted; // 0xe20(0x04)
	float ThirdPersonAimPitchUpline; // 0xe24(0x04)
	float ThirdPersonLean; // 0xe28(0x04)
	float ThirdPersonFwdLean; // 0xe2c(0x04)
	float ThirdPersonLeanAlpha; // 0xe30(0x04)
	float ThirdPersonLeanMultiplier; // 0xe34(0x04)
	float ComLeanMultiplier; // 0xe38(0x04)
	float NonComLeanMultiplier; // 0xe3c(0x04)
	float EngagedLeanMultiplier; // 0xe40(0x04)
	float ThirdPersonLeanSpeed; // 0xe44(0x04)
	float YawDeltaMinimum; // 0xe48(0x04)
	float MinPitchAngle; // 0xe4c(0x04)
	float MaxPitchAngle; // 0xe50(0x04)
	float MinYawAngle; // 0xe54(0x04)
	float MaxYawAngle; // 0xe58(0x04)
	float NormalYawInterpSpeed; // 0xe5c(0x04)
	float ZipLineYawInterpSpeed; // 0xe60(0x04)
	float ZipLineYawInterpSpeedOver180; // 0xe64(0x04)
	float CurrentYawInterpSpeed; // 0xe68(0x04)
	float TargetYawInterpSpeed; // 0xe6c(0x04)
	float NormalYawInterpAcceleration; // 0xe70(0x04)
	float ADSBlendToCrouchSlotTime; // 0xe74(0x04)
	float ADSBlendToStandingSlotTime; // 0xe78(0x04)
	char bIsReloading : 1; // 0xe7c(0x01)
	char bIsSwitchingWeapon : 1; // 0xe7c(0x01)
	char bIsUsingItem : 1; // 0xe7c(0x01)
	char bIsUsingAbility : 1; // 0xe7c(0x01)
	char bIsRetrievingWeapon : 1; // 0xe7c(0x01)
	char bIsHacking : 1; // 0xe7c(0x01)
	char bAttachHandWhileCrouching : 1; // 0xe7c(0x01)
	char bAttachHandMelee : 1; // 0xe7c(0x01)
	char bAttachHandWhileIdle : 1; // 0xe7d(0x01)
	char bAttachHandWhileSprinting : 1; // 0xe7d(0x01)
	char bAttachHandWhileMoving : 1; // 0xe7d(0x01)
	char bAttachHandWhileZiplining : 1; // 0xe7d(0x01)
	char bForceAttachHandIfNotNonCom : 1; // 0xe7d(0x01)
	char bAttachRightHand : 1; // 0xe7d(0x01)
	char bWeaponScale : 1; // 0xe7d(0x01)
	char bRightPropBScale : 1; // 0xe7d(0x01)
	char bLeftPropBScale : 1; // 0xe7e(0x01)
	char bAimsDisabled : 1; // 0xe7e(0x01)
	char bMantlePlaying : 1; // 0xe7e(0x01)
	char bIsPreRagdoll : 1; // 0xe7e(0x01)
	char bIsRagdoll : 1; // 0xe7e(0x01)
	char UnknownData_E7E_5 : 3; // 0xe7e(0x01)
	char UnknownData_E7F[0x1]; // 0xe7f(0x01)
	float LeftPropBScaleAlpha; // 0xe80(0x04)
	float RightPropBScaleAlpha; // 0xe84(0x04)
	float FreeFallAlpha; // 0xe88(0x04)
	float BlindedAlpha; // 0xe8c(0x04)
	float TabletScaleAlpha; // 0xe90(0x04)
	float HolsterLockAlpha; // 0xe94(0x04)
	float PropLockAlpha; // 0xe98(0x04)
	float LeftHolsterLockAlpha; // 0xe9c(0x04)
	struct FRotator DebugDesiredAimDifference; // 0xea0(0x0c)
	bool bUsingZipLineOver180InterpSpeed; // 0xeac(0x01)
	char UnknownData_EAD[0x3]; // 0xead(0x03)
	struct FRotator FirstPersonAppliedAimRotator; // 0xeb0(0x0c)
	struct FVector FirstPersonAppliedBreathStepTranslation; // 0xebc(0x0c)
	float FirstPersonBreathSpeed; // 0xec8(0x04)
	float FirstPersonBreathHeight; // 0xecc(0x04)
	float FirstPersonStepSpeedStanding; // 0xed0(0x04)
	float FirstPersonStepSpeedCrouching; // 0xed4(0x04)
	float FirstPersonStepHeight; // 0xed8(0x04)
	float FirstPersonStepMinSpeed; // 0xedc(0x04)
	struct FRotator FirstPersonLaggingAimRotator; // 0xee0(0x0c)
	float Normal1PAimInterpSpeed; // 0xeec(0x04)
	float CurrentAimPitchSway; // 0xef0(0x04)
	float CurrentAimPitchSwayOffset; // 0xef4(0x04)
	float CurrentAimYawSway; // 0xef8(0x04)
	float CurrentAimYawSwayOffset; // 0xefc(0x04)
	float NormalLeanAndSwayInterpSpeed; // 0xf00(0x04)
	char UnknownData_F04[0xc]; // 0xf04(0x0c)
	float ADSBreathingTime; // 0xf10(0x04)
	float ADSSteppingTime; // 0xf14(0x04)
	bool bScaleOutWeapon; // 0xf18(0x01)
	char UnknownData_F19[0x3]; // 0xf19(0x03)
	float WeaponScaleAlpha; // 0xf1c(0x04)
	bool WeaponScaleLeftPropOnly; // 0xf20(0x01)
	bool WeaponScaleRightPropOnly; // 0xf21(0x01)
	bool bUnarmed; // 0xf22(0x01)
	bool bMelee; // 0xf23(0x01)
	bool bQuickMelee; // 0xf24(0x01)
	bool bIsUsingMedPen; // 0xf25(0x01)
	bool bEnableMeleeLowerBody; // 0xf26(0x01)
	bool bMeleeAim; // 0xf27(0x01)
	bool bMeleeNoAim; // 0xf28(0x01)
	char UnknownData_F29[0x3]; // 0xf29(0x03)
	float MeleeLowerBodyDuration; // 0xf2c(0x04)
	enum class EKSMovementDirection MeleeLowerBodyDirection; // 0xf30(0x01)
	bool bIsUsingTestLocomotion; // 0xf31(0x01)
	enum class ECombatState TestCombatState; // 0xf32(0x01)
	enum class ECombatState CombatState; // 0xf33(0x01)
	enum class ECombatState InitialCombatState; // 0xf34(0x01)
	enum class ECombatState DefaultCombatState; // 0xf35(0x01)
	char UnknownData_F36[0x2]; // 0xf36(0x02)
	float CombatStateCooldownTime; // 0xf38(0x04)
	float TestCombatStateCooldownTime; // 0xf3c(0x04)
	float WeaponCombatStateCooldownTime; // 0xf40(0x04)
	char UnknownData_F44[0x4]; // 0xf44(0x04)
	struct FMulticastInlineDelegate OnCombatStateChanged; // 0xf48(0x10)
	struct FTimerHandle CombatStateCooldownTimer; // 0xf58(0x08)
	struct FTimerHandle TestCombatStateCooldownTimer; // 0xf60(0x08)
	struct FTimerHandle EngHeadAdditiveAlphaTimer; // 0xf68(0x08)
	bool bCooldownBlocked; // 0xf70(0x01)
	char UnknownData_F71[0x3]; // 0xf71(0x03)
	float EngagedBlendTime; // 0xf74(0x04)
	float ComBlendTime; // 0xf78(0x04)
	float NonComBlendTime; // 0xf7c(0x04)
	bool bDownedIdleToCrawlLoop; // 0xf80(0x01)
	bool bDownedCrawlLoopToIdle; // 0xf81(0x01)
	bool bCanBlink; // 0xf82(0x01)
	bool bIsBlinking; // 0xf83(0x01)
	float EyeBlinkAlpha; // 0xf84(0x04)
	float TimeToNextBlink; // 0xf88(0x04)
	float MinimumTimeBetweenBlinks; // 0xf8c(0x04)
	float MaximumTimeBetweenBlinks; // 0xf90(0x04)
	float EyeBlinkSpeed; // 0xf94(0x04)
	struct FTimerHandle BlinkTimer; // 0xf98(0x08)
	enum class EKSEmotion Emotion; // 0xfa0(0x01)
	char UnknownData_FA1[0x3]; // 0xfa1(0x03)
	float EmotionAnimTime; // 0xfa4(0x04)
	struct FMulticastInlineDelegate OnAnimationEvent; // 0xfa8(0x10)
	char UnknownData_FB8[0x10]; // 0xfb8(0x10)
	bool bIsNonComIdle; // 0xfc8(0x01)
	bool bPlayingMirrorTransition; // 0xfc9(0x01)
	bool bAnimMirrorDelay; // 0xfca(0x01)
	bool bDisableMirrorPose; // 0xfcb(0x01)
	bool bWantsMirroredPoseCosmetic; // 0xfcc(0x01)
	char UnknownData_FCD[0x3]; // 0xfcd(0x03)
	float PoseMirrorAlphaCosmetic; // 0xfd0(0x04)
	float MirrorInterpSpeed; // 0xfd4(0x04)
	float MirrorInterpSpeedEngaged; // 0xfd8(0x04)
	float ShoulderSwapProgress; // 0xfdc(0x04)
	enum class ECameraShoulder CurrentShoulderCosmetic; // 0xfe0(0x01)
	char UnknownData_FE1[0x7]; // 0xfe1(0x07)
	struct FBoneMirrorConfig BoneMirrorConfig; // 0xfe8(0x20)
	enum class ECameraShoulder CurrentShoulder; // 0x1008(0x01)
	bool bWantsMirroredPose; // 0x1009(0x01)
	char UnknownData_100A[0x2]; // 0x100a(0x02)
	float PoseMirrorAlpha; // 0x100c(0x04)

	void UpdateTestCombatState(enum class ECombatState NewCombatState, bool bBlockCooldown, bool bForce); // Function Killstreak.KSCharacterAnimInst.UpdateTestCombatState
	void UpdatePostMirrorRotateValues(); // Function Killstreak.KSCharacterAnimInst.UpdatePostMirrorRotateValues
	void UpdateCombatState(enum class ECombatState NewCombatState, bool bBlockCooldown, bool bForce); // Function Killstreak.KSCharacterAnimInst.UpdateCombatState
	void UpdateCachedPivotLocation(); // Function Killstreak.KSCharacterAnimInst.UpdateCachedPivotLocation
	void UnplantRightHand(); // Function Killstreak.KSCharacterAnimInst.UnplantRightHand
	void UnplantLeftHand(); // Function Killstreak.KSCharacterAnimInst.UnplantLeftHand
	void UnhideWeapon(); // Function Killstreak.KSCharacterAnimInst.UnhideWeapon
	void UnhideMag(); // Function Killstreak.KSCharacterAnimInst.UnhideMag
	void UnhideGadget(); // Function Killstreak.KSCharacterAnimInst.UnhideGadget
	void TryToTriggerTurnInPlaceAnimation(enum class EKSTurnInPlaceAnimationVariant AnimationVariant, float DelayTime); // Function Killstreak.KSCharacterAnimInst.TryToTriggerTurnInPlaceAnimation
	struct AKSCharacterBase* TryGetKSCharacterBase(); // Function Killstreak.KSCharacterAnimInst.TryGetKSCharacterBase
	void TriggerDisableAims(bool bShouldDisable); // Function Killstreak.KSCharacterAnimInst.TriggerDisableAims
	void TriggerCustomPivot(); // Function Killstreak.KSCharacterAnimInst.TriggerCustomPivot
	void SwitchWeaponNative(struct UKSWeaponComponent* Weapon); // Function Killstreak.KSCharacterAnimInst.SwitchWeaponNative
	void SwitchWeaponIKNative(struct UKSWeaponComponent* Weapon); // Function Killstreak.KSCharacterAnimInst.SwitchWeaponIKNative
	void StopFire(); // Function Killstreak.KSCharacterAnimInst.StopFire
	void StopEmote(); // Function Killstreak.KSCharacterAnimInst.StopEmote
	void StartRevivee(); // Function Killstreak.KSCharacterAnimInst.StartRevivee
	void StartFire(); // Function Killstreak.KSCharacterAnimInst.StartFire
	void ShoulderCharge(); // Function Killstreak.KSCharacterAnimInst.ShoulderCharge
	void SetMaxSpeedValues(struct UKSWeaponAsset* WeaponAsset); // Function Killstreak.KSCharacterAnimInst.SetMaxSpeedValues
	void ReviveMesh(struct UAnimMontage* ReviveMontage, bool bIsInAir); // Function Killstreak.KSCharacterAnimInst.ReviveMesh
	void RetrieveEnd(); // Function Killstreak.KSCharacterAnimInst.RetrieveEnd
	void RetrieveBegin(); // Function Killstreak.KSCharacterAnimInst.RetrieveBegin
	void RequestNewCombatState(enum class ECombatState NewCombatState, bool bBlockCooldown, bool bForce); // Function Killstreak.KSCharacterAnimInst.RequestNewCombatState
	int32_t RequestLeftHandIKForceOff(); // Function Killstreak.KSCharacterAnimInst.RequestLeftHandIKForceOff
	bool ReleaseWorldRotationLock(char InLockId); // Function Killstreak.KSCharacterAnimInst.ReleaseWorldRotationLock
	bool PopLeftHandIKForceOffRequest(int32_t RequestID); // Function Killstreak.KSCharacterAnimInst.PopLeftHandIKForceOffRequest
	void PlayRecoilProfile(struct FRecoilProfile RecoilProfile); // Function Killstreak.KSCharacterAnimInst.PlayRecoilProfile
	void OnTestCombatStateCooldown(); // Function Killstreak.KSCharacterAnimInst.OnTestCombatStateCooldown
	void OnShoulderChanged(); // Function Killstreak.KSCharacterAnimInst.OnShoulderChanged
	void OnMovementDirectionChanged(enum class EKSMovementDirection OldDirection, enum class EKSMovementDirection NewDirection); // Function Killstreak.KSCharacterAnimInst.OnMovementDirectionChanged
	void OnCombatStateCooldown(); // Function Killstreak.KSCharacterAnimInst.OnCombatStateCooldown
	void LocomotionStop(struct FVector StopLocation); // Function Killstreak.KSCharacterAnimInst.LocomotionStop
	void LocomotionStart(struct FVector StartLocation); // Function Killstreak.KSCharacterAnimInst.LocomotionStart
	void LocomotionPrePivot(); // Function Killstreak.KSCharacterAnimInst.LocomotionPrePivot
	void LocomotionPivotCheckpoint(); // Function Killstreak.KSCharacterAnimInst.LocomotionPivotCheckpoint
	void LocomotionPivot(struct FVector PivotLocation); // Function Killstreak.KSCharacterAnimInst.LocomotionPivot
	void LocomotionJumpStart(struct FVector StartLocation); // Function Killstreak.KSCharacterAnimInst.LocomotionJumpStart
	void LocomotionJumpLand(struct FVector LandLocation); // Function Killstreak.KSCharacterAnimInst.LocomotionJumpLand
	char LockToCurrentInWorldRotation(); // Function Killstreak.KSCharacterAnimInst.LockToCurrentInWorldRotation
	bool IsLeftHandIKForcedOff(); // Function Killstreak.KSCharacterAnimInst.IsLeftHandIKForcedOff
	void HideWeapon(); // Function Killstreak.KSCharacterAnimInst.HideWeapon
	void HideMag(); // Function Killstreak.KSCharacterAnimInst.HideMag
	void HideGadget(); // Function Killstreak.KSCharacterAnimInst.HideGadget
	struct TArray<struct FBoneReference> GetUnpairedMirrorBones(); // Function Killstreak.KSCharacterAnimInst.GetUnpairedMirrorBones
	struct TArray<struct FBoneMirrorPair> GetPairedMirrorBones(); // Function Killstreak.KSCharacterAnimInst.GetPairedMirrorBones
	enum class EKSMovementDirection GetMovementDirectionFromLocalAcceleration(struct FVector NormalizedLocalAccel, bool bGetOppositeDirection); // Function Killstreak.KSCharacterAnimInst.GetMovementDirectionFromLocalAcceleration
	float FloatSpringInterp(float Current, float Target, struct FFloatHitSpringState SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass); // Function Killstreak.KSCharacterAnimInst.FloatSpringInterp
	void EventStopSwimming(); // Function Killstreak.KSCharacterAnimInst.EventStopSwimming
	void EventStopSubmerge(); // Function Killstreak.KSCharacterAnimInst.EventStopSubmerge
	void EventStartSwimming(); // Function Killstreak.KSCharacterAnimInst.EventStartSwimming
	void EventStartSubmerge(); // Function Killstreak.KSCharacterAnimInst.EventStartSubmerge
	void EventStartInteraction(struct FName NewInteractState, float NewInteractHeight, float NewInteractTime); // Function Killstreak.KSCharacterAnimInst.EventStartInteraction
	void EventPlayHitReactionAnimation(struct FName AttackDirection, bool bWillReturnDamage); // Function Killstreak.KSCharacterAnimInst.EventPlayHitReactionAnimation
	void EventPlayFireAnimation(); // Function Killstreak.KSCharacterAnimInst.EventPlayFireAnimation
	bool EventPlayDeathAnimation(); // Function Killstreak.KSCharacterAnimInst.EventPlayDeathAnimation
	void EventEndZipLineEnding(); // Function Killstreak.KSCharacterAnimInst.EventEndZipLineEnding
	void EventEndZipLineBrace(); // Function Killstreak.KSCharacterAnimInst.EventEndZipLineBrace
	void EventEndZipLine(); // Function Killstreak.KSCharacterAnimInst.EventEndZipLine
	void EventEndVault(); // Function Killstreak.KSCharacterAnimInst.EventEndVault
	void EventEndStun(); // Function Killstreak.KSCharacterAnimInst.EventEndStun
	void EventEndPowerSlide(enum class EKSPowerSlideEndReason EndReason); // Function Killstreak.KSCharacterAnimInst.EventEndPowerSlide
	void EventEndInteraction(struct FName OldInteractState); // Function Killstreak.KSCharacterAnimInst.EventEndInteraction
	void EventEndHardLand(); // Function Killstreak.KSCharacterAnimInst.EventEndHardLand
	void EventEndActivatingMod(); // Function Killstreak.KSCharacterAnimInst.EventEndActivatingMod
	void EventEndAbilityMovement(); // Function Killstreak.KSCharacterAnimInst.EventEndAbilityMovement
	void EventDoZipLineEnding(); // Function Killstreak.KSCharacterAnimInst.EventDoZipLineEnding
	void EventDoZipLineBrace(); // Function Killstreak.KSCharacterAnimInst.EventDoZipLineBrace
	void EventDoZipLine(); // Function Killstreak.KSCharacterAnimInst.EventDoZipLine
	void EventDoVault(float InMantleHeight, bool bInVault, float InVaultDrop, float InUpDuration, float InAcrossDuration, float InDownDuration, struct FName InMantleName); // Function Killstreak.KSCharacterAnimInst.EventDoVault
	void EventDoStun(); // Function Killstreak.KSCharacterAnimInst.EventDoStun
	void EventDoPowerSlide(); // Function Killstreak.KSCharacterAnimInst.EventDoPowerSlide
	void EventDoHardLandAvoid(); // Function Killstreak.KSCharacterAnimInst.EventDoHardLandAvoid
	void EventDoHardLand(); // Function Killstreak.KSCharacterAnimInst.EventDoHardLand
	void EventDoGoDown(); // Function Killstreak.KSCharacterAnimInst.EventDoGoDown
	void EventDoDodgeRoll(float Duration, struct FVector2D Direction); // Function Killstreak.KSCharacterAnimInst.EventDoDodgeRoll
	void EventDoActivatingMod(); // Function Killstreak.KSCharacterAnimInst.EventDoActivatingMod
	void EventDoAbilityMovement(); // Function Killstreak.KSCharacterAnimInst.EventDoAbilityMovement
	void EventActivatedModExpired(); // Function Killstreak.KSCharacterAnimInst.EventActivatedModExpired
	void EndRevivee(); // Function Killstreak.KSCharacterAnimInst.EndRevivee
	void EnableAims(); // Function Killstreak.KSCharacterAnimInst.EnableAims
	void EmoteMontageLostAllLocalWeight(); // Function Killstreak.KSCharacterAnimInst.EmoteMontageLostAllLocalWeight
	void EmoteMontageLostAllGlobalWeight(); // Function Killstreak.KSCharacterAnimInst.EmoteMontageLostAllGlobalWeight
	void DoResetCustomPivot(); // Function Killstreak.KSCharacterAnimInst.DoResetCustomPivot
	void DodgeRollExpire(); // Function Killstreak.KSCharacterAnimInst.DodgeRollExpire
	void DisableAims(); // Function Killstreak.KSCharacterAnimInst.DisableAims
	bool CheckCanSpray(); // Function Killstreak.KSCharacterAnimInst.CheckCanSpray
	bool CheckCanEmote(); // Function Killstreak.KSCharacterAnimInst.CheckCanEmote
	bool CanUseCombatState(enum class ECombatState TestState); // Function Killstreak.KSCharacterAnimInst.CanUseCombatState
	void CancelDownedCosmetic(); // Function Killstreak.KSCharacterAnimInst.CancelDownedCosmetic
	void BroadcastOnGoDown(); // Function Killstreak.KSCharacterAnimInst.BroadcastOnGoDown
	void BroadcastAnimationEvent(struct FName EventName); // Function Killstreak.KSCharacterAnimInst.BroadcastAnimationEvent
	void BlinkEyes(); // Function Killstreak.KSCharacterAnimInst.BlinkEyes
	void AttemptTestCombatStateCooldown(); // Function Killstreak.KSCharacterAnimInst.AttemptTestCombatStateCooldown
	void AttemptCombatStateCooldown(); // Function Killstreak.KSCharacterAnimInst.AttemptCombatStateCooldown
	void AnimMirrorDelayEnd(); // Function Killstreak.KSCharacterAnimInst.AnimMirrorDelayEnd
};

// Class Killstreak.KSCharacterCameraShake
// Size: 0x180 (Inherited: 0x160)
struct UKSCharacterCameraShake : public UCameraShake {
	float ADSShakeScale; // 0x158(0x04)
	struct AKSCharacterBase* AttachedCharacter; // 0x160(0x08)
	char UnknownData_16C[0x14]; // 0x16c(0x14)

	void StopShakeOnViewTargetChanged(struct APlayerController* NewController); // Function Killstreak.KSCharacterCameraShake.StopShakeOnViewTargetChanged
	void StopShakeOnActorDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSCharacterCameraShake.StopShakeOnActorDestroyed
	void StopShakeDynamic(); // Function Killstreak.KSCharacterCameraShake.StopShakeDynamic
	void OnAimStateChanged(enum class EKSCharacterAimMode NextAimState); // Function Killstreak.KSCharacterCameraShake.OnAimStateChanged
};

// Class Killstreak.KSCharacterCapsuleComponent
// Size: 0x460 (Inherited: 0x450)
struct UKSCharacterCapsuleComponent : public UCapsuleComponent {
	bool bBeingCarried; // 0x450(0x01)
	char UncarriedCollisionEnabled; // 0x451(0x01)
	char UnknownData_452[0xe]; // 0x452(0x0e)
};

// Class Killstreak.KSCharacterMovementComponent
// Size: 0xba0 (Inherited: 0x610)
struct UKSCharacterMovementComponent : public UCharacterMovementComponent {
	char UnknownData_610[0x18]; // 0x610(0x18)
	float LastNetUpdateTime; // 0x628(0x04)
	float MaxProxyForwardPredictionTime; // 0x62c(0x04)
	char UnknownData_630[0x2]; // 0x630(0x02)
	bool bCanEverSkipProxyPrediction; // 0x632(0x01)
	char UnknownData_633[0x1]; // 0x633(0x01)
	int32_t SkipProxyPredictionLOD; // 0x634(0x04)
	float SkipProxySkydivePredictionDist; // 0x638(0x04)
	bool bSkipProxyPredictionAfterSkydive; // 0x63c(0x01)
	char UnknownData_63D[0x3]; // 0x63d(0x03)
	struct FFindFloorResult LastFloor; // 0x640(0x94)
	char UnknownData_6D4[0xc]; // 0x6d4(0x0c)
	float SlowToCrouchTime; // 0x6e0(0x04)
	char UnknownData_6E4[0x8]; // 0x6e4(0x08)
	float PostCrouchSlowTime; // 0x6ec(0x04)
	char UnknownData_6F0[0x8]; // 0x6f0(0x08)
	struct FVector SimulatedProxyVelocity; // 0x6f8(0x0c)
	bool bCanEverPowerSlide; // 0x704(0x01)
	char UnknownData_705[0x3]; // 0x705(0x03)
	float PowerSlideTurnFrictionMinAngle; // 0x708(0x04)
	float PowerSlideTurnFrictionMaxAngle; // 0x70c(0x04)
	float MinimumStartPowerSlideSpeed; // 0x710(0x04)
	float MinimumPowerSlideSpeed; // 0x714(0x04)
	float PowerSlideInitialSpeedBoost; // 0x718(0x04)
	float PowerSlideLockoutTime; // 0x71c(0x04)
	float MinimumPowerSlideTime; // 0x720(0x04)
	float PowerSlideMaxStepHeight; // 0x724(0x04)
	char UnknownData_728[0x10]; // 0x728(0x10)
	struct FInterpCurveFloat PowerSlideTurnDecelerationCurve; // 0x738(0x18)
	struct FInterpCurveFloat PowerSlideDecelerationCurve; // 0x750(0x18)
	float PowerSlideResistDeceleration; // 0x768(0x04)
	char UnknownData_76C[0x14]; // 0x76c(0x14)
	float FallAimForgivenessPeriod; // 0x780(0x04)
	float FallAimForgivenessEndTime; // 0x784(0x04)
	float MinWalkingAcceleration; // 0x788(0x04)
	float MaxSprintingSpeed; // 0x78c(0x04)
	float MaxWalkSpeedProne; // 0x790(0x04)
	float AimOverShoulderSpeedModifier; // 0x794(0x04)
	float AimDownSightsSpeedModifier; // 0x798(0x04)
	float HaulingSpeedModifier; // 0x79c(0x04)
	float StrafingSpeedFactor; // 0x7a0(0x04)
	float ReverseSpeedFactor; // 0x7a4(0x04)
	char bWantsToSprint : 1; // 0x7a8(0x01)
	char bSprintIsHeld : 1; // 0x7a8(0x01)
	char bSprintIsToggledOn : 1; // 0x7a8(0x01)
	char bSprintInterrupted : 1; // 0x7a8(0x01)
	char bIsJumping : 1; // 0x7a8(0x01)
	char bCachedCharacterAllowSprintingRightNow : 1; // 0x7a8(0x01)
	char bCachedCharacterAllowPowerSlideRightNow : 1; // 0x7a8(0x01)
	char UnknownData_7A9[0x3]; // 0x7a9(0x03)
	float CachedWeaponWalkSpeedModifier; // 0x7ac(0x04)
	float ReducedJumpZVelocity; // 0x7b0(0x04)
	float ReducedJumpHeightWindow; // 0x7b4(0x04)
	char bSprinting : 1; // 0x7b8(0x01)
	char UnknownData_7B8_1 : 7; // 0x7b8(0x01)
	char UnknownData_7B9[0xf]; // 0x7b9(0x0f)
	float MinHardLandingHeight; // 0x7c8(0x04)
	float HardLandingLockoutTime; // 0x7cc(0x04)
	float FreefallLandingLockoutTime; // 0x7d0(0x04)
	enum class EKSCharacterAimMode AimState; // 0x7d4(0x01)
	char UnknownData_7D5[0x3]; // 0x7d5(0x03)
	struct AKSCharacterBase* KSCharacterOwner; // 0x7d8(0x08)
	float MaxSprintingSwimSpeed; // 0x7e0(0x04)
	float MaxSubmergedSwimSpeed; // 0x7e4(0x04)
	float SwimSurfaceAcceleration; // 0x7e8(0x04)
	float SwimSubmergedAcceleration; // 0x7ec(0x04)
	float MaxDownedSwimSpeed; // 0x7f0(0x04)
	float SwimStrafingSpeedFactor; // 0x7f4(0x04)
	float SwimReverseSpeedFactor; // 0x7f8(0x04)
	float MaxSwimZSpeed; // 0x7fc(0x04)
	float SwimZAcceleration; // 0x800(0x04)
	float SurfaceSwimDepth; // 0x804(0x04)
	float SubmergedSwimDepth; // 0x808(0x04)
	float HardMaxSwimDepth; // 0x80c(0x04)
	float FallSpeedWaterDeflectionFactor; // 0x810(0x04)
	float CrouchToSwimDepth; // 0x814(0x04)
	struct TArray<struct FMantleConfig> MantleConfigs; // 0x818(0x10)
	char UnknownData_828[0x10]; // 0x828(0x10)
	float m_fLedgeGrabDistance; // 0x838(0x04)
	float m_fSprintLedgeGrabDistance; // 0x83c(0x04)
	float m_fLedgeGrabbableWallZ; // 0x840(0x04)
	float m_fMaxLedgeCheckHeight; // 0x844(0x04)
	float m_fMinLedgeCheckHeight; // 0x848(0x04)
	float m_fSwimHeightBoost; // 0x84c(0x04)
	float m_fLedgeGrabbableZ; // 0x850(0x04)
	float m_fVaultZSpeed; // 0x854(0x04)
	float m_fEnhancedZSpeed; // 0x858(0x04)
	float m_fVaultLateralSpeed; // 0x85c(0x04)
	float m_fVaultFacingThreshold; // 0x860(0x04)
	float m_fVaultVerticalCheckInterval; // 0x864(0x04)
	float m_fVaultHeadClearance; // 0x868(0x04)
	float m_fMantleDownDistance; // 0x86c(0x04)
	float m_fVaultForwardDistance; // 0x870(0x04)
	float m_fMantleMaxDistance; // 0x874(0x04)
	struct FVector m_vMantleLaunchVelocity; // 0x878(0x0c)
	float m_fVaultErrorForgiveness; // 0x884(0x04)
	float MantleStepHeightProxy; // 0x888(0x04)
	bool bRequireJumpForVault; // 0x88c(0x01)
	char UnknownData_88D[0x3]; // 0x88d(0x03)
	float MaximumVelocityPreserveHeight; // 0x890(0x04)
	float MinimumSpeedForFromJumpMantles; // 0x894(0x04)
	bool bAllowMantleEarlyOutOnFire; // 0x898(0x01)
	bool bRestrictVaultingIntoCrouch; // 0x899(0x01)
	char UnknownData_89A[0x2]; // 0x89a(0x02)
	float VaultFromGroundTraceHeightAdjust; // 0x89c(0x04)
	char UnknownData_8A0[0x38]; // 0x8a0(0x38)
	bool bVaultDebugPrinting; // 0x8d8(0x01)
	char UnknownData_8D9[0x7]; // 0x8d9(0x07)
	struct FMantleConfig CurrentMantleConfig; // 0x8e0(0xa8)
	char UnknownData_988[0x38]; // 0x988(0x38)
	struct FInterpCurveFloat MantleClothSimCurve; // 0x9c0(0x18)
	char UnknownData_9D8[0x10]; // 0x9d8(0x10)
	float m_fPostSprintLockoutTime; // 0x9e8(0x04)
	float m_fRemainingPostSprintLockoutTime; // 0x9ec(0x04)
	float FreeFallClearanceHeight; // 0x9f0(0x04)
	float MinFreeFallSpeedZ; // 0x9f4(0x04)
	float DefaultFreeFallSpeedZ; // 0x9f8(0x04)
	float MaxFreeFallSpeedZ; // 0x9fc(0x04)
	float MinFreeFallForwardSpeed; // 0xa00(0x04)
	float DefaultFreeFallForwardSpeed; // 0xa04(0x04)
	float MaxFreeFallForwardSpeed; // 0xa08(0x04)
	float MaxDiveForwardSpeed; // 0xa0c(0x04)
	float MaxFreeFallLateralSpeed; // 0xa10(0x04)
	float MaxFreeFallLateralAcceleration; // 0xa14(0x04)
	float MaxFreeFallReverseAcceleration; // 0xa18(0x04)
	float FreeFallAirControl; // 0xa1c(0x04)
	float FreeFallDelay; // 0xa20(0x04)
	bool bInFreeFall; // 0xa24(0x01)
	bool bWingsuitHasBeenDisabled; // 0xa25(0x01)
	char UnknownData_A26[0x2]; // 0xa26(0x02)
	float FreeFallBrakingAcceleration; // 0xa28(0x04)
	float FreeFallDiveThresholdAngle; // 0xa2c(0x04)
	float FreeFallDiveForwardInputThreshold; // 0xa30(0x04)
	bool bWantsToEndFreeFallEarly; // 0xa34(0x01)
	char UnknownData_A35[0x13]; // 0xa35(0x13)
	bool bIsFreeFallDiving; // 0xa48(0x01)
	char UnknownData_A49[0x3]; // 0xa49(0x03)
	struct FRotator LastYawRotation; // 0xa4c(0x0c)
	float FreeFallYawAccumDeltaTime; // 0xa58(0x04)
	float FreeFallYawTotalDeltaTime; // 0xa5c(0x04)
	float FreeFallDelayProgress; // 0xa60(0x04)
	struct FWeakObjectPtr<struct AActor> FreeFallHeightActor; // 0xa64(0x08)
	bool bUseFreeFallStartHeight; // 0xa6c(0x01)
	char UnknownData_A6D[0x3]; // 0xa6d(0x03)
	float FreeFallNetSmoothTime; // 0xa70(0x04)
	float PostFreeFallNetSmoothTimeRecoveryRate; // 0xa74(0x04)
	char UnknownData_A78[0x1]; // 0xa78(0x01)
	bool bWingsuitControls; // 0xa79(0x01)
	char UnknownData_A7A[0x2]; // 0xa7a(0x02)
	float WingsuitGlideDragCoefficient; // 0xa7c(0x04)
	float WingsuitDiveDragCoefficient; // 0xa80(0x04)
	float WingsuitGlideSurfaceArea; // 0xa84(0x04)
	float WingsuitDiveSurfaceArea; // 0xa88(0x04)
	char bCachedCharacterAllowDodgeRollRightNow : 1; // 0xa8c(0x01)
	char bStartDodgeRoll : 1; // 0xa8c(0x01)
	char UnknownData_A8C_2 : 6; // 0xa8c(0x01)
	char UnknownData_A8D[0x3]; // 0xa8d(0x03)
	bool bWantsToDodgeRollOnLanding; // 0xa90(0x01)
	char UnknownData_A91[0x3]; // 0xa91(0x03)
	float MaxDodgeRollSpeed; // 0xa94(0x04)
	float DodgeRollDistance; // 0xa98(0x04)
	bool bCanDodgeRollFromAimDownSights; // 0xa9c(0x01)
	char UnknownData_A9D[0x3]; // 0xa9d(0x03)
	float DodgeRollCooldownTime; // 0xaa0(0x04)
	char UnknownData_AA4[0x4]; // 0xaa4(0x04)
	float DodgeRollForgivenessPeriod; // 0xaa8(0x04)
	float DodgeRollForgivenessEndTime; // 0xaac(0x04)
	char UnknownData_AB0[0x14]; // 0xab0(0x14)
	float DodgeRollAcceleration; // 0xac4(0x04)
	float BrakingDecelerationPostDodgeRoll; // 0xac8(0x04)
	bool bEnableBrakingDecelerationPostDodgeRoll; // 0xacc(0x01)
	char UnknownData_ACD[0x3]; // 0xacd(0x03)
	struct FInterpCurveFloat DodgeRollVelocityCurve; // 0xad0(0x18)
	struct FInterpCurveFloat DodgeRollClothSimCurve; // 0xae8(0x18)
	char bCachedCharacterAllowLungeRightNow : 1; // 0xb00(0x01)
	char UnknownData_B00_1 : 7; // 0xb00(0x01)
	char UnknownData_B01[0x3]; // 0xb01(0x03)
	float CurrentLungeDistance; // 0xb04(0x04)
	float MaxLungeDistance; // 0xb08(0x04)
	char UnknownData_B0C[0x4]; // 0xb0c(0x04)
	struct AActor* LungeTarget; // 0xb10(0x08)
	float CurrentLungeDuration; // 0xb18(0x04)
	float MaxLungeDuration; // 0xb1c(0x04)
	float LungeAcceleration; // 0xb20(0x04)
	float MaxLungeSpeed; // 0xb24(0x04)
	float LungeStopLateralDistance; // 0xb28(0x04)
	float LungeStopVerticalDistance; // 0xb2c(0x04)
	float LungeAirControl; // 0xb30(0x04)
	char UnknownData_B34[0x1c]; // 0xb34(0x1c)
	struct USplineComponent* FlightRecoverySplineComponent; // 0xb50(0x08)
	char UnknownData_B58[0x4]; // 0xb58(0x04)
	float FlightRecoverySpeed; // 0xb5c(0x04)
	char bCachedCharacterAllowAbilityMoveRightNow : 1; // 0xb60(0x01)
	char bStartAbilityMovement : 1; // 0xb60(0x01)
	char UnknownData_B60_2 : 6; // 0xb60(0x01)
	char UnknownData_B61[0x7]; // 0xb61(0x07)
	char bCachedCharacterAllowZipLineRightNow : 1; // 0xb68(0x01)
	char UnknownData_B68_1 : 7; // 0xb68(0x01)
	char UnknownData_B69[0x7]; // 0xb69(0x07)
	bool bZiplineEndsEnforceDirection; // 0xb70(0x01)
	bool bAllowDodgeRollIntoZipline; // 0xb71(0x01)
	bool bRequireJumpForZipline; // 0xb72(0x01)
	bool bRequireDownwardMovementToZipline; // 0xb73(0x01)
	bool bAllowZiplineReverseViaDodgeRoll; // 0xb74(0x01)
	char UnknownData_B75[0x3]; // 0xb75(0x03)
	float ZiplineAcceleration; // 0xb78(0x04)
	char UnknownData_B7C[0x1]; // 0xb7c(0x01)
	bool bEnableFriendlyNudging; // 0xb7d(0x01)
	char UnknownData_B7E[0x2]; // 0xb7e(0x02)
	float NudgeSpeed; // 0xb80(0x04)
	float MaxNudgeDistance; // 0xb84(0x04)
	char UnknownData_B88[0x8]; // 0xb88(0x08)
	float MaxEmoteInterruptDistance; // 0xb90(0x04)
	float MaxEmoteMovingInterruptDistance; // 0xb94(0x04)
	float CachedMaxEmoteInteruptDistance; // 0xb98(0x04)
	char UnknownData_B9C[0x4]; // 0xb9c(0x04)

	void ResetPostFireSprintLockout(); // Function Killstreak.KSCharacterMovementComponent.ResetPostFireSprintLockout
	bool IsZipLining(); // Function Killstreak.KSCharacterMovementComponent.IsZipLining
	bool IsStandingStill(); // Function Killstreak.KSCharacterMovementComponent.IsStandingStill
	bool IsSprintingWithVelocity(); // Function Killstreak.KSCharacterMovementComponent.IsSprintingWithVelocity
	bool IsSprinting(); // Function Killstreak.KSCharacterMovementComponent.IsSprinting
	bool IsInPowerSlide(); // Function Killstreak.KSCharacterMovementComponent.IsInPowerSlide
	bool IsFlightRecovery(); // Function Killstreak.KSCharacterMovementComponent.IsFlightRecovery
	bool IsDowned(); // Function Killstreak.KSCharacterMovementComponent.IsDowned
	bool IsDodgeRolling(); // Function Killstreak.KSCharacterMovementComponent.IsDodgeRolling
	bool IsAimingOverShoulder(); // Function Killstreak.KSCharacterMovementComponent.IsAimingOverShoulder
	bool IsAimingDownSights(); // Function Killstreak.KSCharacterMovementComponent.IsAimingDownSights
	bool IsAimingAlternate(); // Function Killstreak.KSCharacterMovementComponent.IsAimingAlternate
	bool IsAiming(); // Function Killstreak.KSCharacterMovementComponent.IsAiming
	bool GetWantsToSprint(); // Function Killstreak.KSCharacterMovementComponent.GetWantsToSprint
	bool GetWantsToPowerSlide(); // Function Killstreak.KSCharacterMovementComponent.GetWantsToPowerSlide
	float GetProratedMaxSpeed(); // Function Killstreak.KSCharacterMovementComponent.GetProratedMaxSpeed
	struct FVector FindPointAboveWater(struct FVector TestPoint); // Function Killstreak.KSCharacterMovementComponent.FindPointAboveWater
	void ClientAdjustPositionVault(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, struct FVector NewPreVaultLocation, float NewLastEvalTime); // Function Killstreak.KSCharacterMovementComponent.ClientAdjustPositionVault
	void ClientAdjustPositionDodgeRoll(float Timestamp, struct FVector NewLoc, struct FVector NewVel, struct UPrimitiveComponent* NewBase, struct FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, float NewDodgeDuration, float NewDodgeDirection); // Function Killstreak.KSCharacterMovementComponent.ClientAdjustPositionDodgeRoll
};

// Class Killstreak.KSSkeletalMeshComponent
// Size: 0xd70 (Inherited: 0xd20)
struct UKSSkeletalMeshComponent : public USkinnableMergedMeshComponent {
	bool bForceTextureResidentFlagOnAllTextures; // 0xd18(0x01)
	char UnknownData_D21[0xf]; // 0xd21(0x0f)
	float TeleportDistanceDeltaThreshold; // 0xd30(0x04)
	char UnknownData_D34[0x1c]; // 0xd34(0x1c)
	bool bEnableDedicatedServerRequiredBones; // 0xd50(0x01)
	char UnknownData_D51[0x7]; // 0xd51(0x07)
	struct TArray<struct FName> RequiredDedicatedServerBoneNames; // 0xd58(0x10)
	char UnknownData_D68[0x8]; // 0xd68(0x08)

	void SetTeleportDistanceDeltaThreshold(float Threshold); // Function Killstreak.KSSkeletalMeshComponent.SetTeleportDistanceDeltaThreshold
	void SetForceTextureResidentFlag(bool bEnable); // Function Killstreak.KSSkeletalMeshComponent.SetForceTextureResidentFlag
	float GetTeleportDistanceDeltaThreshold(); // Function Killstreak.KSSkeletalMeshComponent.GetTeleportDistanceDeltaThreshold
	bool GetForceTextureResidentFlag(); // Function Killstreak.KSSkeletalMeshComponent.GetForceTextureResidentFlag
};

// Class Killstreak.KSCharacterSkeletalMeshComponent
// Size: 0xdf0 (Inherited: 0xd70)
struct UKSCharacterSkeletalMeshComponent : public UKSSkeletalMeshComponent {
	struct TMap<struct FName, struct UPhysicsAsset*> ChildPhysicsAssetMap; // 0xd68(0x50)
	struct TArray<struct FKSChildPhysicsAssetKeywords> ChildPhysicsAssetKeywords; // 0xdb8(0x10)
	bool bBasePhysicsAssetChanged; // 0xdc8(0x01)
	struct FWeakObjectPtr<struct UPhysicsAsset> LastBasePhysAssetFromMesh; // 0xdcc(0x08)
	struct TArray<struct FChildBodyCollisionProfileCache> PreRegistrationChildCollisionCache; // 0xdd8(0x10)
	char UnknownData_DE9[0x7]; // 0xde9(0x07)
};

// Class Killstreak.KSCharacterSocketComponent
// Size: 0x220 (Inherited: 0x210)
struct UKSCharacterSocketComponent : public USceneComponent {
	struct FName SocketLookupName; // 0x208(0x08)
	enum class EKSSocketOffsetType OffsetType; // 0x210(0x01)
	enum class EKSSocketCrouchHandling CrouchingHandlingType; // 0x211(0x01)
	struct FVector AdditiveCrouchOffset; // 0x214(0x0c)
};

// Class Killstreak.KSCheatComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UKSCheatComponent : public UPGame_CheatComponent {
	float WeaponStatDisplayTime; // 0xb0(0x04)
	float DifficultyLevelsDisplayTime; // 0xb4(0x04)
	char r_bNoCooldown : 1; // 0xb8(0x01)
	char r_bNoEnergyUsage : 1; // 0xb8(0x01)
	char r_bNoDamageTaken : 1; // 0xb8(0x01)
	char r_CanViewHealth : 1; // 0xb8(0x01)
	char r_CanViewLocation : 1; // 0xb8(0x01)
	char r_HudVisible : 1; // 0xb8(0x01)
	char UnknownData_B8_6 : 2; // 0xb8(0x01)
	char UnknownData_B9[0x7]; // 0xb9(0x07)
	struct TArray<struct FString> CachedWeaponStats; // 0xc0(0x10)
	float WeaponDisplayStartTime; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FString> CachedDifficultyLevels; // 0xd8(0x10)
	float DifficultyLevelsDisplayStartTime; // 0xe8(0x04)
	struct FVector2D BaseDrawPosition; // 0xec(0x08)
	char UnknownData_F4[0x4]; // 0xf4(0x04)

	void WarpZ(float Z); // Function Killstreak.KSCheatComponent.WarpZ
	void WarpToSpawn(); // Function Killstreak.KSCheatComponent.WarpToSpawn
	void Warp(float X, float Y, float Z); // Function Killstreak.KSCheatComponent.Warp
	void ToggleWeaponDebug(); // Function Killstreak.KSCheatComponent.ToggleWeaponDebug
	void ToggleHud(); // Function Killstreak.KSCheatComponent.ToggleHud
	void ToggleGamepadAimDebug(); // Function Killstreak.KSCheatComponent.ToggleGamepadAimDebug
	void ToggleBotsPaused(); // Function Killstreak.KSCheatComponent.ToggleBotsPaused
	void TestPreviewActor(struct FString JobName, int32_t PositionIndex); // Function Killstreak.KSCheatComponent.TestPreviewActor
	void TakeDamage(struct FString WeaponName, float Amount, bool Head); // Function Killstreak.KSCheatComponent.TakeDamage
	void Suicide(); // Function Killstreak.KSCheatComponent.Suicide
	void Spectate(); // Function Killstreak.KSCheatComponent.Spectate
	void Spawn(struct FString BotName, int32_t TeamNum, int32_t Count, float Offset); // Function Killstreak.KSCheatComponent.Spawn
	void ShowWeaponStats(); // Function Killstreak.KSCheatComponent.ShowWeaponStats
	void ShowLocation(bool Visible); // Function Killstreak.KSCheatComponent.ShowLocation
	void ShowKillCamWorld(float Duration); // Function Killstreak.KSCheatComponent.ShowKillCamWorld
	void ShowHealth(bool Visible); // Function Killstreak.KSCheatComponent.ShowHealth
	void ShowDifficulties(); // Function Killstreak.KSCheatComponent.ShowDifficulties
	void ShowBots(bool Show); // Function Killstreak.KSCheatComponent.ShowBots
	void SetTimeLeft(float Seconds); // Function Killstreak.KSCheatComponent.SetTimeLeft
	void SetTeam(int32_t Team); // Function Killstreak.KSCheatComponent.SetTeam
	void SetGroundSpeed(float Speed); // Function Killstreak.KSCheatComponent.SetGroundSpeed
	void SetDifficulty(int32_t TeamNumber, int32_t DifficultyIndex); // Function Killstreak.KSCheatComponent.SetDifficulty
	void SetBotsPaused(bool bShouldPause); // Function Killstreak.KSCheatComponent.SetBotsPaused
	void ServerWarpZ(float Z); // Function Killstreak.KSCheatComponent.ServerWarpZ
	void ServerWarpToSpawn(); // Function Killstreak.KSCheatComponent.ServerWarpToSpawn
	void ServerWarp(float X, float Y, float Z); // Function Killstreak.KSCheatComponent.ServerWarp
	void ServerToggleHud(); // Function Killstreak.KSCheatComponent.ServerToggleHud
	void ServerTakeDamage(struct FString WeaponName, float Amount, bool Head); // Function Killstreak.KSCheatComponent.ServerTakeDamage
	void ServerSuicide(); // Function Killstreak.KSCheatComponent.ServerSuicide
	void ServerSpectate(); // Function Killstreak.KSCheatComponent.ServerSpectate
	void ServerSpawn(struct FString BotName, int32_t TeamNum, int32_t Count, float Offset); // Function Killstreak.KSCheatComponent.ServerSpawn
	void ServerShowLocation(bool Visible); // Function Killstreak.KSCheatComponent.ServerShowLocation
	void ServerShowHealth(bool Visible); // Function Killstreak.KSCheatComponent.ServerShowHealth
	void ServerShowDifficulties(); // Function Killstreak.KSCheatComponent.ServerShowDifficulties
	void ServerShowBots(bool Show); // Function Killstreak.KSCheatComponent.ServerShowBots
	void ServerSetTimeLeft(float Seconds); // Function Killstreak.KSCheatComponent.ServerSetTimeLeft
	void ServerSetTeam(int32_t Team); // Function Killstreak.KSCheatComponent.ServerSetTeam
	void ServerSetGroundSpeed(float Speed); // Function Killstreak.KSCheatComponent.ServerSetGroundSpeed
	void ServerSetDifficulty(int32_t TeamNumber, int32_t DifficultyIndex); // Function Killstreak.KSCheatComponent.ServerSetDifficulty
	void ServerSetBotsPaused(bool bShouldPause, bool bShouldToggle); // Function Killstreak.KSCheatComponent.ServerSetBotsPaused
	void ServerRemoveFromLoadout(struct FString ItemName); // Function Killstreak.KSCheatComponent.ServerRemoveFromLoadout
	void ServerRemoveAllMods(); // Function Killstreak.KSCheatComponent.ServerRemoveAllMods
	void ServerQuickEndGame(struct AKSTeamState* WinningTeam); // Function Killstreak.KSCheatComponent.ServerQuickEndGame
	void ServerInvisMe(bool Invis); // Function Killstreak.KSCheatComponent.ServerInvisMe
	void ServerInstantReplay(float TimeToReplay, float Duration); // Function Killstreak.KSCheatComponent.ServerInstantReplay
	void ServerInfiniteAmmo(bool Infinite); // Function Killstreak.KSCheatComponent.ServerInfiniteAmmo
	void ServerGod(); // Function Killstreak.KSCheatComponent.ServerGod
	void ServerGiveKSPoints(int32_t Amount); // Function Killstreak.KSCheatComponent.ServerGiveKSPoints
	void ServerGiveAsync(struct FString ItemName); // Function Killstreak.KSCheatComponent.ServerGiveAsync
	void ServerGiveAllKSPoints(int32_t Amount); // Function Killstreak.KSCheatComponent.ServerGiveAllKSPoints
	void ServerGive(struct FString ItemName); // Function Killstreak.KSCheatComponent.ServerGive
	void ServerEnableTeamSurrender(struct AKSTeamState* Team); // Function Killstreak.KSCheatComponent.ServerEnableTeamSurrender
	void ServerEnableKillCam(); // Function Killstreak.KSCheatComponent.ServerEnableKillCam
	void ServerDrop(struct FString ItemName); // Function Killstreak.KSCheatComponent.ServerDrop
	void ServerDisableAFKTimer(); // Function Killstreak.KSCheatComponent.ServerDisableAFKTimer
	void ServerCharReset(); // Function Killstreak.KSCheatComponent.ServerCharReset
	void ServerChangeCash(int32_t CashDelta); // Function Killstreak.KSCheatComponent.ServerChangeCash
	void ServerBotGodMode(bool Enable); // Function Killstreak.KSCheatComponent.ServerBotGodMode
	void ServerAttach(struct FString AttachmentName); // Function Killstreak.KSCheatComponent.ServerAttach
	void ServerAdjustDifficulty(int32_t Amount); // Function Killstreak.KSCheatComponent.ServerAdjustDifficulty
	void ServerAddToLoadout(struct FString ItemName); // Function Killstreak.KSCheatComponent.ServerAddToLoadout
	void ServerAddAttachmentToLoadout(struct FString ItemName, struct FString AttachmentName); // Function Killstreak.KSCheatComponent.ServerAddAttachmentToLoadout
	void RemoveFromLoadout(struct FString ItemName); // Function Killstreak.KSCheatComponent.RemoveFromLoadout
	void RemoveAllMods(); // Function Killstreak.KSCheatComponent.RemoveAllMods
	void QuickEndGame(bool bWin); // Function Killstreak.KSCheatComponent.QuickEndGame
	void QEG(bool bWin); // Function Killstreak.KSCheatComponent.QEG
	void OnRep_HudVisible(); // Function Killstreak.KSCheatComponent.OnRep_HudVisible
	void OnRep_CanViewLocation(); // Function Killstreak.KSCheatComponent.OnRep_CanViewLocation
	void OnRep_CanViewDebugHealth(); // Function Killstreak.KSCheatComponent.OnRep_CanViewDebugHealth
	void NextPerfCaptureCamera(); // Function Killstreak.KSCheatComponent.NextPerfCaptureCamera
	void InvisMe(bool Invis); // Function Killstreak.KSCheatComponent.InvisMe
	void InstantReplay(float TimeToReplay, float Duration); // Function Killstreak.KSCheatComponent.InstantReplay
	void InfiniteAmmo(bool Infinite); // Function Killstreak.KSCheatComponent.InfiniteAmmo
	void God(); // Function Killstreak.KSCheatComponent.God
	void GiveSkin(struct FString SkinName); // Function Killstreak.KSCheatComponent.GiveSkin
	void GiveKSPoints(int32_t Amount); // Function Killstreak.KSCheatComponent.GiveKSPoints
	void GiveAsync(struct FString ItemName); // Function Killstreak.KSCheatComponent.GiveAsync
	void GiveAllKSPoints(int32_t Amount); // Function Killstreak.KSCheatComponent.GiveAllKSPoints
	void Give(struct FString ItemName); // Function Killstreak.KSCheatComponent.Give
	void EnableTeamSurrender(); // Function Killstreak.KSCheatComponent.EnableTeamSurrender
	void EnableSound(); // Function Killstreak.KSCheatComponent.EnableSound
	void EnableKillCam(); // Function Killstreak.KSCheatComponent.EnableKillCam
	void Drop(struct FString ItemName); // Function Killstreak.KSCheatComponent.Drop
	void DownSelf(); // Function Killstreak.KSCheatComponent.DownSelf
	void DisableSound(); // Function Killstreak.KSCheatComponent.DisableSound
	void DisableAFKTimer(); // Function Killstreak.KSCheatComponent.DisableAFKTimer
	void DebugThreatLevels(bool Show); // Function Killstreak.KSCheatComponent.DebugThreatLevels
	void Communicate(struct FString CommunicationName); // Function Killstreak.KSCheatComponent.Communicate
	void CharReset(); // Function Killstreak.KSCheatComponent.CharReset
	void ChangeCash(int32_t CashDelta); // Function Killstreak.KSCheatComponent.ChangeCash
	void BotGodMode(bool Enable); // Function Killstreak.KSCheatComponent.BotGodMode
	void Attach(struct FString AttachmentName); // Function Killstreak.KSCheatComponent.Attach
	void AdjustDifficulty(int32_t Amount); // Function Killstreak.KSCheatComponent.AdjustDifficulty
	void AddToLoadout(struct FString ItemName); // Function Killstreak.KSCheatComponent.AddToLoadout
	void AddAttachmentToLoadout(struct FString ItemName, struct FString AttachmentName); // Function Killstreak.KSCheatComponent.AddAttachmentToLoadout
};

// Class Killstreak.KSCircleDeadZoneFilter
// Size: 0x40 (Inherited: 0x38)
struct UKSCircleDeadZoneFilter : public UKSAnalogStickFilter {
	float DeadZoneRadius; // 0x38(0x04)
	float CardinalDeadZoneHalfWidth; // 0x3c(0x04)
};

// Class Killstreak.KSCombatLogVisualizer
// Size: 0x280 (Inherited: 0x230)
struct AKSCombatLogVisualizer : public APGame_CombatLogVisualizer {
	struct TMap<struct FString, struct FCharacterArray> Characters; // 0x230(0x50)
};

// Class Killstreak.KSRadialMenuItem
// Size: 0x1d0 (Inherited: 0x168)
struct UKSRadialMenuItem : public UKSItem {
	char UnknownData_168[0x8]; // 0x168(0x08)
	SoftClassProperty RadialMenuItemInstanceClass; // 0x170(0x28)
	struct TArray<struct FSoftDataTableInfo> AssetDataTables; // 0x198(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSJobItem>> JobAllowList; // 0x1a8(0x10)
	float GlobalRadialMenuItemCooldownTime; // 0x1b8(0x04)
	enum class ERadialMenuItemInterruptNotifyBehaviorType InterruptNotifyBehavior; // 0x1bc(0x01)
	char UnknownData_1BD[0x3]; // 0x1bd(0x03)
	float RadialMenuItemIsPlayingTimeout; // 0x1c0(0x04)
	struct FKSRadialMenuItemInterruptRules InterruptRules; // 0x1c4(0x04)
	bool bLockPawnRotationWhilePlaying; // 0x1c8(0x01)
	enum class EKSEmotion Emotion; // 0x1c9(0x01)
	char UnknownData_1CA[0x6]; // 0x1ca(0x06)

	bool ShouldPreventPlay(enum class EKSRadialMenuItemInterruptReason InReason); // Function Killstreak.KSRadialMenuItem.ShouldPreventPlay
	bool ShouldInterrupt(enum class EKSRadialMenuItemInterruptReason InReason); // Function Killstreak.KSRadialMenuItem.ShouldInterrupt
	bool IsJobAllowed(struct TSoftObjectPtr<struct UKSJobItem> Item); // Function Killstreak.KSRadialMenuItem.IsJobAllowed
	bool IsAllowedForAllJobs(); // Function Killstreak.KSRadialMenuItem.IsAllowedForAllJobs
	SoftClassProperty GetRadialMenuItemInstanceClass(); // Function Killstreak.KSRadialMenuItem.GetRadialMenuItemInstanceClass
	bool GetLockPawnRotationWhilePlaying(); // Function Killstreak.KSRadialMenuItem.GetLockPawnRotationWhilePlaying
	struct FGameplayTag GetGameplayTagBase(); // Function Killstreak.KSRadialMenuItem.GetGameplayTagBase
	enum class EKSEmotion GetEmotionToApply(); // Function Killstreak.KSRadialMenuItem.GetEmotionToApply
	struct FString GetCosmeticSlotString(); // Function Killstreak.KSRadialMenuItem.GetCosmeticSlotString
	enum class EMercCosmeticSlot GetCosmeticSlot(); // Function Killstreak.KSRadialMenuItem.GetCosmeticSlot
	struct TArray<struct TSoftObjectPtr<struct UKSJobItem>> GetAllowedJobs(); // Function Killstreak.KSRadialMenuItem.GetAllowedJobs
};

// Class Killstreak.KSCommunication
// Size: 0x1d8 (Inherited: 0x1d0)
struct UKSCommunication : public UKSRadialMenuItem {
	enum class EPingType PingType; // 0x1d0(0x01)
	enum class EPingMessage PingMessage; // 0x1d1(0x01)
	char UnknownData_1D2[0x6]; // 0x1d2(0x06)
};

// Class Killstreak.KSRadialMenuItemInstance
// Size: 0x2b8 (Inherited: 0x2b0)
struct AKSRadialMenuItemInstance : public AKSEquipment {
	struct UKSRadialMenuItem* RadialMenuItemAsset; // 0x2b0(0x08)

	void ServerPlayRadialMenuItem(); // Function Killstreak.KSRadialMenuItemInstance.ServerPlayRadialMenuItem
	void ServerForceStopRadialMenuItem(); // Function Killstreak.KSRadialMenuItemInstance.ServerForceStopRadialMenuItem
	bool PlayRadialMenuItem(enum class EKSRadialMenuItemInterruptReason OutInterruptReason, bool bForcePlayRadialMenuItem); // Function Killstreak.KSRadialMenuItemInstance.PlayRadialMenuItem
	void OnRep_RadialMenuItemAsset(); // Function Killstreak.KSRadialMenuItemInstance.OnRep_RadialMenuItemAsset
	bool IsThrottled(); // Function Killstreak.KSRadialMenuItemInstance.IsThrottled
	bool IsManagingRadialMenuItemLocally(); // Function Killstreak.KSRadialMenuItemInstance.IsManagingRadialMenuItemLocally
	struct UKSRadialMenuItem* GetRadialMenuItemAsset(); // Function Killstreak.KSRadialMenuItemInstance.GetRadialMenuItemAsset
	struct AKSCharacter* GetActiveCharacterOwner(); // Function Killstreak.KSRadialMenuItemInstance.GetActiveCharacterOwner
	void ForceStopRadialMenuItem(); // Function Killstreak.KSRadialMenuItemInstance.ForceStopRadialMenuItem
	void DoRadialMenuItem(); // Function Killstreak.KSRadialMenuItemInstance.DoRadialMenuItem
	bool CanPlayRadialMenuItemNow(enum class EKSRadialMenuItemInterruptReason OutInterruptReason); // Function Killstreak.KSRadialMenuItemInstance.CanPlayRadialMenuItemNow
};

// Class Killstreak.KSControlPoint
// Size: 0x3d0 (Inherited: 0x380)
struct AKSControlPoint : public AKSObjectiveBase {
	struct AKSTeamState* OwningTeam; // 0x380(0x08)
	struct AKSTeamState* CapturingTeam; // 0x388(0x08)
	float CaptureProgress; // 0x390(0x04)
	float ScoreUpdatePeriod; // 0x394(0x04)
	char NumTeamMembersCapturing; // 0x398(0x01)
	char UnknownData_399[0x3]; // 0x399(0x03)
	float SimulatedProgressRate; // 0x39c(0x04)
	float SimulatedTimeUntilScore; // 0x3a0(0x04)
	int32_t FavoredSide; // 0x3a4(0x04)
	bool bHideLocked; // 0x3a8(0x01)
	char UnknownData_3A9[0x7]; // 0x3a9(0x07)
	struct TArray<struct UPrimitiveComponent*> RegisteredPawnOverlapComponents; // 0x3b0(0x10)
	struct TArray<struct AKSCharacterBase*> OverlappingPawns; // 0x3c0(0x10)

	void RemovePrimitiveToPawnOverlapCheck(struct UPrimitiveComponent* InPrimitive); // Function Killstreak.KSControlPoint.RemovePrimitiveToPawnOverlapCheck
	void OnRep_OwningTeam(); // Function Killstreak.KSControlPoint.OnRep_OwningTeam
	void OnRep_CapturingTeam(); // Function Killstreak.KSControlPoint.OnRep_CapturingTeam
	void OnOwningTeamChanged(struct AKSTeamState* NewTeam); // Function Killstreak.KSControlPoint.OnOwningTeamChanged
	void OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSControlPoint.OnEndOverlap
	void OnCapturingTeamChanged(struct AKSTeamState* NewTeam); // Function Killstreak.KSControlPoint.OnCapturingTeamChanged
	void OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSControlPoint.OnBeginOverlap
	struct AKSTeamState* GetOwningTeam(); // Function Killstreak.KSControlPoint.GetOwningTeam
	struct AKSTeamState* GetCapturingTeam(); // Function Killstreak.KSControlPoint.GetCapturingTeam
	void AddPrimitiveToPawnOverlapCheck(struct UPrimitiveComponent* InPrimitive); // Function Killstreak.KSControlPoint.AddPrimitiveToPawnOverlapCheck
};

// Class Killstreak.KSCurrency
// Size: 0x1e8 (Inherited: 0x168)
struct UKSCurrency : public UKSItem {
	bool IsDLCVoucher; // 0x168(0x01)
	char UnknownData_169[0x3]; // 0x169(0x03)
	int32_t SortOrder; // 0x16c(0x04)
	struct TSoftObjectPtr<struct UDataTable> CurrencyDataByQtyTable; // 0x170(0x28)
	struct TSoftObjectPtr<struct UTexture2D> FullSplash; // 0x198(0x28)
	struct TSoftObjectPtr<struct UTexture2D> CurrencySmallIcon; // 0x1c0(0x28)

	struct TSoftObjectPtr<struct UTexture2D> GetSoftFullSplashImage(); // Function Killstreak.KSCurrency.GetSoftFullSplashImage
	struct TSoftObjectPtr<struct UTexture2D> GetSoftCurrencySmallIcon(); // Function Killstreak.KSCurrency.GetSoftCurrencySmallIcon
	bool GetCurrencyDataForQuantity(int32_t Quantity, struct FCurrencyImageRow Data); // Function Killstreak.KSCurrency.GetCurrencyDataForQuantity
};

// Class Killstreak.KSCustomApparelComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UKSCustomApparelComponent : public UActorComponent {
	bool bLinkLocalSkinObjectToBodyApparel; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct AKSCharacter* CharacterOwner; // 0xb8(0x08)
	struct UKSApparelAsset_CustomComponent* ApparelAsset; // 0xc0(0x08)
	struct UMultiSkinObject* SkinObject; // 0xc8(0x08)

	struct UMultiSkinObject* GetSkinObject(); // Function Killstreak.KSCustomApparelComponent.GetSkinObject
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSCustomApparelComponent.GetCharacterOwner
	struct UKSApparelAsset_CustomComponent* GetApparelAsset(); // Function Killstreak.KSCustomApparelComponent.GetApparelAsset
	void BlueprintPlayAbilityCosmetics(); // Function Killstreak.KSCustomApparelComponent.BlueprintPlayAbilityCosmetics
	void BlueprintFinishedInitialization(); // Function Killstreak.KSCustomApparelComponent.BlueprintFinishedInitialization
};

// Class Killstreak.KSDamageTypeBase
// Size: 0x138 (Inherited: 0x40)
struct UKSDamageTypeBase : public UDamageType {
	enum class EDamageCategory DamageCategory; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct UParticleSystem* HitPawnEffect; // 0x48(0x08)
	struct UAkAudioEvent* HitBodyAudioEvent; // 0x50(0x08)
	struct UAkAudioEvent* HitHeadAudioEvent; // 0x58(0x08)
	struct UAkAudioEvent* HitResistedAudioEvent; // 0x60(0x08)
	struct UAkAudioEvent* HitReducedAudioEvent; // 0x68(0x08)
	struct UAkAudioEvent* HitByAudioEvent; // 0x70(0x08)
	struct UAkAudioEvent* HitByResistedAudioEvent; // 0x78(0x08)
	struct UAkAudioEvent* HitByReducedAudioEvent; // 0x80(0x08)
	struct FKSSpecialEffect HitSpecialEffect; // 0x88(0x50)
	struct FName EffectAttachPointName; // 0xd8(0x08)
	bool bPreProcessResistable; // 0xe0(0x01)
	bool bRequiresDamageForDebuffs; // 0xe1(0x01)
	bool bUIDisplayable; // 0xe2(0x01)
	bool bClientPredictable; // 0xe3(0x01)
	bool bHideDamageDirection; // 0xe4(0x01)
	bool bCountTowardsTrackedFriendlyFireDamage; // 0xe5(0x01)
	bool bDoFriendlyDamageWithReverseFriendlyFire; // 0xe6(0x01)
	char UnknownData_E7[0x1]; // 0xe7(0x01)
	struct TArray<struct UKSPlayerMod*> DebuffsAppliedOnDamage; // 0xe8(0x10)
	float FlinchDuration; // 0xf8(0x04)
	float FlinchRecoveryRate; // 0xfc(0x04)
	float FlinchMinHeightBody; // 0x100(0x04)
	float FlinchMaxHeightBody; // 0x104(0x04)
	float FlinchMinHeightHead; // 0x108(0x04)
	float FlinchMaxHeightHead; // 0x10c(0x04)
	struct FGameplayTagContainer DamageTags; // 0x110(0x20)
	float ImpulseMagnitudePerDamage; // 0x130(0x04)
	char UnknownData_134[0x4]; // 0x134(0x04)

	bool PreProcessDamageEffects(struct AActor* DamagedActor, float Damage, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSDamageTypeBase.PreProcessDamageEffects
	void PostProcessDamageEffects(struct AActor* DamagedActor, float AttemptedDamage, float ActualDamage, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSDamageTypeBase.PostProcessDamageEffects
	void GetDefaultObjectPropertiesFromDamageType(struct UKSDamageTypeBase* DamageTypeClass, struct UParticleSystem* OutHitPawnEffect, struct UAkAudioEvent* OutHitBodyAudioEvent, struct UAkAudioEvent* OutHitHeadAudioEvent, struct UAkAudioEvent* OutHitByAudioEvent); // Function Killstreak.KSDamageTypeBase.GetDefaultObjectPropertiesFromDamageType
};

// Class Killstreak.KSDamageTypeEMP
// Size: 0x140 (Inherited: 0x138)
struct UKSDamageTypeEMP : public UKSDamageTypeBase {
	float EMPDuration; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class Killstreak.KSDamageTypeFire
// Size: 0x140 (Inherited: 0x138)
struct UKSDamageTypeFire : public UKSDamageTypeBase {
	float FireDuration; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class Killstreak.KSDamageTypeFlashBang
// Size: 0x140 (Inherited: 0x138)
struct UKSDamageTypeFlashBang : public UKSDamageTypeBase {
	float EffectiveAngle; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class Killstreak.KSDamageTypeSonar
// Size: 0x140 (Inherited: 0x138)
struct UKSDamageTypeSonar : public UKSDamageTypeBase {
	bool bRevealOnly; // 0x138(0x01)
	char UnknownData_139[0x3]; // 0x139(0x03)
	float RevealDuration; // 0x13c(0x04)
};

// Class Killstreak.KSDamageTypeStun
// Size: 0x140 (Inherited: 0x138)
struct UKSDamageTypeStun : public UKSDamageTypeBase {
	float StunDuration; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
};

// Class Killstreak.KSWeaponTargetingModule
// Size: 0x70 (Inherited: 0x28)
struct UKSWeaponTargetingModule : public UObject {
	struct FTargetingModuleTickFunction TargetingTick; // 0x28(0x30)
	float HitScanRange; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct UKSWeaponComponent* OwningWeaponComponent; // 0x60(0x08)
	struct AKSCharacter* OwningCharacter; // 0x68(0x08)

	void UpdateCachedHoveredActor(struct AActor* NewCachedHoveredActor); // Function Killstreak.KSWeaponTargetingModule.UpdateCachedHoveredActor
	void TickTargeting(float DeltaSeconds); // Function Killstreak.KSWeaponTargetingModule.TickTargeting
	void LookForHoveredActors(); // Function Killstreak.KSWeaponTargetingModule.LookForHoveredActors
	bool IsTargetingModeEnabled(); // Function Killstreak.KSWeaponTargetingModule.IsTargetingModeEnabled
	bool IsAimedAtFriendly(); // Function Killstreak.KSWeaponTargetingModule.IsAimedAtFriendly
	bool IsAimedAtEnemy(); // Function Killstreak.KSWeaponTargetingModule.IsAimedAtEnemy
	struct UKSWeaponComponent* GetWeaponComponent(); // Function Killstreak.KSWeaponTargetingModule.GetWeaponComponent
	struct AKSCharacter* GetOwningCharacter(); // Function Killstreak.KSWeaponTargetingModule.GetOwningCharacter
	void ExitTargetingMode(); // Function Killstreak.KSWeaponTargetingModule.ExitTargetingMode
	void EnterTargetingMode(); // Function Killstreak.KSWeaponTargetingModule.EnterTargetingMode
};

// Class Killstreak.KSDefaultAimTargetingModule
// Size: 0x90 (Inherited: 0x70)
struct UKSDefaultAimTargetingModule : public UKSWeaponTargetingModule {
	float WallMarkerMaxDistance; // 0x70(0x04)
	bool bBlockedByWall; // 0x74(0x01)
	bool bWallMarkerActive; // 0x75(0x01)
	char UnknownData_76[0x2]; // 0x76(0x02)
	struct FVector WallMarkerWorldLocation; // 0x78(0x0c)
	bool bAimedAtEnemy; // 0x84(0x01)
	bool bAimedAtFriendly; // 0x85(0x01)
	char UnknownData_86[0x2]; // 0x86(0x02)
	struct UKSWeaponAsset_WithProjectile* ProjWeaponAsset; // 0x88(0x08)

	bool IsWallMarkerActive(struct FVector WallLocation); // Function Killstreak.KSDefaultAimTargetingModule.IsWallMarkerActive
	bool IsCurrentlyBlocked(); // Function Killstreak.KSDefaultAimTargetingModule.IsCurrentlyBlocked
};

// Class Killstreak.KSMapPoint
// Size: 0x258 (Inherited: 0x220)
struct AKSMapPoint : public AActor {
	struct FGameplayTagContainer MapPointTypes; // 0x220(0x20)
	struct TArray<int32_t> ValidSides; // 0x240(0x10)
	bool bShouldCrouch; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)

	bool ShouldCrouch(); // Function Killstreak.KSMapPoint.ShouldCrouch
	bool MatchesTags(struct FGameplayTagContainer InMapPointTypes); // Function Killstreak.KSMapPoint.MatchesTags
	bool MatchesTag(struct FGameplayTag InMapPointType); // Function Killstreak.KSMapPoint.MatchesTag
	bool IsFriendly(struct AActor* InActor); // Function Killstreak.KSMapPoint.IsFriendly
	bool IsAvailable(struct AActor* InActor); // Function Killstreak.KSMapPoint.IsAvailable
	bool IsActive(); // Function Killstreak.KSMapPoint.IsActive
};

// Class Killstreak.KSDefensePoint
// Size: 0x278 (Inherited: 0x258)
struct AKSDefensePoint : public AKSMapPoint {
	struct AKSObjectiveBase* RelevantObjective; // 0x258(0x08)
	struct TArray<struct AActor*> AssignedDefenders; // 0x260(0x10)
	char UnknownData_270[0x8]; // 0x270(0x08)

	void RelevantObjectiveUpdated(struct AKSObjectiveBase* Objective); // Function Killstreak.KSDefensePoint.RelevantObjectiveUpdated
	struct FVector GetTargetDefensePoint(); // Function Killstreak.KSDefensePoint.GetTargetDefensePoint
};

// Class Killstreak.KSDestroyableHazardComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UKSDestroyableHazardComponent : public UActorComponent {
	float MinPerceptionValue; // 0xb0(0x04)
	float MaxPerceptionValue; // 0xb4(0x04)
	float RandomizedPerceptionValue; // 0xb8(0x04)
	bool ShouldReactWithEMP; // 0xbc(0x01)
	bool ShouldReactWithGunshot; // 0xbd(0x01)
	char UnknownData_BE[0x2]; // 0xbe(0x02)
	struct TArray<struct TSoftObjectPtr<struct AActor>> ActorsSeenBy; // 0xc0(0x10)

	bool ShouldFireAt(); // Function Killstreak.KSDestroyableHazardComponent.ShouldFireAt
	bool ShouldEMP(); // Function Killstreak.KSDestroyableHazardComponent.ShouldEMP
};

// Class Killstreak.KSDestructibleBase
// Size: 0x390 (Inherited: 0x220)
struct AKSDestructibleBase : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	bool bRenderTrueCollisionUntilDestruction; // 0x228(0x01)
	char UnknownData_229[0x7]; // 0x229(0x07)
	struct USceneComponent* SceneRoot; // 0x230(0x08)
	struct UDestructibleComponent* VisualMesh; // 0x238(0x08)
	struct UStaticMeshComponent* TrueCollision; // 0x240(0x08)
	struct UBoxComponent* SpeedOverlap; // 0x248(0x08)
	bool bAllowDestructibleMeshSimulation; // 0x250(0x01)
	bool bAllowPlayerToWalkOnSurface; // 0x251(0x01)
	bool bAllowDestructionAudio; // 0x252(0x01)
	char UnknownData_253[0x5]; // 0x253(0x05)
	struct UAkAudioEvent* DefaultDestructionEvent; // 0x258(0x08)
	bool bSpawnBreakParticleAtActorLocation; // 0x260(0x01)
	char UnknownData_261[0x7]; // 0x261(0x07)
	struct UParticleSystem* BreakParticles; // 0x268(0x08)
	struct UParticleSystem* ImpactParticles; // 0x270(0x08)
	struct UParticleSystem* FakeHitDecalParticle; // 0x278(0x08)
	struct UCameraShake* CharacterSpeedOverlapCameraShake; // 0x280(0x08)
	struct FMulticastInlineDelegate OnDestructibleDestroyed; // 0x288(0x10)
	float MaxHealth; // 0x298(0x04)
	float Health; // 0x29c(0x04)
	float LocalHealth; // 0x2a0(0x04)
	bool bResetOnRoundChange; // 0x2a4(0x01)
	bool bAllowsWeaponPenetration; // 0x2a5(0x01)
	bool bCanBreakWithSpeed; // 0x2a6(0x01)
	char UnknownData_2A7[0x1]; // 0x2a7(0x01)
	float SpeedBreakThreshold; // 0x2a8(0x04)
	bool bTransparentDestructible; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	struct TMap<enum class EDamageCategory, float> DamageTypeMultipliers; // 0x2b0(0x50)
	float BreakingDamage; // 0x300(0x04)
	float BreakingImpulse; // 0x304(0x04)
	bool bUseRadialDestruction; // 0x308(0x01)
	char UnknownData_309[0x3]; // 0x309(0x03)
	float BreakingRadius; // 0x30c(0x04)
	float ImpactImpulseOffset; // 0x310(0x04)
	bool bIgnoreCharacterVerticalSpeed; // 0x314(0x01)
	char UnknownData_315[0x3]; // 0x315(0x03)
	float BadDestroyCheckTime; // 0x318(0x04)
	float EventlessDestroyWaitTime; // 0x31c(0x04)
	bool MeshDestroyed; // 0x320(0x01)
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x328(0x08)
	struct UDestructibleMesh* MeshAsset; // 0x330(0x08)
	struct FVector LastHitLocation; // 0x338(0x0c)
	struct FVector LastHitDirection; // 0x344(0x0c)
	struct FVector LastHitNormal; // 0x350(0x0c)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct TArray<struct UParticleSystemComponent*> FakeHitDecals; // 0x360(0x10)
	char UnknownData_370[0x10]; // 0x370(0x10)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x380(0x08)
	char UnknownData_388[0x8]; // 0x388(0x08)

	void UndoBadDestroy(); // Function Killstreak.KSDestructibleBase.UndoBadDestroy
	void SpeedGateOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSDestructibleBase.SpeedGateOverlap
	void SetupPreBroken(); // Function Killstreak.KSDestructibleBase.SetupPreBroken
	void ResetDestructible(); // Function Killstreak.KSDestructibleBase.ResetDestructible
	int32_t PostDestructionEvent(struct UAkAudioEvent* InEvent); // Function Killstreak.KSDestructibleBase.PostDestructionEvent
	void OnRoundChange(struct FRoundInitState RoundInitState); // Function Killstreak.KSDestructibleBase.OnRoundChange
	void OnRep_Health(); // Function Killstreak.KSDestructibleBase.OnRep_Health
	void OnDestructionChange(bool Destroyed, bool bInitialSetup); // Function Killstreak.KSDestructibleBase.OnDestructionChange
	void OnDamageEvent(float NewHealth, struct FVector HitLocation, struct FVector HitDirection, struct FVector HitNormal, bool FromServer); // Function Killstreak.KSDestructibleBase.OnDamageEvent
	float GetMaxHealth(); // Function Killstreak.KSDestructibleBase.GetMaxHealth
	float GetCurrentHealth(); // Function Killstreak.KSDestructibleBase.GetCurrentHealth
	void BlueprintPrepareKillCamPlayback(); // Function Killstreak.KSDestructibleBase.BlueprintPrepareKillCamPlayback
};

// Class Killstreak.KSDistanceOptimizationComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UKSDistanceOptimizationComponent : public UActorComponent {
	struct FMulticastInlineDelegate DistanceOptimizationChangedDelegate; // 0xb0(0x10)
	bool bAlwaysDisableOnServer; // 0xc0(0x01)
	char UnknownData_C1[0x3]; // 0xc1(0x03)
	float ActiveDistance; // 0xc4(0x04)
	float CurrentDistance; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct UActorComponent*> ComponentsToControl; // 0xd0(0x10)
	struct TArray<struct AActor*> ActorsToControl; // 0xe0(0x10)

	bool IsCloseEnough(); // Function Killstreak.KSDistanceOptimizationComponent.IsCloseEnough
	void DistanceOptimizationChangedDelegate__DelegateSignature(bool bShouldBeActive); // DelegateFunction Killstreak.KSDistanceOptimizationComponent.DistanceOptimizationChangedDelegate__DelegateSignature
	void AddComponents(struct TArray<struct UActorComponent*> InComponents); // Function Killstreak.KSDistanceOptimizationComponent.AddComponents
	void AddComponent(struct UActorComponent* InComponent); // Function Killstreak.KSDistanceOptimizationComponent.AddComponent
	void AddActor(struct AActor* Actor); // Function Killstreak.KSDistanceOptimizationComponent.AddActor
};

// Class Killstreak.KSDropLocation
// Size: 0x278 (Inherited: 0x258)
struct AKSDropLocation : public AKSMapPoint {
	struct AKSWayPointSet* WayPointSet; // 0x258(0x08)
	bool ReverseWayPointSetDirection; // 0x260(0x01)
	char UnknownData_261[0x3]; // 0x261(0x03)
	float FlightDistanceModifier; // 0x264(0x04)
	float FreefallXYDistance; // 0x268(0x04)
	float FreefallHeight; // 0x26c(0x04)
	char UnknownData_270[0x8]; // 0x270(0x08)

	bool ShouldReverseWayPointSetDirection(); // Function Killstreak.KSDropLocation.ShouldReverseWayPointSetDirection
	void IncrementSelectionCount(); // Function Killstreak.KSDropLocation.IncrementSelectionCount
	void HandleRoundSetup(struct FRoundInitState RoundInitState); // Function Killstreak.KSDropLocation.HandleRoundSetup
	struct AKSWayPointSet* GetWayPointSet(); // Function Killstreak.KSDropLocation.GetWayPointSet
	struct TArray<int32_t> GetValidSides(); // Function Killstreak.KSDropLocation.GetValidSides
	struct FVector GetTargetDropLocation(); // Function Killstreak.KSDropLocation.GetTargetDropLocation
	int32_t GetNumTimesSelected(); // Function Killstreak.KSDropLocation.GetNumTimesSelected
	float GetFreefallXYDistance(); // Function Killstreak.KSDropLocation.GetFreefallXYDistance
	float GetFreefallHeight(); // Function Killstreak.KSDropLocation.GetFreefallHeight
	float GetFlightDistanceModifier(); // Function Killstreak.KSDropLocation.GetFlightDistanceModifier
};

// Class Killstreak.KSDropOffZone
// Size: 0x420 (Inherited: 0x380)
struct AKSDropOffZone : public AKSObjectiveBase {
	char UnknownData_380[0x8]; // 0x380(0x08)
	int32_t Team; // 0x388(0x04)
	int32_t FlipTeam; // 0x38c(0x04)
	bool bActivated; // 0x390(0x01)
	char UnknownData_391[0x3]; // 0x391(0x03)
	struct FName PointAreaComponentTag; // 0x394(0x08)
	char UnknownData_39C[0x4]; // 0x39c(0x04)
	struct TArray<struct UPrimitiveComponent*> PointAreaComponents; // 0x3a0(0x10)
	struct UKSInteractionManager* CurrentInteractionManager; // 0x3b0(0x08)
	struct AKSCharacter* CurrentInteractor; // 0x3b8(0x08)
	float CurrentInteractionProgress; // 0x3c0(0x04)
	struct FGameplayTag MacGuffinEquipPoint; // 0x3c4(0x08)
	float DropOffDuration; // 0x3cc(0x04)
	struct FText DropOffProgressText; // 0x3d0(0x18)
	struct FText DropOffPrompt; // 0x3e8(0x18)
	struct FName DropOffInteractionMode; // 0x400(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x408(0x08)
	char UnknownData_410[0x10]; // 0x410(0x10)

	void TeamUpdated(); // Function Killstreak.KSDropOffZone.TeamUpdated
	void OnRep_Team(); // Function Killstreak.KSDropOffZone.OnRep_Team
	void OnRep_Activated(); // Function Killstreak.KSDropOffZone.OnRep_Activated
	void Activated(bool bActive); // Function Killstreak.KSDropOffZone.Activated
};

// Class Killstreak.KSDropShipExitVolume
// Size: 0x270 (Inherited: 0x268)
struct AKSDropShipExitVolume : public APhysicsVolume {
	float YawDirection; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
};

// Class Killstreak.KSDropShipExitZone
// Size: 0x228 (Inherited: 0x220)
struct AKSDropShipExitZone : public AActor {
	float YawDirection; // 0x220(0x04)
	char UnknownData_224[0x4]; // 0x224(0x04)

	void ActorLeavingZone(struct AActor* Other); // Function Killstreak.KSDropShipExitZone.ActorLeavingZone
	void ActorEnteredZone(struct AActor* Other); // Function Killstreak.KSDropShipExitZone.ActorEnteredZone
};

// Class Killstreak.KSDropShipLocation
// Size: 0x250 (Inherited: 0x220)
struct AKSDropShipLocation : public AActor {
	struct AActor* DropShopClass; // 0x220(0x08)
	int32_t LootSiteGroup; // 0x228(0x04)
	char UnknownData_22C[0x4]; // 0x22c(0x04)
	struct AActor* SpawnedDropShip; // 0x230(0x08)
	struct UBillboardComponent* GameEndSpawn; // 0x238(0x08)
	struct UBillboardComponent* GameEndTarget; // 0x240(0x08)
	struct UBillboardComponent* GameStartLocation; // 0x248(0x08)

	void OnDropShipSpawned(); // Function Killstreak.KSDropShipLocation.OnDropShipSpawned
};

// Class Killstreak.KSDynamicMaskComponent
// Size: 0xf0 (Inherited: 0xb0)
struct UKSDynamicMaskComponent : public UActorComponent {
	struct UTextureRenderTarget2D* DynamicMaskRenderTarget; // 0xb0(0x08)
	int32_t TargetDimPixels; // 0xb8(0x04)
	struct FLinearColor EmptyColor; // 0xbc(0x10)
	struct FLinearColor FillColor; // 0xcc(0x10)
	char UnknownData_DC[0x4]; // 0xdc(0x04)
	struct USceneComponent* ConversionBasisComponent; // 0xe0(0x08)
	float WorldToTargetScaleX; // 0xe8(0x04)
	float WorldToTargetScaleY; // 0xec(0x04)

	void Wipe(); // Function Killstreak.KSDynamicMaskComponent.Wipe
	struct FColor GetColorAtPosition(struct FVector2D Position); // Function Killstreak.KSDynamicMaskComponent.GetColorAtPosition
	void DrawDodecagon(struct FVector2D Position, float Radius); // Function Killstreak.KSDynamicMaskComponent.DrawDodecagon
	void DrawBox(struct FVector2D Position, struct FVector2D Dimensions); // Function Killstreak.KSDynamicMaskComponent.DrawBox
	struct FVector2D ConvertToTargetFromWorld(struct FVector WorldSpace); // Function Killstreak.KSDynamicMaskComponent.ConvertToTargetFromWorld
};

// Class Killstreak.KSEasyAntiCheatSettings
// Size: 0xa0 (Inherited: 0x38)
struct UKSEasyAntiCheatSettings : public UDeveloperSettings {
	uint16_t AbilityEACWeaponTypeId; // 0x38(0x02)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
	struct TArray<struct FWeaponTypeToAntiCheatId> WeaponTypeToAntiCheatId; // 0x40(0x10)
	struct TMap<struct FGameplayTag, uint16_t> WeaponTypeToAntiCheatIdMap; // 0x50(0x50)
};

// Class Killstreak.KSEmote
// Size: 0x218 (Inherited: 0x1d0)
struct UKSEmote : public UKSRadialMenuItem {
	bool bFlushKeysOnPlay; // 0x1d0(0x01)
	char UnknownData_1D1[0x7]; // 0x1d1(0x07)
	SoftClassProperty EmoteCosmeticComponentClass; // 0x1d8(0x28)
	enum class EEmoteCameraPositionType EmoteCameraPosition; // 0x200(0x01)
	char UnknownData_201[0x7]; // 0x201(0x07)
	struct TArray<struct FName> ApparelObjectsToInfluence; // 0x208(0x10)

	SoftClassProperty GetEmoteCosmeticClass(); // Function Killstreak.KSEmote.GetEmoteCosmeticClass
	enum class EEmoteCameraPositionType GetEmoteCameraPosition(); // Function Killstreak.KSEmote.GetEmoteCameraPosition
};

// Class Killstreak.KSEquipmentCosmeticComponent
// Size: 0x118 (Inherited: 0xb0)
struct UKSEquipmentCosmeticComponent : public UActorComponent {
	bool bHasBeenUnequipped; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct TScriptInterface<None> EquipmentContainerOwner; // 0xb8(0x10)
	uint16_t EquipmentId; // 0xc8(0x02)
	char UnknownData_CA[0x2]; // 0xca(0x02)
	struct FGameplayTag EquipPoint; // 0xcc(0x08)
	bool bNoEquipPoint; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)
	struct TScriptInterface<None> SkinTagAssetOwner; // 0xd8(0x10)
	char UnknownData_E8[0x8]; // 0xe8(0x08)
	struct AKSCharacter* CharacterOwner; // 0xf0(0x08)
	char UnknownData_F8[0x18]; // 0xf8(0x18)
	bool bPropSpawner; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)

	void OnRep_EquipPoint(); // Function Killstreak.KSEquipmentCosmeticComponent.OnRep_EquipPoint
	void OnRep_EquipmentId(); // Function Killstreak.KSEquipmentCosmeticComponent.OnRep_EquipmentId
	bool IsOwnerDeadOrDestroyed(); // Function Killstreak.KSEquipmentCosmeticComponent.IsOwnerDeadOrDestroyed
	bool IsLocallyViewed(); // Function Killstreak.KSEquipmentCosmeticComponent.IsLocallyViewed
	bool IsLocallyManaged(); // Function Killstreak.KSEquipmentCosmeticComponent.IsLocallyManaged
	bool IsInAction(); // Function Killstreak.KSEquipmentCosmeticComponent.IsInAction
	bool IsAPropSpawner(); // Function Killstreak.KSEquipmentCosmeticComponent.IsAPropSpawner
	struct FGameplayTag GetEquipPoint(); // Function Killstreak.KSEquipmentCosmeticComponent.GetEquipPoint
	struct UKSCharacterAnimInst* GetCharAnimInstance(); // Function Killstreak.KSEquipmentCosmeticComponent.GetCharAnimInstance
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSEquipmentCosmeticComponent.GetCharacterOwner
	struct USkeletalMeshComponent* GetCharacterMesh(); // Function Killstreak.KSEquipmentCosmeticComponent.GetCharacterMesh
	void BlueprintOwnerSkinTagContainerChanged(); // Function Killstreak.KSEquipmentCosmeticComponent.BlueprintOwnerSkinTagContainerChanged
};

// Class Killstreak.KSEmoteCosmeticComponent
// Size: 0x1d8 (Inherited: 0x118)
struct UKSEmoteCosmeticComponent : public UKSEquipmentCosmeticComponent {
	char PawnRotationLockId; // 0x118(0x01)
	char UnknownData_119[0x3]; // 0x119(0x03)
	int32_t EmotionInstanceId; // 0x11c(0x04)
	char UnknownData_120[0x18]; // 0x120(0x18)
	struct UKSEmote* EmoteAsset; // 0x138(0x08)
	uint16_t PlayTicker; // 0x140(0x02)
	char UnknownData_142[0x6]; // 0x142(0x06)
	struct UMultiSkinObject* SkinObject; // 0x148(0x08)
	struct UDynamicSkinTable* SkinTable; // 0x150(0x08)
	bool bIsInitialized; // 0x158(0x01)
	bool bIsPlaying; // 0x159(0x01)
	char UnknownData_15A[0x2]; // 0x15a(0x02)
	struct FVector LastEmotePlayedLocation; // 0x15c(0x0c)
	char UnknownData_168[0x8]; // 0x168(0x08)
	struct FKSEmoteInterruptTickFunction InterruptTick; // 0x170(0x30)
	char UnknownData_1A0[0x28]; // 0x1a0(0x28)
	struct TArray<struct UKSEmoteCosmeticSubInstance*> SubInstances; // 0x1c8(0x10)

	void OnRep_PlayTicker(); // Function Killstreak.KSEmoteCosmeticComponent.OnRep_PlayTicker
	void OnRep_EmoteAsset(); // Function Killstreak.KSEmoteCosmeticComponent.OnRep_EmoteAsset
	void OnInitialize(); // Function Killstreak.KSEmoteCosmeticComponent.OnInitialize
	void MarkStopped(); // Function Killstreak.KSEmoteCosmeticComponent.MarkStopped
	void MarkPlaying(); // Function Killstreak.KSEmoteCosmeticComponent.MarkPlaying
	bool IsPlaying(); // Function Killstreak.KSEmoteCosmeticComponent.IsPlaying
	bool IsInitialized(); // Function Killstreak.KSEmoteCosmeticComponent.IsInitialized
	struct UMultiSkinObject* GetSkinObject(); // Function Killstreak.KSEmoteCosmeticComponent.GetSkinObject
	struct UKSEmote* GetEmoteAsset(); // Function Killstreak.KSEmoteCosmeticComponent.GetEmoteAsset
	void BlueprintPlayEmote(); // Function Killstreak.KSEmoteCosmeticComponent.BlueprintPlayEmote
	void BlueprintInterruptEmote(enum class EKSRadialMenuItemInterruptReason Reason); // Function Killstreak.KSEmoteCosmeticComponent.BlueprintInterruptEmote
	struct UKSEmoteCosmeticSubInstance* AddEmoteCosmeticSubInstance(struct UKSEmoteCosmeticSubInstance* SubInstanceClass); // Function Killstreak.KSEmoteCosmeticComponent.AddEmoteCosmeticSubInstance
};

// Class Killstreak.KSEmoteCosmeticComponent_Spray
// Size: 0x210 (Inherited: 0x1d8)
struct UKSEmoteCosmeticComponent_Spray : public UKSEmoteCosmeticComponent {
	int32_t StatTrackingNumber; // 0x1d8(0x04)
	char UnknownData_1DC[0x34]; // 0x1dc(0x34)

	void OnRep_UpdateStatTrackingNumber(); // Function Killstreak.KSEmoteCosmeticComponent_Spray.OnRep_UpdateStatTrackingNumber
	void NetMulticastPlaySpray(struct FVector SprayLocation, struct FRotator SprayRotation, struct UPrimitiveComponent* SprayTarget); // Function Killstreak.KSEmoteCosmeticComponent_Spray.NetMulticastPlaySpray
	void BlueprintUpdateStatTrackingNumber(int32_t NewStatTrackingNumber); // Function Killstreak.KSEmoteCosmeticComponent_Spray.BlueprintUpdateStatTrackingNumber
	void BlueprintPlaySpray(struct FVector SprayLocation, struct FRotator SprayRotation, struct UPrimitiveComponent* SprayTarget); // Function Killstreak.KSEmoteCosmeticComponent_Spray.BlueprintPlaySpray
};

// Class Killstreak.KSEmoteCosmeticSubInstance_Play
// Size: 0x30 (Inherited: 0x28)
struct UKSEmoteCosmeticSubInstance_Play : public UKSEmoteCosmeticSubInstance {
	char UnknownData_28[0x8]; // 0x28(0x08)

	void BlueprintPlayEmote(); // Function Killstreak.KSEmoteCosmeticSubInstance_Play.BlueprintPlayEmote
};

// Class Killstreak.KSEmoteCosmeticSubInstance_Spray
// Size: 0x40 (Inherited: 0x30)
struct UKSEmoteCosmeticSubInstance_Spray : public UKSEmoteCosmeticSubInstance_Play {
	char UnknownData_30[0x10]; // 0x30(0x10)

	void SetPrimarySprayDecalForOwner(struct UPoolableDecalComponent* InDecalComponent); // Function Killstreak.KSEmoteCosmeticSubInstance_Spray.SetPrimarySprayDecalForOwner
	void BlueprintUpdateStatTrackingNumber(int32_t NewStatTrackingNumber); // Function Killstreak.KSEmoteCosmeticSubInstance_Spray.BlueprintUpdateStatTrackingNumber
	void BlueprintPlaySpray(struct FVector SprayLocation, struct FRotator SprayRotation, struct UPrimitiveComponent* SprayTarget); // Function Killstreak.KSEmoteCosmeticSubInstance_Spray.BlueprintPlaySpray
};

// Class Killstreak.KSEmoteMusicManager
// Size: 0x250 (Inherited: 0x220)
struct AKSEmoteMusicManager : public AActor {
	char UnknownData_220[0x28]; // 0x220(0x28)
	float MaxAudibleEmoteDistance; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)

	void RemovePlayingMusic(struct UAkComponent* Sound); // Function Killstreak.KSEmoteMusicManager.RemovePlayingMusic
	void AddPlayingMusic(struct UAkComponent* Sound); // Function Killstreak.KSEmoteMusicManager.AddPlayingMusic
};

// Class Killstreak.KSEmoteTestManager
// Size: 0x288 (Inherited: 0x220)
struct AKSEmoteTestManager : public AActor {
	struct UKSAssetQueryHelperComponent* SkinAssetQueryComponent; // 0x220(0x08)
	struct UKSAssetQueryHelperComponent* EmoteAssetQueryComponent; // 0x228(0x08)
	bool bStartOnBeginPlay; // 0x230(0x01)
	bool bAutoDisableTick; // 0x231(0x01)
	char UnknownData_232[0x6]; // 0x232(0x06)
	struct UKSEmote* DefaultEmote; // 0x238(0x08)
	struct TArray<struct UKSSkinBundle*> RequestedSkinBundles; // 0x240(0x10)
	bool bRequestedSkinsOnly; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct TArray<struct AKSBotFactory*> BotFactories; // 0x258(0x10)
	int32_t SkinArrayIdx; // 0x268(0x04)
	int32_t EmoteArrayIdx; // 0x26c(0x04)
	struct TArray<struct AKSEmoteInstance*> EmoteInstances; // 0x270(0x10)
	bool bEmotesNeedPlay; // 0x280(0x01)
	char UnknownData_281[0x7]; // 0x281(0x07)

	void start(); // Function Killstreak.KSEmoteTestManager.start
	void RestartCurrentEmote(); // Function Killstreak.KSEmoteTestManager.RestartCurrentEmote
	void OnSkinApplied(struct AKSCharacter* Character, struct UKSSkinBundle* Skin); // Function Killstreak.KSEmoteTestManager.OnSkinApplied
	void OnEmoteApplied(struct AKSCharacter* Character, struct UKSEmote* Emote); // Function Killstreak.KSEmoteTestManager.OnEmoteApplied
	void ApplyNextSkins(); // Function Killstreak.KSEmoteTestManager.ApplyNextSkins
	void ApplyNextEmote(); // Function Killstreak.KSEmoteTestManager.ApplyNextEmote
};

// Class Killstreak.KSEmotionComponent
// Size: 0x238 (Inherited: 0xb0)
struct UKSEmotionComponent : public UActorComponent {
	struct FMulticastInlineDelegate OnEmotionChanged; // 0xb0(0x10)
	struct TScriptInterface<None> EmotionComponentOwner; // 0xc0(0x10)
	struct TMap<int32_t, enum class EKSEmotion> EmotionInstances; // 0xd0(0x50)
	int32_t TopInstanceId; // 0x120(0x04)
	enum class EKSEmotion TopEmotionEnum; // 0x124(0x01)
	char UnknownData_125[0x3]; // 0x125(0x03)
	int32_t NextEmotionId; // 0x128(0x04)
	char UnknownData_12C[0x54]; // 0x12c(0x54)
	struct TArray<struct FKSEmoteConversionEntry> ConversionEntries; // 0x180(0x10)
	struct TMap<struct FName, enum class EKSEmotion> EmotionNameToEnumMap; // 0x190(0x50)
	struct TMap<enum class EKSEmotion, struct FName> EmotionEnumToNameMap; // 0x1e0(0x50)
	char UnknownData_230[0x8]; // 0x230(0x08)

	bool RemoveEmotionById(int32_t InstanceId); // Function Killstreak.KSEmotionComponent.RemoveEmotionById
	int32_t RemoveEmotion(enum class EKSEmotion InEmotion); // Function Killstreak.KSEmotionComponent.RemoveEmotion
	struct TScriptInterface<None> GetEmotionComponentOwner(); // Function Killstreak.KSEmotionComponent.GetEmotionComponentOwner
	enum class EKSEmotion GetCurrentEmotion(); // Function Killstreak.KSEmotionComponent.GetCurrentEmotion
	void AddEmotionInternal(enum class EKSEmotion Emotion, int32_t ID); // Function Killstreak.KSEmotionComponent.AddEmotionInternal
	int32_t AddEmotionForDuration(enum class EKSEmotion InEmotion, float Duration); // Function Killstreak.KSEmotionComponent.AddEmotionForDuration
	int32_t AddEmotion(enum class EKSEmotion InEmotion); // Function Killstreak.KSEmotionComponent.AddEmotion
	int32_t AddAndRemoveEmotion(enum class EKSEmotion InEmotion, int32_t InInstanceID); // Function Killstreak.KSEmotionComponent.AddAndRemoveEmotion
};

// Class Killstreak.KSEncounterManager
// Size: 0x390 (Inherited: 0x220)
struct AKSEncounterManager : public AActor {
	struct TArray<struct UKSBotEncounter*> BotEncounters; // 0x220(0x10)
	struct FMulticastInlineDelegate OnBotDeath; // 0x230(0x10)
	struct FMulticastInlineDelegate OnWaveFinished; // 0x240(0x10)
	struct FMulticastInlineDelegate OnBotSpawned; // 0x250(0x10)
	bool bPermaRevealFill; // 0x260(0x01)
	bool bPermaRevealMark; // 0x261(0x01)
	bool bPreferHiddenPlayerStarts; // 0x262(0x01)
	char UnknownData_263[0x95]; // 0x263(0x95)
	float fAutoSpawnScoreRate; // 0x2f8(0x04)
	char UnknownData_2FC[0x8]; // 0x2fc(0x08)
	float fAutoSpawnScore; // 0x304(0x04)
	char UnknownData_308[0x88]; // 0x308(0x88)

	int32_t SpawnQueuedBots(int32_t nCount); // Function Killstreak.KSEncounterManager.SpawnQueuedBots
	void RemoveQueuedBots(int32_t nCount); // Function Killstreak.KSEncounterManager.RemoveQueuedBots
	void PerformAutomaticSpawns(float fScoreBudget); // Function Killstreak.KSEncounterManager.PerformAutomaticSpawns
	void OnSpawnedBotDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSEncounterManager.OnSpawnedBotDestroyed
	void OnSpawnedBotDeath(struct AKSAIController* DeadBot); // Function Killstreak.KSEncounterManager.OnSpawnedBotDeath
	bool IsPlayerStartUnseen(struct APlayerStart* PlayerStart); // Function Killstreak.KSEncounterManager.IsPlayerStartUnseen
	bool IsBotQueueEmpty(); // Function Killstreak.KSEncounterManager.IsBotQueueEmpty
	void IncreaseCurrentAutoSpawnScore(float fPercent); // Function Killstreak.KSEncounterManager.IncreaseCurrentAutoSpawnScore
	int32_t GetWaveActiveBotCount(struct FName EncounterName, int32_t WaveNumber); // Function Killstreak.KSEncounterManager.GetWaveActiveBotCount
	int32_t GetNumHumanPlayers(); // Function Killstreak.KSEncounterManager.GetNumHumanPlayers
	float GetNextBotSpawnCost(); // Function Killstreak.KSEncounterManager.GetNextBotSpawnCost
	struct TArray<struct AKSPlayerState*> GetHumanPlayers(); // Function Killstreak.KSEncounterManager.GetHumanPlayers
	int32_t GetEncounterActiveBotCount(struct FName EncounterName); // Function Killstreak.KSEncounterManager.GetEncounterActiveBotCount
	int32_t GetActiveBotCount(); // Function Killstreak.KSEncounterManager.GetActiveBotCount
	struct UKSBotEncounter* FindEncounter(struct FName nmEncounter); // Function Killstreak.KSEncounterManager.FindEncounter
	int32_t EnqueueEncounterWave(struct FName nmEncounter, struct TArray<struct APlayerStart*> SpawnLocations, struct AKSWayPointSet* Waypoints); // Function Killstreak.KSEncounterManager.EnqueueEncounterWave
	void EnableAutoSpawn(float fAverageSpawnPeriod, int32_t nSpawnGroupMin, int32_t nSpawnGroupMax); // Function Killstreak.KSEncounterManager.EnableAutoSpawn
	void DisableAutoSpawn(); // Function Killstreak.KSEncounterManager.DisableAutoSpawn
	void ClearQueuedBots(); // Function Killstreak.KSEncounterManager.ClearQueuedBots
	bool CanSpawnNextBot(); // Function Killstreak.KSEncounterManager.CanSpawnNextBot
	bool CanSpawnBotNow(struct FName Encounter, int32_t WaveNumber); // Function Killstreak.KSEncounterManager.CanSpawnBotNow
	int32_t AdvanceWave(struct FName EncounterName); // Function Killstreak.KSEncounterManager.AdvanceWave
};

// Class Killstreak.KSEncounterWave
// Size: 0xa0 (Inherited: 0x30)
struct UKSEncounterWave : public UDataAsset {
	struct UDataTable* SpawnTable; // 0x30(0x08)
	struct TMap<int32_t, int32_t> nMaxSpawnsPerPlayer; // 0x38(0x50)
	char UnknownData_88[0x18]; // 0x88(0x18)

	float GetCostToSpawn(struct FName nmTableRowName); // Function Killstreak.KSEncounterWave.GetCostToSpawn
	struct TArray<struct FName> ChooseNSpawnTableRows(int32_t nCount); // Function Killstreak.KSEncounterWave.ChooseNSpawnTableRows
};

// Class Killstreak.KSEnforcedEquipmentRuleComponent
// Size: 0x1f8 (Inherited: 0xb0)
struct UKSEnforcedEquipmentRuleComponent : public UKSGameRuleComponent {
	struct TMap<struct UDataTable*, struct FGameplayTag> ItemTables; // 0xb0(0x50)
	struct TMap<struct UKSItem*, struct FGameplayTag> ChosenEquipment; // 0x100(0x50)
	struct TSet<int64_t> EquippedPlayerIds; // 0x150(0x50)
	struct TSet<struct AKSPlayerState*> EquippedPlayers; // 0x1a0(0x50)
	struct AKSEnforcedEquipmentState* EnforcedEquipmentState; // 0x1f0(0x08)
};

// Class Killstreak.KSEnforcedEquipmentState
// Size: 0x240 (Inherited: 0x220)
struct AKSEnforcedEquipmentState : public AInfo {
	struct TArray<struct UKSItem*> EnforcedItems; // 0x220(0x10)
	struct FMulticastInlineDelegate OnEnforcedItemsUpdated; // 0x230(0x10)

	void OnRep_EnforcedItems(); // Function Killstreak.KSEnforcedEquipmentState.OnRep_EnforcedItems
};

// Class Killstreak.KSEnvironmentVolumeActor
// Size: 0x240 (Inherited: 0x220)
struct AKSEnvironmentVolumeActor : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	struct FName EnvironmentTag; // 0x228(0x08)
	struct TArray<struct UEnvironmentTrackerComponent*> ContainedEnvironmentTrackers; // 0x230(0x10)

	void UpdateEnvironmentTag(struct FName NewTag); // Function Killstreak.KSEnvironmentVolumeActor.UpdateEnvironmentTag
};

// Class Killstreak.KSEnvQueryContext_Character
// Size: 0x30 (Inherited: 0x28)
struct UKSEnvQueryContext_Character : public UEnvQueryContext {
	struct FName BlackboardKeyName; // 0x28(0x08)
};

// Class Killstreak.KSEnvQueryTest_CharacterTrace
// Size: 0x2d8 (Inherited: 0x1f8)
struct UKSEnvQueryTest_CharacterTrace : public UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1f8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	struct UEnvQueryContext* Context; // 0x2d0(0x08)
};

// Class Killstreak.KSEquipmentManagerComponent
// Size: 0x218 (Inherited: 0xb0)
struct UKSEquipmentManagerComponent : public UActorComponent {
	struct TMap<struct FGameplayTag, struct AKSEquipment*> EquippedInventory; // 0xb0(0x50)
	char UnknownData_100[0x50]; // 0x100(0x50)
	struct TArray<struct AKSEquipment*> SlotlessInventory; // 0x150(0x10)
	struct FGameplayTagContainer MultiUseEquipPoints; // 0x160(0x20)
	struct TScriptInterface<None> EquipmentManagerOwner; // 0x180(0x10)
	struct FMulticastInlineDelegate OnEquipmentAddedDel; // 0x190(0x10)
	char UnknownData_1A0[0x18]; // 0x1a0(0x18)
	struct FMulticastInlineDelegate OnEquipmentRemovedDel; // 0x1b8(0x10)
	char UnknownData_1C8[0x40]; // 0x1c8(0x40)
	float EmoteCooldownExpireTime; // 0x208(0x04)
	float QuipCooldownExpireTime; // 0x20c(0x04)
	float CommunicationCooldownExpireTime; // 0x210(0x04)
	float RadialMenuItemCooldownExpireTime; // 0x214(0x04)

	void SetEquipmentContainerOwner(struct TScriptInterface<None> InEquipmentContainerOwner); // Function Killstreak.KSEquipmentManagerComponent.SetEquipmentContainerOwner
	void OnItemDropped(struct UKSItem* InItem, struct AKSItemDrop* InDrop); // Function Killstreak.KSEquipmentManagerComponent.OnItemDropped
	struct AKSEquipment* GetEquipmentByEquipPoint(struct FGameplayTag InEquipPoint); // Function Killstreak.KSEquipmentManagerComponent.GetEquipmentByEquipPoint
};

// Class Killstreak.KSEscapePoint
// Size: 0x240 (Inherited: 0x220)
struct AKSEscapePoint : public AActor {
	struct UBoxComponent* EscapeOverlapComponent; // 0x220(0x08)
	char UnknownData_228[0x8]; // 0x228(0x08)
	struct FName ObjectiveEventName; // 0x230(0x08)
	float ObjectiveEventLoudness; // 0x238(0x04)
	float TimeToNotifyBots; // 0x23c(0x04)

	void OnEscapeOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSEscapePoint.OnEscapeOverlapEnd
	void OnEscapeOverlapBegin(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSEscapePoint.OnEscapeOverlapBegin
	void NotifyBots(); // Function Killstreak.KSEscapePoint.NotifyBots
};

// Class Killstreak.KSEventTracker
// Size: 0x148 (Inherited: 0x28)
struct UKSEventTracker : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnTriggered; // 0x30(0x10)
	bool bDoesTick; // 0x40(0x01)
	char UnknownData_41[0x7]; // 0x41(0x07)
	struct TSet<struct FString> ExpectedConfigEntries; // 0x48(0x50)
	struct FWeakObjectPtr<struct AKSPlayerController> PlayerController; // 0x98(0x08)
	struct FWeakObjectPtr<struct UKSActivityInstance> WeakActivityInstance; // 0xa0(0x08)
	struct TMap<enum class ERewardSource, float> ProgressEarnedBySource; // 0xa8(0x50)
	struct TMap<struct FString, float> ProgressEarnedByEvent; // 0xf8(0x50)

	void TriggerEvent(int32_t Count); // Function Killstreak.KSEventTracker.TriggerEvent
	void TickTracker(float DeltaTime); // Function Killstreak.KSEventTracker.TickTracker
	void StoreProgressBySource(enum class ERewardSource Source, float Progress); // Function Killstreak.KSEventTracker.StoreProgressBySource
	void StoreProgressByEvent(struct FString EventName, float Progress); // Function Killstreak.KSEventTracker.StoreProgressByEvent
	void HandleTrackerInitialized(struct TMap<struct FString, float> Config, struct TMap<struct FString, struct FString> StringConfig); // Function Killstreak.KSEventTracker.HandleTrackerInitialized
	void HandleLostPlayerController(); // Function Killstreak.KSEventTracker.HandleLostPlayerController
	struct AKSWorldSettings* GetWorldSettings(); // Function Killstreak.KSEventTracker.GetWorldSettings
	struct AKSGameState* GetGameState(); // Function Killstreak.KSEventTracker.GetGameState
	struct AKSGameMode* GetGameMode(); // Function Killstreak.KSEventTracker.GetGameMode
	struct UKSGameInstance* GetGameInstance(); // Function Killstreak.KSEventTracker.GetGameInstance
};

// Class Killstreak.KSExponentialHeightFog
// Size: 0x230 (Inherited: 0x220)
struct AKSExponentialHeightFog : public AInfo {
	bool bAllowManualSetVisibility; // 0x220(0x01)
	char UnknownData_221[0x7]; // 0x221(0x07)
	struct UExponentialHeightFogComponent* Component; // 0x228(0x08)
};

// Class Killstreak.KSExtractionPickup
// Size: 0x3c8 (Inherited: 0x380)
struct AKSExtractionPickup : public AKSObjectiveBase {
	char UnknownData_380[0x8]; // 0x380(0x08)
	int32_t PickupExclusivityGroup; // 0x388(0x04)
	char UnknownData_38C[0x4]; // 0x38c(0x04)
	struct FText InteractionPropt; // 0x390(0x18)
	struct USphereComponent* InteractionRangeSphereComponent; // 0x3a8(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x3b0(0x08)
	char UnknownData_3B8[0x10]; // 0x3b8(0x10)

	bool IsPickupUsed(); // Function Killstreak.KSExtractionPickup.IsPickupUsed
	bool IsPickupEnabled(); // Function Killstreak.KSExtractionPickup.IsPickupEnabled
	void DeactivatePickup(); // Function Killstreak.KSExtractionPickup.DeactivatePickup
	void ActivatePickup(); // Function Killstreak.KSExtractionPickup.ActivatePickup
};

// Class Killstreak.KSFinalBlowTracker
// Size: 0xa8 (Inherited: 0x98)
struct UKSFinalBlowTracker : public UKSAccoladeTracker {
	char UnknownData_98[0x10]; // 0x98(0x10)

	void HandleOnLastPlayer(struct AKSPlayerState* LastPlayer); // Function Killstreak.KSFinalBlowTracker.HandleOnLastPlayer
	void CheckLastPlayer(struct FCombatEventInfo ElimEvent, struct AKSPlayerState* LastPlayer); // Function Killstreak.KSFinalBlowTracker.CheckLastPlayer
};

// Class Killstreak.KSFirstBloodTracker
// Size: 0xa0 (Inherited: 0x98)
struct UKSFirstBloodTracker : public UKSAccoladeTracker {
	bool IsFirstKill; // 0x98(0x01)
	char UnknownData_99[0x7]; // 0x99(0x07)

	void HandleTrackerAccolade(struct AKSPlayerState* PlayerState); // Function Killstreak.KSFirstBloodTracker.HandleTrackerAccolade
};

// Class Killstreak.KSFlightPoint
// Size: 0x230 (Inherited: 0x220)
struct AKSFlightPoint : public ATargetPoint {
	struct USplineComponent* SplineComponent; // 0x220(0x08)
	char SplinePointType; // 0x228(0x01)
	bool bIsEndPoint; // 0x229(0x01)
	char UnknownData_22A[0x6]; // 0x22a(0x06)
};

// Class Killstreak.KSFootstepOverrideVolume
// Size: 0x270 (Inherited: 0x258)
struct AKSFootstepOverrideVolume : public ATriggerVolume {
	char UnknownData_258[0x8]; // 0x258(0x08)
	struct FName OverrideMaterialName; // 0x260(0x08)
	float OverridePriority; // 0x268(0x04)
	char UnknownData_26C[0x4]; // 0x26c(0x04)
};

// Class Killstreak.KSGameEngine
// Size: 0xf30 (Inherited: 0xea0)
struct UKSGameEngine : public UPComGameEngine {
	struct FMulticastInlineDelegate OnGoPlayMapReady; // 0xea0(0x10)
	char UnknownData_EB0[0x80]; // 0xeb0(0x80)

	void SetGoPlayMapTravelDelayed(bool DelayGoPlayMap); // Function Killstreak.KSGameEngine.SetGoPlayMapTravelDelayed
	void SetGoPlayMapDelayTimeoutLimit(float DelayTimeoutLimit); // Function Killstreak.KSGameEngine.SetGoPlayMapDelayTimeoutLimit
	void QuickGoPlayCachedMap(); // Function Killstreak.KSGameEngine.QuickGoPlayCachedMap
	void OnTriggerGoPlayMap(); // Function Killstreak.KSGameEngine.OnTriggerGoPlayMap
	bool GetGoPlayMapTravelDelayed(); // Function Killstreak.KSGameEngine.GetGoPlayMapTravelDelayed
	float GetGoPlayMapDelayTimeoutLimit(); // Function Killstreak.KSGameEngine.GetGoPlayMapDelayTimeoutLimit
	void FinishGoPlayMap(); // Function Killstreak.KSGameEngine.FinishGoPlayMap
	void CancelDelayedGoPlayMap(); // Function Killstreak.KSGameEngine.CancelDelayedGoPlayMap
};

// Class Killstreak.KSGameInstance
// Size: 0x450 (Inherited: 0x230)
struct UKSGameInstance : public UPGame_GameInstance {
	struct FMulticastInlineDelegate LoadingScreenBeganDel; // 0x230(0x10)
	struct FMulticastInlineDelegate LoadingScreenEndedDel; // 0x240(0x10)
	char UnknownData_250[0x58]; // 0x250(0x58)
	struct UDataTable* LoadingScreenTipsTable; // 0x2a8(0x08)
	struct ULoadingScreenImageManager* LoadingScreenImageManager; // 0x2b0(0x08)
	struct FGameplayTagQuery AlwaysNeededPrimaryAssetQuery; // 0x2b8(0x48)
	struct TArray<struct FName> AlwaysNeededPrimaryAssetBundles; // 0x300(0x10)
	char UnknownData_310[0x10]; // 0x310(0x10)
	struct TArray<struct FWeakObjectPtr<struct UKSActivityManagerBase>> ActivityManagers; // 0x320(0x10)
	struct UKSAcquisitionManager* AcquisitionManager; // 0x330(0x08)
	struct UPUMG_StoreItemHelper* StoreItemHelper; // 0x338(0x08)
	struct UKSJsonDataFactory* JsonDataFactory; // 0x340(0x08)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x348(0x08)
	struct UKSUISessionManager* UISessionManager; // 0x350(0x08)
	struct UKSActivityInstanceManager* ActivityInstanceManager; // 0x358(0x08)
	struct UKSPlayerInventoryHelper* PlayerInventoryHelper; // 0x360(0x08)
	struct UKSPlayerStatsManager* PlayerStatsManager; // 0x368(0x08)
	struct UKSPlayerChallengesManager* PlayerChallengesManager; // 0x370(0x08)
	struct UKSNPETrackManager* NPETrackManager; // 0x378(0x08)
	struct UKSMercMasteryManager* MercMasteryManager; // 0x380(0x08)
	struct UKSWeaponMasteryManager* WeaponMasteryManager; // 0x388(0x08)
	struct UKSAwardsManager* AwardsManager; // 0x390(0x08)
	struct UKSGeneralProgressionManager* GeneralProgressionManager; // 0x398(0x08)
	struct UKSRankedManager* RankedManager; // 0x3a0(0x08)
	struct UKSBattlePassProgressionManager* BattlePassProgressionManager; // 0x3a8(0x08)
	struct UKSAudioManager* AudioManager; // 0x3b0(0x08)
	struct UKSPunishmentManager* PunishmentManager; // 0x3b8(0x08)
	char UnknownData_3C0[0x80]; // 0x3c0(0x80)
	struct UKSWeaponAsset* WingsuitWeaponAsset; // 0x440(0x08)
	bool ShouldUseZombiePrevention; // 0x448(0x01)
	char UnknownData_449[0x3]; // 0x449(0x03)
	int32_t ZombiePreventionSeconds; // 0x44c(0x04)

	void UpdateRecordedAnimStats(struct TMap<struct FName, struct FKSAnimStats> NewStats); // Function Killstreak.KSGameInstance.UpdateRecordedAnimStats
	void HandleAppResume(); // Function Killstreak.KSGameInstance.HandleAppResume
	void HandleAppReactivated(); // Function Killstreak.KSGameInstance.HandleAppReactivated
	struct UKSWeaponMasteryManager* GetWeaponMasteryManager(); // Function Killstreak.KSGameInstance.GetWeaponMasteryManager
	struct UPUMG_StoreItemHelper* GetStoreItemHelper(); // Function Killstreak.KSGameInstance.GetStoreItemHelper
	struct UKSRankedManager* GetRankedManager(); // Function Killstreak.KSGameInstance.GetRankedManager
	struct UKSPunishmentManager* GetPunishmentManager(); // Function Killstreak.KSGameInstance.GetPunishmentManager
	struct UKSPlayerStatsManager* GetPlayerStatsManager(); // Function Killstreak.KSGameInstance.GetPlayerStatsManager
	struct UKSPlayerInventoryHelper* GetPlayerInventoryHelper(); // Function Killstreak.KSGameInstance.GetPlayerInventoryHelper
	struct UKSPlayerChallengesManager* GetPlayerChallengesManager(); // Function Killstreak.KSGameInstance.GetPlayerChallengesManager
	struct UKSNPETrackManager* GetNPETrackManager(); // Function Killstreak.KSGameInstance.GetNPETrackManager
	struct UKSMercMasteryManager* GetMercMasteryManager(); // Function Killstreak.KSGameInstance.GetMercMasteryManager
	bool GetLoadingScreenImage(struct TSoftObjectPtr<struct UTexture2D> LoadingScreenImageSoftRef, struct FString InMapName, struct FText MapDisplayName, struct FText MapRegion, struct FText MapDescription); // Function Killstreak.KSGameInstance.GetLoadingScreenImage
	struct UKSGeneralProgressionManager* GetGeneralProgressionManager(); // Function Killstreak.KSGameInstance.GetGeneralProgressionManager
	struct UKSBattlePassProgressionManager* GetBattlePassProgressionManager(); // Function Killstreak.KSGameInstance.GetBattlePassProgressionManager
	struct UKSAwardsManager* GetAwardsManager(); // Function Killstreak.KSGameInstance.GetAwardsManager
	struct UKSAudioManager* GetAudioManager(); // Function Killstreak.KSGameInstance.GetAudioManager
	struct UKSActivityInstance* GetActivityInstanceForActivity(struct UKSActivity* Activity, struct AKSPlayerController* PlayerController); // Function Killstreak.KSGameInstance.GetActivityInstanceForActivity
	void ExportAnimAudit(struct FString Filename); // Function Killstreak.KSGameInstance.ExportAnimAudit
	void EndLoading(); // Function Killstreak.KSGameInstance.EndLoading
	void ClaimTutorialAward(); // Function Killstreak.KSGameInstance.ClaimTutorialAward
	void BeginLoading(struct FString mapName); // Function Killstreak.KSGameInstance.BeginLoading
};

// Class Killstreak.KSGameMode
// Size: 0xb88 (Inherited: 0x3e8)
struct AKSGameMode : public APGame_GameMode {
	char UnknownData_3E8[0x38]; // 0x3e8(0x38)
	float PlayerReadyTimeoutTime; // 0x420(0x04)
	char UnknownData_424[0xc]; // 0x424(0x0c)
	bool bCachedShouldPlayersStartSpectatingDefaultCamera; // 0x430(0x01)
	char UnknownData_431[0x3]; // 0x431(0x03)
	struct FKSRespawnConfig RespawnConfiguration; // 0x434(0x18)
	char UnknownData_44C[0x4]; // 0x44c(0x04)
	struct FMulticastInlineDelegate OnPhaseChangeDel; // 0x450(0x10)
	struct FMulticastInlineDelegate OnPhaseTimerExpired; // 0x460(0x10)
	char UnknownData_470[0x10]; // 0x470(0x10)
	struct FName MatchPhase; // 0x480(0x08)
	bool bUseMatchTimer; // 0x488(0x01)
	char UnknownData_489[0x3]; // 0x489(0x03)
	float MatchSetupTime; // 0x48c(0x04)
	bool bUseSelectionPhase; // 0x490(0x01)
	char UnknownData_491[0x3]; // 0x491(0x03)
	float PreSelectionPhaseTime; // 0x494(0x04)
	float SelectionPhaseTime; // 0x498(0x04)
	float PostSelectionPhaseTime; // 0x49c(0x04)
	float PostSelectionPhaseMinTime; // 0x4a0(0x04)
	float PostSelectionCinematicPhaseTime; // 0x4a4(0x04)
	float MatchDefaultPhaseTime; // 0x4a8(0x04)
	char UnknownData_4AC[0x34]; // 0x4ac(0x34)
	float MatchTimerUpdatePeriod; // 0x4e0(0x04)
	char UnknownData_4E4[0x14]; // 0x4e4(0x14)
	struct UKSSpawnSelectorComponent* KSSpawnSelectorComponentClass; // 0x4f8(0x08)
	struct UKSSpawnSelectorComponent* KSSpawnSelectorComponent; // 0x500(0x08)
	bool bAllowFindInactivePlayer; // 0x508(0x01)
	bool bUseLoginStartSpotForPawn; // 0x509(0x01)
	char UnknownData_50A[0x36]; // 0x50a(0x36)
	int32_t DefaultTeamCount; // 0x540(0x04)
	char UnknownData_544[0x54]; // 0x544(0x54)
	struct FMulticastInlineDelegate MatchStatsFinalizedDelegate; // 0x598(0x10)
	char UnknownData_5A8[0x18]; // 0x5a8(0x18)
	float MatchStartTime; // 0x5c0(0x04)
	float MatchEndTime; // 0x5c4(0x04)
	bool bIsTutorial; // 0x5c8(0x01)
	bool bIsPractice; // 0x5c9(0x01)
	bool bIsAiPvpMode; // 0x5ca(0x01)
	bool bIsPlayerSpectateOnlyMode; // 0x5cb(0x01)
	float DefaultMinimapWidth; // 0x5cc(0x04)
	struct AKSTeamState* DefaultTeamState; // 0x5d0(0x08)
	float ReverseFriendlyFireStartThreshold; // 0x5d8(0x04)
	float FriendlyFireModiferBase; // 0x5dc(0x04)
	float ReverseFriendlyFireModiferBase; // 0x5e0(0x04)
	bool bCanDownPlayers; // 0x5e4(0x01)
	bool bCanDownBots; // 0x5e5(0x01)
	bool bCreditInstantKillWithDown; // 0x5e6(0x01)
	bool bCreditSuicideWithDown; // 0x5e7(0x01)
	bool bImmediateDeathForLastManStanding; // 0x5e8(0x01)
	bool bEliminatePlayerOnDeath; // 0x5e9(0x01)
	bool bPivotToKillerOnDeath; // 0x5ea(0x01)
	bool bTrackKillerOnDeath; // 0x5eb(0x01)
	bool bRevealKillerOnDeath; // 0x5ec(0x01)
	bool bShouldRandomizeSides; // 0x5ed(0x01)
	bool bStartJobSelectionOnSideSwap; // 0x5ee(0x01)
	char UnknownData_5EF[0x1]; // 0x5ef(0x01)
	struct AKSGlobalShotListener* ShotListener; // 0x5f0(0x08)
	char UnknownData_5F8[0x8]; // 0x5f8(0x08)
	struct FMulticastInlineDelegate OnTeamSidesFlipped; // 0x600(0x10)
	bool bClearObjectivesMarkedUsedOnSidesFlipped; // 0x610(0x01)
	char UnknownData_611[0x7]; // 0x611(0x07)
	struct AActor* Winner; // 0x618(0x08)
	struct AActor* CheatWinner; // 0x620(0x08)
	struct UKSRewardsCalculator* DefaultRewardsCalculatorClass; // 0x628(0x08)
	bool bIncludeInitialInventoryFromDefaultPawnInStartingInventory; // 0x630(0x01)
	char UnknownData_631[0x7]; // 0x631(0x07)
	struct TArray<struct UKSItem*> StartingInventory; // 0x638(0x10)
	struct TArray<struct UKSItem*> PlayerSpawnInventory; // 0x648(0x10)
	struct TArray<struct UKSItem*> PlayerInitialSpawnInventory; // 0x658(0x10)
	struct TArray<struct UKSItem*> PlayerRespawnInventory; // 0x668(0x10)
	struct TArray<struct UKSPlayerMod*> PlayerSpawnMods; // 0x678(0x10)
	struct TArray<struct UKSPlayerMod*> PlayerInitialSpawnMods; // 0x688(0x10)
	struct TArray<struct UKSPlayerMod*> PlayerRespawnMods; // 0x698(0x10)
	struct UKSPlayerMod* FreefallMod; // 0x6a8(0x08)
	char UnknownData_6B0[0x30]; // 0x6b0(0x30)
	bool bIsBotMatch; // 0x6e0(0x01)
	char UnknownData_6E1[0x3]; // 0x6e1(0x03)
	int32_t StartingCash; // 0x6e4(0x04)
	struct FMulticastInlineDelegate OnSpecialtyItemVendorLoaded; // 0x6e8(0x10)
	char UnknownData_6F8[0x4]; // 0x6f8(0x04)
	bool bUsePlayerLoadouts; // 0x6fc(0x01)
	bool bDisableLoadoutValidation; // 0x6fd(0x01)
	char UnknownData_6FE[0xca]; // 0x6fe(0xca)
	float WaitForPlayersTimeout; // 0x7c8(0x04)
	char UnknownData_7CC[0x14]; // 0x7cc(0x14)
	struct TMap<struct TSoftObjectPtr<struct UKSWeaponAsset>, int32_t> LoadingLoot; // 0x7e0(0x50)
	bool bPopulateLootSites; // 0x830(0x01)
	char UnknownData_831[0x7]; // 0x831(0x07)
	struct TMap<enum class ELootSiteRarity, struct FKSLootGroupGuaranteeMap> LootGroupGuarantees; // 0x838(0x50)
	bool bSpawnLootOnMatchStart; // 0x888(0x01)
	char UnknownData_889[0x57]; // 0x889(0x57)
	struct TArray<struct FKSLootRaritySwapInfo> LootRaritySwaps; // 0x8e0(0x10)
	enum class EKSLootRespawnMode LootRespawnMode; // 0x8f0(0x01)
	char UnknownData_8F1[0x7]; // 0x8f1(0x07)
	struct TMap<enum class ELootSiteRarity, float> LootSiteRespawnPeriods; // 0x8f8(0x50)
	char UnknownData_948[0x50]; // 0x948(0x50)
	struct UKSAIActorCollection* AIActorCollection; // 0x998(0x08)
	bool bRecordKillCam; // 0x9a0(0x01)
	char UnknownData_9A1[0x3]; // 0x9a1(0x03)
	float AFKIdleTime; // 0x9a4(0x04)
	char UnknownData_9A8[0x8]; // 0x9a8(0x08)
	struct TArray<struct FString> SublevelSuffices; // 0x9b0(0x10)
	struct TArray<struct FString> HighMemorySublevelSuffixes; // 0x9c0(0x10)
	struct TArray<struct FString> LowMemorySublevelSuffixes; // 0x9d0(0x10)
	char UnknownData_9E0[0x30]; // 0x9e0(0x30)
	struct UDataTable* AccoladeTrackerDataTable; // 0xa10(0x08)
	struct TArray<struct UKSAccoladeTracker*> AccoladeTrackerInstances; // 0xa18(0x10)
	struct TArray<struct UKSAccoladeTracker*> AccoladeTrackerClasses; // 0xa28(0x10)
	struct FKSGameHUDSettings GameModeHUDSettings; // 0xa38(0x18)
	struct TArray<struct TSoftObjectPtr<struct AActor>> InteractiveObjectCache; // 0xa50(0x10)
	struct UKSOutOfBoundsManager* OutOfBoundsManagerClass; // 0xa60(0x08)
	struct UKSMatchDataRecorder* MatchDataRecorder; // 0xa68(0x08)
	bool ShouldForceCompetitiveLogic; // 0xa70(0x01)
	enum class EKSPerSecondChargeMode PerSecondChargeMode; // 0xa71(0x01)
	char UnknownData_A72[0x2]; // 0xa72(0x02)
	float PerSecondChargePercent; // 0xa74(0x04)
	struct TArray<struct UKSGameRuleComponent*> GameRules; // 0xa78(0x10)
	struct TMap<struct FName, struct FString> EditorPropertyMap; // 0xa88(0x50)
	char UnknownData_AD8[0x50]; // 0xad8(0x50)
	struct FString FriendlyAudioName; // 0xb28(0x10)
	struct TArray<struct FString> FriendlyAchievementNames; // 0xb38(0x10)
	int32_t BurnTestNumberOfRoundToWin; // 0xb48(0x04)
	char UnknownData_B4C[0x14]; // 0xb4c(0x14)
	bool bAllowPlayersToUseUnownedJobs; // 0xb60(0x01)
	char UnknownData_B61[0x7]; // 0xb61(0x07)
	struct TArray<int32_t> AllowedUnownedJobIds; // 0xb68(0x10)
	bool bFubarIfNoVendorsByMatchStart; // 0xb78(0x01)
	bool bOnlyFubarIfNoJobVendor; // 0xb79(0x01)
	enum class EKSBotNameGeneration BotNamingMethod; // 0xb7a(0x01)
	bool bDoesGameModeAllowSurrender; // 0xb7b(0x01)
	char UnknownData_B7C[0xc]; // 0xb7c(0x0c)

	bool UsePlayerLoadouts(); // Function Killstreak.KSGameMode.UsePlayerLoadouts
	void StartPreSelectionPhase(); // Function Killstreak.KSGameMode.StartPreSelectionPhase
	void SetMatchPhase(struct FName NewPhase); // Function Killstreak.KSGameMode.SetMatchPhase
	void SetInfiniteAmmo(bool bValue); // Function Killstreak.KSGameMode.SetInfiniteAmmo
	struct AActor* SelectAWinner(); // Function Killstreak.KSGameMode.SelectAWinner
	void PopulateLootSites(); // Function Killstreak.KSGameMode.PopulateLootSites
	void PopulateInteractiveObjects(); // Function Killstreak.KSGameMode.PopulateInteractiveObjects
	bool PlayerCanEnterPlay(struct AController* C); // Function Killstreak.KSGameMode.PlayerCanEnterPlay
	void OnWaitForPlayersExpired(); // Function Killstreak.KSGameMode.OnWaitForPlayersExpired
	void OnTeamEliminated(struct AKSTeamState* Team); // Function Killstreak.KSGameMode.OnTeamEliminated
	void OnPlayerEliminated(struct AKSPlayerState* Player); // Function Killstreak.KSGameMode.OnPlayerEliminated
	void OnPlayerDownStateChanged(struct AKSPlayerState* Player); // Function Killstreak.KSGameMode.OnPlayerDownStateChanged
	void OnKSCharacterRevived(struct AKSCharacter* InRevivee, struct AKSPlayerState* InReviver); // Function Killstreak.KSGameMode.OnKSCharacterRevived
	void OnKSCharacterRadialMenuItemUsed(struct AKSCharacter* InCharacter, struct APlayerState* CharacterPlayer, struct UKSRadialMenuItem* RadialMenuItem); // Function Killstreak.KSGameMode.OnKSCharacterRadialMenuItemUsed
	void OnKSCharacterDowned(struct AKSCharacter* InCharacter, struct AController* EventInstigator, struct UDamageType* DamageType, enum class EHitLocationType HitLocationType, struct AActor* DamageCauser, float DamageDealt); // Function Killstreak.KSGameMode.OnKSCharacterDowned
	void OnKSCharacterDownAssist(struct AKSCharacter* InVictim, struct AController* DownInstigator, struct AController* DownAssistant, float RawDamage, float DamagePercent); // Function Killstreak.KSGameMode.OnKSCharacterDownAssist
	void OnKSCharacterCombatSummary(struct FAdvancedCombatSummary CombatSummary); // Function Killstreak.KSGameMode.OnKSCharacterCombatSummary
	void OnKSCharacterCombatEvent(struct FAdvancedCombatEvent CombatEvent); // Function Killstreak.KSGameMode.OnKSCharacterCombatEvent
	void OnKSCharacterBaseDied(struct AKSCharacterBase* InCharacter, struct APlayerState* CharacterPlayer, struct AController* EventInstigator, struct UDamageType* DamageType, enum class EHitLocationType HitLocationType, struct FKSEventAssistants EventAssistants, struct AActor* DamageCauser, float DamageDealt); // Function Killstreak.KSGameMode.OnKSCharacterBaseDied
	void K2_OnMatchPhaseSet(struct FName NewPhase); // Function Killstreak.KSGameMode.K2_OnMatchPhaseSet
	enum class EKSRewardType IsAWinner(struct AActor* Other); // Function Killstreak.KSGameMode.IsAWinner
	void HandleAllPlayersFinishedPrePrep(); // Function Killstreak.KSGameMode.HandleAllPlayersFinishedPrePrep
	int32_t GetStartingTeamNum(struct UPlayer* NewPlayer, struct APGame_PlayerController* NewPlayerController); // Function Killstreak.KSGameMode.GetStartingTeamNum
	struct AKSGlobalShotListener* GetShotListener(); // Function Killstreak.KSGameMode.GetShotListener
	struct UKSRewardsCalculator* GetRewardsCalculatorClass(); // Function Killstreak.KSGameMode.GetRewardsCalculatorClass
	float GetPerSecondChargePercent(); // Function Killstreak.KSGameMode.GetPerSecondChargePercent
	enum class EKSPerSecondChargeMode GetPerSecondChargeMode(); // Function Killstreak.KSGameMode.GetPerSecondChargeMode
	float GetMatchTimeElapsed(); // Function Killstreak.KSGameMode.GetMatchTimeElapsed
	struct FName GetMatchPhase(); // Function Killstreak.KSGameMode.GetMatchPhase
	struct FName GetGamePhase(); // Function Killstreak.KSGameMode.GetGamePhase
	struct FKSGameHUDSettings GetGameModeHUDSettings(); // Function Killstreak.KSGameMode.GetGameModeHUDSettings
	struct TArray<struct UKSPlayerMod*> GetDefaultPlayerMods(); // Function Killstreak.KSGameMode.GetDefaultPlayerMods
	struct TArray<struct TSoftObjectPtr<struct AActor>> GetCachedInteractiveObjects(); // Function Killstreak.KSGameMode.GetCachedInteractiveObjects
	void EventOnTeamCreated(struct AKSTeamState* Team); // Function Killstreak.KSGameMode.EventOnTeamCreated
	bool DoesClearObjectivesMarkedUsedOnSidesFlipped(); // Function Killstreak.KSGameMode.DoesClearObjectivesMarkedUsedOnSidesFlipped
	void DestroyDynamicZipLines(); // Function Killstreak.KSGameMode.DestroyDynamicZipLines
	void DestroyActive(struct UObject* ActorClass); // Function Killstreak.KSGameMode.DestroyActive
	void ClearLootSites(); // Function Killstreak.KSGameMode.ClearLootSites
	void ClearInteractiveObjects(); // Function Killstreak.KSGameMode.ClearInteractiveObjects
	bool CanUsePlayerStart(struct AController* Player, struct APlayerStart* PlayerStart); // Function Killstreak.KSGameMode.CanUsePlayerStart
	bool CanSpawnBotsNow(); // Function Killstreak.KSGameMode.CanSpawnBotsNow
	void AllPlayersLockedInForComponent(); // Function Killstreak.KSGameMode.AllPlayersLockedInForComponent
	bool AllowDamageNow(); // Function Killstreak.KSGameMode.AllowDamageNow
	void AddInteractiveObject(struct TSoftObjectPtr<struct AActor> ObjectToAdd); // Function Killstreak.KSGameMode.AddInteractiveObject
};

// Class Killstreak.KSGameMode_RoundGame
// Size: 0xc78 (Inherited: 0xb88)
struct AKSGameMode_RoundGame : public AKSGameMode {
	float PostRoundDuration; // 0xb88(0x04)
	bool bSkipSelectionCinematicAfterFirstRound; // 0xb8c(0x01)
	char UnknownData_B8D[0x3]; // 0xb8d(0x03)
	struct FName RoundStateSetupComplete; // 0xb90(0x08)
	int32_t RoundNumber; // 0xb98(0x04)
	int32_t RoundsNeededToWin; // 0xb9c(0x04)
	int32_t TotalNumberOfRounds; // 0xba0(0x04)
	bool bPlayersCanRestartDuringRoundInProgress; // 0xba4(0x01)
	bool bHoldPlayerRestartUntilFirstRoundSetup; // 0xba5(0x01)
	bool bWinRoundByElimination; // 0xba6(0x01)
	bool bAwardPointOnDraw; // 0xba7(0x01)
	float RoundSetupTime; // 0xba8(0x04)
	float RoundDuration; // 0xbac(0x04)
	struct FName RoundStartPhase; // 0xbb0(0x08)
	bool bNewPawnOnRoundStart; // 0xbb8(0x01)
	char UnknownData_BB9[0xf]; // 0xbb9(0x0f)
	struct AKSTeamState* WinByEliminationTeam; // 0xbc8(0x08)
	char UnknownData_BD0[0x1c]; // 0xbd0(0x1c)
	int32_t NumberOfConsecutiveLossesToEnableEpicGroupSiteGuarantees; // 0xbec(0x04)
	bool bKillDownedPlayersAtEndOfRound; // 0xbf0(0x01)
	bool bSpareWinningDownedPlayers; // 0xbf1(0x01)
	char UnknownData_BF2[0x1]; // 0xbf2(0x01)
	enum class EPlayerInfoInventoryRestoreType InventoryRestore; // 0xbf3(0x01)
	bool bAllowPlayersToKeepInventoryBetweenRounds; // 0xbf4(0x01)
	bool bRequirePlayerToBeAlive; // 0xbf5(0x01)
	bool bRequirePlayerToBeStanding; // 0xbf6(0x01)
	bool bRequirePlayerToBeOnWinningTeam; // 0xbf7(0x01)
	bool bSideSwapWipesEquipment; // 0xbf8(0x01)
	bool bRestoreEquipment; // 0xbf9(0x01)
	char UnknownData_BFA[0x6]; // 0xbfa(0x06)
	struct FGameplayTagQuery InventoryRestoreEquipPointRequirements; // 0xc00(0x48)
	bool bRestoreSlotlessEquipment; // 0xc48(0x01)
	bool bRestoreNonEquipment; // 0xc49(0x01)
	char UnknownData_C4A[0x6]; // 0xc4a(0x06)
	struct TArray<struct FInventoryRestoreInfo> GuaranteedInventory; // 0xc50(0x10)
	int32_t FlipTeamSideFrequency; // 0xc60(0x04)
	int32_t MaxTeamSideFlipsPerMatch; // 0xc64(0x04)
	bool bSideSwapClearsConsecutiveLosses; // 0xc68(0x01)
	char UnknownData_C69[0x3]; // 0xc69(0x03)
	int32_t TeamSideFlipsThisMatch; // 0xc6c(0x04)
	bool bBlockWeaponsPostRound; // 0xc70(0x01)
	char UnknownData_C71[0x7]; // 0xc71(0x07)

	void StartRound(); // Function Killstreak.KSGameMode_RoundGame.StartRound
	bool ReadyToStartNextRound(); // Function Killstreak.KSGameMode_RoundGame.ReadyToStartNextRound
	bool ReadyToPrepareNextRound(); // Function Killstreak.KSGameMode_RoundGame.ReadyToPrepareNextRound
	void PrepareForNextRound(); // Function Killstreak.KSGameMode_RoundGame.PrepareForNextRound
	void K2_OnSetRoundState(struct FName InRoundState); // Function Killstreak.KSGameMode_RoundGame.K2_OnSetRoundState
	bool IsRoundSetupComplete(); // Function Killstreak.KSGameMode_RoundGame.IsRoundSetupComplete
	bool IsRoundInProgress(); // Function Killstreak.KSGameMode_RoundGame.IsRoundInProgress
	bool HasRoundStarted(); // Function Killstreak.KSGameMode_RoundGame.HasRoundStarted
	bool HasRoundEnded(); // Function Killstreak.KSGameMode_RoundGame.HasRoundEnded
	bool HasPreparedNextRound(); // Function Killstreak.KSGameMode_RoundGame.HasPreparedNextRound
	struct FName GetRoundState(); // Function Killstreak.KSGameMode_RoundGame.GetRoundState
	float GetRoundStartTime(); // Function Killstreak.KSGameMode_RoundGame.GetRoundStartTime
	char GetRoundNumber(); // Function Killstreak.KSGameMode_RoundGame.GetRoundNumber
	void EndRoundKillCam(); // Function Killstreak.KSGameMode_RoundGame.EndRoundKillCam
	void EndRound(); // Function Killstreak.KSGameMode_RoundGame.EndRound
	bool CanPlayerKeepInventoryBetweenRounds(struct AKSCharacter* Character, struct AController* Player); // Function Killstreak.KSGameMode_RoundGame.CanPlayerKeepInventoryBetweenRounds
};

// Class Killstreak.KSGameMode_Extraction
// Size: 0xd28 (Inherited: 0xc78)
struct AKSGameMode_Extraction : public AKSGameMode_RoundGame {
	char UnknownData_C78[0x8]; // 0xc78(0x08)
	bool bAllowComputersFromLastRound; // 0xc80(0x01)
	bool bAvoidRepeatComputers; // 0xc81(0x01)
	char UnknownData_C82[0x2]; // 0xc82(0x02)
	int32_t ActiveComputerCount; // 0xc84(0x04)
	int32_t ComputerCountToWin; // 0xc88(0x04)
	bool bCanActiveComputerFavorMatchPointTeam; // 0xc8c(0x01)
	bool bShouldActiveComputerBeNeutralForTieBreaker; // 0xc8d(0x01)
	char UnknownData_C8E[0x2]; // 0xc8e(0x02)
	struct AKSTeamState* DefendingTeam; // 0xc90(0x08)
	struct AKSTeamState* AttackingTeam; // 0xc98(0x08)
	struct AKSExtractionComputer* ActiveComputer; // 0xca0(0x08)
	float TimeToCompleteHack; // 0xca8(0x04)
	float TimeToUnlockComputers; // 0xcac(0x04)
	float TimeAddedOnSuccessfulHack; // 0xcb0(0x04)
	bool bHackingPreventsRoundEnd; // 0xcb4(0x01)
	bool bWinOnDehack; // 0xcb5(0x01)
	bool bBotsCanSpawnFirstRoundOnly; // 0xcb6(0x01)
	char UnknownData_CB7[0x71]; // 0xcb7(0x71)
};

// Class Killstreak.KSGameMode_Control
// Size: 0xd08 (Inherited: 0xc78)
struct AKSGameMode_Control : public AKSGameMode_RoundGame {
	float BaseControlPointCaptureTime; // 0xc78(0x04)
	float BaseControlPointRecaptureTime; // 0xc7c(0x04)
	float CaptureRatePercentIncreasePerPlayer; // 0xc80(0x04)
	float FullCaptureDecayTime; // 0xc84(0x04)
	int32_t NumActiveControlPoints; // 0xc88(0x04)
	bool bAvoidRepeatControlPoints; // 0xc8c(0x01)
	bool bAllowControlPointsFromLastRound; // 0xc8d(0x01)
	bool bCanActiveControlPointFavorMatchPointTeam; // 0xc8e(0x01)
	bool bShouldActiveControlPointBeNeutralForTieBreaker; // 0xc8f(0x01)
	struct TMap<struct AKSControlPoint*, float> ControlledPoints; // 0xc90(0x50)
	struct TArray<struct AKSControlPoint*> AvailableControlPoints; // 0xce0(0x10)
	float TimeToUnlockControlPoints; // 0xcf0(0x04)
	bool bScorePointImmediatelyUponCapture; // 0xcf4(0x01)
	enum class EKSControlTieBreakerMode ControlTieBreakerMode; // 0xcf5(0x01)
	char UnknownData_CF6[0x2]; // 0xcf6(0x02)
	int32_t ScorePerControlPoint; // 0xcf8(0x04)
	int32_t ScoreToWin; // 0xcfc(0x04)
	float ScoreUpdatePeriod; // 0xd00(0x04)
	char UnknownData_D04[0x4]; // 0xd04(0x04)

	void OnTeamScored(struct AKSTeamState* ScoringTeam, struct AKSControlPoint* ControlPoint); // Function Killstreak.KSGameMode_Control.OnTeamScored
	float GetUpdateRateForControlPoint(struct AKSControlPoint* InPoint); // Function Killstreak.KSGameMode_Control.GetUpdateRateForControlPoint
	float GetTimeUntilScoreForPoint(struct AKSControlPoint* InPoint); // Function Killstreak.KSGameMode_Control.GetTimeUntilScoreForPoint
	float GetScoreUpdatePeriodForPoint(struct AKSControlPoint* InPoint); // Function Killstreak.KSGameMode_Control.GetScoreUpdatePeriodForPoint
	struct AKSTeamState* BreakTie(struct TArray<struct AKSTeamState*> TiedTeams); // Function Killstreak.KSGameMode_Control.BreakTie
};

// Class Killstreak.KSGameMode_NeutralBomb
// Size: 0xe20 (Inherited: 0xc78)
struct AKSGameMode_NeutralBomb : public AKSGameMode_RoundGame {
	float ScoreEarnedOnBombTimerComplete; // 0xc78(0x04)
	float ScoreEarnedOnBombDisarmed; // 0xc7c(0x04)
	struct FText BombDisarmedDescription; // 0xc80(0x18)
	struct FText BombDetonatedDescription; // 0xc98(0x18)
	struct FText BombArmedDescription; // 0xcb0(0x18)
	int32_t CashEarnedOnBombArmed; // 0xcc8(0x04)
	int32_t CashEarnedOnBombDisarmed; // 0xccc(0x04)
	struct TArray<struct AKSNeutralBombSpawner*> BombSpawners; // 0xcd0(0x10)
	struct AKSNeutralBombSpawner* CurrentBombSpawner; // 0xce0(0x08)
	struct FGameplayTag BombEquipPoint; // 0xce8(0x08)
	float TimeAfterRoundStartToResetSpawnedBomb; // 0xcf0(0x04)
	float BombResetDuration; // 0xcf4(0x04)
	char UnknownData_CF8[0x8]; // 0xcf8(0x08)
	bool bWinOnBombDisarm; // 0xd00(0x01)
	char UnknownData_D01[0x5f]; // 0xd01(0x5f)
	struct TArray<struct AKSNeutralBombZone*> AllBombZones; // 0xd60(0x10)
	char UnknownData_D70[0x50]; // 0xd70(0x50)
	struct TMap<int32_t, int32_t> ZoneGroupGuarantees; // 0xdc0(0x50)
	bool bPrioritizeUnusedZonesNext; // 0xe10(0x01)
	char UnknownData_E11[0x3]; // 0xe11(0x03)
	int32_t ZonesLeftToWin; // 0xe14(0x04)
	float TimeAddedOnBombComplete; // 0xe18(0x04)
	char UnknownData_E1C[0x4]; // 0xe1c(0x04)

	void ResetBombIfInSpawnedState(); // Function Killstreak.KSGameMode_NeutralBomb.ResetBombIfInSpawnedState
	void ResetBomb(); // Function Killstreak.KSGameMode_NeutralBomb.ResetBomb
};

// Class Killstreak.KSGameMode_Demolition
// Size: 0xe30 (Inherited: 0xe20)
struct AKSGameMode_Demolition : public AKSGameMode_NeutralBomb {
	bool bDirectBombGive; // 0xe20(0x01)
	char UnknownData_E21[0x7]; // 0xe21(0x07)
	struct UKSItem* DirectGiveBombItem; // 0xe28(0x08)
};

// Class Killstreak.KSGameMode_ExtractionCoop
// Size: 0xd88 (Inherited: 0xd28)
struct AKSGameMode_ExtractionCoop : public AKSGameMode_Extraction {
	float CollectionPhaseTime; // 0xd28(0x04)
	int32_t CollectionsToActivate; // 0xd2c(0x04)
	float EscapePhaseTime; // 0xd30(0x04)
	bool bRequireDownedPlayersToEscape; // 0xd34(0x01)
	char UnknownData_D35[0x3]; // 0xd35(0x03)
	struct TArray<struct AKSPlayerState*> PlayersInEscapeZone; // 0xd38(0x10)
	char UnknownData_D48[0x8]; // 0xd48(0x08)
	struct AActor* StartingDropShipClass; // 0xd50(0x08)
	struct AKSDropShipLocation* StartDropShipLocation; // 0xd58(0x08)
	struct AKSDropShipLocation* EscapeDropShipLocation; // 0xd60(0x08)
	char UnknownData_D68[0x11]; // 0xd68(0x11)
	bool bUseAlarmState; // 0xd79(0x01)
	char UnknownData_D7A[0x2]; // 0xd7a(0x02)
	float TimeAddedPerObjective; // 0xd7c(0x04)
	float AlarmStateTime; // 0xd80(0x04)
	float AlarmSpawnPeriod; // 0xd84(0x04)

	void BroadcastAlarm(); // Function Killstreak.KSGameMode_ExtractionCoop.BroadcastAlarm
};

// Class Killstreak.KSGameMode_RoyaleBase
// Size: 0xbb8 (Inherited: 0xb88)
struct AKSGameMode_RoyaleBase : public AKSGameMode {
	struct TArray<struct FRoyaleZoneData> DataForZones; // 0xb88(0x10)
	float TimeUntilFirstZoneActivation; // 0xb98(0x04)
	float InsertionPhaseDuration; // 0xb9c(0x04)
	struct FWeakObjectPtr<struct AKSRoyaleSafeZone> SafeZone; // 0xba0(0x08)
	int32_t CurrentZoneIndex; // 0xba8(0x04)
	char UnknownData_BAC[0x4]; // 0xbac(0x04)
	struct FTimerHandle DamageTimer; // 0xbb0(0x08)

	void TickZoneDamage(); // Function Killstreak.KSGameMode_RoyaleBase.TickZoneDamage
	bool GetMustContainActor(struct AActor* MustContainActor, float SafeRadius); // Function Killstreak.KSGameMode_RoyaleBase.GetMustContainActor
};

// Class Killstreak.KSGameMode_ExtractionRoyale
// Size: 0xbf0 (Inherited: 0xbb8)
struct AKSGameMode_ExtractionRoyale : public AKSGameMode_RoyaleBase {
	char UnknownData_BB8[0x8]; // 0xbb8(0x08)
	struct AKSTeamState* AttackingTeam; // 0xbc0(0x08)
	struct AKSExtractionComputer* ActiveComputer; // 0xbc8(0x08)
	float TimeToCompleteHack; // 0xbd0(0x04)
	float TimeToUnlockComputers; // 0xbd4(0x04)
	char UnknownData_BD8[0x18]; // 0xbd8(0x18)
};

// Class Killstreak.KSGameMode_Heist
// Size: 0xbc8 (Inherited: 0xb88)
struct AKSGameMode_Heist : public AKSGameMode {
	int32_t TeamCashToWin; // 0xb88(0x04)
	int32_t TotalRefreshesInMatch; // 0xb8c(0x04)
	struct TArray<struct UKSCash*> CashAssets; // 0xb90(0x10)
	char UnknownData_BA0[0x8]; // 0xba0(0x08)
	struct AKSGameState_Heist* CachedHeistState; // 0xba8(0x08)
	struct AKSTeamState* WinningTeam; // 0xbb0(0x08)
	struct TArray<struct AKSCashExtractionPoint*> CashExtractionPoints; // 0xbb8(0x10)
};

// Class Killstreak.KSGameMode_Modular
// Size: 0xd50 (Inherited: 0xc78)
struct AKSGameMode_Modular : public AKSGameMode_RoundGame {
	struct FMulticastInlineDelegate OnTeamWiped; // 0xc78(0x10)
	bool bMarkedInProgress; // 0xc88(0x01)
	bool bAutoRestoreRespawnConfigOnNewRound; // 0xc89(0x01)
	bool bAutoRevertTeamSwapsOnNewRound; // 0xc8a(0x01)
	char UnknownData_C8B[0x5]; // 0xc8b(0x05)
	struct FMulticastInlineDelegate OnTeamChanged; // 0xc90(0x10)
	bool bAwardBonusPointToRoundWinner; // 0xca0(0x01)
	char UnknownData_CA1[0x7]; // 0xca1(0x07)
	struct TMap<struct AKSPlayerState*, struct AKSTeamState*> OriginalPlayersToTeams; // 0xca8(0x50)
	struct TMap<int32_t, int32_t> ScoreAtRoundStart; // 0xcf8(0x50)
	struct UKSPhaseRuleComponent* ActivePhaseRule; // 0xd48(0x08)

	void PushNewRespawnConfigToTeams(struct FKSRespawnConfig NewConfig, enum class EExtractionTeamType Filter, bool bInverseFilter, bool bReset); // Function Killstreak.KSGameMode_Modular.PushNewRespawnConfigToTeams
	void PushNewRespawnConfigToAllTeams(struct FKSRespawnConfig Config, bool bReset); // Function Killstreak.KSGameMode_Modular.PushNewRespawnConfigToAllTeams
	void PushModeDefaultRespawnConfigToTeams(enum class EExtractionTeamType Filter, bool bInverseFilter, bool bReset); // Function Killstreak.KSGameMode_Modular.PushModeDefaultRespawnConfigToTeams
	void PushModeDefaultRespawnConfigToAllTeams(bool bReset); // Function Killstreak.KSGameMode_Modular.PushModeDefaultRespawnConfigToAllTeams
	void OnRoundStart(); // Function Killstreak.KSGameMode_Modular.OnRoundStart
	void OnRoundPrepare(); // Function Killstreak.KSGameMode_Modular.OnRoundPrepare
	bool FilterTeamObjectives(struct TArray<struct AKSObjectiveBase*> AvailableObjectives, struct TArray<struct AKSObjectiveBase*> FilteredObjectives); // Function Killstreak.KSGameMode_Modular.FilterTeamObjectives
	bool FilterObjectiveForTeams(struct TArray<struct AKSObjectiveBase*> AvailableObjectives, struct AKSTeamState* FavoredTeam, struct TArray<struct AKSObjectiveBase*> FilteredObjectives); // Function Killstreak.KSGameMode_Modular.FilterObjectiveForTeams
	bool FilterObjectiveAgainstTeams(struct TArray<struct AKSObjectiveBase*> AvailableObjectives, struct AKSTeamState* DiscouragedTeam, struct TArray<struct AKSObjectiveBase*> FilteredObjectives); // Function Killstreak.KSGameMode_Modular.FilterObjectiveAgainstTeams
	bool FilterNeutralObjectives(struct TArray<struct AKSObjectiveBase*> AvailableObjectives, struct TArray<struct AKSObjectiveBase*> FilteredObjectives); // Function Killstreak.KSGameMode_Modular.FilterNeutralObjectives
	void EndRoundPrepare(); // Function Killstreak.KSGameMode_Modular.EndRoundPrepare
	struct AKSObjectiveBase* ChooseRandomObjective(struct TArray<struct AKSObjectiveBase*> AvailableObjectives); // Function Killstreak.KSGameMode_Modular.ChooseRandomObjective
	void ChangePlayerTeam(struct AKSPlayerState* Player, struct AKSTeamState* NewTeam, enum class EChangeAdditionalActionCondition ShouldRestartPlayer); // Function Killstreak.KSGameMode_Modular.ChangePlayerTeam
};

// Class Killstreak.KSGameMode_Sabotage
// Size: 0xd10 (Inherited: 0xc78)
struct AKSGameMode_Sabotage : public AKSGameMode_RoundGame {
	char UnknownData_C78[0x8]; // 0xc78(0x08)
	int32_t ActiveComputerCount; // 0xc80(0x04)
	bool bTiebreakerRoundWipesEquipment; // 0xc84(0x01)
	char UnknownData_C85[0x3]; // 0xc85(0x03)
	struct AKSTeamState* DefendingTeam; // 0xc88(0x08)
	struct AKSTeamState* AttackingTeam; // 0xc90(0x08)
	char UnknownData_C98[0x8]; // 0xc98(0x08)
	struct TArray<struct AKSExtractionComputer*> ActiveComputers; // 0xca0(0x10)
	float TimeToUnlockComputers; // 0xcb0(0x04)
	float HackTimeExtension; // 0xcb4(0x04)
	float TimeToCompleteHack; // 0xcb8(0x04)
	int32_t HackedComputerCount; // 0xcbc(0x04)
	struct TMap<struct AKSExtractionComputer*, struct FTimerHandle> HackCompletionTimers; // 0xcc0(0x50)

	void OnHackComplete(struct AKSExtractionComputer* InComputer); // Function Killstreak.KSGameMode_Sabotage.OnHackComplete
	bool HasDefendingTeamWon(); // Function Killstreak.KSGameMode_Sabotage.HasDefendingTeamWon
	bool HasAttackingTeamWon(); // Function Killstreak.KSGameMode_Sabotage.HasAttackingTeamWon
};

// Class Killstreak.KSGameMode_StrikeOutControl
// Size: 0xd18 (Inherited: 0xd08)
struct AKSGameMode_StrikeOutControl : public AKSGameMode_Control {
	int32_t TicketsToRemoveOnScore; // 0xd08(0x04)
	struct FWeakObjectPtr<struct AKSTeamState> PendingRoundWinner; // 0xd0c(0x08)
	float SuddenDeathScoreUpdatePeriod; // 0xd14(0x04)

	void OnTeamRemainingRespawnsChanged(struct AKSTeamState* Team); // Function Killstreak.KSGameMode_StrikeOutControl.OnTeamRemainingRespawnsChanged
	void OnObjectiveUpdate(struct AKSObjectiveBase* InObjective, struct FObjectiveState ObjectiveState); // Function Killstreak.KSGameMode_StrikeOutControl.OnObjectiveUpdate
};

// Class Killstreak.KSGameMode_TutorialBase
// Size: 0xba8 (Inherited: 0xb88)
struct AKSGameMode_TutorialBase : public AKSGameMode {
	struct FMulticastInlineDelegate OnTutorialComplete; // 0xb88(0x10)
	struct FMulticastInlineDelegate TutorialEnding; // 0xb98(0x10)

	void CallTutorialEndingDelegates(); // Function Killstreak.KSGameMode_TutorialBase.CallTutorialEndingDelegates
	void CallOnTutorialCompleteDelegates(); // Function Killstreak.KSGameMode_TutorialBase.CallOnTutorialCompleteDelegates
};

// Class Killstreak.KSGamepadLookSpeedManager
// Size: 0x30 (Inherited: 0x28)
struct UKSGamepadLookSpeedManager : public UObject {
	struct AKSPlayerController* PlayerController; // 0x28(0x08)
};

// Class Killstreak.KSGamepadCurvedLookSpeedManager
// Size: 0xe8 (Inherited: 0x30)
struct UKSGamepadCurvedLookSpeedManager : public UKSGamepadLookSpeedManager {
	bool bUseBaseVelocity; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct UCurveVector* LookBaseVelocityCurve; // 0x38(0x08)
	struct FVector2D BoostThreshold; // 0x40(0x08)
	struct FVector2D BoostMultiplier; // 0x48(0x08)
	float BoostAcceleration; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct UCurveVector* MouseLookMaxVelocityCurve; // 0x58(0x08)
	struct UCurveVector* MouseLookMaxVelocityADSCurve; // 0x60(0x08)
	float TurnRateMultiplier; // 0x68(0x04)
	float LookUpRateMultiplier; // 0x6c(0x04)
	struct UCurveVector* MouseLookAccelerationCurve; // 0x70(0x08)
	struct UCurveVector* MouseLookAccelerationADSCurve; // 0x78(0x08)
	struct TMap<struct FName, struct UCurveVector*> TestBaseVelocityCurves; // 0x80(0x50)
	struct FVector2D LastRotationVelocityScale; // 0xd0(0x08)
	struct FVector2D PrevInput; // 0xd8(0x08)
	struct FVector2D CurrentTurnSpeed; // 0xe0(0x08)

	void SetOuterDeadZone(float NewZoneX, float NewZoneY); // Function Killstreak.KSGamepadCurvedLookSpeedManager.SetOuterDeadZone
	void SetBoostMultiplier(float NewBoostX, float NewBoostY); // Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBoostMultiplier
	void SetBoostAcceleration(float NewAccel); // Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBoostAcceleration
	void SetBaseVelocityCurve(struct FName TestCurveName); // Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBaseVelocityCurve
	void PrintLookSpeedParameters(); // Function Killstreak.KSGamepadCurvedLookSpeedManager.PrintLookSpeedParameters
};

// Class Killstreak.KSGameState
// Size: 0x1488 (Inherited: 0x290)
struct AKSGameState : public AGameState {
	char UnknownData_290[0x30]; // 0x290(0x30)
	struct FKSPlayerIdentitiesContainer PlayerIdentitiesContainer; // 0x2c0(0x120)
	struct TMap<uint64_t, struct FWeakObjectPtr<struct AKSLagCompensatedActor>> PredictedActors; // 0x3e0(0x50)
	char UnknownData_430[0x10]; // 0x430(0x10)
	enum class EKillCamStatus KillCamStatus; // 0x440(0x01)
	char UnknownData_441[0x3]; // 0x441(0x03)
	float KillCamRecordingSecondsToKeep; // 0x444(0x04)
	struct APawn* KillCamFocusPawn; // 0x448(0x08)
	char UnknownData_450[0x8]; // 0x450(0x08)
	struct APawn* KillCamSecondaryFocusPawn; // 0x458(0x08)
	char UnknownData_460[0x8]; // 0x460(0x08)
	struct AActor* KillCamFocusSpecial; // 0x468(0x08)
	char UnknownData_470[0x4]; // 0x470(0x04)
	float KillCamTime; // 0x474(0x04)
	char UnknownData_478[0x18]; // 0x478(0x18)
	struct FMulticastInlineDelegate OnGameDisplayInfo; // 0x490(0x10)
	struct FMulticastInlineDelegate OnRemoveGameDisplayInfo; // 0x4a0(0x10)
	char UnknownData_4B0[0x68]; // 0x4b0(0x68)
	struct FMulticastInlineDelegate OnPhaseChangeDel; // 0x518(0x10)
	struct FMulticastInlineDelegate OnSetupStartDel; // 0x528(0x10)
	struct FMulticastInlineDelegate OnSetupEndDel; // 0x538(0x10)
	struct FMulticastInlineDelegate OnAbortFireDel; // 0x548(0x10)
	struct FMulticastInlineDelegate OnTimerSecondTick; // 0x558(0x10)
	struct FName MatchPhase; // 0x568(0x08)
	struct FName PreviousPhase; // 0x570(0x08)
	bool bHasProcessedMatchStarted; // 0x578(0x01)
	char UnknownData_579[0x4f]; // 0x579(0x4f)
	struct FPGame_ReplicatedTimer ReplicatedMatchTimer; // 0x5c8(0x38)
	char UnknownData_600[0xc]; // 0x600(0x0c)
	bool bCharacterBodiesPersistAfterDeath; // 0x60c(0x01)
	char UnknownData_60D[0x3]; // 0x60d(0x03)
	float SecondsForCharacterBodiesToPersistAfterDeath; // 0x610(0x04)
	float SecondsToViewBodyAfterDeath; // 0x614(0x04)
	struct FMulticastInlineDelegate OnPlayerDeath; // 0x618(0x10)
	struct FMulticastInlineDelegate OnPlayerDown; // 0x628(0x10)
	struct FMulticastInlineDelegate OnRadialMenuItemUse; // 0x638(0x10)
	struct FMulticastInlineDelegate OnPlayerSpawn; // 0x648(0x10)
	struct FMulticastInlineDelegate OnPlayerRevive; // 0x658(0x10)
	struct FMulticastInlineDelegate OnWinnerSet; // 0x668(0x10)
	struct FMulticastInlineDelegate OnPlayerAssist; // 0x678(0x10)
	struct FMulticastInlineDelegate OnLastManStanding; // 0x688(0x10)
	struct FMulticastInlineDelegate OnUIRelevantPlayerStateChangedDel; // 0x698(0x10)
	float DefaultMinimapWidth; // 0x6a8(0x04)
	char UnknownData_6AC[0x4]; // 0x6ac(0x04)
	struct FMulticastInlineDelegate OnTeamAdded; // 0x6b0(0x10)
	struct FMulticastInlineDelegate OnTeamRemoved; // 0x6c0(0x10)
	struct TArray<struct UKSAccoladeTracker*> AccoladeTrackerClasses; // 0x6d0(0x10)
	char UnknownData_6E0[0x18]; // 0x6e0(0x18)
	struct AKSMiniMapAssistant* MiniMapAssistant; // 0x6f8(0x08)
	struct TMap<int32_t, struct AKSTeamState*> teams; // 0x700(0x50)
	char UnknownData_750[0x8]; // 0x750(0x08)
	struct FCombatEventList CombatEventList; // 0x758(0x88)
	struct FRadialMenuItemEventList RadialMenuItemEventList; // 0x7e0(0x88)
	struct FAssistEventList AssistEventList; // 0x868(0x88)
	struct FReviveEventList ReviveEventList; // 0x8f0(0x88)
	struct FMulticastInlineDelegate OnTeamEliminatedDel; // 0x978(0x10)
	struct FMulticastInlineDelegate OnTeamEliminatedOrDownedDel; // 0x988(0x10)
	struct FMulticastInlineDelegate OnPlayerEliminatedDel; // 0x998(0x10)
	struct FMulticastInlineDelegate OnPlayerDownedChangedDel; // 0x9a8(0x10)
	struct FMulticastInlineDelegate OnAttackingTeamUpdated; // 0x9b8(0x10)
	struct FMulticastInlineDelegate OnDisplayCashChanged; // 0x9c8(0x10)
	bool bDisplayCash; // 0x9d8(0x01)
	char UnknownData_9D9[0x3]; // 0x9d9(0x03)
	int32_t CashPerDown; // 0x9dc(0x04)
	struct FText DownDescription; // 0x9e0(0x18)
	int32_t CashPerAssist; // 0x9f8(0x04)
	char UnknownData_9FC[0x4]; // 0x9fc(0x04)
	struct FText AssistDescription; // 0xa00(0x18)
	int32_t CashPerRevive; // 0xa18(0x04)
	char UnknownData_A1C[0x4]; // 0xa1c(0x04)
	struct FText ReviveDescription; // 0xa20(0x18)
	int32_t CashPerElim; // 0xa38(0x04)
	char UnknownData_A3C[0x4]; // 0xa3c(0x04)
	struct FText EliminationDescription; // 0xa40(0x18)
	int32_t CashPerSuicide; // 0xa58(0x04)
	char UnknownData_A5C[0x4]; // 0xa5c(0x04)
	struct FText SuicideDescription; // 0xa60(0x18)
	struct FString MercSelectSubLevel; // 0xa78(0x10)
	struct FMulticastInlineDelegate OnTeamSidesFlipped; // 0xa88(0x10)
	struct TArray<int32_t> TierUnlockThresholds; // 0xa98(0x10)
	float MaxMarkerDistanceForCommonLoot; // 0xaa8(0x04)
	enum class EKSGameTicketDisplayType ObjectiveTicketDisplayType; // 0xaac(0x01)
	char UnknownData_AAD[0x183]; // 0xaad(0x183)
	struct TArray<struct AKSLootSiteBase*> WorldLootSites; // 0xc30(0x10)
	struct TArray<struct AKSObjectiveBase*> WorldObjectives; // 0xc40(0x10)
	struct TArray<struct AKSFlightPoint*> WorldFlightPoints; // 0xc50(0x10)
	struct TArray<struct AKSDestructibleBase*> WorldDestructibles; // 0xc60(0x10)
	struct TArray<struct AKSItemDrop*> WorldDrops; // 0xc70(0x10)
	struct TArray<struct AKSProjectile*> WorldProjectiles; // 0xc80(0x10)
	struct TArray<struct AKSCharacter*> WorldCharacters; // 0xc90(0x10)
	struct TArray<struct UKSHeatSourceComponent*> WorldHeatSources; // 0xca0(0x10)
	struct FMulticastInlineDelegate OnHeatSourceAdded; // 0xcb0(0x10)
	struct FMulticastInlineDelegate OnHeatSourceRemoved; // 0xcc0(0x10)
	struct TArray<struct AActor*> WorldDeployables; // 0xcd0(0x10)
	bool bDestroyDeployableOnInstigatorDeath; // 0xce0(0x01)
	char UnknownData_CE1[0x7]; // 0xce1(0x07)
	struct FMulticastInlineDelegate OnItemDropAdded; // 0xce8(0x10)
	float ItemDropLifeSpan; // 0xcf8(0x04)
	bool bShouldOffsetWeaponDrops; // 0xcfc(0x01)
	char UnknownData_CFD[0x3]; // 0xcfd(0x03)
	float ProjectileLifeSpan; // 0xd00(0x04)
	char UnknownData_D04[0x4]; // 0xd04(0x04)
	struct TArray<struct TScriptInterface<None>> SkyDiveListeners; // 0xd08(0x10)
	struct TArray<struct AKSCharacter*> SkyDivers; // 0xd18(0x10)
	char UnknownData_D28[0x88]; // 0xd28(0x88)
	struct FText PresenceDisplayText; // 0xdb0(0x18)
	struct FString PresenceKey; // 0xdc8(0x10)
	char UnknownData_DD8[0x8]; // 0xdd8(0x08)
	struct UKSTimerComponent* WaveRespawnTimer; // 0xde0(0x08)
	struct TArray<struct FKSLootRarityTimerPair> LootRarityTimerPairs; // 0xde8(0x10)
	struct TMap<enum class ELootSiteRarity, struct UKSTimerComponent*> LootRarityTimerMap; // 0xdf8(0x50)
	struct FMulticastInlineDelegate OnLootRespawnTimerTick; // 0xe48(0x10)
	struct FMulticastInlineDelegate OnLootRespawnTimerActive; // 0xe58(0x10)
	struct FMulticastInlineDelegate OnAccoladeDisplay; // 0xe68(0x10)
	struct FAccoladeEventList AccoladeEventList; // 0xe78(0x88)
	bool bBlockWeaponFiring; // 0xf00(0x01)
	char UnknownData_F01[0x3]; // 0xf01(0x03)
	float HealthGate; // 0xf04(0x04)
	bool bPreserveReserveAmmo; // 0xf08(0x01)
	bool bInfiniteAmmo; // 0xf09(0x01)
	bool bShowHUDObjectiveRoles; // 0xf0a(0x01)
	bool bShowHUDObjectiveRoleBeforeJobSelect; // 0xf0b(0x01)
	bool bInvertHUDObjectiveRoles; // 0xf0c(0x01)
	char UnknownData_F0D[0x3]; // 0xf0d(0x03)
	struct FKSGameHUDSettings GameModeHUDSettings; // 0xf10(0x18)
	bool bPlayersShouldSpectateDefaultCamera; // 0xf28(0x01)
	char UnknownData_F29[0x4f]; // 0xf29(0x4f)
	struct FMulticastInlineDelegate OnDynamicDestroyPreviewActorsDel; // 0xf78(0x10)
	struct FMulticastInlineDelegate OnDynamicDisablePreviewActorsDel; // 0xf88(0x10)
	struct FMulticastInlineDelegate OnDynamicEnablePreviewActorsDel; // 0xf98(0x10)
	struct TArray<struct FName> AlwaysIncludedClientBundles; // 0xfa8(0x10)
	struct TArray<struct FName> AlwaysIncludedServerBundles; // 0xfb8(0x10)
	struct FReplicatedPreloader Preloader; // 0xfc8(0x1d8)
	struct ULevelSequence* TeamCinematicSequence; // 0x11a0(0x08)
	bool bCinematicDisabled; // 0x11a8(0x01)
	char UnknownData_11A9[0x7]; // 0x11a9(0x07)
	struct FKSPersistentMinPlayerDataContainer PersistentPlayerDataContainer; // 0x11b0(0x210)
	struct FMulticastInlineDelegate OnPersistentPlayerDataCreatedDel; // 0x13c0(0x10)
	char UnknownData_13D0[0x68]; // 0x13d0(0x68)
	int32_t FriendlyFireKillPenalty; // 0x1438(0x04)
	int32_t FriendlyFireDownPenalty; // 0x143c(0x04)
	char UnknownData_1440[0x18]; // 0x1440(0x18)
	bool bCanToggleScoreboard; // 0x1458(0x01)
	char UnknownData_1459[0x17]; // 0x1459(0x17)
	float SecondsFromMatchStart; // 0x1470(0x04)
	float SecondsFromPlayerDisconnect; // 0x1474(0x04)
	float SecondsFromSurrenderFailure; // 0x1478(0x04)
	bool bMatchEndedInSurrender; // 0x147c(0x01)
	char UnknownData_147D[0x3]; // 0x147d(0x03)
	struct AKSTeamState* SurrenderWinningTeam; // 0x1480(0x08)

	bool WasLastPhasePrepare(); // Function Killstreak.KSGameState.WasLastPhasePrepare
	void TriggerPostSelectionPhaseBeginFadeOutDel(); // Function Killstreak.KSGameState.TriggerPostSelectionPhaseBeginFadeOutDel
	void TriggerOnTeamCinematicSequenceBeginDel(); // Function Killstreak.KSGameState.TriggerOnTeamCinematicSequenceBeginDel
	void TrackedPlayerStateDestroyed(struct AActor* InActor); // Function Killstreak.KSGameState.TrackedPlayerStateDestroyed
	void StopWaveRespawnTimer(); // Function Killstreak.KSGameState.StopWaveRespawnTimer
	void StartWaveRespawnTimer(); // Function Killstreak.KSGameState.StartWaveRespawnTimer
	bool ShouldDestroyDeployableOnInstigatorDeath(); // Function Killstreak.KSGameState.ShouldDestroyDeployableOnInstigatorDeath
	void SetSideForTeam(int32_t TeamNumber, int32_t SideNumber); // Function Killstreak.KSGameState.SetSideForTeam
	void RemoveGameDisplayInfoForActor(struct AActor* pActor); // Function Killstreak.KSGameState.RemoveGameDisplayInfoForActor
	void RemoveGameDisplayInfoById(int32_t DisplayInfoIdToRemove); // Function Killstreak.KSGameState.RemoveGameDisplayInfoById
	void RemoveDeployable(struct TScriptInterface<None> Deployable); // Function Killstreak.KSGameState.RemoveDeployable
	void ReceivedKillCamStatus(); // Function Killstreak.KSGameState.ReceivedKillCamStatus
	void OnRep_WaveRespawnTimer(); // Function Killstreak.KSGameState.OnRep_WaveRespawnTimer
	void OnRep_MatchPhase(); // Function Killstreak.KSGameState.OnRep_MatchPhase
	void OnRep_LootRarityTimerPairs(); // Function Killstreak.KSGameState.OnRep_LootRarityTimerPairs
	void OnRep_InvertHUDObjectiveRoles(); // Function Killstreak.KSGameState.OnRep_InvertHUDObjectiveRoles
	void OnRep_InfiniteAmmo(); // Function Killstreak.KSGameState.OnRep_InfiniteAmmo
	void OnRep_DisplayCash(); // Function Killstreak.KSGameState.OnRep_DisplayCash
	void NotifyDropshipDoorOpened(); // Function Killstreak.KSGameState.NotifyDropshipDoorOpened
	void LootRespawnTimerTick(float Seconds, enum class ELootSiteRarity Rarity); // Function Killstreak.KSGameState.LootRespawnTimerTick
	void LootRespawnTimerComplete(enum class ELootSiteRarity Rarity); // Function Killstreak.KSGameState.LootRespawnTimerComplete
	void LootRespawnTimerActive(bool bActive, enum class ELootSiteRarity Rarity); // Function Killstreak.KSGameState.LootRespawnTimerActive
	bool IsRoyaleMode(); // Function Killstreak.KSGameState.IsRoyaleMode
	bool IsKillCamRecording(); // Function Killstreak.KSGameState.IsKillCamRecording
	bool IsInSetup(); // Function Killstreak.KSGameState.IsInSetup
	bool IsInSelection(); // Function Killstreak.KSGameState.IsInSelection
	struct TArray<struct AActor*> GetWorldDeployables(); // Function Killstreak.KSGameState.GetWorldDeployables
	int32_t GetWinningTeamNum(); // Function Killstreak.KSGameState.GetWinningTeamNum
	void GetUIMatchTime(float OutTimeRemaining, float OutTotalTime); // Function Killstreak.KSGameState.GetUIMatchTime
	struct TArray<struct AKSItemDrop*> GetTrackedWorldDrops(); // Function Killstreak.KSGameState.GetTrackedWorldDrops
	struct TArray<struct AKSProjectile*> GetTrackedProjectiles(); // Function Killstreak.KSGameState.GetTrackedProjectiles
	void GetTeamsWithObjectiveRole(enum class EExtractionTeamType Filter, struct TArray<struct AKSTeamState*> OutTeams, bool bInverseFilter); // Function Killstreak.KSGameState.GetTeamsWithObjectiveRole
	struct TArray<struct AKSTeamState*> GetTeams(); // Function Killstreak.KSGameState.GetTeams
	struct AKSTeamState* GetTeamConst(int32_t TeamNum); // Function Killstreak.KSGameState.GetTeamConst
	int32_t GetSideForTeam(int32_t TeamNumber); // Function Killstreak.KSGameState.GetSideForTeam
	struct TArray<struct UKSHeatSourceComponent*> GetRegisteredHeatSources(); // Function Killstreak.KSGameState.GetRegisteredHeatSources
	bool GetPlayerIdentityDataByPlayerState(struct AKSPlayerState* PlayerState, struct FKSPlayerIdentityData PlayerIdentityData); // Function Killstreak.KSGameState.GetPlayerIdentityDataByPlayerState
	struct UKSPersistentPlayerData* GetPersistentPlayerDataById(struct FKSPersistentPlayerId InId); // Function Killstreak.KSGameState.GetPersistentPlayerDataById
	struct AKSMiniMapAssistant* GetMiniMapAssistant(); // Function Killstreak.KSGameState.GetMiniMapAssistant
	enum class EPGame_ReplicateTimerState GetMatchTimerState(); // Function Killstreak.KSGameState.GetMatchTimerState
	void GetMatchTimer(float OutPhaseTimeRemaining, float OutTotalPhaseTime); // Function Killstreak.KSGameState.GetMatchTimer
	struct FName GetMatchPhase(); // Function Killstreak.KSGameState.GetMatchPhase
	struct APawn* GetKillCamSecondaryFocusPawn(int32_t LocalPlayerIndex); // Function Killstreak.KSGameState.GetKillCamSecondaryFocusPawn
	struct AKSProjectile* GetKillCamFocusSpecial(int32_t LocalPlayerIndex); // Function Killstreak.KSGameState.GetKillCamFocusSpecial
	struct APawn* GetKillCamFocusPawn(int32_t LocalPlayerIndex); // Function Killstreak.KSGameState.GetKillCamFocusPawn
	struct AActor* GetKillCamActor(int32_t Guid, int32_t LocalPlayerIndex); // Function Killstreak.KSGameState.GetKillCamActor
	struct AKSTeamState* GetFirstTeamWithObjectiveRole(enum class EExtractionTeamType Filter); // Function Killstreak.KSGameState.GetFirstTeamWithObjectiveRole
	int32_t GetFirstTeamForSide(int32_t SideNumber); // Function Killstreak.KSGameState.GetFirstTeamForSide
	struct AKSTeamState* GetAttackingTeam(); // Function Killstreak.KSGameState.GetAttackingTeam
	void GetAllTeams(struct TArray<struct AKSTeamState*> AllTeams); // Function Killstreak.KSGameState.GetAllTeams
	void GetAllPersistentPlayerData(struct TSet<struct UKSPersistentPlayerData*> OutPlayerData); // Function Killstreak.KSGameState.GetAllPersistentPlayerData
	void GetAllFriendlyTeams(struct APlayerController* InPlayerController, struct TArray<struct AKSTeamState*> FriendlyTeams); // Function Killstreak.KSGameState.GetAllFriendlyTeams
	void GetAllEnemyTeams(struct APlayerController* InPlayerController, struct TArray<struct AKSTeamState*> EnemyTeams); // Function Killstreak.KSGameState.GetAllEnemyTeams
	void FlipTeamSides(); // Function Killstreak.KSGameState.FlipTeamSides
	void EndGameInSurrender(int32_t WinningTeamNum); // Function Killstreak.KSGameState.EndGameInSurrender
	void ClientsNotifyWinnerSet(int32_t TeamNum); // Function Killstreak.KSGameState.ClientsNotifyWinnerSet
	void ClientsNotifyLastManStanding(struct AKSPlayerState* LastPlayer); // Function Killstreak.KSGameState.ClientsNotifyLastManStanding
	bool CharacterBodiesPersistAfterDeath(); // Function Killstreak.KSGameState.CharacterBodiesPersistAfterDeath
	int32_t CalculateCashForAssist(float DamagePercent); // Function Killstreak.KSGameState.CalculateCashForAssist
	void BroadcastTeamSidesFlipped(); // Function Killstreak.KSGameState.BroadcastTeamSidesFlipped
	void BroadcastKillCamParameters(struct APawn* InPawn, struct APawn* InSecondaryPawn, struct AActor* InSpecialDamageCauser); // Function Killstreak.KSGameState.BroadcastKillCamParameters
	bool BlueprintIsMatchInProgress(); // Function Killstreak.KSGameState.BlueprintIsMatchInProgress
	bool BlueprintHasMatchEnded(); // Function Killstreak.KSGameState.BlueprintHasMatchEnded
	int32_t AddGameDisplayInfo(struct FDisplayInfo DisplayInfo); // Function Killstreak.KSGameState.AddGameDisplayInfo
	void AddDeployable(struct TScriptInterface<None> Deployable); // Function Killstreak.KSGameState.AddDeployable
};

// Class Killstreak.KSGameState_RoundGame
// Size: 0x15f8 (Inherited: 0x1488)
struct AKSGameState_RoundGame : public AKSGameState {
	struct FReplicatedRoundInfo RoundInfo; // 0x1488(0x0c)
	struct FReplicatedRoundInfo PreviousRoundInfo; // 0x1494(0x0c)
	float RoundEndFadeOutAtMatchTime; // 0x14a0(0x04)
	float RoundEndFadeOutDelayTime; // 0x14a4(0x04)
	float RoundEndFadeOutTime; // 0x14a8(0x04)
	bool bUsingRoundDelayedGarbageCollection; // 0x14ac(0x01)
	char UnknownData_14AD[0x3]; // 0x14ad(0x03)
	struct FMulticastInlineDelegate OnRoundInfoChangedDel; // 0x14b0(0x10)
	char UnknownData_14C0[0x18]; // 0x14c0(0x18)
	struct FRoundResult RoundResult; // 0x14d8(0x20)
	struct TArray<struct FRoundResult> AllRoundResults; // 0x14f8(0x10)
	int32_t TotalRounds; // 0x1508(0x04)
	int32_t RoundsToWin; // 0x150c(0x04)
	struct FMulticastInlineDelegate OnTotalRoundsSet; // 0x1510(0x10)
	struct FMulticastInlineDelegate OnRoundsToWinSet; // 0x1520(0x10)
	struct FRoundInitState RoundInitState; // 0x1530(0x10)
	struct FMulticastInlineDelegate OnRoundSetupDel; // 0x1540(0x10)
	char UnknownData_1550[0x18]; // 0x1550(0x18)
	struct FMulticastInlineDelegate OnRoundStartDel; // 0x1568(0x10)
	char UnknownData_1578[0x18]; // 0x1578(0x18)
	struct FMulticastInlineDelegate OnRoundOverDel; // 0x1590(0x10)
	char UnknownData_15A0[0x18]; // 0x15a0(0x18)
	int32_t CashPerWinningPlayer; // 0x15b8(0x04)
	char UnknownData_15BC[0x4]; // 0x15bc(0x04)
	struct TArray<int32_t> ConsecutiveCashPerLosingPlayer; // 0x15c0(0x10)
	char UnknownData_15D0[0x4]; // 0x15d0(0x04)
	float RoundEndCamPreDeathDuration; // 0x15d4(0x04)
	float RoundEndCamPostDeathDuration; // 0x15d8(0x04)
	float RoundEndCamPreDeathDilation; // 0x15dc(0x04)
	float RoundEndCamTimeDilation; // 0x15e0(0x04)
	float EndOfMatchKillCamDelay; // 0x15e4(0x04)
	char UnknownData_15E8[0x10]; // 0x15e8(0x10)

	void TryToReplayLastKill(); // Function Killstreak.KSGameState_RoundGame.TryToReplayLastKill
	bool RoundHasStarted(); // Function Killstreak.KSGameState_RoundGame.RoundHasStarted
	bool RoundHasEnded(); // Function Killstreak.KSGameState_RoundGame.RoundHasEnded
	bool PreparingForNextRound(); // Function Killstreak.KSGameState_RoundGame.PreparingForNextRound
	void OnRep_TotalRounds(); // Function Killstreak.KSGameState_RoundGame.OnRep_TotalRounds
	void OnRep_RoundsToWin(); // Function Killstreak.KSGameState_RoundGame.OnRep_RoundsToWin
	void OnRep_RoundResult(); // Function Killstreak.KSGameState_RoundGame.OnRep_RoundResult
	void OnRep_RoundInitState(); // Function Killstreak.KSGameState_RoundGame.OnRep_RoundInitState
	void OnRep_RoundInfo(); // Function Killstreak.KSGameState_RoundGame.OnRep_RoundInfo
	void OnMatchTimerUpdate(float TimeInWholeSeconds); // Function Killstreak.KSGameState_RoundGame.OnMatchTimerUpdate
	bool IsTieBreakerRound(); // Function Killstreak.KSGameState_RoundGame.IsTieBreakerRound
	bool IsTeamAtMatchPoint(struct AKSTeamState* Team); // Function Killstreak.KSGameState_RoundGame.IsTeamAtMatchPoint
	bool IsRoundInProgress(); // Function Killstreak.KSGameState_RoundGame.IsRoundInProgress
	bool HasTriggeredRoundStart(); // Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundStart
	bool HasTriggeredRoundSetup(); // Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundSetup
	bool HasTriggeredRoundOver(); // Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundOver
	int32_t GetTotalRounds(); // Function Killstreak.KSGameState_RoundGame.GetTotalRounds
	struct AKSTeamState* GetRoundWinner(); // Function Killstreak.KSGameState_RoundGame.GetRoundWinner
	enum class EPGame_ReplicateTimerState GetRoundTimerState(); // Function Killstreak.KSGameState_RoundGame.GetRoundTimerState
	void GetRoundTimer(float OutRoundTimeRemaining, float OutTotalRoundTime); // Function Killstreak.KSGameState_RoundGame.GetRoundTimer
	int32_t GetRoundsToWin(); // Function Killstreak.KSGameState_RoundGame.GetRoundsToWin
	struct FName GetRoundState(); // Function Killstreak.KSGameState_RoundGame.GetRoundState
	float GetRoundStartTime(); // Function Killstreak.KSGameState_RoundGame.GetRoundStartTime
	char GetRoundNumber(); // Function Killstreak.KSGameState_RoundGame.GetRoundNumber
	struct TArray<struct FRoundResult> GetAllRoundResults(); // Function Killstreak.KSGameState_RoundGame.GetAllRoundResults
};

// Class Killstreak.KSGameState_Control
// Size: 0x1638 (Inherited: 0x15f8)
struct AKSGameState_Control : public AKSGameState_RoundGame {
	struct FMulticastInlineDelegate OnControlTeamScored; // 0x15f8(0x10)
	struct FMulticastInlineDelegate OnControlCaptured; // 0x1608(0x10)
	struct FMulticastInlineDelegate OnControlTimerTicked; // 0x1618(0x10)
	struct TArray<struct AKSControlPoint*> ControlPoints; // 0x1628(0x10)

	void GetAllControlPoints(struct TArray<struct AKSControlPoint*> OutControlPoints); // Function Killstreak.KSGameState_Control.GetAllControlPoints
	void GetActiveControlPoints(struct TArray<struct AKSControlPoint*> OutControlPoints); // Function Killstreak.KSGameState_Control.GetActiveControlPoints
	void BroadcastTeamScored(struct AKSTeamState* ScoringTeam, struct AKSControlPoint* ControlPoint); // Function Killstreak.KSGameState_Control.BroadcastTeamScored
	void BroadcastControlCaptured(struct AKSTeamState* CapturingTeam); // Function Killstreak.KSGameState_Control.BroadcastControlCaptured
};

// Class Killstreak.KSGameState_NeutralBomb
// Size: 0x16a8 (Inherited: 0x15f8)
struct AKSGameState_NeutralBomb : public AKSGameState_RoundGame {
	int32_t DownInZoneCashBonus; // 0x15f8(0x04)
	char UnknownData_15FC[0x4]; // 0x15fc(0x04)
	struct FText DownInZoneDescription; // 0x1600(0x18)
	struct FKSNeutralBombState BombState; // 0x1618(0x18)
	struct AKSNeutralBombDrop* BombDrop; // 0x1630(0x08)
	float ArmedStateDuration; // 0x1638(0x04)
	float DroppedStateDuration; // 0x163c(0x04)
	struct FMulticastInlineDelegate OnNeutralBombStateChangedDel; // 0x1640(0x10)
	char UnknownData_1650[0x8]; // 0x1650(0x08)
	struct FMulticastInlineDelegate OnBombSpotted; // 0x1658(0x10)
	bool HUDShowEnemyBombCarriers; // 0x1668(0x01)
	char UnknownData_1669[0x7]; // 0x1669(0x07)
	struct UKSTimerComponent* BombStateTimer; // 0x1670(0x08)
	struct FMulticastInlineDelegate OnBombStateTimerTick; // 0x1678(0x10)
	struct FMulticastInlineDelegate OnBombStateTimerActive; // 0x1688(0x10)
	struct TArray<struct AKSNeutralBombZone*> BombZones; // 0x1698(0x10)

	void OnRep_BombStateTimer(); // Function Killstreak.KSGameState_NeutralBomb.OnRep_BombStateTimer
	void OnRep_BombState(); // Function Killstreak.KSGameState_NeutralBomb.OnRep_BombState
	struct FKSNeutralBombState GetBombState(); // Function Killstreak.KSGameState_NeutralBomb.GetBombState
	void BombStateTimerTick(float Seconds); // Function Killstreak.KSGameState_NeutralBomb.BombStateTimerTick
	void BombStateTimerComplete(); // Function Killstreak.KSGameState_NeutralBomb.BombStateTimerComplete
	void BombStateTimerActive(bool bActive); // Function Killstreak.KSGameState_NeutralBomb.BombStateTimerActive
};

// Class Killstreak.KSGameState_Demolition
// Size: 0x16b0 (Inherited: 0x16a8)
struct AKSGameState_Demolition : public AKSGameState_NeutralBomb {
	struct AKSTeamState* AttackingTeam; // 0x16a8(0x08)

	void OnRep_AttackingTeam(); // Function Killstreak.KSGameState_Demolition.OnRep_AttackingTeam
};

// Class Killstreak.KSGameState_Extraction
// Size: 0x16f0 (Inherited: 0x15f8)
struct AKSGameState_Extraction : public AKSGameState_RoundGame {
	char UnknownData_15F8[0x8]; // 0x15f8(0x08)
	struct AKSTeamState* AttackingTeam; // 0x1600(0x08)
	struct TArray<struct AKSExtractionComputer*> Computers; // 0x1608(0x10)
	struct FName HackingObjectiveState; // 0x1618(0x08)
	struct FName LocalHackingObjectivState; // 0x1620(0x08)
	struct FMulticastInlineDelegate OnCreditHacker; // 0x1628(0x10)
	struct FMulticastInlineDelegate OnCreditDehacker; // 0x1638(0x10)
	struct FMulticastInlineDelegate OnHackingStartedDel; // 0x1648(0x10)
	struct FMulticastInlineDelegate OnHackingSuccessfulDel; // 0x1658(0x10)
	struct FMulticastInlineDelegate OnDehackStartedDel; // 0x1668(0x10)
	struct FMulticastInlineDelegate OnDehackFailDel; // 0x1678(0x10)
	struct FMulticastInlineDelegate OnComputersUnlocked; // 0x1688(0x10)
	struct FMulticastInlineDelegate OnAttackingTeamEliminatedOrDownedDel; // 0x1698(0x10)
	int32_t CashPerWinDefendingPlayer; // 0x16a8(0x04)
	int32_t HackerBonusCash; // 0x16ac(0x04)
	int32_t VictoryByHackBonusCash; // 0x16b0(0x04)
	int32_t DehackerBonusCash; // 0x16b4(0x04)
	int32_t VictoryByDehackBonusCash; // 0x16b8(0x04)
	char UnknownData_16BC[0x4]; // 0x16bc(0x04)
	struct FText HackerBonusDescription; // 0x16c0(0x18)
	struct FText DehackerBonusDescription; // 0x16d8(0x18)

	void OnRep_HackingObjectiveState(); // Function Killstreak.KSGameState_Extraction.OnRep_HackingObjectiveState
	void OnRep_AttackingTeam(); // Function Killstreak.KSGameState_Extraction.OnRep_AttackingTeam
	bool IsAComputerHacked(); // Function Killstreak.KSGameState_Extraction.IsAComputerHacked
	void GetComputers(struct TArray<struct AKSExtractionComputer*> OutComputers); // Function Killstreak.KSGameState_Extraction.GetComputers
	void CreditHacker(struct AKSPlayerState* Hacker); // Function Killstreak.KSGameState_Extraction.CreditHacker
	void CreditDehacker(struct AKSPlayerState* Dehacker); // Function Killstreak.KSGameState_Extraction.CreditDehacker
	void ComputersUnlocked(); // Function Killstreak.KSGameState_Extraction.ComputersUnlocked
};

// Class Killstreak.KSGameState_ExtractionCoop
// Size: 0x17a8 (Inherited: 0x16f0)
struct AKSGameState_ExtractionCoop : public AKSGameState_Extraction {
	char UnknownData_16F0[0x10]; // 0x16f0(0x10)
	struct TArray<struct AKSExtractionPickup*> ExtractionPickups; // 0x1700(0x10)
	char UnknownData_1710[0x50]; // 0x1710(0x50)
	struct FMulticastInlineDelegate OnExtractionPickupChanged; // 0x1760(0x10)
	struct FMulticastInlineDelegate OnEscapePointChanged; // 0x1770(0x10)
	struct FMulticastInlineDelegate OnAlarmStateChanged; // 0x1780(0x10)
	struct FMulticastInlineDelegate OnAlarmPeriodStart; // 0x1790(0x10)
	bool bAlarmState; // 0x17a0(0x01)
	char UnknownData_17A1[0x7]; // 0x17a1(0x07)

	void OnRep_AlarmState(); // Function Killstreak.KSGameState_ExtractionCoop.OnRep_AlarmState
	void BroadcastPhaseTimeout(struct FName PhaseName); // Function Killstreak.KSGameState_ExtractionCoop.BroadcastPhaseTimeout
	void BroadcastExtractionPickupChanged(struct AKSObjectiveBase* InObjective, int32_t PickupsUsed, int32_t PickupsLeft); // Function Killstreak.KSGameState_ExtractionCoop.BroadcastExtractionPickupChanged
	void BroadcastEscapePointChanged(struct TArray<struct AKSPlayerState*> ContainedPlayers); // Function Killstreak.KSGameState_ExtractionCoop.BroadcastEscapePointChanged
};

// Class Killstreak.KSGameState_RoyaleBase
// Size: 0x14b0 (Inherited: 0x1488)
struct AKSGameState_RoyaleBase : public AKSGameState {
	struct FMulticastInlineDelegate OnZoneWait; // 0x1488(0x10)
	struct FMulticastInlineDelegate OnZoneShrink; // 0x1498(0x10)
	struct AKSRoyaleSafeZone* SafeZone; // 0x14a8(0x08)

	void ZoneWaitStart(float TimeUntilShrink); // Function Killstreak.KSGameState_RoyaleBase.ZoneWaitStart
	void ZoneShrinkStart(float TimeToShrink); // Function Killstreak.KSGameState_RoyaleBase.ZoneShrinkStart
};

// Class Killstreak.KSGameState_ExtractionRoyale
// Size: 0x1578 (Inherited: 0x14b0)
struct AKSGameState_ExtractionRoyale : public AKSGameState_RoyaleBase {
	char UnknownData_14B0[0x8]; // 0x14b0(0x08)
	struct AKSTeamState* AttackingTeam; // 0x14b8(0x08)
	struct TArray<struct AKSExtractionComputer*> Computers; // 0x14c0(0x10)
	struct FName HackingObjectiveState; // 0x14d0(0x08)
	struct FName LocalHackingObjectivState; // 0x14d8(0x08)
	struct FMulticastInlineDelegate OnCreditHacker; // 0x14e0(0x10)
	struct FMulticastInlineDelegate OnCreditDehacker; // 0x14f0(0x10)
	struct FMulticastInlineDelegate OnHackingStartedDel; // 0x1500(0x10)
	struct FMulticastInlineDelegate OnHackingSuccessfulDel; // 0x1510(0x10)
	struct FMulticastInlineDelegate OnDehackStartedDel; // 0x1520(0x10)
	struct FMulticastInlineDelegate OnDehackFailDel; // 0x1530(0x10)
	struct FMulticastInlineDelegate OnComputersUnlocked; // 0x1540(0x10)
	struct FMulticastInlineDelegate OnAttackingTeamEliminatedOrDownedDel; // 0x1550(0x10)
	int32_t CashPerWinDefendingPlayer; // 0x1560(0x04)
	int32_t HackerBonusCash; // 0x1564(0x04)
	int32_t VictoryByHackBonusCash; // 0x1568(0x04)
	int32_t DehackerBonusCash; // 0x156c(0x04)
	int32_t VictoryByDehackBonusCash; // 0x1570(0x04)
	char UnknownData_1574[0x4]; // 0x1574(0x04)

	void OnRep_HackingObjectiveState(); // Function Killstreak.KSGameState_ExtractionRoyale.OnRep_HackingObjectiveState
	void OnRep_AttackingTeam(); // Function Killstreak.KSGameState_ExtractionRoyale.OnRep_AttackingTeam
	bool IsAComputerHacked(); // Function Killstreak.KSGameState_ExtractionRoyale.IsAComputerHacked
	void GetComputers(struct TArray<struct AKSExtractionComputer*> OutComputers); // Function Killstreak.KSGameState_ExtractionRoyale.GetComputers
	void CreditHacker(struct AKSPlayerState* Hacker); // Function Killstreak.KSGameState_ExtractionRoyale.CreditHacker
	void CreditDehacker(struct AKSPlayerState* Dehacker); // Function Killstreak.KSGameState_ExtractionRoyale.CreditDehacker
	void ComputersUnlocked(); // Function Killstreak.KSGameState_ExtractionRoyale.ComputersUnlocked
};

// Class Killstreak.KSGameState_Heist
// Size: 0x14f0 (Inherited: 0x1488)
struct AKSGameState_Heist : public AKSGameState {
	struct TArray<struct FKSTeamCashPair> TeamCash; // 0x1488(0x10)
	char UnknownData_1498[0x50]; // 0x1498(0x50)
	int32_t Refreshes; // 0x14e8(0x04)
	char UnknownData_14EC[0x4]; // 0x14ec(0x04)

	void OnRep_TeamCash(); // Function Killstreak.KSGameState_Heist.OnRep_TeamCash
	void OnRep_Refreshes(); // Function Killstreak.KSGameState_Heist.OnRep_Refreshes
	int32_t GetTeamCash(int32_t TeamNum); // Function Killstreak.KSGameState_Heist.GetTeamCash
	int32_t GetRefreshes(); // Function Killstreak.KSGameState_Heist.GetRefreshes
};

// Class Killstreak.KSSettingsSaveGame
// Size: 0x100 (Inherited: 0x28)
struct UKSSettingsSaveGame : public USaveGame {
	struct TMap<struct FString, struct FString> SavedSettingsConfig; // 0x28(0x50)
	struct FString SavedDisplayLanguage; // 0x78(0x10)
	int32_t LastJoinedQueuePrimaryId; // 0x88(0x04)
	char UnknownData_8C[0x4]; // 0x8c(0x04)
	struct TSet<struct FName> SavedLocalActions; // 0x90(0x50)
	int32_t SavedSelectedRegion; // 0xe0(0x04)
	int32_t LastWhatsNewVersion; // 0xe4(0x04)
	int32_t SavedCrosshairColor; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct TArray<int32_t> SavedTransientAcquisitionIds; // 0xf0(0x10)
};

// Class Killstreak.KSGameUserSettingsDefault
// Size: 0x38 (Inherited: 0x28)
struct UKSGameUserSettingsDefault : public UObject {
	struct TArray<struct FSettingConfigPair> SettingsConfig; // 0x28(0x10)
};

// Class Killstreak.KSGameUserSettings
// Size: 0x380 (Inherited: 0x120)
struct UKSGameUserSettings : public UGameUserSettings {
	char UnknownData_120[0x20]; // 0x120(0x20)
	int32_t SettingsVersionMajor; // 0x140(0x04)
	int32_t SettingsVersionMinor; // 0x144(0x04)
	enum class EKSGamepadIcons GamepadIconSet; // 0x148(0x01)
	char UnknownData_149[0x3]; // 0x149(0x03)
	struct FIntPoint DefaultScreenResolution; // 0x14c(0x08)
	struct FIntPoint SavedScreenResolution; // 0x154(0x08)
	char UnknownData_15C[0x64]; // 0x15c(0x64)
	struct FString SavedDisplayLanguage; // 0x1c0(0x10)
	int32_t LastJoinedQueuePrimaryId; // 0x1d0(0x04)
	int32_t SavedSelectedRegion; // 0x1d4(0x04)
	int32_t LastWhatsNewVersion; // 0x1d8(0x04)
	int32_t SavedCrosshairColor; // 0x1dc(0x04)
	struct TArray<int32_t> SavedTransientAcquisitionIds; // 0x1e0(0x10)
	struct TMap<struct FString, struct FString> SavedSettingsConfig; // 0x1f0(0x50)
	struct TSet<struct FName> SavedLocalActions; // 0x240(0x50)
	char UnknownData_290[0xf0]; // 0x290(0xf0)

	void SaveLocalAction(struct FName Name); // Function Killstreak.KSGameUserSettings.SaveLocalAction
	bool GetTextChatEnabled(); // Function Killstreak.KSGameUserSettings.GetTextChatEnabled
	float GetSafeFrameScale(); // Function Killstreak.KSGameUserSettings.GetSafeFrameScale
};

// Class Killstreak.KSGameViewportClient
// Size: 0x388 (Inherited: 0x348)
struct UKSGameViewportClient : public UPUMG_GameViewportClient {
	char UnknownData_348[0x30]; // 0x348(0x30)
	struct UTexture2D* FadeTexture; // 0x378(0x08)
	char UnknownData_380[0x8]; // 0x380(0x08)
};

// Class Killstreak.KSGlobalShotListener
// Size: 0x230 (Inherited: 0x220)
struct AKSGlobalShotListener : public AActor {
	struct FMulticastInlineDelegate ShotNotifyDelegate; // 0x220(0x10)

	void ShotNotify(struct FKSGlobalShotInfo ShotInfo); // Function Killstreak.KSGlobalShotListener.ShotNotify
};

// Class Killstreak.KSProjectileTargetingModule
// Size: 0x278 (Inherited: 0x70)
struct UKSProjectileTargetingModule : public UKSWeaponTargetingModule {
	bool bUseMeshForVisualSource; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FName MeshSocketForSource; // 0x74(0x08)
	struct FName LeftMeshSocketForSource; // 0x7c(0x08)
	char UnknownData_84[0x4]; // 0x84(0x04)
	struct TArray<struct FKSProjectileTargetingStateValidator> StateValidators; // 0x88(0x10)
	float ProjectileSimFrequency; // 0x98(0x04)
	float MaxSimTime; // 0x9c(0x04)
	float InitialStrideTime; // 0xa0(0x04)
	char UnknownData_A4[0x4]; // 0xa4(0x04)
	struct UStaticMesh* ArcTemplate; // 0xa8(0x08)
	struct TArray<struct UMaterialInterface*> ArcSegmentMaterials; // 0xb0(0x10)
	struct FName FirstSegmentScalarParameterName; // 0xc0(0x08)
	struct UMaterialInterface* ImpactDecal; // 0xc8(0x08)
	struct UMaterialInterface* AimPostProcessMaterial; // 0xd0(0x08)
	struct FName PostProcessStopLocationParameterName; // 0xd8(0x08)
	struct FName PostProcessRadiusParameterName; // 0xe0(0x08)
	struct FVector ImpactDecalSize; // 0xe8(0x0c)
	char SplineMeshAxisType; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	struct FVector2D ArcSegmentScale; // 0xf8(0x08)
	int32_t BounceCount; // 0x100(0x04)
	int32_t MaxSegmentsPerBounceArc; // 0x104(0x04)
	struct UKSTargetingDetailsWidget* TargetingDetailsWidgetClass; // 0x108(0x08)
	struct TArray<struct USplineMeshComponent*> ArcComponent; // 0x110(0x10)
	struct UMaterialInstanceDynamic* ImpactMaterialInstance; // 0x120(0x08)
	struct UMaterialInstanceDynamic* PostProcessMaterialInstance; // 0x128(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ArcSegmentMaterialInstances; // 0x130(0x10)
	struct UDecalComponent* ImpactComponent; // 0x140(0x08)
	struct UWidgetComponent* TargetingDetailsWidgetComponent; // 0x148(0x08)
	struct UKSTargetingDetailsWidget* TargetingDetailsWidget; // 0x150(0x08)
	struct UKSWeaponAsset_WithProjectile* ProjectileAsset; // 0x158(0x08)
	struct AKSProjectile* ProjectileCDO; // 0x160(0x08)
	char UnknownData_168[0x10]; // 0x168(0x10)
	struct FPredictProjectilePathResult CachedPredictedPathResults; // 0x178(0xb8)
	float PredictedGrenadePathArcLength; // 0x230(0x04)
	char UnknownData_234[0x44]; // 0x234(0x44)

	bool ShouldShowPathGivenState(); // Function Killstreak.KSProjectileTargetingModule.ShouldShowPathGivenState
	struct UKSWeaponAsset_WithProjectile* GetWeaponAsset_WithProjectile(); // Function Killstreak.KSProjectileTargetingModule.GetWeaponAsset_WithProjectile
	struct FVector GetTraceStartLocation(); // Function Killstreak.KSProjectileTargetingModule.GetTraceStartLocation
};

// Class Killstreak.KSGrenadeTargetingModule
// Size: 0x2c0 (Inherited: 0x278)
struct UKSGrenadeTargetingModule : public UKSProjectileTargetingModule {
	struct FLinearColor FuseWarningColor; // 0x278(0x10)
	struct FLinearColor FuseSafeColor; // 0x288(0x10)
	float FuseWarningStartTime; // 0x298(0x04)
	char UnknownData_29C[0x4]; // 0x29c(0x04)
	struct UKSWeaponAsset_Grenade* GrenadeAsset; // 0x2a0(0x08)
	char UnknownData_2A8[0x18]; // 0x2a8(0x18)

	struct UKSWeaponAsset_Grenade* GetWeaponAsset_Grenade(); // Function Killstreak.KSGrenadeTargetingModule.GetWeaponAsset_Grenade
};

// Class Killstreak.KSGroupedActivityEventTracker
// Size: 0x160 (Inherited: 0x148)
struct UKSGroupedActivityEventTracker : public UKSEventTracker {
	struct UKSActivityInstance* ActivityInstance; // 0x148(0x08)
	struct TArray<struct UKSActivityInstance*> ChildActivityInstances; // 0x150(0x10)

	void OnChildActivityFinished(struct UKSActivityInstance* Activity); // Function Killstreak.KSGroupedActivityEventTracker.OnChildActivityFinished
};

// Class Killstreak.KSHeatSourceComponent
// Size: 0x100 (Inherited: 0xb0)
struct UKSHeatSourceComponent : public UActorComponent {
	struct FMulticastInlineDelegate OnTemperatureChanged; // 0xb0(0x10)
	bool bSkipCosmeticIfOwnerIsLocallyViewed; // 0xc0(0x01)
	bool bOnlySkipCosmeticForOnAndViewedState; // 0xc1(0x01)
	char UnknownData_C2[0x2]; // 0xc2(0x02)
	float Temperature; // 0xc4(0x04)
	float TemperatureScalarModifier; // 0xc8(0x04)
	bool bDisableTickWhenTemperatureTransitionCompletes; // 0xcc(0x01)
	char UnknownData_CD[0x3]; // 0xcd(0x03)
	float TransitionTargetTemp; // 0xd0(0x04)
	float TransitionRate; // 0xd4(0x04)
	enum class EModViewModeState LastKnownViewModeState; // 0xd8(0x01)
	char UnknownData_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct UPrimitiveComponent*> WithoutHeatVisibilityBlockers; // 0xe0(0x10)
	struct TArray<struct UPrimitiveComponent*> HeatOnlyVisibilityBlockers; // 0xf0(0x10)

	void UnregisterWithoutHeatVisibilityBlocker(struct UPrimitiveComponent* Blocker); // Function Killstreak.KSHeatSourceComponent.UnregisterWithoutHeatVisibilityBlocker
	void UnregisterHeatOnlyVisibilityBlocker(struct UPrimitiveComponent* Blocker); // Function Killstreak.KSHeatSourceComponent.UnregisterHeatOnlyVisibilityBlocker
	void TransitionToTemperature(float NewTemperature, float RatePerSecond); // Function Killstreak.KSHeatSourceComponent.TransitionToTemperature
	void SetTemperatureScalarModifier(float NewTemperatureModifier); // Function Killstreak.KSHeatSourceComponent.SetTemperatureScalarModifier
	void SetTemperature(float NewTemperature); // Function Killstreak.KSHeatSourceComponent.SetTemperature
	void RegisterWithoutHeatVisibilityBlocker(struct UPrimitiveComponent* Blocker); // Function Killstreak.KSHeatSourceComponent.RegisterWithoutHeatVisibilityBlocker
	void RegisterHeatOnlyVisibilityBlocker(struct UPrimitiveComponent* Blocker); // Function Killstreak.KSHeatSourceComponent.RegisterHeatOnlyVisibilityBlocker
	void OnThermalVisionStateChanged(enum class EModViewModeState NewState); // Function Killstreak.KSHeatSourceComponent.OnThermalVisionStateChanged
	void OnOwnerInfoUpdateNotify(); // Function Killstreak.KSHeatSourceComponent.OnOwnerInfoUpdateNotify
	void NotifyThermalVisionStateChanged(enum class EModViewModeState NewState); // Function Killstreak.KSHeatSourceComponent.NotifyThermalVisionStateChanged
	float GetUnmodifiedTemperature(); // Function Killstreak.KSHeatSourceComponent.GetUnmodifiedTemperature
	float GetTemperature(); // Function Killstreak.KSHeatSourceComponent.GetTemperature
};

// Class Killstreak.KSHUDAnnouncementComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UKSHUDAnnouncementComponent : public UActorComponent {
	struct FMulticastInlineDelegate OnEndOfMatch; // 0xb0(0x10)
	struct AKSPlayerController* OwningPlayer; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnAnnouncement; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnResultAnnouncement; // 0xd8(0x10)

	struct AKSPlayerController* GetPlayerController(); // Function Killstreak.KSHUDAnnouncementComponent.GetPlayerController
};

// Class Killstreak.KSImpactEffect
// Size: 0x2b8 (Inherited: 0x220)
struct AKSImpactEffect : public AActor {
	struct UParticleSystem* m_DefaultFX; // 0x220(0x08)
	struct FHitResult m_SurfaceHit; // 0x228(0x88)
	struct USceneComponent* m_pScene; // 0x2b0(0x08)
};

// Class Killstreak.KSIngressPoint
// Size: 0x270 (Inherited: 0x258)
struct AKSIngressPoint : public AKSMapPoint {
	struct AKSObjectiveBase* RelevantObjective; // 0x258(0x08)
	struct AActor* AssignedBot; // 0x260(0x08)
	char UnknownData_268[0x8]; // 0x268(0x08)

	void RelevantObjectiveUpdated(struct AKSObjectiveBase* Objective); // Function Killstreak.KSIngressPoint.RelevantObjectiveUpdated
	struct FVector GetTargetIngressPoint(); // Function Killstreak.KSIngressPoint.GetTargetIngressPoint
	void AssignedBotDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSIngressPoint.AssignedBotDestroyed
};

// Class Killstreak.KSInMatchStore
// Size: 0xd8 (Inherited: 0xb0)
struct UKSInMatchStore : public UActorComponent {
	struct AKSPlayerController* PlayerCon; // 0xb0(0x08)
	struct FMulticastInlineDelegate SuccessfulPurchase; // 0xb8(0x10)
	struct FMulticastInlineDelegate PurchaseError; // 0xc8(0x10)

	void ServerRequestPurchase(struct FInMatchPurchaseInfo request); // Function Killstreak.KSInMatchStore.ServerRequestPurchase
	void RequestPurchase(struct FInMatchPurchaseInfo request); // Function Killstreak.KSInMatchStore.RequestPurchase
	int32_t GetStorePages(int32_t ItemsPerPage, struct FInMatchStoreFilterInfo Filter); // Function Killstreak.KSInMatchStore.GetStorePages
	void GetStoreInventory(struct TArray<struct FInMatchStoreItem> Items, int32_t PageIndex, int32_t ItemsPerPage, struct FInMatchStoreFilterInfo Filter); // Function Killstreak.KSInMatchStore.GetStoreInventory
	void GetStockInCategory(struct FName CategoryName, struct TArray<struct TSoftObjectPtr<struct UKSItem>> OutItemStock); // Function Killstreak.KSInMatchStore.GetStockInCategory
	void ClientPurchaseSuccess(struct FInMatchPurchaseInfo Purchase); // Function Killstreak.KSInMatchStore.ClientPurchaseSuccess
	void ClientPurchaseError(enum class EInMatchStoreError ErrorId); // Function Killstreak.KSInMatchStore.ClientPurchaseError
};

// Class Killstreak.KSInspectableMusicManagerActor
// Size: 0x300 (Inherited: 0x220)
struct AKSInspectableMusicManagerActor : public AActor {
	struct UAkAudioEvent* AkEvent; // 0x220(0x08)
	struct TArray<struct FName> NamesForRtpcQueries; // 0x228(0x10)
	struct TArray<struct FName> NamesForSwitchQueries; // 0x238(0x10)
	char UnknownData_248[0xa8]; // 0x248(0xa8)
	bool bQueryResultsReady; // 0x2f0(0x01)
	char UnknownData_2F1[0x3]; // 0x2f1(0x03)
	int32_t StaleCounter; // 0x2f4(0x04)
	char UnknownData_2F8[0x8]; // 0x2f8(0x08)

	int32_t StartMusic(int32_t CallbackMask, struct FDelegate PostEventCallback, enum class EOcclusionType OcclusionType, bool bUseDistance, bool bUseDirection); // Function Killstreak.KSInspectableMusicManagerActor.StartMusic
	void HandleQueryResults(); // Function Killstreak.KSInspectableMusicManagerActor.HandleQueryResults
	void GetSwitchQueryResultValue(struct FName SwitchName, int32_t Value, bool bIsValid); // Function Killstreak.KSInspectableMusicManagerActor.GetSwitchQueryResultValue
	void GetRtpcQueryResultValue(struct FName RtpcName, float Value, bool bIsValid); // Function Killstreak.KSInspectableMusicManagerActor.GetRtpcQueryResultValue
};

// Class Killstreak.KSInteractionBlockerManager
// Size: 0xc8 (Inherited: 0xb0)
struct UKSInteractionBlockerManager : public UActorComponent {
	char UnknownData_B0[0x10]; // 0xb0(0x10)
	bool bIsInteractionBlocked; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
};

// Class Killstreak.KSLootSiteBase
// Size: 0x348 (Inherited: 0x220)
struct AKSLootSiteBase : public AActor {
	char UnknownData_220[0x10]; // 0x220(0x10)
	struct FMulticastInlineDelegate OnLootSiteSpawned; // 0x230(0x10)
	struct FMulticastInlineDelegate OnLootSiteStateChanged; // 0x240(0x10)
	enum class ELootSiteRarity RarityTag; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct FMulticastInlineDelegate OnLootSiteRarityChanged; // 0x258(0x10)
	char SiteGroupNumber; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct TMap<enum class ELootSiteRarity, struct UDataTable*> RarityLootSiteTableMap; // 0x270(0x50)
	char UnknownData_2C0[0x10]; // 0x2c0(0x10)
	struct FWeakObjectPtr<struct AKSItemDrop> SpawnedDrop; // 0x2d0(0x08)
	struct TArray<struct UObject*> ObjectsToKeepAround; // 0x2d8(0x10)
	float SpawnRate; // 0x2e8(0x04)
	float SpawnDelay; // 0x2ec(0x04)
	float RespawnDelay; // 0x2f0(0x04)
	bool bAutoRespawn; // 0x2f4(0x01)
	bool bDisableWeaponCosmeticZOffset; // 0x2f5(0x01)
	char UnknownData_2F6[0x2]; // 0x2f6(0x02)
	struct TArray<struct AKSLootSiteBase*> ChildSpawners; // 0x2f8(0x10)
	float SurfaceCheckHeight; // 0x308(0x04)
	bool bUsePrecisePlacement; // 0x30c(0x01)
	struct FLootSiteState LootSiteState; // 0x30d(0x02)
	bool CosmeticVisible; // 0x30f(0x01)
	struct FTimerHandle SpawnDelayTimer; // 0x310(0x08)
	struct FVector NavigationLocation; // 0x318(0x0c)
	char UnknownData_324[0xc]; // 0x324(0x0c)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x330(0x08)
	struct TArray<struct AActor*> ActorsSeenBy; // 0x338(0x10)

	void WeightedSiteShuffle(struct TArray<struct AKSLootSiteBase*> SiteArray); // Function Killstreak.KSLootSiteBase.WeightedSiteShuffle
	void SpawnSpecificLoot(struct FLootSiteDropInfo Loot); // Function Killstreak.KSLootSiteBase.SpawnSpecificLoot
	void SpawnSpecificItemDrop(struct UKSItem* ItemAsset); // Function Killstreak.KSLootSiteBase.SpawnSpecificItemDrop
	void SpawnItemDropInternal(); // Function Killstreak.KSLootSiteBase.SpawnItemDropInternal
	void SpawnItemDrop(bool UseDelay); // Function Killstreak.KSLootSiteBase.SpawnItemDrop
	void SpawnedDropDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSLootSiteBase.SpawnedDropDestroyed
	bool SetSiteActive(bool Active); // Function Killstreak.KSLootSiteBase.SetSiteActive
	void Reset(); // Function Killstreak.KSLootSiteBase.Reset
	void OnRep_RarityTag(); // Function Killstreak.KSLootSiteBase.OnRep_RarityTag
	void OnRep_LootSiteState(); // Function Killstreak.KSLootSiteBase.OnRep_LootSiteState
	void OnRep_CosmeticVisible(); // Function Killstreak.KSLootSiteBase.OnRep_CosmeticVisible
	void OnCosmeticVisibilityChanged(bool Visible); // Function Killstreak.KSLootSiteBase.OnCosmeticVisibilityChanged
	bool IsLooted(); // Function Killstreak.KSLootSiteBase.IsLooted
	bool IsActive(); // Function Killstreak.KSLootSiteBase.IsActive
	struct FLootSiteState GetLootSiteState(); // Function Killstreak.KSLootSiteBase.GetLootSiteState
	struct FVector FindBestDropLocation(struct AKSItemDrop* InDrop); // Function Killstreak.KSLootSiteBase.FindBestDropLocation
	struct FLootSiteDropInfo ChoostLoot(); // Function Killstreak.KSLootSiteBase.ChoostLoot
	struct FLootSiteDropInfo ChooseRandomLoot(struct TArray<struct FLootSiteDropInfo> InLoot, struct UObject* WorldContextObject); // Function Killstreak.KSLootSiteBase.ChooseRandomLoot
	struct UKSItem* ChooseItemAsset(); // Function Killstreak.KSLootSiteBase.ChooseItemAsset
};

// Class Killstreak.KSInteractableLootSite
// Size: 0x3d8 (Inherited: 0x348)
struct AKSInteractableLootSite : public AKSLootSiteBase {
	char UnknownData_348[0x8]; // 0x348(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x350(0x08)
	struct FText LootBoxName; // 0x358(0x18)
	bool bChoosesBeforeInteraction; // 0x370(0x01)
	bool bPressAndHoldPrompt; // 0x371(0x01)
	bool bLooted; // 0x372(0x01)
	char UnknownData_373[0x5]; // 0x373(0x05)
	struct FLootSiteDropInfo ChosenLoot; // 0x378(0x30)
	struct TArray<struct AKSCharacter*> Looters; // 0x3a8(0x10)
	struct TArray<struct UKSInteractionManager*> LooterManagers; // 0x3b8(0x10)
	struct TArray<struct FLootSiteDropInfo> PossibleLoot; // 0x3c8(0x10)

	void PickLoot(); // Function Killstreak.KSInteractableLootSite.PickLoot
	void OnSuccessfulInteraction(); // Function Killstreak.KSInteractableLootSite.OnSuccessfulInteraction
	void OnRep_ChosenLoot(); // Function Killstreak.KSInteractableLootSite.OnRep_ChosenLoot
	void OnRep_bLooted(); // Function Killstreak.KSInteractableLootSite.OnRep_bLooted
	float GetInteractionTime(struct AKSCharacter* InteractingChar); // Function Killstreak.KSInteractableLootSite.GetInteractionTime
	void ClientBroadcastSpawned(struct AKSPlayerController* Controller, bool Removed); // Function Killstreak.KSInteractableLootSite.ClientBroadcastSpawned
};

// Class Killstreak.KSInteractionManager
// Size: 0x168 (Inherited: 0xb0)
struct UKSInteractionManager : public UActorComponent {
	char UnknownData_B0[0x38]; // 0xb0(0x38)
	float CachedInteractionTimeStamp; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	char InteractRequestId; // 0xf0(0x01)
	char UnknownData_F1[0x7]; // 0xf1(0x07)
	struct UKSInteractionState* State; // 0xf8(0x08)
	struct UKSInteractionState* PreviousState; // 0x100(0x08)
	struct AKSCharacter* User; // 0x108(0x08)
	struct TScriptInterface<None> Interactable; // 0x110(0x10)
	struct FKSInteractableCameraTransition CameraTransition; // 0x120(0x30)
	char UnknownData_150[0x18]; // 0x150(0x18)

	void ServerTap(bool bAllowTapAsHold); // Function Killstreak.KSInteractionManager.ServerTap
	void ServerStartNew(int32_t InInteractionId, struct AActor* InInteractable, struct AKSCharacter* InUser); // Function Killstreak.KSInteractionManager.ServerStartNew
	void ServerHoldRelease(); // Function Killstreak.KSInteractionManager.ServerHoldRelease
	void ServerHold(bool bAllowHoldAsTap); // Function Killstreak.KSInteractionManager.ServerHold
	void ServerCancel(); // Function Killstreak.KSInteractionManager.ServerCancel
	void ClientInteractionStopped(int32_t InInteractionId, enum class EKSInteractionResult Result); // Function Killstreak.KSInteractionManager.ClientInteractionStopped
	void ClientInteractionStarted(int32_t InInteractionId, float Duration); // Function Killstreak.KSInteractionManager.ClientInteractionStarted
};

// Class Killstreak.KSInteractionType
// Size: 0x328 (Inherited: 0x28)
struct UKSInteractionType : public UObject {
	struct FName InteractionMode; // 0x28(0x08)
	bool bInteractionStartsCameraLockout; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FSkinnableAudioEvent CharacterStartSound; // 0x38(0x10)
	struct FSkinnableAudioEvent InteractableStartSound; // 0x48(0x10)
	struct FSkinnableAudioEvent LocalStartSound; // 0x58(0x10)
	struct TMap<enum class EKSInteractionResult, struct FSkinnableAudioEvent> CharacterEndSound; // 0x68(0x50)
	struct TMap<enum class EKSInteractionResult, struct FSkinnableAudioEvent> InteractableEndSound; // 0xb8(0x50)
	struct TMap<enum class EKSInteractionResult, struct FSkinnableAudioEvent> LocalEndSound; // 0x108(0x50)
	bool bAutomaticallyPlayAudio; // 0x158(0x01)
	bool bAttachCharacterAutoAudioToSource; // 0x159(0x01)
	bool bAttachInteractableAutoAudioToSource; // 0x15a(0x01)
	char UnknownData_15B[0x5]; // 0x15b(0x05)
	struct FKSParticleSystemAttachment CharacterStartEffect; // 0x160(0x38)
	struct FKSParticleSystemAttachment InteractableStartEffect; // 0x198(0x38)
	struct TMap<enum class EKSInteractionResult, struct FKSParticleSystemAttachment> CharacterEndEffect; // 0x1d0(0x50)
	struct TMap<enum class EKSInteractionResult, struct FKSParticleSystemAttachment> InteractableEndEffect; // 0x220(0x50)
	struct FWeakObjectPtr<struct UParticleSystemComponent> CurrentCharacterEffect; // 0x270(0x08)
	struct FWeakObjectPtr<struct UParticleSystemComponent> CurrentInteractableEffect; // 0x278(0x08)
	struct FName StartInteractionMontageRow; // 0x280(0x08)
	struct TMap<enum class EKSInteractionResult, struct FName> EndInteractionMontageSection; // 0x288(0x50)
	struct TMap<enum class EKSInteractionResult, struct FName> EndInteractionMontageRow; // 0x2d8(0x50)

	void PlayInteractionAnimation(bool bIsStart, struct AKSCharacter* Character, struct AActor* InInteractionTarget, enum class EKSInteractionResult Result, struct FVector InteractableLocation); // Function Killstreak.KSInteractionType.PlayInteractionAnimation
	struct UParticleSystemComponent* MakeInteractableEffect(bool bIsStart, struct AKSCharacter* Character, struct AActor* Interactable, enum class EKSInteractionResult Result, struct FVector InteractableLocation); // Function Killstreak.KSInteractionType.MakeInteractableEffect
	struct UParticleSystemComponent* MakeCharacterEffect(bool bIsStart, struct AKSCharacter* Character, struct AActor* Interactable, enum class EKSInteractionResult Result, struct FVector InteractableLocation); // Function Killstreak.KSInteractionType.MakeCharacterEffect
	struct FKSParticleSystemAttachment GetInteractableEffect(bool bIsStart, enum class EKSInteractionResult Result); // Function Killstreak.KSInteractionType.GetInteractableEffect
	struct FKSParticleSystemAttachment GetCharacterEffect(bool bIsStart, enum class EKSInteractionResult Result); // Function Killstreak.KSInteractionType.GetCharacterEffect
};

// Class Killstreak.KSItem_Gender
// Size: 0x170 (Inherited: 0x168)
struct UKSItem_Gender : public UKSItem {
	enum class EKSCharacterGender Gender; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)

	enum class EKSCharacterGender GetGender(); // Function Killstreak.KSItem_Gender.GetGender
};

// Class Killstreak.KSItemBundle
// Size: 0x178 (Inherited: 0x168)
struct UKSItemBundle : public UKSItem {
	struct TArray<struct TSoftObjectPtr<struct UKSItem>> BundledItems; // 0x168(0x10)

	void GetSortedBundledItems(struct TArray<struct TSoftObjectPtr<struct UKSItem>> SortedItems); // Function Killstreak.KSItemBundle.GetSortedBundledItems
};

// Class Killstreak.KSItemDataTable
// Size: 0xe8 (Inherited: 0xc8)
struct UKSItemDataTable : public UDataTable {
	struct TArray<struct FString> DirectoriesToScan; // 0xc8(0x10)
	struct TArray<struct UKSItem*> ItemClassesToFilter; // 0xd8(0x10)
};

// Class Killstreak.KSJobItem
// Size: 0x580 (Inherited: 0x168)
struct UKSJobItem : public UKSItem {
	bool IsStarterJob; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	struct TSoftObjectPtr<struct UKSSkinBundle> JobDefaultSkin; // 0x170(0x28)
	int32_t JobSkinBundleLootTableId; // 0x198(0x04)
	char UnknownData_19C[0x4]; // 0x19c(0x04)
	struct TSoftObjectPtr<struct UKSJobRole> JobRoleItem; // 0x1a0(0x28)
	struct TSoftObjectPtr<struct UKSItem> UniqueItem; // 0x1c8(0x28)
	struct TSoftObjectPtr<struct UKSItem> PrimaryWeaponOptionOne; // 0x1f0(0x28)
	bool PrimaryWeaponOptionOneIsDefault; // 0x218(0x01)
	char UnknownData_219[0x7]; // 0x219(0x07)
	struct TSoftObjectPtr<struct UKSItem> PrimaryWeaponOptionTwo; // 0x220(0x28)
	bool PrimaryWeaponOptionTwoIsDefault; // 0x248(0x01)
	char UnknownData_249[0x7]; // 0x249(0x07)
	struct TSoftObjectPtr<struct UKSItem> SecondaryWeaponOptionOne; // 0x250(0x28)
	bool SecondaryWeaponOptionOneIsDefault; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct TSoftObjectPtr<struct UKSItem> SecondaryWeaponOptionTwo; // 0x280(0x28)
	bool SecondaryWeaponOptionTwoIsDefault; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct TSoftObjectPtr<struct UKSItem> MeleeWeapon; // 0x2b0(0x28)
	struct TSoftObjectPtr<struct UKSItem> QuickMeleeWeapon; // 0x2d8(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSItem>> Passives; // 0x300(0x10)
	struct TSoftObjectPtr<struct UKSItem> GadgetOptionOne; // 0x310(0x28)
	bool GadgetOptionOneIsDefault; // 0x338(0x01)
	char UnknownData_339[0x7]; // 0x339(0x07)
	struct TSoftObjectPtr<struct UKSItem> GadgetOptionTwo; // 0x340(0x28)
	bool GadgetOptionTwoIsDefault; // 0x368(0x01)
	char UnknownData_369[0x7]; // 0x369(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionOne; // 0x370(0x28)
	bool PerkOptionOneIsDefault; // 0x398(0x01)
	char UnknownData_399[0x7]; // 0x399(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionTwo; // 0x3a0(0x28)
	bool PerkOptionTwoIsDefault; // 0x3c8(0x01)
	char UnknownData_3C9[0x7]; // 0x3c9(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionThree; // 0x3d0(0x28)
	bool PerkOptionThreeIsDefault; // 0x3f8(0x01)
	char UnknownData_3F9[0x7]; // 0x3f9(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionFour; // 0x400(0x28)
	bool PerkOptionFourIsDefault; // 0x428(0x01)
	char UnknownData_429[0x7]; // 0x429(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionFive; // 0x430(0x28)
	bool PerkOptionFiveIsDefault; // 0x458(0x01)
	char UnknownData_459[0x7]; // 0x459(0x07)
	struct TSoftObjectPtr<struct UKSItem> PerkOptionSix; // 0x460(0x28)
	bool PerkOptionSixIsDefault; // 0x488(0x01)
	char UnknownData_489[0x7]; // 0x489(0x07)
	struct TArray<struct TSoftObjectPtr<struct UKSEmote>> DefaultEmotes; // 0x490(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSQuip>> DefaultQuips; // 0x4a0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSCommunication>> DefaultCommunications; // 0x4b0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSSpray>> DefaultSprays; // 0x4c0(0x10)
	struct TArray<struct FSoftObjectPath> LobbyPropsToPreload; // 0x4d0(0x10)
	struct TSoftObjectPtr<struct UTexture2D> SmallJobIcon; // 0x4e0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> JobPortrait; // 0x508(0x28)
	struct TSoftObjectPtr<struct UTexture2D> JobDiamondPortrait; // 0x530(0x28)
	struct TSoftObjectPtr<struct UTexture2D> JobSquarePortrait; // 0x558(0x28)

	bool IsValidJobItem(struct UKSItem* KSItem); // Function Killstreak.KSJobItem.IsValidJobItem
	struct TSoftObjectPtr<struct UTexture2D> GetSoftSmallJobIcon(); // Function Killstreak.KSJobItem.GetSoftSmallJobIcon
	struct TSoftObjectPtr<struct UTexture2D> GetSoftJobSquarePortrait(); // Function Killstreak.KSJobItem.GetSoftJobSquarePortrait
	struct TSoftObjectPtr<struct UTexture2D> GetSoftJobPortrait(); // Function Killstreak.KSJobItem.GetSoftJobPortrait
	struct TSoftObjectPtr<struct UTexture2D> GetSoftJobDiamondPortrait(); // Function Killstreak.KSJobItem.GetSoftJobDiamondPortrait
	struct UTexture2D* GetSmallJobIcon(); // Function Killstreak.KSJobItem.GetSmallJobIcon
	bool GetQuickMeleeWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetQuickMeleeWeapon
	bool GetPerks(struct TArray<struct TSoftObjectPtr<struct UKSItem>> Perks); // Function Killstreak.KSJobItem.GetPerks
	bool GetMeleeWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetMeleeWeapon
	struct UKSJobRole* GetJobRole(); // Function Killstreak.KSJobItem.GetJobRole
	struct UKSActivityInstance* GetJobMasteryActivityInstance(struct UObject* WorldContextObject); // Function Killstreak.KSJobItem.GetJobMasteryActivityInstance
	bool GetFirstPassive(struct TSoftObjectPtr<struct UKSItem> Passive); // Function Killstreak.KSJobItem.GetFirstPassive
	bool GetDefaultSprays(struct TArray<struct TSoftObjectPtr<struct UKSSpray>> Sprays); // Function Killstreak.KSJobItem.GetDefaultSprays
	struct UKSSkinBundle* GetDefaultSkin(); // Function Killstreak.KSJobItem.GetDefaultSkin
	bool GetDefaultSecondaryWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetDefaultSecondaryWeapon
	bool GetDefaultRadialMenuItems(struct TArray<struct TSoftObjectPtr<struct UKSRadialMenuItem>> RadialMenuItems, enum class EMercCosmeticSlot CosmeticSlot); // Function Killstreak.KSJobItem.GetDefaultRadialMenuItems
	bool GetDefaultQuips(struct TArray<struct TSoftObjectPtr<struct UKSQuip>> quips); // Function Killstreak.KSJobItem.GetDefaultQuips
	bool GetDefaultPrimaryWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetDefaultPrimaryWeapon
	bool GetDefaultPerks(struct TArray<struct TSoftObjectPtr<struct UKSItem>> Perks); // Function Killstreak.KSJobItem.GetDefaultPerks
	bool GetDefaultGadget(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetDefaultGadget
	bool GetDefaultEmotes(struct TArray<struct TSoftObjectPtr<struct UKSEmote>> Emotes); // Function Killstreak.KSJobItem.GetDefaultEmotes
	bool GetDefaultCommunications(struct TArray<struct TSoftObjectPtr<struct UKSCommunication>> communications); // Function Killstreak.KSJobItem.GetDefaultCommunications
	bool GetAlternativeSecondaryWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetAlternativeSecondaryWeapon
	bool GetAlternativePrimaryWeapon(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetAlternativePrimaryWeapon
	bool GetAlternativeGadget(struct TSoftObjectPtr<struct UKSItem> OutItem); // Function Killstreak.KSJobItem.GetAlternativeGadget
};

// Class Killstreak.JobLoadout
// Size: 0x80 (Inherited: 0x28)
struct UJobLoadout : public UObject {
	struct UKSJobItem* JobItem; // 0x28(0x08)
	struct TMap<enum class EJobLoadoutSlot, struct UKSItem*> SlotItems; // 0x30(0x50)

	bool ValidateAttachmentForWeapon(struct UKSItem* AttachmentToCheck, struct UKSItem* Weapon); // Function Killstreak.JobLoadout.ValidateAttachmentForWeapon
	void SetToJobDefaults(struct UKSJobItem* InJobItem); // Function Killstreak.JobLoadout.SetToJobDefaults
	bool SetSlot(enum class EJobLoadoutSlot JobSlot, struct UKSItem* KSItem, bool IgnoreJobItem); // Function Killstreak.JobLoadout.SetSlot
	bool GetSlot(enum class EJobLoadoutSlot JobSlot, struct UKSItem* OutKSItem); // Function Killstreak.JobLoadout.GetSlot
	bool GetAsMap(struct TMap<enum class EJobLoadoutSlot, struct UKSItem*> OutMap); // Function Killstreak.JobLoadout.GetAsMap
	struct TArray<enum class EJobLoadoutSlot> CleanJobLoadoutItems(); // Function Killstreak.JobLoadout.CleanJobLoadoutItems
};

// Class Killstreak.KSJobSelectionComponent
// Size: 0x2b8 (Inherited: 0xb0)
struct UKSJobSelectionComponent : public UActorComponent {
	struct FJobSelectionList JobSelectionList; // 0xb0(0x120)
	struct FKSJobSelectionAllowUnownedJobs AllowUnownedJobsStruct; // 0x1d0(0x20)
	int32_t JobTableVendorId; // 0x1f0(0x04)
	char UnknownData_1F4[0x4]; // 0x1f4(0x04)
	struct UJobCollection* JobCollection; // 0x1f8(0x08)
	struct FMulticastInlineDelegate OnJobSelectionEntryAdded; // 0x200(0x10)
	struct FMulticastInlineDelegate OnJobSelectionEntryChanged; // 0x210(0x10)
	struct FMulticastInlineDelegate OnJobSelectionInitialized; // 0x220(0x10)
	struct FMulticastInlineDelegate OnAllPlayersLockedIn; // 0x230(0x10)
	char UnknownData_240[0x60]; // 0x240(0x60)
	struct AKSTeamState* CachedOwner; // 0x2a0(0x08)
	bool bSelectionEnabled; // 0x2a8(0x01)
	char UnknownData_2A9[0x3]; // 0x2a9(0x03)
	int32_t EntryCount; // 0x2ac(0x04)
	char UnknownData_2B0[0x8]; // 0x2b0(0x08)

	void OnRep_EntryCount(); // Function Killstreak.KSJobSelectionComponent.OnRep_EntryCount
	void OnRep_AllowUnownedJobs(); // Function Killstreak.KSJobSelectionComponent.OnRep_AllowUnownedJobs
	void OnPhaseChange(struct FName NewPhase); // Function Killstreak.KSJobSelectionComponent.OnPhaseChange
	void NewPlayerStarting(struct APlayerController* NewPlayer); // Function Killstreak.KSJobSelectionComponent.NewPlayerStarting
	void NewBotStarting(struct AKSAIController* NewBot); // Function Killstreak.KSJobSelectionComponent.NewBotStarting
	bool JobSelectEntryMatchesPlayerState(struct FJobSelectionEntry Entry, struct AKSPlayerState* PlayerState); // Function Killstreak.KSJobSelectionComponent.JobSelectEntryMatchesPlayerState
	bool JobSelectEntryMatchesPersistentPlayer(struct FJobSelectionEntry Entry, struct UKSPersistentPlayerData* PersistentPlayer); // Function Killstreak.KSJobSelectionComponent.JobSelectEntryMatchesPersistentPlayer
	bool IsReady(); // Function Killstreak.KSJobSelectionComponent.IsReady
	void InitializeJobSelectionList(); // Function Killstreak.KSJobSelectionComponent.InitializeJobSelectionList
	struct TArray<struct FJobSelectionEntry> GetJobSelectionEntries(); // Function Killstreak.KSJobSelectionComponent.GetJobSelectionEntries
};

// Class Killstreak.KSJobSelectionManager
// Size: 0xe8 (Inherited: 0xb0)
struct UKSJobSelectionManager : public UActorComponent {
	bool bJobManagerReady; // 0xb0(0x01)
	char UnknownData_B1[0x7]; // 0xb1(0x07)
	struct FMulticastInlineDelegate OnJobSelectionManagerReady; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnJobSelectionAcknowledge; // 0xc8(0x10)
	struct AKSPlayerController* CachedOwner; // 0xd8(0x08)
	struct UKSJobSelectionComponent* CachedSelectionComponent; // 0xe0(0x08)

	void ServerRequestSelectionState(int32_t ItemId, enum class EJobSelectionState State); // Function Killstreak.KSJobSelectionManager.ServerRequestSelectionState
	bool RequestSelectionState(int32_t ItemId, enum class EJobSelectionState State); // Function Killstreak.KSJobSelectionManager.RequestSelectionState
	void PlayerTeamSet(struct AKSPlayerState* PlayerState); // Function Killstreak.KSJobSelectionManager.PlayerTeamSet
	void PlayerStateSet(struct AKSPlayerState* PlayerState); // Function Killstreak.KSJobSelectionManager.PlayerStateSet
	void JobSelectionComponentReady(struct UKSJobSelectionComponent* InSelectionComponent); // Function Killstreak.KSJobSelectionManager.JobSelectionComponentReady
	bool IsReady(); // Function Killstreak.KSJobSelectionManager.IsReady
	struct UKSJobSelectionComponent* GetJobSelectionComponent(); // Function Killstreak.KSJobSelectionManager.GetJobSelectionComponent
	void ClientAcknowledgeStateSelection(int32_t ItemId, bool bSuccess, enum class EJobSelectionState RequestState); // Function Killstreak.KSJobSelectionManager.ClientAcknowledgeStateSelection
};

// Class Killstreak.KSJobSelectPreviewActor
// Size: 0x390 (Inherited: 0x220)
struct AKSJobSelectPreviewActor : public AInfo {
	struct FWeakObjectPtr<struct UKSPersistentPlayerData> OwningPersistantPlayerData; // 0x220(0x08)
	struct AKSLobbyCharacter* LobbyCharacterClass; // 0x228(0x08)
	struct AKSLobbyCharacter* ChildLobbyCharacter; // 0x230(0x08)
	float ModelViewerDelay; // 0x238(0x04)
	enum class EJobSelectionState JobSelectionState; // 0x23c(0x01)
	char UnknownData_23D[0x13]; // 0x23d(0x13)
	struct TArray<struct FName> SkinPreloadBundles; // 0x250(0x10)
	int32_t PositionIndex; // 0x260(0x04)
	bool bKeepActiveJobVisibleWhileLoading; // 0x264(0x01)
	char UnknownData_265[0x3]; // 0x265(0x03)
	struct USceneComponent* BaseComponent; // 0x268(0x08)
	struct FTimerHandle JobModelViewerTimer; // 0x270(0x08)
	struct UKSJobItem* ActiveJobItem; // 0x278(0x08)
	struct UKSSkinBundle* ActiveSkinBundle; // 0x280(0x08)
	struct TSoftObjectPtr<struct UKSJobItem> QueuedJob; // 0x288(0x28)
	struct TSoftObjectPtr<struct UKSSkinBundle> QueuedSkin; // 0x2b0(0x28)
	enum class EKSJobSelectPreviewLoadState CachedState; // 0x2d8(0x01)
	bool bHideChildCharacter; // 0x2d9(0x01)
	char UnknownData_2DA[0x1e]; // 0x2da(0x1e)
	struct FMulticastInlineDelegate OnJobPreviewStateChangedDel; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnPersistentPlayerDataSetDel; // 0x308(0x10)
	char UnknownData_318[0x18]; // 0x318(0x18)
	struct UKSJobItem* JobFromLoadout; // 0x330(0x08)
	struct TMap<struct UKSItem*, struct FPreviewActorPropSkinInfo> PropsAndSkins; // 0x338(0x50)
	char UnknownData_388[0x8]; // 0x388(0x08)

	void SetPersistantPlayerData(struct UKSPersistentPlayerData* PersistantPlayerData); // Function Killstreak.KSJobSelectPreviewActor.SetPersistantPlayerData
	void SetModelViewerDelay(float Timer); // Function Killstreak.KSJobSelectPreviewActor.SetModelViewerDelay
	void SetJobToQueuedId(); // Function Killstreak.KSJobSelectPreviewActor.SetJobToQueuedId
	void SetJobAndSkin(struct TSoftObjectPtr<struct UKSJobItem> InJobItem, struct TSoftObjectPtr<struct UKSSkinBundle> InSkinItem); // Function Killstreak.KSJobSelectPreviewActor.SetJobAndSkin
	void SetJob(struct TSoftObjectPtr<struct UKSJobItem> InJobItem); // Function Killstreak.KSJobSelectPreviewActor.SetJob
	void SetHoveredJob(int32_t JobId, int32_t SkinId, enum class EJobSelectionState InJobSelectionState); // Function Killstreak.KSJobSelectPreviewActor.SetHoveredJob
	void SetCharacterHidden(bool bShouldHide); // Function Killstreak.KSJobSelectPreviewActor.SetCharacterHidden
	void PreLobbyCharacterDestroy(); // Function Killstreak.KSJobSelectPreviewActor.PreLobbyCharacterDestroy
	void PostLobbyCharacterSpawned(); // Function Killstreak.KSJobSelectPreviewActor.PostLobbyCharacterSpawned
	bool IsLockedIn(); // Function Killstreak.KSJobSelectPreviewActor.IsLockedIn
	bool HasQueuedJob(); // Function Killstreak.KSJobSelectPreviewActor.HasQueuedJob
	struct UKSSkinBundle* GetSkinBundle(); // Function Killstreak.KSJobSelectPreviewActor.GetSkinBundle
	enum class EKSJobSelectPreviewLoadState GetPreviewLoadState(); // Function Killstreak.KSJobSelectPreviewActor.GetPreviewLoadState
	int32_t GetPositionIndex(); // Function Killstreak.KSJobSelectPreviewActor.GetPositionIndex
	struct AKSLobbyCharacter* GetLobbyCharacter(); // Function Killstreak.KSJobSelectPreviewActor.GetLobbyCharacter
	struct UKSJobItem* GetJobItem(); // Function Killstreak.KSJobSelectPreviewActor.GetJobItem
	bool GetCharacterShouldBeHidden(); // Function Killstreak.KSJobSelectPreviewActor.GetCharacterShouldBeHidden
	struct FText GetCharacterName(); // Function Killstreak.KSJobSelectPreviewActor.GetCharacterName
	struct FString GetCharacterFriendlySearchName(); // Function Killstreak.KSJobSelectPreviewActor.GetCharacterFriendlySearchName
	void BlueprintStateChanged(enum class EKSJobSelectPreviewLoadState PreviousState); // Function Killstreak.KSJobSelectPreviewActor.BlueprintStateChanged
};

// Class Killstreak.KSJobSelectPreviewActor_Lobby
// Size: 0x3d0 (Inherited: 0x390)
struct AKSJobSelectPreviewActor_Lobby : public AKSJobSelectPreviewActor {
	enum class ELobbyCharacterIndex CharacterIndex; // 0x390(0x01)
	bool bControlChildCharacterNameplate; // 0x391(0x01)
	char UnknownData_392[0x2]; // 0x392(0x02)
	struct FWeakObjectPtr<struct UKSPlayerInfo> WeakPlayerInfo; // 0x394(0x08)
	bool bPlayerPendingPartyAccept; // 0x39c(0x01)
	bool bPartyLeader; // 0x39d(0x01)
	char UnknownData_39E[0x32]; // 0x39e(0x32)

	bool SetPlayerInfo(struct UKSPlayerInfo* InPlayerInfo); // Function Killstreak.KSJobSelectPreviewActor_Lobby.SetPlayerInfo
	void ReturnCharacterToIdle(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.ReturnCharacterToIdle
	void OverrideActiveSkin(struct TSoftObjectPtr<struct UKSSkinBundle> InSkin); // Function Killstreak.KSJobSelectPreviewActor_Lobby.OverrideActiveSkin
	bool IsPlayerPendingPartyAccept(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.IsPlayerPendingPartyAccept
	bool IsPartyLeader(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.IsPartyLeader
	struct UKSPlayerInfo* GetPlayerInfo(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.GetPlayerInfo
	enum class ELobbyCharacterIndex GetCharacterIndex(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.GetCharacterIndex
	void ClearPlayerInfo(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.ClearPlayerInfo
	void ClearActiveSkinOverride(); // Function Killstreak.KSJobSelectPreviewActor_Lobby.ClearActiveSkinOverride
};

// Class Killstreak.KSJobSelectPrvwActor_RogueScrn
// Size: 0x3d8 (Inherited: 0x3d0)
struct AKSJobSelectPrvwActor_RogueScrn : public AKSJobSelectPreviewActor_Lobby {
	struct URogueScreenLoadoutComponent* RogueScreenLoadoutComponent; // 0x3d0(0x08)
};

// Class Killstreak.KSJsonData
// Size: 0x48 (Inherited: 0x28)
struct UKSJsonData : public UObject {
	struct TArray<int32_t> HideIfItemOwned; // 0x28(0x10)
	struct FString ShowIfPlatform; // 0x38(0x10)
};

// Class Killstreak.KSJsonDataFactory
// Size: 0x118 (Inherited: 0x48)
struct UKSJsonDataFactory : public UPUMG_JsonDataFactory {
	char UnknownData_48[0x10]; // 0x48(0x10)
	struct TMap<struct FString, struct UTexture2DDynamic*> mapFilePathToTexture; // 0x58(0x50)
	char UnknownData_A8[0x70]; // 0xa8(0x70)

	void OnInventoryItemUpdated(struct FInventoryId InventoryId); // Function Killstreak.KSJsonDataFactory.OnInventoryItemUpdated
};

// Class Killstreak.KSKillCam
// Size: 0x1d0 (Inherited: 0x28)
struct UKSKillCam : public UObject {
	struct AKSKillCamController* KillCamControllerClass; // 0x28(0x08)
	struct UWorld* KillCamWorld; // 0x30(0x08)
	struct UPackage* KillCamWorldPackage; // 0x38(0x08)
	struct AKSKillCamController* KillCamSpectatorController; // 0x40(0x08)
	struct TMap<struct UAkComponent*, float> OriginalWorldMutedAudio; // 0x48(0x50)
	char UnknownData_98[0x40]; // 0x98(0x40)
	struct FMulticastInlineDelegate OnKillCamEnabled; // 0xd8(0x10)
	char UnknownData_E8[0x18]; // 0xe8(0x18)
	struct FMulticastInlineDelegate OnKillCamViewPawn; // 0x100(0x10)
	char UnknownData_110[0x18]; // 0x110(0x18)
	struct FMulticastInlineDelegate OnKillCamViewProjectile; // 0x128(0x10)
	char UnknownData_138[0x18]; // 0x138(0x18)
	struct FMulticastInlineDelegate OnPrepareKillCamPlayback; // 0x150(0x10)
	char UnknownData_160[0x18]; // 0x160(0x18)
	struct FMulticastInlineDelegate OnFinishKillCamPlayback; // 0x178(0x10)
	char UnknownData_188[0x48]; // 0x188(0x48)

	void KillCamStop(); // Function Killstreak.KSKillCam.KillCamStop
	void DestroySpectatorController(); // Function Killstreak.KSKillCam.DestroySpectatorController
};

// Class Killstreak.KSPlayerController
// Size: 0xd08 (Inherited: 0x5a8)
struct AKSPlayerController : public APGame_PlayerController {
	char UnknownData_5A8[0x8]; // 0x5a8(0x08)
	struct FMulticastInlineDelegate OnKSPlayerStateReplicatedDel; // 0x5b0(0x10)
	char UnknownData_5C0[0x20]; // 0x5c0(0x20)
	struct TArray<struct FDeferredViewTargetChangeInfo> DeferredViewTargetChangedUpdate; // 0x5e0(0x10)
	char UnknownData_5F0[0x8]; // 0x5f0(0x08)
	struct AKSPlayerState* CurrentSpectateTarget; // 0x5f8(0x08)
	struct FWeakObjectPtr<struct AController> CurrentSpectateController; // 0x600(0x08)
	struct FWeakObjectPtr<struct AActor> CurrentSpectateViewTarget; // 0x608(0x08)
	char UnknownData_610[0x40]; // 0x610(0x40)
	struct FClientContext ClientContext; // 0x650(0x110)
	struct FClientInputTypeUse ClientInputTypeUse; // 0x760(0x08)
	bool bRecordingFrameRateInfo; // 0x768(0x01)
	char UnknownData_769[0x3]; // 0x769(0x03)
	struct FClientStatistics Render; // 0x76c(0x18)
	struct FClientStatistics Game; // 0x784(0x18)
	struct FClientStatistics GPU; // 0x79c(0x18)
	struct FClientStatistics RHIT; // 0x7b4(0x18)
	struct FClientStatistics Frame; // 0x7cc(0x18)
	float FrameRateDataSmoothingFactor; // 0x7e4(0x04)
	float FrameRateDataPushCountdown; // 0x7e8(0x04)
	struct FName DefaultCameraName; // 0x7ec(0x08)
	float LastPingCalcTime; // 0x7f4(0x04)
	char UnknownData_7F8[0x8]; // 0x7f8(0x08)
	SoftClassProperty HUDClass; // 0x800(0x28)
	struct UKSPlayerShotListener* ShotListener; // 0x828(0x08)
	struct FMulticastInlineDelegate OnHUDSetup; // 0x830(0x10)
	char UnknownData_840[0x40]; // 0x840(0x40)
	bool bCachedIsUIRelevant; // 0x880(0x01)
	bool bCachedIsOnlyASpector; // 0x881(0x01)
	char UnknownData_882[0x6]; // 0x882(0x06)
	struct FMulticastInlineDelegate OnPlayerControllerIsUIRelevantDel; // 0x888(0x10)
	char UnknownData_898[0x20]; // 0x898(0x20)
	struct FMulticastInlineDelegate OnViewedPawnChangedDel; // 0x8b8(0x10)
	char UnknownData_8C8[0x18]; // 0x8c8(0x18)
	struct FMulticastInlineDelegate OnControllerChangedDel; // 0x8e0(0x10)
	struct FMulticastInlineDelegate OnSpectateStateChanged; // 0x8f0(0x10)
	char UnknownData_900[0x8]; // 0x900(0x08)
	struct AKSCharacterBase* KSCharacter; // 0x908(0x08)
	bool IsInTouchMode; // 0x910(0x01)
	bool StartInTouchMode; // 0x911(0x01)
	char UnknownData_912[0x2]; // 0x912(0x02)
	float TouchModeAutoFireRadius; // 0x914(0x04)
	float TouchModeAutoFireTickRate; // 0x918(0x04)
	char UnknownData_91C[0xc]; // 0x91c(0x0c)
	struct URenderThreadInputHandler* RenderThreadInputHandler; // 0x928(0x08)
	char UnknownData_930[0x8]; // 0x930(0x08)
	struct FMulticastInlineDelegate OnTouchModeChanged; // 0x938(0x10)
	struct UCurveFloat* MouseLookSensitivityCurve; // 0x948(0x08)
	struct FInterpCurveFloat LookSensitivityToMaxLookSpeed; // 0x950(0x18)
	float BaseGamepadTurnRateScale; // 0x968(0x04)
	float BaseGamepadLookUpRateScale; // 0x96c(0x04)
	struct FVector2D GamepadRightStickVelocity; // 0x970(0x08)
	struct FRotator AccumulatedRotationInput; // 0x978(0x0c)
	char UnknownData_984[0x4]; // 0x984(0x04)
	struct FVector2D GamepadLook; // 0x988(0x08)
	struct UKSGamepadLookSpeedManager* GamepadLookSpeedManagerClass; // 0x990(0x08)
	struct UKSGamepadLookSpeedManager* JoyConLookSpeedManagerClass; // 0x998(0x08)
	struct UKSGamepadLookSpeedManager* GamepadLookSpeedManager; // 0x9a0(0x08)
	struct UKSGamepadLookSpeedManager* JoyConLookSpeedManager; // 0x9a8(0x08)
	float InputYawScaleADS; // 0x9b0(0x04)
	float InputPitchScaleADS; // 0x9b4(0x04)
	float InputRollScaleADS; // 0x9b8(0x04)
	struct FRotator ThisFrameKickbackRotationCache; // 0x9bc(0x0c)
	bool bKickbackEnabled; // 0x9c8(0x01)
	char UnknownData_9C9[0x7]; // 0x9c9(0x07)
	struct TArray<struct FKickbackPlayback> ActiveKickback; // 0x9d0(0x10)
	bool bKickbackRecoveryActive; // 0x9e0(0x01)
	char UnknownData_9E1[0x3]; // 0x9e1(0x03)
	float KickbackRecoveryDelayRemaining; // 0x9e4(0x04)
	float KickbackRecoveryAcceleration; // 0x9e8(0x04)
	float KickbackRecoveryTargetRate; // 0x9ec(0x04)
	float KickbackRecoveryRate; // 0x9f0(0x04)
	float MaxCumulativeKickbackVerticalAngle; // 0x9f4(0x04)
	struct FRotator KickbackRecoveryRotation; // 0x9f8(0x0c)
	struct FRotator KickbackCancelRotation; // 0xa04(0x0c)
	float KickbackCancelThreshold; // 0xa10(0x04)
	char UnknownData_A14[0x4]; // 0xa14(0x04)
	bool bAllowKickbackRecoveryCancel; // 0xa18(0x01)
	bool bUseSmartKickbackRecovery; // 0xa19(0x01)
	char UnknownData_A1A[0x2]; // 0xa1a(0x02)
	float KickbackRecoveryEndThreshold; // 0xa1c(0x04)
	float KickbackScalingFactorMouse; // 0xa20(0x04)
	char UnknownData_A24[0x4]; // 0xa24(0x04)
	struct UKSAimAssistComponent* AimAssistComponent; // 0xa28(0x08)
	struct FMulticastInlineDelegate ViewedPawnTakeDamageDel; // 0xa30(0x10)
	struct FMulticastInlineDelegate ViewedPawnTakeArmorDamageDel; // 0xa40(0x10)
	struct FMulticastInlineDelegate ViewedPawnInstigateDamageDel; // 0xa50(0x10)
	struct FMulticastInlineDelegate ViewedPawnInstigateDamageNotifyDel; // 0xa60(0x10)
	struct FMulticastInlineDelegate OwnedPawnInstigateDamageNotifyDel; // 0xa70(0x10)
	struct FMulticastInlineDelegate OwnedPawnInstigateWeaponFireNotifyDel; // 0xa80(0x10)
	struct FMulticastInlineDelegate OwnedPawnTakesDamageNotifyDel; // 0xa90(0x10)
	struct FMulticastInlineDelegate OnOwnedPawnTakeDamageFromInstigatorDel; // 0xaa0(0x10)
	char UnknownData_AB0[0x48]; // 0xab0(0x48)
	bool bFirstPawnAcknowledged; // 0xaf8(0x01)
	bool bFirstCharacterApparelFinished; // 0xaf9(0x01)
	bool bFirstCharacterWeaponsEquipped; // 0xafa(0x01)
	bool bKillcamWorldReady; // 0xafb(0x01)
	char UnknownData_AFC[0x3c]; // 0xafc(0x3c)
	float LastTimePlayedTime; // 0xb38(0x04)
	char UnknownData_B3C[0x4]; // 0xb3c(0x04)
	struct UKSPingManager* PingManager; // 0xb40(0x08)
	struct UKSRadialMenuManager* RadialMenuManager; // 0xb48(0x08)
	struct UKSJobSelectionManager* JobSelectionManager; // 0xb50(0x08)
	char UnknownData_B58[0x30]; // 0xb58(0x30)
	struct UCurveFloat* GyroTargetSpeedCurve; // 0xb88(0x08)
	struct UCurveFloat* GyroSensitivityConversionCurve; // 0xb90(0x08)
	struct UKSEquipmentManagerComponent* EquipmentManagerComponent; // 0xb98(0x08)
	struct ALevelSequenceActor* TeamCinematicSequenceActor; // 0xba0(0x08)
	bool bIsTeamLoadedInLobby; // 0xba8(0x01)
	char UnknownData_BA9[0x7]; // 0xba9(0x07)
	struct FMulticastInlineDelegate OnGameFubarDel; // 0xbb0(0x10)
	struct FMulticastInlineDelegate OnRadialMenuPressed; // 0xbc0(0x10)
	struct FMulticastInlineDelegate OnRadialMenuReleased; // 0xbd0(0x10)
	struct FMulticastInlineDelegate OnRadialMenuUsedLastSelection; // 0xbe0(0x10)
	struct FMulticastInlineDelegate OnRadialMenuForceClosed; // 0xbf0(0x10)
	bool bRadialMenuOpen; // 0xc00(0x01)
	char UnknownData_C01[0x7]; // 0xc01(0x07)
	struct FMulticastInlineDelegate OnAutoPickupChanged; // 0xc08(0x10)
	char UnknownData_C18[0x10]; // 0xc18(0x10)
	struct FMulticastInlineDelegate OnNewPollCalled; // 0xc28(0x10)
	struct FMulticastInlineDelegate OnLocalPlayerHasVoted; // 0xc38(0x10)
	struct FMulticastInlineDelegate OnPollCompleted; // 0xc48(0x10)
	struct FMulticastInlineDelegate OnVoteCountUpdated; // 0xc58(0x10)
	struct FMulticastInlineDelegate OnPollStateChanged; // 0xc68(0x10)
	bool bLeftChoiceHeldDown; // 0xc78(0x01)
	bool bRightChoiceHeldDown; // 0xc79(0x01)
	char UnknownData_C7A[0x3]; // 0xc7a(0x03)
	bool bTelemetryFeatureActive; // 0xc7d(0x01)
	char UnknownData_C7E[0x2]; // 0xc7e(0x02)
	struct FMulticastInlineDelegate OnTelemetrySettingsChanged; // 0xc80(0x10)
	char UnknownData_C90[0x64]; // 0xc90(0x64)
	bool bUseFallackTeamNum; // 0xcf4(0x01)
	char UnknownData_CF5[0x3]; // 0xcf5(0x03)
	int32_t FallbackTeamNum; // 0xcf8(0x04)
	char UnknownData_CFC[0x4]; // 0xcfc(0x04)
	struct AKSMinimapRendererBase* CachedMinimapRenderer; // 0xd00(0x08)

	void ViewedPawnTakeDamage(struct AActor* InActor, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSPlayerController.ViewedPawnTakeDamage
	void ViewedPawnTakeArmorDamage(struct AActor* InActor, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSPlayerController.ViewedPawnTakeArmorDamage
	void ViewedPawnInstigatedDamageNotify(struct AKSCharacterBase* InPawn, struct FCombatEventInfo DamageInfo); // Function Killstreak.KSPlayerController.ViewedPawnInstigatedDamageNotify
	void ViewedPawnInstigatedDamage(struct AKSCharacterBase* InPawn, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AActor* Target, struct AActor* DamageCauser); // Function Killstreak.KSPlayerController.ViewedPawnInstigatedDamage
	void TriggerInputAction(struct FName ActionName, struct FKey ActionKey, char InputEvent); // Function Killstreak.KSPlayerController.TriggerInputAction
	void ToggleTouch(); // Function Killstreak.KSPlayerController.ToggleTouch
	bool ShouldVoteBlockMenu(); // Function Killstreak.KSPlayerController.ShouldVoteBlockMenu
	bool ShouldThermalVisionSkipTeammates(); // Function Killstreak.KSPlayerController.ShouldThermalVisionSkipTeammates
	void SetYawLocked(bool bNewLocked); // Function Killstreak.KSPlayerController.SetYawLocked
	void SetVoteShouldBlockMenu(); // Function Killstreak.KSPlayerController.SetVoteShouldBlockMenu
	void SetSkipTeammatesForThermalVision(bool bShouldSkip); // Function Killstreak.KSPlayerController.SetSkipTeammatesForThermalVision
	void SetPitchLocked(bool bNewLocked); // Function Killstreak.KSPlayerController.SetPitchLocked
	void SetIsTeamLoadedInLobby(bool bIsLoaded); // Function Killstreak.KSPlayerController.SetIsTeamLoadedInLobby
	void SetGamepadTurnRateScale(float NewScale); // Function Killstreak.KSPlayerController.SetGamepadTurnRateScale
	void SetGamepadLookUpRateScale(float NewScale); // Function Killstreak.KSPlayerController.SetGamepadLookUpRateScale
	void SetForceThermalVision(bool bForceEnable, bool bIsSpectator); // Function Killstreak.KSPlayerController.SetForceThermalVision
	void SetAutoPickupEnabled(bool bEnable); // Function Killstreak.KSPlayerController.SetAutoPickupEnabled
	void ServerUpdatePing(float ExactPing); // Function Killstreak.KSPlayerController.ServerUpdatePing
	void ServerSetIsTeamLoadedInLobby(bool bIsLoaded); // Function Killstreak.KSPlayerController.ServerSetIsTeamLoadedInLobby
	void ServerSetAutoPickupPreference(bool bEnableAutoPickup); // Function Killstreak.KSPlayerController.ServerSetAutoPickupPreference
	void ServerReportQuitFromMenu(); // Function Killstreak.KSPlayerController.ServerReportQuitFromMenu
	void ServerPushInputTypeUse(struct FClientInputTypeUse PushedClientInputTypeUse); // Function Killstreak.KSPlayerController.ServerPushInputTypeUse
	void ServerPushFrameRateData(struct FClientStatistics PushedRender, struct FClientStatistics PushedGame, struct FClientStatistics PushedGPU, struct FClientStatistics PushedRHI, struct FClientStatistics PushedFrame); // Function Killstreak.KSPlayerController.ServerPushFrameRateData
	void ServerPushClientContext(struct FClientContext PushedClientContext); // Function Killstreak.KSPlayerController.ServerPushClientContext
	void ServerNotifyClientSimpleSimulation(bool UseSimple); // Function Killstreak.KSPlayerController.ServerNotifyClientSimpleSimulation
	void ServerLagCompensationVisualization(bool bEnable); // Function Killstreak.KSPlayerController.ServerLagCompensationVisualization
	void ServerChangeSpectateTarget(bool bForward); // Function Killstreak.KSPlayerController.ServerChangeSpectateTarget
	void ServerBouncePing(float Timestamp); // Function Killstreak.KSPlayerController.ServerBouncePing
	void ReportWeaponsEquipped(); // Function Killstreak.KSPlayerController.ReportWeaponsEquipped
	void ReportTimeRevealedCharacter(struct AKSCharacterBase* RevealedChar, float Duration); // Function Killstreak.KSPlayerController.ReportTimeRevealedCharacter
	void ReportSetRevealCharacter(struct AKSCharacterBase* TargetChar, bool Revealed); // Function Killstreak.KSPlayerController.ReportSetRevealCharacter
	void ReportKillcamWorldReady(); // Function Killstreak.KSPlayerController.ReportKillcamWorldReady
	void ReportApparelApplied(); // Function Killstreak.KSPlayerController.ReportApparelApplied
	void ReportAllReadyConditionsMet(); // Function Killstreak.KSPlayerController.ReportAllReadyConditionsMet
	void RadialMenuUseLastSelection(enum class EMercCosmeticSlot ButtonCosmeticSlot); // Function Killstreak.KSPlayerController.RadialMenuUseLastSelection
	void RadialMenuReleased(enum class EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold); // Function Killstreak.KSPlayerController.RadialMenuReleased
	void RadialMenuPressed(enum class EMercCosmeticSlot ButtonCosmeticSlot, bool bIsContextualPingHold); // Function Killstreak.KSPlayerController.RadialMenuPressed
	void RadialMenuForceClosed(); // Function Killstreak.KSPlayerController.RadialMenuForceClosed
	void OnSpectateViewTargetDestroyed(struct AActor* InViewTarget); // Function Killstreak.KSPlayerController.OnSpectateViewTargetDestroyed
	void OnSpectateViewedCharacterKilledTimerElapsed(struct AKSCharacterBase* KilledCharacter); // Function Killstreak.KSPlayerController.OnSpectateViewedCharacterKilledTimerElapsed
	void OnSpectateViewedCharacterKilled(struct AKSCharacterBase* KillerCharacter, struct AKSCharacterBase* KilledCharacter); // Function Killstreak.KSPlayerController.OnSpectateViewedCharacterKilled
	void OnSpectateControllerDestroyed(struct AActor* InActor); // Function Killstreak.KSPlayerController.OnSpectateControllerDestroyed
	void OnPrimaryPawnDestroyed(struct AActor* InPrimaryPawn); // Function Killstreak.KSPlayerController.OnPrimaryPawnDestroyed
	void OnKillcamWorldReady(); // Function Killstreak.KSPlayerController.OnKillcamWorldReady
	void OnCurrentSpectateTargetDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSPlayerController.OnCurrentSpectateTargetDestroyed
	void OnCharacterWeaponsEquipped(); // Function Killstreak.KSPlayerController.OnCharacterWeaponsEquipped
	void OnCharacterApparelApplied(); // Function Killstreak.KSPlayerController.OnCharacterApparelApplied
	void LocalStopAimDownSights(); // Function Killstreak.KSPlayerController.LocalStopAimDownSights
	void LocalStartAimDownSights(); // Function Killstreak.KSPlayerController.LocalStartAimDownSights
	bool IsViewWithinMinimapBounds(); // Function Killstreak.KSPlayerController.IsViewWithinMinimapBounds
	bool IsUIRelevantOrSpectator(); // Function Killstreak.KSPlayerController.IsUIRelevantOrSpectator
	bool IsUIRelevant(); // Function Killstreak.KSPlayerController.IsUIRelevant
	bool IsThermalVisionForced(); // Function Killstreak.KSPlayerController.IsThermalVisionForced
	enum class EPerceivedAlignmentType IsTeamNumFriendlyWithLocalPlayerAdvanced(struct UObject* WorldContextObject, int32_t TeamNum, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsTeamNumFriendlyWithLocalPlayerAdvanced
	enum class EPerceivedAlignmentType IsTeamNumFriendlyWithLocalPlayer(struct UObject* WorldContextObject, int32_t TeamNum); // Function Killstreak.KSPlayerController.IsTeamNumFriendlyWithLocalPlayer
	enum class EPerceivedAlignmentType IsTeamNumFriendlyWithControllerAdvanced(struct APlayerController* InPlayerController, int32_t TeamNum, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsTeamNumFriendlyWithControllerAdvanced
	enum class EPerceivedAlignmentType IsTeamNumFriendlyWithController(struct APlayerController* InPlayerController, int32_t TeamNum); // Function Killstreak.KSPlayerController.IsTeamNumFriendlyWithController
	bool IsRadialMenuOpen(); // Function Killstreak.KSPlayerController.IsRadialMenuOpen
	enum class EPerceivedAlignmentType IsPersistentPlayerFriendlyWithLocalPlayerAdvanced(struct UObject* WorldContentObject, struct UKSPersistentPlayerData* Data, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsPersistentPlayerFriendlyWithLocalPlayerAdvanced
	enum class EPerceivedAlignmentType IsPersistentPlayerFriendlyWithLocalPlayer(struct UObject* WorldContextObject, struct UKSPersistentPlayerData* Data); // Function Killstreak.KSPlayerController.IsPersistentPlayerFriendlyWithLocalPlayer
	enum class EPerceivedAlignmentType IsPersistentPlayerFriendlyWithControllerAdvanced(struct APlayerController* InPlayerController, struct UKSPersistentPlayerData* Data, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsPersistentPlayerFriendlyWithControllerAdvanced
	enum class EPerceivedAlignmentType IsPersistentPlayerFriendlyWithController(struct APlayerController* InPlayerController, struct UKSPersistentPlayerData* Data); // Function Killstreak.KSPlayerController.IsPersistentPlayerFriendlyWithController
	bool IsOnlyASpectator(struct APlayerController* PlayerController); // Function Killstreak.KSPlayerController.IsOnlyASpectator
	enum class EPerceivedAlignmentType IsObjectiveFriendlyWithLocalPlayerAdvanced(struct AKSObjectiveBase* Objective, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsObjectiveFriendlyWithLocalPlayerAdvanced
	enum class EPerceivedAlignmentType IsObjectiveFriendlyWithLocalPlayer(struct AKSObjectiveBase* Objective); // Function Killstreak.KSPlayerController.IsObjectiveFriendlyWithLocalPlayer
	enum class EPerceivedAlignmentType IsObjectiveFriendlyWithControllerAdvanced(struct APlayerController* InPlayerController, struct AKSObjectiveBase* Objective, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsObjectiveFriendlyWithControllerAdvanced
	enum class EPerceivedAlignmentType IsObjectiveFriendlyWithController(struct APlayerController* InPlayerController, struct AKSObjectiveBase* Objective); // Function Killstreak.KSPlayerController.IsObjectiveFriendlyWithController
	bool IsLocalPlayerOnlyASpectator(struct UObject* WorldContextObject); // Function Killstreak.KSPlayerController.IsLocalPlayerOnlyASpectator
	bool IsInShownWorld(); // Function Killstreak.KSPlayerController.IsInShownWorld
	enum class EPerceivedAlignmentType IsFriendlyWithTeamNumAdvanced(int32_t TeamNum, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithTeamNumAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithTeamNum(int32_t TeamNum); // Function Killstreak.KSPlayerController.IsFriendlyWithTeamNum
	enum class EPerceivedAlignmentType IsFriendlyWithPersistentPlayerAdvanced(struct UKSPersistentPlayerData* Data, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithPersistentPlayerAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithPersistentPlayer(struct UKSPersistentPlayerData* Data); // Function Killstreak.KSPlayerController.IsFriendlyWithPersistentPlayer
	enum class EPerceivedAlignmentType IsFriendlyWithObjectiveAdvanced(struct AKSObjectiveBase* Objective, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithObjectiveAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithObjective(struct AKSObjectiveBase* Objective); // Function Killstreak.KSPlayerController.IsFriendlyWithObjective
	enum class EPerceivedAlignmentType IsFriendlyWithLocalPlayerAdvanced(struct AActor* Actor, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithLocalPlayerAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithLocalPlayer(struct AActor* Actor); // Function Killstreak.KSPlayerController.IsFriendlyWithLocalPlayer
	enum class EPerceivedAlignmentType IsFriendlyWithControllerAdvanced(struct APlayerController* InPlayerController, struct AActor* Actor, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithControllerAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithController(struct APlayerController* InPlayerController, struct AActor* Actor); // Function Killstreak.KSPlayerController.IsFriendlyWithController
	enum class EPerceivedAlignmentType IsFriendlyWithComponentAdvanced(struct USceneComponent* Component, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithComponentAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWithComponent(struct USceneComponent* Component); // Function Killstreak.KSPlayerController.IsFriendlyWithComponent
	enum class EPerceivedAlignmentType IsFriendlyWithAdvanced(struct AActor* Actor, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsFriendlyWithAdvanced
	enum class EPerceivedAlignmentType IsFriendlyWith(struct AActor* Actor); // Function Killstreak.KSPlayerController.IsFriendlyWith
	enum class EPerceivedAlignmentType IsComponentFriendlyWithLocalPlayerAdvanced(struct USceneComponent* Component, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsComponentFriendlyWithLocalPlayerAdvanced
	enum class EPerceivedAlignmentType IsComponentFriendlyWithLocalPlayer(struct USceneComponent* Component); // Function Killstreak.KSPlayerController.IsComponentFriendlyWithLocalPlayer
	enum class EPerceivedAlignmentType IsComponentFriendlyWithControllerAdvanced(struct APlayerController* InPlayerController, struct USceneComponent* Component, int32_t RelativeTeam); // Function Killstreak.KSPlayerController.IsComponentFriendlyWithControllerAdvanced
	enum class EPerceivedAlignmentType IsComponentFriendlyWithController(struct APlayerController* InPlayerController, struct USceneComponent* Component); // Function Killstreak.KSPlayerController.IsComponentFriendlyWithController
	bool IsAutoPickupEnabled(); // Function Killstreak.KSPlayerController.IsAutoPickupEnabled
	bool HasUIBlockingRightStickLookInput(); // Function Killstreak.KSPlayerController.HasUIBlockingRightStickLookInput
	int32_t GetValidSpectateTargetCount(); // Function Killstreak.KSPlayerController.GetValidSpectateTargetCount
	struct APawn* GetUIPawn(); // Function Killstreak.KSPlayerController.GetUIPawn
	struct AKSCharacter* GetUIKSCharacter(); // Function Killstreak.KSPlayerController.GetUIKSCharacter
	struct FTelemetrySettings GetTelemetrySettings(); // Function Killstreak.KSPlayerController.GetTelemetrySettings
	struct UKSPlayerShotListener* GetShotListener(); // Function Killstreak.KSPlayerController.GetShotListener
	struct UKSRadialMenuManager* GetRadialMenuManager(); // Function Killstreak.KSPlayerController.GetRadialMenuManager
	struct FText GetRadialItemNameByEquipPoint(struct FGameplayTag InEquipPoint); // Function Killstreak.KSPlayerController.GetRadialItemNameByEquipPoint
	struct AKSCharacterBase* GetPrimaryPawn(); // Function Killstreak.KSPlayerController.GetPrimaryPawn
	struct UKSPingManager* GetPingManager(); // Function Killstreak.KSPlayerController.GetPingManager
	int32_t GetPing(); // Function Killstreak.KSPlayerController.GetPing
	int32_t GetPerceivedTeamNumForLocalPlayer(struct UObject* WorldContextObject); // Function Killstreak.KSPlayerController.GetPerceivedTeamNumForLocalPlayer
	int32_t GetPerceivedTeamNumForController(struct APlayerController* InPlayerController); // Function Killstreak.KSPlayerController.GetPerceivedTeamNumForController
	int32_t GetPerceivedTeamNum(); // Function Killstreak.KSPlayerController.GetPerceivedTeamNum
	struct AKSTeamState* GetPerceivedLocalTeamForLocalPlayer(struct UObject* WorldContextObject); // Function Killstreak.KSPlayerController.GetPerceivedLocalTeamForLocalPlayer
	struct AKSTeamState* GetPerceivedLocalTeamForController(struct APlayerController* InPlayerController); // Function Killstreak.KSPlayerController.GetPerceivedLocalTeamForController
	struct AKSTeamState* GetPerceivedLocalTeam(); // Function Killstreak.KSPlayerController.GetPerceivedLocalTeam
	void GetOutgoingPacketInfo(float KBPerSecond, int32_t PacketsPerSecond, float PacketLossRatio); // Function Killstreak.KSPlayerController.GetOutgoingPacketInfo
	struct UKSJobSelectionManager* GetJobSelectionManager(); // Function Killstreak.KSPlayerController.GetJobSelectionManager
	bool GetIsTeamLoadedInLobby(); // Function Killstreak.KSPlayerController.GetIsTeamLoadedInLobby
	void GetIncomingPacketInfo(float KBPerSecond, int32_t PacketsPerSecond, float PacketLossRatio); // Function Killstreak.KSPlayerController.GetIncomingPacketInfo
	struct UKSHUDAnnouncementComponent* GetHUDAnnouncmentComponent(); // Function Killstreak.KSPlayerController.GetHUDAnnouncmentComponent
	struct UKSGamepadLookSpeedManager* GetGamepadLookSpeedManager(); // Function Killstreak.KSPlayerController.GetGamepadLookSpeedManager
	float GetFPS(); // Function Killstreak.KSPlayerController.GetFPS
	struct UKSEquipmentManagerComponent* GetEquipmentManagerComponent(); // Function Killstreak.KSPlayerController.GetEquipmentManagerComponent
	struct UKSAimAssistComponent* GetAimAssistComponent(); // Function Killstreak.KSPlayerController.GetAimAssistComponent
	void FlushVoteInput(); // Function Killstreak.KSPlayerController.FlushVoteInput
	void FinalizeAutoPickupPreferenceChange(); // Function Killstreak.KSPlayerController.FinalizeAutoPickupPreferenceChange
	void FillInClientContext(); // Function Killstreak.KSPlayerController.FillInClientContext
	void EventViewedPawnTakeDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* DamageCauser, struct FVector DamageOrigin); // Function Killstreak.KSPlayerController.EventViewedPawnTakeDamage
	void EventViewedPawnTakeArmorDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* DamageCauser, struct FVector DamageOrigin); // Function Killstreak.KSPlayerController.EventViewedPawnTakeArmorDamage
	void EventViewedPawnInstigatedDamageNotify(struct FCombatEventInfo DamageInfo); // Function Killstreak.KSPlayerController.EventViewedPawnInstigatedDamageNotify
	void EventViewedPawnInstigatedDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* Target, struct AActor* DamageCauser); // Function Killstreak.KSPlayerController.EventViewedPawnInstigatedDamage
	void EnablePreventFlushPressedKeys(); // Function Killstreak.KSPlayerController.EnablePreventFlushPressedKeys
	void ControllerChangedForPickupLabeling(struct AKSPlayerController* NewController); // Function Killstreak.KSPlayerController.ControllerChangedForPickupLabeling
	void CompVis(bool bEnable); // Function Killstreak.KSPlayerController.CompVis
	void ClientViewedPawnTakeDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* DamageCauser, struct FVector DamageOrigin, bool bPrimaryPawn); // Function Killstreak.KSPlayerController.ClientViewedPawnTakeDamage
	void ClientViewedPawnTakeArmorDamage(float DamageAmount, struct UDamageType* DamageTypeClass, struct AActor* DamageCauser, struct FVector DamageOrigin, bool bPrimaryPawn); // Function Killstreak.KSPlayerController.ClientViewedPawnTakeArmorDamage
	void ClientViewedPawnInstigatedDamageNotify(struct FCombatEventInfo DamageInfo, bool bPrimaryPawn); // Function Killstreak.KSPlayerController.ClientViewedPawnInstigatedDamageNotify
	void ClientUpdateActivityProgressCount(int64_t ActivityItemId, int32_t NewProgressCount); // Function Killstreak.KSPlayerController.ClientUpdateActivityProgressCount
	void ClientSpectateTeam(); // Function Killstreak.KSPlayerController.ClientSpectateTeam
	void ClientSignalEndOfMatch(); // Function Killstreak.KSPlayerController.ClientSignalEndOfMatch
	void ClientReturnPing(float Timestamp); // Function Killstreak.KSPlayerController.ClientReturnPing
	void ClientPlayInstantReplay(float TimeToRewind, float Duration, float DilationStart, float DilationAmount); // Function Killstreak.KSPlayerController.ClientPlayInstantReplay
	void ClientOnPollStateChanged(bool bIsPaused); // Function Killstreak.KSPlayerController.ClientOnPollStateChanged
	void ClientOnPollCompleted(struct FKSPollResults PollResults); // Function Killstreak.KSPlayerController.ClientOnPollCompleted
	void ClientDrawDebugSphere(struct FVector Center, float Radius, struct FColor Color, float Duration); // Function Killstreak.KSPlayerController.ClientDrawDebugSphere
	void ClientDrawDebugLine(struct FVector start, struct FVector end, struct FColor Color, float Duration); // Function Killstreak.KSPlayerController.ClientDrawDebugLine
	void ClientDrawDebugCapsule(struct FTransform Transform, float Radius, float HalfHeight, struct FColor Color, float Duration); // Function Killstreak.KSPlayerController.ClientDrawDebugCapsule
	void ClientDrawDebugBox(struct FTransform Transform, struct FVector Extent, struct FColor Color, float Duration); // Function Killstreak.KSPlayerController.ClientDrawDebugBox
	void ClearRotationLocks(); // Function Killstreak.KSPlayerController.ClearRotationLocks
	void ClearActiveInteractableUI(); // Function Killstreak.KSPlayerController.ClearActiveInteractableUI
	void CachePostMatchScoreboard(struct FScoreboardStats ScoreboardStats); // Function Killstreak.KSPlayerController.CachePostMatchScoreboard
	void CachePostMatchInfo(struct FPlayerRewardsSummaryReplicated RewardsReplicated); // Function Killstreak.KSPlayerController.CachePostMatchInfo
	void ApplyKickback(struct FInterpCurveVector2D KickbackCurve, float InKickbackRecoveryDelay, float InKickbackRecoveryRate, float InKickbackRecoveryAccel, float InMaxCumulativeKickbackVerticalAngle, float ScalingFactor); // Function Killstreak.KSPlayerController.ApplyKickback
	void AimStateChangedForPickupLabeling(enum class EKSCharacterAimMode AimState); // Function Killstreak.KSPlayerController.AimStateChangedForPickupLabeling
	void AddTimePlayed(); // Function Killstreak.KSPlayerController.AddTimePlayed
	bool ActivateRadialItemByEquipPoint(struct FGameplayTag InEquipPoint); // Function Killstreak.KSPlayerController.ActivateRadialItemByEquipPoint
};

// Class Killstreak.KSKillCamController
// Size: 0xd78 (Inherited: 0xd08)
struct AKSKillCamController : public AKSPlayerController {
	char UnknownData_D08[0x68]; // 0xd08(0x68)
	struct AKSKillCamObjectCamera* KillCamObjectCamera; // 0xd70(0x08)
};

// Class Killstreak.KSKillCamObjectCamera
// Size: 0x238 (Inherited: 0x220)
struct AKSKillCamObjectCamera : public AActor {
	struct UKSSpringArmComponent* MainCameraBoom; // 0x220(0x08)
	struct UCameraComponent* MainCameraComponent; // 0x228(0x08)
	struct USceneComponent* EmptyComponent; // 0x230(0x08)
};

// Class Killstreak.KSKillLeaderTracker
// Size: 0xe0 (Inherited: 0x98)
struct UKSKillLeaderTracker : public UKSAccoladeTracker {
	struct FTrackedPlayers CurrentLeader; // 0x98(0x18)
	struct FTrackedPlayers TempNewLeader; // 0xb0(0x18)
	int32_t HighestKillCount; // 0xc8(0x04)
	char UnknownData_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FTrackedPlayers> TrackedPlayers; // 0xd0(0x10)

	void ProcessElimEntry(struct AKSPlayerState* InstigatorPlayerState); // Function Killstreak.KSKillLeaderTracker.ProcessElimEntry
	void HandleTrackerAccolade(struct AKSPlayerState* Player); // Function Killstreak.KSKillLeaderTracker.HandleTrackerAccolade
	bool FindPlayerEntry(struct AKSPlayerState* InstigatorPlayerState, int32_t PlayerIndex); // Function Killstreak.KSKillLeaderTracker.FindPlayerEntry
	bool CheckKillLeader(); // Function Killstreak.KSKillLeaderTracker.CheckKillLeader
};

// Class Killstreak.KSLoadoutBundle
// Size: 0x1d8 (Inherited: 0x178)
struct UKSLoadoutBundle : public UKSItemBundle {
	struct TSoftObjectPtr<struct UKSLoadoutClass> LoadoutClass; // 0x178(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAsset> Gadget; // 0x1a0(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod_Activated>> BundledAbilities; // 0x1c8(0x10)

	bool GetWeapons(struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> OutWeaponAssets); // Function Killstreak.KSLoadoutBundle.GetWeapons
	bool GetWeaponItemIds(struct TArray<int32_t> OutWeaponItemIds); // Function Killstreak.KSLoadoutBundle.GetWeaponItemIds
	bool GetPerks(struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> OutPerks); // Function Killstreak.KSLoadoutBundle.GetPerks
	bool GetPerkItemIds(struct TArray<int32_t> OutPerkItemIds); // Function Killstreak.KSLoadoutBundle.GetPerkItemIds
	bool GetBundlePerks(struct TArray<struct UKSPlayerMod*> OutPerks); // Function Killstreak.KSLoadoutBundle.GetBundlePerks
	bool GetBundleAbilities(struct TArray<struct UKSPlayerMod_Activated*> OutAbilities); // Function Killstreak.KSLoadoutBundle.GetBundleAbilities
	bool GetAttachments(struct TArray<struct TSoftObjectPtr<struct UKSWeaponAttachment>> OutWeaponAttachments); // Function Killstreak.KSLoadoutBundle.GetAttachments
	bool GetAttachmentItemIds(struct TArray<int32_t> OutAttachmentItemIds); // Function Killstreak.KSLoadoutBundle.GetAttachmentItemIds
	bool GetAbilityItemIds(struct TArray<int32_t> OutAbilityItemIds); // Function Killstreak.KSLoadoutBundle.GetAbilityItemIds
	bool GetAbilities(struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod_Activated>> OutAbilities); // Function Killstreak.KSLoadoutBundle.GetAbilities
};

// Class Killstreak.KSLoadoutClass
// Size: 0x220 (Inherited: 0x168)
struct UKSLoadoutClass : public UKSItem {
	struct TSoftObjectPtr<struct UTexture2D> DynamicPoseImage; // 0x168(0x28)
	struct FLinearColor ThemeColorLight; // 0x190(0x10)
	struct FLinearColor ThemeColorDark; // 0x1a0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UPerkCategory>> PerkCategories; // 0x1b0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> AvailablePerks; // 0x1c0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod_Activated>> AvailableAbilities; // 0x1d0(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> AvailableGadgets; // 0x1e0(0x10)
	bool CanUseGlobalGadgets; // 0x1f0(0x01)
	char UnknownData_1F1[0x7]; // 0x1f1(0x07)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> AvailablePistols; // 0x1f8(0x10)
	bool CanUseGlobalPistols; // 0x208(0x01)
	char UnknownData_209[0x7]; // 0x209(0x07)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> AutoEquippedMods; // 0x210(0x10)

	struct UTexture2D* GetDynamicPoseImage(bool bAllowSyncLoad); // Function Killstreak.KSLoadoutClass.GetDynamicPoseImage
};

// Class Killstreak.KSLobbyCharacter
// Size: 0x36a0 (Inherited: 0x33d0)
struct AKSLobbyCharacter : public AKSCharacter {
	char UnknownData_33D0[0x168]; // 0x33d0(0x168)
	struct FName ViewModelName; // 0x3538(0x08)
	struct UAnimMontage* ActiveLobbyMontage; // 0x3540(0x08)
	bool bEnableRogueSelectWeaponPose; // 0x3548(0x01)
	bool bEnableWalkinCinematicWeaponPose; // 0x3549(0x01)
	enum class ELobbyCharacterIndex CharacterIndex; // 0x354a(0x01)
	char UnknownData_354B[0x5]; // 0x354b(0x05)
	struct UKSWeaponSkeletalMeshComponent* LobbyWeapon01Component; // 0x3550(0x08)
	struct UKSWeaponSkeletalMeshComponent* LobbyWeapon02Component; // 0x3558(0x08)
	struct UKSWeaponSkeletalMeshComponent* LobbyProp01Component; // 0x3560(0x08)
	struct UKSWeaponSkeletalMeshComponent* LobbyProp02Component; // 0x3568(0x08)
	struct UKSStaticMeshComponent* LobbyPropStatic01Component; // 0x3570(0x08)
	struct UKSStaticMeshComponent* LobbyPropStatic02Component; // 0x3578(0x08)
	struct TMap<struct FName, struct FLobbySkeletalPropInfo> SkeletalPropMapping; // 0x3580(0x50)
	struct TMap<struct FName, struct FLobbyStaticPropInfo> StaticPropMapping; // 0x35d0(0x50)
	bool ShouldHideInGame; // 0x3620(0x01)
	bool bWereTexturesStreamedIn; // 0x3621(0x01)
	bool bIsSet; // 0x3622(0x01)
	bool bHideUntilTexturesStream; // 0x3623(0x01)
	bool bForceEnableClothSim; // 0x3624(0x01)
	bool bPrestreamTextures; // 0x3625(0x01)
	char UnknownData_3626[0x2]; // 0x3626(0x02)
	int32_t ForcedLodModel; // 0x3628(0x04)
	char UnknownData_362C[0x4]; // 0x362c(0x04)
	struct FString OwningPlayerName; // 0x3630(0x10)
	char UnknownData_3640[0x8]; // 0x3640(0x08)
	enum class ELobbyCharacterAnimState CurrentAnimState; // 0x3648(0x01)
	char UnknownData_3649[0x7]; // 0x3649(0x07)
	struct FMulticastInlineDelegate OnVisibilityChangedDel; // 0x3650(0x10)
	struct UKSLobbyPropManagerComponent* LobbyPropManagerComponent; // 0x3660(0x08)
	bool bIsRotatable; // 0x3668(0x01)
	char UnknownData_3669[0x3]; // 0x3669(0x03)
	struct FVector MaxAxisRotation; // 0x366c(0x0c)
	float IdleSecondsToResetRotation; // 0x3678(0x04)
	float ResetRotationSpeedRadians; // 0x367c(0x04)
	struct FVector RotationRatePerAxis; // 0x3680(0x0c)
	char UnknownData_368C[0x14]; // 0x368c(0x14)

	void VisibilityChanged(bool IsVisible); // Function Killstreak.KSLobbyCharacter.VisibilityChanged
	bool UpdateHiddenInGame(); // Function Killstreak.KSLobbyCharacter.UpdateHiddenInGame
	void UnsetCharacter(); // Function Killstreak.KSLobbyCharacter.UnsetCharacter
	void UnbindControllerFromActor(); // Function Killstreak.KSLobbyCharacter.UnbindControllerFromActor
	void StopLobbyCharacterMontage(); // Function Killstreak.KSLobbyCharacter.StopLobbyCharacterMontage
	void StopCurrentEmote(); // Function Killstreak.KSLobbyCharacter.StopCurrentEmote
	void ShowLobbyNameplate(); // Function Killstreak.KSLobbyCharacter.ShowLobbyNameplate
	void SetUpStaticLobbyProp(struct FLobbyStaticPropInfo LobbyStaticPropInfo, struct UKSStaticMeshComponent* StaticPropComponent); // Function Killstreak.KSLobbyCharacter.SetUpStaticLobbyProp
	void SetUpSkeletalLobbyProp(struct FLobbySkeletalPropInfo LobbyPropInfo, struct UKSWeaponSkeletalMeshComponent* SkeletalPropComponent); // Function Killstreak.KSLobbyCharacter.SetUpSkeletalLobbyProp
	void SetupLobbyCharacter(struct FString PlayerName, struct UKSItem* AvatarItem, bool IsLeader); // Function Killstreak.KSLobbyCharacter.SetupLobbyCharacter
	void SetShouldHideInGame(bool ShouldHide); // Function Killstreak.KSLobbyCharacter.SetShouldHideInGame
	void SetLobbyNameplate(struct FString PlayerName, struct UKSItem* AvatarItem, bool IsLeader); // Function Killstreak.KSLobbyCharacter.SetLobbyNameplate
	void SetLobbyCharacterAnimState(enum class ELobbyCharacterAnimState AnimState); // Function Killstreak.KSLobbyCharacter.SetLobbyCharacterAnimState
	void SetCharacterSkin(struct UKSItem* SkinItem); // Function Killstreak.KSLobbyCharacter.SetCharacterSkin
	void SetCharacterEmote(struct UKSItem* EmoteItem); // Function Killstreak.KSLobbyCharacter.SetCharacterEmote
	void PlayLobbyCharacterMontage(); // Function Killstreak.KSLobbyCharacter.PlayLobbyCharacterMontage
	void OnLobbyPresenceStateChange(enum class ELobbyPresenceState LobbyPresenceState); // Function Killstreak.KSLobbyCharacter.OnLobbyPresenceStateChange
	bool IsSet(); // Function Killstreak.KSLobbyCharacter.IsSet
	bool IsLobbyCharacter(); // Function Killstreak.KSLobbyCharacter.IsLobbyCharacter
	void InitializeLobbyCharacterAnimation(); // Function Killstreak.KSLobbyCharacter.InitializeLobbyCharacterAnimation
	void HideLobbyNameplate(); // Function Killstreak.KSLobbyCharacter.HideLobbyNameplate
	float GetCurrentMontagePosition(); // Function Killstreak.KSLobbyCharacter.GetCurrentMontagePosition
	enum class ELobbyCharacterAnimState GetCurrentAnimState(); // Function Killstreak.KSLobbyCharacter.GetCurrentAnimState
	enum class ELobbyCharacterIndex GetCharacterIndex(); // Function Killstreak.KSLobbyCharacter.GetCharacterIndex
	void EmoteCosmeticComponentCreated(struct AKSEquipment* Emote); // Function Killstreak.KSLobbyCharacter.EmoteCosmeticComponentCreated
	void EmoteActionStateChanged(struct UKSEquipmentCosmeticComponent* Cosmetic); // Function Killstreak.KSLobbyCharacter.EmoteActionStateChanged
	void DeattachStaticLobbyProp(struct UKSStaticMeshComponent* StaticPropComponent); // Function Killstreak.KSLobbyCharacter.DeattachStaticLobbyProp
	void DeattachSkeletalLobbyProp(struct UKSWeaponSkeletalMeshComponent* SkeletalPropComponent); // Function Killstreak.KSLobbyCharacter.DeattachSkeletalLobbyProp
	void DeattachAllLobbyProps(); // Function Killstreak.KSLobbyCharacter.DeattachAllLobbyProps
	void ClearAllLobbyPropInfo(); // Function Killstreak.KSLobbyCharacter.ClearAllLobbyPropInfo
	void BindControllerToActor(); // Function Killstreak.KSLobbyCharacter.BindControllerToActor
	void BeginRotationReset(); // Function Killstreak.KSLobbyCharacter.BeginRotationReset
	void AttachAllActiveLobbyProps(); // Function Killstreak.KSLobbyCharacter.AttachAllActiveLobbyProps
};

// Class Killstreak.KSLobbyCameraActor
// Size: 0x800 (Inherited: 0x7f0)
struct AKSLobbyCameraActor : public ACineCameraActor {
	struct FName CameraTag; // 0x7f0(0x08)
	char UnknownData_7F8[0x8]; // 0x7f8(0x08)
};

// Class Killstreak.KSLobbyLevelSequenceActor
// Size: 0x2b8 (Inherited: 0x2b0)
struct AKSLobbyLevelSequenceActor : public ALevelSequenceActor {
	struct FName SequenceTag; // 0x2b0(0x08)
};

// Class Killstreak.KSLobbyPropManagerComponent
// Size: 0x208 (Inherited: 0xb0)
struct UKSLobbyPropManagerComponent : public UActorComponent {
	char UnknownData_B0[0x50]; // 0xb0(0x50)
	struct TArray<struct FActiveWeaponProp> ActiveNamelessProps; // 0x100(0x10)
	struct TMap<struct FPropIdentifier, struct FActiveWeaponProp> ActiveProps; // 0x110(0x50)
	struct TMap<struct FPropIdentifier, struct FLegacyWeaponProp> LegacyProps; // 0x160(0x50)
	char UnknownData_1B0[0x50]; // 0x1b0(0x50)
	bool bAllowAnimNotifyStatesToCreatePropSpawners; // 0x200(0x01)
	char UnknownData_201[0x7]; // 0x201(0x07)
};

// Class Killstreak.KSLocalPlayer
// Size: 0x290 (Inherited: 0x258)
struct UKSLocalPlayer : public UPCom_LocalPlayer {
	struct FMulticastInlineDelegate OnLocalViewedPawnChangedDel; // 0x258(0x10)
	char UnknownData_268[0x18]; // 0x268(0x18)
	struct UKSKillCam* KillCam; // 0x280(0x08)
	struct AKSKillCamController* KillCamControllerClass; // 0x288(0x08)

	bool IsKillCamReplayActive(); // Function Killstreak.KSLocalPlayer.IsKillCamReplayActive
	struct UWorld* GetRealWorld(); // Function Killstreak.KSLocalPlayer.GetRealWorld
	struct UKSKillCam* GetKillCam(); // Function Killstreak.KSLocalPlayer.GetKillCam
};

// Class Killstreak.KSLongShot
// Size: 0xa0 (Inherited: 0x98)
struct UKSLongShot : public UKSAccoladeTracker {
	float DistanceRequirement; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)

	void HandleTrackerAccolade(struct AKSPlayerState* PlayerState); // Function Killstreak.KSLongShot.HandleTrackerAccolade
};

// Class Killstreak.KSLootSitePowerUp
// Size: 0x358 (Inherited: 0x348)
struct AKSLootSitePowerUp : public AKSLootSiteBase {
	struct TArray<struct FLootSiteDropInfo> PossibleLoot; // 0x348(0x10)
};

// Class Killstreak.KSMapDifficultyManager
// Size: 0x388 (Inherited: 0x220)
struct AKSMapDifficultyManager : public AActor {
	struct TArray<struct UKSBTDifficulty*> Difficulties; // 0x220(0x10)
	struct TMap<int32_t, int32_t> InitialTeamDifficulties; // 0x230(0x50)
	int32_t MinDifficultyWhenDefeated; // 0x280(0x04)
	char UnknownData_284[0x4]; // 0x284(0x04)
	struct TArray<struct AGameModeBase*> ApplicableGameModes; // 0x288(0x10)
	struct TArray<float> WinLossRatioAdjustEasier; // 0x298(0x10)
	struct TArray<float> WinLossRatioAdjustHarder; // 0x2a8(0x10)
	bool AllowAdjustmentAtStartOfRound; // 0x2b8(0x01)
	bool AllowAdjustmentForDeaths; // 0x2b9(0x01)
	char UnknownData_2BA[0x2]; // 0x2ba(0x02)
	int32_t DeathsPerAdjustmentCalculation; // 0x2bc(0x04)
	bool AllowAdjustmentForTeamDeaths; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	int32_t TeamDeathsPerAdjustmentCalculation; // 0x2c4(0x04)
	bool AllowAdjustmentForObjectivesClaimed; // 0x2c8(0x01)
	char UnknownData_2C9[0x3]; // 0x2c9(0x03)
	int32_t ObjectivesPerAdjustmentCalculation; // 0x2cc(0x04)
	bool AllowAdjustmentForTimeElapsed; // 0x2d0(0x01)
	char UnknownData_2D1[0x3]; // 0x2d1(0x03)
	int32_t SecondsPerAdjustmentCalculation; // 0x2d4(0x04)
	struct TArray<float> KillDeathRatioAdjustEasier; // 0x2d8(0x10)
	struct TArray<float> KillDeathRatioAdjustHarder; // 0x2e8(0x10)
	struct TArray<float> RoundWinPercentAdjustEasier; // 0x2f8(0x10)
	struct TArray<float> RoundWinPercentAdjustHarder; // 0x308(0x10)
	char UnknownData_318[0x70]; // 0x318(0x70)

	void HandleTeamCreated(struct AKSTeamState* TeamState); // Function Killstreak.KSMapDifficultyManager.HandleTeamCreated
	void HandleRoundStart(struct FRoundInitState RoundState); // Function Killstreak.KSMapDifficultyManager.HandleRoundStart
	void HandleRoundSetup(struct FRoundInitState RoundState); // Function Killstreak.KSMapDifficultyManager.HandleRoundSetup
	void HandlePhaseChange(struct FName PreviousPhaseName, struct FName NewPhaseName); // Function Killstreak.KSMapDifficultyManager.HandlePhaseChange
	void HandleObjectiveClaimed(); // Function Killstreak.KSMapDifficultyManager.HandleObjectiveClaimed
	void HandleCharacterOnTeamKilled(struct AKSTeamState* TeamState); // Function Killstreak.KSMapDifficultyManager.HandleCharacterOnTeamKilled
};

// Class Killstreak.KSMapLabel
// Size: 0x128 (Inherited: 0x68)
struct UKSMapLabel : public UKSPrimaryAssetLabel {
	struct TSoftObjectPtr<struct UWorld> Map; // 0x68(0x28)
	struct TSoftObjectPtr<struct UTexture2D> MiniMapTexture; // 0x90(0x28)
	struct TSoftObjectPtr<struct UTexture2D> LoadingScreenImage; // 0xb8(0x28)
	struct FText MapDisplayName; // 0xe0(0x18)
	struct FText MapRegion; // 0xf8(0x18)
	struct FText MapDescription; // 0x110(0x18)
};

// Class Killstreak.KSMatchDataRecorder
// Size: 0x320 (Inherited: 0x28)
struct UKSMatchDataRecorder : public UObject {
	struct FMatchRecord MatchRecord; // 0x28(0x150)
	char UnknownData_178[0xa0]; // 0x178(0xa0)
	struct TMap<uint64_t, struct FWeaponUseSummaryRecord> InProgressWeaponSummaries; // 0x218(0x50)
	char UnknownData_268[0xb8]; // 0x268(0xb8)

	void OnPlayerLogout(struct AGameModeBase* GameMode, struct AController* Player); // Function Killstreak.KSMatchDataRecorder.OnPlayerLogout
	void OnPlayerLogin(struct AGameModeBase* GameMode, struct APlayerController* NewPlayer); // Function Killstreak.KSMatchDataRecorder.OnPlayerLogin
};

// Class Killstreak.KSMedPack
// Size: 0x6f0 (Inherited: 0x6e8)
struct AKSMedPack : public AKSWeapon {
	bool bUseWhileMovingOverride; // 0x6e8(0x01)
	bool bCanStopFire; // 0x6e9(0x01)
	char UnknownData_6EA[0x6]; // 0x6ea(0x06)

	float GetBuildupTime(); // Function Killstreak.KSMedPack.GetBuildupTime
};

// Class Killstreak.KSMeleeTargetingModule
// Size: 0x288 (Inherited: 0x278)
struct UKSMeleeTargetingModule : public UKSProjectileTargetingModule {
	bool bHasLungeTarget; // 0x278(0x01)
	bool bHasThrowTarget; // 0x279(0x01)
	bool bAimedAtFriendly; // 0x27a(0x01)
	char UnknownData_27B[0x5]; // 0x27b(0x05)
	struct UKSWeaponAsset_Melee* MeleeAsset; // 0x280(0x08)
};

// Class Killstreak.KSMercMasteryActivity
// Size: 0x2e0 (Inherited: 0x2d8)
struct UKSMercMasteryActivity : public UKSJobActivity {
	enum class EKSMercMasteryActivityType ReferenceType; // 0x2d8(0x01)
	bool bKeepAfterJobChange; // 0x2d9(0x01)
	char UnknownData_2DA[0x6]; // 0x2da(0x06)
};

// Class Killstreak.KSPlayerModInstance
// Size: 0x188 (Inherited: 0xb0)
struct UKSPlayerModInstance : public UActorComponent {
	struct FMulticastInlineDelegate OnModInstRemoved; // 0xb0(0x10)
	char UnknownData_C0[0x18]; // 0xc0(0x18)
	struct FMulticastInlineDelegate OnModTriggered; // 0xd8(0x10)
	bool bPreventModInitialization; // 0xe8(0x01)
	bool bInitialized; // 0xe9(0x01)
	char UnknownData_EA[0x6]; // 0xea(0x06)
	struct AKSPlayerState* ModOwner; // 0xf0(0x08)
	struct AKSCharacter* OwnerCharacter; // 0xf8(0x08)
	char UnknownData_100[0x8]; // 0x100(0x08)
	struct UKSPlayerMod* ModAsset; // 0x108(0x08)
	struct AKSPlayerState* ModInstigator; // 0x110(0x08)
	struct FWeakObjectPtr<struct AKSWeapon> WeaponInstigator; // 0x118(0x08)
	int32_t InstanceCount; // 0x120(0x04)
	int32_t LocalInstanceCount; // 0x124(0x04)
	bool bUsesDuration; // 0x128(0x01)
	bool bDisplaysDuration; // 0x129(0x01)
	char UnknownData_12A[0x16]; // 0x12a(0x16)
	bool bUseAssetDataTableManager; // 0x140(0x01)
	char UnknownData_141[0x7]; // 0x141(0x07)
	struct UDynamicSkinTable* AssetDataTableManager; // 0x148(0x08)
	struct TArray<struct FDataTableInfo> PersistentSkinDataTables; // 0x150(0x10)
	struct TArray<struct FDataTableInfo> UISkinDataTables; // 0x160(0x10)
	char UnknownData_170[0x18]; // 0x170(0x18)

	bool StopAnimationFromEvent(struct FName AnimEventName, struct UKSCharacterAnimInst* CharAnimInstance); // Function Killstreak.KSPlayerModInstance.StopAnimationFromEvent
	bool ReactsToAnimationEvent(struct FName AnimEventName, int32_t Priority); // Function Killstreak.KSPlayerModInstance.ReactsToAnimationEvent
	void PlayAnimationFromEvent(struct FName AnimEventName, struct UKSCharacterAnimInst* CharAnimInstance); // Function Killstreak.KSPlayerModInstance.PlayAnimationFromEvent
	bool OwnerIsLocal(); // Function Killstreak.KSPlayerModInstance.OwnerIsLocal
	bool OwnerHasAuthority(); // Function Killstreak.KSPlayerModInstance.OwnerHasAuthority
	bool OverrideInteraction(struct TScriptInterface<None> Interactable, float Duration, struct UKSInteractionType* Type); // Function Killstreak.KSPlayerModInstance.OverrideInteraction
	void OnRep_OwnerCharacter(); // Function Killstreak.KSPlayerModInstance.OnRep_OwnerCharacter
	void OnRep_ModAsset(); // Function Killstreak.KSPlayerModInstance.OnRep_ModAsset
	void OnRep_InstanceCount(); // Function Killstreak.KSPlayerModInstance.OnRep_InstanceCount
	void OnOwnerDied(struct AKSCharacterBase* KillerCharacter, struct AKSCharacterBase* KilledCharacter); // Function Killstreak.KSPlayerModInstance.OnOwnerDied
	void OnNewCharacter(); // Function Killstreak.KSPlayerModInstance.OnNewCharacter
	void OnModInitialized(); // Function Killstreak.KSPlayerModInstance.OnModInitialized
	void OnInstanceCountChanged(int32_t DeltaInstances); // Function Killstreak.KSPlayerModInstance.OnInstanceCountChanged
	void OnCharacterOwnerDeath(struct AKSCharacterBase* Killer, struct AKSCharacterBase* Killed); // Function Killstreak.KSPlayerModInstance.OnCharacterOwnerDeath
	float ModifyDamageDealt(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser, struct AActor* DamagedActor); // Function Killstreak.KSPlayerModInstance.ModifyDamageDealt
	void ModEventReceived(struct FName ModEvent); // Function Killstreak.KSPlayerModInstance.ModEventReceived
	void InitializeMod(); // Function Killstreak.KSPlayerModInstance.InitializeMod
	struct AKSPlayerState* GetPlayerStateOwner(); // Function Killstreak.KSPlayerModInstance.GetPlayerStateOwner
	enum class EPlayerModType GetModType(); // Function Killstreak.KSPlayerModInstance.GetModType
	struct AKSPlayerState* GetModInstigator(); // Function Killstreak.KSPlayerModInstance.GetModInstigator
	struct UKSPlayerMod* GetModAsset(); // Function Killstreak.KSPlayerModInstance.GetModAsset
	int32_t GetInstanceCount(); // Function Killstreak.KSPlayerModInstance.GetInstanceCount
	void GetDuration(float Duration, float RemainingTime, bool UsesDuration); // Function Killstreak.KSPlayerModInstance.GetDuration
	struct AKSCharacter* GetCharacterOwner(); // Function Killstreak.KSPlayerModInstance.GetCharacterOwner
	void FinishAssetPreload(); // Function Killstreak.KSPlayerModInstance.FinishAssetPreload
	void BroadcastModTriggeredInternal(); // Function Killstreak.KSPlayerModInstance.BroadcastModTriggeredInternal
	void BroadcastModTriggered(); // Function Killstreak.KSPlayerModInstance.BroadcastModTriggered
};

// Class Killstreak.KSModInst_Activated
// Size: 0x3f0 (Inherited: 0x188)
struct UKSModInst_Activated : public UKSPlayerModInstance {
	bool bCanBecomeFullyChargedOnEndActivation; // 0x188(0x01)
	bool bUsesAbilityMovement; // 0x189(0x01)
	char MovementMode; // 0x18a(0x01)
	char CustomMovementMode; // 0x18b(0x01)
	char UnknownData_18C[0x4]; // 0x18c(0x04)
	struct UKSTimerComponent* LockoutTimer; // 0x190(0x08)
	bool bIsLocked; // 0x198(0x01)
	char UnknownData_199[0x7]; // 0x199(0x07)
	struct FMulticastInlineDelegate OnModLocked; // 0x1a0(0x10)
	struct FMulticastInlineDelegate OnModLockoutTick; // 0x1b0(0x10)
	char UnknownData_1C0[0x10]; // 0x1c0(0x10)
	struct UKSTimerComponent* SetupTimer; // 0x1d0(0x08)
	struct FKSActionRestrictor SetupActionRestrictor; // 0x1d8(0x0c)
	int32_t CurrentSetupRestrictor; // 0x1e4(0x04)
	struct FKSActionRestrictor RecoveryActionRestrictor; // 0x1e8(0x0c)
	char UnknownData_1F4[0x1c]; // 0x1f4(0x1c)
	struct FMulticastInlineDelegate OnModActivated; // 0x210(0x10)
	struct UKSPlayerMod_Activated* ActivateMod; // 0x220(0x08)
	struct FMulticastInlineDelegate OnChargeChanged; // 0x228(0x10)
	bool bEndActivationOnNullCharacter; // 0x238(0x01)
	bool bDelayChargeConsumption; // 0x239(0x01)
	bool bConsumeChargeOnEndActivation; // 0x23a(0x01)
	char UnknownData_23B[0x5]; // 0x23b(0x05)
	struct FMulticastInlineDelegate OnModSetup; // 0x240(0x10)
	struct UAkAudioEvent* ActivationSoundEvent; // 0x250(0x08)
	struct UAkAudioEvent* SpacialActivationSoundEvent; // 0x258(0x08)
	struct UAkAudioEvent* SetupSoundEvent; // 0x260(0x08)
	struct UAkAudioEvent* SpacialSetupSoundEvent; // 0x268(0x08)
	struct UAkAudioEvent* DeactivationSoundEvent; // 0x270(0x08)
	bool bUnCrouchOnActivation; // 0x278(0x01)
	bool bCanActivateOnZipLine; // 0x279(0x01)
	char UnknownData_27A[0x6]; // 0x27a(0x06)
	struct FMulticastInlineDelegate OnModFailedToActivate; // 0x280(0x10)
	char UnknownData_290[0x20]; // 0x290(0x20)
	float CurrentCharge; // 0x2b0(0x04)
	char UnknownData_2B4[0xfc]; // 0x2b4(0xfc)
	bool bDeactivateWhenWeaponFired; // 0x3b0(0x01)
	bool bDeactivateWhenMacGuffinFired; // 0x3b1(0x01)
	char UnknownData_3B2[0x6]; // 0x3b2(0x06)
	struct TArray<struct UDamageType*> DamageTypesThatCancel; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnModHoldChanged; // 0x3c8(0x10)
	int32_t CurrentlyHeldId; // 0x3d8(0x04)
	int32_t LocalHeldId; // 0x3dc(0x04)
	bool bCurrentlyHeld; // 0x3e0(0x01)
	char UnknownData_3E1[0x7]; // 0x3e1(0x07)
	struct UKSModInst_ActivatedStateMachine* ActivatedStateMachine; // 0x3e8(0x08)

	void UpdateChargeDirect(float DeltaCharge); // Function Killstreak.KSModInst_Activated.UpdateChargeDirect
	void UpdateCharge(int32_t Delta); // Function Killstreak.KSModInst_Activated.UpdateCharge
	bool TryToCancel(); // Function Killstreak.KSModInst_Activated.TryToCancel
	bool TryToActivate(); // Function Killstreak.KSModInst_Activated.TryToActivate
	void SetAbilityMovementMode(char InMovementMode, char InCustomMovementMode); // Function Killstreak.KSModInst_Activated.SetAbilityMovementMode
	void SetAbilityMovementDisabled(bool bDisable); // Function Killstreak.KSModInst_Activated.SetAbilityMovementDisabled
	void RefundCharge(); // Function Killstreak.KSModInst_Activated.RefundCharge
	void Recharge(); // Function Killstreak.KSModInst_Activated.Recharge
	void OnSetupComplete(); // Function Killstreak.KSModInst_Activated.OnSetupComplete
	void OnSetupActive(bool bIsTimerActive); // Function Killstreak.KSModInst_Activated.OnSetupActive
	void OnSetup(); // Function Killstreak.KSModInst_Activated.OnSetup
	void OnRep_SetupTimer(); // Function Killstreak.KSModInst_Activated.OnRep_SetupTimer
	void OnRep_LockoutTimer(); // Function Killstreak.KSModInst_Activated.OnRep_LockoutTimer
	void OnRep_Locked(); // Function Killstreak.KSModInst_Activated.OnRep_Locked
	void OnRep_CurrentlyHeldId(); // Function Killstreak.KSModInst_Activated.OnRep_CurrentlyHeldId
	void OnRep_CurrentCharge(); // Function Killstreak.KSModInst_Activated.OnRep_CurrentCharge
	void OnOwnerDownStateChanged(struct AKSPlayerState* DownedPlayer); // Function Killstreak.KSModInst_Activated.OnOwnerDownStateChanged
	void OnLockoutTimerTick(float Seconds); // Function Killstreak.KSModInst_Activated.OnLockoutTimerTick
	void OnLockoutTimerActive(bool bIsTimerActive); // Function Killstreak.KSModInst_Activated.OnLockoutTimerActive
	void OnFullyCharged(); // Function Killstreak.KSModInst_Activated.OnFullyCharged
	void OnEndRecovery(); // Function Killstreak.KSModInst_Activated.OnEndRecovery
	void OnEndActivationWarning(); // Function Killstreak.KSModInst_Activated.OnEndActivationWarning
	void OnEndActivation(); // Function Killstreak.KSModInst_Activated.OnEndActivation
	void OnActivation(); // Function Killstreak.KSModInst_Activated.OnActivation
	void OnAbilityReleased(); // Function Killstreak.KSModInst_Activated.OnAbilityReleased
	bool IsUIActivateableNow(enum class EKSAbilityUsageFailureType OutAbilityFailureType); // Function Killstreak.KSModInst_Activated.IsUIActivateableNow
	bool IsLocked(); // Function Killstreak.KSModInst_Activated.IsLocked
	bool IsInSetup(); // Function Killstreak.KSModInst_Activated.IsInSetup
	bool IsActivated(); // Function Killstreak.KSModInst_Activated.IsActivated
	bool IsAbilityMovementDisabled(); // Function Killstreak.KSModInst_Activated.IsAbilityMovementDisabled
	void HandleSetupTimerComplete(); // Function Killstreak.KSModInst_Activated.HandleSetupTimerComplete
	void HandleSetupTimerActive(bool bIsTimerActive); // Function Killstreak.KSModInst_Activated.HandleSetupTimerActive
	void HandleCharacterOwnerTakeDamage(struct AActor* InActor, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSModInst_Activated.HandleCharacterOwnerTakeDamage
	struct UKSModInst_ActivatedStateMachine* GetStateMachine(); // Function Killstreak.KSModInst_Activated.GetStateMachine
	struct FKSActionRestrictor GetSetupActionRestrictor(); // Function Killstreak.KSModInst_Activated.GetSetupActionRestrictor
	int32_t GetRequiredCharge(); // Function Killstreak.KSModInst_Activated.GetRequiredCharge
	struct FKSActionRestrictor GetRecoveryActionRestrictor(); // Function Killstreak.KSModInst_Activated.GetRecoveryActionRestrictor
	int32_t GetMaximumCharge(); // Function Killstreak.KSModInst_Activated.GetMaximumCharge
	float GetLockoutTimeRemaining(); // Function Killstreak.KSModInst_Activated.GetLockoutTimeRemaining
	int32_t GetDefaultCharge(); // Function Killstreak.KSModInst_Activated.GetDefaultCharge
	int32_t GetCurrentCharge(); // Function Killstreak.KSModInst_Activated.GetCurrentCharge
	struct UKSPlayerMod_Activated* GetActivatedModAsset(); // Function Killstreak.KSModInst_Activated.GetActivatedModAsset
	float GetAbilitySetupDuration(); // Function Killstreak.KSModInst_Activated.GetAbilitySetupDuration
	float GetAbilityRecoveryDuration(); // Function Killstreak.KSModInst_Activated.GetAbilityRecoveryDuration
	float GetAbilityDuration(); // Function Killstreak.KSModInst_Activated.GetAbilityDuration
	void EndActivation(); // Function Killstreak.KSModInst_Activated.EndActivation
	void ConsumeChargeAmount(float Amount); // Function Killstreak.KSModInst_Activated.ConsumeChargeAmount
	void ConsumeCharge(); // Function Killstreak.KSModInst_Activated.ConsumeCharge
	void ClientModFailedToActivate(enum class EKSAbilityUsageFailureType AbilityFailureType); // Function Killstreak.KSModInst_Activated.ClientModFailedToActivate
	bool CanActivateWhileDowned(); // Function Killstreak.KSModInst_Activated.CanActivateWhileDowned
	bool CanActivateNow(enum class EKSAbilityUsageFailureType OutAbilityFailureType); // Function Killstreak.KSModInst_Activated.CanActivateNow
	void BroadcastModActivated(bool bActive); // Function Killstreak.KSModInst_Activated.BroadcastModActivated
	void BroadcastEndRecovery(); // Function Killstreak.KSModInst_Activated.BroadcastEndRecovery
	void BroadcastEndActivationWarning(); // Function Killstreak.KSModInst_Activated.BroadcastEndActivationWarning
	void BeginActivation(); // Function Killstreak.KSModInst_Activated.BeginActivation
	void AbilitySetupRequestTimeout(); // Function Killstreak.KSModInst_Activated.AbilitySetupRequestTimeout
	void AbilityActivationRequestTimeout(); // Function Killstreak.KSModInst_Activated.AbilityActivationRequestTimeout
};

// Class Killstreak.KSModInst_ActivatedStateMachine
// Size: 0x4a0 (Inherited: 0x3f0)
struct UKSModInst_ActivatedStateMachine : public UKSModInst_Activated {
	struct TMap<struct FName, struct UKSPlayerMod_Activated*> ManagedModAssets; // 0x3f0(0x50)
	struct TArray<struct FStateMachineModEntry> ManagedMods; // 0x440(0x10)
	struct UKSModInst_Activated* CurrentActiveMod; // 0x450(0x08)
	struct UKSModInst_Activated* LocalActiveMod; // 0x458(0x08)
	bool bChargeAll; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct TArray<struct FStateMachineObjectEntry> StateStorage; // 0x468(0x10)
	struct FMulticastInlineDelegate OnStateStorageChangedDel; // 0x478(0x10)
	char UnknownData_488[0x18]; // 0x488(0x18)

	bool TryToSetAsActiveMod(struct FName Key); // Function Killstreak.KSModInst_ActivatedStateMachine.TryToSetAsActiveMod
	void RemoveFromStateStorage(struct FStateMachineObjectEntry Entry); // Function Killstreak.KSModInst_ActivatedStateMachine.RemoveFromStateStorage
	void OnRep_StateStorage(); // Function Killstreak.KSModInst_ActivatedStateMachine.OnRep_StateStorage
	void OnRep_CurrentActiveMod(); // Function Killstreak.KSModInst_ActivatedStateMachine.OnRep_CurrentActiveMod
	void OnActiveModFailedToActivate(struct UKSModInst_Activated* AttemptedMod, enum class EKSAbilityUsageFailureType AbilityFailureType); // Function Killstreak.KSModInst_ActivatedStateMachine.OnActiveModFailedToActivate
	void OnActiveModChargeChanged(struct UKSModInst_Activated* ChargingModInstance); // Function Killstreak.KSModInst_ActivatedStateMachine.OnActiveModChargeChanged
	bool GetStoredPlayerStates(struct FName Key, struct TArray<struct AKSPlayerState*> OutReferences); // Function Killstreak.KSModInst_ActivatedStateMachine.GetStoredPlayerStates
	bool GetStateStorage(struct FName Key, struct TArray<struct FStateMachineObjectEntry> OutReferences); // Function Killstreak.KSModInst_ActivatedStateMachine.GetStateStorage
	void ClearStateStorage(struct FName Key); // Function Killstreak.KSModInst_ActivatedStateMachine.ClearStateStorage
	void AddToStateStorage(struct FStateMachineObjectEntry Entry); // Function Killstreak.KSModInst_ActivatedStateMachine.AddToStateStorage
	void AddPlayerStateToStateStorage(struct FName Key, struct AKSPlayerState* PlayerState); // Function Killstreak.KSModInst_ActivatedStateMachine.AddPlayerStateToStateStorage
};

// Class Killstreak.KSModInst_ActivatedTarget
// Size: 0x500 (Inherited: 0x3f0)
struct UKSModInst_ActivatedTarget : public UKSModInst_Activated {
	struct UKSPlayerMod_ActivatedTarget* ActivateTargetMod; // 0x3f0(0x08)
	struct AKSCharacter* Target; // 0x3f8(0x08)
	char UnknownData_400[0x8]; // 0x400(0x08)
	struct UDynamicSkinTable* TargetAssetDataTableManager; // 0x408(0x08)
	char UnknownData_410[0xf0]; // 0x410(0xf0)

	struct AKSCharacter* GetCachedTarget(); // Function Killstreak.KSModInst_ActivatedTarget.GetCachedTarget
	void BroadcastTarget(struct AKSCharacter* InTarget); // Function Killstreak.KSModInst_ActivatedTarget.BroadcastTarget
	void AssignTarget(struct AKSCharacter* OutTarget); // Function Killstreak.KSModInst_ActivatedTarget.AssignTarget
};

// Class Killstreak.KSModInst_ActivatedViewMode
// Size: 0x410 (Inherited: 0x3f0)
struct UKSModInst_ActivatedViewMode : public UKSModInst_Activated {
	struct FMulticastInlineDelegate OnViewStateChange; // 0x3f0(0x10)
	enum class EModViewModeState CurrentState; // 0x400(0x01)
	char UnknownData_401[0xf]; // 0x401(0x0f)
};

// Class Killstreak.KSModInst_OnDamageOther
// Size: 0x1a0 (Inherited: 0x188)
struct UKSModInst_OnDamageOther : public UKSPlayerModInstance {
	float MinimumDamage; // 0x188(0x04)
	bool bUseActualDamageDone; // 0x18c(0x01)
	char UnknownData_18D[0x3]; // 0x18d(0x03)
	struct TArray<enum class EDamageCategory> ValidDamageCategories; // 0x190(0x10)

	void OnMatchingDamageDealt(struct AActor* DamagedActor, float Damage, struct AActor* DamageCauser); // Function Killstreak.KSModInst_OnDamageOther.OnMatchingDamageDealt
	void OnInstigatedDamageNotify(struct AKSCharacterBase* Damager, struct FCombatEventInfo CombatEvent); // Function Killstreak.KSModInst_OnDamageOther.OnInstigatedDamageNotify
	void OnInstigatedDamage(struct AKSCharacterBase* Damager, float Damage, struct UDamageType* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // Function Killstreak.KSModInst_OnDamageOther.OnInstigatedDamage
	bool DoesDamageMatch(struct AKSCharacterBase* Damager, float Damage, struct UKSDamageTypeBase* DamageType, struct AActor* DamagedActor, struct AActor* DamageCauser); // Function Killstreak.KSModInst_OnDamageOther.DoesDamageMatch
};

// Class Killstreak.KSModInst_ApplyDebuffOnDamage
// Size: 0x208 (Inherited: 0x1a0)
struct UKSModInst_ApplyDebuffOnDamage : public UKSModInst_OnDamageOther {
	struct TArray<struct UKSPlayerMod*> DebuffsToApply; // 0x1a0(0x10)
	bool bGiveDebuffsUniquely; // 0x1b0(0x01)
	char UnknownData_1B1[0x3]; // 0x1b1(0x03)
	float DebuffDuration; // 0x1b4(0x04)
	char UnknownData_1B8[0x50]; // 0x1b8(0x50)
};

// Class Killstreak.KSModInst_GiveItemOnActivation
// Size: 0x410 (Inherited: 0x3f0)
struct UKSModInst_GiveItemOnActivation : public UKSModInst_Activated {
	bool bGiveItemOnNewCharacter; // 0x3f0(0x01)
	char UnknownData_3F1[0x3]; // 0x3f1(0x03)
	struct FDelegate AsyncItemGiveDelegate; // 0x3f4(0x10)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct UObject* GivenItem; // 0x408(0x08)

	void TryToRemoveItem(); // Function Killstreak.KSModInst_GiveItemOnActivation.TryToRemoveItem
	void TryToGiveItem(int32_t Index); // Function Killstreak.KSModInst_GiveItemOnActivation.TryToGiveItem
	void OnRep_GivenItem(); // Function Killstreak.KSModInst_GiveItemOnActivation.OnRep_GivenItem
	void OnNewGivenItem(); // Function Killstreak.KSModInst_GiveItemOnActivation.OnNewGivenItem
	void OnItemRemoved(); // Function Killstreak.KSModInst_GiveItemOnActivation.OnItemRemoved
	int32_t GetOnNewCharacterItemIndex(); // Function Killstreak.KSModInst_GiveItemOnActivation.GetOnNewCharacterItemIndex
	void AsyncItemGiveComplete(struct UKSItem* Item, struct UObject* GivenObject, struct FGiveItemParameters InGiveItemParameters, bool bSuccess); // Function Killstreak.KSModInst_GiveItemOnActivation.AsyncItemGiveComplete
};

// Class Killstreak.KSModInst_GiveWeaponOnActivation
// Size: 0x470 (Inherited: 0x410)
struct UKSModInst_GiveWeaponOnActivation : public UKSModInst_GiveItemOnActivation {
	bool bActivatesOnIdle; // 0x410(0x01)
	bool bActivatesOnFire; // 0x411(0x01)
	char UnknownData_412[0xe]; // 0x412(0x0e)
	bool bRestrictSwapping; // 0x420(0x01)
	bool bSwapToMain; // 0x421(0x01)
	bool bConsiderAsSwapToPrevious; // 0x422(0x01)
	char UnknownData_423[0x25]; // 0x423(0x25)
	bool bEndActivationOnHolster; // 0x448(0x01)
	bool bEndActivationOnEmptyClip; // 0x449(0x01)
	bool bEndActivationOnExhausted; // 0x44a(0x01)
	bool bConsumeChargeWhenItemRemoved; // 0x44b(0x01)
	bool bConsumeChargeWhenFired; // 0x44c(0x01)
	bool bConsumeChargeWhenAmmoConsumed; // 0x44d(0x01)
	bool bReplenishesAmmoOnFullyCharged; // 0x44e(0x01)
	bool bShouldBroadcastWeaponHits; // 0x44f(0x01)
	struct FTimerHandle SwapFromRetryTimer; // 0x450(0x08)
	float SwapFromRetryTime; // 0x458(0x04)
	bool bSwappingOff; // 0x45c(0x01)
	char UnknownData_45D[0x3]; // 0x45d(0x03)
	struct TArray<struct AActor*> DeployableActors; // 0x460(0x10)

	void WeaponAmmoConsumed(struct AKSWeapon* Weapon, int32_t AmmoConsumed); // Function Killstreak.KSModInst_GiveWeaponOnActivation.WeaponAmmoConsumed
	bool TryToSwapBackToWeapon(); // Function Killstreak.KSModInst_GiveWeaponOnActivation.TryToSwapBackToWeapon
	void SwapFromRetry(); // Function Killstreak.KSModInst_GiveWeaponOnActivation.SwapFromRetry
	void RegisterDeployable(struct AActor* DeployableAsActor); // Function Killstreak.KSModInst_GiveWeaponOnActivation.RegisterDeployable
	void PrepareSwapTo(struct AKSWeapon* SwapToWeapon); // Function Killstreak.KSModInst_GiveWeaponOnActivation.PrepareSwapTo
	void OnWeaponStateChanged(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState, enum class EWeaponStateNew NewState); // Function Killstreak.KSModInst_GiveWeaponOnActivation.OnWeaponStateChanged
	void OnGivenWeaponInstigatedDamage(struct AKSCharacterBase* InPawn, struct FCombatEventInfo DamageInfo); // Function Killstreak.KSModInst_GiveWeaponOnActivation.OnGivenWeaponInstigatedDamage
	void OnDeployableDestroyed(struct AActor* DestroyedDeployableActor); // Function Killstreak.KSModInst_GiveWeaponOnActivation.OnDeployableDestroyed
	void HandleWeaponExhausted(struct AKSWeapon* Weapon); // Function Killstreak.KSModInst_GiveWeaponOnActivation.HandleWeaponExhausted
	void GivenWeaponInstigatedDamage(struct AKSCharacterBase* InPawn, struct FCombatEventInfo DamageInfo); // Function Killstreak.KSModInst_GiveWeaponOnActivation.GivenWeaponInstigatedDamage
	bool EndsActivationOnHolster(); // Function Killstreak.KSModInst_GiveWeaponOnActivation.EndsActivationOnHolster
	bool EndsActivationOnExhausted(); // Function Killstreak.KSModInst_GiveWeaponOnActivation.EndsActivationOnExhausted
	bool EndsActivationOnEmptyClip(); // Function Killstreak.KSModInst_GiveWeaponOnActivation.EndsActivationOnEmptyClip
	void BroadcastGivenWeaponInstigatedDamage(struct AKSCharacterBase* InPawn, struct FCombatEventInfo DamageInfo); // Function Killstreak.KSModInst_GiveWeaponOnActivation.BroadcastGivenWeaponInstigatedDamage
};

// Class Killstreak.KSModInst_BuffWeaponOnActivation
// Size: 0x4d0 (Inherited: 0x470)
struct UKSModInst_BuffWeaponOnActivation : public UKSModInst_GiveWeaponOnActivation {
	struct TArray<struct UKSWeaponAsset*> AssetsToBuff; // 0x470(0x10)
	struct FGameplayTag EquipPointToBuff; // 0x480(0x08)
	struct FGameplayTag EquipPointOfBuff; // 0x488(0x08)
	bool bRequireBaseToActivate; // 0x490(0x01)
	bool bSyncAmmo; // 0x491(0x01)
	char UnknownData_492[0x2]; // 0x492(0x02)
	struct FWeakObjectPtr<struct AKSWeapon> BaseWeapon; // 0x494(0x08)
	struct FWeakObjectPtr<struct UKSWeaponComponent> BaseWeaponComponent; // 0x49c(0x08)
	struct FWeakObjectPtr<struct UKSWeaponComponent> BuffWeaponComponent; // 0x4a4(0x08)
	char UnknownData_4AC[0x24]; // 0x4ac(0x24)

	void OnRep_BaseWeapon(); // Function Killstreak.KSModInst_BuffWeaponOnActivation.OnRep_BaseWeapon
	void OnBaseWeaponDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSModInst_BuffWeaponOnActivation.OnBaseWeaponDestroyed
};

// Class Killstreak.KSModInst_CacheAim
// Size: 0x450 (Inherited: 0x3f0)
struct UKSModInst_CacheAim : public UKSModInst_Activated {
	struct FAimData CachedAim; // 0x3f0(0x50)
	struct UKSWeaponAsset* AimReferenceAsset; // 0x440(0x08)
	float AimRange; // 0x448(0x04)
	bool bCacheAimOnSetup; // 0x44c(0x01)
	char UnknownData_44D[0x3]; // 0x44d(0x03)

	void OnAimReferenceAssetReady(); // Function Killstreak.KSModInst_CacheAim.OnAimReferenceAssetReady
};

// Class Killstreak.KSModInst_OverTimeEffect
// Size: 0x1a0 (Inherited: 0x188)
struct UKSModInst_OverTimeEffect : public UKSPlayerModInstance {
	struct UKSTimerComponent* EffectTimer; // 0x188(0x08)
	float EffectTickPeriod; // 0x190(0x04)
	int32_t EffectTickCount; // 0x194(0x04)
	bool bShouldImmediatelyEffect; // 0x198(0x01)
	bool bResetTickCountOnStackIncrease; // 0x199(0x01)
	char UnknownData_19A[0x2]; // 0x19a(0x02)
	int32_t TickCount; // 0x19c(0x04)

	void OnRep_EffectTimer(); // Function Killstreak.KSModInst_OverTimeEffect.OnRep_EffectTimer
	float GetEffectTickPeriod(); // Function Killstreak.KSModInst_OverTimeEffect.GetEffectTickPeriod
	void EffectTick(); // Function Killstreak.KSModInst_OverTimeEffect.EffectTick
};

// Class Killstreak.KSModInst_DamageOverTime
// Size: 0x1b8 (Inherited: 0x1a0)
struct UKSModInst_DamageOverTime : public UKSModInst_OverTimeEffect {
	float DamagePerTick; // 0x1a0(0x04)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
	struct UDamageType* DamageType; // 0x1a8(0x08)
	struct UKSWeaponAsset* RadialDamageWeapon; // 0x1b0(0x08)
};

// Class Killstreak.KSModInst_DetectEnemy
// Size: 0x1c8 (Inherited: 0x188)
struct UKSModInst_DetectEnemy : public UKSPlayerModInstance {
	struct FMulticastInlineDelegate OnDetectEnemy; // 0x188(0x10)
	SoftClassProperty WidgetClass; // 0x198(0x28)
	bool bIsDetectingEnemy; // 0x1c0(0x01)
	char UnknownData_1C1[0x7]; // 0x1c1(0x07)

	void OnRep_EnemyDetected(); // Function Killstreak.KSModInst_DetectEnemy.OnRep_EnemyDetected
	bool IsDetectingEnemy(); // Function Killstreak.KSModInst_DetectEnemy.IsDetectingEnemy
	SoftClassProperty GetWidgetClass(); // Function Killstreak.KSModInst_DetectEnemy.GetWidgetClass
	void DetectEnemy(bool bDetectEnemy); // Function Killstreak.KSModInst_DetectEnemy.DetectEnemy
};

// Class Killstreak.KSModInst_FireWeaponOnActivation
// Size: 0x478 (Inherited: 0x470)
struct UKSModInst_FireWeaponOnActivation : public UKSModInst_GiveWeaponOnActivation {
	char UnknownData_470[0x8]; // 0x470(0x08)

	void HandleIdle(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState); // Function Killstreak.KSModInst_FireWeaponOnActivation.HandleIdle
	void HandleCooldown(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState); // Function Killstreak.KSModInst_FireWeaponOnActivation.HandleCooldown
	void HandleBuildup(struct AKSWeapon* Weapon, enum class EWeaponStateNew OldState); // Function Killstreak.KSModInst_FireWeaponOnActivation.HandleBuildup
};

// Class Killstreak.KSModInst_DirectTargetWeapon
// Size: 0x498 (Inherited: 0x478)
struct UKSModInst_DirectTargetWeapon : public UKSModInst_FireWeaponOnActivation {
	char UnknownData_478[0x8]; // 0x478(0x08)
	struct FWeakObjectPtr<struct AKSWeapon_DirectTarget> TargetedWeapon; // 0x480(0x08)
	struct FMulticastInlineDelegate OnTargetAcquired; // 0x488(0x10)
};

// Class Killstreak.KSModInst_GiveBuildOnActivation
// Size: 0x4c8 (Inherited: 0x470)
struct UKSModInst_GiveBuildOnActivation : public UKSModInst_GiveWeaponOnActivation {
	char UnknownData_470[0x18]; // 0x470(0x18)
	struct FMulticastInlineDelegate OnBuildSucceededDel; // 0x488(0x10)
	char UnknownData_498[0x18]; // 0x498(0x18)
	struct FMulticastInlineDelegate OnBuildFailedDel; // 0x4b0(0x10)
	bool bStartFireOnActivation; // 0x4c0(0x01)
	char UnknownData_4C1[0x1]; // 0x4c1(0x01)
	bool bRefundOnReclaim; // 0x4c2(0x01)
	char UnknownData_4C3[0x5]; // 0x4c3(0x05)

	void BuildSucceeded(); // Function Killstreak.KSModInst_GiveBuildOnActivation.BuildSucceeded
	void BuildSpawned(struct AKSBuild* SpawnedBuild); // Function Killstreak.KSModInst_GiveBuildOnActivation.BuildSpawned
	void BuildReclaimed(struct AKSBuild* Reclaimed); // Function Killstreak.KSModInst_GiveBuildOnActivation.BuildReclaimed
	void BuildFailed(); // Function Killstreak.KSModInst_GiveBuildOnActivation.BuildFailed
};

// Class Killstreak.KSModInst_HoldToTarget
// Size: 0x420 (Inherited: 0x3f0)
struct UKSModInst_HoldToTarget : public UKSModInst_Activated {
	char UnknownData_3F0[0x8]; // 0x3f0(0x08)
	struct FKSTargeterConfig TargeterConfig; // 0x3f8(0x0c)
	char UnknownData_404[0x4]; // 0x404(0x04)
	struct FMulticastInlineDelegate OnTargetAcquired; // 0x408(0x10)
	struct AActor* CurrentTarget; // 0x418(0x08)

	void OnRep_CurrentTarget(); // Function Killstreak.KSModInst_HoldToTarget.OnRep_CurrentTarget
};

// Class Killstreak.KSModInst_MartialArtist
// Size: 0x528 (Inherited: 0x500)
struct UKSModInst_MartialArtist : public UKSModInst_ActivatedTarget {
	enum class EThrowDirection TargetThrowDirection; // 0x500(0x01)
	char UnknownData_501[0x3]; // 0x501(0x03)
	float ChargeTime; // 0x504(0x04)
	char UnknownData_508[0x20]; // 0x508(0x20)

	float GetThrowDistance(); // Function Killstreak.KSModInst_MartialArtist.GetThrowDistance
	struct FVector GetThrowDirection(struct FVector ToDirection, enum class EThrowDirection ThrowDirection); // Function Killstreak.KSModInst_MartialArtist.GetThrowDirection
	void GetCardinalThrowDirection(enum class EThrowDirection OutThrowDirection); // Function Killstreak.KSModInst_MartialArtist.GetCardinalThrowDirection
	void BroadcastTargetInfo(enum class EThrowDirection Direction, struct TArray<struct FVector> Path, float PathDistance); // Function Killstreak.KSModInst_MartialArtist.BroadcastTargetInfo
};

// Class Killstreak.KSModInst_MovementAbility
// Size: 0x3f8 (Inherited: 0x3f0)
struct UKSModInst_MovementAbility : public UKSModInst_Activated {
	float Distance; // 0x3f0(0x04)
	char UnknownData_3F4[0x4]; // 0x3f4(0x04)

	float GetDistance(); // Function Killstreak.KSModInst_MovementAbility.GetDistance
};

// Class Killstreak.KSModInst_OnDodgeRoll
// Size: 0x190 (Inherited: 0x188)
struct UKSModInst_OnDodgeRoll : public UKSPlayerModInstance {
	char UnknownData_188[0x8]; // 0x188(0x08)

	void Triggered(float RollDuration); // Function Killstreak.KSModInst_OnDodgeRoll.Triggered
	void OnDodgeRoll(float RollDuration); // Function Killstreak.KSModInst_OnDodgeRoll.OnDodgeRoll
};

// Class Killstreak.KSModInst_OnDownOther
// Size: 0x190 (Inherited: 0x188)
struct UKSModInst_OnDownOther : public UKSPlayerModInstance {
	bool bListenToDowns; // 0x188(0x01)
	bool bListenToEliminations; // 0x189(0x01)
	char UnknownData_18A[0x6]; // 0x18a(0x06)

	void OnEliminateOther(struct AKSCharacter* Other); // Function Killstreak.KSModInst_OnDownOther.OnEliminateOther
	void OnDownOther(struct AKSCharacter* Other); // Function Killstreak.KSModInst_OnDownOther.OnDownOther
	void EliminationTriggered(struct AKSCharacter* Other); // Function Killstreak.KSModInst_OnDownOther.EliminationTriggered
	void DownTriggered(struct AKSCharacter* Other); // Function Killstreak.KSModInst_OnDownOther.DownTriggered
};

// Class Killstreak.KSModInst_OnProjectileBounce
// Size: 0x190 (Inherited: 0x188)
struct UKSModInst_OnProjectileBounce : public UKSPlayerModInstance {
	bool bTrackEnemyProjectile; // 0x188(0x01)
	bool bTrackFriendlyProjectile; // 0x189(0x01)
	bool bTrackSelfProjectile; // 0x18a(0x01)
	bool bListenToBounce; // 0x18b(0x01)
	bool bListenToStop; // 0x18c(0x01)
	char UnknownData_18D[0x3]; // 0x18d(0x03)

	void OnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSModInst_OnProjectileBounce.OnProjectileStopped
	void OnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSModInst_OnProjectileBounce.OnProjectileBounced
	void NativeOnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSModInst_OnProjectileBounce.NativeOnProjectileStopped
	void NativeOnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSModInst_OnProjectileBounce.NativeOnProjectileBounced
};

// Class Killstreak.KSModInst_OnTakeDamage
// Size: 0x1a8 (Inherited: 0x188)
struct UKSModInst_OnTakeDamage : public UKSPlayerModInstance {
	struct UKSTimerComponent* TakeDamageTimer; // 0x188(0x08)
	float MinimumDamage; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)
	struct TArray<enum class EDamageCategory> ValidDamageCategories; // 0x198(0x10)

	void TakeDamageTimerComplete(); // Function Killstreak.KSModInst_OnTakeDamage.TakeDamageTimerComplete
	void StopTakeDamageTimer(); // Function Killstreak.KSModInst_OnTakeDamage.StopTakeDamageTimer
	void StartTakeDamageTimer(float Duration); // Function Killstreak.KSModInst_OnTakeDamage.StartTakeDamageTimer
	void ReviveCompleted(struct AKSCharacter* Reviver, struct AKSCharacter* Revivee); // Function Killstreak.KSModInst_OnTakeDamage.ReviveCompleted
	void OnTakeDamage(struct AActor* InActor, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSModInst_OnTakeDamage.OnTakeDamage
	void OnReviveCompleted(struct AKSCharacter* Reviver, struct AKSCharacter* Revivee); // Function Killstreak.KSModInst_OnTakeDamage.OnReviveCompleted
	void OnRep_TakeDamageTimer(); // Function Killstreak.KSModInst_OnTakeDamage.OnRep_TakeDamageTimer
	void MatchingDamageTaken(struct AActor* InActor, float DamageAmount, struct UDamageType* DamageTypeCDO, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Killstreak.KSModInst_OnTakeDamage.MatchingDamageTaken
};

// Class Killstreak.KSModInst_PingOnOtherDowned
// Size: 0x1a8 (Inherited: 0x188)
struct UKSModInst_PingOnOtherDowned : public UKSPlayerModInstance {
	struct TArray<struct FDownedEnemyPingHandle> PingHandles; // 0x188(0x10)
	struct FWeakObjectPtr<struct UKSPlayerMod_PingOnOtherDowned> CastOwningMod; // 0x198(0x08)
	struct FWeakObjectPtr<struct AKSPlayerController> OwningController; // 0x1a0(0x08)

	void PingFromDownedEnemy(struct AKSPlayerState* DownedEnemy); // Function Killstreak.KSModInst_PingOnOtherDowned.PingFromDownedEnemy
	void OnPlayerDowned(struct FCombatEventInfo EventInfo, int32_t XpBonus); // Function Killstreak.KSModInst_PingOnOtherDowned.OnPlayerDowned
	void OnCharacterPinged(struct AKSCharacter* PingedCharacter); // Function Killstreak.KSModInst_PingOnOtherDowned.OnCharacterPinged
	void BroadcastSpawnPingEmitter(struct UParticleSystem* EmitterTemplate, struct FVector Location); // Function Killstreak.KSModInst_PingOnOtherDowned.BroadcastSpawnPingEmitter
	void BroadcastPingedCharacter(struct AKSCharacter* PingedCharacter); // Function Killstreak.KSModInst_PingOnOtherDowned.BroadcastPingedCharacter
};

// Class Killstreak.KSModInst_RevealAreaToTeam
// Size: 0x480 (Inherited: 0x478)
struct UKSModInst_RevealAreaToTeam : public UKSModInst_FireWeaponOnActivation {
	bool bAppliesScrambleEffectToEnemies; // 0x478(0x01)
	char UnknownData_479[0x7]; // 0x479(0x07)
};

// Class Killstreak.KSModInst_RevealOnMinimap
// Size: 0x1b8 (Inherited: 0x188)
struct UKSModInst_RevealOnMinimap : public UKSPlayerModInstance {
	SoftClassProperty MinimapDisplayWidget; // 0x188(0x28)
	char UnknownData_1B0[0x8]; // 0x1b0(0x08)

	bool IsValidReveal(struct AKSPlayerController* LocalPlayer); // Function Killstreak.KSModInst_RevealOnMinimap.IsValidReveal
};

// Class Killstreak.KSModInst_ReviveDrone
// Size: 0x4e0 (Inherited: 0x498)
struct UKSModInst_ReviveDrone : public UKSModInst_DirectTargetWeapon {
	struct FMulticastInlineDelegate OnReviveDroneAbilityStateChanged; // 0x498(0x10)
	enum class EKSReviveDroneAbilityState KSReviveDroneAbilityState; // 0x4a8(0x01)
	char UnknownData_4A9[0x7]; // 0x4a9(0x07)
	struct FTimerHandle ResetToAvailabilityTimerHandle; // 0x4b0(0x08)
	float TimeToResetAvailability; // 0x4b8(0x04)
	struct FWeakObjectPtr<struct AKSAgent_RevivalDrone> CurrentDrone; // 0x4bc(0x08)
	char UnknownData_4C4[0x4]; // 0x4c4(0x04)
	struct FMulticastInlineDelegate OnReviveDroneSetTarget; // 0x4c8(0x10)
	struct FWeakObjectPtr<struct AKSCharacter> DroneTargetCharacter; // 0x4d8(0x08)

	void SetDroneTarget(struct AKSCharacter* TargetCharacter); // Function Killstreak.KSModInst_ReviveDrone.SetDroneTarget
	void ResetToAvailability(); // Function Killstreak.KSModInst_ReviveDrone.ResetToAvailability
	void ResetTargetCharacter(); // Function Killstreak.KSModInst_ReviveDrone.ResetTargetCharacter
	void OnReviveDroneEvent(enum class EKSReviveDroneEvent KSReviveDroneEvent); // Function Killstreak.KSModInst_ReviveDrone.OnReviveDroneEvent
	void OnRep_ReviveDroneAbilityState(); // Function Killstreak.KSModInst_ReviveDrone.OnRep_ReviveDroneAbilityState
	void OnDroneTargetRevive(); // Function Killstreak.KSModInst_ReviveDrone.OnDroneTargetRevive
	void OnDroneSpawned(struct AKSAgent_RevivalDrone* KSAgentRevivalDrone); // Function Killstreak.KSModInst_ReviveDrone.OnDroneSpawned
	void OnDroneReviveComplete(); // Function Killstreak.KSModInst_ReviveDrone.OnDroneReviveComplete
	void OnDroneReviveBegin(); // Function Killstreak.KSModInst_ReviveDrone.OnDroneReviveBegin
	void OnDroneHealthUpdate(float Health, float MaxHealth); // Function Killstreak.KSModInst_ReviveDrone.OnDroneHealthUpdate
	void OnDroneDestroyed(); // Function Killstreak.KSModInst_ReviveDrone.OnDroneDestroyed
	void OnDroneAbort(); // Function Killstreak.KSModInst_ReviveDrone.OnDroneAbort
	float GetReviveProgress(); // Function Killstreak.KSModInst_ReviveDrone.GetReviveProgress
	enum class EKSReviveDroneAbilityState GetReviveDroneAbilityState(); // Function Killstreak.KSModInst_ReviveDrone.GetReviveDroneAbilityState
	struct AKSCharacter* GetDroneTarget(); // Function Killstreak.KSModInst_ReviveDrone.GetDroneTarget
	void BroadcastReviveDroneEvent(enum class EKSReviveDroneEvent KSReviveDroneEvent); // Function Killstreak.KSModInst_ReviveDrone.BroadcastReviveDroneEvent
};

// Class Killstreak.KSModInst_ReviveSelfOnActivation
// Size: 0x430 (Inherited: 0x3f0)
struct UKSModInst_ReviveSelfOnActivation : public UKSModInst_Activated {
	bool bUsesCustomDuration; // 0x3f0(0x01)
	char UnknownData_3F1[0x3]; // 0x3f1(0x03)
	float CustomReviveTime; // 0x3f4(0x04)
	bool bCanUseWhileUp; // 0x3f8(0x01)
	bool bReviveDuringSetup; // 0x3f9(0x01)
	char UnknownData_3FA[0x2]; // 0x3fa(0x02)
	float UpAbilitySetupDuration; // 0x3fc(0x04)
	float UpAbilityDuration; // 0x400(0x04)
	float UpAbilityRecoveryDuration; // 0x404(0x04)
	struct FKSActionRestrictor UpAbilityRecoveryActionRestrictor; // 0x408(0x0c)
	char UnknownData_414[0x4]; // 0x414(0x04)
	struct TArray<struct UKSPlayerMod*> UpBuffsGivenOnActivation; // 0x418(0x10)
	char UnknownData_428[0x8]; // 0x428(0x08)
};

// Class Killstreak.KSModInst_ReviveTarget
// Size: 0x408 (Inherited: 0x3f0)
struct UKSModInst_ReviveTarget : public UKSModInst_Activated {
	float MaxDistance; // 0x3f0(0x04)
	struct FName OverrideReviveeMontageRowName; // 0x3f4(0x08)
	char UnknownData_3FC[0xc]; // 0x3fc(0x0c)

	void TargetKilled(); // Function Killstreak.KSModInst_ReviveTarget.TargetKilled
	void ReviveEnd(struct AKSCharacter* Target, bool bSuccess); // Function Killstreak.KSModInst_ReviveTarget.ReviveEnd
	struct AKSCharacter* GetTargetCharacter(); // Function Killstreak.KSModInst_ReviveTarget.GetTargetCharacter
};

// Class Killstreak.KSModInst_WeaponSkinOverride
// Size: 0x2b0 (Inherited: 0x188)
struct UKSModInst_WeaponSkinOverride : public UKSPlayerModInstance {
	struct TMap<struct FGameplayTag, struct FDataTableInfo> WeaponTypeSkinTables; // 0x188(0x50)
	struct FDataTableInfo DefaultWeaponSkinTable; // 0x1d8(0x58)
	struct TArray<struct UDynamicSkinTable*> WeaponTypeTableManagers; // 0x230(0x10)
	struct UDynamicSkinTable* DefaultWeaponTableManager; // 0x240(0x08)
	struct TMap<struct FGameplayTag, struct UMultiSkinObject*> WeaponTypeSkinObjects; // 0x248(0x50)
	struct UMultiSkinObject* DefaultWeaponSkinObject; // 0x298(0x08)
	struct TArray<struct FWeakObjectPtr<struct UKSWeaponComponent>> AppliedWeaponComponents; // 0x2a0(0x10)

	void OnActiveWeaponChanged(struct AKSCharacter* Character); // Function Killstreak.KSModInst_WeaponSkinOverride.OnActiveWeaponChanged
};

// Class Killstreak.KSModZone
// Size: 0x260 (Inherited: 0x220)
struct AKSModZone : public AActor {
	char UnknownData_220[0x20]; // 0x220(0x20)
	struct TArray<struct FKSModZoneModInfo> EnterModZoneInfos; // 0x240(0x10)
	struct TArray<struct FKSModZoneModInfo> ExitModZoneInfos; // 0x250(0x10)

	void OnCharacterPossessedOutsideZone(struct AController* Controller); // Function Killstreak.KSModZone.OnCharacterPossessedOutsideZone
	void OnCharacterPossessedInsideZone(struct AController* Controller); // Function Killstreak.KSModZone.OnCharacterPossessedInsideZone
};

// Class Killstreak.KSMultiDownsTracker
// Size: 0xc8 (Inherited: 0x98)
struct UKSMultiDownsTracker : public UKSAccoladeTracker {
	char UnknownData_98[0x8]; // 0x98(0x08)
	struct TArray<struct FAccoladeMultiDownTracker> MultiDownAccolades; // 0xa0(0x10)
	struct TArray<struct FAccoladePlayerTrackers> TrackPlayers; // 0xb0(0x10)
	float MaxTrackerTimer; // 0xc0(0x04)
	char UnknownData_C4[0x4]; // 0xc4(0x04)

	void RemoveTrackerByPlayerState(struct AKSPlayerState* CurrentPlayerState); // Function Killstreak.KSMultiDownsTracker.RemoveTrackerByPlayerState
	void RemoveTracker(struct FAccoladePlayerTrackers CurrentTrackPlayer); // Function Killstreak.KSMultiDownsTracker.RemoveTracker
	void HandleTrackerAccolade(struct FAccoladePlayerTrackers CurrentTrackPlayer); // Function Killstreak.KSMultiDownsTracker.HandleTrackerAccolade
	bool GetTrackPlayer(int32_t PlayerId, struct FAccoladePlayerTrackers OutTracker, int32_t TrackerIndex); // Function Killstreak.KSMultiDownsTracker.GetTrackPlayer
};

// Class Killstreak.KSMultiElimTracker
// Size: 0xb8 (Inherited: 0x98)
struct UKSMultiElimTracker : public UKSAccoladeTracker {
	struct TArray<struct FAccoladeMultiElimTracker> MultiElimAccolades; // 0x98(0x10)
	struct TArray<struct FAccoladePlayerTrackers> TrackPlayers; // 0xa8(0x10)

	void RemoveTrackerByPlayerState(struct AKSPlayerState* CurrentPlayerState); // Function Killstreak.KSMultiElimTracker.RemoveTrackerByPlayerState
	void HandleTrackerAccolade(struct FAccoladePlayerTrackers CurrentTrackPlayer); // Function Killstreak.KSMultiElimTracker.HandleTrackerAccolade
	bool GetTrackPlayer(int32_t PlayerId, struct FAccoladePlayerTrackers OutTracker, int32_t TrackerIndex); // Function Killstreak.KSMultiElimTracker.GetTrackPlayer
};

// Class Killstreak.KSNavArea
// Size: 0x50 (Inherited: 0x48)
struct UKSNavArea : public UNavArea {
	enum class EKSNavAreaType NavAreaType; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class Killstreak.KSNavigationQueryFilter
// Size: 0x70 (Inherited: 0x48)
struct UKSNavigationQueryFilter : public UNavigationQueryFilter {
	struct UNavigationQueryFilter* DefaultFilter; // 0x48(0x08)
	struct UNavigationQueryFilter* NoJumpFilter; // 0x50(0x08)
	struct UNavigationQueryFilter* NoZiplineFilter; // 0x58(0x08)
	struct UNavigationQueryFilter* NoJumpNoZiplineFilter; // 0x60(0x08)
	uint32_t MaxSearchNodes; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
};

// Class Killstreak.KSNavModifierComponent
// Size: 0x150 (Inherited: 0x140)
struct UKSNavModifierComponent : public UNavModifierComponent {
	struct FVector ComponentBoundsOffset; // 0x140(0x0c)
	char UnknownData_14C[0x4]; // 0x14c(0x04)

	void UpdateNavigationMesh(); // Function Killstreak.KSNavModifierComponent.UpdateNavigationMesh
	void UpdateCachedBounds(); // Function Killstreak.KSNavModifierComponent.UpdateCachedBounds
	void SetAreaClassAndCacheBounds(struct UNavArea* NewAreaClass); // Function Killstreak.KSNavModifierComponent.SetAreaClassAndCacheBounds
};

// Class Killstreak.KSNeutralBombSpawner
// Size: 0x380 (Inherited: 0x348)
struct AKSNeutralBombSpawner : public AKSLootSiteBase {
	struct FLootSiteDropInfo BombInfo; // 0x348(0x30)
	bool bInitialSpawn; // 0x378(0x01)
	bool bRespawn; // 0x379(0x01)
	char UnknownData_37A[0x6]; // 0x37a(0x06)
};

// Class Killstreak.KSNeutralBombZone
// Size: 0x468 (Inherited: 0x420)
struct AKSNeutralBombZone : public AKSDropOffZone {
	int32_t BombZoneGroup; // 0x420(0x04)
	char UnknownData_424[0x4]; // 0x424(0x04)
	struct FMulticastInlineDelegate OnBombZoneActive; // 0x428(0x10)
	struct UStaticMeshComponent* BombZone; // 0x438(0x08)
	struct FName CameraName; // 0x440(0x08)
	float CameraTransitionInTime; // 0x448(0x04)
	float CameraTransitionOutTime; // 0x44c(0x04)
	bool bForceCameraShoulder; // 0x450(0x01)
	enum class ECameraShoulder CameraShoulder; // 0x451(0x01)
	char UnknownData_452[0x2]; // 0x452(0x02)
	float CameraMaxRotation; // 0x454(0x04)
	bool CameraRotationLockout; // 0x458(0x01)
	bool bLockPitch; // 0x459(0x01)
	bool bLockYaw; // 0x45a(0x01)
	bool bCameraShake; // 0x45b(0x01)
	char UnknownData_45C[0x4]; // 0x45c(0x04)
	struct UCameraShake* CameraShake; // 0x460(0x08)
};

// Class Killstreak.KSStaticMeshComponent
// Size: 0x4f0 (Inherited: 0x4d0)
struct UKSStaticMeshComponent : public UStaticMeshComponent {
	char UnknownData_4D0[0x20]; // 0x4d0(0x20)
};

// Class Killstreak.KSNoFlyZoneTracker
// Size: 0xf0 (Inherited: 0x98)
struct UKSNoFlyZoneTracker : public UKSAccoladeTracker {
	int32_t QuantityDowns; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct TMap<struct AKSPlayerState*, int32_t> PlayerDowns; // 0xa0(0x50)

	void UpdatePlayerTrackers(struct AKSPlayerState* InstigatorPlayerState); // Function Killstreak.KSNoFlyZoneTracker.UpdatePlayerTrackers
	void HandleTrackerAccolade(struct AKSPlayerState* Player); // Function Killstreak.KSNoFlyZoneTracker.HandleTrackerAccolade
};

// Class Killstreak.KSNPEActivity
// Size: 0x2b8 (Inherited: 0x2b0)
struct UKSNPEActivity : public UKSActivity {
	enum class EKSNPEActivityType ReferenceType; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
};

// Class Killstreak.KSOutOfBoundsManager
// Size: 0x130 (Inherited: 0xb0)
struct UKSOutOfBoundsManager : public UActorComponent {
	char UnknownData_B0[0x14]; // 0xb0(0x14)
	float OutOfBoundsWarningTime; // 0xc4(0x04)
	float OutOfBoundsTickDamageTime; // 0xc8(0x04)
	float OutOfBoundsTickDamage; // 0xcc(0x04)
	float TimeSpentGroundedAllowedBeforeSave; // 0xd0(0x04)
	char UnknownData_D4[0x4]; // 0xd4(0x04)
	struct UDamageType* OutOfBoundsDamageType; // 0xd8(0x08)
	bool bAllowSaving; // 0xe0(0x01)
	char UnknownData_E1[0x7]; // 0xe1(0x07)
	struct UAkAudioEvent* AnnouncerLineOnSaved; // 0xe8(0x08)
	struct UAkAudioEvent* AnnouncerLineOnEntered; // 0xf0(0x08)
	int32_t CharacterOverlaps; // 0xf8(0x04)
	char UnknownData_FC[0x4]; // 0xfc(0x04)
	struct FTimerHandle CharacterWarningTimer; // 0x100(0x08)
	struct FTimerHandle CharacterDamageTickTimer; // 0x108(0x08)
	struct FTimerHandle TimeSpentGroundedTimerHandle; // 0x110(0x08)
	struct TArray<struct AKSOutOfBoundsRecoveryPoint*> OutOfBoundsRecoveryPoints; // 0x118(0x10)
	float DefaultRecoveryUseTime; // 0x128(0x04)
	char UnknownData_12C[0x4]; // 0x12c(0x04)

	void TickDamage(); // Function Killstreak.KSOutOfBoundsManager.TickDamage
	void OnOutOfBoundsWarningExpired(); // Function Killstreak.KSOutOfBoundsManager.OnOutOfBoundsWarningExpired
	void OnCharacterOutOfWorld(struct AKSCharacter* Character); // Function Killstreak.KSOutOfBoundsManager.OnCharacterOutOfWorld
	void OnActorOverlapZoneEnd(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Killstreak.KSOutOfBoundsManager.OnActorOverlapZoneEnd
	void OnActorOverlapZoneBegin(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function Killstreak.KSOutOfBoundsManager.OnActorOverlapZoneBegin
	void OnActorOverlapVolumeEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSOutOfBoundsManager.OnActorOverlapVolumeEnd
	void OnActorOverlapVolumeBegin(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSOutOfBoundsManager.OnActorOverlapVolumeBegin
	void ExpireTimeSpentGroundedTimer(); // Function Killstreak.KSOutOfBoundsManager.ExpireTimeSpentGroundedTimer
};

// Class Killstreak.KSOutOfBoundsManager_RoundGame
// Size: 0x150 (Inherited: 0x130)
struct UKSOutOfBoundsManager_RoundGame : public UKSOutOfBoundsManager {
	float SecondsIntoRoundToFreeze; // 0x130(0x04)
	char UnknownData_134[0x14]; // 0x134(0x14)
	struct UKSPlayerMod* FrozenCharacterModAsset; // 0x148(0x08)

	void OnRoundStarted(struct FRoundInitState RoundState); // Function Killstreak.KSOutOfBoundsManager_RoundGame.OnRoundStarted
	void OnFreezeEnd(); // Function Killstreak.KSOutOfBoundsManager_RoundGame.OnFreezeEnd
};

// Class Killstreak.KSOutOfBoundsRecoveryPoint
// Size: 0x258 (Inherited: 0x248)
struct AKSOutOfBoundsRecoveryPoint : public ANavigationObjectBase {
	int32_t SideNum; // 0x248(0x04)
	char UnknownData_24C[0xc]; // 0x24c(0x0c)
};

// Class Killstreak.KSOutOfBoundsZone
// Size: 0x238 (Inherited: 0x220)
struct AKSOutOfBoundsZone : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	float TickDamage; // 0x228(0x04)
	float WarningDuration; // 0x22c(0x04)
	bool ShouldDisableCollisionAtRoundEnd; // 0x230(0x01)
	char UnknownData_231[0x7]; // 0x231(0x07)

	void TurnOnDropBoundary(); // Function Killstreak.KSOutOfBoundsZone.TurnOnDropBoundary
	void TurnOffDropBoundary(); // Function Killstreak.KSOutOfBoundsZone.TurnOffDropBoundary
	void TurnOffCollision(struct AKSGameState* GameState, struct FRoundResult RoundResult); // Function Killstreak.KSOutOfBoundsZone.TurnOffCollision
};

// Class Killstreak.KSOutOfBoundsVolume
// Size: 0x260 (Inherited: 0x258)
struct AKSOutOfBoundsVolume : public AVolume {
	float TickDamage; // 0x258(0x04)
	float WarningDuration; // 0x25c(0x04)

	void TurnOnCollision(); // Function Killstreak.KSOutOfBoundsVolume.TurnOnCollision
	void TurnOffCollision(struct AKSGameState* GameState, struct FRoundResult RoundResult); // Function Killstreak.KSOutOfBoundsVolume.TurnOffCollision
};

// Class Killstreak.KSPawnActionBase
// Size: 0xa0 (Inherited: 0x98)
struct UKSPawnActionBase : public UPawnAction_BlueprintBase {
	struct AKSCharacter* KSChar; // 0x98(0x08)
};

// Class Killstreak.KSPawnAction_StartFire
// Size: 0xb0 (Inherited: 0xa0)
struct UKSPawnAction_StartFire : public UKSPawnActionBase {
	struct FGameplayTag EquipPoint; // 0xa0(0x08)
	bool bInfiniteAmmo; // 0xa8(0x01)
	char UnknownData_A9[0x3]; // 0xa9(0x03)
	int32_t PersistentAmmoCount; // 0xac(0x04)
};

// Class Killstreak.KSPawnAction_StopFire
// Size: 0xa8 (Inherited: 0xa0)
struct UKSPawnAction_StopFire : public UKSPawnActionBase {
	struct FGameplayTag EquipPoint; // 0xa0(0x08)
};

// Class Killstreak.KSPawnAction_SwapWeapon
// Size: 0xa8 (Inherited: 0xa0)
struct UKSPawnAction_SwapWeapon : public UKSPawnActionBase {
	struct FGameplayTag EquipPoint; // 0xa0(0x08)
};

// Class Killstreak.KSPayBackTracker
// Size: 0xa8 (Inherited: 0x98)
struct UKSPayBackTracker : public UKSAccoladeTracker {
	struct TArray<struct FTrackPlayerElim> PlayerElimTracker; // 0x98(0x10)

	bool IsVictimStored(int32_t VictimPlayerId, struct FTrackPlayerElim PlayerTracker, int32_t TrackerIndex); // Function Killstreak.KSPayBackTracker.IsVictimStored
	void HandleTrackerAccolade(struct AKSPlayerState* PlayerState); // Function Killstreak.KSPayBackTracker.HandleTrackerAccolade
	bool CheckLastInstigator(int32_t VictimId, int32_t CurrentInstigatorId, struct FTrackPlayerElim PlayerTracker, int32_t TrackerIndex); // Function Killstreak.KSPayBackTracker.CheckLastInstigator
};

// Class Killstreak.KSPersistentPlayerData
// Size: 0x118 (Inherited: 0x28)
struct UKSPersistentPlayerData : public UObject {
	bool bIsBoundToMinPlayerData; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct AKSPlayerState* PlayerState; // 0x30(0x08)
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct FKSPersistentPlayerId ID; // 0x48(0x10)
	int32_t TeamNum; // 0x58(0x04)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
	struct FString PlayerName; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMinimumPlayerDataUpdatedDel; // 0x70(0x10)
	char UnknownData_80[0x18]; // 0x80(0x18)
	struct FMulticastInlineDelegate OnPlayerDataTeamChangedDel; // 0x98(0x10)
	char UnknownData_A8[0x18]; // 0xa8(0x18)
	bool bAbandoned; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct FMulticastInlineDelegate OnPersistentPlayerDataAbandonedDel; // 0xc8(0x10)
	char UnknownData_D8[0x18]; // 0xd8(0x18)
	struct UKSJobItem* CachedJob; // 0xf0(0x08)
	int32_t CachedJobMasteryLevel; // 0xf8(0x04)
	int32_t CachedEliminations; // 0xfc(0x04)
	int32_t CachedDowns; // 0x100(0x04)
	int32_t CachedAssists; // 0x104(0x04)
	int32_t CachedDeaths; // 0x108(0x04)
	int32_t CachedRevives; // 0x10c(0x04)
	int32_t CachedMoney; // 0x110(0x04)
	int32_t CachedTotalCashEarned; // 0x114(0x04)

	bool IsAbandoned(); // Function Killstreak.KSPersistentPlayerData.IsAbandoned
	bool HasATeam(); // Function Killstreak.KSPersistentPlayerData.HasATeam
	int32_t GetTotalCashEarned(); // Function Killstreak.KSPersistentPlayerData.GetTotalCashEarned
	int32_t GetTeamNum(); // Function Killstreak.KSPersistentPlayerData.GetTeamNum
	int32_t GetRevives(); // Function Killstreak.KSPersistentPlayerData.GetRevives
	struct AKSPlayerState* GetPlayerState(); // Function Killstreak.KSPersistentPlayerData.GetPlayerState
	struct FString GetPlayerName(); // Function Killstreak.KSPersistentPlayerData.GetPlayerName
	int32_t GetMoney(); // Function Killstreak.KSPersistentPlayerData.GetMoney
	int32_t GetJobMasteryLevel(); // Function Killstreak.KSPersistentPlayerData.GetJobMasteryLevel
	struct UKSJobItem* GetJob(); // Function Killstreak.KSPersistentPlayerData.GetJob
	int32_t GetEliminations(); // Function Killstreak.KSPersistentPlayerData.GetEliminations
	int32_t GetDowns(); // Function Killstreak.KSPersistentPlayerData.GetDowns
	int32_t GetDeaths(); // Function Killstreak.KSPersistentPlayerData.GetDeaths
	int32_t GetAssists(); // Function Killstreak.KSPersistentPlayerData.GetAssists
	void BoundPlayerStateDestroyed(struct AActor* InActor); // Function Killstreak.KSPersistentPlayerData.BoundPlayerStateDestroyed
};

// Class Killstreak.KSPhaseRuleComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UKSPhaseRuleComponent : public UKSGameRuleComponent {
	char UnknownData_B0[0x10]; // 0xb0(0x10)
	float ScoringScalar; // 0xc0(0x04)
	float LastInitiatedPhaseTime; // 0xc4(0x04)
	bool bRejectPhaseTimerExpiredForPostRound; // 0xc8(0x01)
	char UnknownData_C9[0x3]; // 0xc9(0x03)
	struct FName LastPhaseName; // 0xcc(0x08)
	bool bPhaseActive; // 0xd4(0x01)
	char UnknownData_D5[0x3]; // 0xd5(0x03)

	void SetTeamType(struct AKSTeamState* Team, enum class EExtractionTeamType TeamType); // Function Killstreak.KSPhaseRuleComponent.SetTeamType
	void SetGameModePhaseTime(float TimeSeconds, bool bCallTimerHasExpiredIfZero); // Function Killstreak.KSPhaseRuleComponent.SetGameModePhaseTime
	void SetGameModePhaseNameAndTimer(struct FName NewPhaseName, float InTimerDuration, bool bCallTimerHasExpiredIfZero); // Function Killstreak.KSPhaseRuleComponent.SetGameModePhaseNameAndTimer
	void SetGameModePhaseName(struct FName NewPhaseName); // Function Killstreak.KSPhaseRuleComponent.SetGameModePhaseName
	void PhaseTimerExpired(struct FName PhaseName); // Function Killstreak.KSPhaseRuleComponent.PhaseTimerExpired
	void OnPhaseTimerExpired(struct FName PhaseName); // Function Killstreak.KSPhaseRuleComponent.OnPhaseTimerExpired
	void OnPhaseStarted(struct FName PhaseName, float TimeSeconds); // Function Killstreak.KSPhaseRuleComponent.OnPhaseStarted
	bool IsPhaseActive(); // Function Killstreak.KSPhaseRuleComponent.IsPhaseActive
	void HandleTeamSidesFlipped(); // Function Killstreak.KSPhaseRuleComponent.HandleTeamSidesFlipped
	void HandlePhaseStarted(); // Function Killstreak.KSPhaseRuleComponent.HandlePhaseStarted
	void HandlePhaseInterrupted(); // Function Killstreak.KSPhaseRuleComponent.HandlePhaseInterrupted
	void GivePointsToTeam(struct AKSTeamState* Team, int32_t Points, bool bCheckWin); // Function Killstreak.KSPhaseRuleComponent.GivePointsToTeam
	struct AKSGameState_Modular* GetGameStateModular(); // Function Killstreak.KSPhaseRuleComponent.GetGameStateModular
	struct AKSGameMode_Modular* GetGameModeModular(); // Function Killstreak.KSPhaseRuleComponent.GetGameModeModular
	struct FName GetCurrentGamePhase(); // Function Killstreak.KSPhaseRuleComponent.GetCurrentGamePhase
	void CompletePhase(struct AKSTeamState* LeadingTeam); // Function Killstreak.KSPhaseRuleComponent.CompletePhase
};

// Class Killstreak.KSPingBeaconBase
// Size: 0x238 (Inherited: 0x220)
struct AKSPingBeaconBase : public AActor {
	struct UDataTable* ContextualPingTypesDT; // 0x220(0x08)
	struct AKSPlayerState* PlayerOwner; // 0x228(0x08)
	char UnknownData_230[0x8]; // 0x230(0x08)

	void SetupBeaconDisplay(); // Function Killstreak.KSPingBeaconBase.SetupBeaconDisplay
	void PingRemoved(int32_t PingId, struct AKSPlayerState* OwningPlayer); // Function Killstreak.KSPingBeaconBase.PingRemoved
	struct FLinearColor GetPingColorForBeacon(); // Function Killstreak.KSPingBeaconBase.GetPingColorForBeacon
	bool FindRowByType(enum class EPingType PingType, struct FContextualPingTypesRow ContextualPingRow); // Function Killstreak.KSPingBeaconBase.FindRowByType
};

// Class Killstreak.KSPingManager
// Size: 0x530 (Inherited: 0xb0)
struct UKSPingManager : public UActorComponent {
	struct FMulticastInlineDelegate OnPingFailureDel; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnPingAdded; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnPingRemoved; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnPingChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnSentVoiceLineOnly; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnSelfPingAdded; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSelfPingRemoved; // 0x110(0x10)
	struct FMulticastInlineDelegate OnSelfPingChanged; // 0x120(0x10)
	struct FPingInfoChangeList ReplicatedPings; // 0x130(0x120)
	struct TArray<struct FPingInfo> LocallyPredictedPings; // 0x250(0x10)
	struct TMap<enum class EPingType, float> PingLifetimes; // 0x260(0x50)
	struct TMap<enum class EPingType, struct AKSPingBeaconBase*> PingBeaconTypes; // 0x2b0(0x50)
	struct TMap<enum class EPingType, int32_t> MaxPingsForType; // 0x300(0x50)
	struct TMap<enum class EPingType, struct FVector_NetQuantize> PingIconOffsets; // 0x350(0x50)
	bool bDisplaySelfPingsOnNameplate; // 0x3a0(0x01)
	bool bWorldSelfPingsFollowPlayer; // 0x3a1(0x01)
	char UnknownData_3A2[0x4e]; // 0x3a2(0x4e)
	float MaxPingDistance; // 0x3f0(0x04)
	float CachedHoveredActorResetTime; // 0x3f4(0x04)
	struct TArray<struct AKSPingBeaconBase*> ActiveBeacons; // 0x3f8(0x10)
	bool bAllowPingRemoval; // 0x408(0x01)
	char UnknownData_409[0x7]; // 0x409(0x07)
	struct TMap<enum class EPingType, struct UAkAudioEvent*> PingAudioCues; // 0x410(0x50)
	char UnknownData_460[0x8]; // 0x460(0x08)
	struct AKSGameState_RoundGame* CachedRoundState; // 0x468(0x08)
	struct AKSPlayerController* CachedOwner; // 0x470(0x08)
	struct AKSTeamState* CachedTeam; // 0x478(0x08)
	char UnknownData_480[0x28]; // 0x480(0x28)
	struct FWeakObjectPtr<struct AActor> CachedHoveredActor; // 0x4a8(0x08)
	char UnknownData_4B0[0x8]; // 0x4b0(0x08)
	SoftClassProperty MinimapDisplayWidget; // 0x4b8(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x4e0(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x508(0x28)

	void UpdateCachedHoveredActor(struct AActor* NewCachedHoveredActor); // Function Killstreak.KSPingManager.UpdateCachedHoveredActor
	void ShowOutline(struct AActor* OutlinedActor); // Function Killstreak.KSPingManager.ShowOutline
	void ServerSendVoiceLineOnly(enum class EPingMessage PingMessage); // Function Killstreak.KSPingManager.ServerSendVoiceLineOnly
	void ServerRemovePing(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSPingManager.ServerRemovePing
	void ServerPingRequest(struct FPingInfo PingInfo); // Function Killstreak.KSPingManager.ServerPingRequest
	void ServerChangePing(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function Killstreak.KSPingManager.ServerChangePing
	void ResetCachedHoveredActor(); // Function Killstreak.KSPingManager.ResetCachedHoveredActor
	void RemovePing(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSPingManager.RemovePing
	bool RemoveInternalPingInfo(int32_t NewPingId, struct AKSPlayerState* NewCreatingPlayer); // Function Killstreak.KSPingManager.RemoveInternalPingInfo
	bool RemoveHoveredPing(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSPingManager.RemoveHoveredPing
	void OnPingExpired(struct FPingInfo ExpiringPing); // Function Killstreak.KSPingManager.OnPingExpired
	bool IsThrottled(); // Function Killstreak.KSPingManager.IsThrottled
	bool IsSelfPing(enum class EPingType PingType); // Function Killstreak.KSPingManager.IsSelfPing
	bool IsInvisiblePingType(enum class EPingType PingType); // Function Killstreak.KSPingManager.IsInvisiblePingType
	void HideOutline(struct AActor* OutlinedActor); // Function Killstreak.KSPingManager.HideOutline
	struct TArray<enum class EPingType> GetPingTypesToCheck(enum class EPingType PingType); // Function Killstreak.KSPingManager.GetPingTypesToCheck
	float GetPingLifetimes(enum class EPingType PingType); // Function Killstreak.KSPingManager.GetPingLifetimes
	bool GetPingInfoByIdAndPlayer(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct FPingInfo OutPingInfo); // Function Killstreak.KSPingManager.GetPingInfoByIdAndPlayer
	int32_t GetPingIdForDisplayId(int32_t DisplayId, struct AKSPlayerState* CreatingPlayer); // Function Killstreak.KSPingManager.GetPingIdForDisplayId
	int32_t GetDisplayIdForPingId(int32_t PingId, struct AKSPlayerState* CreatingPlayer); // Function Killstreak.KSPingManager.GetDisplayIdForPingId
	void GameRoundOver(struct AKSGameState* GameState, struct FRoundResult RoundResult); // Function Killstreak.KSPingManager.GameRoundOver
	bool DoesWorldSelfPingFollowPlayer(); // Function Killstreak.KSPingManager.DoesWorldSelfPingFollowPlayer
	void ClientPingRejected(enum class EPingFailedType Reason, int32_t PingId); // Function Killstreak.KSPingManager.ClientPingRejected
	void ClearPingsOfType(enum class EPingType PingType); // Function Killstreak.KSPingManager.ClearPingsOfType
	void ClearAllPingsForPlayer(); // Function Killstreak.KSPingManager.ClearAllPingsForPlayer
	bool CheckIfFriendlyCharacter(struct AActor* ActorToCheck, struct AKSCharacter* PlayerCharacter); // Function Killstreak.KSPingManager.CheckIfFriendlyCharacter
	bool CheckIfEnemyCharacter(struct AActor* ActorToCheck, struct AKSCharacter* PlayerCharacter); // Function Killstreak.KSPingManager.CheckIfEnemyCharacter
	bool CheckIfDeployable(struct AActor* ActorToCheck, struct AKSCharacter* PlayerCharacter, bool bMustBeEnemyDeployable); // Function Killstreak.KSPingManager.CheckIfDeployable
	void ChangePing(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function Killstreak.KSPingManager.ChangePing
	void AttemptRemovePing(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSPingManager.AttemptRemovePing
	void AttemptPing2D(struct FVector2D WorldLocation2D); // Function Killstreak.KSPingManager.AttemptPing2D
	void AttemptManualPing(enum class EPingType PingType, enum class EPingMessage PingMessage, struct AActor* PingedActor, bool bRemoveOtherPingsOfType); // Function Killstreak.KSPingManager.AttemptManualPing
	void AttemptContextualPing(bool DoubleClick); // Function Killstreak.KSPingManager.AttemptContextualPing
	void AttemptCommunicationPing(enum class EPingType PingType, enum class EPingMessage PingMessage); // Function Killstreak.KSPingManager.AttemptCommunicationPing
	void AddPing(struct FPingInfo PingInfo); // Function Killstreak.KSPingManager.AddPing
	void AddInternalPingInfo(int32_t NewPingId, int32_t NewDisplayId, struct AKSPlayerState* NewCreatingPlayer); // Function Killstreak.KSPingManager.AddInternalPingInfo
	void AddHoveredPing(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSPingManager.AddHoveredPing
};

// Class Killstreak.KSPlayerCameraManager
// Size: 0x2770 (Inherited: 0x2740)
struct AKSPlayerCameraManager : public APlayerCameraManager {
	char UnknownData_2740[0x28]; // 0x2740(0x28)
	int32_t ThermalScopePPCount; // 0x2768(0x04)
	char UnknownData_276C[0x4]; // 0x276c(0x04)
};

// Class Killstreak.KSChallengeActivity
// Size: 0x2b8 (Inherited: 0x2b0)
struct UKSChallengeActivity : public UKSActivity {
	int32_t RerollLootId; // 0x2b0(0x04)
	bool DailyChallenge; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)

	bool IsDailyChallenge(); // Function Killstreak.KSChallengeActivity.IsDailyChallenge
	void InitNewlyCreatedChallengeActivity(int64_t InItemId, int64_t InProgressLootId, int64_t InRerollLootId, int64_t InRewardVendorId, struct FString ActivityName, bool IsDailyChallenge); // Function Killstreak.KSChallengeActivity.InitNewlyCreatedChallengeActivity
	int32_t GetRerollLootId(); // Function Killstreak.KSChallengeActivity.GetRerollLootId
};

// Class Killstreak.KSPlayerChallengesManager
// Size: 0x268 (Inherited: 0x210)
struct UKSPlayerChallengesManager : public UKSActivityManagerBase {
	char UnknownData_210[0x8]; // 0x210(0x08)
	struct FMulticastInlineDelegate OnPlayerChallengesReady; // 0x218(0x10)
	struct FMulticastInlineDelegate OnPlayerChallengesChanged; // 0x228(0x10)
	struct FMulticastInlineDelegate OnPlayerDailyChallengeTimerChanged; // 0x238(0x10)
	bool ChallengesReady; // 0x248(0x01)
	char UnknownData_249[0x7]; // 0x249(0x07)
	struct FMulticastInlineDelegate TestPlayerChallengeComplete; // 0x250(0x10)
	char UnknownData_260[0x8]; // 0x260(0x08)

	void RequestNewChallenge(); // Function Killstreak.KSPlayerChallengesManager.RequestNewChallenge
	void OnDailyChallengeTimerRefresh(struct FInventoryId InventoryTypeId); // Function Killstreak.KSPlayerChallengesManager.OnDailyChallengeTimerRefresh
	void OnChallengeProgressUpdated(struct FInventoryTypeId InventoryTypeId); // Function Killstreak.KSPlayerChallengesManager.OnChallengeProgressUpdated
	int32_t GetSecondsTillNewDailyChallenge(); // Function Killstreak.KSPlayerChallengesManager.GetSecondsTillNewDailyChallenge
	bool GetActiveDailyChallenges(struct TArray<struct UKSChallengeActivityInstance*> DailyActivityInstances); // Function Killstreak.KSPlayerChallengesManager.GetActiveDailyChallenges
};

// Class Killstreak.KSPlayerInfo
// Size: 0xa0 (Inherited: 0x80)
struct UKSPlayerInfo : public UPUMG_PlayerInfo {
	struct FMulticastInlineDelegate OnPlayerStatusChanged; // 0x80(0x10)
	char UnknownData_90[0x10]; // 0x90(0x10)

	void ViewExternalProfile(); // Function Killstreak.KSPlayerInfo.ViewExternalProfile
	void ToggleDND(); // Function Killstreak.KSPlayerInfo.ToggleDND
	bool ShouldShowViewGamercardForPlayer(); // Function Killstreak.KSPlayerInfo.ShouldShowViewGamercardForPlayer
	bool ShouldShowViewExternalProfile(); // Function Killstreak.KSPlayerInfo.ShouldShowViewExternalProfile
	bool ShouldShowInviteToPartyForPlayer(); // Function Killstreak.KSPlayerInfo.ShouldShowInviteToPartyForPlayer
	bool ShouldShowCrossplayIconForPlayer(); // Function Killstreak.KSPlayerInfo.ShouldShowCrossplayIconForPlayer
	bool IsSuggestedFriend(); // Function Killstreak.KSPlayerInfo.IsSuggestedFriend
	bool IsSamePortalAsLocalPlayer(); // Function Killstreak.KSPlayerInfo.IsSamePortalAsLocalPlayer
	bool IsRoCoFriend(); // Function Killstreak.KSPlayerInfo.IsRoCoFriend
	bool IsRequestingFriend(); // Function Killstreak.KSPlayerInfo.IsRequestingFriend
	bool IsPendingFriend(); // Function Killstreak.KSPlayerInfo.IsPendingFriend
	bool IsOnline(); // Function Killstreak.KSPlayerInfo.IsOnline
	bool IsMuted(); // Function Killstreak.KSPlayerInfo.IsMuted
	bool IsInVoiceChannel(); // Function Killstreak.KSPlayerInfo.IsInVoiceChannel
	bool IsInQueue(); // Function Killstreak.KSPlayerInfo.IsInQueue
	bool IsInMatch(); // Function Killstreak.KSPlayerInfo.IsInMatch
	bool IsInLocalParty(); // Function Killstreak.KSPlayerInfo.IsInLocalParty
	bool IsInLobby(); // Function Killstreak.KSPlayerInfo.IsInLobby
	bool IsFriend(); // Function Killstreak.KSPlayerInfo.IsFriend
	bool IsDND(); // Function Killstreak.KSPlayerInfo.IsDND
	bool InviteToParty(struct FText OutErrorText); // Function Killstreak.KSPlayerInfo.InviteToParty
	bool HasPortalRelationship(); // Function Killstreak.KSPlayerInfo.HasPortalRelationship
	bool HasPortalInfoForClientPortal(); // Function Killstreak.KSPlayerInfo.HasPortalInfoForClientPortal
	bool HasHRRelationship(); // Function Killstreak.KSPlayerInfo.HasHRRelationship
	bool HasDeserter(); // Function Killstreak.KSPlayerInfo.HasDeserter
	struct FText GetStatusMessage(); // Function Killstreak.KSPlayerInfo.GetStatusMessage
	struct FText GetRichPresenceText(); // Function Killstreak.KSPlayerInfo.GetRichPresenceText
	enum class EKSPlayerInputType GetPlayerSelectedInputType(); // Function Killstreak.KSPlayerInfo.GetPlayerSelectedInputType
	bool GetPlayersDisplayedSkin(struct UKSItem* SkinItem); // Function Killstreak.KSPlayerInfo.GetPlayersDisplayedSkin
	enum class EKSPlatformType GetPlayerPlatformType(); // Function Killstreak.KSPlayerInfo.GetPlayerPlatformType
	enum class EKSPlayerOnlineStatus GetPlayerOnlineStatus(bool bAllowPartyStatus, bool bAllowFriendRequestStatus); // Function Killstreak.KSPlayerInfo.GetPlayerOnlineStatus
	int32_t GetPlayerLevel(); // Function Killstreak.KSPlayerInfo.GetPlayerLevel
	struct TArray<struct FPlayerAlias> GetPlayerAliases(); // Function Killstreak.KSPlayerInfo.GetPlayerAliases
	bool GetEquippedAccountItem(enum class EPlayerAccountSlot eSlot, struct UKSItem* EquippedItem); // Function Killstreak.KSPlayerInfo.GetEquippedAccountItem
	int32_t GetDeserterPenaltySeconds(); // Function Killstreak.KSPlayerInfo.GetDeserterPenaltySeconds
	bool CanBeSpectated(); // Function Killstreak.KSPlayerInfo.CanBeSpectated
	bool CanBeChallenged(); // Function Killstreak.KSPlayerInfo.CanBeChallenged
};

// Class Killstreak.KSPlayerInputDefault
// Size: 0x78 (Inherited: 0x28)
struct UKSPlayerInputDefault : public UObject {
	struct TArray<struct FSettingConfigPair> SettingsConfig; // 0x28(0x10)
	struct TArray<struct FKSInputActionNameTypePair> KSInputActionNameTypePairs; // 0x38(0x10)
	struct TArray<struct FKSInputActionTiedNames> KSInputActionTiedNames; // 0x48(0x10)
	struct TArray<struct FKSCustomInputActionKey> CustomInputActionKeys; // 0x58(0x10)
	struct TArray<struct FKSCustomInputAxisKey> CustomInputAxisKeys; // 0x68(0x10)
};

// Class Killstreak.KSPlayerInput
// Size: 0x1640 (Inherited: 0x1330)
struct UKSPlayerInput : public UPGame_PlayerInput {
	struct TMap<struct FString, struct FString> SavedSettingsConfig; // 0x1330(0x50)
	char UnknownData_1380[0xf4]; // 0x1380(0xf4)
	struct FVector2D GamepadLookAcceleration; // 0x1474(0x08)
	float MinMouseSenseScaling; // 0x147c(0x04)
	float MaxMouseSenseScaling; // 0x1480(0x04)
	float TouchLookSensitivityADS; // 0x1484(0x04)
	char UnknownData_1488[0x8]; // 0x1488(0x08)
	struct FMulticastInlineDelegate OnKeyMappingsUpdated; // 0x1490(0x10)
	struct TMap<struct FName, struct FKSCustomInputActionKeyMappings> KSCustomActionKeyMappings; // 0x14a0(0x50)
	char UnknownData_14F0[0x50]; // 0x14f0(0x50)
	struct TMap<struct FName, struct FKSCustomInputAxisKeyMappings> KSCustomAxisKeyMappings; // 0x1540(0x50)
	char UnknownData_1590[0x50]; // 0x1590(0x50)
	struct UKSAnalogStickFilter* KSLeftAnalogStickFilterClass; // 0x15e0(0x08)
	struct UKSAnalogStickFilter* KSRightAnalogStickFilterClass; // 0x15e8(0x08)
	struct UKSAnalogStickFilter* LeftAnalogStickFilter; // 0x15f0(0x08)
	char UnknownData_15F8[0x10]; // 0x15f8(0x10)
	struct UKSAnalogStickFilter* RightAnalogStickFilter; // 0x1608(0x08)
	char UnknownData_1610[0x10]; // 0x1610(0x10)
	struct FSoftObjectPath TouchRegionDeltaAxisAssistMultiplierCurvePath; // 0x1620(0x18)
	struct UCurveFloat* TouchRegionDeltaAxisAssistMultiplierCurve; // 0x1638(0x08)

	bool DoesInputTypeSupportChords(enum class EKSInputType InputType); // Function Killstreak.KSPlayerInput.DoesInputTypeSupportChords
};

// Class Killstreak.KSPlayerInventoryHelper
// Size: 0x1b8 (Inherited: 0x118)
struct UKSPlayerInventoryHelper : public UPUMG_PlayerInventoryHelper {
	struct TMap<struct FInventoryId, struct FMulticastInlineDelegate> DynamicCallbacksPerInventoryId; // 0x118(0x50)
	struct TMap<struct FInventoryTypeId, struct FMulticastInlineDelegate> DynamicCallbacksPerInventoryTypeId; // 0x168(0x50)

	void RemoveAllItemUpdatedCallbacks(struct FDelegate Callback); // Function Killstreak.KSPlayerInventoryHelper.RemoveAllItemUpdatedCallbacks
	void RemoveAllItemTypeUpdatedCallbacks(struct FDelegate Callback); // Function Killstreak.KSPlayerInventoryHelper.RemoveAllItemTypeUpdatedCallbacks
	int32_t GetCountByType(int32_t ItemTypeId, int32_t ItemSubTypeId, struct AKSPlayerController* Player); // Function Killstreak.KSPlayerInventoryHelper.GetCountByType
	int32_t GetCount(int64_t ItemId, struct AKSPlayerController* Player); // Function Killstreak.KSPlayerInventoryHelper.GetCount
	struct FDateTime GetAcquiredTime(int64_t ItemId, struct AKSPlayerController* Player); // Function Killstreak.KSPlayerInventoryHelper.GetAcquiredTime
	void AddItemUpdatedCallback(struct FDelegate Callback, int64_t ItemId, struct AKSPlayerController* Player); // Function Killstreak.KSPlayerInventoryHelper.AddItemUpdatedCallback
	void AddItemTypeUpdatedCallback(struct FDelegate Callback, int32_t ItemTypeId, int32_t ItemSubTypeId, struct AKSPlayerController* Player); // Function Killstreak.KSPlayerInventoryHelper.AddItemTypeUpdatedCallback
};

// Class Killstreak.KSPlayerMod
// Size: 0x238 (Inherited: 0x168)
struct UKSPlayerMod : public UKSItem {
	bool bIsPerk; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	SoftClassProperty FunctionalClass; // 0x170(0x28)
	bool bIsInstanceReplicated; // 0x198(0x01)
	char UnknownData_199[0x3]; // 0x199(0x03)
	int32_t ModUnlockTier; // 0x19c(0x04)
	enum class EModInterferenceType AttachmentInteraction; // 0x1a0(0x01)
	bool bSingleInstanceStack; // 0x1a1(0x01)
	enum class EPlayerModType ModType; // 0x1a2(0x01)
	bool bShouldAssist; // 0x1a3(0x01)
	char UnknownData_1A4[0x4]; // 0x1a4(0x04)
	struct FGameplayTagContainer EffectCategories; // 0x1a8(0x20)
	struct TArray<struct FName> TriggerEvents; // 0x1c8(0x10)
	struct TMap<struct FName, int32_t> AnimEventPriorityMap; // 0x1d8(0x50)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> RemovesFromLoadout; // 0x228(0x10)

	bool IsSingleInstanceStack(); // Function Killstreak.KSPlayerMod.IsSingleInstanceStack
	bool IsPerk(); // Function Killstreak.KSPlayerMod.IsPerk
	bool IsModTemporary(); // Function Killstreak.KSPlayerMod.IsModTemporary
	bool IsInstanceReplicated(); // Function Killstreak.KSPlayerMod.IsInstanceReplicated
	struct TArray<struct FName> GetTriggerEvents(); // Function Killstreak.KSPlayerMod.GetTriggerEvents
	bool GetPerkCategory(struct UPerkCategory* FoundPerkCategory); // Function Killstreak.KSPlayerMod.GetPerkCategory
	int32_t GetModUnlockTier(); // Function Killstreak.KSPlayerMod.GetModUnlockTier
	enum class EPlayerModType GetModType(); // Function Killstreak.KSPlayerMod.GetModType
	enum class EModInterferenceType GetModInteraction(); // Function Killstreak.KSPlayerMod.GetModInteraction
	SoftClassProperty GetFunctionalClass(); // Function Killstreak.KSPlayerMod.GetFunctionalClass
	struct FGameplayTagContainer GetEffectCategories(); // Function Killstreak.KSPlayerMod.GetEffectCategories
};

// Class Killstreak.KSPlayerMod_Accuracy
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_Accuracy : public UKSPlayerMod {
	float BaseAccuracyMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_Activated
// Size: 0x298 (Inherited: 0x238)
struct UKSPlayerMod_Activated : public UKSPlayerMod {
	int32_t RequiredCharge; // 0x238(0x04)
	int32_t MaximumCharge; // 0x23c(0x04)
	int32_t DefaultCharge; // 0x240(0x04)
	float RefundFactor; // 0x244(0x04)
	bool bHasLockout; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	float LockoutTime; // 0x24c(0x04)
	bool bFullChargeOnRoundStart; // 0x250(0x01)
	bool bCanActivateBeforeRoundStart; // 0x251(0x01)
	bool bIgnoreNoFireZone; // 0x252(0x01)
	bool bEndOnDown; // 0x253(0x01)
	bool bEndOnDeath; // 0x254(0x01)
	char UnknownData_255[0x3]; // 0x255(0x03)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> BuffsGivenOnActivation; // 0x258(0x10)
	bool bKeepsTeamAliveIfUsable; // 0x268(0x01)
	bool bKeepsTeamAliveIfActive; // 0x269(0x01)
	char UnknownData_26A[0x2]; // 0x26a(0x02)
	float AbilitySetupDuration; // 0x26c(0x04)
	bool bSetupLagCompensation; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	float AbilityDuration; // 0x274(0x04)
	float AbilityEndWarningTime; // 0x278(0x04)
	float AbilityRecoveryDuration; // 0x27c(0x04)
	bool bSelectableNormally; // 0x280(0x01)
	bool bSelectableWhileDowned; // 0x281(0x01)
	char UnknownData_282[0x2]; // 0x282(0x02)
	float ChargePerSecond; // 0x284(0x04)
	float ChargePerHundredPoints; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct UCameraShake* CameraShake; // 0x290(0x08)

	int32_t GetRequiredCharge(); // Function Killstreak.KSPlayerMod_Activated.GetRequiredCharge
	float GetRefundFactor(); // Function Killstreak.KSPlayerMod_Activated.GetRefundFactor
	int32_t GetMaximumCharge(); // Function Killstreak.KSPlayerMod_Activated.GetMaximumCharge
	int32_t GetDefaultCharge(); // Function Killstreak.KSPlayerMod_Activated.GetDefaultCharge
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> GetBuffs(); // Function Killstreak.KSPlayerMod_Activated.GetBuffs
	float GetAbilitySetupDuration(); // Function Killstreak.KSPlayerMod_Activated.GetAbilitySetupDuration
	float GetAbilityRecoveryDuration(); // Function Killstreak.KSPlayerMod_Activated.GetAbilityRecoveryDuration
	float GetAbilityEndWarningTime(); // Function Killstreak.KSPlayerMod_Activated.GetAbilityEndWarningTime
	float GetAbilityDuration(); // Function Killstreak.KSPlayerMod_Activated.GetAbilityDuration
};

// Class Killstreak.KSPlayerMod_ActivatedTarget
// Size: 0x2a8 (Inherited: 0x298)
struct UKSPlayerMod_ActivatedTarget : public UKSPlayerMod_Activated {
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> TargetBuffsGivenOnActivation; // 0x298(0x10)

	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> GetTargetBuffs(); // Function Killstreak.KSPlayerMod_ActivatedTarget.GetTargetBuffs
};

// Class Killstreak.KSPlayerMod_AdjustCashRewards
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_AdjustCashRewards : public UKSPlayerMod {
	int32_t BonusCashPerDown; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_AdsMoveSpeed
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_AdsMoveSpeed : public UKSPlayerMod {
	float AdsMoveSpeedMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_Aim
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_Aim : public UKSPlayerMod {
	bool AimLocked; // 0x238(0x01)
	bool CrosshairHidden; // 0x239(0x01)
	char UnknownData_23A[0x2]; // 0x23a(0x02)
	float SensitivityMultiplier; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_AngleConfig
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_AngleConfig : public UKSPlayerMod {
	float AngleThreshold; // 0x238(0x04)
	bool bUseDistance; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	float DistanceThreshold; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)

	bool CheckDistanceAndAngleFromEnemies(struct AKSCharacter* InCharacter, bool bInLOS, bool bWithinDistance, bool bWithinAngle, bool bCheckLOS, bool bIgnoreDeadEnemies); // Function Killstreak.KSPlayerMod_AngleConfig.CheckDistanceAndAngleFromEnemies
	bool CheckDistanceAndAngle(struct UObject* WorldContextObject, struct TArray<struct AActor*> IgnoredActors, struct FVector start, struct FVector end, struct FVector DirectionToCheck, bool bInLOS, bool bWithinDistance, bool bWithinAngle, bool bCheckLOS); // Function Killstreak.KSPlayerMod_AngleConfig.CheckDistanceAndAngle
	bool CheckAngle(struct FVector Direction1, struct FVector Direction2, bool bWithinAngle); // Function Killstreak.KSPlayerMod_AngleConfig.CheckAngle
};

// Class Killstreak.KSPlayerMod_ApplyModOnEvent
// Size: 0x250 (Inherited: 0x238)
struct UKSPlayerMod_ApplyModOnEvent : public UKSPlayerMod {
	float ModDuration; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> ModsToGiveOnEvent; // 0x240(0x10)

	void RemoveMod(struct AKSPlayerState* ModOwner); // Function Killstreak.KSPlayerMod_ApplyModOnEvent.RemoveMod
	float GetModDuration(); // Function Killstreak.KSPlayerMod_ApplyModOnEvent.GetModDuration
	void ApplyMod(struct AKSPlayerState* ModOwner); // Function Killstreak.KSPlayerMod_ApplyModOnEvent.ApplyMod
};

// Class Killstreak.KSPlayerMod_Blind
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_Blind : public UKSPlayerMod {
	bool IsBlind; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
};

// Class Killstreak.KSPlayerMod_Charge
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_Charge : public UKSPlayerMod {
	bool bIsMultiplier; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	float ChargeMultiplier; // 0x23c(0x04)
	bool bIsDiscount; // 0x240(0x01)
	char UnknownData_241[0x3]; // 0x241(0x03)
	int32_t ChargeDiscount; // 0x244(0x04)
};

// Class Killstreak.KSPlayerMod_DamageDealt
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_DamageDealt : public UKSPlayerMod {
	float DamageDealtMultiplier; // 0x238(0x04)
	float SlowedDamageDealtMultiplier; // 0x23c(0x04)
	float DeployableDamageDealtMultiplier; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)
};

// Class Killstreak.KSPlayerMod_DamageTaken
// Size: 0x308 (Inherited: 0x238)
struct UKSPlayerMod_DamageTaken : public UKSPlayerMod {
	struct TArray<enum class EDamageCategory> AffectedDamageCategories; // 0x238(0x10)
	struct TArray<enum class EHitLocationType> AffectedHitLocations; // 0x248(0x10)
	float DamageTakenMultiplier; // 0x258(0x04)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct TSoftObjectPtr<struct UParticleSystem> DamageTakenParticle; // 0x260(0x28)
	bool ReducesAgentsDamageTaken; // 0x288(0x01)
	bool ImmuneToNonDamageEffects; // 0x289(0x01)
	bool NotifyDamageReduction; // 0x28a(0x01)
	char UnknownData_28B[0x5]; // 0x28b(0x05)
	struct TSoftObjectPtr<struct UAkAudioEvent> HitBodyAudioEvent; // 0x290(0x28)
	struct TSoftObjectPtr<struct UAkAudioEvent> HitHeadAudioEvent; // 0x2b8(0x28)
	struct TSoftObjectPtr<struct UAkAudioEvent> HitByAudioEvent; // 0x2e0(0x28)

	struct TArray<enum class EDamageCategory> GetAffectedDamageCategories(); // Function Killstreak.KSPlayerMod_DamageTaken.GetAffectedDamageCategories
};

// Class Killstreak.KSPlayerMod_DodgeRollLockout
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_DodgeRollLockout : public UKSPlayerMod {
	float LockoutTimeMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_DownedRoll
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_DownedRoll : public UKSPlayerMod {
	float CooldownMultiplier; // 0x238(0x04)
	float DistanceMultiplier; // 0x23c(0x04)
	float SpeedMultiplier; // 0x240(0x04)
	float AdditionalDownedHealth; // 0x244(0x04)
};

// Class Killstreak.KSPlayerMod_FullSpeedADS
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_FullSpeedADS : public UKSPlayerMod {
	float FullSpeedAlpha; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_Gadget
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_Gadget : public UKSPlayerMod {
	float GadgetThrowSpeedMutliplier; // 0x238(0x04)
	float GadgetInnerRadiusMultiplier; // 0x23c(0x04)
	float GadgetOuterRadiusMutliplier; // 0x240(0x04)
	float GadgetFXSizeMultiplier; // 0x244(0x04)
};

// Class Killstreak.KSPlayerMod_GiveEquipPoints
// Size: 0x258 (Inherited: 0x238)
struct UKSPlayerMod_GiveEquipPoints : public UKSPlayerMod {
	struct FGameplayTagContainer EquipPointsToGive; // 0x238(0x20)
};

// Class Killstreak.KSPlayerMod_GiveItemOnActivation
// Size: 0x2d0 (Inherited: 0x298)
struct UKSPlayerMod_GiveItemOnActivation : public UKSPlayerMod_Activated {
	struct TSoftObjectPtr<struct UKSItem> GivenItem; // 0x298(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSItem>> GivenItems; // 0x2c0(0x10)

	struct TSoftObjectPtr<struct UKSItem> GetGivenItem(int32_t Index); // Function Killstreak.KSPlayerMod_GiveItemOnActivation.GetGivenItem
};

// Class Killstreak.KSPlayerMod_GiveItemOnEvent
// Size: 0x260 (Inherited: 0x238)
struct UKSPlayerMod_GiveItemOnEvent : public UKSPlayerMod {
	struct TSoftObjectPtr<struct UKSItem> ItemToGive; // 0x238(0x28)

	void GiveItem(struct AKSCharacter* ModOwner, struct FDelegate GivenToEvent); // Function Killstreak.KSPlayerMod_GiveItemOnEvent.GiveItem
	struct TSoftObjectPtr<struct UKSItem> GetItemToGive(); // Function Killstreak.KSPlayerMod_GiveItemOnEvent.GetItemToGive
};

// Class Killstreak.KSPlayerMod_GiveWeaponConfig
// Size: 0x2e0 (Inherited: 0x2d0)
struct UKSPlayerMod_GiveWeaponConfig : public UKSPlayerMod_GiveItemOnActivation {
	float Radius; // 0x2d0(0x04)
	bool bCanActivateInAir; // 0x2d4(0x01)
	char UnknownData_2D5[0x3]; // 0x2d5(0x03)
	float ReclaimCharge; // 0x2d8(0x04)
	int32_t AllowedActiveDeployableCount; // 0x2dc(0x04)

	float GetReclaimCharge(); // Function Killstreak.KSPlayerMod_GiveWeaponConfig.GetReclaimCharge
	float GetRadius(); // Function Killstreak.KSPlayerMod_GiveWeaponConfig.GetRadius
	int32_t GetAllowedActiveDeployableCount(); // Function Killstreak.KSPlayerMod_GiveWeaponConfig.GetAllowedActiveDeployableCount
	bool CanActivateInAir(); // Function Killstreak.KSPlayerMod_GiveWeaponConfig.CanActivateInAir
};

// Class Killstreak.KSPlayerMod_GlobalMoveSpeed
// Size: 0x258 (Inherited: 0x238)
struct UKSPlayerMod_GlobalMoveSpeed : public UKSPlayerMod {
	float GlobalMoveSpeedMultiplier; // 0x238(0x04)
	bool bSprintOverride; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	float GlobalSprintSpeedMultiplier; // 0x240(0x04)
	bool bDodgeRollOverride; // 0x244(0x01)
	char UnknownData_245[0x3]; // 0x245(0x03)
	float GlobalDodgeRollSpeedMultiplier; // 0x248(0x04)
	bool bCrouchOverride; // 0x24c(0x01)
	char UnknownData_24D[0x3]; // 0x24d(0x03)
	float GlobalCrouchSpeedMultiplier; // 0x250(0x04)
	bool CanSprintWhenAffected; // 0x254(0x01)
	bool CanDodgeRollWhenAffected; // 0x255(0x01)
	char UnknownData_256[0x2]; // 0x256(0x02)
};

// Class Killstreak.KSPlayerMod_Hacking
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_Hacking : public UKSPlayerMod {
	float HackSpeedMultiplier; // 0x238(0x04)
	float DehackSpeedMultiplier; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_HardLandAvoid
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_HardLandAvoid : public UKSPlayerMod {
	bool AllowBunnyHopping; // 0x238(0x01)
	char UnknownData_239[0x7]; // 0x239(0x07)
};

// Class Killstreak.KSPlayerMod_HealOnEvent
// Size: 0x258 (Inherited: 0x238)
struct UKSPlayerMod_HealOnEvent : public UKSPlayerMod {
	bool bHealUpTo; // 0x238(0x01)
	bool bHealAsPercentage; // 0x239(0x01)
	char UnknownData_23A[0x2]; // 0x23a(0x02)
	float HealthPercentage; // 0x23c(0x04)
	float HealthAmount; // 0x240(0x04)
	float HealDelay; // 0x244(0x04)
	float HealPeriod; // 0x248(0x04)
	int32_t HealTickCount; // 0x24c(0x04)
	bool bFirstTickImmediately; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)

	bool GetHealUpTo(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealUpTo
	int32_t GetHealTickCount(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealTickCount
	float GetHealthPercentage(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealthPercentage
	float GetHealthAmount(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealthAmount
	float GetHealPeriod(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealPeriod
	float GetHealDelay(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealDelay
	bool GetHealAsPercentage(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetHealAsPercentage
	bool GetFirstTickImmediately(); // Function Killstreak.KSPlayerMod_HealOnEvent.GetFirstTickImmediately
	void ApplyOverheal(struct AKSCharacter* CharacterToHeal, struct AKSCharacter* Healer); // Function Killstreak.KSPlayerMod_HealOnEvent.ApplyOverheal
	void ApplyHeal(struct AKSCharacter* CharacterToHeal, struct AKSCharacter* Healer); // Function Killstreak.KSPlayerMod_HealOnEvent.ApplyHeal
};

// Class Killstreak.KSPlayerMod_HealthRegeneration
// Size: 0x250 (Inherited: 0x238)
struct UKSPlayerMod_HealthRegeneration : public UKSPlayerMod {
	float HealthRegenerationPerSecondAdded; // 0x238(0x04)
	int32_t Priority_HealthRegenerationPerSecondAdded; // 0x23c(0x04)
	float HealthRegenerationDelayAdded; // 0x240(0x04)
	int32_t Priority_HealthRegenerationDelayAdded; // 0x244(0x04)
	bool ShouldAllowHealthRegen; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	int32_t Priority_ShouldAllowHealthRegen; // 0x24c(0x04)
};

// Class Killstreak.KSPlayerMod_HideFromTeam
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_HideFromTeam : public UKSPlayerMod {
	bool bHideFriendlyStencil; // 0x238(0x01)
	bool bNoFriendlyDrone; // 0x239(0x01)
	char UnknownData_23A[0x6]; // 0x23a(0x06)
};

// Class Killstreak.KSPlayerMod_HipfireSprint
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_HipfireSprint : public UKSPlayerMod {
	bool bCanHipfireSprint; // 0x238(0x01)
	bool bCanReloadSprint; // 0x239(0x01)
	char UnknownData_23A[0x6]; // 0x23a(0x06)
};

// Class Killstreak.KSPlayerMod_MainCameraFov
// Size: 0x270 (Inherited: 0x238)
struct UKSPlayerMod_MainCameraFov : public UKSPlayerMod {
	float FieldOfViewOverride; // 0x238(0x04)
	float SprintFovOverride; // 0x23c(0x04)
	float CameraBoomLengthBonus; // 0x240(0x04)
	float SprintCameraBoomLengthBonus; // 0x244(0x04)
	SoftClassProperty SprintCameraShakeOverride; // 0x248(0x28)
};

// Class Killstreak.KSPlayerMod_MedPackSpeed
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_MedPackSpeed : public UKSPlayerMod {
	float MedPackSpeedMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_MeleeAttackSpeed
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_MeleeAttackSpeed : public UKSPlayerMod {
	float MeleeAttackSpeedMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_MeleeMoveSpeed
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_MeleeMoveSpeed : public UKSPlayerMod {
	float MeleeMoveSpeedMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_OnDownOtherEvent
// Size: 0x2e8 (Inherited: 0x238)
struct UKSPlayerMod_OnDownOtherEvent : public UKSPlayerMod {
	struct TMap<SoftClassProperty, int32_t> MeleeChargeBonusModePairs; // 0x238(0x50)
	int32_t MeleeChargeBonusDefault; // 0x288(0x04)
	char UnknownData_28C[0x4]; // 0x28c(0x04)
	struct TMap<SoftClassProperty, int32_t> HeadshotChargeBonusModePairs; // 0x290(0x50)
	int32_t HeadshotChargeBonusDefault; // 0x2e0(0x04)
	char UnknownData_2E4[0x4]; // 0x2e4(0x04)
};

// Class Killstreak.KSPlayerMod_PickupRange
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_PickupRange : public UKSPlayerMod {
	float PickupRadius; // 0x238(0x04)
	float PickupCylinderRadius; // 0x23c(0x04)
	bool CompleteRadiusOverride; // 0x240(0x01)
	char UnknownData_241[0x7]; // 0x241(0x07)

	float GetPickupRadius(); // Function Killstreak.KSPlayerMod_PickupRange.GetPickupRadius
};

// Class Killstreak.KSPlayerMod_PingOnOtherDowned
// Size: 0x280 (Inherited: 0x238)
struct UKSPlayerMod_PingOnOtherDowned : public UKSPlayerMod {
	int32_t NumberOfPings; // 0x238(0x04)
	int32_t NumberOfEnemiesToPing; // 0x23c(0x04)
	bool ShouldPingDownedPlayer; // 0x240(0x01)
	char UnknownData_241[0x3]; // 0x241(0x03)
	float SecondsToRevealPingedEnemies; // 0x244(0x04)
	float PingPeriod; // 0x248(0x04)
	float PingRadius; // 0x24c(0x04)
	bool PingAllEnemyTeams; // 0x250(0x01)
	bool BroadcastPingToAllies; // 0x251(0x01)
	bool DelayPingPastDownImmune; // 0x252(0x01)
	char UnknownData_253[0x5]; // 0x253(0x05)
	struct TSoftObjectPtr<struct UParticleSystem> EmitterTemplate; // 0x258(0x28)
};

// Class Killstreak.KSPlayerMod_ReloadAndRetrieve
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_ReloadAndRetrieve : public UKSPlayerMod {
	float RetrieveTimeMultiplier; // 0x238(0x04)
	float ReloadTimeMultiplier; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_ReloadTime
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_ReloadTime : public UKSPlayerMod {
	float ReloadTimeMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_RetrieveTime
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_RetrieveTime : public UKSPlayerMod {
	float RetrieveTimeMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_Revive
// Size: 0x268 (Inherited: 0x238)
struct UKSPlayerMod_Revive : public UKSPlayerMod {
	float ReviveTimeMultiplier; // 0x238(0x04)
	bool bHasTextOverride; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	struct FText ReviveText; // 0x240(0x18)
	struct FName ReviveInteractionMode; // 0x258(0x08)
	float HealChargeMultiplier; // 0x260(0x04)
	char UnknownData_264[0x4]; // 0x264(0x04)
};

// Class Killstreak.KSPlayerMod_ReviverDamageTaken
// Size: 0x310 (Inherited: 0x308)
struct UKSPlayerMod_ReviverDamageTaken : public UKSPlayerMod_DamageTaken {
	bool bCountRemoteRevives; // 0x308(0x01)
	char UnknownData_309[0x7]; // 0x309(0x07)
};

// Class Killstreak.KSPlayerMod_ShowTeamHovers
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_ShowTeamHovers : public UKSPlayerMod {
	bool ShowTeamHovers; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	int32_t Priority_ShowTeamHovers; // 0x23c(0x04)
	float HoverCharacterLingerExtraTime; // 0x240(0x04)
	int32_t Priority_HoverCharacterLingerExtraTime; // 0x244(0x04)
};

// Class Killstreak.KSPlayerMod_SprintSpeed
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_SprintSpeed : public UKSPlayerMod {
	float SprintSpeedMultiplier; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
};

// Class Killstreak.KSPlayerMod_StartingEquipment
// Size: 0x260 (Inherited: 0x238)
struct UKSPlayerMod_StartingEquipment : public UKSPlayerMod {
	struct TSoftObjectPtr<struct UKSItem> EquipmentAsset; // 0x238(0x28)
};

// Class Killstreak.KSPlayerMod_Undetectable
// Size: 0x240 (Inherited: 0x238)
struct UKSPlayerMod_Undetectable : public UKSPlayerMod {
	bool HiddenOnRadar; // 0x238(0x01)
	bool HiddenFromSonar; // 0x239(0x01)
	bool HiddenFromRemoteExplosives; // 0x23a(0x01)
	bool HiddenFromThermal; // 0x23b(0x01)
	bool HiddenFromShotDetection; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
};

// Class Killstreak.KSPlayerMod_VaultHeight
// Size: 0x248 (Inherited: 0x238)
struct UKSPlayerMod_VaultHeight : public UKSPlayerMod {
	float VaultHeight; // 0x238(0x04)
	struct FName VaultName; // 0x23c(0x08)
	char UnknownData_244[0x4]; // 0x244(0x04)
};

// Class Killstreak.KSPlayerModInst_WeaponAttachment
// Size: 0x1d0 (Inherited: 0x188)
struct UKSPlayerModInst_WeaponAttachment : public UKSPlayerModInstance {
	struct TArray<struct UKSWeaponAttachment*> AttachmentsToGive; // 0x188(0x10)
	struct TArray<enum class EItemSourceType> ItemSourcesThatAllowAttachmentGiving; // 0x198(0x10)
	struct TArray<enum class EItemSourceType> ItemSourcesThatForbidAttachmentGiving; // 0x1a8(0x10)
	bool bAttachmentsPersistOnDrop; // 0x1b8(0x01)
	char UnknownData_1B9[0x7]; // 0x1b9(0x07)
	struct TArray<struct FWeakObjectPtr<struct UKSWeaponAttachmentInstance>> GivenAttachmentInstances; // 0x1c0(0x10)

	void WeaponAddedToOwnerInventory(struct AKSWeapon* NewWeapon, struct FGiveItemParameters InGiveItemParameters); // Function Killstreak.KSPlayerModInst_WeaponAttachment.WeaponAddedToOwnerInventory
	void OnAttachmentRemoved(struct AKSWeapon* Weapon, struct UKSWeaponAttachmentInstance* RemovedInstance); // Function Killstreak.KSPlayerModInst_WeaponAttachment.OnAttachmentRemoved
	void OnAttachmentGivenSuccess(struct UKSItem* ItemToGive, struct UKSWeaponAttachmentInstance* GivenAttachment, struct FGiveItemParameters InGiveItemParameters); // Function Killstreak.KSPlayerModInst_WeaponAttachment.OnAttachmentGivenSuccess
	void OnAttachmentGiven(struct UKSItem* ItemToGive, struct UObject* GivenObject, struct FGiveItemParameters InGiveItemParameters, bool bSuccess); // Function Killstreak.KSPlayerModInst_WeaponAttachment.OnAttachmentGiven
};

// Class Killstreak.KSWidgetInfoActor
// Size: 0x248 (Inherited: 0x220)
struct AKSWidgetInfoActor : public AInfo {
	struct TArray<struct FKSWidgetInfoParams> WidgetParamsToCreate; // 0x220(0x10)
	struct AKSPlayerController* PlayerForWidget; // 0x230(0x08)
	char UnknownData_238[0x10]; // 0x238(0x10)

	void OnHUDSetup(); // Function Killstreak.KSWidgetInfoActor.OnHUDSetup
};

// Class Killstreak.KSPlayerShop
// Size: 0x478 (Inherited: 0x248)
struct AKSPlayerShop : public AKSWidgetInfoActor {
	char UnknownData_248[0x10]; // 0x248(0x10)
	struct AKSPlayerState* PlayerState; // 0x258(0x08)
	struct FMulticastInlineDelegate OnPurchaseAcknowledged; // 0x260(0x10)
	struct FMulticastInlineDelegate OnRefundAcknowledged; // 0x270(0x10)
	struct FMulticastInlineDelegate OnShopManifestChanged; // 0x280(0x10)
	struct FMulticastInlineDelegate OnShopItemChanged; // 0x290(0x10)
	struct FMulticastInlineDelegate OnShopItemPurchased; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnShopItemRefunded; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnShopOpened; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnShopClosed; // 0x2d0(0x10)
	float CashPerKSPoint; // 0x2e0(0x04)
	bool bSkipCashSpend; // 0x2e4(0x01)
	char UnknownData_2E5[0x3]; // 0x2e5(0x03)
	struct TArray<struct FShopItem> ShopManifest; // 0x2e8(0x10)
	struct FShopManifest ShopManifestMap; // 0x2f8(0x120)
	int32_t NextTransactionId; // 0x418(0x04)
	char UnknownData_41C[0x2d]; // 0x41c(0x2d)
	bool bShopInitialized; // 0x449(0x01)
	char UnknownData_44A[0x2]; // 0x44a(0x02)
	uint32_t MinimumUndoableTransactionId; // 0x44c(0x04)
	struct UKSPlayerShopHistoryComponent* PlayerShopHistoryComponent; // 0x450(0x08)
	bool bAvailable; // 0x458(0x01)
	char UnknownData_459[0x7]; // 0x459(0x07)
	struct FMulticastInlineDelegate OnShopAvailabilityChanged; // 0x460(0x10)
	char UnknownData_470[0x8]; // 0x470(0x08)

	void ZoneLeftByPlayer(struct AKSPlayerState* InPlayerState); // Function Killstreak.KSPlayerShop.ZoneLeftByPlayer
	void ZoneEnteredByPlayer(struct AKSPlayerState* InPlayerState); // Function Killstreak.KSPlayerShop.ZoneEnteredByPlayer
	void Undo(); // Function Killstreak.KSPlayerShop.Undo
	void TryToSetItemActive(enum class EShopItemType ShopItemType, bool bActive); // Function Killstreak.KSPlayerShop.TryToSetItemActive
	void TryToPurchaseItem(enum class EShopItemType ShopItemType); // Function Killstreak.KSPlayerShop.TryToPurchaseItem
	void ToggleShop(); // Function Killstreak.KSPlayerShop.ToggleShop
	void ServerSetItemActive(struct FPlayerShopTransaction InTransactionInfo, bool bIsActive); // Function Killstreak.KSPlayerShop.ServerSetItemActive
	void ServerAttemptRefund(struct FPlayerShopTransaction InRefundTransactionInfo, struct FPlayerShopTransaction InPurchaseTransactionInfo); // Function Killstreak.KSPlayerShop.ServerAttemptRefund
	void ServerAttemptPurchase(struct FPlayerShopTransaction InTransactionInfo); // Function Killstreak.KSPlayerShop.ServerAttemptPurchase
	void OpenShop(); // Function Killstreak.KSPlayerShop.OpenShop
	void OnRep_bAvailable(); // Function Killstreak.KSPlayerShop.OnRep_bAvailable
	void OnPlayerScoreChanged(struct FKSScoreChangeEvent ScoreEvent); // Function Killstreak.KSPlayerShop.OnPlayerScoreChanged
	void OnPlayerJobChanged(); // Function Killstreak.KSPlayerShop.OnPlayerJobChanged
	void OnOwnerDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSPlayerShop.OnOwnerDestroyed
	void NotifyShopItemRefunded(struct FShopItem ShopItem); // Function Killstreak.KSPlayerShop.NotifyShopItemRefunded
	void NotifyShopItemPurchased(struct FShopItem ShopItem); // Function Killstreak.KSPlayerShop.NotifyShopItemPurchased
	void NotifyShopItemChanged(struct FShopItem ShopItem); // Function Killstreak.KSPlayerShop.NotifyShopItemChanged
	void InitializeShopItems(); // Function Killstreak.KSPlayerShop.InitializeShopItems
	bool GetShopItemByType(enum class EShopItemType ShopItemType, struct FShopItem Item); // Function Killstreak.KSPlayerShop.GetShopItemByType
	bool GetShopAvailability(); // Function Killstreak.KSPlayerShop.GetShopAvailability
	int32_t GetPriceOfItem(struct UKSItem* InItem); // Function Killstreak.KSPlayerShop.GetPriceOfItem
	void CloseShop(); // Function Killstreak.KSPlayerShop.CloseShop
	void ClientRefundAcknowledge(struct FPlayerShopTransaction InRefundTransactionInfo, struct FPlayerShopTransaction InPurchaseTransactionInfo, bool bSuccess); // Function Killstreak.KSPlayerShop.ClientRefundAcknowledge
	void ClientPurchaseAcknowledge(struct FPlayerShopTransaction InTransactionInfo, bool bSuccess); // Function Killstreak.KSPlayerShop.ClientPurchaseAcknowledge
	bool CanRefundItemNow(enum class EShopItemType ShopItemType); // Function Killstreak.KSPlayerShop.CanRefundItemNow
	bool CanPurchaseItemNow(enum class EShopItemType ShopItemType, bool bOutAvailable, bool bCanAfford); // Function Killstreak.KSPlayerShop.CanPurchaseItemNow
};

// Class Killstreak.KSPlayerShopHistoryComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UKSPlayerShopHistoryComponent : public UActorComponent {
	char UnknownData_B0[0x10]; // 0xb0(0x10)

	void ClearTransactionHistory(); // Function Killstreak.KSPlayerShopHistoryComponent.ClearTransactionHistory
};

// Class Killstreak.KSPlayerShopZone
// Size: 0x240 (Inherited: 0x220)
struct AKSPlayerShopZone : public AActor {
	struct FMulticastInlineDelegate OnZoneEntered; // 0x220(0x10)
	struct FMulticastInlineDelegate OnZoneLeft; // 0x230(0x10)

	void ZoneLeftByPlayer(struct AKSPlayerState* PlayerState); // Function Killstreak.KSPlayerShopZone.ZoneLeftByPlayer
	void ZoneEnteredByPlayer(struct AKSPlayerState* PlayerState); // Function Killstreak.KSPlayerShopZone.ZoneEnteredByPlayer
	void OnPlayerStateDestroyed(struct AActor* DestroyedPlayerState); // Function Killstreak.KSPlayerShopZone.OnPlayerStateDestroyed
};

// Class Killstreak.KSPlayerShotListener
// Size: 0x190 (Inherited: 0xb0)
struct UKSPlayerShotListener : public UActorComponent {
	struct FMulticastInlineDelegate MinimapShotNofify; // 0xb0(0x10)
	char UnknownData_C0[0x58]; // 0xc0(0x58)
	SoftClassProperty MinimapDisplayWidget; // 0x118(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x140(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x168(0x28)

	void OnKSGameStateDestroyed(struct AActor* Actor); // Function Killstreak.KSPlayerShotListener.OnKSGameStateDestroyed
	void ClientRecieveShotInfo(struct FKSClientShotInfo ShotInfo); // Function Killstreak.KSPlayerShotListener.ClientRecieveShotInfo
	void Authority_ProcessShotInfo(struct FKSGlobalShotInfo ShotInfo); // Function Killstreak.KSPlayerShotListener.Authority_ProcessShotInfo
};

// Class Killstreak.KSPlayerStart
// Size: 0x2d0 (Inherited: 0x250)
struct AKSPlayerStart : public APlayerStart {
	char UnknownData_250[0x10]; // 0x250(0x10)
	bool bInitialSpawnPoint; // 0x260(0x01)
	bool bRespawnPoint; // 0x261(0x01)
	char UnknownData_262[0x2]; // 0x262(0x02)
	int32_t SideNum; // 0x264(0x04)
	bool bBotOnly; // 0x268(0x01)
	bool bPlayerOnly; // 0x269(0x01)
	char UnknownData_26A[0x6]; // 0x26a(0x06)
	struct TArray<struct UKSItem*> InventoryToGive; // 0x270(0x10)
	struct TArray<struct UKSItem*> InitialSpawnInventoryToGive; // 0x280(0x10)
	struct TArray<struct UKSItem*> RespawnInventoryToGive; // 0x290(0x10)
	struct TArray<struct UKSPlayerMod*> ModsToGive; // 0x2a0(0x10)
	struct TArray<struct UKSPlayerMod*> InitialSpawnModsToGive; // 0x2b0(0x10)
	struct TArray<struct UKSPlayerMod*> RespawnModsToGive; // 0x2c0(0x10)

	void SetSideNum(int32_t InSideNum); // Function Killstreak.KSPlayerStart.SetSideNum
	void Init(struct AKSCharacter* Character); // Function Killstreak.KSPlayerStart.Init
	int32_t GetSideNum(); // Function Killstreak.KSPlayerStart.GetSideNum
	void CharacterLoadoutRestored(struct AKSCharacter* Character); // Function Killstreak.KSPlayerStart.CharacterLoadoutRestored
};

// Class Killstreak.KSPlayerState
// Size: 0xa00 (Inherited: 0x320)
struct AKSPlayerState : public APlayerState {
	char UnknownData_320[0x8]; // 0x320(0x08)
	bool bIsDemoRecording; // 0x328(0x01)
	char UnknownData_329[0x7]; // 0x329(0x07)
	struct FMulticastInlineDelegate OnCharacterOwnerChangedDel; // 0x330(0x10)
	struct FMulticastInlineDelegate OnBackupCharacterOwnerChangedDel; // 0x340(0x10)
	struct FMulticastInlineDelegate OnFriendlyFireInflicted; // 0x350(0x10)
	float TrackedFriendlyFireDamage; // 0x360(0x04)
	bool bReverseFriendlyFireEnabled; // 0x364(0x01)
	char UnknownData_365[0x3]; // 0x365(0x03)
	float PredictionFudge; // 0x368(0x04)
	float MaxPredictionPing; // 0x36c(0x04)
	struct FMulticastInlineDelegate OnTrackedActorBegin; // 0x370(0x10)
	struct FMulticastInlineDelegate OnTrackedActorEnd; // 0x380(0x10)
	enum class EIsPlayer PlayerType; // 0x390(0x01)
	char UnknownData_391[0x7]; // 0x391(0x07)
	struct AKSTeamState* r_Team; // 0x398(0x08)
	char UnknownData_3A0[0x8]; // 0x3a0(0x08)
	int32_t BackupTeamNum; // 0x3a8(0x04)
	char UnknownData_3AC[0x4]; // 0x3ac(0x04)
	struct FMulticastInlineDelegate OnKSPlayerStateTeamChangedDel; // 0x3b0(0x10)
	char UnknownData_3C0[0x18]; // 0x3c0(0x18)
	struct FMulticastInlineDelegate OnKSPlayerStateNameChangedDel; // 0x3d8(0x10)
	char UnknownData_3E8[0x18]; // 0x3e8(0x18)
	struct FWeakObjectPtr<struct AKSCharacterBase> CharacterOwner; // 0x400(0x08)
	struct FWeakObjectPtr<struct AKSCharacterBase> BackupCharacterOwner; // 0x408(0x08)
	char UnknownData_410[0x30]; // 0x410(0x30)
	enum class EEliminationState EliminatedState; // 0x440(0x01)
	char UnknownData_441[0x7]; // 0x441(0x07)
	struct FMulticastInlineDelegate OnPlayerEliminated; // 0x448(0x10)
	struct FMulticastInlineDelegate OnPlayerInPlay; // 0x458(0x10)
	bool bDowned; // 0x468(0x01)
	char UnknownData_469[0x7]; // 0x469(0x07)
	struct FMulticastInlineDelegate OnPlayerDownedChangedDel; // 0x470(0x10)
	struct FVector LastKnownLocation; // 0x480(0x0c)
	bool bIsPremiumBoosted; // 0x48c(0x01)
	bool bUIRelevant; // 0x48d(0x01)
	bool bMarkedUIIrrelevant; // 0x48e(0x01)
	char UnknownData_48F[0x1]; // 0x48f(0x01)
	struct FSerializedMctsNetId r_ReplicatedNetId; // 0x490(0x08)
	char UnknownData_498[0x18]; // 0x498(0x18)
	struct FMulticastInlineDelegate OnRespawnTicketsChanged; // 0x4b0(0x10)
	int32_t RespawnTickets; // 0x4c0(0x04)
	char UnknownData_4C4[0x4]; // 0x4c4(0x04)
	struct UKSTimerComponent* RespawnTimer; // 0x4c8(0x08)
	struct UKSTimerComponent* DisallowGiveUpTimer; // 0x4d0(0x08)
	struct FMulticastInlineDelegate OnRespawnTimerTick; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnRespawnTimerActive; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnRespawnTimerComplete; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnDisallowGiveUpTimerTick; // 0x508(0x10)
	struct FMulticastInlineDelegate OnDisallowGiveUpTimerActive; // 0x518(0x10)
	struct FMulticastInlineDelegate OnDisallowGiveUpTimerComplete; // 0x528(0x10)
	struct FMulticastInlineDelegate OnScoreChanged; // 0x538(0x10)
	struct FMulticastInlineDelegate OnMultiDownAchievedDel; // 0x548(0x10)
	char UnknownData_558[0x4]; // 0x558(0x04)
	int32_t Kills; // 0x55c(0x04)
	int32_t deaths; // 0x560(0x04)
	int32_t Assists; // 0x564(0x04)
	int32_t downs; // 0x568(0x04)
	int32_t DownSpree; // 0x56c(0x04)
	int32_t Revives; // 0x570(0x04)
	int32_t Eliminations; // 0x574(0x04)
	int32_t Headshots; // 0x578(0x04)
	int32_t Hacks; // 0x57c(0x04)
	int32_t Dehacks; // 0x580(0x04)
	char UnknownData_584[0x1c]; // 0x584(0x1c)
	struct FMulticastInlineDelegate OnUIRelevantPlayerStateChangedDel; // 0x5a0(0x10)
	struct FKSScoreChangeList ScoreChangeList; // 0x5b0(0x90)
	struct UKSPlayerMatchStats* PreviewRecordedStats; // 0x640(0x08)
	int32_t Money; // 0x648(0x04)
	int32_t LastMoney; // 0x64c(0x04)
	struct FMulticastInlineDelegate OnMoneyChanged; // 0x650(0x10)
	bool bMoneyGivesCharge; // 0x660(0x01)
	char UnknownData_661[0x3]; // 0x661(0x03)
	int32_t Cash; // 0x664(0x04)
	int32_t LastCash; // 0x668(0x04)
	int32_t TotalCashEarned; // 0x66c(0x04)
	int32_t LastCashEarned; // 0x670(0x04)
	char UnknownData_674[0x4]; // 0x674(0x04)
	struct FMulticastInlineDelegate OnCashChanged; // 0x678(0x10)
	struct FMulticastInlineDelegate OnCashEarnedChanged; // 0x688(0x10)
	struct FMulticastInlineDelegate OnCashChangeEvent; // 0x698(0x10)
	struct FKSCashChangeList CashChangeList; // 0x6a8(0x90)
	bool bShouldRestoreInventory; // 0x738(0x01)
	char UnknownData_739[0x17]; // 0x739(0x17)
	struct FMulticastInlineDelegate OnPlayerModCharge; // 0x750(0x10)
	struct FMulticastInlineDelegate OnNextModTier; // 0x760(0x10)
	struct FMulticastInlineDelegate OnModSelectConfirm; // 0x770(0x10)
	char UnknownData_780[0x8]; // 0x780(0x08)
	bool bOnlyChargeModsWhenAlive; // 0x788(0x01)
	char UnknownData_789[0x17]; // 0x789(0x17)
	struct FMulticastInlineDelegate OnModAddedDel; // 0x7a0(0x10)
	char UnknownData_7B0[0x18]; // 0x7b0(0x18)
	struct FMulticastInlineDelegate OnModRemovedDel; // 0x7c8(0x10)
	char UnknownData_7D8[0x18]; // 0x7d8(0x18)
	struct TArray<struct UKSPlayerModInstance*> ActiveMods; // 0x7f0(0x10)
	struct TArray<struct UKSSpecialty*> Specialties; // 0x800(0x10)
	struct FMulticastInlineDelegate OnJobChanged; // 0x810(0x10)
	struct UKSJobItem* JobItem; // 0x820(0x08)
	int32_t JobMasteryXpLevel; // 0x828(0x04)
	char UnknownData_82C[0x4]; // 0x82c(0x04)
	struct FMulticastInlineDelegate OnJobLoadFinishedDel; // 0x830(0x10)
	char UnknownData_840[0x18]; // 0x840(0x18)
	struct FMulticastInlineDelegate OnJobMasteryXpLevelChanged; // 0x858(0x10)
	char UnknownData_868[0x8]; // 0x868(0x08)
	struct UKSSkinBundle* SkinItem; // 0x870(0x08)
	struct FMulticastInlineDelegate OnSkinChanged; // 0x878(0x10)
	struct UKSLoadoutClass* LoadoutClass; // 0x888(0x08)
	struct TArray<struct AKSItemDrop*> ItemsDroppedOnDeath; // 0x890(0x10)
	char UnknownData_8A0[0x18]; // 0x8a0(0x18)
	enum class EKSCharacterGender Gender; // 0x8b8(0x01)
	enum class EKSCharacterGender LocalGender; // 0x8b9(0x01)
	char UnknownData_8BA[0x6]; // 0x8ba(0x06)
	struct FGameplayTagContainer SkinTagContainer; // 0x8c0(0x20)
	char UnknownData_8E0[0x18]; // 0x8e0(0x18)
	bool bStale; // 0x8f8(0x01)
	char UnknownData_8F9[0x7]; // 0x8f9(0x07)
	SoftClassProperty MinimapDisplayWidget; // 0x900(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x928(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x950(0x28)
	struct FMulticastInlineDelegate OnShopItemPurchased; // 0x978(0x10)
	struct FMulticastInlineDelegate OnShopItemRefunded; // 0x988(0x10)
	struct FMulticastInlineDelegate OnPersistentPlayerDataChanged; // 0x998(0x10)
	char UnknownData_9A8[0x20]; // 0x9a8(0x20)
	bool bPollInProgress; // 0x9c8(0x01)
	bool bHasVoted; // 0x9c9(0x01)
	char UnknownData_9CA[0x6]; // 0x9ca(0x06)
	struct UKSPollBase* CurrentPollType; // 0x9d0(0x08)
	struct FKSPollData CachedPollData; // 0x9d8(0x10)
	bool bCachedLocallyViewed; // 0x9e8(0x01)
	char UnknownData_9E9[0x7]; // 0x9e9(0x07)
	struct FMulticastInlineDelegate OnCharacterLocalViewChange; // 0x9f0(0x10)

	void UpdatePollVotes(struct FKSPollData NewPollData); // Function Killstreak.KSPlayerState.UpdatePollVotes
	void TryToBroadCastUIRelevantInfoHasChanged(); // Function Killstreak.KSPlayerState.TryToBroadCastUIRelevantInfoHasChanged
	bool SpendCash(int32_t cost); // Function Killstreak.KSPlayerState.SpendCash
	void SpawnedDropDestroyed(struct AActor* Drop); // Function Killstreak.KSPlayerState.SpawnedDropDestroyed
	void SetMoney(int32_t NewAmount); // Function Killstreak.KSPlayerState.SetMoney
	void ServerPlayerProposePoll(struct UKSPollBase* PollType); // Function Killstreak.KSPlayerState.ServerPlayerProposePoll
	void ServerPlayerCastVote(bool bVoteInFavor); // Function Killstreak.KSPlayerState.ServerPlayerCastVote
	void SelectActiveMod(struct UKSPlayerMod* NewMod); // Function Killstreak.KSPlayerState.SelectActiveMod
	void RespawnTimerTick(float Seconds); // Function Killstreak.KSPlayerState.RespawnTimerTick
	void RespawnTimerComplete(); // Function Killstreak.KSPlayerState.RespawnTimerComplete
	void RespawnTimerActive(bool bActive); // Function Killstreak.KSPlayerState.RespawnTimerActive
	void ResetElimination(); // Function Killstreak.KSPlayerState.ResetElimination
	bool RemoveMod(struct UKSPlayerMod* Mod, bool RemoveAll); // Function Killstreak.KSPlayerState.RemoveMod
	void PollEnded(struct FKSPollResults PollResults); // Function Killstreak.KSPlayerState.PollEnded
	bool PlayerProposePoll(struct UKSPollBase* PollType); // Function Killstreak.KSPlayerState.PlayerProposePoll
	void PlayerCastVote(bool bVoteInFavor); // Function Killstreak.KSPlayerState.PlayerCastVote
	void OnTeamUpdated(); // Function Killstreak.KSPlayerState.OnTeamUpdated
	void OnReverseFriendlyFireEnabled(); // Function Killstreak.KSPlayerState.OnReverseFriendlyFireEnabled
	void OnRep_TotalCashEarned(); // Function Killstreak.KSPlayerState.OnRep_TotalCashEarned
	void OnRep_Specialties(); // Function Killstreak.KSPlayerState.OnRep_Specialties
	void OnRep_SkinItem(); // Function Killstreak.KSPlayerState.OnRep_SkinItem
	void OnRep_RespawnTimer(); // Function Killstreak.KSPlayerState.OnRep_RespawnTimer
	void OnRep_RespawnTickets(); // Function Killstreak.KSPlayerState.OnRep_RespawnTickets
	void OnRep_PlayerType(); // Function Killstreak.KSPlayerState.OnRep_PlayerType
	void OnRep_Money(); // Function Killstreak.KSPlayerState.OnRep_Money
	void OnRep_MctsNetId(); // Function Killstreak.KSPlayerState.OnRep_MctsNetId
	void OnRep_LoadoutClass(); // Function Killstreak.KSPlayerState.OnRep_LoadoutClass
	void OnRep_JobMasteryXpLevel(); // Function Killstreak.KSPlayerState.OnRep_JobMasteryXpLevel
	void OnRep_JobItem(); // Function Killstreak.KSPlayerState.OnRep_JobItem
	void OnRep_HasVoted(); // Function Killstreak.KSPlayerState.OnRep_HasVoted
	void OnRep_Gender(); // Function Killstreak.KSPlayerState.OnRep_Gender
	void OnRep_Eliminated(); // Function Killstreak.KSPlayerState.OnRep_Eliminated
	void OnRep_Downed(); // Function Killstreak.KSPlayerState.OnRep_Downed
	void OnRep_DisallowGiveUpTimer(); // Function Killstreak.KSPlayerState.OnRep_DisallowGiveUpTimer
	void OnRep_CurrentPollType(); // Function Killstreak.KSPlayerState.OnRep_CurrentPollType
	void OnRep_Cash(); // Function Killstreak.KSPlayerState.OnRep_Cash
	void OnRep_CachedPollData(); // Function Killstreak.KSPlayerState.OnRep_CachedPollData
	void OnJobMasteryInventoryUpdated(struct FInventoryId InventoryId); // Function Killstreak.KSPlayerState.OnJobMasteryInventoryUpdated
	void OnDeathDrop(struct UKSItem* InItem, struct AKSItemDrop* InDrop); // Function Killstreak.KSPlayerState.OnDeathDrop
	void NotifyScoreChange(struct FKSScoreChangeEvent Event); // Function Killstreak.KSPlayerState.NotifyScoreChange
	void NotifyCashChange(struct FKSScoreChangeEvent Event); // Function Killstreak.KSPlayerState.NotifyCashChange
	void LoadoutSetSkin(); // Function Killstreak.KSPlayerState.LoadoutSetSkin
	bool IsWaitingForGiveUp(); // Function Killstreak.KSPlayerState.IsWaitingForGiveUp
	bool IsUIRelevant(); // Function Killstreak.KSPlayerState.IsUIRelevant
	bool IsReverseFriendlyFireEnabled(); // Function Killstreak.KSPlayerState.IsReverseFriendlyFireEnabled
	bool IsRespawning(); // Function Killstreak.KSPlayerState.IsRespawning
	bool IsPremiumBoosted(); // Function Killstreak.KSPlayerState.IsPremiumBoosted
	bool IsPollInProgress(); // Function Killstreak.KSPlayerState.IsPollInProgress
	bool IsPlayer(); // Function Killstreak.KSPlayerState.IsPlayer
	bool IsLossPreventionEnabled(); // Function Killstreak.KSPlayerState.IsLossPreventionEnabled
	bool IsInPlay(); // Function Killstreak.KSPlayerState.IsInPlay
	bool IsInParty(); // Function Killstreak.KSPlayerState.IsInParty
	bool IsEliminated(); // Function Killstreak.KSPlayerState.IsEliminated
	bool IsDowned(); // Function Killstreak.KSPlayerState.IsDowned
	bool IsCharacterLocallyViewed(); // Function Killstreak.KSPlayerState.IsCharacterLocallyViewed
	bool HasRole(enum class ECharacterRole RoleToCheck); // Function Killstreak.KSPlayerState.HasRole
	bool HasModAny(struct TArray<struct UKSPlayerMod*> TestPlayerMods); // Function Killstreak.KSPlayerState.HasModAny
	bool HasMod(struct UKSPlayerMod* TestPlayerMod); // Function Killstreak.KSPlayerState.HasMod
	bool HasHideTarget(); // Function Killstreak.KSPlayerState.HasHideTarget
	bool GiveModInstance(struct UKSPlayerMod* Mod, struct AKSPlayerState* ModInstigator, struct UKSPlayerModInstance* Instance, bool Unique); // Function Killstreak.KSPlayerState.GiveModInstance
	bool GiveMod(struct UKSPlayerMod* Mod, struct AKSPlayerState* ModInstigator, bool Unique); // Function Killstreak.KSPlayerState.GiveMod
	int32_t GetTotalCashEarned(); // Function Killstreak.KSPlayerState.GetTotalCashEarned
	float GetTimeUntilGiveUpAllowed(); // Function Killstreak.KSPlayerState.GetTimeUntilGiveUpAllowed
	bool GetSpecialties(struct TArray<struct UKSSpecialty*> OutSpecialties); // Function Killstreak.KSPlayerState.GetSpecialties
	struct UKSSkinBundle* GetSkinItem(); // Function Killstreak.KSPlayerState.GetSkinItem
	int32_t GetScore(); // Function Killstreak.KSPlayerState.GetScore
	int32_t GetRevives(); // Function Killstreak.KSPlayerState.GetRevives
	int32_t GetRespawnTickets(); // Function Killstreak.KSPlayerState.GetRespawnTickets
	float GetRemainingRespawnTime(); // Function Killstreak.KSPlayerState.GetRemainingRespawnTime
	float GetRankedXpWinBaseValue(); // Function Killstreak.KSPlayerState.GetRankedXpWinBaseValue
	float GetRankedXpMinBonusClamp(); // Function Killstreak.KSPlayerState.GetRankedXpMinBonusClamp
	float GetRankedXpMaxBonusClamp(); // Function Killstreak.KSPlayerState.GetRankedXpMaxBonusClamp
	float GetRankedXpLossBaseValue(); // Function Killstreak.KSPlayerState.GetRankedXpLossBaseValue
	float GetRankDifferenceMultiplier(); // Function Killstreak.KSPlayerState.GetRankDifferenceMultiplier
	struct UPUMG_PlayerInfo* GetPlayerInfo(struct APUMG_HUD* HUD); // Function Killstreak.KSPlayerState.GetPlayerInfo
	int32_t GetPlayerId(); // Function Killstreak.KSPlayerState.GetPlayerId
	struct UKSPersistentPlayerData* GetPersistentPlayerData(); // Function Killstreak.KSPlayerState.GetPersistentPlayerData
	int32_t GetPartySize(); // Function Killstreak.KSPlayerState.GetPartySize
	void GetModTierProgress(int32_t Current, int32_t Target); // Function Killstreak.KSPlayerState.GetModTierProgress
	struct TArray<struct UKSPlayerMod*> GetModOptionsOfTier(int32_t Tier); // Function Killstreak.KSPlayerState.GetModOptionsOfTier
	bool GetModInstancesOfType(enum class EPlayerModType Type, struct TArray<struct UKSPlayerModInstance*> OutMods); // Function Killstreak.KSPlayerState.GetModInstancesOfType
	bool GetModInstances(struct TArray<struct UKSPlayerModInstance*> OutMods); // Function Killstreak.KSPlayerState.GetModInstances
	int32_t GetMmrZoneRankedLevel(); // Function Killstreak.KSPlayerState.GetMmrZoneRankedLevel
	int64_t GetMctsPlayerId(); // Function Killstreak.KSPlayerState.GetMctsPlayerId
	bool GetLoadoutClass(struct UKSLoadoutClass* OutLoadoutClass); // Function Killstreak.KSPlayerState.GetLoadoutClass
	int32_t GetKills(); // Function Killstreak.KSPlayerState.GetKills
	int32_t GetJobMasteryLevel(); // Function Killstreak.KSPlayerState.GetJobMasteryLevel
	struct UKSJobItem* GetJob(); // Function Killstreak.KSPlayerState.GetJob
	struct TArray<struct AKSItemDrop*> GetItemsDroppedOnDeath(); // Function Killstreak.KSPlayerState.GetItemsDroppedOnDeath
	int32_t GetHeadshots(); // Function Killstreak.KSPlayerState.GetHeadshots
	int32_t GetHacks(); // Function Killstreak.KSPlayerState.GetHacks
	int32_t GetEliminations(); // Function Killstreak.KSPlayerState.GetEliminations
	enum class EEliminationState GetEliminatedState(); // Function Killstreak.KSPlayerState.GetEliminatedState
	int32_t GetDownSpree(); // Function Killstreak.KSPlayerState.GetDownSpree
	int32_t GetDowns(); // Function Killstreak.KSPlayerState.GetDowns
	float GetDistanceSprinted(); // Function Killstreak.KSPlayerState.GetDistanceSprinted
	int32_t GetDehacks(); // Function Killstreak.KSPlayerState.GetDehacks
	int32_t GetDeaths(); // Function Killstreak.KSPlayerState.GetDeaths
	float GetCurrentTimePlayed(); // Function Killstreak.KSPlayerState.GetCurrentTimePlayed
	int32_t GetCurrentRankedLevel(); // Function Killstreak.KSPlayerState.GetCurrentRankedLevel
	int32_t GetCurrentModTier(); // Function Killstreak.KSPlayerState.GetCurrentModTier
	int32_t GetCurrentCash(); // Function Killstreak.KSPlayerState.GetCurrentCash
	struct AKSCharacterBase* GetCharacterOwner(); // Function Killstreak.KSPlayerState.GetCharacterOwner
	struct TMap<struct FString, float> GetBonusProgressionMultiplierFromEvents(struct FString Key); // Function Killstreak.KSPlayerState.GetBonusProgressionMultiplierFromEvents
	float GetBonusProgressionMultiplier(struct FString Key); // Function Killstreak.KSPlayerState.GetBonusProgressionMultiplier
	struct AKSCharacterBase* GetBestCharacterOwner(); // Function Killstreak.KSPlayerState.GetBestCharacterOwner
	struct AKSCharacterBase* GetBackupCharacterOwner(); // Function Killstreak.KSPlayerState.GetBackupCharacterOwner
	int32_t GetAssists(); // Function Killstreak.KSPlayerState.GetAssists
	struct TArray<struct UKSPlayerMod*> GetActiveMods(); // Function Killstreak.KSPlayerState.GetActiveMods
	bool GetActivatableMods(struct TArray<struct UKSModInst_Activated*> OutMods, bool bIncludeChildMods); // Function Killstreak.KSPlayerState.GetActivatableMods
	void FriendlyFirePenalty(bool IsKilled, struct AKSPlayerState* Victim); // Function Killstreak.KSPlayerState.FriendlyFirePenalty
	void EnterPlay(bool bSkipResetEliminatedOrDownedTest, bool bSpendTicket); // Function Killstreak.KSPlayerState.EnterPlay
	void EliminatePlayer(); // Function Killstreak.KSPlayerState.EliminatePlayer
	void EarnCash(int32_t Earnings, bool bShareWithTeam, struct FText Reason, bool bBonus); // Function Killstreak.KSPlayerState.EarnCash
	void DisallowGiveUpTimerTick(float Seconds); // Function Killstreak.KSPlayerState.DisallowGiveUpTimerTick
	void DisallowGiveUpTimerComplete(); // Function Killstreak.KSPlayerState.DisallowGiveUpTimerComplete
	void DisallowGiveUpTimerActive(bool bActive); // Function Killstreak.KSPlayerState.DisallowGiveUpTimerActive
	void ClientPollProposalFailed(); // Function Killstreak.KSPlayerState.ClientPollProposalFailed
	void ClientNotifyFriendlyFireDamageApplied(float Amount); // Function Killstreak.KSPlayerState.ClientNotifyFriendlyFireDamageApplied
	void ClientNotifyExceededReverseFriendlyFireThreshold(); // Function Killstreak.KSPlayerState.ClientNotifyExceededReverseFriendlyFireThreshold
	void ChangeMoney(int32_t Delta, struct FText Reason, bool bBonus); // Function Killstreak.KSPlayerState.ChangeMoney
	bool AnyActivatableModsActive(); // Function Killstreak.KSPlayerState.AnyActivatableModsActive
	void AddScore(int32_t InScore); // Function Killstreak.KSPlayerState.AddScore
	void AddRevive(int32_t Count); // Function Killstreak.KSPlayerState.AddRevive
	void AddPerSecondCharge(); // Function Killstreak.KSPlayerState.AddPerSecondCharge
	void AddKill(int32_t Count); // Function Killstreak.KSPlayerState.AddKill
	void AddHeadshot(int32_t Count); // Function Killstreak.KSPlayerState.AddHeadshot
	void AddHack(int32_t Count); // Function Killstreak.KSPlayerState.AddHack
	void AddElimination(int32_t Count); // Function Killstreak.KSPlayerState.AddElimination
	void AddDown(int32_t Count); // Function Killstreak.KSPlayerState.AddDown
	void AddDehack(int32_t Count); // Function Killstreak.KSPlayerState.AddDehack
	void AddDeath(int32_t Count); // Function Killstreak.KSPlayerState.AddDeath
	void AddAssist(int32_t Count); // Function Killstreak.KSPlayerState.AddAssist
	bool ActivatableModAtIndexActive(int32_t AbilityIndex); // Function Killstreak.KSPlayerState.ActivatableModAtIndexActive
};

// Class Killstreak.KSPlayerState_Heist
// Size: 0xa08 (Inherited: 0xa00)
struct AKSPlayerState_Heist : public AKSPlayerState {
	int32_t HardCashAmount; // 0xa00(0x04)
	int32_t SoftCashAmount; // 0xa04(0x04)

	int32_t GetSoftCash(); // Function Killstreak.KSPlayerState_Heist.GetSoftCash
	int32_t GetHardCash(); // Function Killstreak.KSPlayerState_Heist.GetHardCash
};

// Class Killstreak.KSPlayerStatsActivity
// Size: 0x2b8 (Inherited: 0x2b0)
struct UKSPlayerStatsActivity : public UKSActivity {
	enum class EKSPlayerStatsActivityType ReferenceType; // 0x2b0(0x01)
	char UnknownData_2B1[0x7]; // 0x2b1(0x07)
};

// Class Killstreak.KSPollBase
// Size: 0xe0 (Inherited: 0x28)
struct UKSPollBase : public UObject {
	enum class EPollAudience PollAudience; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FText PollTitle; // 0x30(0x18)
	struct FText PollSuccessfulMessage; // 0x48(0x18)
	struct FText PollUnsuccessfulMessage; // 0x60(0x18)
	struct FText AffirmativeOption; // 0x78(0x18)
	struct FText NegativeOption; // 0x90(0x18)
	struct FText AffirmativeOptionVoteCastMessage; // 0xa8(0x18)
	struct FText NegativeOptionVoteCastMessage; // 0xc0(0x18)
	float PollLengthInSeconds; // 0xd8(0x04)
	char UnknownData_DC[0x4]; // 0xdc(0x04)

	void OnPollStarted(struct AKSGameState* GameState, int32_t TeamNum); // Function Killstreak.KSPollBase.OnPollStarted
	void OnPollPassed(struct AKSGameState* GameState, int32_t TeamNum); // Function Killstreak.KSPollBase.OnPollPassed
	void OnPollFailed(struct AKSGameState* GameState, int32_t TeamNum); // Function Killstreak.KSPollBase.OnPollFailed
	int32_t GetNumberOfVotesToEnd(int32_t VoterCount, bool bIsFullTeam); // Function Killstreak.KSPollBase.GetNumberOfVotesToEnd
	bool CanPlayerProposeThisPoll(struct AKSPlayerState* Player); // Function Killstreak.KSPollBase.CanPlayerProposeThisPoll
	bool CanGameProposeThisPoll(struct AKSGameState* GameState); // Function Killstreak.KSPollBase.CanGameProposeThisPoll
};

// Class Killstreak.KSPowerUp
// Size: 0x248 (Inherited: 0x220)
struct AKSPowerUp : public AActor {
	struct UBoxComponent* CollisionBox; // 0x220(0x08)
	struct USphereComponent* OverlapSphere; // 0x228(0x08)
	struct UKSProximityComponent* ProximityComponent; // 0x230(0x08)
	int32_t OwningTeam; // 0x238(0x04)
	bool bDestroyOnProximity; // 0x23c(0x01)
	char UnknownData_23D[0x3]; // 0x23d(0x03)
	float DestroyDelay; // 0x240(0x04)
	char UnknownData_244[0x4]; // 0x244(0x04)

	void SetTeamNum(int32_t NewTeam); // Function Killstreak.KSPowerUp.SetTeamNum
	void OnRep_OwningTeam(); // Function Killstreak.KSPowerUp.OnRep_OwningTeam
	void OnProximityUpdatedNative(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, struct FKSActorProximityInfo ProximityInfo); // Function Killstreak.KSPowerUp.OnProximityUpdatedNative
	void OnProximityOverlap(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, struct FKSActorProximityInfo ProximityInfo); // Function Killstreak.KSPowerUp.OnProximityOverlap
	void OnPickedUp(struct AActor* PickingUpActor); // Function Killstreak.KSPowerUp.OnPickedUp
	void HandleTeamUpdate(int32_t NewTeam); // Function Killstreak.KSPowerUp.HandleTeamUpdate
	bool CheckOverlapRelevance(struct AActor* OverlappingActor); // Function Killstreak.KSPowerUp.CheckOverlapRelevance
	bool CheckNetRelevance(struct AActor* Viewer); // Function Killstreak.KSPowerUp.CheckNetRelevance
	void BroadcastPickedUp(struct AActor* PickingUpActor); // Function Killstreak.KSPowerUp.BroadcastPickedUp
};

// Class Killstreak.KSPowerUp_Reequip
// Size: 0x290 (Inherited: 0x248)
struct AKSPowerUp_Reequip : public AKSPowerUp {
	struct FGameplayTagQuery ReequipWeaponTypesQuery; // 0x248(0x48)
};

// Class Killstreak.KSProjectile
// Size: 0x608 (Inherited: 0x260)
struct AKSProjectile : public AKSLagCompensatedActor {
	char UnknownData_260[0x18]; // 0x260(0x18)
	float HorizontalThrowSpeed; // 0x278(0x04)
	float MaxSpeed; // 0x27c(0x04)
	bool bModifyInitialSpeedWithPitch; // 0x280(0x01)
	bool bDeadOrDownedDrop; // 0x281(0x01)
	bool bCanBeIntercepted; // 0x282(0x01)
	char UnknownData_283[0x5]; // 0x283(0x05)
	struct USceneComponent* CollisionComponent0; // 0x288(0x08)
	struct UProjectileMovementComponent* ProjectileMovementComponent; // 0x290(0x08)
	struct FHitResult ProjectileHit; // 0x298(0x88)
	float LifeSpanAfterDeactivate; // 0x320(0x04)
	bool bShouldHideOnDeactivate; // 0x324(0x01)
	bool bStopped; // 0x325(0x01)
	char UnknownData_326[0x12]; // 0x326(0x12)
	float AdditionalPredictionTimeLenience; // 0x338(0x04)
	float AdditionalPredictionArcTime; // 0x33c(0x04)
	float HitValidationLenience; // 0x340(0x04)
	struct FHitResult StoppingHit; // 0x344(0x88)
	bool bAttachWhenStopped; // 0x3cc(0x01)
	bool bDetachWhenBumped; // 0x3cd(0x01)
	bool bSimulatePhysicsWhenStopped; // 0x3ce(0x01)
	char UnknownData_3CF[0x11]; // 0x3cf(0x11)
	bool bDealPointDamageAfterDetach; // 0x3e0(0x01)
	char UnknownData_3E1[0x1]; // 0x3e1(0x01)
	bool bCreateClusterSegmentsOnStopped; // 0x3e2(0x01)
	bool bCreateClusterSegmentsOnExplode; // 0x3e3(0x01)
	char UnknownData_3E4[0x4]; // 0x3e4(0x04)
	struct FMulticastInlineDelegate OnWeaponAssetSet; // 0x3e8(0x10)
	char UnknownData_3F8[0x10]; // 0x3f8(0x10)
	struct UKSWeaponAsset* WeaponAsset; // 0x408(0x08)
	struct UKSWeaponAsset* ParentWeaponAsset; // 0x410(0x08)
	struct UKSWeaponAsset* DamageWeaponAssetOverride; // 0x418(0x08)
	struct AKSWeapon* SpawningWeapon; // 0x420(0x08)
	float TimeCooked; // 0x428(0x04)
	struct FVector SpawnLocation; // 0x42c(0x0c)
	struct FRotator SpawnRotation; // 0x438(0x0c)
	char UnknownData_444[0x4]; // 0x444(0x04)
	struct UPrimitiveComponent* PrimitiveCollisionComponent; // 0x448(0x08)
	struct FVector LocationLastFrame; // 0x450(0x0c)
	bool bActive; // 0x45c(0x01)
	enum class EProjectileExplosionType DeactivateExplosionType; // 0x45d(0x01)
	bool bDeactivateInWater; // 0x45e(0x01)
	char UnknownData_45F[0x5]; // 0x45f(0x05)
	bool bCanBeKilled; // 0x464(0x01)
	char UnknownData_465[0x3]; // 0x465(0x03)
	float MaxHealth; // 0x468(0x04)
	bool bSetInstigatorToKiller; // 0x46c(0x01)
	char UnknownData_46D[0x3]; // 0x46d(0x03)
	float CurrentHealth; // 0x470(0x04)
	float LifeSpanAfterKilled; // 0x474(0x04)
	bool bExplodeOnKilled; // 0x478(0x01)
	bool bProjectileKillPending; // 0x479(0x01)
	char UnknownData_47A[0x6]; // 0x47a(0x06)
	struct FMulticastInlineDelegate OnProjectileKilled; // 0x480(0x10)
	bool bAllowFriendlyHitInterrupt; // 0x490(0x01)
	bool bAllowFriendlyPlayersToDamage; // 0x491(0x01)
	bool bHasPlayedExplosion; // 0x492(0x01)
	char UnknownData_493[0x5]; // 0x493(0x05)
	struct FMulticastInlineDelegate OnPlayExplosion; // 0x498(0x10)
	struct UParticleSystem* DefaultSpang; // 0x4a8(0x08)
	struct TMap<char, struct UParticleSystem*> SurfaceSpangs; // 0x4b0(0x50)
	float SpinsPerSecond; // 0x500(0x04)
	float SpeedToReachSpinsPerSecond; // 0x504(0x04)
	struct FVector SpinAxis; // 0x508(0x0c)
	bool bSpinAfterDetaching; // 0x514(0x01)
	bool bCanBreakDestructibles; // 0x515(0x01)
	char UnknownData_516[0x2]; // 0x516(0x02)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x518(0x08)
	bool bCanReclaim; // 0x520(0x01)
	char UnknownData_521[0x3]; // 0x521(0x03)
	float InteractionDistanceOffset; // 0x524(0x04)
	enum class EProjectileReclaimPermission ReclaimPermissions; // 0x528(0x01)
	bool bShouldRestoreWeaponAssetOnReclaim; // 0x529(0x01)
	char UnknownData_52A[0x2]; // 0x52a(0x02)
	float ReclaimTime; // 0x52c(0x04)
	struct UKSInteractionType* ReclaimInteractionType; // 0x530(0x08)
	struct AKSCharacter* Reclaimer; // 0x538(0x08)
	bool bReclaimPending; // 0x540(0x01)
	char UnknownData_541[0x7]; // 0x541(0x07)
	struct FMulticastInlineDelegate OnReclaim; // 0x548(0x10)
	bool bShouldModifyVisibilityChecks; // 0x558(0x01)
	char UnknownData_559[0x3]; // 0x559(0x03)
	float VisibilityDistance; // 0x55c(0x04)
	bool bShowOnHud; // 0x560(0x01)
	char UnknownData_561[0x7]; // 0x561(0x07)
	struct UObject* WidgetIcon; // 0x568(0x08)
	SoftClassProperty MinimapDisplayWidget; // 0x570(0x28)
	SoftClassProperty FullmapDisplayWidget; // 0x598(0x28)
	SoftClassProperty OverlayDisplayWidget; // 0x5c0(0x28)
	enum class EProjectileVisibilityType WidgetIconAudience; // 0x5e8(0x01)
	enum class EProjectileVisibilityType OverlayIconAudience; // 0x5e9(0x01)
	char UnknownData_5EA[0x6]; // 0x5ea(0x06)
	struct TArray<struct FProjectileWidgetInfo> WidgetInfos; // 0x5f0(0x10)
	int32_t OriginalOwnerId; // 0x600(0x04)
	char UnknownData_604[0x4]; // 0x604(0x04)

	void UpdateSpinRotation(float DeltaSeconds); // Function Killstreak.KSProjectile.UpdateSpinRotation
	void TriggerExplosionFromHitResult(struct FHitResult HitResult, enum class EProjectileExplosionType ExplosionType); // Function Killstreak.KSProjectile.TriggerExplosionFromHitResult
	void TriggerExplosion(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSProjectile.TriggerExplosion
	void TakeoverDelayComplete(); // Function Killstreak.KSProjectile.TakeoverDelayComplete
	void SpawnSpang(struct FHitResult Hit); // Function Killstreak.KSProjectile.SpawnSpang
	void SimulateExplosion(); // Function Killstreak.KSProjectile.SimulateExplosion
	bool ShouldBounceOff(struct FHitResult HitResult); // Function Killstreak.KSProjectile.ShouldBounceOff
	void SetWeaponAsset(struct UKSWeaponAsset* InAsset); // Function Killstreak.KSProjectile.SetWeaponAsset
	void SetHorizontalThrowSpeed(float InSpeed); // Function Killstreak.KSProjectile.SetHorizontalThrowSpeed
	void SetFumbled(); // Function Killstreak.KSProjectile.SetFumbled
	void SetDamageOverrideWeaponAsset(struct UKSWeaponAsset* InWeaponAsset); // Function Killstreak.KSProjectile.SetDamageOverrideWeaponAsset
	void ServerProcessPredictedHits(struct TArray<struct FLaggedProjectileHit> PredictedHits); // Function Killstreak.KSProjectile.ServerProcessPredictedHits
	void RecordPredictedHits(struct TArray<struct FHitResult> HitResults, enum class EProjectilePredictionType PredictionType); // Function Killstreak.KSProjectile.RecordPredictedHits
	void RecordPredictedHit(struct FHitResult HitResult, enum class EProjectilePredictionType PredictionType); // Function Killstreak.KSProjectile.RecordPredictedHit
	void PlayFizzle(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSProjectile.PlayFizzle
	void PlayExplosion(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSProjectile.PlayExplosion
	void OnRootComponentDetached(struct USceneComponent* DetachedComponent); // Function Killstreak.KSProjectile.OnRootComponentDetached
	void OnRep_WeaponAsset(); // Function Killstreak.KSProjectile.OnRep_WeaponAsset
	void OnRep_StoppingHit(); // Function Killstreak.KSProjectile.OnRep_StoppingHit
	void OnRep_ProjectileHit(); // Function Killstreak.KSProjectile.OnRep_ProjectileHit
	void OnRep_CurrentHealth(); // Function Killstreak.KSProjectile.OnRep_CurrentHealth
	bool OnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSProjectile.OnProjectileStopped
	bool OnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSProjectile.OnProjectileBounced
	void OnKilled(struct AController* EventInstigator); // Function Killstreak.KSProjectile.OnKilled
	void NativeOnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSProjectile.NativeOnProjectileStopped
	void NativeOnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSProjectile.NativeOnProjectileBounced
	float ModifyDamageDealt(float DamageAmount, struct FDamageEvent DamageEvent, struct AController* EventInstigator, struct AActor* DamageCauser, struct AActor* DamagedActor); // Function Killstreak.KSProjectile.ModifyDamageDealt
	bool IsActive(); // Function Killstreak.KSProjectile.IsActive
	struct UKSWeaponAsset* GetWeaponAsset(); // Function Killstreak.KSProjectile.GetWeaponAsset
	struct FRotator GetSpawnRotation(); // Function Killstreak.KSProjectile.GetSpawnRotation
	struct FVector GetSpawnLocation(); // Function Killstreak.KSProjectile.GetSpawnLocation
	struct AKSWeapon* GetSpawningWeapon(); // Function Killstreak.KSProjectile.GetSpawningWeapon
	struct USceneComponent* GetProjectileUpdatedComponent(); // Function Killstreak.KSProjectile.GetProjectileUpdatedComponent
	void GetOutlineableMeshes(struct TArray<struct UPrimitiveComponent*> OutMeshes); // Function Killstreak.KSProjectile.GetOutlineableMeshes
	struct UProjectileMovementComponent* GetMovementComponent(); // Function Killstreak.KSProjectile.GetMovementComponent
	float GetHorizontalThrowSpeed(); // Function Killstreak.KSProjectile.GetHorizontalThrowSpeed
	struct UKSWeaponAsset* GetDamageWeaponAsset(); // Function Killstreak.KSProjectile.GetDamageWeaponAsset
	struct AController* GetDamageInstigator(); // Function Killstreak.KSProjectile.GetDamageInstigator
	float GetDamageFalloffRangeScaler(); // Function Killstreak.KSProjectile.GetDamageFalloffRangeScaler
	struct USceneComponent* GetComponentToRotate(); // Function Killstreak.KSProjectile.GetComponentToRotate
	struct UKSProjectileClusterComponent* GetClusterComponent(); // Function Killstreak.KSProjectile.GetClusterComponent
	void DoRadialDamageDefault(); // Function Killstreak.KSProjectile.DoRadialDamageDefault
	bool DoesAllowFriendlyHitInterrupt(); // Function Killstreak.KSProjectile.DoesAllowFriendlyHitInterrupt
	struct TArray<struct AActor*> DetermineIgnoredActors(struct FHitResult HitResult); // Function Killstreak.KSProjectile.DetermineIgnoredActors
	void Deactivate(); // Function Killstreak.KSProjectile.Deactivate
	void CreateClusterSegmentsFromStoppingHit(); // Function Killstreak.KSProjectile.CreateClusterSegmentsFromStoppingHit
	float ComponentTakeDamage(struct UPrimitiveComponent* HitComponent, float DamageAmount); // Function Killstreak.KSProjectile.ComponentTakeDamage
	void BroadcastExplosion(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSProjectile.BroadcastExplosion
	bool AffectsActor(struct AActor* InActor); // Function Killstreak.KSProjectile.AffectsActor
};

// Class Killstreak.KSProjectile_Grenade
// Size: 0x6b0 (Inherited: 0x608)
struct AKSProjectile_Grenade : public AKSProjectile {
	char UnknownData_608[0x10]; // 0x608(0x10)
	SoftClassProperty OverlayWarningDisplayWidget; // 0x618(0x28)
	struct FMulticastInlineDelegate OnGrenadeProximity; // 0x640(0x10)
	bool bTakeOverOnStopped; // 0x650(0x01)
	char UnknownData_651[0x3]; // 0x651(0x03)
	float RepFuseTimeRemaining; // 0x654(0x04)
	char UnknownData_658[0x4]; // 0x658(0x04)
	float CurrentFuseTime; // 0x65c(0x04)
	struct FTimerHandle FuseTimerHandle; // 0x660(0x08)
	struct FTimerHandle FuseCookPauseTimerHandle; // 0x668(0x08)
	float ProximityWarningDelay; // 0x670(0x04)
	char UnknownData_674[0xc]; // 0x674(0x0c)
	bool bSetFuseOnBounce; // 0x680(0x01)
	char UnknownData_681[0x3]; // 0x681(0x03)
	float BounceFuseTime; // 0x684(0x04)
	bool bSetFuseOnStopped; // 0x688(0x01)
	char UnknownData_689[0x3]; // 0x689(0x03)
	float StoppedFuseTime; // 0x68c(0x04)
	bool bExplodesOnStopped; // 0x690(0x01)
	char UnknownData_691[0x7]; // 0x691(0x07)
	struct USphereComponent* DetectionSphere; // 0x698(0x08)
	char UnknownData_6A0[0x1]; // 0x6a0(0x01)
	bool bGeneratesTouchSenseEvents; // 0x6a1(0x01)
	char UnknownData_6A2[0x6]; // 0x6a2(0x06)
	struct UKSItemStimuliSourceComponent* StimuliSourceComponent; // 0x6a8(0x08)

	void UnregisterTouchEvent(struct AKSCharacter* KSCharacter); // Function Killstreak.KSProjectile_Grenade.UnregisterTouchEvent
	bool ShouldSetFuseOnStopped(struct FHitResult HitResult); // Function Killstreak.KSProjectile_Grenade.ShouldSetFuseOnStopped
	bool ShouldExplodeOnStopped(struct FHitResult HitResult); // Function Killstreak.KSProjectile_Grenade.ShouldExplodeOnStopped
	bool ShouldExplodeOnBounce(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSProjectile_Grenade.ShouldExplodeOnBounce
	void SetFuseTime(float InFuseTime); // Function Killstreak.KSProjectile_Grenade.SetFuseTime
	void RegisterTouchEvent(struct AKSCharacter* KSCharacter); // Function Killstreak.KSProjectile_Grenade.RegisterTouchEvent
	void OnRep_FuseTimeRemaining(); // Function Killstreak.KSProjectile_Grenade.OnRep_FuseTimeRemaining
	bool IsInProximityOfLocalCharacter(); // Function Killstreak.KSProjectile_Grenade.IsInProximityOfLocalCharacter
	bool IsFuseActive(); // Function Killstreak.KSProjectile_Grenade.IsFuseActive
	float GetCurrentFuseTime(); // Function Killstreak.KSProjectile_Grenade.GetCurrentFuseTime
	void FuseTimeExpired(); // Function Killstreak.KSProjectile_Grenade.FuseTimeExpired
	bool CanSeeProximityWarning(struct AController* QueriedPlayer); // Function Killstreak.KSProjectile_Grenade.CanSeeProximityWarning
	void CallOnLocalViewTargetChanged(struct AKSPlayerController* InController, struct AActor* OldViewTarget, struct AActor* NewViewTarget); // Function Killstreak.KSProjectile_Grenade.CallOnLocalViewTargetChanged
};

// Class Killstreak.KSSpreadProjectile
// Size: 0x2a0 (Inherited: 0x260)
struct AKSSpreadProjectile : public AKSLagCompensatedActor {
	struct USceneComponent* CollisionComponent; // 0x260(0x08)
	struct UProjectileMovementComponent* ProjectileMovementComponent; // 0x268(0x08)
	char UnknownData_270[0x30]; // 0x270(0x30)

	bool OnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSSpreadProjectile.OnProjectileStopped
	bool OnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSSpreadProjectile.OnProjectileBounced
	void NativeOnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSSpreadProjectile.NativeOnProjectileStopped
	void NativeOnProjectileBounced(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function Killstreak.KSSpreadProjectile.NativeOnProjectileBounced
};

// Class Killstreak.KSGroundSpreadRule
// Size: 0x38 (Inherited: 0x28)
struct UKSGroundSpreadRule : public UKSGrenadeSpreadRule {
	struct TArray<struct FVector> GroundSpreadVectors; // 0x28(0x10)
};

// Class Killstreak.KSProjectile_GrenadeSpread
// Size: 0x9b0 (Inherited: 0x6b0)
struct AKSProjectile_GrenadeSpread : public AKSProjectile_Grenade {
	float TimeToStartSpread; // 0x6b0(0x04)
	float TickSpreadFrequency; // 0x6b4(0x04)
	struct FTimerHandle TickSpreadTimerHandle; // 0x6b8(0x08)
	struct UKSGrenadeSpreadRule* SpreadRuleClass; // 0x6c0(0x08)
	float NormalZMin; // 0x6c8(0x04)
	char UnknownData_6CC[0x4]; // 0x6cc(0x04)
	struct FKSSpreadList SpreadList; // 0x6d0(0x120)
	float MaxSpreadDistance; // 0x7f0(0x04)
	bool PreventCollisionBeneathSpread; // 0x7f4(0x01)
	char UnknownData_7F5[0x3]; // 0x7f5(0x03)
	struct FTimerHandle SpreadTimerHandle; // 0x7f8(0x08)
	struct TArray<struct FTransform> QueuedTransforms; // 0x800(0x10)
	struct TArray<struct FVector> SpreadStartLocations; // 0x810(0x10)
	int32_t SpreadProjectileCount; // 0x820(0x04)
	char UnknownData_824[0x4]; // 0x824(0x04)
	struct TArray<struct AKSSpreadProjectile*> SpreadProjectiles; // 0x828(0x10)
	struct AKSSpreadProjectile* SpreadProjectileToSpawn; // 0x838(0x08)
	float SpreadProjectileRotationMin; // 0x840(0x04)
	float SpreadProjectileRotationMax; // 0x844(0x04)
	float MaxHealthPerTransform; // 0x848(0x04)
	float SphereCollisionRadius; // 0x84c(0x04)
	bool bExtinguishable; // 0x850(0x01)
	char UnknownData_851[0x7]; // 0x851(0x07)
	struct AActor* OverlapClassFilter; // 0x858(0x08)
	struct TArray<char> OverlapObjectTypes; // 0x860(0x10)
	char UnknownData_870[0x10]; // 0x870(0x10)
	float LingerDuration; // 0x880(0x04)
	char UnknownData_884[0x4]; // 0x884(0x04)
	struct TArray<struct AActor*> AffectedActors; // 0x888(0x10)
	struct TMap<struct AActor*, struct FTimerHandle> LingeringAffectedActors; // 0x898(0x50)
	char UnknownData_8E8[0x4]; // 0x8e8(0x04)
	float TickDamageAmount; // 0x8ec(0x04)
	struct UDamageType* TickDamageClass; // 0x8f0(0x08)
	float TickDamageFrequency; // 0x8f8(0x04)
	char UnknownData_8FC[0xc]; // 0x8fc(0x0c)
	struct UKSNavModifierComponent* KSNavModifierComponent; // 0x908(0x08)
	struct TArray<struct UParticleSystemComponent*> ParticleSystemComponents; // 0x910(0x10)
	struct TArray<struct UMeshComponent*> MeshComponents; // 0x920(0x10)
	struct UParticleSystem* ParticleSystemTemplate; // 0x930(0x08)
	float PreDeactivateTime; // 0x938(0x04)
	float ParticleOcclusionRadius; // 0x93c(0x04)
	struct UObject* MeshAsset; // 0x940(0x08)
	struct UMaterialInstance* FriendlyMaterial; // 0x948(0x08)
	struct UMaterialInstance* EnemyMaterial; // 0x950(0x08)
	float MeshOutlineThickness; // 0x958(0x04)
	char UnknownData_95C[0x4]; // 0x95c(0x04)
	struct UAnimInstance* SkeletalAnimClass; // 0x960(0x08)
	char UnknownData_968[0x8]; // 0x968(0x08)
	struct FTransform MeshTransform; // 0x970(0x30)
	char UnknownData_9A0[0x10]; // 0x9a0(0x10)

	void ProcessNextSpreadTransform(); // Function Killstreak.KSProjectile_GrenadeSpread.ProcessNextSpreadTransform
	void OnSpreadTransformRemoved(struct FTransform RemovedTransform); // Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTransformRemoved
	void OnSpreadTransformAdded(struct FTransform AddedTransform); // Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTransformAdded
	void OnSpreadTick(); // Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTick
	void OnSpreadProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadProjectileStopped
	void OnLingerEnd(struct AActor* LingerActor); // Function Killstreak.KSProjectile_GrenadeSpread.OnLingerEnd
	void OnDamageTick(); // Function Killstreak.KSProjectile_GrenadeSpread.OnDamageTick
	void OnBeginLingering(); // Function Killstreak.KSProjectile_GrenadeSpread.OnBeginLingering
	void OnAllSpreadTransformsRemoved(); // Function Killstreak.KSProjectile_GrenadeSpread.OnAllSpreadTransformsRemoved
	void OnAffectedDestroyed(struct AActor* AffectedActor); // Function Killstreak.KSProjectile_GrenadeSpread.OnAffectedDestroyed
	void OnActorUnaffected(struct AActor* UnaffectedActor); // Function Killstreak.KSProjectile_GrenadeSpread.OnActorUnaffected
	void OnActorDamaged(struct AActor* DamagedActor, float Amount); // Function Killstreak.KSProjectile_GrenadeSpread.OnActorDamaged
	void OnActorAffected(struct AActor* AffectedActor); // Function Killstreak.KSProjectile_GrenadeSpread.OnActorAffected
	void ConfigureSpreadTransformParticleSystem(struct UParticleSystemComponent* ParticleSystem); // Function Killstreak.KSProjectile_GrenadeSpread.ConfigureSpreadTransformParticleSystem
	void CleanupParticleSystemComponents(); // Function Killstreak.KSProjectile_GrenadeSpread.CleanupParticleSystemComponents
	void CleanupMeshComponents(); // Function Killstreak.KSProjectile_GrenadeSpread.CleanupMeshComponents
	void BeginLingering(); // Function Killstreak.KSProjectile_GrenadeSpread.BeginLingering
};

// Class Killstreak.KSProjectile_MacGuffin
// Size: 0x610 (Inherited: 0x608)
struct AKSProjectile_MacGuffin : public AKSProjectile {
	bool bAutomaticPickup; // 0x608(0x01)
	char UnknownData_609[0x7]; // 0x609(0x07)
};

// Class Killstreak.KSProjectile_Melee
// Size: 0x620 (Inherited: 0x608)
struct AKSProjectile_Melee : public AKSProjectile {
	struct UDamageType* ProjectileDamageType; // 0x608(0x08)
	struct TArray<struct AActor*> HitActors; // 0x610(0x10)

	void PredictDamage(float DeltaTime); // Function Killstreak.KSProjectile_Melee.PredictDamage
	void LookAheadHit(struct AActor* HitActor, struct FHitResult HitResult); // Function Killstreak.KSProjectile_Melee.LookAheadHit
	void FlushHitIgnoreActors(); // Function Killstreak.KSProjectile_Melee.FlushHitIgnoreActors
	void AllowFutureHitOnActor(struct AActor* PreviouslyHitActor); // Function Killstreak.KSProjectile_Melee.AllowFutureHitOnActor
};

// Class Killstreak.KSProjectile_Pierce
// Size: 0x640 (Inherited: 0x608)
struct AKSProjectile_Pierce : public AKSProjectile {
	float ProjectileEdgeTolerance; // 0x608(0x04)
	char TraceChannel; // 0x60c(0x01)
	char UnknownData_60D[0x3]; // 0x60d(0x03)
	struct TArray<char> ObjectTypes; // 0x610(0x10)
	bool bDrawDebugLine; // 0x620(0x01)
	char UnknownData_621[0x7]; // 0x621(0x07)
	struct TArray<struct AActor*> AlreadyHitActors; // 0x628(0x10)
	bool bHasHitWall; // 0x638(0x01)
	bool bHasHitEnemy; // 0x639(0x01)
	char UnknownData_63A[0x6]; // 0x63a(0x06)
};

// Class Killstreak.KSProjectile_ProximityGrenade
// Size: 0x6c0 (Inherited: 0x6b0)
struct AKSProjectile_ProximityGrenade : public AKSProjectile_Grenade {
	struct UKSProximityComponent* ProximityComponent; // 0x6b0(0x08)
	bool bInitializeProximityCheckingOnStopped; // 0x6b8(0x01)
	char UnknownData_6B9[0x7]; // 0x6b9(0x07)

	void ProximityActorUpdated(struct AActor* Actor, struct UPrimitiveComponent* Component, struct FKSActorProximityInfo ProximityInfo); // Function Killstreak.KSProjectile_ProximityGrenade.ProximityActorUpdated
	struct FVector GetProximityTraceRelativeLocation(); // Function Killstreak.KSProjectile_ProximityGrenade.GetProximityTraceRelativeLocation
	struct UPrimitiveComponent* GetProximityComponent(); // Function Killstreak.KSProjectile_ProximityGrenade.GetProximityComponent
};

// Class Killstreak.KSProjectile_RemoteTrigger
// Size: 0x6f8 (Inherited: 0x6b0)
struct AKSProjectile_RemoteTrigger : public AKSProjectile_Grenade {
	char UnknownData_6B0[0x18]; // 0x6b0(0x18)
	bool CanDetonateNow; // 0x6c8(0x01)
	bool bCanDetonateBeforeStopping; // 0x6c9(0x01)
	char UnknownData_6CA[0x6]; // 0x6ca(0x06)
	struct UKSPlayerMod* DetectionMod; // 0x6d0(0x08)
	char UnknownData_6D8[0x8]; // 0x6d8(0x08)
	bool bRequiresMatchingDetonator; // 0x6e0(0x01)
	char UnknownData_6E1[0x3]; // 0x6e1(0x03)
	struct FVector RelativeInteractionPoint; // 0x6e4(0x0c)
	char UnknownData_6F0[0x1]; // 0x6f0(0x01)
	bool DetectedEnemy; // 0x6f1(0x01)
	char UnknownData_6F2[0x6]; // 0x6f2(0x06)

	void ReportOwningClientLoaded(); // Function Killstreak.KSProjectile_RemoteTrigger.ReportOwningClientLoaded
	void OnRealActorStopped(struct AKSProjectile_RemoteTrigger* RealProjectile); // Function Killstreak.KSProjectile_RemoteTrigger.OnRealActorStopped
	bool IsDetonatable(); // Function Killstreak.KSProjectile_RemoteTrigger.IsDetonatable
};

// Class Killstreak.KSProjectile_ReviveDart
// Size: 0x640 (Inherited: 0x608)
struct AKSProjectile_ReviveDart : public AKSProjectile {
	struct FWeakObjectPtr<struct AKSCharacter> TargetCharacter; // 0x608(0x08)
	float ReviveTime; // 0x610(0x04)
	char UnknownData_614[0x4]; // 0x614(0x04)
	struct UKSPlayerMod* TargetCharacterMod; // 0x618(0x08)
	struct FMulticastInlineDelegate OnSucceed; // 0x620(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x630(0x10)

	void OnReviveEnd(struct AKSCharacter* RevivingCharacter, bool SuccessfulRevive); // Function Killstreak.KSProjectile_ReviveDart.OnReviveEnd
};

// Class Killstreak.KSProjectile_ZiplineAnchor
// Size: 0x638 (Inherited: 0x608)
struct AKSProjectile_ZiplineAnchor : public AKSProjectile {
	char UnknownData_608[0x20]; // 0x608(0x20)
	struct FVector ProjectileTarget; // 0x628(0x0c)
	char UnknownData_634[0x4]; // 0x634(0x04)
};

// Class Killstreak.KSProjectileClusterComponent
// Size: 0x100 (Inherited: 0xb0)
struct UKSProjectileClusterComponent : public UActorComponent {
	char UnknownData_B0[0xc]; // 0xb0(0x0c)
	float ClusterSegmentSpawnOffset; // 0xbc(0x04)
	float RandomMinPitch; // 0xc0(0x04)
	float RandomMaxPitch; // 0xc4(0x04)
	float RandomMinYaw; // 0xc8(0x04)
	float RandomMaxYaw; // 0xcc(0x04)
	struct TArray<struct FKSProjectileClusterSegment> ClusterSegmentDefinitions; // 0xd0(0x10)
	struct TArray<struct AKSProjectile*> ClusterSegments; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnOwnedSegmentKilled; // 0xf0(0x10)

	void OnSegmentKilled(struct AKSProjectile* Segment); // Function Killstreak.KSProjectileClusterComponent.OnSegmentKilled
	struct TArray<struct AKSProjectile*> GetSpawnedSegments(); // Function Killstreak.KSProjectileClusterComponent.GetSpawnedSegments
	struct FTransform GetClusterTransform(struct FHitResult Hit, struct FVector PassThroughVector); // Function Killstreak.KSProjectileClusterComponent.GetClusterTransform
	void CreateClusterSegments(struct FHitResult Hit, struct AKSWeapon* WeaponUsed); // Function Killstreak.KSProjectileClusterComponent.CreateClusterSegments
};

// Class Killstreak.KSProjectileMovementComponent
// Size: 0x1f0 (Inherited: 0x1d0)
struct UKSProjectileMovementComponent : public UProjectileMovementComponent {
	struct FVector PreStopVelocity; // 0x1d0(0x0c)
	float LifetimeUponStop; // 0x1dc(0x04)
	float ProjectileVelocityDeflectDampener; // 0x1e0(0x04)
	char UnknownData_1E4[0xc]; // 0x1e4(0x0c)
};

// Class Killstreak.KSProjWeaponTargetingModule
// Size: 0xb0 (Inherited: 0x90)
struct UKSProjWeaponTargetingModule : public UKSDefaultAimTargetingModule {
	float ProjectileSimFrequency; // 0x90(0x04)
	float MaxSimTime; // 0x94(0x04)
	char UnknownData_98[0x18]; // 0x98(0x18)
};

// Class Killstreak.KSProximityComponent
// Size: 0x160 (Inherited: 0xb0)
struct UKSProximityComponent : public UActorComponent {
	struct FMulticastInlineDelegate OnProximityInfoUpdated; // 0xb0(0x10)
	struct FKSProximityFilter ProximityFilter; // 0xc0(0x20)
	float MaxTimeBetweenUpdates; // 0xe0(0x04)
	char LOSChannel; // 0xe4(0x01)
	char UnknownData_E5[0x3]; // 0xe5(0x03)
	struct TMap<struct AActor*, struct FKSActorProximityInfo> ActorProximityInfoMap; // 0xe8(0x50)
	char UnknownData_138[0x18]; // 0x138(0x18)
	struct UPrimitiveComponent* RegisteredShape; // 0x150(0x08)
	bool bProximityCheckingEnabled; // 0x158(0x01)
	char UnknownData_159[0x7]; // 0x159(0x07)

	void UnregisterOverlapShape(struct UPrimitiveComponent* OverlapShape); // Function Killstreak.KSProximityComponent.UnregisterOverlapShape
	bool ShouldTrackActor(struct AActor* InActor); // Function Killstreak.KSProximityComponent.ShouldTrackActor
	void SetProximityTraceOffset(struct FVector Offset); // Function Killstreak.KSProximityComponent.SetProximityTraceOffset
	void SetProximityCheckingEnabled(bool Enabled); // Function Killstreak.KSProximityComponent.SetProximityCheckingEnabled
	void RegisterOverlapShape(struct UPrimitiveComponent* OverlapShape); // Function Killstreak.KSProximityComponent.RegisterOverlapShape
	void ProximityOverlapStart(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Killstreak.KSProximityComponent.ProximityOverlapStart
	void ProximityOverlapEnd(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function Killstreak.KSProximityComponent.ProximityOverlapEnd
	void OnProximityActorDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSProximityComponent.OnProximityActorDestroyed
};

// Class Killstreak.KSPunishmentConfig
// Size: 0x60 (Inherited: 0x30)
struct UKSPunishmentConfig : public UDataAsset {
	struct TArray<struct FPunishmentConfigEntry> GoodBehaviorConfig; // 0x30(0x10)
	struct TArray<struct FBadBehaviorConfigEntry> BadBehaviorConfig; // 0x40(0x10)
	struct TArray<struct FEndMatchPunishConfigEntry> EndMatchPunishConfig; // 0x50(0x10)
};

// Class Killstreak.KSPunishmentManager
// Size: 0x278 (Inherited: 0x210)
struct UKSPunishmentManager : public UKSActivityManagerBase {
	char UnknownData_210[0x68]; // 0x210(0x68)
};

// Class Killstreak.KSPunishmentRuleComponent
// Size: 0x118 (Inherited: 0xb0)
struct UKSPunishmentRuleComponent : public UKSGameRuleComponent {
	struct UKSPunishmentConfig* PunishmentConfigClass; // 0xb0(0x08)
	struct UKSPunishmentConfig* PunishmentConfig; // 0xb8(0x08)
	bool UseDeserterPenalty; // 0xc0(0x01)
	char UnknownData_C1[0x7]; // 0xc1(0x07)
	struct TMap<int64_t, struct FPlayerPunishmentTracker> PlayerPunishmentTrackers; // 0xc8(0x50)
};

// Class Killstreak.KSQueuesSettingsDefault
// Size: 0x2f8 (Inherited: 0x28)
struct UKSQueuesSettingsDefault : public UObject {
	struct TArray<struct FKSQueueRow> QueueConfigRow; // 0x28(0x10)
	char UnknownData_38[0x50]; // 0x38(0x50)
	struct TArray<struct FKSMapListRow> MapListBaseConfigRow; // 0x88(0x10)
	char UnknownData_98[0x50]; // 0x98(0x50)
	struct TArray<struct FKSMapRow> MapBaseConfigRow; // 0xe8(0x10)
	char UnknownData_F8[0x50]; // 0xf8(0x50)
	struct TArray<struct FKSBonusProgressionRow> BonusProgressionBaseConfigRow; // 0x148(0x10)
	char UnknownData_158[0x50]; // 0x158(0x50)
	struct TArray<struct FKSQueueGroupRow> QueueGroupBaseConfigRow; // 0x1a8(0x10)
	char UnknownData_1B8[0x50]; // 0x1b8(0x50)
	struct TArray<struct FKSRankedProgressionRow> RankedProgressionBaseConfigRow; // 0x208(0x10)
	char UnknownData_218[0x50]; // 0x218(0x50)
	struct TArray<struct FKSLimitedTimeEventRow> LimitedTimeEventBaseConfigRow; // 0x268(0x10)
	char UnknownData_278[0x50]; // 0x278(0x50)
	struct FString ActiveLimitedTimeEventName; // 0x2c8(0x10)
	struct TArray<struct FString> ActiveLimitedTimeEventNames; // 0x2d8(0x10)
	struct TArray<struct FKSQueueSectionSort> QueueSectionSortConfigRow; // 0x2e8(0x10)
};

// Class Killstreak.KSQuip
// Size: 0x200 (Inherited: 0x1d0)
struct UKSQuip : public UKSRadialMenuItem {
	struct FName OverriddenAudioEventName; // 0x1d0(0x08)
	struct TSoftObjectPtr<struct UAkAudioEvent> QuipAudioEvent; // 0x1d8(0x28)
};

// Class Killstreak.KSQuipInstance
// Size: 0x2c8 (Inherited: 0x2b8)
struct AKSQuipInstance : public AKSRadialMenuItemInstance {
	enum class EKSVoicelineAudience VoicelineAudience; // 0x2b8(0x01)
	char UnknownData_2B9[0x3]; // 0x2b9(0x03)
	int32_t QuipCooldownGroup; // 0x2bc(0x04)
	float QuipCooldownDuration; // 0x2c0(0x04)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)
};

// Class Killstreak.KSRadialMenuManager
// Size: 0xd0 (Inherited: 0xb0)
struct UKSRadialMenuManager : public UActorComponent {
	struct AKSPlayerController* CachedOwner; // 0xb0(0x08)
	bool bThrottleQuipsAndComms; // 0xb8(0x01)
	char UnknownData_B9[0x3]; // 0xb9(0x03)
	int32_t QuipsAndCommsAllowedBeforeThrottle; // 0xbc(0x04)
	float QuipAndCommThrottleDetectionPeriod; // 0xc0(0x04)
	float QuipAndCommThrottleCooldown; // 0xc4(0x04)
	int32_t CurrentQuipsAndCommsBeforeThrottle; // 0xc8(0x04)
	bool bQuipsAndCommsCurrentlyThrottled; // 0xcc(0x01)
	char UnknownData_CD[0x3]; // 0xcd(0x03)

	bool IsThrottled(enum class EMercCosmeticSlot CosmeticSlot); // Function Killstreak.KSRadialMenuManager.IsThrottled
	void IncreaseUseCount(enum class EMercCosmeticSlot CosmeticSlot); // Function Killstreak.KSRadialMenuManager.IncreaseUseCount
	void EndThrottle(enum class EMercCosmeticSlot CosmeticSlot); // Function Killstreak.KSRadialMenuManager.EndThrottle
	void DecreaseUseCount(enum class EMercCosmeticSlot CosmeticSlot); // Function Killstreak.KSRadialMenuManager.DecreaseUseCount
};

// Class Killstreak.KSReverseTracker
// Size: 0xa8 (Inherited: 0x98)
struct UKSReverseTracker : public UKSAccoladeTracker {
	struct TArray<struct FPlayerDamageInfo> PlayerDamageInfo; // 0x98(0x10)

	void StoreDamageTakenEvent(struct FAdvancedCombatEvent DamageEvent); // Function Killstreak.KSReverseTracker.StoreDamageTakenEvent
	void HandleTrackerAccolade(struct AKSPlayerState* PlayerState); // Function Killstreak.KSReverseTracker.HandleTrackerAccolade
	bool CheckVictimDamageInstigator(struct AKSPlayerState* Instigator, struct AKSPlayerState* Victim, struct FPlayerDamageInfo OutPlayerInfo); // Function Killstreak.KSReverseTracker.CheckVictimDamageInstigator
};

// Class Killstreak.KSRocket
// Size: 0x530 (Inherited: 0x4c0)
struct AKSRocket : public ACharacter {
	float RocketRotationCatchUpRadians; // 0x4c0(0x04)
	float CameraInitialLockoutTime; // 0x4c4(0x04)
	char UnknownData_4C8[0x8]; // 0x4c8(0x08)
	struct USpringArmComponent* SpringArm; // 0x4d0(0x08)
	struct UCameraComponent* MainCamera; // 0x4d8(0x08)
	struct UKSWeaponAsset* ExplodeWeaponAsset; // 0x4e0(0x08)
	float FlightDuration; // 0x4e8(0x04)
	char UnknownData_4EC[0x4]; // 0x4ec(0x04)
	struct FMulticastInlineDelegate OnFlightDurationTimerTick; // 0x4f0(0x10)
	struct FMulticastInlineDelegate OnFlightDurationTimerActive; // 0x500(0x10)
	struct FMulticastInlineDelegate OnFlightDurationTimerComplete; // 0x510(0x10)
	struct UKSTimerComponent* FlightDurationTimer; // 0x520(0x08)
	char UnknownData_528[0x8]; // 0x528(0x08)

	void OnRep_FlightDurationTimer(); // Function Killstreak.KSRocket.OnRep_FlightDurationTimer
	void OnIgnitionKickoff(); // Function Killstreak.KSRocket.OnIgnitionKickoff
	void NativeOnProjectileStopped(struct FHitResult HitResult); // Function Killstreak.KSRocket.NativeOnProjectileStopped
	void NativeOnIgnitionKickoff(); // Function Killstreak.KSRocket.NativeOnIgnitionKickoff
	void NativeDetonate(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSRocket.NativeDetonate
	struct UKSWeaponAsset* GetWeaponAsset(); // Function Killstreak.KSRocket.GetWeaponAsset
	float GetFlightDuration(); // Function Killstreak.KSRocket.GetFlightDuration
	void GamepadLookUp(float Value); // Function Killstreak.KSRocket.GamepadLookUp
	void GamepadLookRight(float Value); // Function Killstreak.KSRocket.GamepadLookRight
	void FlightDurationTimerTick(float Seconds); // Function Killstreak.KSRocket.FlightDurationTimerTick
	void FlightDurationTimerComplete(); // Function Killstreak.KSRocket.FlightDurationTimerComplete
	void FlightDurationTimerActive(bool bActive); // Function Killstreak.KSRocket.FlightDurationTimerActive
	void EnableCameraControl(); // Function Killstreak.KSRocket.EnableCameraControl
	void Detonate(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSRocket.Detonate
	void BroadcastDetonate(struct FProjectileExplosionInfo ExplosionInfo); // Function Killstreak.KSRocket.BroadcastDetonate
};

// Class Killstreak.KSRocketMovementComponent
// Size: 0x650 (Inherited: 0x610)
struct UKSRocketMovementComponent : public UCharacterMovementComponent {
	float MaxSpeed; // 0x610(0x04)
	float RocketAcceleration; // 0x614(0x04)
	float RocketIgniteTime; // 0x618(0x04)
	float RocketRotationCatchUpDegrees; // 0x61c(0x04)
	bool bSmoothRotation; // 0x620(0x01)
	char UnknownData_621[0x7]; // 0x621(0x07)
	struct FMulticastInlineDelegate OnIgnitionKickoff; // 0x628(0x10)
	struct FMulticastInlineDelegate OnRocketStop; // 0x638(0x10)
	char UnknownData_648[0x8]; // 0x648(0x08)

	void StopSimulating(struct FHitResult HitResult); // Function Killstreak.KSRocketMovementComponent.StopSimulating
	void OnRocketStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // DelegateFunction Killstreak.KSRocketMovementComponent.OnRocketStopDelegate__DelegateSignature
	void OnIgnitionKickoffDelegate__DelegateSignature(); // DelegateFunction Killstreak.KSRocketMovementComponent.OnIgnitionKickoffDelegate__DelegateSignature
};

// Class Killstreak.KSRoundBasedObject
// Size: 0x230 (Inherited: 0x220)
struct AKSRoundBasedObject : public AActor {
	char UnknownData_220[0x8]; // 0x220(0x08)
	int32_t SideNum; // 0x228(0x04)
	enum class ELocalRequirements SkyDiverRelevanceRules; // 0x22c(0x01)
	enum class ELimitPerRound SkyDiverLimit; // 0x22d(0x01)
	char UnknownData_22E[0x2]; // 0x22e(0x02)

	void ReceiveGameSetup(); // Function Killstreak.KSRoundBasedObject.ReceiveGameSetup
	void OnSkyDiveStarted(struct AKSCharacter* SkyDiver); // Function Killstreak.KSRoundBasedObject.OnSkyDiveStarted
	void OnSkyDiveSkipped(struct AKSCharacter* SkyDiver); // Function Killstreak.KSRoundBasedObject.OnSkyDiveSkipped
	void OnSkyDiveEnded(struct AKSCharacter* SkyDiver); // Function Killstreak.KSRoundBasedObject.OnSkyDiveEnded
	void OnRoundStarted(struct FRoundInitState RoundInitState); // Function Killstreak.KSRoundBasedObject.OnRoundStarted
	void OnRoundEnded(struct AKSGameState* GameState, struct FRoundResult RoundResult); // Function Killstreak.KSRoundBasedObject.OnRoundEnded
	void OnGameSetup(); // Function Killstreak.KSRoundBasedObject.OnGameSetup
	bool IsSkyDivingActive(); // Function Killstreak.KSRoundBasedObject.IsSkyDivingActive
	bool CheckPlayerForMatchingTeam(struct APlayerController* PC); // Function Killstreak.KSRoundBasedObject.CheckPlayerForMatchingTeam
	bool CheckLocalPlayerForMatchingTeam(); // Function Killstreak.KSRoundBasedObject.CheckLocalPlayerForMatchingTeam
	bool CheckCharacterForMatchingTeam(struct AKSCharacter* Character); // Function Killstreak.KSRoundBasedObject.CheckCharacterForMatchingTeam
};

// Class Killstreak.KSRoundedSquareDeadZoneFilter
// Size: 0x40 (Inherited: 0x38)
struct UKSRoundedSquareDeadZoneFilter : public UKSAnalogStickFilter {
	float CardinalSize; // 0x38(0x04)
	float CornerRadius; // 0x3c(0x04)
};

// Class Killstreak.KSRoyaleSafeZone
// Size: 0x270 (Inherited: 0x220)
struct AKSRoyaleSafeZone : public AActor {
	struct UBoxComponent* ValidityZone; // 0x220(0x08)
	struct UKSWeaponAsset* ZoneDamageAsset; // 0x228(0x08)
	float StartingRadius; // 0x230(0x04)
	struct FSafeZoneParams OldParams; // 0x234(0x10)
	struct FSafeZoneParams NewParams; // 0x244(0x10)
	float ZoneLerpVelocity; // 0x254(0x04)
	float ZoneLerpAlpha; // 0x258(0x04)
	struct FVector CurrentCenter; // 0x25c(0x0c)
	float CurrentRadius; // 0x268(0x04)
	bool ZoneActive; // 0x26c(0x01)
	bool IsShrinking; // 0x26d(0x01)
	char UnknownData_26E[0x2]; // 0x26e(0x02)

	bool TryToDamage(struct AActor* TargetActor, float AttemptedDamage); // Function Killstreak.KSRoyaleSafeZone.TryToDamage
	void StartShrink(); // Function Killstreak.KSRoyaleSafeZone.StartShrink
	void SetNewZoneParams(float NewRadius, float TimeToChange, struct AActor* MustContainActor, float MustContainSafeRadius); // Function Killstreak.KSRoyaleSafeZone.SetNewZoneParams
	void OnZoneActivated(); // Function Killstreak.KSRoyaleSafeZone.OnZoneActivated
	void OnRep_ZoneActive(); // Function Killstreak.KSRoyaleSafeZone.OnRep_ZoneActive
	void OnRep_NewParams(); // Function Killstreak.KSRoyaleSafeZone.OnRep_NewParams
	void OnCircleUpdate(float NewRadius, struct FVector NewLocation); // Function Killstreak.KSRoyaleSafeZone.OnCircleUpdate
	bool IsZoneActive(); // Function Killstreak.KSRoyaleSafeZone.IsZoneActive
};

// Class Killstreak.KSRuleBasedPhaseProxy
// Size: 0x68 (Inherited: 0x28)
struct UKSRuleBasedPhaseProxy : public UKSGamePhaseProxyBase {
	struct FMulticastInlineDelegate OnPhaseCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailedToStart; // 0x38(0x10)
	char UnknownData_48[0x14]; // 0x48(0x14)
	struct FName PhaseName; // 0x5c(0x08)
	char UnknownData_64[0x4]; // 0x64(0x04)

	struct UKSRuleBasedPhaseProxy* StartRuleBasedPhase(struct UObject* WorldContextObject, struct UKSPhaseRuleComponent* Rule, float TimeSeconds, struct FName PhaseName); // Function Killstreak.KSRuleBasedPhaseProxy.StartRuleBasedPhase
	void OnCompletedWithLeadingTeam(struct AKSTeamState* LeadingTeam); // Function Killstreak.KSRuleBasedPhaseProxy.OnCompletedWithLeadingTeam
	void OnCompleted(); // Function Killstreak.KSRuleBasedPhaseProxy.OnCompleted
};

// Class Killstreak.KSSafeZone
// Size: 0x260 (Inherited: 0x238)
struct AKSSafeZone : public AKSOutOfBoundsZone {
	int32_t SideNum; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct TArray<struct AKSCharacter*> RevealedCharacters; // 0x240(0x10)
	char UnknownData_250[0x10]; // 0x250(0x10)

	void RevealOverlappedCharacter(struct AKSCharacter* Character); // Function Killstreak.KSSafeZone.RevealOverlappedCharacter
};

// Class Killstreak.KSShield
// Size: 0x250 (Inherited: 0x220)
struct AKSShield : public AActor {
	struct FMulticastInlineDelegate OnShieldDamagedDel; // 0x220(0x10)
	char UnknownData_230[0x18]; // 0x230(0x18)
	bool bShieldEnabled; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	float Health; // 0x24c(0x04)

	void SetShieldEnabled(bool ShieldEnabled); // Function Killstreak.KSShield.SetShieldEnabled
	void OnRep_ShieldEnabled(); // Function Killstreak.KSShield.OnRep_ShieldEnabled
	void OnRep_Health(); // Function Killstreak.KSShield.OnRep_Health
};

// Class Killstreak.KSShopRuleComponent
// Size: 0x160 (Inherited: 0xb0)
struct UKSShopRuleComponent : public UKSGameRuleComponent {
	int32_t StartingCash; // 0xb0(0x04)
	bool bResetShopsOnTeamSidesFlipped; // 0xb4(0x01)
	bool bLockUndoEachRound; // 0xb5(0x01)
	char UnknownData_B6[0x2]; // 0xb6(0x02)
	struct AKSPlayerShop* ShopClass; // 0xb8(0x08)
	struct TMap<int64_t, struct AKSPlayerShop*> PlayerShops; // 0xc0(0x50)
	char UnknownData_110[0x50]; // 0x110(0x50)

	void OnGamePhaseChanged(struct FName NewPhaseName, struct FName PreviousPhaseName); // Function Killstreak.KSShopRuleComponent.OnGamePhaseChanged
	struct AKSPlayerShop* GetShopForPlayer(struct AKSPlayerState* InPlayerState); // Function Killstreak.KSShopRuleComponent.GetShopForPlayer
};

// Class Killstreak.KSSkinBundle
// Size: 0x1e8 (Inherited: 0x178)
struct UKSSkinBundle : public UKSItemBundle {
	SoftClassProperty RogueSelectCharacterClass; // 0x178(0x28)
	bool StarterSkin; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)
	struct TSoftObjectPtr<struct UTexture2D> SkinFlatImage; // 0x1a8(0x28)
	bool bOverrideJobLobbyProps; // 0x1d0(0x01)
	char UnknownData_1D1[0x7]; // 0x1d1(0x07)
	struct TArray<struct FSoftObjectPath> LobbyPropsToPreload; // 0x1d8(0x10)

	bool IsStarterSkin(); // Function Killstreak.KSSkinBundle.IsStarterSkin
	struct TSoftObjectPtr<struct UTexture2D> GetSkinImage(); // Function Killstreak.KSSkinBundle.GetSkinImage
};

// Class Killstreak.KSSmoothingComponent
// Size: 0x240 (Inherited: 0x210)
struct UKSSmoothingComponent : public USceneComponent {
	bool bSmoothTranslation; // 0x208(0x01)
	bool bSmoothRotation; // 0x209(0x01)
	struct FVector TranslationOffset; // 0x20c(0x0c)
	char UnknownData_21E[0x2]; // 0x21e(0x02)
	struct FQuat RotationOffset; // 0x220(0x10)
	struct AKSCharacter* CharacterOwner; // 0x230(0x08)
	char UnknownData_238[0x8]; // 0x238(0x08)
};

// Class Killstreak.KSSpawnRule_Proximity
// Size: 0x40 (Inherited: 0x28)
struct UKSSpawnRule_Proximity : public UKSSpawnRule {
	float OuterRadius; // 0x28(0x04)
	float InnerRadius; // 0x2c(0x04)
	struct FName OuterRadiusConfigName; // 0x30(0x08)
	struct FName InnerRadiusConfigName; // 0x38(0x08)

	float GetScoreForDistance(struct FVector To, struct FVector From); // Function Killstreak.KSSpawnRule_Proximity.GetScoreForDistance
};

// Class Killstreak.KSSpawnRule_PlayerEventProximity
// Size: 0x58 (Inherited: 0x40)
struct UKSSpawnRule_PlayerEventProximity : public UKSSpawnRule_Proximity {
	float RecordDuration; // 0x40(0x04)
	bool bScoreDecaysWithTime; // 0x44(0x01)
	bool bConsidersFriendlies; // 0x45(0x01)
	bool bConsidersEnemies; // 0x46(0x01)
	bool bConsidersSelf; // 0x47(0x01)
	char UnknownData_48[0x10]; // 0x48(0x10)

	void OnPlayerEventRecordExpire(struct FKSPlayerEventRecord KSPlayerEventRecord); // Function Killstreak.KSSpawnRule_PlayerEventProximity.OnPlayerEventRecordExpire
	void OnPlayerEvent(struct AController* Controller); // Function Killstreak.KSSpawnRule_PlayerEventProximity.OnPlayerEvent
	void BindToEvent(); // Function Killstreak.KSSpawnRule_PlayerEventProximity.BindToEvent
};

// Class Killstreak.KSSpawnRule_PlayerProximity
// Size: 0x48 (Inherited: 0x40)
struct UKSSpawnRule_PlayerProximity : public UKSSpawnRule_Proximity {
	bool bConsiderFriendlies; // 0x40(0x01)
	bool bConsiderEnemies; // 0x41(0x01)
	bool bUseAverageScore; // 0x42(0x01)
	char UnknownData_43[0x5]; // 0x43(0x05)
};

// Class Killstreak.KSSpawnRule_Side
// Size: 0x38 (Inherited: 0x28)
struct UKSSpawnRule_Side : public UKSSpawnRule {
	bool bAllowNullTeam; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	struct FName AllowNullTeamConfigName; // 0x2c(0x08)
	char UnknownData_34[0x4]; // 0x34(0x04)
};

// Class Killstreak.KSSpawnRule_Vacant
// Size: 0x30 (Inherited: 0x28)
struct UKSSpawnRule_Vacant : public UKSSpawnRule {
	float RequiresAdjustmentScore; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
};

// Class Killstreak.KSSpawnSelectorComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UKSSpawnSelectorComponent : public UActorComponent {
	struct TArray<struct FKSSpawnSelectorTier> KSSpawnSelectorTiers; // 0xb0(0x10)
	struct TArray<struct FKSSpawnSelectorTier> CustomKSSpawnSelectorTiers; // 0xc0(0x10)
	struct TArray<struct APlayerStart*> PlayerStarts; // 0xd0(0x10)
};

// Class Killstreak.KSSpecialty
// Size: 0x2f0 (Inherited: 0x168)
struct UKSSpecialty : public UKSItem {
	int32_t RequiredUnlockLevel; // 0x168(0x04)
	char UnknownData_16C[0x4]; // 0x16c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> DynamicPoseImage; // 0x170(0x28)
	struct TSoftObjectPtr<struct UTexture2D> BannerIcon; // 0x198(0x28)
	struct TSoftObjectPtr<struct UTexture2D> LeftBannerIcon; // 0x1c0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> RightBannerIcon; // 0x1e8(0x28)
	struct TSoftObjectPtr<struct UTexture2D> SmallIcon; // 0x210(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> AvailableKillstreaks; // 0x238(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> AvailableAbilities; // 0x248(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> AvailableGadgets; // 0x258(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> AvailablePistols; // 0x268(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAttachment>> AvailableWeaponAttachments; // 0x278(0x10)
	enum class ESpecialtyRoleType RoleType; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct TArray<struct TSoftObjectPtr<struct UKSPlayerMod>> AutoEquippedMods; // 0x290(0x10)
	struct TSoftObjectPtr<struct UPerkCategory> PerkSlotOneCategory; // 0x2a0(0x28)
	struct TSoftObjectPtr<struct UPerkCategory> PerkSlotTwoCategory; // 0x2c8(0x28)

	struct UTexture2D* GetDynamicPoseImage(bool bAllowSyncLoad); // Function Killstreak.KSSpecialty.GetDynamicPoseImage
};

// Class Killstreak.KSSpray
// Size: 0x240 (Inherited: 0x218)
struct UKSSpray : public UKSEmote {
	struct TSoftObjectPtr<struct UKSActivity> StatTrackingActivity; // 0x218(0x28)

	struct TSoftObjectPtr<struct UKSActivity> GetStatTrackingActivity(); // Function Killstreak.KSSpray.GetStatTrackingActivity
};

// Class Killstreak.KSSprayInstance
// Size: 0x348 (Inherited: 0x2b8)
struct AKSSprayInstance : public AKSEmoteInstance {
	char SprayTraceChannel; // 0x2b8(0x01)
	char UnknownData_2B9[0x3]; // 0x2b9(0x03)
	float SprayTraceDistance; // 0x2bc(0x04)
	struct FAimData CachedAim; // 0x2c0(0x50)
	struct FVector CachedSprayLocation; // 0x310(0x0c)
	struct FRotator CachedSprayRotation; // 0x31c(0x0c)
	struct FWeakObjectPtr<struct UPrimitiveComponent> CachedSprayTarget; // 0x328(0x08)
	struct FVector CachedSprayNormal; // 0x330(0x0c)
	struct FRotator CachedSprayRotationByNormal; // 0x33c(0x0c)

	void ServerPlaySpray(struct FAimData InSprayAim); // Function Killstreak.KSSprayInstance.ServerPlaySpray
};

// Class Killstreak.KSSpringArmComponent
// Size: 0x2e0 (Inherited: 0x290)
struct UKSSpringArmComponent : public USpringArmComponent {
	bool bEnableSmoothLengthReturn; // 0x290(0x01)
	char UnknownData_291[0x3]; // 0x291(0x03)
	float SmoothLengthReturnSpeed; // 0x294(0x04)
	struct UCurveFloat* SmoothingCurve; // 0x298(0x08)
	struct UCurveVector* OffsetCurve; // 0x2a0(0x08)
	bool bRelativeTargetOffset; // 0x2a8(0x01)
	char UnknownData_2A9[0x7]; // 0x2a9(0x07)
	struct AKSCharacter* CharacterOwner; // 0x2b0(0x08)
	char UnknownData_2B8[0x28]; // 0x2b8(0x28)
};

// Class Killstreak.KSPlayerMatchStats
// Size: 0x78 (Inherited: 0x28)
struct UKSPlayerMatchStats : public UObject {
	struct TMap<enum class EPlayerStatType, struct FPlayerMatchStatInfo> StatsByType; // 0x28(0x50)

	bool GetStat(enum class EPlayerStatType StatType, struct FPlayerMatchStatInfo OutStat); // Function Killstreak.KSPlayerMatchStats.GetStat
};

// Class Killstreak.KSStoreItemHelper
// Size: 0x200 (Inherited: 0x1d0)
struct UKSStoreItemHelper : public UPUMG_StoreItemHelper {
	int32_t StoreVendorGroupId; // 0x1d0(0x04)
	bool StoreVendorsLoaded; // 0x1d4(0x01)
	char UnknownData_1D5[0x3]; // 0x1d5(0x03)
	struct FMulticastInlineDelegate OnStoreItemNewStatusChange; // 0x1d8(0x10)
	struct TArray<int32_t> RecentlySeenItems; // 0x1e8(0x10)
	bool StoreHasUnseenItems; // 0x1f8(0x01)
	char UnknownData_1F9[0x7]; // 0x1f9(0x07)

	bool RedeemDLCVoucher(struct UPUMG_StoreItem* DLCVoucher); // Function Killstreak.KSStoreItemHelper.RedeemDLCVoucher
	bool HasUnseenItems(); // Function Killstreak.KSStoreItemHelper.HasUnseenItems
	bool HasRecentlySeenItem(int32_t LootId); // Function Killstreak.KSStoreItemHelper.HasRecentlySeenItem
	bool HasPortalOffers(); // Function Killstreak.KSStoreItemHelper.HasPortalOffers
};

// Class Killstreak.KSSwapHandlerProfile
// Size: 0x38 (Inherited: 0x28)
struct UKSSwapHandlerProfile : public UObject {
	struct TArray<struct FEquipPointDefinition> EquipPointDefinitions; // 0x28(0x10)
};

// Class Killstreak.KSTabletAnimInstance
// Size: 0x2c0 (Inherited: 0x290)
struct UKSTabletAnimInstance : public UKSAnimInstance {
	bool bIsClosed; // 0x290(0x01)
	char UnknownData_291[0x2f]; // 0x291(0x2f)

	bool OpenTablet(); // Function Killstreak.KSTabletAnimInstance.OpenTablet
	void FullyOpened(); // Function Killstreak.KSTabletAnimInstance.FullyOpened
	void FullyClosed(); // Function Killstreak.KSTabletAnimInstance.FullyClosed
	bool CloseTablet(); // Function Killstreak.KSTabletAnimInstance.CloseTablet
	bool CheckFullyOpened(); // Function Killstreak.KSTabletAnimInstance.CheckFullyOpened
	bool CheckFullyClosed(); // Function Killstreak.KSTabletAnimInstance.CheckFullyClosed
};

// Class Killstreak.KSTargetingDetailsWidget
// Size: 0x240 (Inherited: 0x238)
struct UKSTargetingDetailsWidget : public UUserWidget {
	float CurrentDistance; // 0x238(0x04)
	char UnknownData_23C[0x4]; // 0x23c(0x04)

	void OnCurrentDistanceChanged(float NewDistance); // Function Killstreak.KSTargetingDetailsWidget.OnCurrentDistanceChanged
};

// Class Killstreak.KSTeamKillTracker
// Size: 0xb0 (Inherited: 0x98)
struct UKSTeamKillTracker : public UKSAccoladeTracker {
	struct TArray<struct FPlayerTeamTracker> PlayerTeamKillTracker; // 0x98(0x10)
	int32_t TeamKillRequirement; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)

	void StoreCombatInfo(struct FCombatEventInfo ElimEvent); // Function Killstreak.KSTeamKillTracker.StoreCombatInfo
	bool HasEliminateVictim(struct FPlayerTeamTracker PlayerTeamTracker, int32_t VictimPlayerId); // Function Killstreak.KSTeamKillTracker.HasEliminateVictim
	bool ContainsPlayer(struct AKSPlayerState* PlayerState, struct FPlayerTeamTracker PlayerTeamTracker, int32_t TrackerIndex); // Function Killstreak.KSTeamKillTracker.ContainsPlayer
	bool CheckRequirements(struct FCombatEventInfo ElimEvent); // Function Killstreak.KSTeamKillTracker.CheckRequirements
};

// Class Killstreak.KSTeamState
// Size: 0x440 (Inherited: 0x220)
struct AKSTeamState : public AInfo {
	int32_t r_TeamNum; // 0x220(0x04)
	bool bTeamEliminated; // 0x224(0x01)
	bool bTeamEliminatedOrDowned; // 0x225(0x01)
	char UnknownData_226[0x2]; // 0x226(0x02)
	struct FMulticastInlineDelegate OnTeamEliminated; // 0x228(0x10)
	struct FMulticastInlineDelegate OnTeamEliminatedOrDowned; // 0x238(0x10)
	struct FMulticastInlineDelegate OnTeamMemberEliminatedDel; // 0x248(0x10)
	struct FMulticastInlineDelegate OnTeamMemberDownedDel; // 0x258(0x10)
	char UnknownData_268[0x18]; // 0x268(0x18)
	struct TArray<struct AKSPlayerState*> AllMembers; // 0x280(0x10)
	struct TArray<struct AKSPlayerState*> PlayerMembers; // 0x290(0x10)
	char UnknownData_2A0[0x10]; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnMemberAdded; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnMemberRemoved; // 0x2c0(0x10)
	struct FKSRespawnConfig RespawnConfig; // 0x2d0(0x18)
	int32_t Respawns; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct FMulticastInlineDelegate OnRespawnsChangedDel; // 0x2f0(0x10)
	int32_t Score; // 0x300(0x04)
	int32_t RoundWins; // 0x304(0x04)
	int32_t RoundLosses; // 0x308(0x04)
	char UnknownData_30C[0x4]; // 0x30c(0x04)
	struct FMulticastInlineDelegate OnScoreChanged; // 0x310(0x10)
	struct FMulticastInlineDelegate OnObjectiveRoleChanged; // 0x320(0x10)
	enum class EExtractionTeamType TeamType; // 0x330(0x01)
	char UnknownData_331[0x7]; // 0x331(0x07)
	struct FMulticastInlineDelegate OnPingAdded; // 0x338(0x10)
	struct FMulticastInlineDelegate OnPingRemoved; // 0x348(0x10)
	struct FMulticastInlineDelegate OnPingChanged; // 0x358(0x10)
	struct UKSJobSelectionComponent* JobSelectionClass; // 0x368(0x08)
	struct UKSJobSelectionComponent* JobSelectionComponent; // 0x370(0x08)
	struct FMulticastInlineDelegate OnJobSelectionComponentReady; // 0x378(0x10)
	char UnknownData_388[0x48]; // 0x388(0x48)
	int32_t TotalKills; // 0x3d0(0x04)
	int32_t TotalDeaths; // 0x3d4(0x04)
	int32_t TotalAssists; // 0x3d8(0x04)
	int32_t SideNum; // 0x3dc(0x04)
	struct TArray<struct UKSPersistentPlayerData*> PersistentTeamMembers; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnPersistentTeamMemberAdded; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnPersistentTeamMemberRemoved; // 0x400(0x10)
	struct FMulticastInlineDelegate OnTeamCanSurrenderChanged; // 0x410(0x10)
	bool bTeamCanProposeSurrender; // 0x420(0x01)
	char UnknownData_421[0x1f]; // 0x421(0x1f)

	bool SubtractTickets(int32_t NumTickets); // Function Killstreak.KSTeamState.SubtractTickets
	bool ShouldKeepTeamAlive(); // Function Killstreak.KSTeamState.ShouldKeepTeamAlive
	void SetTeamType(enum class EExtractionTeamType NewType); // Function Killstreak.KSTeamState.SetTeamType
	void ResetTeamElimination(); // Function Killstreak.KSTeamState.ResetTeamElimination
	void OnTeamUpdated(); // Function Killstreak.KSTeamState.OnTeamUpdated
	void OnTeamMemberRemoved(struct AKSPlayerState* LostMember); // Function Killstreak.KSTeamState.OnTeamMemberRemoved
	void OnTeamMemberEliminated(struct AKSPlayerState* Member); // Function Killstreak.KSTeamState.OnTeamMemberEliminated
	void OnTeamMemberDowned(struct AKSPlayerState* Member); // Function Killstreak.KSTeamState.OnTeamMemberDowned
	void OnTeamMemberAdded(struct AKSPlayerState* NewMember); // Function Killstreak.KSTeamState.OnTeamMemberAdded
	void OnSurrenderPollStarted(); // Function Killstreak.KSTeamState.OnSurrenderPollStarted
	void OnSurrenderPollFailed(); // Function Killstreak.KSTeamState.OnSurrenderPollFailed
	void OnRep_TeamType(); // Function Killstreak.KSTeamState.OnRep_TeamType
	void OnRep_TeamEliminatedOrDowned(); // Function Killstreak.KSTeamState.OnRep_TeamEliminatedOrDowned
	void OnRep_TeamEliminated(); // Function Killstreak.KSTeamState.OnRep_TeamEliminated
	void OnRep_TeamCanProposeSurrender(); // Function Killstreak.KSTeamState.OnRep_TeamCanProposeSurrender
	void OnRep_Score(); // Function Killstreak.KSTeamState.OnRep_Score
	void OnRep_Respawns(); // Function Killstreak.KSTeamState.OnRep_Respawns
	void OnRep_JobSelectionComponent(); // Function Killstreak.KSTeamState.OnRep_JobSelectionComponent
	void OnPlayerLogout(struct AController* Controller); // Function Killstreak.KSTeamState.OnPlayerLogout
	void NewPingRequest(struct FPingInfo PingInfo); // Function Killstreak.KSTeamState.NewPingRequest
	void NewPingRemoveRequest(int32_t PingId, struct AKSPlayerState* PingingPlayer); // Function Killstreak.KSTeamState.NewPingRemoveRequest
	void NewPingChangeRequest(int32_t PingId, struct AKSPlayerState* PingingPlayer, struct AKSPlayerState* AcknowledgingPlayer); // Function Killstreak.KSTeamState.NewPingChangeRequest
	bool IsEliminated(); // Function Killstreak.KSTeamState.IsEliminated
	bool IsDefending(); // Function Killstreak.KSTeamState.IsDefending
	bool IsAttacking(); // Function Killstreak.KSTeamState.IsAttacking
	enum class EExtractionTeamType GetTeamType(); // Function Killstreak.KSTeamState.GetTeamType
	struct FKSRespawnConfig GetRespawnConfig(); // Function Killstreak.KSTeamState.GetRespawnConfig
	int32_t GetRemainingRespawns(); // Function Killstreak.KSTeamState.GetRemainingRespawns
	int32_t GetPlayersRemaining(bool DownAsDead); // Function Killstreak.KSTeamState.GetPlayersRemaining
	int32_t GetNumberOfPlayers(); // Function Killstreak.KSTeamState.GetNumberOfPlayers
	int32_t GetLivesRemaining(bool CountDowned); // Function Killstreak.KSTeamState.GetLivesRemaining
	int32_t GetExpectedTeamSize(); // Function Killstreak.KSTeamState.GetExpectedTeamSize
	void GetAllPersistentTeamMembers(struct TArray<struct UKSPersistentPlayerData*> OutPersistentTeamMembers); // Function Killstreak.KSTeamState.GetAllPersistentTeamMembers
	struct TArray<struct AKSPlayerState*> GetAllMembers(); // Function Killstreak.KSTeamState.GetAllMembers
	void ForceResetTeamElimination(); // Function Killstreak.KSTeamState.ForceResetTeamElimination
	void EliminateTeam(); // Function Killstreak.KSTeamState.EliminateTeam
	bool AllPlayersEliminatedOrDowned(); // Function Killstreak.KSTeamState.AllPlayersEliminatedOrDowned
};

// Class Killstreak.KSTeamState_Control
// Size: 0x448 (Inherited: 0x440)
struct AKSTeamState_Control : public AKSTeamState {
	int32_t ControlScore; // 0x440(0x04)
	char UnknownData_444[0x4]; // 0x444(0x04)
};

// Class Killstreak.KSThreatComponent
// Size: 0x198 (Inherited: 0xb0)
struct UKSThreatComponent : public UActorComponent {
	float ThreatRefreshPeriod; // 0xb0(0x04)
	float CurrentThreat; // 0xb4(0x04)
	float ThreatBucketValue; // 0xb8(0x04)
	char UnknownData_BC[0xc]; // 0xbc(0x0c)
	struct UKSThreatComponent* OwningThreat; // 0xc8(0x08)
	struct TArray<struct UKSThreatComponent*> OwnedThreats; // 0xd0(0x10)
	struct AKSCharacter* OwningCharacter; // 0xe0(0x08)
	struct FWeakObjectPtr<struct AKSCharacter> LocalPlayerCharacter; // 0xe8(0x08)
	char UnknownData_F0[0x10]; // 0xf0(0x10)
	float SelfThreatValue; // 0x100(0x04)
	float AllyThreatValue; // 0x104(0x04)
	float DefaultThreatValue; // 0x108(0x04)
	char UnknownData_10C[0x4]; // 0x10c(0x04)
	struct TArray<float> BucketValues; // 0x110(0x10)
	bool bUseFocused; // 0x120(0x01)
	char UnknownData_121[0x3]; // 0x121(0x03)
	float FocusedValue; // 0x124(0x04)
	float FocusedWeight; // 0x128(0x04)
	float FocusedInnerAngle; // 0x12c(0x04)
	char UnknownData_130[0x4]; // 0x130(0x04)
	float FocusedOuterAngle; // 0x134(0x04)
	char UnknownData_138[0x4]; // 0x138(0x04)
	bool bUseFocusTarget; // 0x13c(0x01)
	char UnknownData_13D[0x3]; // 0x13d(0x03)
	float FocusTargetValue; // 0x140(0x04)
	float FocusTargetWeight; // 0x144(0x04)
	float FocusTargetInnerAngle; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)
	float FocusTargetOuterAngle; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
	bool bUseProximity; // 0x158(0x01)
	char UnknownData_159[0x3]; // 0x159(0x03)
	float ProximityValue; // 0x15c(0x04)
	float ProximityWeight; // 0x160(0x04)
	float ProximityInnerDistance; // 0x164(0x04)
	float ProximityOuterDistance; // 0x168(0x04)
	bool bUseBehind; // 0x16c(0x01)
	char UnknownData_16D[0x3]; // 0x16d(0x03)
	float BehindValue; // 0x170(0x04)
	float BehindWeight; // 0x174(0x04)
	float BehindInnerAngle; // 0x178(0x04)
	char UnknownData_17C[0x4]; // 0x17c(0x04)
	float BehindOuterAngle; // 0x180(0x04)
	char UnknownData_184[0x4]; // 0x184(0x04)
	bool bUseEffectiveRange; // 0x188(0x01)
	char UnknownData_189[0x3]; // 0x189(0x03)
	float EffectiveRangeValue; // 0x18c(0x04)
	float EffectiveRangeWeight; // 0x190(0x04)
	char UnknownData_194[0x4]; // 0x194(0x04)

	void DebugThreatLevels(bool Show); // Function Killstreak.KSThreatComponent.DebugThreatLevels
};

// Class Killstreak.KSTimerComponent
// Size: 0x168 (Inherited: 0xb0)
struct UKSTimerComponent : public UActorComponent {
	struct FMulticastInlineDelegate TimerActive; // 0xb0(0x10)
	struct FMulticastInlineDelegate TimerComplete; // 0xc0(0x10)
	struct FPGame_ReplicatedTimer ReplicatedTimer; // 0xd0(0x38)
	struct FKSTimerState TimerState; // 0x108(0x02)
	struct FKSTimerState LocalTimerState; // 0x10a(0x02)
	char UnknownData_10C[0x5c]; // 0x10c(0x5c)

	void StopTimer(); // Function Killstreak.KSTimerComponent.StopTimer
	void StartTimer(float Seconds); // Function Killstreak.KSTimerComponent.StartTimer
	void OnRep_TimerState(); // Function Killstreak.KSTimerComponent.OnRep_TimerState
	bool IsTimerComplete(); // Function Killstreak.KSTimerComponent.IsTimerComplete
	bool IsTimerActive(); // Function Killstreak.KSTimerComponent.IsTimerActive
	float GetTimeRemaining(); // Function Killstreak.KSTimerComponent.GetTimeRemaining
	float GetInitialTime(); // Function Killstreak.KSTimerComponent.GetInitialTime
};

// Class Killstreak.KSTitle
// Size: 0x180 (Inherited: 0x168)
struct UKSTitle : public UKSItem {
	struct FText TitleText; // 0x168(0x18)
};

// Class Killstreak.KSUISessionManager
// Size: 0x90 (Inherited: 0x28)
struct UKSUISessionManager : public UObject {
	char UnknownData_28[0x64]; // 0x28(0x64)
	bool bAchievementIntegrationEnabled; // 0x8c(0x01)
	bool bHasInitialInventory; // 0x8d(0x01)
	char UnknownData_8E[0x2]; // 0x8e(0x02)
};

// Class Killstreak.KSVehicle
// Size: 0x610 (Inherited: 0x290)
struct AKSVehicle : public AWheeledVehicle {
	char UnknownData_290[0x10]; // 0x290(0x10)
	struct UKSVehicleMovementComponent4W* KSVehicleMovementComponent; // 0x2a0(0x08)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x2a8(0x08)
	struct TArray<struct UKSVehicleSeatComponent*> Seats; // 0x2b0(0x10)
	struct TMap<struct AKSCharacter*, struct UKSVehicleSeatComponent*> RiderMap; // 0x2c0(0x50)
	struct FMulticastInlineDelegate OnVehicleSeatingChanged; // 0x310(0x10)
	struct FText VehicleName; // 0x320(0x18)
	float TimeToGetIn; // 0x338(0x04)
	float MaxSpeedToEnter; // 0x33c(0x04)
	float MaxAngleFromVehicleToInteract; // 0x340(0x04)
	float SwapToDriverSeatHoldTime; // 0x344(0x04)
	struct AKSCharacter* Driver; // 0x348(0x08)
	struct TArray<struct FKSRiderSeatPair> Riders; // 0x350(0x10)
	struct TArray<struct AKSCharacter*> Interacters; // 0x360(0x10)
	char UnknownData_370[0x1]; // 0x370(0x01)
	bool PreventRiderSilhouette; // 0x371(0x01)
	char UnknownData_372[0x2]; // 0x372(0x02)
	float DetachedParachuteLinearDamping; // 0x374(0x04)
	float TimeUntilParachuteDestroyed; // 0x378(0x04)
	struct FVector ParachuteDetachImpulse; // 0x37c(0x0c)
	struct TArray<struct FName> ParachuteImpulseBoneNames; // 0x388(0x10)
	struct USkeletalMeshComponent* ParachuteMesh; // 0x398(0x08)
	char UnknownData_3A0[0x38]; // 0x3a0(0x38)
	struct FMulticastInlineDelegate OnManualDetachmentAvailable; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnManualDetachmentUnavailable; // 0x3e8(0x10)
	char UnknownData_3F8[0x8]; // 0x3f8(0x08)
	struct TArray<struct FName> ValidInteractionTypes; // 0x400(0x10)
	struct USpringArmComponent* SpringArm; // 0x410(0x08)
	struct UCameraComponent* MainCamera; // 0x418(0x08)
	char UnknownData_420[0x18]; // 0x420(0x18)
	float RiderCameraBlendTime; // 0x438(0x04)
	float RiderCameraBlendExponent; // 0x43c(0x04)
	float CameraXTurnRate; // 0x440(0x04)
	float CameraYTurnRate; // 0x444(0x04)
	float CameraDeadZoneRate; // 0x448(0x04)
	float CameraMinHorizontalAngle; // 0x44c(0x04)
	float CameraMaxHorizontalAngle; // 0x450(0x04)
	float CameraMinVerticalAngle; // 0x454(0x04)
	float CameraMaxVerticalAngle; // 0x458(0x04)
	struct FReplicatedViewInfo ViewInfo; // 0x45c(0x08)
	float MaxHealth; // 0x464(0x04)
	float CurrentHealth; // 0x468(0x04)
	char UnknownData_46C[0x4]; // 0x46c(0x04)
	float CurrentHealthStage; // 0x470(0x04)
	char UnknownData_474[0x4]; // 0x474(0x04)
	struct FMulticastInlineDelegate OnVehicleHealthChanged; // 0x478(0x10)
	bool Destroyed; // 0x488(0x01)
	char UnknownData_489[0x3]; // 0x489(0x03)
	struct FVector LocalImpulsePosition; // 0x48c(0x0c)
	struct UStaticMeshComponent* DestroyedMesh; // 0x498(0x08)
	struct TArray<struct UPrimitiveComponent*> DamageableComponents; // 0x4a0(0x10)
	char UnknownData_4B0[0x8]; // 0x4b0(0x08)
	struct TMap<float, struct FKSVehicleDestructionStage> HealthStages; // 0x4b8(0x50)
	struct TMap<enum class EDamageCategory, float> Vulnerabilities; // 0x508(0x50)
	float DamageImpulseMultiplier; // 0x558(0x04)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
	struct UKSWeaponAsset* DestructionDamageWeapon; // 0x560(0x08)
	struct UDamageType* DestructionDamageTypeClass; // 0x568(0x08)
	char UnknownData_570[0x40]; // 0x570(0x40)
	float MinSpeedToDamageHitPlayer; // 0x5b0(0x04)
	float MaxSpeedToDamageHitPlayer; // 0x5b4(0x04)
	float MinPlayerDamageMultiplier; // 0x5b8(0x04)
	float MaxPlayerDamageMultiplier; // 0x5bc(0x04)
	float PlayerDamageCooldown; // 0x5c0(0x04)
	float MinSpeedForImpactDamage; // 0x5c4(0x04)
	float MaxSpeedForImpactDamage; // 0x5c8(0x04)
	float MinImpactDamage; // 0x5cc(0x04)
	float MaxImpactDamage; // 0x5d0(0x04)
	float VehicleDamageCooldown; // 0x5d4(0x04)
	float MinImpactAngleFromVehicleUp; // 0x5d8(0x04)
	float MaxImpactAngleFromVehicleUp; // 0x5dc(0x04)
	float MinAngleToSlideCorrect; // 0x5e0(0x04)
	float MaxAngleToSlideCorrect; // 0x5e4(0x04)
	float MaxSlideCorrectionSpeed; // 0x5e8(0x04)
	char UnknownData_5EC[0xc]; // 0x5ec(0x0c)
	struct UKSWeaponAsset* ImpactDamageWeapon; // 0x5f8(0x08)
	struct UDamageType* ImpactDamageTypeClass; // 0x600(0x08)
	struct UCapsuleComponent* PlayerHitComponent; // 0x608(0x08)

	void VehicleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComponent, struct FVector NormalImpulse, struct FHitResult Hit); // Function Killstreak.KSVehicle.VehicleHit
	void VehicleFeatureReleased(); // Function Killstreak.KSVehicle.VehicleFeatureReleased
	void VehicleFeaturePressed(); // Function Killstreak.KSVehicle.VehicleFeaturePressed
	void VehicleFeature(bool Pressed); // Function Killstreak.KSVehicle.VehicleFeature
	void UseReleased(); // Function Killstreak.KSVehicle.UseReleased
	void UsePressed(); // Function Killstreak.KSVehicle.UsePressed
	void TurnCameraY(float Rate); // Function Killstreak.KSVehicle.TurnCameraY
	void TurnCameraX(float Rate); // Function Killstreak.KSVehicle.TurnCameraX
	void SwapReleased(); // Function Killstreak.KSVehicle.SwapReleased
	void SwapPressed(); // Function Killstreak.KSVehicle.SwapPressed
	void StopParachute(); // Function Killstreak.KSVehicle.StopParachute
	void Steer(float Value); // Function Killstreak.KSVehicle.Steer
	void StartParachute(); // Function Killstreak.KSVehicle.StartParachute
	void ServerVehicleFeature(bool Pressed); // Function Killstreak.KSVehicle.ServerVehicleFeature
	void ServerUpdateRotation(struct FReplicatedViewInfo NewViewInfo); // Function Killstreak.KSVehicle.ServerUpdateRotation
	void ServerHorn(bool Pressed); // Function Killstreak.KSVehicle.ServerHorn
	void ServerGetOut(struct AKSCharacter* Rider); // Function Killstreak.KSVehicle.ServerGetOut
	void ServerGetInNextEmptySeat(struct AKSCharacter* Rider); // Function Killstreak.KSVehicle.ServerGetInNextEmptySeat
	void ServerAirSpeed(float Value); // Function Killstreak.KSVehicle.ServerAirSpeed
	void RiderDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSVehicle.RiderDestroyed
	void ResetVehicle(struct FRoundInitState RoundInitState); // Function Killstreak.KSVehicle.ResetVehicle
	void ResetInput(); // Function Killstreak.KSVehicle.ResetInput
	void ResetCameraRotations(); // Function Killstreak.KSVehicle.ResetCameraRotations
	void PlayHealthStageChange(struct FKSVehicleDestructionStage Stage); // Function Killstreak.KSVehicle.PlayHealthStageChange
	void OnRep_Riders(); // Function Killstreak.KSVehicle.OnRep_Riders
	void OnRep_Driver(); // Function Killstreak.KSVehicle.OnRep_Driver
	void OnRep_Destroyed(); // Function Killstreak.KSVehicle.OnRep_Destroyed
	void OnRep_CurrentHealthStage(); // Function Killstreak.KSVehicle.OnRep_CurrentHealthStage
	void OnRep_CurrentHealth(); // Function Killstreak.KSVehicle.OnRep_CurrentHealth
	void MoveForward(float Value); // Function Killstreak.KSVehicle.MoveForward
	void HornReleased(); // Function Killstreak.KSVehicle.HornReleased
	void HornPressed(); // Function Killstreak.KSVehicle.HornPressed
	void Horn(bool Pressed); // Function Killstreak.KSVehicle.Horn
	void HideParachute(); // Function Killstreak.KSVehicle.HideParachute
	bool GetInHighestPriorityEmptySeat(struct AKSCharacter* Rider); // Function Killstreak.KSVehicle.GetInHighestPriorityEmptySeat
	struct AKSCharacter* GetDriver(); // Function Killstreak.KSVehicle.GetDriver
	void Explode(); // Function Killstreak.KSVehicle.Explode
	void ExitPressed(); // Function Killstreak.KSVehicle.ExitPressed
	void Deteriorate(); // Function Killstreak.KSVehicle.Deteriorate
	void BroadcastVehicleFeature(bool Pressed); // Function Killstreak.KSVehicle.BroadcastVehicleFeature
	void BroadcastHorn(bool Pressed); // Function Killstreak.KSVehicle.BroadcastHorn
	void Brake(float Value); // Function Killstreak.KSVehicle.Brake
	void AirSpeed(float Value); // Function Killstreak.KSVehicle.AirSpeed
};

// Class Killstreak.KSVehicle_Remote
// Size: 0x6b0 (Inherited: 0x610)
struct AKSVehicle_Remote : public AKSVehicle {
	struct AKSCharacter* OwningCharacter; // 0x610(0x08)
	struct FVector JumpVector; // 0x618(0x0c)
	struct FVector JumpGroundTraceVector; // 0x624(0x0c)
	float JumpCooldown; // 0x630(0x04)
	char UnknownData_634[0xc]; // 0x634(0x0c)
	float TotalBatteryDuration; // 0x640(0x04)
	float UpdateReplicatedBatteryTimerPeriod; // 0x644(0x04)
	char UnknownData_648[0x10]; // 0x648(0x10)
	struct FPGame_ReplicatedTimer ReplicatedBatteryTimer; // 0x658(0x38)
	float RevealHoldDuration; // 0x690(0x04)
	float RevealConeAngle; // 0x694(0x04)
	float RevealMaxDistance; // 0x698(0x04)
	float RevealEffectDuration; // 0x69c(0x04)
	char UnknownData_6A0[0x10]; // 0x6a0(0x10)

	void SetOwningCharacter(struct AKSCharacter* Rider); // Function Killstreak.KSVehicle_Remote.SetOwningCharacter
	void OnRep_OwningCharacter(); // Function Killstreak.KSVehicle_Remote.OnRep_OwningCharacter
	void Jump(); // Function Killstreak.KSVehicle_Remote.Jump
	void GetRemainingBattery(float RemainingTime, float TotalTime); // Function Killstreak.KSVehicle_Remote.GetRemainingBattery
	void ExecuteReveal(); // Function Killstreak.KSVehicle_Remote.ExecuteReveal
};

// Class Killstreak.KSVehicleMovementComponent4W
// Size: 0x458 (Inherited: 0x408)
struct UKSVehicleMovementComponent4W : public UWheeledVehicleMovementComponent4W {
	bool ParachuteDeployed; // 0x408(0x01)
	bool ParachuteDetached; // 0x409(0x01)
	char UnknownData_40A[0x2]; // 0x40a(0x02)
	float SpeedToConsiderParachuteDeployment; // 0x40c(0x04)
	float DistanceToDeployParachute; // 0x410(0x04)
	float DistanceToDetachParachute; // 0x414(0x04)
	float DistanceToAllowManualDetachment; // 0x418(0x04)
	float TimeUntilParachuteDeployed; // 0x41c(0x04)
	float ParachuteDownwardSpeed; // 0x420(0x04)
	bool ManualDetachmentAllowed; // 0x424(0x01)
	char UnknownData_425[0x3]; // 0x425(0x03)
	float ReorientedPitch; // 0x428(0x04)
	float TimeToReorientPitch; // 0x42c(0x04)
	float FallingTurnSpeed; // 0x430(0x04)
	float SlowFallingSpeed; // 0x434(0x04)
	float DefaultFallingSpeed; // 0x438(0x04)
	float FastFallingSpeed; // 0x43c(0x04)
	float TimeToReachDesiredFallSpeed; // 0x440(0x04)
	float AirSpeedInput; // 0x444(0x04)
	float MaxAngleToPreventRoll; // 0x448(0x04)
	char UnknownData_44C[0xc]; // 0x44c(0x0c)

	void StopParachute(); // Function Killstreak.KSVehicleMovementComponent4W.StopParachute
	void StartParachute(); // Function Killstreak.KSVehicleMovementComponent4W.StartParachute
	void OnRep_ParachuteDeployed(); // Function Killstreak.KSVehicleMovementComponent4W.OnRep_ParachuteDeployed
	void OnRep_ManualDetachmentAllowed(); // Function Killstreak.KSVehicleMovementComponent4W.OnRep_ManualDetachmentAllowed
	void AttemptManualDetachment(); // Function Killstreak.KSVehicleMovementComponent4W.AttemptManualDetachment
};

// Class Killstreak.KSVehicleSeatComponent
// Size: 0x260 (Inherited: 0x210)
struct UKSVehicleSeatComponent : public USceneComponent {
	float SeatPriority; // 0x208(0x04)
	struct FReplicatedViewInfo MainCameraViewInfo; // 0x20c(0x08)
	struct FReplicatedViewInfo AimCameraViewInfo; // 0x214(0x08)
	char UnknownData_224[0x10]; // 0x224(0x10)
	struct FName AttachSocket; // 0x234(0x08)
	char UnknownData_23C[0x4]; // 0x23c(0x04)
	struct UAnimMontage* GetInSequence; // 0x240(0x08)
	struct UAnimMontage* GetOutSequence; // 0x248(0x08)
	struct UAnimSequence* IdleSequence; // 0x250(0x08)
	struct UAnimSequence* LeanOutSequence; // 0x258(0x08)

	struct USpringArmComponent* GetSeatSpringArm(); // Function Killstreak.KSVehicleSeatComponent.GetSeatSpringArm
};

// Class Killstreak.KSVehicleWheel
// Size: 0x168 (Inherited: 0xf0)
struct UKSVehicleWheel : public UVehicleWheel {
	struct TMap<char, struct UParticleSystem*> WheelEffectMap; // 0xf0(0x50)
	struct UParticleSystemComponent* WheelParticleSystem; // 0x140(0x08)
	struct FName AttachSocketOverrideName; // 0x148(0x08)
	struct FName VehicleSpeedParticleParameter; // 0x150(0x08)
	float EffectSpeedInterpolationAlpha; // 0x158(0x04)
	float MinimumWheelEffectSpeed; // 0x15c(0x04)
	float MaximumWheelEffectSpeed; // 0x160(0x04)
	char UnknownData_164[0x4]; // 0x164(0x04)
};

// Class Killstreak.KSViewModel
// Size: 0x5f8 (Inherited: 0x220)
struct AKSViewModel : public AActor {
	char UnknownData_220[0x178]; // 0x220(0x178)
	struct FName ViewModelName; // 0x398(0x08)
	struct FKSEquipmentContainer EquipmentContainer; // 0x3a0(0x1f0)
	struct FVector MaxAxisRotation; // 0x590(0x0c)
	float IdleSecondsToResetRotation; // 0x59c(0x04)
	float ResetRotationSpeedRadians; // 0x5a0(0x04)
	struct FVector RotationRatePerAxis; // 0x5a4(0x0c)
	char UnknownData_5B0[0x48]; // 0x5b0(0x48)

	void BeginRotationReset(); // Function Killstreak.KSViewModel.BeginRotationReset
};

// Class Killstreak.KSVOComponent
// Size: 0x150 (Inherited: 0xb0)
struct UKSVOComponent : public UActorComponent {
	struct AKSCharacter* CharacterOwner; // 0xb0(0x08)
	char UnknownData_B8[0x38]; // 0xb8(0x38)
	float GlobalCooldownDuration; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct TMap<int32_t, float> CooldownGroupMap; // 0xf8(0x50)
	float TimeNextEventCanPlayAfter; // 0x148(0x04)
	char UnknownData_14C[0x4]; // 0x14c(0x04)

	void TeamStateChanged(struct AKSPlayerState* PlayerState); // Function Killstreak.KSVOComponent.TeamStateChanged
	void ServerPostVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.ServerPostVO
	void PostVOToServer(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.PostVOToServer
	void PostVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.PostVO
	void PlayVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.PlayVO
	void PlayerStateChanged(struct AKSPlayerState* PlayerState); // Function Killstreak.KSVOComponent.PlayerStateChanged
	void OwnerPossessedBy(struct AController* Controller); // Function Killstreak.KSVOComponent.OwnerPossessedBy
	void OnReadyToPlay(); // Function Killstreak.KSVOComponent.OnReadyToPlay
	void ForcePlayVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.ForcePlayVO
	void ConditionalPlayVO(struct FKSVoicelineEvent VoicelineEvent); // Function Killstreak.KSVOComponent.ConditionalPlayVO
	void BindToTeamStateEvents(struct AKSTeamState* TeamState); // Function Killstreak.KSVOComponent.BindToTeamStateEvents
	void BindToPlayerStateEvents(struct AKSPlayerState* PlayerState); // Function Killstreak.KSVOComponent.BindToPlayerStateEvents
	void BindToPlayerControllerEvents(struct AKSPlayerController* PlayerController); // Function Killstreak.KSVOComponent.BindToPlayerControllerEvents
	void BindToPingManagerEvents(struct UKSPingManager* PingManager); // Function Killstreak.KSVOComponent.BindToPingManagerEvents
	void BindToGameStateEvents(struct AKSGameState* GameState); // Function Killstreak.KSVOComponent.BindToGameStateEvents
	void BindToEvents(); // Function Killstreak.KSVOComponent.BindToEvents
	void BindToCharacterEvents(struct AKSCharacter* Character); // Function Killstreak.KSVOComponent.BindToCharacterEvents
	void BindToActivatableModEvents(struct UKSModInst_Activated* ActivatableMod); // Function Killstreak.KSVOComponent.BindToActivatableModEvents
	void AnnounceBombSpotted(bool Armed); // Function Killstreak.KSVOComponent.AnnounceBombSpotted
};

// Class Killstreak.KSWaterFXVolume
// Size: 0x2d0 (Inherited: 0x258)
struct AKSWaterFXVolume : public ATriggerVolume {
	float WaterFXUpdatePeriod; // 0x258(0x04)
	float SurfaceOffsetZ; // 0x25c(0x04)
	struct TMap<struct AActor*, float> ActorCountdownMap; // 0x260(0x50)
	struct FBoxSphereBounds CachedBounds; // 0x2b0(0x1c)
	char UnknownData_2CC[0x4]; // 0x2cc(0x04)

	void OnWaterFXTriggered(struct AActor* TriggeringActor, struct FVector SurfaceRelevantLocation, bool bIsFullySubmerged); // Function Killstreak.KSWaterFXVolume.OnWaterFXTriggered
	void OnWaterExited(struct AActor* TriggeringActor, struct FVector SurfaceRelevantLocation, bool bIsFullySubmerged); // Function Killstreak.KSWaterFXVolume.OnWaterExited
	void OnWaterEntered(struct AActor* TriggeringActor, struct FVector SurfaceRelevantLocation, bool bIsFullySubmerged); // Function Killstreak.KSWaterFXVolume.OnWaterEntered
};

// Class Killstreak.KSWeaponAttachmentCosmeticInst
// Size: 0x1a8 (Inherited: 0x118)
struct UKSWeaponAttachmentCosmeticInst : public UKSEquipmentCosmeticComponent {
	char UnknownData_118[0x18]; // 0x118(0x18)
	struct UDataTable* DefaultAssetDataTable; // 0x130(0x08)
	int32_t DefaulAssetDataTablePriority; // 0x138(0x04)
	char UnknownData_13C[0x4]; // 0x13c(0x04)
	struct TSoftObjectPtr<struct UKSWeaponAttachmentSkinDetails> SkinDetailsPtr; // 0x140(0x28)
	char UnknownData_168[0x10]; // 0x168(0x10)
	struct UKSWeaponAttachment* AttachmentAsset; // 0x178(0x08)
	struct FGameplayTag AttachPoint; // 0x180(0x08)
	struct UKSWeaponComponent* ParentComponent; // 0x188(0x08)
	uint16_t ParentEquipmentId; // 0x190(0x02)
	char UnknownData_192[0x6]; // 0x192(0x06)
	struct UKSWeaponAsset* ParentWeaponAsset; // 0x198(0x08)
	bool bInitialized; // 0x1a0(0x01)
	char UnknownData_1A1[0x7]; // 0x1a1(0x07)

	void OnRep_ParentEquipmentId(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_ParentEquipmentId
	void OnRep_AttachPoint(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_AttachPoint
	void OnRep_AttachmentAsset(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_AttachmentAsset
	bool IsInitialized(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.IsInitialized
	struct UKSWeaponComponent* GetParentComponent(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.GetParentComponent
	bool GetLoadedMeshAnimAnimOverrideData(struct FLoadedWeaponAttachmentAnimationData OutData); // Function Killstreak.KSWeaponAttachmentCosmeticInst.GetLoadedMeshAnimAnimOverrideData
	struct FGameplayTag GetAttachPoint(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAttachPoint
	struct UKSWeaponAttachment* GetAttachmentAsset(); // Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAttachmentAsset
	void GetAccumulatedMeshAndAnimOverrideData(struct UKSWeaponAsset* InWeaponAsset, struct FWeaponAttachmentAnimationData OutData); // Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAccumulatedMeshAndAnimOverrideData
};

// Class Killstreak.KSWAttachmentCosmetic_VarScope
// Size: 0x1b8 (Inherited: 0x1a8)
struct UKSWAttachmentCosmetic_VarScope : public UKSWeaponAttachmentCosmeticInst {
	struct UKSWeaponAttachment_VarScope* VariableScopeAsset; // 0x1a8(0x08)
	char ScopeZoomIndex; // 0x1b0(0x01)
	char UnknownData_1B1[0x7]; // 0x1b1(0x07)

	void OnRep_ScopeZoomIndex(); // Function Killstreak.KSWAttachmentCosmetic_VarScope.OnRep_ScopeZoomIndex
};

// Class Killstreak.KSWayPoint
// Size: 0x2f8 (Inherited: 0x258)
struct AKSWayPoint : public AKSMapPoint {
	struct TMap<struct AKSWayPointSet*, struct FKSWayPointLink> WayPointSetLinks; // 0x258(0x50)
	struct FKSWayPointLink DefaultWayPointLinks; // 0x2a8(0x20)
	float DefensePointProbability; // 0x2c8(0x04)
	float DefensePointWaitTimeMin; // 0x2cc(0x04)
	float DefensePointWaitTimeMax; // 0x2d0(0x04)
	char UnknownData_2D4[0x4]; // 0x2d4(0x04)
	struct TArray<struct AKSDefensePoint*> DefensePointsForward; // 0x2d8(0x10)
	struct TArray<struct AKSDefensePoint*> DefensePointsReverse; // 0x2e8(0x10)

	struct TArray<struct AKSWayPoint*> GetNextWayPoints(struct AKSWayPointSet* WayPointSet); // Function Killstreak.KSWayPoint.GetNextWayPoints
};

// Class Killstreak.KSWayPointSet
// Size: 0x258 (Inherited: 0x220)
struct AKSWayPointSet : public AActor {
	int32_t WayPointSet; // 0x220(0x04)
	char UnknownData_224[0x4]; // 0x224(0x04)
	struct TArray<struct AKSWayPoint*> Waypoints; // 0x228(0x10)
	struct TArray<int32_t> ForwardSides; // 0x238(0x10)
	struct TArray<int32_t> ReversingSides; // 0x248(0x10)

	void UpdateWayPointVisuals(); // Function Killstreak.KSWayPointSet.UpdateWayPointVisuals
	bool ShouldSideReverseOnThisWaypointSet(int32_t SideNum); // Function Killstreak.KSWayPointSet.ShouldSideReverseOnThisWaypointSet
	void LinkWayPoints(); // Function Killstreak.KSWayPointSet.LinkWayPoints
	bool CanSideUseThisWaypointSet(int32_t SideNum); // Function Killstreak.KSWayPointSet.CanSideUseThisWaypointSet
};

// Class Killstreak.KSWeapon_Aimed
// Size: 0x818 (Inherited: 0x6e8)
struct AKSWeapon_Aimed : public AKSWeapon {
	struct FAimData CachedAim; // 0x6e8(0x50)
	uint16_t LastHitValidationRequestId; // 0x738(0x02)
	char UnknownData_73A[0x6]; // 0x73a(0x06)
	struct TMap<uint16_t, struct FHitValidationRecoveryInfo> HitValidationRecoveryList; // 0x740(0x50)
	bool bAimOverShoulder; // 0x790(0x01)
	char UnknownData_791[0x3]; // 0x791(0x03)
	float CachedAimBonus; // 0x794(0x04)
	bool bApplyAccuracyServerSide; // 0x798(0x01)
	char UnknownData_799[0x1f]; // 0x799(0x1f)
	float Range; // 0x7b8(0x04)
	enum class EFiredReplicationFlags FiredReplicationFlags; // 0x7bc(0x01)
	char UnknownData_7BD[0x3]; // 0x7bd(0x03)
	struct UKSAimCorrectionData* AimAssistCorrectionData; // 0x7c0(0x08)
	bool bAllowAimCorrection; // 0x7c8(0x01)
	char UnknownData_7C9[0x3]; // 0x7c9(0x03)
	float HeadAimCorrectionOffset; // 0x7cc(0x04)
	float HeadAimCorrectionOffsetPC; // 0x7d0(0x04)
	float HeadAimCorrectionRange; // 0x7d4(0x04)
	float BodyAimCorrectionOffset; // 0x7d8(0x04)
	float BodyAimCorrectionOffsetPC; // 0x7dc(0x04)
	float BodyAimCorrectionRange; // 0x7e0(0x04)
	bool bAllowHipAimCorrection; // 0x7e4(0x01)
	char UnknownData_7E5[0x3]; // 0x7e5(0x03)
	float HeadHipAimCorrectionOffset; // 0x7e8(0x04)
	float HeadHipMouseAimCorrectionOffset; // 0x7ec(0x04)
	float HeadHipAimCorrectionRange; // 0x7f0(0x04)
	float BodyHipAimCorrectionOffset; // 0x7f4(0x04)
	float BodyHipMouseAimCorrectionOffset; // 0x7f8(0x04)
	float BodyHipAimCorrectionRange; // 0x7fc(0x04)
	float ValidationSweepRadius; // 0x800(0x04)
	float AimOriginOffsetLenience; // 0x804(0x04)
	float AimOriginAngularLenience; // 0x808(0x04)
	float MinimumShotDirCoincidence; // 0x80c(0x04)
	float CosAngularLenience; // 0x810(0x04)
	char UnknownData_814[0x4]; // 0x814(0x04)

	void ValidateReceivedAimData(struct FAimData ReceivedAim); // Function Killstreak.KSWeapon_Aimed.ValidateReceivedAimData
	void ValidateHitWithAimData(struct FHitResult Hit, struct FAimData ReceivedAim); // Function Killstreak.KSWeapon_Aimed.ValidateHitWithAimData
	struct FAimData StaticDefaultGetAim(struct UKSWeaponAsset* InWeaponAsset, struct AActor* InWeaponOwner, enum class EKSCharacterAimMode InAimMode); // Function Killstreak.KSWeapon_Aimed.StaticDefaultGetAim
	void ServerSetAimOverShoulder(bool bNewAimDownSights); // Function Killstreak.KSWeapon_Aimed.ServerSetAimOverShoulder
	void ServerReFireWeaponAimed(struct FWeaponStateChangeRequest request, struct FAimData ReceivedAim); // Function Killstreak.KSWeapon_Aimed.ServerReFireWeaponAimed
	void ServerProcessHits(struct FAimData ReceivedAim, struct TArray<struct FHitResult> Hits, uint16_t RequestID); // Function Killstreak.KSWeapon_Aimed.ServerProcessHits
	void ServerFireWeaponAimedCompressed(struct FWeaponStateChangeRequest request, struct FAimData ReceivedAim, uint16_t LastRequestId); // Function Killstreak.KSWeapon_Aimed.ServerFireWeaponAimedCompressed
	void ServerFireWeaponAimed(struct FWeaponStateChangeRequest request, struct FAimData ReceivedAim); // Function Killstreak.KSWeapon_Aimed.ServerFireWeaponAimed
	bool IsInOrTransitioningToAOS(); // Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToAOS
	bool IsInOrTransitioningToAlternate(); // Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToAlternate
	bool IsInOrTransitioningToADS(); // Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToADS
	bool IsAimingOverShoulder(); // Function Killstreak.KSWeapon_Aimed.IsAimingOverShoulder
	bool IsAimingDownSights(); // Function Killstreak.KSWeapon_Aimed.IsAimingDownSights
	bool IsAimingAlternate(); // Function Killstreak.KSWeapon_Aimed.IsAimingAlternate
	bool IsAiming(); // Function Killstreak.KSWeapon_Aimed.IsAiming
	void InternalGetActorsToIgnore(struct TArray<struct AActor*> ActorsToIgnore); // Function Killstreak.KSWeapon_Aimed.InternalGetActorsToIgnore
	float GetRange(); // Function Killstreak.KSWeapon_Aimed.GetRange
	enum class EKSCharacterAimMode GetOwnerAimMode(); // Function Killstreak.KSWeapon_Aimed.GetOwnerAimMode
	float GetHeadAimCorrectionRange(); // Function Killstreak.KSWeapon_Aimed.GetHeadAimCorrectionRange
	float GetHeadAimCorrectionOffset(bool bMouse); // Function Killstreak.KSWeapon_Aimed.GetHeadAimCorrectionOffset
	struct FFullFireRepData GetFullFireRepData(); // Function Killstreak.KSWeapon_Aimed.GetFullFireRepData
	float GetCurrentAccuracy(); // Function Killstreak.KSWeapon_Aimed.GetCurrentAccuracy
	struct FAimData GetCachedAim(); // Function Killstreak.KSWeapon_Aimed.GetCachedAim
	struct FAimData GetAim(); // Function Killstreak.KSWeapon_Aimed.GetAim
	struct TArray<struct AActor*> GetActorsToIgnore(); // Function Killstreak.KSWeapon_Aimed.GetActorsToIgnore
	void ApplyView(struct FAimData InAim, struct FAimData OutAim); // Function Killstreak.KSWeapon_Aimed.ApplyView
	bool ApplyAimAssist(struct FAimData InOutAim); // Function Killstreak.KSWeapon_Aimed.ApplyAimAssist
	void ApplyAccuracy(struct FAimData InAim, struct FAimData OutAim); // Function Killstreak.KSWeapon_Aimed.ApplyAccuracy
	bool AllowAimCorrection(); // Function Killstreak.KSWeapon_Aimed.AllowAimCorrection
};

// Class Killstreak.KSWeapon_Build
// Size: 0x8e0 (Inherited: 0x818)
struct AKSWeapon_Build : public AKSWeapon_Aimed {
	char UnknownData_818[0x18]; // 0x818(0x18)
	struct FMulticastInlineDelegate OnInvalidBuildPlacementDel; // 0x830(0x10)
	char UnknownData_840[0x18]; // 0x840(0x18)
	struct FMulticastInlineDelegate OnValidBuildPlacementDel; // 0x858(0x10)
	struct FVector BuildLocationOffset; // 0x868(0x0c)
	float MaxAdjustBuildDistance; // 0x874(0x04)
	struct AKSBuildPreview* BuildPreviewActor; // 0x878(0x08)
	enum class EKSBuildState BuildState; // 0x880(0x01)
	char UnknownData_881[0x47]; // 0x881(0x47)
	struct FMulticastInlineDelegate OnBuildSpawned; // 0x8c8(0x10)
	char UnknownData_8D8[0x8]; // 0x8d8(0x08)

	void OnRep_BuildState(); // Function Killstreak.KSWeapon_Build.OnRep_BuildState
	void GetDesiredBuildLocationAndRotation(struct FVector OutLocation, struct FRotator OutRotation); // Function Killstreak.KSWeapon_Build.GetDesiredBuildLocationAndRotation
	struct AKSBuildPreview* GetBuildPreviewActorClass(); // Function Killstreak.KSWeapon_Build.GetBuildPreviewActorClass
	struct AKSBuild* GetBuildActorClass(); // Function Killstreak.KSWeapon_Build.GetBuildActorClass
};

// Class Killstreak.KSWeapon_DirectTarget
// Size: 0x700 (Inherited: 0x6e8)
struct AKSWeapon_DirectTarget : public AKSWeapon {
	struct AActor* ActiveTarget; // 0x6e8(0x08)
	struct FKSTargeterConfig TargeterConfig; // 0x6f0(0x0c)
	char UnknownData_6FC[0x4]; // 0x6fc(0x04)

	void SubmitTargetSelection(struct AActor* TargetCandidate); // Function Killstreak.KSWeapon_DirectTarget.SubmitTargetSelection
	void PopulateValidTargets(struct TArray<struct AActor*> ValidTargetArray); // Function Killstreak.KSWeapon_DirectTarget.PopulateValidTargets
	void OnActiveTargetDestroyed(struct AActor* DestroyedActor); // Function Killstreak.KSWeapon_DirectTarget.OnActiveTargetDestroyed
	bool IsTargetValid(struct AActor* TestActor); // Function Killstreak.KSWeapon_DirectTarget.IsTargetValid
	void ClientRejectTargetSelection(); // Function Killstreak.KSWeapon_DirectTarget.ClientRejectTargetSelection
};

// Class Killstreak.KSWeapon_Projectile
// Size: 0x820 (Inherited: 0x818)
struct AKSWeapon_Projectile : public AKSWeapon_Aimed {
	char UnknownData_818[0x8]; // 0x818(0x08)

	void OnFullyCooked(); // Function Killstreak.KSWeapon_Projectile.OnFullyCooked
};

// Class Killstreak.KSWeapon_GrenadeThrow
// Size: 0x858 (Inherited: 0x820)
struct AKSWeapon_GrenadeThrow : public AKSWeapon_Projectile {
	char UnknownData_820[0x18]; // 0x820(0x18)
	struct FMulticastInlineDelegate OnGrenadeThrown; // 0x838(0x10)
	char UnknownData_848[0x10]; // 0x848(0x10)

	void OnFuseTimerExpired(float MinHandRemainingFuse); // Function Killstreak.KSWeapon_GrenadeThrow.OnFuseTimerExpired
	void DoFumble(); // Function Killstreak.KSWeapon_GrenadeThrow.DoFumble
};

// Class Killstreak.KSWeapon_MacGuffin
// Size: 0x828 (Inherited: 0x818)
struct AKSWeapon_MacGuffin : public AKSWeapon_Aimed {
	bool bDropOffSuccess; // 0x818(0x01)
	bool bHasBeenDropped; // 0x819(0x01)
	char UnknownData_81A[0x2]; // 0x81a(0x02)
	float DropThrowSpeed; // 0x81c(0x04)
	float DropPositionOffset; // 0x820(0x04)
	char UnknownData_824[0x4]; // 0x824(0x04)
};

// Class Killstreak.KSWeapon_Melee
// Size: 0x890 (Inherited: 0x818)
struct AKSWeapon_Melee : public AKSWeapon_Aimed {
	struct FMulticastInlineDelegate OnMeleeHit; // 0x818(0x10)
	char UnknownData_828[0x18]; // 0x828(0x18)
	struct FMulticastInlineDelegate OnProjectileSpawned; // 0x840(0x10)
	char UnknownData_850[0x20]; // 0x850(0x20)
	struct AKSProjectile* Projectile; // 0x870(0x08)
	struct AKSProjectile* FakeProjectile; // 0x878(0x08)
	struct UKSWeaponAsset_Melee* MeleeWeaponAsset; // 0x880(0x08)
	bool bIsInQuickMelee; // 0x888(0x01)
	char UnknownData_889[0x7]; // 0x889(0x07)

	void OnRep_Projectile(); // Function Killstreak.KSWeapon_Melee.OnRep_Projectile
	void OnOwnerAimStateChanged(enum class EKSCharacterAimMode WeaponStateChange); // Function Killstreak.KSWeapon_Melee.OnOwnerAimStateChanged
	void OnLungingChanged(bool Lunging); // Function Killstreak.KSWeapon_Melee.OnLungingChanged
	void JumpToFire(enum class EWeaponStateNew PreviousState); // Function Killstreak.KSWeapon_Melee.JumpToFire
	void IncPrefireSkipWindow(); // Function Killstreak.KSWeapon_Melee.IncPrefireSkipWindow
	struct AKSProjectile* GetProjectile(); // Function Killstreak.KSWeapon_Melee.GetProjectile
};

// Class Killstreak.KSWeapon_Proximity
// Size: 0x750 (Inherited: 0x6e8)
struct AKSWeapon_Proximity : public AKSWeapon {
	struct UKSProximityComponent* ProximityComponentClass; // 0x6e8(0x08)
	struct UKSProximityComponent* ProximityComponent; // 0x6f0(0x08)
	bool bCacheProximityActorsWhileFiring; // 0x6f8(0x01)
	bool bProximityActiveOnlyInHand; // 0x6f9(0x01)
	char UnknownData_6FA[0x6]; // 0x6fa(0x06)
	struct TArray<struct AActor*> ProximityActors; // 0x700(0x10)
	struct TArray<struct AActor*> CachedProximityActors; // 0x710(0x10)
	struct TArray<struct UPrimitiveComponent*> ProximityComponents; // 0x720(0x10)
	struct TArray<struct UPrimitiveComponent*> CachedProximityComponents; // 0x730(0x10)
	struct FMulticastInlineDelegate OnCachedProximityActorsUpdatedDel; // 0x740(0x10)

	void ProximityActorUpdated(struct AActor* Actor, struct UPrimitiveComponent* Component, struct FKSActorProximityInfo ProximityInfo); // Function Killstreak.KSWeapon_Proximity.ProximityActorUpdated
	void OnCachedProximityActorsUpdated(); // Function Killstreak.KSWeapon_Proximity.OnCachedProximityActorsUpdated
	struct FVector GetProximityTraceRelativeLocation(); // Function Killstreak.KSWeapon_Proximity.GetProximityTraceRelativeLocation
	struct UPrimitiveComponent* GetProximityComponent(); // Function Killstreak.KSWeapon_Proximity.GetProximityComponent
	struct TArray<struct AActor*> GetCachedProximityActors(); // Function Killstreak.KSWeapon_Proximity.GetCachedProximityActors
};

// Class Killstreak.KSWeapon_RemoteRocket
// Size: 0x728 (Inherited: 0x6e8)
struct AKSWeapon_RemoteRocket : public AKSWeapon {
	float CameraBlendTime; // 0x6e8(0x04)
	char CameraBlendFunction; // 0x6ec(0x01)
	char UnknownData_6ED[0x3]; // 0x6ed(0x03)
	float CameraBlendExp; // 0x6f0(0x04)
	bool CameraLockOutgoing; // 0x6f4(0x01)
	char UnknownData_6F5[0x3]; // 0x6f5(0x03)
	float PostDestroyDelay; // 0x6f8(0x04)
	char UnknownData_6FC[0x4]; // 0x6fc(0x04)
	struct AKSRocket* RemoteRocketToSpawn; // 0x700(0x08)
	struct FVector RemoteRocketRelativeLocation; // 0x708(0x0c)
	char UnknownData_714[0x4]; // 0x714(0x04)
	struct AKSRocket* SpawnedRemoteRocket; // 0x718(0x08)
	struct AController* RocketController; // 0x720(0x08)

	void OnRocketDestroyed(struct AActor* RocketActor); // Function Killstreak.KSWeapon_RemoteRocket.OnRocketDestroyed
	void OnPostDestroyDelayComplete(); // Function Killstreak.KSWeapon_RemoteRocket.OnPostDestroyDelayComplete
	struct AKSRocket* GetSpawnedRocket(); // Function Killstreak.KSWeapon_RemoteRocket.GetSpawnedRocket
	struct FTransform GetRocketSpawnWorldTransform(); // Function Killstreak.KSWeapon_RemoteRocket.GetRocketSpawnWorldTransform
};

// Class Killstreak.KSWeapon_RemoteThrow
// Size: 0x888 (Inherited: 0x858)
struct AKSWeapon_RemoteThrow : public AKSWeapon_GrenadeThrow {
	struct FMulticastInlineDelegate OnDetonatorEquipped; // 0x858(0x10)
	char UnknownData_868[0x10]; // 0x868(0x10)
	struct UKSWeaponAsset* DetonatorAsset; // 0x878(0x08)
	bool ReadyForDetonator; // 0x880(0x01)
	char UnknownData_881[0x7]; // 0x881(0x07)

	void SwapToDetonator(); // Function Killstreak.KSWeapon_RemoteThrow.SwapToDetonator
	void OnProjectileReleased(); // Function Killstreak.KSWeapon_RemoteThrow.OnProjectileReleased
	void OnAttachedChargeDestroyed(struct AActor* DestroyedCharge); // Function Killstreak.KSWeapon_RemoteThrow.OnAttachedChargeDestroyed
	void GetAttachedCharges(struct TArray<struct AKSProjectile_RemoteTrigger*> OutCharges); // Function Killstreak.KSWeapon_RemoteThrow.GetAttachedCharges
};

// Class Killstreak.KSWeapon_RemoteThrowAndTrigger
// Size: 0x898 (Inherited: 0x888)
struct AKSWeapon_RemoteThrowAndTrigger : public AKSWeapon_RemoteThrow {
	bool bUseSequentialDetonation; // 0x888(0x01)
	char UnknownData_889[0x3]; // 0x889(0x03)
	struct FName AltFireSubWeaponName; // 0x88c(0x08)
	char UnknownData_894[0x4]; // 0x894(0x04)
};

// Class Killstreak.KSWeapon_RemoteTrigger
// Size: 0x748 (Inherited: 0x6e8)
struct AKSWeapon_RemoteTrigger : public AKSWeapon {
	struct FMulticastInlineDelegate OnRemoteThrowEquipped; // 0x6e8(0x10)
	char UnknownData_6F8[0x20]; // 0x6f8(0x20)
	struct TArray<struct FWeakObjectPtr<struct AKSProjectile_RemoteTrigger>> AttachedCharges; // 0x718(0x10)
	float MaxDetonationRange; // 0x728(0x04)
	char UnknownData_72C[0x4]; // 0x72c(0x04)
	struct FMulticastInlineDelegate OnDetonationReady; // 0x730(0x10)
	struct FWeakObjectPtr<struct UKSWeaponAsset> RemoteThrowAsset; // 0x740(0x08)

	void SwapOffDetonator(); // Function Killstreak.KSWeapon_RemoteTrigger.SwapOffDetonator
	void OnAttachedChargeKilled(struct AKSProjectile* KilledProjectile); // Function Killstreak.KSWeapon_RemoteTrigger.OnAttachedChargeKilled
	void OnAttachedChargeDestroyed(struct AActor* DestroyedCharge); // Function Killstreak.KSWeapon_RemoteTrigger.OnAttachedChargeDestroyed
	void GetAttachedCharges(struct TArray<struct AKSProjectile_RemoteTrigger*> OutCharges); // Function Killstreak.KSWeapon_RemoteTrigger.GetAttachedCharges
	void Detonate(); // Function Killstreak.KSWeapon_RemoteTrigger.Detonate
};

// Class Killstreak.KSWeapon_RemoteVehicle
// Size: 0x730 (Inherited: 0x6e8)
struct AKSWeapon_RemoteVehicle : public AKSWeapon {
	struct AKSVehicle_Remote* RemoteVehicleToSpawn; // 0x6e8(0x08)
	struct FTransform RemoteVehicleRelativeTransform; // 0x6f0(0x30)
	struct AKSVehicle_Remote* SpawnedRemoteVehicle; // 0x720(0x08)
	char UnknownData_728[0x8]; // 0x728(0x08)

	void VehicleDestroyed(); // Function Killstreak.KSWeapon_RemoteVehicle.VehicleDestroyed
};

// Class Killstreak.KSWeapon_ReviveDartDirect
// Size: 0x728 (Inherited: 0x700)
struct AKSWeapon_ReviveDartDirect : public AKSWeapon_ReviveDirect {
	struct FWeakObjectPtr<struct AKSProjectile_ReviveDart> DartProjectile; // 0x700(0x08)
	struct FMulticastInlineDelegate OnSucceed; // 0x708(0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x718(0x10)

	void OnReviveSucceed(); // Function Killstreak.KSWeapon_ReviveDartDirect.OnReviveSucceed
	void OnReviveFailed(); // Function Killstreak.KSWeapon_ReviveDartDirect.OnReviveFailed
};

// Class Killstreak.KSWeapon_Targeted
// Size: 0x728 (Inherited: 0x6e8)
struct AKSWeapon_Targeted : public AKSWeapon {
	struct FMulticastInlineDelegate DisplayTargetList; // 0x6e8(0x10)
	struct FMulticastInlineDelegate TargetSelectCancelled; // 0x6f8(0x10)
	struct TArray<struct AActor*> PotentialTargets; // 0x708(0x10)
	bool SelectTargetOnRetrieve; // 0x718(0x01)
	char UnknownData_719[0x3]; // 0x719(0x03)
	struct FWeakObjectPtr<struct AActor> TargetedActor; // 0x71c(0x08)
	char UnknownData_724[0x4]; // 0x724(0x04)

	bool TargetCurrentlyValid(struct AActor* TestTarget); // Function Killstreak.KSWeapon_Targeted.TargetCurrentlyValid
	void SubmitTargetedActor(struct AActor* TargetActor); // Function Killstreak.KSWeapon_Targeted.SubmitTargetedActor
	void ConfirmTargetSelection(struct AActor* TargetActor); // Function Killstreak.KSWeapon_Targeted.ConfirmTargetSelection
	void CancelTargetSelection(); // Function Killstreak.KSWeapon_Targeted.CancelTargetSelection
};

// Class Killstreak.KSWeapon_ReviveDrone
// Size: 0x738 (Inherited: 0x728)
struct AKSWeapon_ReviveDrone : public AKSWeapon_Targeted {
	struct AKSAgent_RevivalDrone* DroneClass; // 0x728(0x08)
	struct FWeakObjectPtr<struct AKSAgent_RevivalDrone> DroneActor; // 0x730(0x08)
};

// Class Killstreak.KSWeapon_ReviveDroneDirect
// Size: 0x770 (Inherited: 0x700)
struct AKSWeapon_ReviveDroneDirect : public AKSWeapon_ReviveDirect {
	struct FMulticastInlineDelegate OnDroneReviveBegin; // 0x700(0x10)
	struct FMulticastInlineDelegate OnDroneReviveComplete; // 0x710(0x10)
	struct FMulticastInlineDelegate OnDroneAbort; // 0x720(0x10)
	struct FMulticastInlineDelegate OnDroneTargetRevive; // 0x730(0x10)
	struct FMulticastInlineDelegate OnDroneDestroyed; // 0x740(0x10)
	struct FMulticastInlineDelegate OnDroneSpawned; // 0x750(0x10)
	struct AKSAgent_RevivalDrone* DroneClass; // 0x760(0x08)
	struct FWeakObjectPtr<struct AKSAgent_RevivalDrone> DroneActor; // 0x768(0x08)

	void OnRep_DroneActor(); // Function Killstreak.KSWeapon_ReviveDroneDirect.OnRep_DroneActor
	void OnDroneDestroy(struct AActor* SupposedDroneActor); // Function Killstreak.KSWeapon_ReviveDroneDirect.OnDroneDestroy
	void OnDroneAborted(); // Function Killstreak.KSWeapon_ReviveDroneDirect.OnDroneAborted
	void GetDesiredSpawnLocationAndRotation(struct FVector OutLocation, struct FRotator OutRotation); // Function Killstreak.KSWeapon_ReviveDroneDirect.GetDesiredSpawnLocationAndRotation
};

// Class Killstreak.KSWeapon_Shotgun
// Size: 0x828 (Inherited: 0x818)
struct AKSWeapon_Shotgun : public AKSWeapon_Aimed {
	struct TArray<struct FAimData> CachedPelletSpread; // 0x818(0x10)
};

// Class Killstreak.KSWeapon_TargetSurface
// Size: 0x840 (Inherited: 0x818)
struct AKSWeapon_TargetSurface : public AKSWeapon_Aimed {
	struct FMulticastInlineDelegate OnSurfaceTargetFireFailure; // 0x818(0x10)
	struct FMulticastInlineDelegate OnSurfaceValidityChanged; // 0x828(0x10)
	bool ValidTarget; // 0x838(0x01)
	char UnknownData_839[0x7]; // 0x839(0x07)
};

// Class Killstreak.KSWeapon_Zipline
// Size: 0x850 (Inherited: 0x818)
struct AKSWeapon_Zipline : public AKSWeapon_Aimed {
	struct FMulticastInlineDelegate OnEndPointUpdated; // 0x818(0x10)
	struct AKSZipLine* ZipLineClass; // 0x828(0x08)
	struct AKSZipLine* Zipline; // 0x830(0x08)
	char PreviewTraceChannel; // 0x838(0x01)
	char UnknownData_839[0x3]; // 0x839(0x03)
	float MaxRange; // 0x83c(0x04)
	float MinRange; // 0x840(0x04)
	float ProjectileSpeed; // 0x844(0x04)
	char UnknownData_848[0x8]; // 0x848(0x08)
};

// Class Killstreak.KSWeaponAnimInstance
// Size: 0x340 (Inherited: 0x290)
struct UKSWeaponAnimInstance : public UKSAnimInstance {
	bool m_bIsReloading; // 0x290(0x01)
	char UnknownData_291[0x3]; // 0x291(0x03)
	float m_fIKAlpha; // 0x294(0x04)
	float m_fIKBlendInTime; // 0x298(0x04)
	float m_fIKBlendOutTime; // 0x29c(0x04)
	struct FVector m_vADSOffset; // 0x2a0(0x0c)
	bool m_bIsMoving; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	float m_fMovingAlpha; // 0x2b0(0x04)
	int32_t m_nFireImpulseCounter; // 0x2b4(0x04)
	bool m_bFireImpulse; // 0x2b8(0x01)
	char UnknownData_2B9[0x3]; // 0x2b9(0x03)
	float m_fADSAlpha; // 0x2bc(0x04)
	bool m_bIsSprinting; // 0x2c0(0x01)
	char UnknownData_2C1[0x3]; // 0x2c1(0x03)
	float m_fLeadingPitch; // 0x2c4(0x04)
	float m_fLeadingYaw; // 0x2c8(0x04)
	float m_fLeadingPitchADS; // 0x2cc(0x04)
	float m_fLeadingYawADS; // 0x2d0(0x04)
	struct FWeaponLeadingInfo LeadingPitch; // 0x2d4(0x10)
	struct FWeaponLeadingInfo LeadingYaw; // 0x2e4(0x10)
	struct FWeaponLeadingInfo LeadingPitchADS; // 0x2f4(0x10)
	struct FWeaponLeadingInfo LeadingYawADS; // 0x304(0x10)
	char UnknownData_314[0xc]; // 0x314(0x0c)
	int32_t m_LandImpulseCounter; // 0x320(0x04)
	int32_t m_JumpImpulseCounter; // 0x324(0x04)
	bool m_bFoldIronSights; // 0x328(0x01)
	char UnknownData_329[0x3]; // 0x329(0x03)
	int32_t WeaponAnimIndex; // 0x32c(0x04)
	bool bPlayerCrouching; // 0x330(0x01)
	char UnknownData_331[0x3]; // 0x331(0x03)
	float TempPhoneFlip; // 0x334(0x04)
	char UnknownData_338[0x8]; // 0x338(0x08)

	void PlayFireAnimationBP(); // Function Killstreak.KSWeaponAnimInstance.PlayFireAnimationBP
};

// Class Killstreak.KSWeaponAsset_Build
// Size: 0x7b8 (Inherited: 0x760)
struct UKSWeaponAsset_Build : public UKSWeaponAsset {
	SoftClassProperty SoftBuildActorClass; // 0x760(0x28)
	SoftClassProperty SoftBuildPreviewActorClass; // 0x788(0x28)
	float BuildActivationDelay; // 0x7b0(0x04)
	char UnknownData_7B4[0x4]; // 0x7b4(0x04)

	SoftClassProperty GetSoftBuildPreviewActorClass(); // Function Killstreak.KSWeaponAsset_Build.GetSoftBuildPreviewActorClass
	SoftClassProperty GetSoftBuildActorClass(); // Function Killstreak.KSWeaponAsset_Build.GetSoftBuildActorClass
	float GetBuildActivationDelay(); // Function Killstreak.KSWeaponAsset_Build.GetBuildActivationDelay
};

// Class Killstreak.KSWeaponAsset_WithProjectile
// Size: 0x7c8 (Inherited: 0x760)
struct UKSWeaponAsset_WithProjectile : public UKSWeaponAsset {
	SoftClassProperty ProjectileClass; // 0x760(0x28)
	struct TSoftObjectPtr<struct UKSWeaponAsset> ProjectileWeaponAsset; // 0x788(0x28)
	float RadialDamageOriginOffsetDistance; // 0x7b0(0x04)
	float TimeToFullyCook; // 0x7b4(0x04)
	struct UCurveFloat* CookSpeedMultiplierCurve; // 0x7b8(0x08)
	struct UCurveFloat* CookDamageMultiplierCurve; // 0x7c0(0x08)

	float GetTimeToFullyCook(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetTimeToFullyCook
	float GetRadialDamageOriginOffsetDistance(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetRadialDamageOriginOffsetDistance
	struct TSoftObjectPtr<struct UKSWeaponAsset> GetProjectileWeaponAsset(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileWeaponAsset
	float GetProjectileRadius(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileRadius
	float GetProjectileMaxSimulationTimeStep(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileMaxSimulationTimeStep
	float GetProjectileMaxSimulationIterations(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileMaxSimulationIterations
	float GetProjectileInitialSpeed(float PitchAngle); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileInitialSpeed
	float GetProjectileGravityScale(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileGravityScale
	SoftClassProperty GetProjectileClass(); // Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileClass
	float GetCookSpeedMultiplier(float TimeCooked); // Function Killstreak.KSWeaponAsset_WithProjectile.GetCookSpeedMultiplier
	float GetCookDamageMultiplier(float TimeCooked); // Function Killstreak.KSWeaponAsset_WithProjectile.GetCookDamageMultiplier
};

// Class Killstreak.KSWeaponAsset_Grenade
// Size: 0x808 (Inherited: 0x7c8)
struct UKSWeaponAsset_Grenade : public UKSWeaponAsset_WithProjectile {
	bool bAllowCooking; // 0x7c8(0x01)
	char UnknownData_7C9[0x3]; // 0x7c9(0x03)
	float MinimumCookTime; // 0x7cc(0x04)
	float FuseTime; // 0x7d0(0x04)
	float MinHandRemainingFuse; // 0x7d4(0x04)
	bool bFuseTicksInHand; // 0x7d8(0x01)
	char UnknownData_7D9[0x7]; // 0x7d9(0x07)
	SoftClassProperty GrenadeClass; // 0x7e0(0x28)

	float GetMinimumCookTime(); // Function Killstreak.KSWeaponAsset_Grenade.GetMinimumCookTime
	float GetMinHandRemainingFuse(); // Function Killstreak.KSWeaponAsset_Grenade.GetMinHandRemainingFuse
	float GetFuseTime(); // Function Killstreak.KSWeaponAsset_Grenade.GetFuseTime
	bool GetFuseTicksInHand(); // Function Killstreak.KSWeaponAsset_Grenade.GetFuseTicksInHand
	bool AllowCooking(); // Function Killstreak.KSWeaponAsset_Grenade.AllowCooking
};

// Class Killstreak.KSWeaponAsset_Melee
// Size: 0x800 (Inherited: 0x7c8)
struct UKSWeaponAsset_Melee : public UKSWeaponAsset_WithProjectile {
	struct FVector MeleeSphereOffset; // 0x7c8(0x0c)
	float MeleeSphereRadius; // 0x7d4(0x04)
	struct TArray<char> OverlapObjectTypes; // 0x7d8(0x10)
	char TraceChannel; // 0x7e8(0x01)
	char UnknownData_7E9[0x3]; // 0x7e9(0x03)
	float MaxLungeDistance; // 0x7ec(0x04)
	float MaxLungeDuration; // 0x7f0(0x04)
	float LungeConeHalfAngle; // 0x7f4(0x04)
	float LungeConeOriginDistanceOffset; // 0x7f8(0x04)
	char UnknownData_7FC[0x4]; // 0x7fc(0x04)

	struct TArray<char> GetOverlapObjectTypes(); // Function Killstreak.KSWeaponAsset_Melee.GetOverlapObjectTypes
	char GetMeleeTraceChannel(); // Function Killstreak.KSWeaponAsset_Melee.GetMeleeTraceChannel
	float GetMeleeSphereRadius(); // Function Killstreak.KSWeaponAsset_Melee.GetMeleeSphereRadius
	struct FVector GetMeleeSphereOffset(); // Function Killstreak.KSWeaponAsset_Melee.GetMeleeSphereOffset
	float GetMaxLungeDuration(); // Function Killstreak.KSWeaponAsset_Melee.GetMaxLungeDuration
	float GetMaxLungeDistance(); // Function Killstreak.KSWeaponAsset_Melee.GetMaxLungeDistance
	float GetLungeConeHalfAngle(); // Function Killstreak.KSWeaponAsset_Melee.GetLungeConeHalfAngle
};

// Class Killstreak.KSWeaponAsset_Pierce
// Size: 0x7f8 (Inherited: 0x7c8)
struct UKSWeaponAsset_Pierce : public UKSWeaponAsset_WithProjectile {
	float DamageScalarAfterWalls; // 0x7c8(0x04)
	char UnknownData_7CC[0x4]; // 0x7cc(0x04)
	SoftClassProperty PierceClass; // 0x7d0(0x28)

	float GetDamageScalarAfterWalls(); // Function Killstreak.KSWeaponAsset_Pierce.GetDamageScalarAfterWalls
};

// Class Killstreak.KSWeaponAsset_Shotgun
// Size: 0x788 (Inherited: 0x760)
struct UKSWeaponAsset_Shotgun : public UKSWeaponAsset {
	int32_t PelletsPerShot; // 0x760(0x04)
	float AimDownSightsAccuracy; // 0x764(0x04)
	bool bUseSpreadPattern; // 0x768(0x01)
	char UnknownData_769[0x7]; // 0x769(0x07)
	struct TArray<struct FVector2D> SpreadPattern; // 0x770(0x10)
	float HitPercentageForHeadshot; // 0x780(0x04)
	char UnknownData_784[0x4]; // 0x784(0x04)

	void GetSpreadPattern(struct TArray<struct FVector2D> OutPattern); // Function Killstreak.KSWeaponAsset_Shotgun.GetSpreadPattern
	int32_t GetPelletsPerShot(); // Function Killstreak.KSWeaponAsset_Shotgun.GetPelletsPerShot
	float GetHitPercentageForHeadshot(); // Function Killstreak.KSWeaponAsset_Shotgun.GetHitPercentageForHeadshot
	float GetAimDownSightsAccuracy(); // Function Killstreak.KSWeaponAsset_Shotgun.GetAimDownSightsAccuracy
	bool DoesUseSpreadPattern(); // Function Killstreak.KSWeaponAsset_Shotgun.DoesUseSpreadPattern
};

// Class Killstreak.KSWeaponAttachment
// Size: 0x208 (Inherited: 0x168)
struct UKSWeaponAttachment : public UKSItem {
	SoftClassProperty FunctionalClass; // 0x168(0x28)
	SoftClassProperty CosmeticClass; // 0x190(0x28)
	struct FGameplayTagContainer ValidAttachPoints; // 0x1b8(0x20)
	struct FGameplayTagContainer CompatibleWeaponTypes; // 0x1d8(0x20)
	bool bShouldBeInAttachmentCollection; // 0x1f8(0x01)
	char UnknownData_1F9[0x7]; // 0x1f9(0x07)
	struct UAttachmentCollection* GlobalWeaponAttachmentCollection; // 0x200(0x08)

	void GetValidAttachPoints(struct FGameplayTagContainer OutAttachPoints); // Function Killstreak.KSWeaponAttachment.GetValidAttachPoints
	SoftClassProperty GetFunctionalClass(); // Function Killstreak.KSWeaponAttachment.GetFunctionalClass
	SoftClassProperty GetCosmeticClass(); // Function Killstreak.KSWeaponAttachment.GetCosmeticClass
	void GetCompatibleWeaponTypes(struct FGameplayTagContainer OutWeaponTypes); // Function Killstreak.KSWeaponAttachment.GetCompatibleWeaponTypes
	bool CanAttachToWeaponType(struct FGameplayTag InWeaponType); // Function Killstreak.KSWeaponAttachment.CanAttachToWeaponType
	bool CanAttachTo(struct AKSWeapon* InWeapon, struct FGameplayTagContainer AvailableAttachPoints); // Function Killstreak.KSWeaponAttachment.CanAttachTo
};

// Class Killstreak.KSWeaponAttachment_AccuracyKick
// Size: 0x230 (Inherited: 0x208)
struct UKSWeaponAttachment_AccuracyKick : public UKSWeaponAttachment {
	bool bReplaceKickbackModule; // 0x208(0x01)
	char UnknownData_209[0x7]; // 0x209(0x07)
	struct UKickbackModule* KickbackModule; // 0x210(0x08)
	float KickbackResetTime; // 0x218(0x04)
	bool bModifyKickbackScale; // 0x21c(0x01)
	char UnknownData_21D[0x3]; // 0x21d(0x03)
	float KickbackScale; // 0x220(0x04)
	bool bModifyBaseAccuracy; // 0x224(0x01)
	char UnknownData_225[0x3]; // 0x225(0x03)
	float BaseAccuracyMultiplier; // 0x228(0x04)
	char UnknownData_22C[0x4]; // 0x22c(0x04)
};

// Class Killstreak.KSWeaponAttachment_DefaultAmmo
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_DefaultAmmo : public UKSWeaponAttachment {
	int32_t DefaultAmmoIncrease; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
};

// Class Killstreak.KSWeaponAttachment_ExtMagazine
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_ExtMagazine : public UKSWeaponAttachment {
	int32_t ClipSize; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)

	int32_t GetClipSize(); // Function Killstreak.KSWeaponAttachment_ExtMagazine.GetClipSize
};

// Class Killstreak.KSWeaponAttachment_ExtMagPercent
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_ExtMagPercent : public UKSWeaponAttachment {
	float ClipSizeIncreaseMultiplier; // 0x208(0x04)
	enum class EExtendedMagazineRounding RoundingType; // 0x20c(0x01)
	char UnknownData_20D[0x3]; // 0x20d(0x03)
};

// Class Killstreak.KSWeaponAttachment_LongBarrel
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_LongBarrel : public UKSWeaponAttachment {
	float FalloffRangeMultiplier; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)
};

// Class Killstreak.KSWeaponAttachment_QuickMag
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_QuickMag : public UKSWeaponAttachment {
	float ReloadPeriodMultiplier; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)

	float GetReloadPeriodMultiplier(); // Function Killstreak.KSWeaponAttachment_QuickMag.GetReloadPeriodMultiplier
};

// Class Killstreak.KSWeaponAttachment_ScopeFixedFOV
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_ScopeFixedFOV : public UKSWeaponAttachment_Scope {
	float AimDownSightsFov; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)

	float GetAimDownSightsFieldOfView(); // Function Killstreak.KSWeaponAttachment_ScopeFixedFOV.GetAimDownSightsFieldOfView
};

// Class Killstreak.KSWeaponAttachment_ScopeMultiply
// Size: 0x210 (Inherited: 0x208)
struct UKSWeaponAttachment_ScopeMultiply : public UKSWeaponAttachment_Scope {
	float ScopeMultiplier; // 0x208(0x04)
	char UnknownData_20C[0x4]; // 0x20c(0x04)

	float GetScopeMultiplier(); // Function Killstreak.KSWeaponAttachment_ScopeMultiply.GetScopeMultiplier
};

// Class Killstreak.KSWeaponAttachment_Silencer
// Size: 0x218 (Inherited: 0x208)
struct UKSWeaponAttachment_Silencer : public UKSWeaponAttachment {
	float AudibleRange; // 0x208(0x04)
	bool bModifyFalloffRange; // 0x20c(0x01)
	char UnknownData_20D[0x3]; // 0x20d(0x03)
	float FalloffRangeMultiplier; // 0x210(0x04)
	char UnknownData_214[0x4]; // 0x214(0x04)

	float GetAudibleRange(); // Function Killstreak.KSWeaponAttachment_Silencer.GetAudibleRange
};

// Class Killstreak.KSWeaponAttachment_VarScope
// Size: 0x220 (Inherited: 0x208)
struct UKSWeaponAttachment_VarScope : public UKSWeaponAttachment_Scope {
	struct TArray<float> ScopeSettings; // 0x208(0x10)
	enum class EKSVariableScopeType ScopeType; // 0x218(0x04)
	char UnknownData_21C[0x4]; // 0x21c(0x04)

	struct TArray<float> GetScopeFOVOptions(struct UKSWeaponAsset* InAsset); // Function Killstreak.KSWeaponAttachment_VarScope.GetScopeFOVOptions
	float GetScopeFOV(struct UKSWeaponAsset* InAsset, int32_t nIndex); // Function Killstreak.KSWeaponAttachment_VarScope.GetScopeFOV
	int32_t GetNumScopeOptions(); // Function Killstreak.KSWeaponAttachment_VarScope.GetNumScopeOptions
};

// Class Killstreak.KSWeaponAttachmentInstance
// Size: 0x118 (Inherited: 0xb0)
struct UKSWeaponAttachmentInstance : public UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)
	struct AKSWeapon* WeaponOwner; // 0xb8(0x08)
	struct UKSWeaponAttachmentCosmeticInst* AttachmentCosmeticComponent; // 0xc0(0x08)
	char UnknownData_C8[0x18]; // 0xc8(0x18)
	struct FKSEquipRepInfo AttachPoint; // 0xe0(0x14)
	char UnknownData_F4[0x14]; // 0xf4(0x14)
	struct UKSWeaponAttachment* AttachmentAsset; // 0x108(0x08)
	bool bPersistsOnWeaponDrop; // 0x110(0x01)
	char UnknownData_111[0x7]; // 0x111(0x07)

	void SetPersistsOnWeaponDrop(bool bEnable); // Function Killstreak.KSWeaponAttachmentInstance.SetPersistsOnWeaponDrop
	void OnUnattached(); // Function Killstreak.KSWeaponAttachmentInstance.OnUnattached
	void OnRep_AttachPoint(); // Function Killstreak.KSWeaponAttachmentInstance.OnRep_AttachPoint
	void OnRep_AttachmentAsset(); // Function Killstreak.KSWeaponAttachmentInstance.OnRep_AttachmentAsset
	void OnAttached(); // Function Killstreak.KSWeaponAttachmentInstance.OnAttached
	bool IsAttached(); // Function Killstreak.KSWeaponAttachmentInstance.IsAttached
	bool GetPersistsOnWeaponDrop(); // Function Killstreak.KSWeaponAttachmentInstance.GetPersistsOnWeaponDrop
	struct AKSWeapon* GetOwningWeapon(); // Function Killstreak.KSWeaponAttachmentInstance.GetOwningWeapon
	struct FGameplayTag GetAttachPoint(); // Function Killstreak.KSWeaponAttachmentInstance.GetAttachPoint
	struct UKSWeaponAttachment* GetAttachmentAsset(); // Function Killstreak.KSWeaponAttachmentInstance.GetAttachmentAsset
};

// Class Killstreak.KSWeaponAttachmentInst_VarScope
// Size: 0x128 (Inherited: 0x118)
struct UKSWeaponAttachmentInst_VarScope : public UKSWeaponAttachmentInstance {
	struct UKSWeaponAttachment_VarScope* VariableScopeAsset; // 0x118(0x08)
	char ScopeZoomIndex; // 0x120(0x01)
	char UnknownData_121[0x7]; // 0x121(0x07)

	void ServerSetScopeZoomIndex(char NewIndex); // Function Killstreak.KSWeaponAttachmentInst_VarScope.ServerSetScopeZoomIndex
};

// Class Killstreak.KSWeaponAttachmentSkinDetails
// Size: 0x90 (Inherited: 0x30)
struct UKSWeaponAttachmentSkinDetails : public UPrimaryDataAsset {
	struct TSoftObjectPtr<struct UKSWeaponAsset> Weapon; // 0x30(0x28)
	SoftClassProperty AttachmentCosmetic; // 0x58(0x28)
	struct TArray<struct FDataTableInfo> AssetOverrideTables; // 0x80(0x10)
};

// Class Killstreak.KSWeaponComponent
// Size: 0x5d0 (Inherited: 0x118)
struct UKSWeaponComponent : public UKSEquipmentCosmeticComponent {
	char UnknownData_118[0x8]; // 0x118(0x08)
	enum class EWeaponComponentTickType WeaponComponentTickType; // 0x120(0x01)
	bool bAllowTickingOnItemDropActor; // 0x121(0x01)
	char ForcedWeaponLODWhenLocallyViewed; // 0x122(0x01)
	bool bForceResidentFlagOnWeaponTextures; // 0x123(0x01)
	bool bAllowAnimationAsItemDrop; // 0x124(0x01)
	enum class EWeaponStateNew WeaponState; // 0x125(0x01)
	enum class EWeaponStateNew InitialState; // 0x126(0x01)
	char UnknownData_127[0x1]; // 0x127(0x01)
	struct UKSWeaponAsset* WeaponAsset; // 0x128(0x08)
	bool bPendingFire; // 0x130(0x01)
	char InitialAmmoInClip; // 0x131(0x01)
	char AmmoInClip; // 0x132(0x01)
	bool bInitializationStarted; // 0x133(0x01)
	bool bInitializationCompleted; // 0x134(0x01)
	char UnknownData_135[0x3]; // 0x135(0x03)
	struct FMulticastInlineDelegate OnAmmoChangedDel; // 0x138(0x10)
	char UnknownData_148[0x18]; // 0x148(0x18)
	struct FMulticastInlineDelegate OnWeaponComponentInitializationCompletedDel; // 0x160(0x10)
	char UnknownData_170[0x19]; // 0x170(0x19)
	bool bCachedWeaponVisibility; // 0x189(0x01)
	char UnknownData_18A[0x2]; // 0x18a(0x02)
	float MeshMaxDrawDistance; // 0x18c(0x04)
	bool bUseMaxDistForCharacterOwnedWeapons; // 0x190(0x01)
	bool bHideAncillaryMagazine; // 0x191(0x01)
	char UnknownData_192[0x2]; // 0x192(0x02)
	int32_t AncillaryMagazineIndex; // 0x194(0x04)
	bool bIsGrenade; // 0x198(0x01)
	bool bUsesHeavyGadget; // 0x199(0x01)
	char UnknownData_19A[0x2]; // 0x19a(0x02)
	struct FName MeleeComboTarget; // 0x19c(0x08)
	enum class EWeaponComponentAttachmentType WeaponAttachType; // 0x1a4(0x01)
	char UnknownData_1A5[0x3]; // 0x1a5(0x03)
	struct USkeletalMesh* SkeletalMesh; // 0x1a8(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x1b0(0x08)
	struct FName WeaponSkeletalMeshCollisionProfileName; // 0x1b8(0x08)
	bool bLoadWeaponSkeletalMeshComponentOnServer; // 0x1c0(0x01)
	char UnknownData_1C1[0x7]; // 0x1c1(0x07)
	struct TArray<struct FName> ActiveRequiredDedicatedServerCharacterBoneNames; // 0x1c8(0x10)
	enum class EVisibilityBasedAnimTickOption MeshComponentVisibilityBasedAnimTickOption; // 0x1d8(0x01)
	bool bAllowMeshCompositing; // 0x1d9(0x01)
	char UnknownData_1DA[0x6]; // 0x1da(0x06)
	struct USkeletalMesh* ScopeMesh; // 0x1e0(0x08)
	struct FGameplayTag ScopeAttachmentTag; // 0x1e8(0x08)
	struct USkeletalMesh* MagazineMesh; // 0x1f0(0x08)
	struct FGameplayTag MagazineAttachmentTag; // 0x1f8(0x08)
	struct USkeletalMesh* StockMesh; // 0x200(0x08)
	struct FGameplayTag StockAttachmentTag; // 0x208(0x08)
	struct USkeletalMesh* SilencerMesh; // 0x210(0x08)
	struct FGameplayTag SilencerAttachmentTag; // 0x218(0x08)
	struct USkeletalMesh* GripMesh; // 0x220(0x08)
	struct FGameplayTag GripAttachmentTag; // 0x228(0x08)
	struct TArray<struct FName> KeywordsForCompositingMesh; // 0x230(0x10)
	struct FName BaseMeshOverrideKeyword; // 0x240(0x08)
	struct FName PhysicsAssetOverrideKeyword; // 0x248(0x08)
	struct UAnimInstance* AnimInstance; // 0x250(0x08)
	struct FName AnimInstanceOverrideKeyword; // 0x258(0x08)
	struct FName EquipSocketOverride; // 0x260(0x08)
	struct UKSWeaponSkeletalMeshComponent* WeaponSkeletalMeshComponent; // 0x268(0x08)
	bool bHideOnCreation; // 0x270(0x01)
	bool bDuplicate; // 0x271(0x01)
	char UnknownData_272[0x2]; // 0x272(0x02)
	struct FName DuplicateSocket; // 0x274(0x08)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct UKSWeaponSkeletalMeshComponent* DuplicateSkeletalMeshComponent; // 0x280(0x08)
	bool bWeaponLoweringEnabled; // 0x288(0x01)
	char UnknownData_289[0x3]; // 0x289(0x03)
	struct FName CharacterRightShoulderBoneName; // 0x28c(0x08)
	struct FName CharacterRightElbowBoneName; // 0x294(0x08)
	struct FName CharacterLeftShoulderBoneName; // 0x29c(0x08)
	struct FName CharacterLeftElbowBoneName; // 0x2a4(0x08)
	struct FName CharacterChestBoneName; // 0x2ac(0x08)
	struct FName WeaponBarrelBoneName; // 0x2b4(0x08)
	float WeaponLowerSphereTraceRadius; // 0x2bc(0x04)
	float WeaponLowerTestDistanceAdjustment; // 0x2c0(0x04)
	char UnknownData_2C4[0x4]; // 0x2c4(0x04)
	struct TArray<struct FAncillaryWeaponMeshInfo> AncillaryMeshData; // 0x2c8(0x10)
	float WeaponLowerViewDotThreshold; // 0x2d8(0x04)
	bool bResetLocked; // 0x2dc(0x01)
	char UnknownData_2DD[0x3]; // 0x2dd(0x03)
	uint32_t NextBroadcastId; // 0x2e0(0x04)
	uint32_t LastBroadcastReceived; // 0x2e4(0x04)
	struct TArray<struct USkeletalMeshComponent*> AncillaryMeshes; // 0x2e8(0x10)
	bool bPreventRetreive; // 0x2f8(0x01)
	bool bForceDisableLHIK; // 0x2f9(0x01)
	bool bAttachHandWhileSprinting; // 0x2fa(0x01)
	bool bAttachHandWhileMoving; // 0x2fb(0x01)
	bool bAttachHandWhileCrouching; // 0x2fc(0x01)
	bool bAttachHandMelee; // 0x2fd(0x01)
	bool bAttachHandWhileIdle; // 0x2fe(0x01)
	bool bAttachHandWhileZiplining; // 0x2ff(0x01)
	bool bForceAttachHandIfNotNonCom; // 0x300(0x01)
	bool bForceDisableRHIK; // 0x301(0x01)
	bool bAttachRightHand; // 0x302(0x01)
	bool bReplicateWeaponStateAsVariable; // 0x303(0x01)
	bool bForceBroadcastAllWeaponStateChanges; // 0x304(0x01)
	bool bForceReliableWeaponStateBroadcast; // 0x305(0x01)
	char UnknownData_306[0x2]; // 0x306(0x02)
	int32_t ShotsFiredSinceLastReload; // 0x308(0x04)
	bool bFirstReload; // 0x30c(0x01)
	bool bShouldBroadcastEmptyFire; // 0x30d(0x01)
	bool bShouldReliablyBroadcastEmptyFire; // 0x30e(0x01)
	bool bShouldReliablyBroadcastAmmoChanges; // 0x30f(0x01)
	struct FMulticastInlineDelegate OnWeaponComponentStateChangedDel; // 0x310(0x10)
	char UnknownData_320[0x18]; // 0x320(0x18)
	bool bIsInAction; // 0x338(0x01)
	bool bNonComUseLimitedMovement; // 0x339(0x01)
	bool bComUseLimitedMovement; // 0x33a(0x01)
	bool bEngUseLimitedMovement; // 0x33b(0x01)
	char UnknownData_33C[0x4]; // 0x33c(0x04)
	struct FMulticastInlineDelegate ZoomFOVChanged; // 0x340(0x10)
	enum class EKSCharacterAimMode CachedAimMode; // 0x350(0x01)
	char UnknownData_351[0x3]; // 0x351(0x03)
	float DefaultAimCameraTransitionTime; // 0x354(0x04)
	float AimOverShoulderCameraTransitionTime; // 0x358(0x04)
	float AimDownSightsCameraTransitionTime; // 0x35c(0x04)
	struct FMulticastInlineDelegate OnWeaponComponentAimModeChangedDel; // 0x360(0x10)
	char UnknownData_370[0x20]; // 0x370(0x20)
	struct TArray<struct UKSWeaponAttachmentCosmeticInst*> AttachmentCosmetics; // 0x390(0x10)
	enum class ESkinObjectParentingType SkinObjectParenting; // 0x3a0(0x01)
	char UnknownData_3A1[0x3]; // 0x3a1(0x03)
	int32_t ActiveIndex; // 0x3a4(0x04)
	struct FMulticastInlineDelegate OnEquipmentBecomeActiveDel; // 0x3a8(0x10)
	char UnknownData_3B8[0x18]; // 0x3b8(0x18)
	struct FMulticastInlineDelegate OnEquipmentEndActiveDel; // 0x3d0(0x10)
	char UnknownData_3E0[0x28]; // 0x3e0(0x28)
	struct UAnimMontage* ActiveReloadMontage; // 0x408(0x08)
	struct UAnimMontage* ActiveWeaponReloadMontage; // 0x410(0x08)
	bool PostReloadTimerIsActive; // 0x418(0x01)
	bool EnableAimsDuringReload; // 0x419(0x01)
	bool bShieldIsActive; // 0x41a(0x01)
	char UnknownData_41B[0x25]; // 0x41b(0x25)
	struct TArray<struct FName> ApparelObjectsToListenTo; // 0x440(0x10)
	struct TArray<struct FDataTableInfo> BaseAssetDataTables; // 0x450(0x10)
	bool bCreateDataTableForLegacyAssets; // 0x460(0x01)
	char UnknownData_461[0x7]; // 0x461(0x07)
	struct UDynamicSkinTable* AssetDataTableManager; // 0x468(0x08)
	struct UMultiSkinObject* SkinObject; // 0x470(0x08)
	bool bSkinObjectAdded; // 0x478(0x01)
	char UnknownData_479[0x17]; // 0x479(0x17)
	struct FVector ViewModelScale; // 0x490(0x0c)
	struct FRotator ViewModelRotation; // 0x49c(0x0c)
	struct FVector ViewModelLocationOffset; // 0x4a8(0x0c)
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	float WeaponCombatStateCooldown; // 0x4b8(0x04)
	float ForceNonCombatShotBlockDistance; // 0x4bc(0x04)
	struct UKSWeaponTargetingModule* TargetingVisualizationClass; // 0x4c0(0x08)
	bool bIsTargeting; // 0x4c8(0x01)
	char UnknownData_4C9[0x7]; // 0x4c9(0x07)
	struct UKSWeaponTargetingModule* TargetingVisualizerInstance; // 0x4d0(0x08)
	struct UForceFeedbackEffect* VibrationEffect; // 0x4d8(0x08)
	struct UForceFeedbackEffect* AlternateVibrationEffect; // 0x4e0(0x08)
	struct UForceFeedbackAttenuation* AlternativeVibrationAttenuation; // 0x4e8(0x08)
	struct URecoilProfileAsset* RecoilProfileAsset; // 0x4f0(0x08)
	bool bIsMeleeWeaponComponent; // 0x4f8(0x01)
	char UnknownData_4F9[0x7]; // 0x4f9(0x07)
	struct FString VFXSpangKeywordPrefix; // 0x500(0x10)
	struct FString DecalSpangKeywordPrefix; // 0x510(0x10)
	struct FName VFXSpangDefaultKeyword; // 0x520(0x08)
	struct TMap<char, struct FName> VFXSpangKeywordMap; // 0x528(0x50)
	struct FName DecalSpangDefaultKeyword; // 0x578(0x08)
	struct TMap<char, struct FName> DecalSpangKeywordMap; // 0x580(0x50)

	void UpdateOwnerLocallyViewed(bool bIsLocallyViewed); // Function Killstreak.KSWeaponComponent.UpdateOwnerLocallyViewed
	void UpdateAimDownSightsBlurValues(); // Function Killstreak.KSWeaponComponent.UpdateAimDownSightsBlurValues
	void TriggerEngagement(); // Function Killstreak.KSWeaponComponent.TriggerEngagement
	void TriggerCombat(); // Function Killstreak.KSWeaponComponent.TriggerCombat
	void TickViewerAim(float DeltaTime); // Function Killstreak.KSWeaponComponent.TickViewerAim
	void TickNonViewerAim(float DeltaTime); // Function Killstreak.KSWeaponComponent.TickNonViewerAim
	void StopDefaultAim(); // Function Killstreak.KSWeaponComponent.StopDefaultAim
	void StopAimOverShoulder(); // Function Killstreak.KSWeaponComponent.StopAimOverShoulder
	void StopAimDownSights(); // Function Killstreak.KSWeaponComponent.StopAimDownSights
	void StopAimAlternate(); // Function Killstreak.KSWeaponComponent.StopAimAlternate
	void StartDefaultAim(); // Function Killstreak.KSWeaponComponent.StartDefaultAim
	void StartAimOverShoulder(); // Function Killstreak.KSWeaponComponent.StartAimOverShoulder
	void StartAimDownSights(); // Function Killstreak.KSWeaponComponent.StartAimDownSights
	void StartAimAlternate(); // Function Killstreak.KSWeaponComponent.StartAimAlternate
	bool ShouldBroadcastWeaponStateChange(struct FKSWeaponDataUpdateContainer OldState, struct FKSWeaponDataUpdateContainer NewState, bool bReliable); // Function Killstreak.KSWeaponComponent.ShouldBroadcastWeaponStateChange
	void SetWeaponVisibility(bool Visible); // Function Killstreak.KSWeaponComponent.SetWeaponVisibility
	void ReportNewWeaponLowerAlpha(float NewAlpha, float DeltaTime, bool ForceReset); // Function Killstreak.KSWeaponComponent.ReportNewWeaponLowerAlpha
	void PostCreateWeaponSkeletalMeshComponent(struct UKSWeaponSkeletalMeshComponent* CreatedWeaponSkeletalMeshComponent); // Function Killstreak.KSWeaponComponent.PostCreateWeaponSkeletalMeshComponent
	void OnWeaponStateChanged(enum class EWeaponStateNew OldState, enum class EWeaponStateNew NewState); // Function Killstreak.KSWeaponComponent.OnWeaponStateChanged
	void OnUnsetAsActivePrimaryWeapon(); // Function Killstreak.KSWeaponComponent.OnUnsetAsActivePrimaryWeapon
	void OnSkyDiveStarted(struct AKSCharacter* SkyDiver); // Function Killstreak.KSWeaponComponent.OnSkyDiveStarted
	void OnSkyDiveSkipped(struct AKSCharacter* SkyDiver); // Function Killstreak.KSWeaponComponent.OnSkyDiveSkipped
	void OnSkyDiveEnded(struct AKSCharacter* SkyDiver); // Function Killstreak.KSWeaponComponent.OnSkyDiveEnded
	void OnSetAsActivePrimaryWeapon(); // Function Killstreak.KSWeaponComponent.OnSetAsActivePrimaryWeapon
	void OnRep_WeaponState(); // Function Killstreak.KSWeaponComponent.OnRep_WeaponState
	void OnRep_WeaponAsset(); // Function Killstreak.KSWeaponComponent.OnRep_WeaponAsset
	void OnRep_InitialState(); // Function Killstreak.KSWeaponComponent.OnRep_InitialState
	void OnRep_AmmoInClip(); // Function Killstreak.KSWeaponComponent.OnRep_AmmoInClip
	void OnInvalidFire(); // Function Killstreak.KSWeaponComponent.OnInvalidFire
	void OnInitialize(); // Function Killstreak.KSWeaponComponent.OnInitialize
	void OnFireWeaponFull(struct FFullFireRepData Data); // Function Killstreak.KSWeaponComponent.OnFireWeaponFull
	void OnFireWeapon(struct FAimData Aim); // Function Killstreak.KSWeaponComponent.OnFireWeapon
	void OnEmptyFire(); // Function Killstreak.KSWeaponComponent.OnEmptyFire
	void OnActiveMaterialsApplied(struct USkinnableSkeletalMeshComponent* SkinnableSkelComp); // Function Killstreak.KSWeaponComponent.OnActiveMaterialsApplied
	void NotifyStopFireReceived(); // Function Killstreak.KSWeaponComponent.NotifyStopFireReceived
	bool IsWeaponSilenced(); // Function Killstreak.KSWeaponComponent.IsWeaponSilenced
	bool IsWeaponPendingFireWithValidAmmo(); // Function Killstreak.KSWeaponComponent.IsWeaponPendingFireWithValidAmmo
	bool IsReloading(); // Function Killstreak.KSWeaponComponent.IsReloading
	bool IsPrimaryActiveWeapon(); // Function Killstreak.KSWeaponComponent.IsPrimaryActiveWeapon
	bool IsModelViewer(); // Function Killstreak.KSWeaponComponent.IsModelViewer
	bool IsClipEmpty(); // Function Killstreak.KSWeaponComponent.IsClipEmpty
	bool IsAimingOverShoulder(); // Function Killstreak.KSWeaponComponent.IsAimingOverShoulder
	bool IsAimingDownSights(); // Function Killstreak.KSWeaponComponent.IsAimingDownSights
	bool IsAimingAlternate(); // Function Killstreak.KSWeaponComponent.IsAimingAlternate
	bool IsAiming(); // Function Killstreak.KSWeaponComponent.IsAiming
	bool IsAimedAtFriendly(); // Function Killstreak.KSWeaponComponent.IsAimedAtFriendly
	bool IsAimedAtEnemy(); // Function Killstreak.KSWeaponComponent.IsAimedAtEnemy
	bool IsActiveWeapon(); // Function Killstreak.KSWeaponComponent.IsActiveWeapon
	enum class EWeaponStateNew GetWeaponState(); // Function Killstreak.KSWeaponComponent.GetWeaponState
	void GetWeaponSkeletalMeshComponents(struct TArray<struct UKSWeaponSkeletalMeshComponent*> OutKSWeaponSkeletalMeshComponents); // Function Killstreak.KSWeaponComponent.GetWeaponSkeletalMeshComponents
	struct UKSWeaponSkeletalMeshComponent* GetWeaponSkeletalMeshComponentNew(); // Function Killstreak.KSWeaponComponent.GetWeaponSkeletalMeshComponentNew
	struct USkeletalMeshComponent* GetWeaponSkeletalMeshComponent(); // Function Killstreak.KSWeaponComponent.GetWeaponSkeletalMeshComponent
	struct UKSWeaponAsset* GetWeaponAsset(); // Function Killstreak.KSWeaponComponent.GetWeaponAsset
	struct UAnimInstance* GetWeaponAnimInstance(); // Function Killstreak.KSWeaponComponent.GetWeaponAnimInstance
	float GetWalkSpeedModifier(); // Function Killstreak.KSWeaponComponent.GetWalkSpeedModifier
	struct FVector GetViewModelScale(); // Function Killstreak.KSWeaponComponent.GetViewModelScale
	struct FRotator GetViewModelRotation(); // Function Killstreak.KSWeaponComponent.GetViewModelRotation
	struct FVector GetViewModelLocationOffet(); // Function Killstreak.KSWeaponComponent.GetViewModelLocationOffet
	struct UForceFeedbackEffect* GetVibrationEffect(); // Function Killstreak.KSWeaponComponent.GetVibrationEffect
	struct FName GetVFXSpangKeyword(char SurfaceType); // Function Killstreak.KSWeaponComponent.GetVFXSpangKeyword
	struct UKSWeaponTargetingModule* GetTargetingModuleInstance(); // Function Killstreak.KSWeaponComponent.GetTargetingModuleInstance
	struct FName GetScopeSocketName(); // Function Killstreak.KSWeaponComponent.GetScopeSocketName
	float GetRetrieveTime(); // Function Killstreak.KSWeaponComponent.GetRetrieveTime
	float GetReloadTime(); // Function Killstreak.KSWeaponComponent.GetReloadTime
	struct FName GetMuzzleSocketName(); // Function Killstreak.KSWeaponComponent.GetMuzzleSocketName
	float GetMovementAccuracyPenalty(); // Function Killstreak.KSWeaponComponent.GetMovementAccuracyPenalty
	float GetMaxFiringAccuracyLoss(); // Function Killstreak.KSWeaponComponent.GetMaxFiringAccuracyLoss
	float GetMagnifierValue(); // Function Killstreak.KSWeaponComponent.GetMagnifierValue
	void GetLoadedAccumulatedAttachmentOverrideData(struct FLoadedWeaponAttachmentAnimationData OutData); // Function Killstreak.KSWeaponComponent.GetLoadedAccumulatedAttachmentOverrideData
	float GetInAirAccuracyModifier(); // Function Killstreak.KSWeaponComponent.GetInAirAccuracyModifier
	struct UKSGrenadeTargetingModule* GetGrenadeTargetingModuleInstance(); // Function Killstreak.KSWeaponComponent.GetGrenadeTargetingModuleInstance
	float GetFiringTime(); // Function Killstreak.KSWeaponComponent.GetFiringTime
	struct UKSWeaponSkeletalMeshComponent* GetDuplicateSkeletalMeshComponentNew(); // Function Killstreak.KSWeaponComponent.GetDuplicateSkeletalMeshComponentNew
	struct USkeletalMeshComponent* GetDuplicateSkeletalMeshComponent(); // Function Killstreak.KSWeaponComponent.GetDuplicateSkeletalMeshComponent
	struct FName GetDecalSpangKeyword(char SurfaceType); // Function Killstreak.KSWeaponComponent.GetDecalSpangKeyword
	float GetDamageModifier(struct UDamageType* DamageTypeClass); // Function Killstreak.KSWeaponComponent.GetDamageModifier
	float GetCurrentAccuracy(); // Function Killstreak.KSWeaponComponent.GetCurrentAccuracy
	float GetCrouchAccuracyModifier(); // Function Killstreak.KSWeaponComponent.GetCrouchAccuracyModifier
	char GetClipSize(); // Function Killstreak.KSWeaponComponent.GetClipSize
	float GetBaseRetrieveTime(); // Function Killstreak.KSWeaponComponent.GetBaseRetrieveTime
	float GetBaseReloadTime(); // Function Killstreak.KSWeaponComponent.GetBaseReloadTime
	float GetBaseFiringTime(); // Function Killstreak.KSWeaponComponent.GetBaseFiringTime
	float GetBaseAccuracy(); // Function Killstreak.KSWeaponComponent.GetBaseAccuracy
	void GetAttachments(struct TArray<struct UKSWeaponAttachment*> OutWeaponAttachments); // Function Killstreak.KSWeaponComponent.GetAttachments
	void GetAttachmentCosmeticInstances(struct TArray<struct UKSWeaponAttachmentCosmeticInst*> OutWeaponAttachmentCosmetics); // Function Killstreak.KSWeaponComponent.GetAttachmentCosmeticInstances
	struct TArray<struct USkeletalMeshComponent*> GetAncillaryMeshes(); // Function Killstreak.KSWeaponComponent.GetAncillaryMeshes
	int32_t GetAmmoInOwnerInventory(); // Function Killstreak.KSWeaponComponent.GetAmmoInOwnerInventory
	char GetAmmoInClip(); // Function Killstreak.KSWeaponComponent.GetAmmoInClip
	struct UForceFeedbackEffect* GetAlternativeVibrationEffect(); // Function Killstreak.KSWeaponComponent.GetAlternativeVibrationEffect
	struct UForceFeedbackAttenuation* GetAlternativeVibrationAttenuation(); // Function Killstreak.KSWeaponComponent.GetAlternativeVibrationAttenuation
	float GetAimOverShoulderAccuracyModifier(); // Function Killstreak.KSWeaponComponent.GetAimOverShoulderAccuracyModifier
	enum class EKSCharacterAimMode GetAimMode(); // Function Killstreak.KSWeaponComponent.GetAimMode
	float GetAdjustedRetrieveRate(); // Function Killstreak.KSWeaponComponent.GetAdjustedRetrieveRate
	float GetAdjustedReloadRate(); // Function Killstreak.KSWeaponComponent.GetAdjustedReloadRate
	float GetAdjustedFiringRate(); // Function Killstreak.KSWeaponComponent.GetAdjustedFiringRate
	int32_t GetActiveIndex(); // Function Killstreak.KSWeaponComponent.GetActiveIndex
	float GetAccuracyReturnRate(); // Function Killstreak.KSWeaponComponent.GetAccuracyReturnRate
	float GetAccuracyReturnDelay(); // Function Killstreak.KSWeaponComponent.GetAccuracyReturnDelay
	float GetAccuracyLossPerShot(); // Function Killstreak.KSWeaponComponent.GetAccuracyLossPerShot
	struct FName GenerateSurfaceBasedKeyword(struct FString Prefix, char SurfaceType); // Function Killstreak.KSWeaponComponent.GenerateSurfaceBasedKeyword
	void ForceRetrieveWeapon(); // Function Killstreak.KSWeaponComponent.ForceRetrieveWeapon
	void ForceRetrieveState(); // Function Killstreak.KSWeaponComponent.ForceRetrieveState
	void ForceHolsterWeapon(); // Function Killstreak.KSWeaponComponent.ForceHolsterWeapon
	void ForceAttachWeaponToHolsterSocket(); // Function Killstreak.KSWeaponComponent.ForceAttachWeaponToHolsterSocket
	void ForceAttachWeaponToActiveSocket(); // Function Killstreak.KSWeaponComponent.ForceAttachWeaponToActiveSocket
	void ForceAimUpdate(); // Function Killstreak.KSWeaponComponent.ForceAimUpdate
	void EventUpdateOwnerLocallyViewed(bool bIsLocallyViewed); // Function Killstreak.KSWeaponComponent.EventUpdateOwnerLocallyViewed
	float EvaluateWeaponLowering(float DeltaTime); // Function Killstreak.KSWeaponComponent.EvaluateWeaponLowering
	void DropMagazine(); // Function Killstreak.KSWeaponComponent.DropMagazine
	void DetatchWeaponSkeletalMeshComponentAttachedChildren(); // Function Killstreak.KSWeaponComponent.DetatchWeaponSkeletalMeshComponentAttachedChildren
	bool CanUseCombatState(enum class ECombatState TestState); // Function Killstreak.KSWeaponComponent.CanUseCombatState
	bool CanReceiveAttachment(struct UKSWeaponAttachment* InAttachment, struct FGameplayTagContainer AvailableAttachPoints); // Function Killstreak.KSWeaponComponent.CanReceiveAttachment
	bool CanLowerWeaponNow(); // Function Killstreak.KSWeaponComponent.CanLowerWeaponNow
	void CancelReloadCosmetic(); // Function Killstreak.KSWeaponComponent.CancelReloadCosmetic
	int32_t CalcAmmoToBeReloaded(); // Function Killstreak.KSWeaponComponent.CalcAmmoToBeReloaded
	void BroadcastWeaponStateChange(uint32_t BroadcastId, struct FKSWeaponDataUpdateContainer NewState); // Function Killstreak.KSWeaponComponent.BroadcastWeaponStateChange
	void BroadcastReliableWeaponStateChange(uint32_t BroadcastId, struct FKSWeaponDataUpdateContainer NewState); // Function Killstreak.KSWeaponComponent.BroadcastReliableWeaponStateChange
	void BroadcastReliablePostReload(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastReliablePostReload
	void BroadcastReliablePostFireWithAmmo(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastReliablePostFireWithAmmo
	void BroadcastReliableEmptyFire(uint32_t BroadcastId); // Function Killstreak.KSWeaponComponent.BroadcastReliableEmptyFire
	void BroadcastReliableAmmoChange(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastReliableAmmoChange
	void BroadcastReliableAimedPostFireWithAmmo(uint32_t BroadcastId, struct FAimData Aim, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFireWithAmmo
	void BroadcastReliableAimedPostFireFull(uint32_t BroadcastId, struct FFullFireRepData Data); // Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFireFull
	void BroadcastReliableAimedPostFire(uint32_t BroadcastId, struct FAimData Aim); // Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFire
	void BroadcastPostReload(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastPostReload
	void BroadcastPostFireWithAmmo(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastPostFireWithAmmo
	void BroadcastEmptyFire(uint32_t BroadcastId); // Function Killstreak.KSWeaponComponent.BroadcastEmptyFire
	void BroadcastAmmoChange(uint32_t BroadcastId, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastAmmoChange
	void BroadcastAimedPostFireWithAmmo(uint32_t BroadcastId, struct FAimData Aim, char InAmmoInClip); // Function Killstreak.KSWeaponComponent.BroadcastAimedPostFireWithAmmo
	void BroadcastAimedPostFireFull(uint32_t BroadcastId, struct FFullFireRepData Data); // Function Killstreak.KSWeaponComponent.BroadcastAimedPostFireFull
	void BroadcastAimedPostFire(uint32_t BroadcastId, struct FAimData Aim); // Function Killstreak.KSWeaponComponent.BroadcastAimedPostFire
	void BlueprintPrepareKillCamPlayback(); // Function Killstreak.KSWeaponComponent.BlueprintPrepareKillCamPlayback
	void BlueprintPersistentCosmeticsUpdate(); // Function Killstreak.KSWeaponComponent.BlueprintPersistentCosmeticsUpdate
	void BlueprintFinishKillCamPlayback(); // Function Killstreak.KSWeaponComponent.BlueprintFinishKillCamPlayback
	void BlueprintFillLegacyDataTable(struct UDataTable* LegacyDataTable); // Function Killstreak.KSWeaponComponent.BlueprintFillLegacyDataTable
	void AimDownSightsCheckpoint(); // Function Killstreak.KSWeaponComponent.AimDownSightsCheckpoint
};

// Class Killstreak.KSWeaponMasteryActivity
// Size: 0x2f0 (Inherited: 0x2b0)
struct UKSWeaponMasteryActivity : public UKSActivity {
	struct TSoftObjectPtr<struct UKSWeaponAsset> ReferenceWeapon; // 0x2b0(0x28)
	struct TArray<struct TSoftObjectPtr<struct UKSWeaponAsset>> SecondaryReferenceWeapons; // 0x2d8(0x10)
	enum class EKSWeaponMasteryActivityType ReferenceType; // 0x2e8(0x01)
	char UnknownData_2E9[0x7]; // 0x2e9(0x07)
};

// Class Killstreak.KSWeaponMasteryManager
// Size: 0x260 (Inherited: 0x210)
struct UKSWeaponMasteryManager : public UKSActivityManagerBase {
	struct TSet<int64_t> WeaponItemIdsInGame; // 0x210(0x50)

	float GetKDAForWeapon(struct UKSWeaponAsset* Weapon, struct AKSPlayerController* Player); // Function Killstreak.KSWeaponMasteryManager.GetKDAForWeapon
	bool GetActivityInstancesWithWeapon(struct UKSWeaponAsset* Weapon, struct TArray<struct UKSActivityInstance*> OutActivityInstances, struct AKSPlayerController* Player); // Function Killstreak.KSWeaponMasteryManager.GetActivityInstancesWithWeapon
	bool GetActivityInstancesWithType(enum class EKSWeaponMasteryActivityType Type, struct TArray<struct UKSActivityInstance*> OutActivityInstances, struct AKSPlayerController* Player); // Function Killstreak.KSWeaponMasteryManager.GetActivityInstancesWithType
	float GetAccuracyForWeapon(struct UKSWeaponAsset* Weapon, struct AKSPlayerController* Player); // Function Killstreak.KSWeaponMasteryManager.GetAccuracyForWeapon
	struct UKSWeaponMasteryActivity* FindActivityByWeaponAndType(struct UKSWeaponAsset* Weapon, enum class EKSWeaponMasteryActivityType Type); // Function Killstreak.KSWeaponMasteryManager.FindActivityByWeaponAndType
};

// Class Killstreak.KSWeaponSkeletalMeshComponent
// Size: 0xdb0 (Inherited: 0xd70)
struct UKSWeaponSkeletalMeshComponent : public UKSSkeletalMeshComponent {
	bool bApplySkeletalMeshBoundsParameterToMaterials; // 0xd68(0x01)
	struct FName SkeletalMeshBoundsParameterName; // 0xd6c(0x08)
	bool bApplySkeletalLengthParameterToMaterials; // 0xd74(0x01)
	struct FName SkeletalMeshLengthParameterName; // 0xd78(0x08)
	bool bApplySkeletalWidthParameterToMaterials; // 0xd80(0x01)
	char UnknownData_D83[0x1]; // 0xd83(0x01)
	struct FName SkeletalMeshWidthParameterName; // 0xd84(0x08)
	bool bApplySkeletalHeightParameterToMaterials; // 0xd8c(0x01)
	char UnknownData_D8D[0x3]; // 0xd8d(0x03)
	struct FName SkeletalMeshHeightParameterName; // 0xd90(0x08)
	char UnknownData_D98[0x18]; // 0xd98(0x18)
};

// Class Killstreak.KSWorldSettings
// Size: 0x490 (Inherited: 0x3b0)
struct AKSWorldSettings : public APGame_WorldSettings {
	char UnknownData_3B0[0x10]; // 0x3b0(0x10)
	bool bUseLowDrainBatteryMode; // 0x3c0(0x01)
	char UnknownData_3C1[0x7]; // 0x3c1(0x07)
	struct TArray<struct FString> HighMemorySublevelSuffixes; // 0x3c8(0x10)
	struct TArray<struct FString> LowMemorySublevelSuffixes; // 0x3d8(0x10)
	struct UParticleSystemPoolComponent* ParticleSystemPoolComponent; // 0x3e8(0x08)
	struct UDecalPoolComponent* DecalPoolComponent; // 0x3f0(0x08)
	struct UGunshotDecalPoolComponent* GunshotDecalPoolComponent; // 0x3f8(0x08)
	struct USkeletalMeshPoolComponent* SkeletalMeshPoolComponent; // 0x400(0x08)
	struct UStaticMeshPoolComponent* StaticMeshPoolComponent; // 0x408(0x08)
	struct UTracerParticlePoolComponent* TracerParticlePoolComponent; // 0x410(0x08)
	struct UTracerStaticMeshPoolComponent* TracerStaticMeshPoolComponent; // 0x418(0x08)
	struct UAkPoolComponent* AkPoolComponent; // 0x420(0x08)
	int32_t EchoRequestCount; // 0x428(0x04)
	char UnknownData_42C[0x14]; // 0x42c(0x14)
	struct FString FriendlyAudioName; // 0x440(0x10)
	struct FString FriendlyAchievementName; // 0x450(0x10)
	SoftClassProperty AudioPlayerToSpawn; // 0x460(0x28)
	struct UBakedOcclusionLUT* AudioOcclusionLUT; // 0x488(0x08)

	void LevelActorDestroyed(struct AActor* TheActor); // Function Killstreak.KSWorldSettings.LevelActorDestroyed
};

// Class Killstreak.KSZipLine
// Size: 0x2a0 (Inherited: 0x220)
struct AKSZipLine : public AActor {
	char UnknownData_220[0x10]; // 0x220(0x10)
	struct TArray<struct AKSCharacter*> ZipLiners; // 0x230(0x10)
	struct FVector ZipStart; // 0x240(0x0c)
	struct FVector ZipEnd; // 0x24c(0x0c)
	struct FVector ZipHangOffset; // 0x258(0x0c)
	float ZipSpeed; // 0x264(0x04)
	bool bReadyToRide; // 0x268(0x01)
	char UnknownData_269[0x3]; // 0x269(0x03)
	float CooldownTime; // 0x26c(0x04)
	float MinimumInteractTime; // 0x270(0x04)
	float InteractTime; // 0x274(0x04)
	float LengthToEndToIgnore; // 0x278(0x04)
	bool bUpline; // 0x27c(0x01)
	bool bGrabFromBehind; // 0x27d(0x01)
	bool bForgivingInteractionAngle; // 0x27e(0x01)
	char UnknownData_27F[0x1]; // 0x27f(0x01)
	struct UKSInteractionType* InteractionType; // 0x280(0x08)
	float AutoReleaseDistance; // 0x288(0x04)
	float AutoReleaseSpeed; // 0x28c(0x04)
	float AutoReleasePitchAngle; // 0x290(0x04)
	bool bSupportsPreHold; // 0x294(0x01)
	char UnknownData_295[0x3]; // 0x295(0x03)
	struct UKSInteractionBlockerManager* InteractionBlockerManager; // 0x298(0x08)

	void SetReadyToRide(bool bIsReadyToRide); // Function Killstreak.KSZipLine.SetReadyToRide
	void OnPlayerZiplineCooldownEnd(struct AKSCharacter* Character); // Function Killstreak.KSZipLine.OnPlayerZiplineCooldownEnd
	void OnPlayerStopZiplining(struct AKSCharacter* Character); // Function Killstreak.KSZipLine.OnPlayerStopZiplining
	void OnPlayerStartZiplining(struct AKSCharacter* Character); // Function Killstreak.KSZipLine.OnPlayerStartZiplining
	bool IsUpline(); // Function Killstreak.KSZipLine.IsUpline
	float GetAutoReleaseDistance(); // Function Killstreak.KSZipLine.GetAutoReleaseDistance
	struct FVector ComputeAutoReleaseVelocity(struct FRotator CharRotation); // Function Killstreak.KSZipLine.ComputeAutoReleaseVelocity
};

// Class Killstreak.KSZiplineAnimInst
// Size: 0x1050 (Inherited: 0x1010)
struct UKSZiplineAnimInst : public UKSCharacterAnimInst {
	float WheelSpeedModifier; // 0x1010(0x04)
	float WheelCurrentSpeed; // 0x1014(0x04)
	struct FRotator UpperWheelRotator; // 0x1018(0x0c)
	struct FRotator LowerWheelRotator; // 0x1024(0x0c)
	struct FRotator ZiplineTopLockRot; // 0x1030(0x0c)
	float ZiplineTopLockRotModifierPitch; // 0x103c(0x04)
	float ZiplineTopLockRotModifierRoll; // 0x1040(0x04)
	float ZiplineTopLockRotModifierYaw; // 0x1044(0x04)
	char UnknownData_1048[0x8]; // 0x1048(0x08)
};

// Class Killstreak.LoadingScreenImageManager
// Size: 0xa0 (Inherited: 0x30)
struct ULoadingScreenImageManager : public UDataAsset {
	struct FLoadingScreenImageInfo FailSafeLoadingScreen; // 0x30(0x70)
};

// Class Killstreak.LoadoutClassCollection
// Size: 0xe8 (Inherited: 0x98)
struct ULoadoutClassCollection : public UItemCollection {
	struct FText CollectionName; // 0x98(0x18)
	struct FText CollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0x20]; // 0xc8(0x20)
};

// Class Killstreak.LobbyPlayerController
// Size: 0x5b0 (Inherited: 0x5a8)
struct ALobbyPlayerController : public APGame_PlayerController {
	struct AHUD* PendingHUDClass; // 0x5a8(0x08)

	void UIX_FlushPressedKeys(); // Function Killstreak.LobbyPlayerController.UIX_FlushPressedKeys
	void LoadRoute(struct FName RouteName, bool ForceTransition); // Function Killstreak.LobbyPlayerController.LoadRoute
	void ClearDeserterPenalty(); // Function Killstreak.LobbyPlayerController.ClearDeserterPenalty
};

// Class Killstreak.PerkCategory
// Size: 0x148 (Inherited: 0x98)
struct UPerkCategory : public UItemCollection {
	struct FText PerkCategoryName; // 0x98(0x18)
	struct FText PerkCategoryDescription; // 0xb0(0x18)
	SoftClassProperty AssociatedPerkTree; // 0xc8(0x28)
	struct FLinearColor ThemeColorLight; // 0xf0(0x10)
	struct FLinearColor ThemeColorDark; // 0x100(0x10)
	char UnknownData_110[0x10]; // 0x110(0x10)
	struct TSoftObjectPtr<struct UTexture2D> PerkCategoryIcon; // 0x120(0x28)

	struct TSoftObjectPtr<struct UTexture2D> GetSoftCategoryIcon(); // Function Killstreak.PerkCategory.GetSoftCategoryIcon
};

// Class Killstreak.PlayerInfoPrevwLoadoutComponent
// Size: 0x150 (Inherited: 0xb8)
struct UPlayerInfoPrevwLoadoutComponent : public UPreviewActorLoadoutComponent {
	struct UKSJobItem* CurrentJob; // 0xb8(0x08)
	struct TSoftObjectPtr<struct UKSJobItem> FailSafeJob; // 0xc0(0x28)
	struct TMap<struct UKSItem*, struct UKSItem*> SkinMap; // 0xe8(0x50)
	struct FWeakObjectPtr<struct UKSPlayerInfo> WeakPlayerInfo; // 0x138(0x08)
	char UnknownData_140[0x10]; // 0x140(0x10)
};

// Class Killstreak.PreviewActorLoadoutComponentDirect
// Size: 0x118 (Inherited: 0xb8)
struct UPreviewActorLoadoutComponentDirect : public UPreviewActorLoadoutComponent {
	struct UKSJobItem* CurrentJob; // 0xb8(0x08)
	struct UKSSkinBundle* CurrentSkin; // 0xc0(0x08)
	struct TMap<struct UKSItem*, struct UKSItem*> SkinMap; // 0xc8(0x50)
};

// Class Killstreak.SkinBundleCollection
// Size: 0x168 (Inherited: 0x98)
struct USkinBundleCollection : public UItemCollection {
	struct FText SkinBundleCollectionName; // 0x98(0x18)
	struct FText SkinBundleCollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0xa0]; // 0xc8(0xa0)
};

// Class Killstreak.SmoothRepTimelineActor
// Size: 0x240 (Inherited: 0x220)
struct ASmoothRepTimelineActor : public AActor {
	struct FTimelineSimulationHandler SmoothTimeline; // 0x220(0x14)
	char UnknownData_234[0x4]; // 0x234(0x04)
	struct UTimelineComponent* TimelineComponentToSimulate; // 0x238(0x08)

	void SetTimelineComponentToSimulate(struct UTimelineComponent* InTimelineComponent); // Function Killstreak.SmoothRepTimelineActor.SetTimelineComponentToSimulate
	void OnRep_SmoothTimeline(); // Function Killstreak.SmoothRepTimelineActor.OnRep_SmoothTimeline
};

// Class Killstreak.SplineMovementComponent
// Size: 0x178 (Inherited: 0xf0)
struct USplineMovementComponent : public UMovementComponent {
	char bPauseOnImpact : 1; // 0xf0(0x01)
	char UnknownData_F0_1 : 7; // 0xf0(0x01)
	char UnknownData_F1[0x3]; // 0xf1(0x03)
	enum class ESplineBehaviourType BehaviourType; // 0xf4(0x01)
	char UnknownData_F5[0x3]; // 0xf5(0x03)
	char bForceSubStepping : 1; // 0xf8(0x01)
	char UnknownData_F8_1 : 7; // 0xf8(0x01)
	char UnknownData_F9[0x7]; // 0xf9(0x07)
	struct FMulticastInlineDelegate OnSplineReverse; // 0x100(0x10)
	struct FMulticastInlineDelegate OnSplineStop; // 0x110(0x10)
	struct FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate OnWaitEndDelegate; // 0x130(0x10)
	struct FMulticastInlineDelegate OnResetDelegate; // 0x140(0x10)
	float MaxSimulationTimeStep; // 0x150(0x04)
	int32_t MaxSimulationIterations; // 0x154(0x04)
	struct USplineComponent* Spline; // 0x158(0x08)
	float Speed; // 0x160(0x04)
	char UnknownData_164[0x14]; // 0x164(0x14)

	void StopSimulating(struct FHitResult HitResult); // Function Killstreak.SplineMovementComponent.StopSimulating
	void SetInitialOffsetOnSpline(float Distance); // Function Killstreak.SplineMovementComponent.SetInitialOffsetOnSpline
	void RestartMovement(float InitialDirection); // Function Killstreak.SplineMovementComponent.RestartMovement
	void OnSplineWaitEndDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Killstreak.SplineMovementComponent.OnSplineWaitEndDelegate__DelegateSignature
	void OnSplineWaitBeginDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Killstreak.SplineMovementComponent.OnSplineWaitBeginDelegate__DelegateSignature
	void OnSplineStopDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Killstreak.SplineMovementComponent.OnSplineStopDelegate__DelegateSignature
	void OnSplineReverseDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Killstreak.SplineMovementComponent.OnSplineReverseDelegate__DelegateSignature
	void OnSplineResetDelegate__DelegateSignature(struct FHitResult ImpactResult, float Time); // DelegateFunction Killstreak.SplineMovementComponent.OnSplineResetDelegate__DelegateSignature
	void GoToTime(float Time); // Function Killstreak.SplineMovementComponent.GoToTime
	float GetAlpha(); // Function Killstreak.SplineMovementComponent.GetAlpha
};

// Class Killstreak.ThermalScopeManagerComponent
// Size: 0x100 (Inherited: 0xb0)
struct UThermalScopeManagerComponent : public UActorComponent {
	struct UThermalScopePPComponent* ThermalScopePPComponentClass; // 0xb0(0x08)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
	struct AKSCharacter* CharacterOwner; // 0xc0(0x08)
	struct TArray<struct FActiveThermalPPComponentInfo> ActiveThermals; // 0xc8(0x10)
	char UnknownData_D8[0x28]; // 0xd8(0x28)

	struct UThermalScopeManagerComponent* CreateThermalManagerComponent(struct AKSCharacter* InCharacter, struct UKSWeaponComponent* InWeaponComponent, struct UThermalScopePPComponent* ThermalPostProcessClass); // Function Killstreak.ThermalScopeManagerComponent.CreateThermalManagerComponent
};

// Class Killstreak.ThermalScopePPComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UThermalScopePPComponent : public UActorComponent {
	struct UThermalScopeManagerComponent* ManagerComponent; // 0xb0(0x08)
	struct AKSPlayerCameraManager* CameraManagerOwner; // 0xb8(0x08)
	struct UMaterialInterface* ThermalPostProcessMaterial; // 0xc0(0x08)
	struct UMaterialInstanceDynamic* ThermalPostProcessMaterialDynamic; // 0xc8(0x08)
	char UnknownData_D0[0x8]; // 0xd0(0x08)
};

// Class Killstreak.TracerParticleSystemComponent
// Size: 0x6e0 (Inherited: 0x6b0)
struct UTracerParticleSystemComponent : public UParticleSystemComponent {
	struct FVector start; // 0x6b0(0x0c)
	struct FVector end; // 0x6bc(0x0c)
	float TravelSpeed; // 0x6c8(0x04)
	bool bDestroyOnDestinationReached; // 0x6cc(0x01)
	bool bDeactivateOnDestinationReached; // 0x6cd(0x01)
	bool bEnableTravel; // 0x6ce(0x01)
	char UnknownData_6CF[0x1]; // 0x6cf(0x01)
	struct FMulticastInlineDelegate OnTracerParticleReachedDestiniationDel; // 0x6d0(0x10)
};

// Class Killstreak.TracerStaticMeshComponent
// Size: 0x510 (Inherited: 0x4d0)
struct UTracerStaticMeshComponent : public UStaticMeshComponent {
	char UnknownData_4D0[0x8]; // 0x4d0(0x08)
	struct FVector start; // 0x4d8(0x0c)
	struct FVector end; // 0x4e4(0x0c)
	float TravelSpeed; // 0x4f0(0x04)
	bool bDestroyOnDestinationReached; // 0x4f4(0x01)
	bool bEnableTravel; // 0x4f5(0x01)
	char UnknownData_4F6[0x2]; // 0x4f6(0x02)
	struct FMulticastInlineDelegate OnTracerParticleReachedDestiniationDel; // 0x4f8(0x10)
	char UnknownData_508[0x8]; // 0x508(0x08)
};

// Class Killstreak.TracerStaticMeshPoolComponent
// Size: 0x148 (Inherited: 0xd0)
struct UTracerStaticMeshPoolComponent : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct UTracerStaticMeshComponent* PooledTraceStaticMeshComponentClass; // 0xd8(0x08)
	struct TArray<struct UTracerStaticMeshComponent*> UnusedComponentsArray; // 0xe0(0x10)
	struct TSet<struct UTracerStaticMeshComponent*> UsedComponentsSet; // 0xf0(0x50)
	struct UTracerStaticMeshComponent* PeekedTracerStaticMeshComponent; // 0x140(0x08)

	void OnTracerDestinationReached(struct USceneComponent* TracerComponent); // Function Killstreak.TracerStaticMeshPoolComponent.OnTracerDestinationReached
};

// Class Killstreak.WeaponCollection
// Size: 0xd8 (Inherited: 0x98)
struct UWeaponCollection : public UItemCollection {
	struct FText WeaponCollectionName; // 0x98(0x18)
	struct FText WeaponCollectionDescription; // 0xb0(0x18)
	char UnknownData_C8[0x10]; // 0xc8(0x10)
};

