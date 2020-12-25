// WidgetBlueprintGeneratedClass WBP_HomeScreen_v2.WBP_HomeScreen_v2_C
// Size: 0x5c8 (Inherited: 0x4e0)
struct UWBP_HomeScreen_v2_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x4e8(0x08)
	struct UWBP_Challenge_Panel_C* ChallengePanel; // 0x4f0(0x08)
	struct UWBP_Daily_Challenge_Timer_C* ChallengeTimerDisplay; // 0x4f8(0x08)
	struct UCanvasPanel* Content; // 0x500(0x08)
	struct UTextBlock* CrossplayLabel; // 0x508(0x08)
	struct UHorizontalBox* CrossplaySettingWrapper; // 0x510(0x08)
	struct UTextBlock* CrossplayValue; // 0x518(0x08)
	struct UImage* Image_50; // 0x520(0x08)
	struct UImage* Image_146; // 0x528(0x08)
	struct UWBP_AsyncIcon_C* InputTypeIcon; // 0x530(0x08)
	struct UTextBlock* InputTypeLabel; // 0x538(0x08)
	struct UHorizontalBox* InputTypeSettingWrapper; // 0x540(0x08)
	struct UTextBlock* InputTypeValue; // 0x548(0x08)
	struct UWBP_NewsRotatorWidget_C* NewsRotator; // 0x550(0x08)
	struct UCanvasPanel* NewsSection; // 0x558(0x08)
	struct UTextBlock* RegionLabel; // 0x560(0x08)
	struct UTextBlock* RegionValue; // 0x568(0x08)
	struct UWBP_GameNotification_C* WBP_GameNotification; // 0x570(0x08)
	struct UWBP_Header3_C* WBP_Header3; // 0x578(0x08)
	struct UWBP_HomeQuickPlay_C* WBP_HomeQuickPlay; // 0x580(0x08)
	struct UWBP_LobbyEventDisplay_C* WBP_LobbyEventDisplay; // 0x588(0x08)
	struct UWBP_PartyModule_C* WBP_PartyModule; // 0x590(0x08)
	struct UWBP_PlayerContextMenu_C* WBP_PlayerContextMenu; // 0x598(0x08)
	struct UImage* XboxIcon; // 0x5a0(0x08)
	bool ShowEMOL; // 0x5a8(0x01)
	char UnknownData_5A9[0x7]; // 0x5a9(0x07)
	struct UObject* ViewManagerWidget; // 0x5b0(0x08)
	struct TArray<struct FName> LoadoutRoutes; // 0x5b8(0x10)

	void CanFocus(bool bAllowFous); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
	void UpdateContextPrompts(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
	void StopConflictingAnimation(struct FName AnimName); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
	bool NavigateBack(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
	void HandleQueueStatusChange(enum class EPUMG_MatchStatus NewStatus); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
	void HandleLobbyCameraSet(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyCameraSet
	void HandlePreMatchAnimStarted(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandlePreMatchAnimStarted
	void UnbindLobbyAnimationHandling(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
	void BindLobbyAnimationHandling(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
	void InitializeContentWidgets(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
	void StartShowAnim(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowAnim
	void InitializeTickAnimations(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeTickAnimations
	void ShowQuickPlayFinished(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayFinished
	void ShowQuickPlayAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowQuickPlayAnim
	void InitHideAnimation(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitHideAnimation
	void HideQuickPlayFinished(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayFinished
	void HideQuickPlayAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HideQuickPlayAnim
	void StartHideAnim(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideAnim
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
	void InitializeWidgetButtonListeners(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetButtonListeners
	void HandleJoinQueue(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleJoinQueue
	void HandleChangeQueue(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleChangeQueue
	void OnShown(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
	void UninitializeWidget(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StartHideSequence
	void InitializeWidgetNavigation(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
	void Construct(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Construct
	void OnCrossplayChanged(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnCrossplayChanged
	void UpdateCrossplay(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
	void LoginState(enum class EPUMG_LoginState LoginState); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
	void Update Region(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
	void Handle Party Player Card Selected(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
	void Handle Context Menu Navigation(struct TArray<struct UWidget*> NavWidgets, struct UWidget* Default Widget); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
	void Handle Context Menu Hidden(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
	void HandleContextMenuShown(struct UWidget* FocusWidget); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
	void NewsPanelVisibilityChanged(bool IsVisible); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
	void OnEOMButton(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnEOMButton
	void HandleViewSocial(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
	void Handle Player Card Back Button(); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
	void PreConstruct(bool IsDesignTime); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.PreConstruct
	void OnSetQueueInputState(char InputState); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
	void OnpartyLeaveVisibilityChange(bool Visible); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnpartyLeaveVisibilityChange
	void ExecuteUbergraph_WBP_HomeScreen_v2(int32_t EntryPoint); // Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
};

