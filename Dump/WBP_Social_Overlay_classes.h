// WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C
// Size: 0x688 (Inherited: 0x580)
struct UWBP_Social_Overlay_C : public UKSSocialOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UWidgetAnimation* OpenPanel; // 0x588(0x08)
	struct UImage* background; // 0x590(0x08)
	struct UButton* Blocker; // 0x598(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x5a0(0x08)
	struct UButton* ContextBlocker; // 0x5a8(0x08)
	struct UWBP_PlayerContextMenu_C* ContextMenu; // 0x5b0(0x08)
	struct UImage* dropshadowgradient; // 0x5b8(0x08)
	struct UWBP_Social_Friends_Tab_C* FriendsPanel; // 0x5c0(0x08)
	struct UWBP_subscreen_nav_tab_C* NavButton0; // 0x5c8(0x08)
	struct UWBP_subscreen_nav_tab_C* NavButton1; // 0x5d0(0x08)
	struct UWBP_subscreen_nav_tab_C* NavButton2; // 0x5d8(0x08)
	struct UWBP_ControllerPrompt_C* PromptTabLeft; // 0x5e0(0x08)
	struct USizeBox* PromptTabLeftContainer; // 0x5e8(0x08)
	struct UWBP_ControllerPrompt_C* PromptTabRight; // 0x5f0(0x08)
	struct USizeBox* PromptTabRightContainer; // 0x5f8(0x08)
	struct UWBP_Social_Search_Tab_C* SearchPanel; // 0x600(0x08)
	struct UWBP_Social_Header_Cosmetic_C* WBP_Social_Header_Cosmetic; // 0x608(0x08)
	struct TMap<struct UWBP_subscreen_nav_tab_C*, struct UKSWidget*> NavButtons; // 0x610(0x50)
	struct UWBP_subscreen_nav_tab_C* ActiveTabButton; // 0x660(0x08)
	int32_t ContextMenuFocusGroup; // 0x668(0x04)
	int32_t StatusContextMenuFocusGroup; // 0x66c(0x04)
	bool IsOpen; // 0x670(0x01)
	char UnknownData_671[0x7]; // 0x671(0x07)
	struct UAkAudioEvent* ShowSocialOverlaySFX; // 0x678(0x08)
	struct UAkAudioEvent* GamePadTabSocialOverlaySFX; // 0x680(0x08)

	void OnFriendsScrolled(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnFriendsScrolled
	void ToggleContextMenuForPlayerCard(struct UKSWidget* KSWidget); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.ToggleContextMenuForPlayerCard
	void HandleStatusMenuHidden(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuHidden
	void HandleStatusMenuShown(struct UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusMenuShown
	void HandleStatusNavigationReady(struct TArray<struct UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandleStatusNavigationReady
	void SetupHeader(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupHeader
	void SetTabIndex(int32_t Index); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetTabIndex
	void OnTabChange(struct UWBP_subscreen_nav_tab_C* ActiveTabButton); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabChange
	void SetActiveTabByWidget(struct UWidget* Widget); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetActiveTabByWidget
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnMouseButtonUp
	void MoveTabBy(int32_t Value); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.MoveTabBy
	void SetupNavTabs(struct APUMG_HUD* HUD); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.SetupNavTabs
	bool NavigateBack(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.NavigateBack
	void ClosePanel(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.ClosePanel
	void OnShown(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnShown
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.StartHideSequence
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidget
	void OnTabClicked(struct UWBP_subscreen_nav_tab_C* ButtonClicked); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabClicked
	void UninitializeWidget(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.UninitializeWidget
	void OnPlayerCardClick(struct UKSWidget* PlayerCard); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnPlayerCardClick
	void OnInputStateChange(char InputState); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnInputStateChange
	void InitializeWidgetNavigation(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.InitializeWidgetNavigation
	void OnHide(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnHide
	void OnTabLeft(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabLeft
	void OnTabRight(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnTabRight
	void OnToggleSocial(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleSocial
	void OnViewStateChange(struct FName CurrentRoute, struct FName PreviousRoute, enum class EViewManagerLayer Layer); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnViewStateChange
	void OnToggleStatusMenu(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.OnToggleStatusMenu
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature(struct TArray<struct UWidget*> NavWidgets, struct UWidget* Default Widget); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature(struct UWidget* FocusWidget); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature
	void HandlePlayerInvitesChanged(struct UKSDataSocialCategory* Category, struct TArray<struct UKSDataSocialPlayer*> Players); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.HandlePlayerInvitesChanged
	void BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_Social_Overlay(int32_t EntryPoint); // Function WBP_Social_Overlay.WBP_Social_Overlay_C.ExecuteUbergraph_WBP_Social_Overlay
};

