// Class PlatformGameFramework.DistributionVectorUniformParameter
// Size: 0x60 (Inherited: 0x38)
struct UDistributionVectorUniformParameter : public UDistributionVector {
	struct FName MaxParamName; // 0x38(0x08)
	struct FName MinParamName; // 0x40(0x08)
	struct FVector DefaultMaxValue; // 0x48(0x0c)
	struct FVector DefaultMinValue; // 0x54(0x0c)
};

// Class PlatformGameFramework.PGame_Character
// Size: 0x500 (Inherited: 0x4c0)
struct APGame_Character : public ACharacter {
	char UnknownData_4C0[0x8]; // 0x4c0(0x08)
	struct UPGame_EffectManagerComponent* m_EffectManager; // 0x4c8(0x08)
	struct FTweenInfo r_TweenInfo; // 0x4d0(0x14)
	struct FChargeInfo r_ChargeInfo; // 0x4e4(0x1c)

	void OnRep_Tween(); // Function PlatformGameFramework.PGame_Character.OnRep_Tween
	void OnRep_Charge(); // Function PlatformGameFramework.PGame_Character.OnRep_Charge
};

// Class PlatformGameFramework.PGame_CharacterMovementComponent
// Size: 0x670 (Inherited: 0x610)
struct UPGame_CharacterMovementComponent : public UCharacterMovementComponent {
	char UnknownData_610[0x20]; // 0x610(0x20)
	bool bUseTweenWalkingPhysics; // 0x630(0x01)
	char UnknownData_631[0x7]; // 0x631(0x07)
	struct FChargeInfo r_ChargeInfo; // 0x638(0x1c)
	struct FTweenInfo r_TweenInfo; // 0x654(0x14)
	char UnknownData_668[0x8]; // 0x668(0x08)

	void StopTween(); // Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
	void StopCharge(); // Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
	void StartTween(char TweenType, struct FVector TweenDestination, float TweenTime); // Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
	void StartCharge(char ChargeType, float ChargeInitialYaw, struct FVector ChargeInitialLocation, float ChargeSpeed, float ChargeRange); // Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
	void OnRep_Tween(struct FTweenInfo TweenInfo); // Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
	void OnRep_Charge(struct FChargeInfo ChargeInfo); // Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
};

// Class PlatformGameFramework.PGame_CombatLogVisualizer
// Size: 0x230 (Inherited: 0x220)
struct APGame_CombatLogVisualizer : public AActor {
	struct FString LogFileName; // 0x220(0x10)

	void Visualize(); // Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
	void LoadCombatLog(); // Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
	void ClearVisualization(); // Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
};

// Class PlatformGameFramework.PGame_EffectManagerComponent
// Size: 0x380 (Inherited: 0xb0)
struct UPGame_EffectManagerComponent : public UActorComponent {
	char UnknownData_B0[0x28]; // 0xb0(0x28)
	struct FPGame_PersistentEffectRepDataContainer r_ReplicatedEffectData; // 0xd8(0x120)
	struct FPGame_EffectManagerPropertyContainer r_ReplicatedProperties; // 0x1f8(0x170)
	char UnknownData_368[0x18]; // 0x368(0x18)

	void OnRep_EffectData(); // Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
	void InstantEffectBroadcast(struct FPGame_InstantEffectRepData repData); // Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
	int32_t GetPropertyValueIntFromBlueprint(int32_t PropertyId); // Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
	float GetPropertyValueFromBlueprint(int32_t PropertyId); // Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
	struct UPGame_EffectGroupPersistent* GetDefaultEffectGroupForPersistentRepData(struct FPGame_PersistentEffectRepData repData); // Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
	struct UPGame_EffectGroupInstant* GetDefaultEffectGroupForInstantRepData(struct FPGame_InstantEffectRepData repData); // Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
	struct UPGame_EffectAttachment* CreatePersistentAttachment(struct FPGame_PersistentEffectRepData repData); // Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
	void CreateInstantAttachment(struct FPGame_InstantEffectRepData repData); // Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
};

