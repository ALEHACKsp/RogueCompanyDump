// Enum KillstreakUINew.EKSPlayerQueryError
enum class EKSPlayerQueryError : uint8_t {
	None,
	NoResults,
	TimedOut,
	QueryError,
	EKSPlayerQueryError_MAX,
};

// Enum KillstreakUINew.EPerkTreeNodeState
enum class EPerkTreeNodeState : uint8_t {
	NODE_OFF,
	NODE_ERROR,
	NODE_UNREACHABLE,
	NODE_UNAFFORDABLE,
	NODE_UNLOCKABLE,
	NODE_OWNED,
	NODE_OWNED_EQUIPPED,
	NODE_MAX,
};

// Enum KillstreakUINew.ESpecialtyItemType
enum class ESpecialtyItemType : uint8_t {
	ESpecItemType_SpecialtyPerk,
	ESpecItemType_GlobalPerk,
	ESpecItemType_Killstreak,
	ESpecItemType_Gadget,
	ESpecItemType_PistolAttachment,
	ESpecItemType_Pistol,
	ESpecItemType_Specialty,
	ESpecItemType_AutoEquippedPerk,
	ESpecItemType_SecondaryAbility,
	ESpecItemType_LoadoutClass,
	ESpecItemType_LoadoutBundle,
	ESpecItemType_MAX,
};

// Enum KillstreakUINew.EQueueType
enum class EQueueType : uint8_t {
	QT_Test,
	QT_Training,
	QT_PVP,
	QT_PVE,
	QT_Custom,
	QT_Ranked,
	QT_LimitedTime,
	QT_None,
	QT_MAX,
};

// Enum KillstreakUINew.EKSSocialOverlaySection
enum class EKSSocialOverlaySection : uint8_t {
	Invalid,
	PartyMembers,
	MatchTeamMembers,
	PartyInvitations,
	FriendInvites,
	OnlineMctsFriends,
	OnlinePortalFriends,
	OfflineMctsFriends,
	Blocked,
	SearchResults,
	Pending,
	RecentlyPlayed,
	SuggestedFriends,
	MAX,
};

// Enum KillstreakUINew.EKSInviteSelectResult
enum class EKSInviteSelectResult : uint8_t {
	NoChange,
	Selected,
	Deselected,
	EKSInviteSelectResult_MAX,
};

// Enum KillstreakUINew.EKSInviteCloseAction
enum class EKSInviteCloseAction : uint8_t {
	None,
	Submit,
	EKSInviteCloseAction_MAX,
};

// Enum KillstreakUINew.EKSVoiceActivityAudioState
enum class EKSVoiceActivityAudioState : uint8_t {
	Disconnected,
	Connecting,
	Connected,
	Disconnecting,
	EKSVoiceActivityAudioState_MAX,
};

// Enum KillstreakUINew.ECombatEventType
enum class ECombatEventType : uint8_t {
	CombatEvent_Down,
	CombatEvent_Elim,
	CombatEvent_MAX,
};

// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class EConfigPropertyGuidedCalloutScenes : uint8_t {
	NONE,
	ROGUE_SCENE,
	ROGUE_CUSTOMIZATION,
	QUEUE_SELECT,
	MAX_DO_NOT_GO_OVER,
	EConfigPropertyGuidedCalloutScenes_MAX,
};

// Enum KillstreakUINew.EAllyMarkerState
enum class EAllyMarkerState : uint8_t {
	Normal,
	Downed,
	Reviving,
	Dead,
	Hidden,
	EAllyMarkerState_MAX,
};

// Enum KillstreakUINew.EContextPromptAnchoring
enum class EContextPromptAnchoring : uint8_t {
	AnchorLeft,
	AnchorRight,
	AnchorCenter,
	EContextPromptAnchoring_MAX,
};

// Enum KillstreakUINew.EKSCategoryOpenMode
enum class EKSCategoryOpenMode : uint8_t {
	ClosedByDefault,
	OpenByDefault,
	EKSCategoryOpenMode_MAX,
};

