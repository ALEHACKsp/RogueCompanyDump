// WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C
// Size: 0x5f9 (Inherited: 0x4e0)
struct UWBP_PlayerContextMenu_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UOverlay* AliasContainer; // 0x4f0(0x08)
	struct UImage* Image_160; // 0x4f8(0x08)
	struct UImage* OptionsBgA; // 0x500(0x08)
	struct UImage* OptionsBgB; // 0x508(0x08)
	struct UVerticalBox* OptionsContainerA; // 0x510(0x08)
	struct UVerticalBox* OptionsContainerB; // 0x518(0x08)
	struct USizeBox* OuterMenuContainer; // 0x520(0x08)
	struct UWBP_player_card_module_C* PlayerCard; // 0x528(0x08)
	struct UCanvasPanel* ScreenCanvas; // 0x530(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID; // 0x538(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID_2; // 0x540(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID_3; // 0x548(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID_4; // 0x550(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID_5; // 0x558(0x08)
	struct UWBP_Social_Platform_ID_C* WBP_Social_Platform_ID_6; // 0x560(0x08)
	struct UWBP_VoiceActivityContainer_C* WBP_VoiceActivityContainer; // 0x568(0x08)
	struct UKSPlayerInfo* Current Player Info; // 0x570(0x08)
	bool IsQueued; // 0x578(0x01)
	char UnknownData_579[0x7]; // 0x579(0x07)
	struct FMulticastInlineDelegate OnReadyForNavigation; // 0x580(0x10)
	struct FMulticastInlineDelegate OnMenuHidden; // 0x590(0x10)
	struct FMulticastInlineDelegate OnMenuStart; // 0x5a0(0x10)
	struct TArray<struct FKey> KeysToAllow; // 0x5b0(0x10)
	struct TScriptInterface<None> Last Interacted Target; // 0x5c0(0x10)
	bool ShowReportPlayer; // 0x5d0(0x01)
	char UnknownData_5D1[0x7]; // 0x5d1(0x07)
	struct FMulticastInlineDelegate OnReportPlayer; // 0x5d8(0x10)
	struct TArray<int64_t> ReportedPlayers; // 0x5e8(0x10)
	char Context; // 0x5f8(0x01)

	void SetCustomMatchOptions(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetCustomMatchOptions
	void GetQueueDataFactory(struct UKSQueueDataFactory* DataFactory, bool WasFound); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetQueueDataFactory
	void UpdateOptionsList(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdateOptionsList
	void SetMenuContext(char Context); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuContext
	void IsShowingPlayer(struct UKSPlayerInfo* playerinfo, bool Showing); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
	void IsContextMenuOpen(bool IsOpen); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
	void SetPlayerReported(int64_t PlayerId); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetPlayerReported
	void HasReportedPlayer(struct UKSPlayerInfo* Player, bool HasReported); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HasReportedPlayer
	void ShowForPlayerCard(struct UWBP_player_card_module_C* PlayerCard, char Side); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
	void MoveToWidgetSide(struct UWidget* Widget, char Side, struct FMargin Padding); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
	void UpdatePlayerAliases(struct TArray<struct FPlayerAlias> Aliases); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
	void MoveToWidgetAndShow(struct UWidget* Widget, struct UKSPlayerInfo* playerinfo); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetAndShow
	void MoveToWidget(struct UWidget* Widget, char Side); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
	void IsCurrentAccountId(struct FString AccountId, bool IsAccountId); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
	void GetOptionsWidgetByEnum(char InOption, struct UWBP_PlayerContextMenuOption_C* OutWidget); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionsWidgetByEnum
	void RefreshOptionsPadding(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
	void HideContextMenu(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
	void Move To Player Card And Show(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
	void Get Option Widgets(struct TArray<struct UWBP_PlayerContextMenuOption_C*> Option Widgets); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Get Option Widgets
	void SetMenuPosition(struct FBox2D AbsoluteRect, char Side); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuPosition
	void Is Any Option Visible(bool Return Value); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
	void Set All Options Visibility(bool IsLocalInParty, bool IsLocalPartyFull, bool HasPlayerInvitedUsToParty, bool IsLocalPartyLeader, bool IsPlayerPendingPartyInvite, bool IsPlayerInLocalParty, bool IsPlayerOnline, bool IsLocalPlayer, bool IsCrossplayEnabled, bool IsFriend, bool IsRoCoFriend, bool IsRequestingFriend, bool IsPendingFriend, bool LocalPlayerCanInvite, bool IsMuted); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Set All Options Visibility
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
	void GetAllActiveButtons(struct TArray<struct UWidget*> Buttons); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
	void GetFirstActiveButton(struct UWidget* FocusWidget); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
	void HandleQueueStatusChanged(enum class EPUMG_MatchStatus QueueStatus); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleQueueStatusChanged
	void InitializeQueueDF(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.InitializeQueueDF
	void SetInactiveOption(char Context, bool IsActive); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetInactiveOption
	void HandleOptionSelected(char Selected Option); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
	void ShowForPlayer(struct UKSPlayerInfo* Friend Info, struct TScriptInterface<None> TargetWidget, char Side); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
	void SetEnabledOption(char ContextOption, bool IsEnabled); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetEnabledOption
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
	void Handle Input State Changed(char InputState); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
	void Handle View State Changed(struct FName CurrentRoute, struct FName PreviousRoute, enum class EViewManagerLayer Layer); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
	void OnInitialized(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(struct FString AccountId, bool bIsTalking, bool bIsMuted); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(enum class EKSVoiceActivityAudioState AudioState); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
	void ExecuteUbergraph_WBP_PlayerContextMenu(int32_t EntryPoint); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
	void OnReportPlayer__DelegateSignature(struct UKSPlayerInfo* playerinfo); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer__DelegateSignature
	void OnMenuStart__DelegateSignature(struct UWidget* FocusWidget); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
	void OnMenuHidden__DelegateSignature(); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
	void OnReadyForNavigation__DelegateSignature(struct TArray<struct UWidget*> NavWidgets, struct UWidget* Default Widget); // Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
};

