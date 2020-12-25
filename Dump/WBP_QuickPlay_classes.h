// WidgetBlueprintGeneratedClass WBP_QuickPlay.WBP_QuickPlay_C
// Size: 0x931 (Inherited: 0x5d0)
struct UWBP_QuickPlay_C : public UKSQuickPlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UWidgetAnimation* ShowDetail; // 0x5d8(0x08)
	struct UWBP_RankedIcon_C* Bronze; // 0x5e0(0x08)
	struct UTextBlock* ButtonText; // 0x5e8(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x5f0(0x08)
	struct UWBP_RankedIcon_C* Diamond; // 0x5f8(0x08)
	struct UWBP_panel_bevel_C* Divider; // 0x600(0x08)
	struct UCanvasPanel* EmptyContent; // 0x608(0x08)
	struct UNewBackButton_C* EmptyContentBackButton; // 0x610(0x08)
	struct UScaleBox* ErrorContainer; // 0x618(0x08)
	struct UScaleBox* ErrorContainer_2; // 0x620(0x08)
	struct UTextBlock* ErrorLabel; // 0x628(0x08)
	struct UTextBlock* ErrorLabel_2; // 0x630(0x08)
	struct UWBP_RankedIcon_C* Gold; // 0x638(0x08)
	struct UImage* Image; // 0x640(0x08)
	struct UImage* Image_61; // 0x648(0x08)
	struct UImage* Image_110; // 0x650(0x08)
	struct UImage* Image_222; // 0x658(0x08)
	struct UImage* Image_329; // 0x660(0x08)
	struct UImage* Image_429; // 0x668(0x08)
	struct UImage* Image_712; // 0x670(0x08)
	struct UTextBlock* LevelRogue; // 0x678(0x08)
	struct UTextBlock* LevelsBronze; // 0x680(0x08)
	struct UTextBlock* LevelsDiamond; // 0x688(0x08)
	struct UTextBlock* LevelsGold; // 0x690(0x08)
	struct UTextBlock* LevelsMaster; // 0x698(0x08)
	struct UTextBlock* LevelsPlatinum; // 0x6a0(0x08)
	struct UTextBlock* LevelsSilver; // 0x6a8(0x08)
	struct UWBP_QuickPlay_QueueTypeHeader_C* MapRotationHeader; // 0x6b0(0x08)
	struct UScrollBox* MapScrollBox; // 0x6b8(0x08)
	struct UWBP_ControllerPrompt_C* MapScrollPrompt; // 0x6c0(0x08)
	struct USizeBox* MapScrollPromptContainer; // 0x6c8(0x08)
	struct UUniformGridPanel* MapThumbnailGrid; // 0x6d0(0x08)
	struct UWBP_RankedIcon_C* Master; // 0x6d8(0x08)
	struct UWBP_Graphic_Button_C* MobileSelectQueueBtn; // 0x6e0(0x08)
	struct UTextBlock* ObjectiveTxt; // 0x6e8(0x08)
	struct UTextBlock* PartyMaxLabel; // 0x6f0(0x08)
	struct UTextBlock* PartyMinLabel; // 0x6f8(0x08)
	struct UWBP_RankedIcon_C* Platinum; // 0x700(0x08)
	struct UTextBlock* PlayerCount; // 0x708(0x08)
	struct UWidgetSwitcher* QueueDataSwitcher; // 0x710(0x08)
	struct UTextBlock* QueueDescription; // 0x718(0x08)
	struct USizeBox* QueueDescWrapper; // 0x720(0x08)
	struct UWidgetSwitcher* QueueDetailsDisplay; // 0x728(0x08)
	struct UOverlay* QueueDetailWrapper; // 0x730(0x08)
	struct UTextBlock* QueueName; // 0x738(0x08)
	struct UScrollBox* QueueScrollBox; // 0x740(0x08)
	struct UVerticalBox* QueueSectionContainer; // 0x748(0x08)
	struct UHorizontalBox* QueueSelectContainer; // 0x750(0x08)
	struct UOverlay* QueueSelectPanel; // 0x758(0x08)
	struct UWidgetSwitcher* RegionSwitcher; // 0x760(0x08)
	struct UVerticalBox* RewardSection; // 0x768(0x08)
	struct UWBP_RankedIcon_C* Rogue; // 0x770(0x08)
	struct UWBP_RankedIcon_C* Silver; // 0x778(0x08)
	struct UWBP_Header2_C* WBP_Header2; // 0x780(0x08)
	struct UWBP_Header2_C* WBP_Header2_2; // 0x788(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* WBP_KSCosmeticItemDisplay; // 0x790(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* WBP_KSCosmeticItemDisplay_2; // 0x798(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel; // 0x7a0(0x08)
	struct UWBP_QueueSelection_RegionSelectButton_C* WBP_QueueSelection_RegionSelectButton; // 0x7a8(0x08)
	struct UWBP_QuickPlay_MapThumbnail_C* WBP_QuickPlay_MapThumbnail; // 0x7b0(0x08)
	struct UWBP_QuickPlay_QueueTypeSection_C* WBP_QuickPlay_QueueTypeSection; // 0x7b8(0x08)
	struct UWBP_QuickPlay_QueueTypeSection_C* WBP_QuickPlay_QueueTypeSection_129; // 0x7c0(0x08)
	struct UWBP_RegionSelect_C* WBP_RegionSelect; // 0x7c8(0x08)
	struct UWBP_ThrobberHorizontal_C* WBP_ThrobberHorizontal; // 0x7d0(0x08)
	struct TArray<struct UKSWidget*> NavigationButtons; // 0x7d8(0x10)
	struct TArray<struct UWBP_QuickPlay_QueueButton_C*> AllQueueButtons; // 0x7e8(0x10)
	int32_t MaxColumn; // 0x7f8(0x04)
	char UnknownData_7FC[0x4]; // 0x7fc(0x04)
	struct UKSQueueDataFactory* QueueDataFactory; // 0x800(0x08)
	struct FClientQueueInfo SelectedQueueInfo; // 0x808(0xb8)
	struct UWidget* CurrentScreen; // 0x8c0(0x08)
	struct TMap<struct UWidget*, int32_t> ScreenToWidget; // 0x8c8(0x50)
	float MapScrollSpeed; // 0x918(0x04)
	char UnknownData_91C[0x4]; // 0x91c(0x04)
	struct UAkAudioEvent* ShowQuickPlaySFX; // 0x920(0x08)
	struct UKSWidget* CustomMatchButton; // 0x928(0x08)
	bool FoundQueueToFocus; // 0x930(0x01)

	void SetRankedPageDisplay(); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetRankedPageDisplay
	void SetMapList(struct TArray<struct FMapDetail> MapList); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapList
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyDown
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnKeyUp
	void UpdateWarning(struct FClientQueueInfo ClientQueueInfo); // Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateWarning
	void SetMapRotation(struct TArray<struct FUIMapInfo> MapRotations); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetMapRotation
	void SetTouchActiveState(struct FClientQueueInfo QueueInfo); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetTouchActiveState
	void SetQueueButtonNavigation(); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetQueueButtonNavigation
	void GoToQueueScreen(); // Function WBP_QuickPlay.WBP_QuickPlay_C.GoToQueueScreen
	void ResetDetails(); // Function WBP_QuickPlay.WBP_QuickPlay_C.ResetDetails
	void UpdateDetails(struct FClientQueueInfo QueueButton); // Function WBP_QuickPlay.WBP_QuickPlay_C.UpdateDetails
	void ReconcileGameModeButtonEnabling(); // Function WBP_QuickPlay.WBP_QuickPlay_C.ReconcileGameModeButtonEnabling
	bool NavigateBack(); // Function WBP_QuickPlay.WBP_QuickPlay_C.NavigateBack
	void HandleInputModeChanged(char InputMode); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleInputModeChanged
	void SetDefaultFocusForQueues(); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetDefaultFocusForQueues
	void ResetQueueSelection(); // Function WBP_QuickPlay.WBP_QuickPlay_C.ResetQueueSelection
	void SetupQueueButtons(); // Function WBP_QuickPlay.WBP_QuickPlay_C.SetupQueueButtons
	void StartHideAnim(); // Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideAnim
	void InitializeTickAnimations(); // Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeTickAnimations
	void InitHideAnimation(); // Function WBP_QuickPlay.WBP_QuickPlay_C.InitHideAnimation
	void ShowQueueTitleFinished(); // Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleFinished
	void ShowQueueTitleAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueTitleAnim
	void HideQueueTitleFinished(); // Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleFinished
	void HideQueueTitleAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueTitleAnim
	void ShowQueueSelectionFinished(); // Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionFinished
	void ShowQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_QuickPlay.WBP_QuickPlay_C.ShowQueueSelectionAnim
	void HideQueueSelectionFinished(); // Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionFinished
	void HideQueueSelectionAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_QuickPlay.WBP_QuickPlay_C.HideQueueSelectionAnim
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidget
	void HandleGameModeSelected(int32_t QueueId); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeSelected
	void HandleGameModeHovered(struct UWidget* Widget); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeHovered
	void HandleGameModeUnhovered(struct UWidget* Widget); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleGameModeUnhovered
	void InitializeWidgetNavigation(); // Function WBP_QuickPlay.WBP_QuickPlay_C.InitializeWidgetNavigation
	void GoToLastScreen(); // Function WBP_QuickPlay.WBP_QuickPlay_C.GoToLastScreen
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_QuickPlay.WBP_QuickPlay_C.StartHideSequence
	void OnControlQueuePermissionChanged(bool CanControl); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnControlQueuePermissionChanged
	void OnQueuePermissionChanged(bool CanQueue); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnQueuePermissionChanged
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature(); // Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
	void OnShown(); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnShown
	void OnHide(); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnHide
	void StartShowAnim(); // Function WBP_QuickPlay.WBP_QuickPlay_C.StartShowAnim
	void OnBackButtonClicked(); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnBackButtonClicked
	void HandleRegionSelectRequested(); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleRegionSelectRequested
	void OnRegionSelected(); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelected
	void OnRegionSelectEntriesCreated(); // Function WBP_QuickPlay.WBP_QuickPlay_C.OnRegionSelectEntriesCreated
	void SwitchFocusGroupToScreen(struct UWidget* ScreenToSwitch); // Function WBP_QuickPlay.WBP_QuickPlay_C.SwitchFocusGroupToScreen
	void HandleOnQueueSectionPopulated(struct TArray<struct UWBP_QuickPlay_QueueButton_C*> QueueButtons); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnQueueSectionPopulated
	void BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature(); // Function WBP_QuickPlay.WBP_QuickPlay_C.BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WBP_QuickPlay.WBP_QuickPlay_C.PreConstruct
	void Construct(); // Function WBP_QuickPlay.WBP_QuickPlay_C.Construct
	void HandleQueueErrorStateChange(); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleQueueErrorStateChange
	void CreateCustomMatch(); // Function WBP_QuickPlay.WBP_QuickPlay_C.CreateCustomMatch
	void HandleOnCustomSectionPopulated(struct TArray<struct UKSWidget*> Buttons); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleOnCustomSectionPopulated
	void HandleMapScrollChange(); // Function WBP_QuickPlay.WBP_QuickPlay_C.HandleMapScrollChange
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_QuickPlay.WBP_QuickPlay_C.Tick
	void ExecuteUbergraph_WBP_QuickPlay(int32_t EntryPoint); // Function WBP_QuickPlay.WBP_QuickPlay_C.ExecuteUbergraph_WBP_QuickPlay
};