// Enum KillstreakUINew.EConsoleCommandParamType
enum class EConsoleCommandParamType : uint8_t {
	None,
	Bool,
	String,
	EConsoleCommandParamType_MAX,
};

// Enum KillstreakUINew.ESocialMessageType
enum class ESocialMessageType : uint8_t {
	EInvite,
	EInviteResponse,
	EInviteExpired,
	EInviteError,
	EGenericMsg,
	ESocialMessageType_MAX,
};

// Enum KillstreakUINew.ELowAmmoState
enum class ELowAmmoState : uint8_t {
	Normal,
	NeedsReload,
	LowAmmo,
	NoAmmo,
	ELowAmmoState_MAX,
};

// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class EIconMarkerScreenRegion : uint8_t {
	Normal,
	Center,
	Edge,
	EIconMarkerScreenRegion_MAX,
};

// Enum KillstreakUINew.EIconHoverState
enum class EIconHoverState : uint8_t {
	Unhovered,
	Hovering,
	Hovered,
	Unhovering,
	EIconHoverState_MAX,
};

// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class EMinimapWidgetClampStyle : uint8_t {
	Circular,
	Square,
	SquareByAngle,
	SquareByProjection,
	EMinimapWidgetClampStyle_MAX,
};

// Enum KillstreakUINew.ENewsActions
enum class ENewsActions : uint8_t {
	ENewsActions_Unknown,
	ENewsActions_ExternalURL,
	ENewsActions_NavToRoute,
	ENewsActions_MAX,
};

// Enum KillstreakUINew.EPerkTreeEdgeState
enum class EPerkTreeEdgeState : uint8_t {
	EDGE_OFF,
	EDGE_ERROR,
	EDGE_UNREACHABLE,
	EDGE_TO_UNLOCKABLE,
	EDGE_OWNED,
	EDGE_MAX,
};

// Enum KillstreakUINew.EPerkTreeEdgeType
enum class EPerkTreeEdgeType : uint8_t {
	EDGE_TOP,
	EDGE_LEFT,
	EDGE_DIAGONAL,
	EDGE_BACK_DIAGONAL,
	EDGE_MAX,
};

// Enum KillstreakUINew.EPlayerSelectionState
enum class EPlayerSelectionState : uint8_t {
	EPlayerState_Selecting,
	EPlayerState_Selected,
	EPlayerState_LockedIn,
	EPlayerState_MAX,
};

// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class EPointObjectiveMarkerTeamState : uint8_t {
	Neutral,
	AllyOwned,
	EnemyOwned,
	Contested,
	EPointObjectiveMarkerTeamState_MAX,
};

// Enum KillstreakUINew.EPointObjectiveMarkerObjectiveState
enum class EPointObjectiveMarkerObjectiveState : uint8_t {
	Locked,
	Unlocked,
	Capturing,
	Captured,
	Recapturing,
	EPointObjectiveMarkerObjectiveState_MAX,
};

// Enum KillstreakUINew.EKSQueueJoinError
enum class EKSQueueJoinError : uint8_t {
	None,
	SystemError,
	QueueUnavailable,
	DeserterPenaltyActive,
	PlayerLevelRequirement,
	PartyMemberLevelRequirement,
	PartyMinMemberRequirement,
	PartyMaxMemberRequirement,
	InQueue,
	EKSQueueJoinError_MAX,
};

// Enum KillstreakUINew.EQueueTimerState
enum class EQueueTimerState : uint8_t {
	Unknown,
	DeserterPenaltyActive,
	WaitingForLeader,
	Queued,
	EnteringMatch,
	EQueueTimerState_MAX,
};

// Enum KillstreakUINew.EQuickPlayQueueState
enum class EQuickPlayQueueState : uint8_t {
	Unknown,
	NoQueuesAvailable,
	NoSelectedQueue,
	SelectedQueueUnavailable,
	DeserterPenaltyActive,
	SelectedQueuePartyMinLimit,
	SelectedQueuePartyMaxLimit,
	ReadyToJoin,
	WaitingForLeader,
	Queued,
	EnteringMatch,
	ReadyToRejoin,
	PlayerLevelRequirement,
	PartyLevelRequirement,
	EQuickPlayQueueState_MAX,
};

