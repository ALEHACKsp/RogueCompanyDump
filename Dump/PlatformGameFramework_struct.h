// Enum PlatformGameFramework.EGameLocalizationType
enum class EGameLocalizationType : uint8_t {
	Unknown,
	PC,
	XboxOne,
	PS4_SIEA,
	PS4_SIEE,
	Switch,
	Mobile,
	EGameLocalizationType_MAX,
};

// Enum PlatformGameFramework.EGameBits
enum class EGameBits : uint8_t {
	NoStoreUI,
	UseAltUI,
	UseAltQueueUI,
	UseSpectator,
	EGameBits_MAX,
};

// Enum PlatformGameFramework.EPGame_CustomMovement
enum class EPGame_CustomMovement : uint8_t {
	PLATMOVE_Tween,
	PLATMOVE_Charge,
	PLATMOVE_MAX,
};

// Enum PlatformGameFramework.ECombatLogType
enum class ECombatLogType : uint8_t {
	JSON,
	AWS,
	DEFAULT,
	ECombatLogType_MAX,
};

// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class EEffectGroupApplicationRule : uint8_t {
	STACKABLE,
	NEWEST,
	STRONGEST,
	REFRESH,
	STACK_IN_PLACE,
	STACK_IN_PLACE_INSTIGATOR,
	STRONGEST_BEFORE_NEWEST,
	EEffectGroupApplicationRule_MAX,
};

// Enum PlatformGameFramework.EPGame_EPropertyType
enum class EPGame_EPropertyType : uint8_t {
	PROPTYPE_Modifier,
	PROPTYPE_Percent,
	PROPTYPE_Value,
	PROPTYPE_Delta,
	PROPTYPE_MAX,
};

// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class PGAME_INPUT_STATE : uint8_t {
	PIS_KEYMOUSE,
	PIS_GAMEPAD,
	PIS_TOUCH,
	PIS_UNKNOWN,
	PIS_MAX,
};

// Enum PlatformGameFramework.EPositionHistoryRecordMode
enum class EPositionHistoryRecordMode : uint8_t {
	OnTick,
	Manual,
	EPositionHistoryRecordMode_MAX,
};

// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class EPGame_ReplicateTimerState : uint8_t {
	Inactive,
	Active,
	Overtime,
	Unlimited,
	Paused,
	EPGame_MAX,
};

// ScriptStruct PlatformGameFramework.SerializedMctsNetId
// Size: 0x08 (Inherited: 0x00)
struct FSerializedMctsNetId {
	uint64_t A; // 0x00(0x08)
};

// ScriptStruct PlatformGameFramework.PGame_BlueprintableLightingChannels
// Size: 0x03 (Inherited: 0x00)
struct FPGame_BlueprintableLightingChannels {
	bool bChannel0; // 0x00(0x01)
	bool bChannel1; // 0x01(0x01)
	bool bChannel2; // 0x02(0x01)
};

