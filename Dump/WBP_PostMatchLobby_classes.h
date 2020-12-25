// WidgetBlueprintGeneratedClass WBP_PostMatchLobby.WBP_PostMatchLobby_C
// Size: 0x660 (Inherited: 0x4e0)
struct UWBP_PostMatchLobby_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowScreen_Defeat; // 0x4e8(0x08)
	struct UWidgetAnimation* ShowScreen_Victory; // 0x4f0(0x08)
	struct UWidgetAnimation* ShowScreen; // 0x4f8(0x08)
	struct UButton* Blocker; // 0x500(0x08)
	struct UOverlay* ContentWrapper; // 0x508(0x08)
	struct UWBP_PlayerContextMenu_C* ContextMenu; // 0x510(0x08)
	struct UOverlay* GamepadBumperLeft; // 0x518(0x08)
	struct UImage* GamepadBumperLeftIcon; // 0x520(0x08)
	struct UOverlay* GamepadBumperRight; // 0x528(0x08)
	struct UImage* GamepadBumperRightIcon; // 0x530(0x08)
	struct UWidgetSwitcher* GamepadLeftBumperSwitcher; // 0x538(0x08)
	struct UTextBlock* GamepadLeftPrompt; // 0x540(0x08)
	struct UWidgetSwitcher* GamepadRightBumperSwitcher; // 0x548(0x08)
	struct UTextBlock* GamepadRightPrompt; // 0x550(0x08)
	struct UTextBlock* InstanceIdDisplay; // 0x558(0x08)
	struct UWBP_AppliedEvents_C* MatchEventBonuses; // 0x560(0x08)
	struct UWBP_PostMatchNavButton_C* NavButton_MatchSummary; // 0x568(0x08)
	struct UWBP_PostMatchNavButton_C* NavButton_Progression; // 0x570(0x08)
	struct UWBP_PostMatchNavButton_C* NavButton_Scoreboard; // 0x578(0x08)
	struct UHorizontalBox* NavigationContainer; // 0x580(0x08)
	struct UCanvasPanel* Overlay_Progression; // 0x588(0x08)
	struct UOverlay* Overlay_Scoreboard; // 0x590(0x08)
	struct UWBP_Progression_C* Progression; // 0x598(0x08)
	struct UReportMenu_C* ReportMenu; // 0x5a0(0x08)
	struct UScoreboardOverview_C* ScoreboardOverview; // 0x5a8(0x08)
	struct UTextBlock* TeamStatus; // 0x5b0(0x08)
	struct UTextBlock* TimePlayedMessage; // 0x5b8(0x08)
	struct UImage* VictoryDefeatGlow; // 0x5c0(0x08)
	struct UImage* VictoryDefeatGlow_Anim; // 0x5c8(0x08)
	struct UImage* VictoryDefeatLine; // 0x5d0(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x5d8(0x08)
	struct UWBP_MatchSummary_C* WBP_MatchSummary; // 0x5e0(0x08)
	struct TArray<struct UWidget*> TabScreens; // 0x5e8(0x10)
	int32_t CurrentTabIndex; // 0x5f8(0x04)
	float DelayTimeHide; // 0x5fc(0x04)
	struct FScoreboardStats ScoreboardStats; // 0x600(0x40)
	bool PopulatedScoreboard; // 0x640(0x01)
	char UnknownData_641[0x3]; // 0x641(0x03)
	int32_t PlayerId; // 0x644(0x04)
	bool FirstPostMatch; // 0x648(0x01)
	char UnknownData_649[0x3]; // 0x649(0x03)
	struct FName RouteName; // 0x64c(0x08)
	char UnknownData_654[0x4]; // 0x654(0x04)
	struct UAkAudioEvent* ShowResultsScreenSFX; // 0x658(0x08)

	void ShowAwardsEarned(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowAwardsEarned
	void GetPreviousMatchPlayerIds(struct TArray<int64_t> PlayerIds); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetPreviousMatchPlayerIds
	void TryUpdatePlayAgainPrompt(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryUpdatePlayAgainPrompt
	void SetCurrentPrompts(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetCurrentPrompts
	void TryMakeTabArray(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.TryMakeTabArray
	void SetupReportMenuNav(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupReportMenuNav
	void GetReportMenuFocusGroup(int32_t FocusGroup); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetReportMenuFocusGroup
	void ShowContextMenuForPlayer(struct UWidget* Widget, int64_t PlayerId); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ShowContextMenuForPlayer
	void GetContextMenuFocusGroup(int32_t GroupIndex); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetContextMenuFocusGroup
	void HandleScoreboardChange(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleScoreboardChange
	void GetScoreboardFocusGroup(int32_t GroupIndex); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetScoreboardFocusGroup
	void SetupContextMenuNav(struct TArray<struct UWidget*> NavWidgets, struct UWidget* DefaultFocus); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupContextMenuNav
	void SetupFocusGroups(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetupFocusGroups
	void SetGamepadIcon(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadIcon
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnKeyUp
	void SetGamepadPrompt(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetGamepadPrompt
	void GetNavButtons(struct TArray<struct UWBP_PostMatchNavButton_C*> NavButtons); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.GetNavButtons
	void FormatPlayedTime(float timePlayed, struct FText Result); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.FormatPlayedTime
	void PopulateTimePlayed(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateTimePlayed
	bool NavigateBack(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.NavigateBack
	void SetVictoryDefeat(struct FScoreboardStats ScoreboardStats); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.SetVictoryDefeat
	void DetermineMatchResult(struct FScoreboardStats ScoreboardStats, bool DidWin); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.DetermineMatchResult
	void PopulateScoreboard(struct FScoreboardStats ScoreboardStats); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulateScoreboard
	void HandleTabClicked(struct UWBP_PostMatchNavButton_C* Widget); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleTabClicked
	void CycleTab(bool Reverse); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.CycleTab
	void Construct(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnShown
	void PopulatePostMatch(struct FPlayerRewardsSummary PlayerSummary, struct FScoreboardStats ScoreboardStats); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PopulatePostMatch
	void HandleOnShowAnimationFinished(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnShowAnimationFinished
	void HandleOnPlayerDataChanged(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleOnPlayerDataChanged
	void HandleInputStateChanged(char InputState); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandleInputStateChanged
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.StartHideSequence
	void OnHide(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnHide
	void OnBackButtonClicked(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.OnBackButtonClicked
	void PreConstruct(bool IsDesignTime); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.PreConstruct
	void Handle Play Again(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Play Again
	void JoinQueue(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.JoinQueue
	void Handle Party Data Updated(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Party Data Updated
	void Handle Queue Status Change(enum class EPUMG_MatchStatus MatchStatus); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.Handle Queue Status Change
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature(struct TArray<struct UWidget*> NavWidgets, struct UWidget* Default Widget); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature(struct UWidget* FocusWidget); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature
	void BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature
	void HandlePlayerClicked(struct UWidget* Widget, int64_t PlayerId); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.HandlePlayerClicked
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature(struct UKSPlayerInfo* playerinfo); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature
	void BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature(int64_t PlayerId, bool Success); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_PostMatchLobby(int32_t EntryPoint); // Function WBP_PostMatchLobby.WBP_PostMatchLobby_C.ExecuteUbergraph_WBP_PostMatchLobby
};