// Class PlatformGameFramework.PGame_EffectGroup
// Size: 0x80 (Inherited: 0x28)
struct UPGame_EffectGroup : public UObject {
	struct FGameplayTagContainer m_EffectGroupTypes; // 0x28(0x20)
	struct FGameplayTagContainer m_BehaviorCategories; // 0x48(0x20)
	struct TArray<struct UPGame_Effect*> m_Effects; // 0x68(0x10)
	struct UPGame_EffectAttachment* m_AttachmentClass; // 0x78(0x08)
};

// Class PlatformGameFramework.PGame_EffectGroupPersistent
// Size: 0xa0 (Inherited: 0x80)
struct UPGame_EffectGroupPersistent : public UPGame_EffectGroup {
	struct FGameplayTag m_StackingCategory; // 0x80(0x08)
	enum class EEffectGroupApplicationRule m_ApplicationRule; // 0x88(0x04)
	char m_nMaxStackCount; // 0x8c(0x01)
	bool m_bApplyInstantOnInterval; // 0x8d(0x01)
	bool m_bApplyStackOnInterval; // 0x8e(0x01)
	char UnknownData_8F[0x1]; // 0x8f(0x01)
	float m_fStartDuration; // 0x90(0x04)
	float m_fDuration; // 0x94(0x04)
	float m_fIntervalDuration; // 0x98(0x04)
	float m_fApplicationStrength; // 0x9c(0x04)
};

// Class PlatformGameFramework.PGame_Effect
// Size: 0x50 (Inherited: 0x28)
struct UPGame_Effect : public UObject {
	struct FPGame_Property m_Property; // 0x28(0x24)
	bool m_bApplyOnInternal; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
};

// Class PlatformGameFramework.PGame_GameInstance
// Size: 0x230 (Inherited: 0x198)
struct UPGame_GameInstance : public UGameInstance {
	char UnknownData_198[0x80]; // 0x198(0x80)
	bool bStartHotfixProcessingOnUpdateAppSettings; // 0x218(0x01)
	char UnknownData_219[0x17]; // 0x219(0x17)

	void EndLoadingScreen(struct UWorld* World); // Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
	void BeginLoadingScreen(struct FString mapName); // Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
};

// Class PlatformGameFramework.PGame_GameModeBase
// Size: 0x358 (Inherited: 0x308)
struct APGame_GameModeBase : public AGameMode {
	char UnknownData_308[0x50]; // 0x308(0x50)
};

// Class PlatformGameFramework.PGame_GameMode
// Size: 0x3e8 (Inherited: 0x358)
struct APGame_GameMode : public APGame_GameModeBase {
	char UnknownData_358[0x30]; // 0x358(0x30)
	bool bAutoEnableCombatLog; // 0x388(0x01)
	bool bUploadCombatLogOverride; // 0x389(0x01)
	char UnknownData_38A[0x3e]; // 0x38a(0x3e)
	bool bFubarForCPUFramerate; // 0x3c8(0x01)
	bool bFubarForPacketLoss; // 0x3c9(0x01)
	char UnknownData_3CA[0x2]; // 0x3ca(0x02)
	float FubarShutdownWaitTimeoutTime; // 0x3cc(0x04)
	char UnknownData_3D0[0x8]; // 0x3d0(0x08)
	struct TArray<struct FPGame_InactivePlayerStateEntry> PGame_InactivePlayerArray; // 0x3d8(0x10)

	void OnFubarShutdownTimeout(); // Function PlatformGameFramework.PGame_GameMode.OnFubarShutdownTimeout
	void InactivePlayerStateDestroyed(struct AActor* InActor); // Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
	void FinalShutdown(); // Function PlatformGameFramework.PGame_GameMode.FinalShutdown
	void FinalizeMatchEnded(); // Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
};

// Class PlatformGameFramework.PGame_LandingPanelJSONHandler
// Size: 0x160 (Inherited: 0x28)
struct UPGame_LandingPanelJSONHandler : public UObject {
	struct FMulticastInlineDelegate OnHandlerObjectReady; // 0x28(0x10)
	struct FMulticastInlineDelegate OnJsonDownloaded; // 0x38(0x10)
	struct FMulticastInlineDelegate OnImagesDownloaded; // 0x48(0x10)
	char UnknownData_58[0xb8]; // 0x58(0xb8)
	struct TMap<struct FString, struct UTexture2DDynamic*> mapFilePathToTexture; // 0x110(0x50)