// ScriptStruct PlatformGameFramework.ChargeInfo
// Size: 0x1c (Inherited: 0x00)
struct FChargeInfo {
	struct FVector ChargeInitialLocation; // 0x00(0x0c)
	float ChargeInitialYaw; // 0x0c(0x04)
	float ChargeSpeed; // 0x10(0x04)
	float ChargeRange; // 0x14(0x04)
	char ChargeType; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct PlatformGameFramework.TweenInfo
// Size: 0x14 (Inherited: 0x00)
struct FTweenInfo {
	char TweenType; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	struct FVector TweenDestination; // 0x04(0x0c)
	float TweenTime; // 0x10(0x04)
};

// ScriptStruct PlatformGameFramework.PGame_InstantEffectRepData
// Size: 0x40 (Inherited: 0x00)
struct FPGame_InstantEffectRepData {
	struct UPGame_EffectGroup* EffectGroupBlueprint; // 0x00(0x08)
	struct UPGame_EffectAttachment* AttachmentBlueprint; // 0x08(0x08)
	uint16_t EffectGroupId; // 0x10(0x02)
	char UnknownData_12[0x6]; // 0x12(0x06)
	struct AActor* SourceActor; // 0x18(0x08)
	struct FVector HitLocation; // 0x20(0x0c)
	struct FVector HitNormal; // 0x2c(0x0c)
	uint32_t ReplicatedEffectFlags; // 0x38(0x04)
	uint16_t SkinId; // 0x3c(0x02)
	char UnknownData_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepDataContainer
// Size: 0x120 (Inherited: 0x108)
struct FPGame_PersistentEffectRepDataContainer : public FFastArraySerializer {
	struct TArray<struct FPGame_PersistentEffectRepData> Items; // 0x108(0x10)
	char UnknownData_118[0x8]; // 0x118(0x08)
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepData
// Size: 0x58 (Inherited: 0x0c)
struct FPGame_PersistentEffectRepData : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct UPGame_EffectGroup* EffectGroupBlueprint; // 0x10(0x08)
	struct UPGame_EffectAttachment* AttachmentBlueprint; // 0x18(0x08)
	uint16_t EffectGroupId; // 0x20(0x02)
	char UnknownData_22[0x2]; // 0x22(0x02)
	float fTimeRemainingInitial; // 0x24(0x04)
	char UnknownData_28[0x4]; // 0x28(0x04)
	char nNumStacks; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
	struct AActor* SourceActor; // 0x30(0x08)
	uint32_t ReplicatedEffectFlags; // 0x38(0x04)
	uint16_t SkinId; // 0x3c(0x02)
	char UnknownData_3E[0x12]; // 0x3e(0x12)
	struct UPGame_EffectAttachment* pAttachment; // 0x50(0x08)
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerPropertyContainer
// Size: 0x170 (Inherited: 0x108)
struct FPGame_EffectManagerPropertyContainer : public FFastArraySerializer {
	struct TArray<struct FPGame_Property> Properties; // 0x108(0x10)
	char UnknownData_118[0x58]; // 0x118(0x58)
};

// ScriptStruct PlatformGameFramework.PGame_Property
// Size: 0x24 (Inherited: 0x0c)
struct FPGame_Property : public FFastArraySerializerItem {
	struct FPlatformPropertyId PropertyId; // 0x0c(0x02)
	char Type; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
	float Base; // 0x10(0x04)
	float RawFlat; // 0x14(0x04)
	float RawPercent; // 0x18(0x04)
	float Minimum; // 0x1c(0x04)
	float Maximum; // 0x20(0x04)
};

// ScriptStruct PlatformGameFramework.PlatformPropertyId
// Size: 0x02 (Inherited: 0x00)
struct FPlatformPropertyId {
	uint16_t ID; // 0x00(0x02)
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerCurrentProperty
// Size: 0x08 (Inherited: 0x00)
struct FPGame_EffectManagerCurrentProperty {
	struct FPlatformPropertyId propId; // 0x00(0x02)
	char UnknownData_2[0x2]; // 0x02(0x02)
	float propValue; // 0x04(0x04)
};

// ScriptStruct PlatformGameFramework.PGame_InactivePlayerStateEntry
// Size: 0x10 (Inherited: 0x00)
struct FPGame_InactivePlayerStateEntry {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct APlayerState* PlayerState; // 0x08(0x08)
};

// ScriptStruct PlatformGameFramework.PGame_PlayerProfile
// Size: 0x20 (Inherited: 0x00)
struct FPGame_PlayerProfile {
	struct FSerializedMctsNetId MctsPlayerId; // 0x00(0x08)
	struct FString PlayerName; // 0x08(0x10)
	uint16_t AccessFlags; // 0x18(0x02)
	bool bSpectator; // 0x1a(0x01)
	bool bDebugPlayer; // 0x1b(0x01)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct PlatformGameFramework.PGame_PerformanceCaptureProfile
// Size: 0x1c (Inherited: 0x00)
struct FPGame_PerformanceCaptureProfile {
	struct FName ProfileName; // 0x00(0x08)
	int32_t ScalabilityBucket; // 0x08(0x04)
	int32_t ResolutionX; // 0x0c(0x04)
	int32_t ResolutionY; // 0x10(0x04)
	int32_t VsyncInterval; // 0x14(0x04)
	bool bFullScreen; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct PlatformGameFramework.CollisionDebugInfo
// Size: 0x40 (Inherited: 0x00)
struct FCollisionDebugInfo {
	char UnknownData_0[0x40]; // 0x00(0x40)
};

// ScriptStruct PlatformGameFramework.PrimitivePriority
// Size: 0x20 (Inherited: 0x00)
struct FPrimitivePriority {
	struct UPrimitiveComponent* Primitive; // 0x00(0x08)
	int32_t Priority; // 0x08(0x04)
	char UnknownData_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimer
// Size: 0x38 (Inherited: 0x00)
struct FPGame_ReplicatedTimer {
	enum class EPGame_ReplicateTimerState TimerState; // 0x00(0x01)
	char UnknownData_1[0x3]; // 0x01(0x03)
	float InitialTime; // 0x04(0x04)
	float TimeRemaining; // 0x08(0x04)
	char UnknownData_C[0x2c]; // 0x0c(0x2c)
};