// Enum KillstreakUINew.EAmmoState
enum class EAmmoState : uint8_t {
	EAmmoState_Full,
	EAmmoState_NeedsReload,
	EAmmoState_LowAmmo,
	EAmmoState_CriticallyLowAmmo,
	EAmmoState_NoAmmo,
	EAmmoState_MAX,
};

// Enum KillstreakUINew.EKSSettingType
enum class EKSSettingType : uint8_t {
	Bool,
	Int,
	Float,
	Key,
	Invalid,
	EKSSettingType_MAX,
};

// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class EPUMG_ShopItemUpgradeSegmentType : uint8_t {
	Single,
	First,
	Middle,
	Last,
	EPUMG_MAX,
};

// Enum KillstreakUINew.EKSSocialFriendSection
enum class EKSSocialFriendSection : uint8_t {
	Invalid,
	PartyMembers,
	MatchTeamMembers,
	PartyInvitations,
	OnlineMctsFriends,
	OnlinePortalFriends,
	OfflineMctsFriends,
	Blocked,
	Pending,
	MAX,
};

// Enum KillstreakUINew.EKSSocialPanelDisplayOption
enum class EKSSocialPanelDisplayOption : uint8_t {
	HideIfEmpty,
	ShowIfEmpty,
	EKSSocialPanelDisplayOption_MAX,
};

// Enum KillstreakUINew.EStoreItemWidgetType
enum class EStoreItemWidgetType : uint8_t {
	ELargePanel,
	ETallPanel,
	ESmallPanel,
	STORE_WIDGET_TYPE_MAX,
	EStoreItemWidgetType_MAX,
};

// Enum KillstreakUINew.ETargetMarkerViewState
enum class ETargetMarkerViewState : uint8_t {
	Hidden,
	Showing,
	Shown,
	HidingNeutral,
	HidingActivated,
	HidingFailed,
	ETargetMarkerViewState_MAX,
};

// Enum KillstreakUINew.EToastCategory
enum class EToastCategory : uint8_t {
	ETOAST_INFO,
	ETOAST_ERROR,
	ETOAST_FRIEND,
	ETOAST_PARTY,
	ETOAST_CHALLENGE,
	ETOAST_MERC_MASTERY,
	ETOAST_ITEM_UNLOCK,
	ETOAST_AWARD,
	ETOAST_BATTLEPASS_TIER,
	ETOAST_MAX,
};

// Enum KillstreakUINew.EReportPlayerReason
enum class EReportPlayerReason : uint8_t {
	Unknown_None,
	Harassment,
	Cheating,
	Teaming,
	IntentionalFeeding,
	StreamSniping,
	LeavingTheGame_AFK,
	OtherReason,
	EReportPlayerReason_MAX,
};

// Enum KillstreakUINew.EKSVendorTypes
enum class EKSVendorTypes : uint8_t {
	Unknown,
	Equipment,
	Specialty,
	SpecialtyItem,
	StarterSpecLoadout,
	Apparel,
	StarterApparelLoadout,
	MalwearApparelLoadout,
	MercTwoApparelLoadout,
	HitmanApparelLoadout,
	EKSVendorTypes_MAX,
};

// Enum KillstreakUINew.EDamageModifier
enum class EDamageModifier : uint8_t {
	None,
	Reduced,
	Resisted,
	Shielded,
	EDamageModifier_MAX,
};

// Enum KillstreakUINew.EDamageFlourishType
enum class EDamageFlourishType : uint8_t {
	None,
	Headshot,
	Lethal,
	EDamageFlourishType_MAX,
};

// Enum KillstreakUINew.EDamageBaseType
enum class EDamageBaseType : uint8_t {
	Normal,
	Armored,
	Lethal,
	Special,
	EDamageBaseType_MAX,
};