	void RequestNewJson(); // Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
};

// Class PlatformGameFramework.PGame_PerformanceCaptureSettings
// Size: 0x60 (Inherited: 0x28)
struct UPGame_PerformanceCaptureSettings : public UObject {
	float FOV; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FString> StatsToCollect; // 0x30(0x10)
	struct TArray<struct FString> MapsToProfile; // 0x40(0x10)
	struct TArray<struct FPGame_PerformanceCaptureProfile> Profiles; // 0x50(0x10)
};

// Class PlatformGameFramework.PGame_PlayerController
// Size: 0x5a8 (Inherited: 0x588)
struct APGame_PlayerController : public APlayerController {
	struct UPGame_CheatComponent* m_CheatComponentClass; // 0x588(0x08)
	struct UPGame_CheatComponent* r_CheatComponent; // 0x590(0x08)
	struct FSerializedMctsNetId r_ReplicatedNetId; // 0x598(0x08)
	struct UInputComponent* InputComponentClass; // 0x5a0(0x08)

	void ClientGameFubared(); // Function PlatformGameFramework.PGame_PlayerController.ClientGameFubared
};

// Class PlatformGameFramework.PGame_PlayerInputDefault
// Size: 0x30 (Inherited: 0x28)
struct UPGame_PlayerInputDefault : public UObject {
	bool bRestrictInvalidInputType; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// Class PlatformGameFramework.PGame_PlayerInput
// Size: 0x1330 (Inherited: 0x12f0)
struct UPGame_PlayerInput : public UPlayerInput {
	char UnknownData_12F0[0x20]; // 0x12f0(0x20)
	float KeyMouseSwitchDelta; // 0x1310(0x04)
	char UnknownData_1314[0x4]; // 0x1314(0x04)
	float GamepadSwitchDelta; // 0x1318(0x04)
	char UnknownData_131C[0x14]; // 0x131c(0x14)
};

// Class PlatformGameFramework.PGame_HierarchicalInputComponent
// Size: 0x198 (Inherited: 0x138)
struct UPGame_HierarchicalInputComponent : public UInputComponent {
	char UnknownData_138[0x60]; // 0x138(0x60)
};

// Class PlatformGameFramework.PGame_PositionHistoryComponent
// Size: 0xe8 (Inherited: 0xb0)
struct UPGame_PositionHistoryComponent : public UActorComponent {
	enum class EPositionHistoryRecordMode PositionRecordMode; // 0xb0(0x01)
	bool ExtrapolateFromLastEntry; // 0xb1(0x01)
	bool bAutoPopulateOnBeginPlay; // 0xb2(0x01)
	char UnknownData_B3[0x15]; // 0xb3(0x15)
	struct TArray<struct FPrimitivePriority> TrackedPrimitives; // 0xc8(0x10)
	char UnknownData_D8[0x10]; // 0xd8(0x10)

	void RemoveTrackedPrimitive(struct UPrimitiveComponent* InPrimitive); // Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
	void AddTrackedPrimitive(struct UPrimitiveComponent* InPrimitive, int32_t Priority); // Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
};

// Class PlatformGameFramework.PGame_WorldSettings
// Size: 0x3b0 (Inherited: 0x3a0)
struct APGame_WorldSettings : public AWorldSettings {
	struct TArray<struct AActor*> ActorsToAlwaysSpawn; // 0x3a0(0x10)
};

// Class PlatformGameFramework.PGameBTComposite_Random
// Size: 0xa0 (Inherited: 0x90)
struct UPGameBTComposite_Random : public UBTCompositeNode {
	struct TArray<float> Probabilities; // 0x90(0x10)
};

// Class PlatformGameFramework.PGameBTTask_AlwaysReturn
// Size: 0x78 (Inherited: 0x70)
struct UPGameBTTask_AlwaysReturn : public UBTTaskNode {
	char AlwaysReturn; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

