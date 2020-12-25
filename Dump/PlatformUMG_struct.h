// Enum PlatformUMG.EPUMG_TextFilterStatus
enum class EPUMG_TextFilterStatus : uint8_t {
	Unchecked,
	CheckingNow,
	Filtered,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_ChatPhase
enum class EPUMG_ChatPhase : uint8_t {
	PortalAllowed,
	PlayerNamesExist,
	LocalFilters,
	PortalAllowedOtherUser,
	PortalTextFilter,
	ChannelAlreadyHasPending,
	Ready,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_ChatChannel
enum class EPUMG_ChatChannel : uint8_t {
	UNKNOWN,
	PERSONAL,
	CLAN,
	GLOBAL,
	MATCH,
	LOCAL_TEAM,
	PARTY,
	CITY,
	PRIVATE_2,
	EOM_LOBBY,
	SYSTEM,
	TRADE,
	LFG_2,
	LFG_3,
	HELP,
	VOIP_NEWS,
	GM,
	VIP,
	LFG_4,
	VOIP_ECHO,
	VOIP_CONF,
	COMBAT,
	EMOTE,
	NUM_CHAT_CHANNELS,
	EPUMG_MAX,
};

// Enum PlatformUMG.EViewManagerLayer
enum class EViewManagerLayer : uint8_t {
	Base,
	Modal,
	EViewManagerLayer_MAX,
};

// Enum PlatformUMG.EPUMG_LoginState
enum class EPUMG_LoginState : uint8_t {
	ELS_LoggedOut,
	ELS_Eula,
	ELS_CreateName,
	ELS_LoggingIn,
	ELS_LoggedIn,
	ELS_TwoFactor,
	ELS_LinkOffer,
	ELS_Unknown,
	ELS_MAX,
};

// Enum PlatformUMG.EPUMG_MatchStatus
enum class EPUMG_MatchStatus : uint8_t {
	EPUMG_MatchStatus_NotQueued,
	EPUMG_MatchStatus_Declined,
	EPUMG_MatchStatus_Queued,
	EPUMG_MatchStatus_Invited,
	EPUMG_MatchStatus_Accepted,
	EPUMG_MatchStatus_Matching,
	EPUMG_MatchStatus_Waiting,
	EPUMG_MatchStatus_InGame,
	EPUMG_MatchStatus_SpectatorLobby,
	EPUMG_MatchStatus_SpectatorGame,
	EPUMG_MatchStatus_MAX,
};

// Enum PlatformUMG.EPUMG_CustomMatchPermission
enum class EPUMG_CustomMatchPermission : uint8_t {
	None,
	Inviter,
	Leader,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_SettingUIType
enum class EPUMG_SettingUIType : uint8_t {
	Header,
	Slider,
	OptionStepper,
	Checkbox,
	Button,
	Dropdown,
	KeyBinding,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_LastInputType
enum class EPUMG_LastInputType : uint8_t {
	EPUMG_LastInputType_Up,
	EPUMG_LastInputType_Down,
	EPUMG_LastInputType_Left,
	EPUMG_LastInputType_Right,
	EPUMG_LastInputType_MAX,
};

// Enum PlatformUMG.EPUMG_PartyInviteRightsMode
enum class EPUMG_PartyInviteRightsMode : uint8_t {
	EPUMG_PIRM_OnlyLeader,
	EPUMG_PIRM_LeaderStartingCanGrant,
	EPUMG_PIRM_AllMembers,
	EPUMG_PIRM_MAX,
};

// Enum PlatformUMG.EPUMG_PopupButtonType
enum class EPUMG_PopupButtonType : uint8_t {
	Confirm,
	Cancel,
	Default,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_CustomMatchInviteError
enum class EPUMG_CustomMatchInviteError : uint8_t {
	None,
	NotInvitable,
	Banned,
	NotAccepted,
	EPUMG_MAX,
};

// Enum PlatformUMG.EPUMG_CustomMatchError
enum class EPUMG_CustomMatchError : uint8_t {
	None,
	TeamEmpty,
	TeamUnderCapacity,
	TeamOverCapacity,
	EPUMG_MAX,
};

// Enum PlatformUMG.EViewRouteRedirectionPhase
enum class EViewRouteRedirectionPhase : uint8_t {
	VIEW_ROUTE_REDIRECT_None,
	VIEW_ROUTE_REDIRECT_ApplicationLaunch,
	VIEW_ROUTE_REDIRECT_AccountLogin,
	VIEW_ROUTE_REDIRECT_AlwaysCheck,
	VIEW_ROUTE_REDIRECT_MAX,
};

// Enum PlatformUMG.EViewManagerTransitionState
enum class EViewManagerTransitionState : uint8_t {
	Idle,
	Loading,
	AnimatingHide,
	AnimatingShow,
	Locked,
	EViewManagerTransitionState_MAX,
};

// ScriptStruct PlatformUMG.PUMG_ChatData
// Size: 0x40 (Inherited: 0x00)
struct FPUMG_ChatData {
	struct UPUMG_PlayerInfo* Sender; // 0x00(0x08)
	struct UPUMG_PlayerInfo* Recipient; // 0x08(0x08)
	struct FText Message; // 0x10(0x18)
	bool IsOwnMessage; // 0x28(0x01)
	bool IsSeen; // 0x29(0x01)
	bool SystemMessage; // 0x2a(0x01)
	bool IsReplayedMessage; // 0x2b(0x01)
	enum class EPUMG_ChatChannel ChatChannel; // 0x2c(0x01)
	enum class EPUMG_ChatPhase ChatPhase; // 0x2d(0x01)
	enum class EPCOM_PrivilegeStatus UserPrivilege; // 0x2e(0x01)
	enum class EPUMG_TextFilterStatus PortalTextFilterStatus; // 0x2f(0x01)
	int32_t MessageId; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	int64_t MctsMessageId; // 0x38(0x08)
};

// ScriptStruct PlatformUMG.PUMG_AvatarData
// Size: 0x48 (Inherited: 0x00)
struct FPUMG_AvatarData {
	int32_t ItemId; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct TSoftObjectPtr<struct UTexture2D> Texture; // 0x08(0x28)
	struct FString Name; // 0x30(0x10)
	bool owned; // 0x40(0x01)
	bool Selected; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
};

// ScriptStruct PlatformUMG.PUMG_FriendData
// Size: 0x28 (Inherited: 0x00)
struct FPUMG_FriendData {
	struct UPUMG_PlayerInfo* PlayerData; // 0x00(0x08)
	struct FText StatusMessage; // 0x08(0x18)
	bool Online; // 0x20(0x01)
	bool CanChallenge; // 0x21(0x01)
	bool CanSpectate; // 0x22(0x01)
	bool HasHRRelationship; // 0x23(0x01)
	bool HasPortalRelationship; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
};

// ScriptStruct PlatformUMG.LoginQueueInfo
// Size: 0x28 (Inherited: 0x00)
struct FLoginQueueInfo {
	struct FText QueueMessage; // 0x00(0x18)
	int32_t QueuePosition; // 0x18(0x04)
	int32_t QueueSize; // 0x1c(0x04)
	int32_t EstimatedWaitTime; // 0x20(0x04)
	char UnknownData_24[0x4]; // 0x24(0x04)
};

// ScriptStruct PlatformUMG.PUMG_PartyMemberData
// Size: 0x30 (Inherited: 0x00)
struct FPUMG_PartyMemberData {
	struct UPUMG_PlayerInfo* PlayerData; // 0x00(0x08)
	bool IsFriend; // 0x08(0x01)
	char UnknownData_9[0x7]; // 0x09(0x07)
	struct FText StatusMessage; // 0x10(0x18)
	bool Online; // 0x28(0x01)
	bool IsPending; // 0x29(0x01)
	bool CanInvite; // 0x2a(0x01)
	bool IsLeader; // 0x2b(0x01)
	bool IsReady; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct PlatformUMG.PUMG_CustomMatchMember
// Size: 0x10 (Inherited: 0x00)
struct FPUMG_CustomMatchMember {
	struct UPUMG_PlayerInfo* playerinfo; // 0x00(0x08)
	int32_t TeamId; // 0x08(0x04)
	enum class EPUMG_CustomMatchPermission Permissions; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct PlatformUMG.PUMG_SettingsConfig
// Size: 0x50 (Inherited: 0x00)
struct FPUMG_SettingsConfig {
	struct FText DisplayName; // 0x00(0x18)
	struct TArray<struct FText> ValueNames; // 0x18(0x10)
	enum class EPUMG_SettingUIType Type; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	struct FName SettingId; // 0x2c(0x08)
	int32_t MinValue; // 0x34(0x04)
	int32_t MaxValue; // 0x38(0x04)
	float StepValue; // 0x3c(0x04)
	bool DisplayAsPercent; // 0x40(0x01)
	char UnknownData_41[0x3]; // 0x41(0x03)
	int32_t Value; // 0x44(0x04)
	bool AvailableOffline; // 0x48(0x01)
	bool IsStoredInDatabase; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct PlatformUMG.PUMG_KeyBindConfig
// Size: 0x80 (Inherited: 0x00)
struct FPUMG_KeyBindConfig {
	struct FText DisplayName; // 0x00(0x18)
	struct FName InputName; // 0x18(0x08)
	enum class EPUMG_SettingUIType Type; // 0x20(0x01)
	char UnknownData_21[0x3]; // 0x21(0x03)
	struct FName SettingId; // 0x24(0x08)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct FKey PrimaryKey; // 0x30(0x18)
	struct FKey SecondaryKey; // 0x48(0x18)
	struct FKey GamepadKey; // 0x60(0x18)
	bool IsGamepadOnly; // 0x78(0x01)
	char UnknownData_79[0x3]; // 0x79(0x03)
	float Scale; // 0x7c(0x04)
};

// ScriptStruct PlatformUMG.InventoryId
// Size: 0x20 (Inherited: 0x00)
struct FInventoryId {
	int64_t PlayerId; // 0x00(0x08)
	int64_t ItemId; // 0x08(0x08)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct PlatformUMG.InventoryTypeId
// Size: 0x20 (Inherited: 0x00)
struct FInventoryTypeId {
	int64_t PlayerId; // 0x00(0x08)
	int32_t ItemTypeId; // 0x08(0x04)
	int32_t ItemSubTypeId; // 0x0c(0x04)
	char UnknownData_10[0x10]; // 0x10(0x10)
};

// ScriptStruct PlatformUMG.PUMG_ClientQueueInfo
// Size: 0x50 (Inherited: 0x00)
struct FPUMG_ClientQueueInfo {
	char UnknownData_0[0x8]; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	int32_t ID; // 0x38(0x04)
	int32_t LevelLock; // 0x3c(0x04)
	int32_t MinPartySize; // 0x40(0x04)
	int32_t MaxPartySize; // 0x44(0x04)
	bool IsCustom; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// ScriptStruct PlatformUMG.PUMG_ActiveChatChannelData
// Size: 0x10 (Inherited: 0x00)
struct FPUMG_ActiveChatChannelData {
	enum class EPUMG_ChatChannel ChatChannel; // 0x00(0x01)
	char UnknownData_1[0x7]; // 0x01(0x07)
	struct UPUMG_PlayerInfo* PersonalChannelPlayer; // 0x08(0x08)
};

// ScriptStruct PlatformUMG.PUMG_ChatCommand
// Size: 0x40 (Inherited: 0x00)
struct FPUMG_ChatCommand {
	struct FString Function; // 0x00(0x10)
	struct TArray<struct FString> Commands; // 0x10(0x10)
	struct FText Desc; // 0x20(0x18)
	struct UObject* Target; // 0x38(0x08)
};

// ScriptStruct PlatformUMG.PUMG_InputFocusDetails
// Size: 0x18 (Inherited: 0x00)
struct FPUMG_InputFocusDetails {
	struct TArray<struct FPUMG_InputFocusGroup> FocusGroups; // 0x00(0x10)
	int32_t DefaultFocusGroupIndex; // 0x10(0x04)
	int32_t CurrentFocusGroupIndex; // 0x14(0x04)
};

// ScriptStruct PlatformUMG.PUMG_InputFocusGroup
// Size: 0x38 (Inherited: 0x00)
struct FPUMG_InputFocusGroup {
	char UnknownData_0[0x38]; // 0x00(0x38)
};

// ScriptStruct PlatformUMG.PUMG_LoadoutItem
// Size: 0x28 (Inherited: 0x00)
struct FPUMG_LoadoutItem {
	struct FText Name; // 0x00(0x18)
	int32_t ItemId; // 0x18(0x04)
	int32_t Quantity; // 0x1c(0x04)
	int32_t SortOrder; // 0x20(0x04)
	int32_t ItemType; // 0x24(0x04)
};

// ScriptStruct PlatformUMG.ErrorMessage
// Size: 0x28 (Inherited: 0x08)
struct FErrorMessage : public FTableRowBase {
	int32_t ErrorMsgId; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FText ErrorMsg; // 0x10(0x18)
};

// ScriptStruct PlatformUMG.PUMG_PopupConfig
// Size: 0xd8 (Inherited: 0x00)
struct FPUMG_PopupConfig {
	struct FText Header; // 0x00(0x18)
	struct FText SubHeading; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> HeadingIcon; // 0x30(0x28)
	struct FText Description; // 0x58(0x18)
	struct FText Warning; // 0x70(0x18)
	bool TextEntry; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FText TextEntryHint; // 0x90(0x18)
	bool IsImportant; // 0xa8(0x01)
	bool TreatAsBlocker; // 0xa9(0x01)
	char UnknownData_AA[0x6]; // 0xaa(0x06)
	struct TArray<struct FPUMG_PopupButtonConfig> Buttons; // 0xb0(0x10)
	struct FMulticastInlineDelegate CancelAction; // 0xc0(0x10)
	char TextAlignment; // 0xd0(0x01)
	char UnknownData_D1[0x3]; // 0xd1(0x03)
	int32_t PopupId; // 0xd4(0x04)
};

// ScriptStruct PlatformUMG.PUMG_PopupButtonConfig
// Size: 0x30 (Inherited: 0x00)
struct FPUMG_PopupButtonConfig {
	struct FText Label; // 0x00(0x18)
	struct FMulticastInlineDelegate Action; // 0x18(0x10)
	enum class EPUMG_PopupButtonType Type; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
};

// ScriptStruct PlatformUMG.PUMG_SoundThemeEventMapping
// Size: 0x10 (Inherited: 0x00)
struct FPUMG_SoundThemeEventMapping {
	struct FName SoundEventName; // 0x00(0x08)
	struct USoundCue* SoundToPlay; // 0x08(0x08)
};

// ScriptStruct PlatformUMG.ViewRoute
// Size: 0x40 (Inherited: 0x08)
struct FViewRoute : public FTableRowBase {
	struct UPUMG_Widget* ViewWidget; // 0x08(0x08)
	struct TArray<struct FName> ViewStickyWidgets; // 0x10(0x10)
	enum class EViewManagerLayer ViewLayer; // 0x20(0x01)
	bool IsDefaultRoute; // 0x21(0x01)
	bool ShouldPreload; // 0x22(0x01)
	bool AlwaysShowContextBar; // 0x23(0x01)
	enum class EViewRouteRedirectionPhase RedirectionPhase; // 0x24(0x01)
	char UnknownData_25[0x3]; // 0x25(0x03)
	int32_t RedirectionPhaseOrder; // 0x28(0x04)
	char UnknownData_2C[0x4]; // 0x2c(0x04)
	struct UPUMG_ViewRedirecter* ViewRedirector; // 0x30(0x08)
	bool OpenOverOriginal; // 0x38(0x01)
	bool BlockAcquisitions; // 0x39(0x01)
	char UnknownData_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct PlatformUMG.StickyWidgetData
// Size: 0x10 (Inherited: 0x00)
struct FStickyWidgetData {
	struct FName StickyWidgetName; // 0x00(0x08)
	struct UPUMG_Widget* Widget; // 0x08(0x08)
};

// ScriptStruct PlatformUMG.ViewRouteRedirectData
// Size: 0x18 (Inherited: 0x00)
struct FViewRouteRedirectData {
	struct FName RouteName; // 0x00(0x08)
	int32_t CheckOrder; // 0x08(0x04)
	bool OpenOverOriginal; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct UPUMG_ViewRedirecter* Redirector; // 0x10(0x08)
};