// ScriptStruct KillstreakUINew.PlayerProgression
// Size: 0xc8 (Inherited: 0x00)
struct FPlayerProgression {
	struct TArray<struct FActivityTier> ProgressionTiers; // 0x00(0x10)
	int32_t StartingXPValue; // 0x10(0x04)
	int32_t EndingXPValue; // 0x14(0x04)
	struct UKSActivity* ActivityReference; // 0x18(0x08)
	struct UKSActivityInstance* ActivityInstanceReference; // 0x20(0x08)
	struct TMap<enum class ERewardSource, float> ProgressionBySource; // 0x28(0x50)
	struct TMap<struct FString, float> ProgressionByEvent; // 0x78(0x50)
};

// ScriptStruct KillstreakUINew.CustomLoadoutItem
// Size: 0x10 (Inherited: 0x00)
struct FCustomLoadoutItem {
	struct UKSItem* Item; // 0x00(0x08)
	enum class ESpecialtyItemType SpecialtyItemType; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	int32_t LoadoutClassItemId; // 0x0c(0x04)
};

// ScriptStruct KillstreakUINew.ClientQueueInfo
// Size: 0xb8 (Inherited: 0x50)
struct FClientQueueInfo : public FPUMG_ClientQueueInfo {
	struct TSoftObjectPtr<struct UTexture2D> ItemIcon; // 0x50(0x28)
	enum class EQueueType QueueType; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct TArray<struct FUIMapInfo> MapRotationInfos; // 0x80(0x10)
	struct TArray<struct FMapDetail> MapList; // 0x90(0x10)
	int32_t MaxPlayerPerSide; // 0xa0(0x04)
	int32_t SortOrder; // 0xa4(0x04)
	int32_t ShelteredMMQueueId; // 0xa8(0x04)
	float ShelteredMMLevelLimit; // 0xac(0x04)
	float ShelteredMMAttemptTimeout; // 0xb0(0x04)
	bool UsesDeserterPenalty; // 0xb4(0x01)
	char UnknownData_B5[0x3]; // 0xb5(0x03)
};

// ScriptStruct KillstreakUINew.MapDetail
// Size: 0x48 (Inherited: 0x00)
struct FMapDetail {
	int32_t MapId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText mapName; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> MapThumbnail; // 0x20(0x28)
};

// ScriptStruct KillstreakUINew.UIMapInfo
// Size: 0x58 (Inherited: 0x08)
struct FUIMapInfo : public FTableRowBase {
	struct TArray<int32_t> MapIds; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> MapThumbnail; // 0x30(0x28)
};

// ScriptStruct KillstreakUINew.TickAnimationParams
// Size: 0x2c (Inherited: 0x00)
struct FTickAnimationParams {
	float Duration; // 0x00(0x04)
	struct FDelegate UpdateEvent; // 0x04(0x10)
	struct FDelegate FinishedEvent; // 0x14(0x10)
	bool IsPlaying; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	float ElapsedTime; // 0x28(0x04)
};

// ScriptStruct KillstreakUINew.EliminationMessage
// Size: 0x30 (Inherited: 0x00)
struct FEliminationMessage {
	struct AKSPlayerState* Victim; // 0x00(0x08)
	struct AKSPlayerState* Instigator; // 0x08(0x08)
	struct FText Message; // 0x10(0x18)
	int32_t DamageDealt; // 0x28(0x04)
	enum class ECombatEventType EventType; // 0x2c(0x01)
	bool ViewedPlayerAssisted; // 0x2d(0x01)
	char UnknownData_2E[0x2]; // 0x2e(0x02)
};

// ScriptStruct KillstreakUINew.GuidedCalloutSceneData
// Size: 0x40 (Inherited: 0x08)
struct FGuidedCalloutSceneData : public FTableRowBase {
	enum class EConfigPropertyGuidedCalloutScenes SceneIndex; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	struct FName AssociatedViewRoute; // 0x0c(0x08)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct FText HeaderText; // 0x18(0x18)
	struct TArray<struct FGuidedCalloutCardData> CalloutCards; // 0x30(0x10)
};

// ScriptStruct KillstreakUINew.GuidedCalloutCardData
// Size: 0x58 (Inherited: 0x00)
struct FGuidedCalloutCardData {
	struct FText Header; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x30(0x28)
};

// ScriptStruct KillstreakUINew.RouteContextInfo
// Size: 0x10 (Inherited: 0x00)
struct FRouteContextInfo {
	struct TArray<struct UContextActionData*> ActionData; // 0x00(0x10)
};

// ScriptStruct KillstreakUINew.ContextAction
// Size: 0x48 (Inherited: 0x08)
struct FContextAction : public FTableRowBase {
	struct FKey Key; // 0x08(0x18)
	struct FText Text; // 0x20(0x18)
	int32_t SortOrder; // 0x38(0x04)
	enum class EContextPromptAnchoring Anchor; // 0x3c(0x01)
	bool IsConfirm; // 0x3d(0x01)
	bool IsCancel; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	struct UAkAudioEvent* OverrideSFX; // 0x40(0x08)
};

// ScriptStruct KillstreakUINew.DebugMenuCommandInfo
// Size: 0x18 (Inherited: 0x00)
struct FDebugMenuCommandInfo {
	struct FString CommandName; // 0x00(0x10)
	enum class EConsoleCommandParamType ParamType; // 0x10(0x01)
	char UnknownData_11[0x7]; // 0x11(0x07)
};

// ScriptStruct KillstreakUINew.MatchDetail
// Size: 0x38 (Inherited: 0x00)
struct FMatchDetail {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct KillstreakUINew.ExpDisplayInfo
// Size: 0x28 (Inherited: 0x00)
struct FExpDisplayInfo {
	int32_t EventDelta; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText EventReason; // 0x08(0x18)
	bool bIsBonus; // 0x20(0x01)
	char UnknownData_21[0x7]; // 0x21(0x07)
};

// ScriptStruct KillstreakUINew.ButtonPromptContext
// Size: 0x10 (Inherited: 0x00)
struct FButtonPromptContext {
	struct TArray<struct FButtonPromptData> PromptInfo; // 0x00(0x10)
};

// ScriptStruct KillstreakUINew.ButtonPromptData
// Size: 0x30 (Inherited: 0x00)
struct FButtonPromptData {
	struct FKey Key; // 0x00(0x18)
	struct FText Text; // 0x18(0x18)
};

// ScriptStruct KillstreakUINew.FontPaletteInfo
// Size: 0x58 (Inherited: 0x08)
struct FFontPaletteInfo : public FTableRowBase {
	struct FSlateFontInfo FontInfo; // 0x08(0x50)
};

// ScriptStruct KillstreakUINew.ColorPaletteInfo
// Size: 0x18 (Inherited: 0x08)
struct FColorPaletteInfo : public FTableRowBase {
	struct FLinearColor LinearColor; // 0x08(0x10)
};

// ScriptStruct KillstreakUINew.MapIconOptions
// Size: 0x18 (Inherited: 0x00)
struct FMapIconOptions {
	struct FVector MarkerWorldPosition; // 0x00(0x0c)
	float AnchorHeight; // 0x0c(0x04)
	struct FVector2D ScreenMargin; // 0x10(0x08)
};

// ScriptStruct KillstreakUINew.RoundResultAnnoucement
// Size: 0x20 (Inherited: 0x00)
struct FRoundResultAnnoucement {
	int32_t WinningTeamID; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FText ResultText; // 0x08(0x18)
};

// ScriptStruct KillstreakUINew.KSMediaPlayerWidgetPlaylistEntry
// Size: 0x30 (Inherited: 0x08)
struct FKSMediaPlayerWidgetPlaylistEntry : public FTableRowBase {
	bool bIsSkippable; // 0x08(0x01)
	char UnknownData_9[0x3]; // 0x09(0x03)
	float SkippableAfter; // 0x0c(0x04)
	bool bForceFirstWatch; // 0x10(0x01)
	bool bOnlyWatchOnce; // 0x11(0x01)
	uint16_t MajorVersion; // 0x12(0x02)
	char UnknownData_14[0x4]; // 0x14(0x04)
	struct UPlatformMediaSource* PlatformMediaSource; // 0x18(0x08)
	struct UAkAudioEvent* PlayEvent; // 0x20(0x08)
	struct UAkAudioEvent* StopEvent; // 0x28(0x08)
};

// ScriptStruct KillstreakUINew.KSPerkTreeEdgeInfo
// Size: 0x02 (Inherited: 0x00)
struct FKSPerkTreeEdgeInfo {
	enum class EPerkTreeEdgeType EdgeType; // 0x00(0x01)
	enum class EPerkTreeEdgeState EdgeState; // 0x01(0x01)
};

// ScriptStruct KillstreakUINew.PlayerAwardsPanelData
// Size: 0x10 (Inherited: 0x00)
struct FPlayerAwardsPanelData {
	struct UKSActivityInstance* ActivityInstance; // 0x00(0x08)
	int32_t ProgressTierOverride; // 0x08(0x04)
	bool RecentlyUpdated; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct KillstreakUINew.KSPendingProfiles
// Size: 0x28 (Inherited: 0x00)
struct FKSPendingProfiles {
	struct TArray<struct UKSPlayerInfo*> PendingPlayers; // 0x00(0x10)
	char UnknownData_10[0x18]; // 0x10(0x18)
};

// ScriptStruct KillstreakUINew.KSPlayerQueryHandle
// Size: 0x10 (Inherited: 0x00)
struct FKSPlayerQueryHandle {
	struct UKSPlayerQueryDataFactory* Owner; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct KillstreakUINew.KSPointObjectiveMarkerViewState
// Size: 0x0c (Inherited: 0x00)
struct FKSPointObjectiveMarkerViewState {
	struct FName ObjectiveState; // 0x00(0x08)
	enum class EPointObjectiveMarkerTeamState TeamState; // 0x08(0x01)
	bool IsBombDeployedHere; // 0x09(0x01)
	char UnknownData_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct KillstreakUINew.QueueSection
// Size: 0x18 (Inherited: 0x00)
struct FQueueSection {
	enum class EQueueType QueueSectionType; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct TArray<struct FClientQueueInfo> AssociatedQueues; // 0x08(0x10)
};

// ScriptStruct KillstreakUINew.QueueDetail
// Size: 0x48 (Inherited: 0x08)
struct FQueueDetail : public FTableRowBase {
	int32_t QueueId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FText QueueName; // 0x10(0x18)
	struct FText QueueDescription; // 0x28(0x18)
	int32_t SortOrder; // 0x40(0x04)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// ScriptStruct KillstreakUINew.MasterySectionData
// Size: 0x18 (Inherited: 0x00)
struct FMasterySectionData {
	struct TArray<struct FActivityTier> ActivityTiers; // 0x00(0x10)
	float ProgressPercentage; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct KillstreakUINew.MasteryRewardData
// Size: 0x10 (Inherited: 0x00)
struct FMasteryRewardData {
	struct UPUMG_StoreItem* StoreItem; // 0x00(0x08)
	int32_t BadgeTier; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct KillstreakUINew.KSSettingPropertyId
// Size: 0x18 (Inherited: 0x00)
struct FKSSettingPropertyId {
	struct FString Name; // 0x00(0x10)
	int32_t ID; // 0x10(0x04)
	char UnknownData_14[0x4]; // 0x14(0x04)
};

// ScriptStruct KillstreakUINew.KSSettingsGroupConfig
// Size: 0x18 (Inherited: 0x00)
struct FKSSettingsGroupConfig {
	struct UKSSettingsContainerConfigAsset* MainSettingContainerAsset; // 0x00(0x08)
	struct TArray<struct UKSSettingsContainerConfigAsset*> SubSettingContainerAssets; // 0x08(0x10)
};

// ScriptStruct KillstreakUINew.ColorOptions
// Size: 0x28 (Inherited: 0x00)
struct FColorOptions {
	struct FText OptionName; // 0x00(0x18)
	struct FLinearColor OptionColor; // 0x18(0x10)
};

// ScriptStruct KillstreakUINew.KSSettingsWidgetConfig
// Size: 0x10 (Inherited: 0x00)
struct FKSSettingsWidgetConfig {
	struct UKSSettingsWidget* WidgetClass; // 0x00(0x08)
	struct UKSSettingsInfoBase* SettingInfo; // 0x08(0x08)
};

// ScriptStruct KillstreakUINew.KSSwitchDockedModeSetting
// Size: 0x02 (Inherited: 0x00)
struct FKSSwitchDockedModeSetting {
	bool ShowDocked; // 0x00(0x01)
	bool ShowHandheld; // 0x01(0x01)
};

// ScriptStruct KillstreakUINew.KSRequiredInputTypes
// Size: 0x02 (Inherited: 0x00)
struct FKSRequiredInputTypes {
	bool Gamepad; // 0x00(0x01)
	bool Mouse; // 0x01(0x01)
};

// ScriptStruct KillstreakUINew.KSAllowedPlatformTypes
// Size: 0x0a (Inherited: 0x00)
struct FKSAllowedPlatformTypes {
	bool XboxOne; // 0x00(0x01)
	bool PS4; // 0x01(0x01)
	bool Switch; // 0x02(0x01)
	bool Windows; // 0x03(0x01)
	bool Mac; // 0x04(0x01)
	bool Linux; // 0x05(0x01)
	bool IOS; // 0x06(0x01)
	bool Android; // 0x07(0x01)
	bool XSX; // 0x08(0x01)
	bool PS5; // 0x09(0x01)
};

// ScriptStruct KillstreakUINew.SettingDelegateStruct
// Size: 0x20 (Inherited: 0x00)
struct FSettingDelegateStruct {
	struct FDelegate SettingApplied; // 0x00(0x10)
	struct FDelegate SettingSaved; // 0x10(0x10)
};

// ScriptStruct KillstreakUINew.KSKeyGroup
// Size: 0x1c (Inherited: 0x00)
struct FKSKeyGroup {
	char UnknownData_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct KillstreakUINew.KSKeyBind
// Size: 0x78 (Inherited: 0x00)
struct FKSKeyBind {
	struct FKey Primary; // 0x00(0x18)
	enum class EKSInputActionType PrimaryInputActionType; // 0x18(0x01)
	char UnknownData_19[0x7]; // 0x19(0x07)
	struct FKey Secondary; // 0x20(0x18)
	enum class EKSInputActionType SecondaryInputActionType; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct FKey Gamepad; // 0x40(0x18)
	struct FKey Combo; // 0x58(0x18)
	enum class EKSInputActionType GamepadInputActionType; // 0x70(0x01)
	char UnknownData_71[0x7]; // 0x71(0x07)
};

// ScriptStruct KillstreakUINew.KSKeyBindInfo
// Size: 0x10 (Inherited: 0x00)
struct FKSKeyBindInfo {
	struct FName Name; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	enum class EKSInputType InputType; // 0x0c(0x01)
	enum class EKSKeyBindType KeyBindType; // 0x0d(0x01)
	bool IsPermanentBinding; // 0x0e(0x01)
	char UnknownData_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct KillstreakUINew.KSSocialPanelSectionDef
// Size: 0x03 (Inherited: 0x00)
struct FKSSocialPanelSectionDef {
	char UnknownData_0[0x3]; // 0x00(0x03)
};

// ScriptStruct KillstreakUINew.SpecialtyCustomLoadout
// Size: 0x1a0 (Inherited: 0x00)
struct FSpecialtyCustomLoadout {
	char UnknownData_0[0x8]; // 0x00(0x08)
	int32_t LoadoutClassItemId; // 0x08(0x04)
	int32_t LoadoutBundleItemId; // 0x0c(0x04)
	struct FSpecialtyData SpecialtyOne; // 0x10(0x48)
	struct FSpecialtyData SpecialtyTwo; // 0x58(0x48)
	struct FCustomLoadoutItem PerkOne; // 0xa0(0x10)
	struct FCustomLoadoutItem PerkTwo; // 0xb0(0x10)
	struct FCustomLoadoutItem PerkThree; // 0xc0(0x10)
	struct FCustomLoadoutItem PerkFour; // 0xd0(0x10)
	struct FCustomLoadoutItem PassiveOne; // 0xe0(0x10)
	struct FCustomLoadoutItem PassiveTwo; // 0xf0(0x10)
	struct FCustomLoadoutItem KillstreakOne; // 0x100(0x10)
	struct FCustomLoadoutItem KillstreakTwo; // 0x110(0x10)
	struct FCustomLoadoutItem SecondaryAbilityOne; // 0x120(0x10)
	struct FCustomLoadoutItem SecondaryAbilityTwo; // 0x130(0x10)
	struct FCustomLoadoutItem GadgetOne; // 0x140(0x10)
	struct FCustomLoadoutItem Pistol; // 0x150(0x10)
	struct FCustomLoadoutItem PistolAttachmentOne; // 0x160(0x10)
	struct FCustomLoadoutItem PistolAttachmentTwo; // 0x170(0x10)
	struct FCustomLoadoutItem PistolAttachmentThree; // 0x180(0x10)
	struct FCustomLoadoutItem PrimaryWeapon; // 0x190(0x10)
};

// ScriptStruct KillstreakUINew.SpecialtyData
// Size: 0x48 (Inherited: 0x00)
struct FSpecialtyData {
	struct UKSSpecialty* Specialty; // 0x00(0x08)
	struct FCustomLoadoutItem Killstreak; // 0x08(0x10)
	struct FCustomLoadoutItem SecondaryAbility; // 0x18(0x10)
	struct FCustomLoadoutItem PassiveAbility; // 0x28(0x10)
	struct TArray<int32_t> AssociatedLoadoutItemIds; // 0x38(0x10)
};

// ScriptStruct KillstreakUINew.ToastData
// Size: 0x58 (Inherited: 0x00)
struct FToastData {
	enum class EToastCategory ToastCategory; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct FText Title; // 0x08(0x18)
	struct FText Message; // 0x20(0x18)
	struct UPUMG_StoreItem* Reward; // 0x38(0x08)
	struct UPlatformInventoryItem* OptionalItemValue; // 0x40(0x08)
	int32_t OptionalIntValue; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct UKSActivity* OptionalActivityValue; // 0x50(0x08)
};

// ScriptStruct KillstreakUINew.ReportPlayerParams
// Size: 0x48 (Inherited: 0x00)
struct FReportPlayerParams {
	int64_t PlayerId; // 0x00(0x08)
	int64_t InstanceId; // 0x08(0x08)
	int32_t LocalPlayerTeamId; // 0x10(0x04)
	int32_t ReportedPlayerTeamId; // 0x14(0x04)
	int32_t TotalPlayerCount; // 0x18(0x04)
	char UnknownData_1C[0x4]; // 0x1c(0x04)
	struct FString PlayerName; // 0x20(0x10)
	enum class EReportPlayerReason Reason; // 0x30(0x01)
	char UnknownData_31[0x7]; // 0x31(0x07)
	struct FString ReportComment; // 0x38(0x10)
};

// ScriptStruct KillstreakUINew.SpecialDamageColors
// Size: 0x30 (Inherited: 0x00)
struct FSpecialDamageColors {
	struct FLinearColor FontColor; // 0x00(0x10)
	struct FLinearColor StrokeColor; // 0x10(0x10)
	struct FLinearColor GlowColor; // 0x20(0x10)
};

// ScriptStruct KillstreakUINew.PlayerInventorySlot
// Size: 0x18 (Inherited: 0x00)
struct FPlayerInventorySlot {
	int32_t SlotIndex; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct UKSWeaponAsset* WeaponAsset; // 0x08(0x08)
	struct FGameplayTag SlotEquipPoint; // 0x10(0x08)
};

