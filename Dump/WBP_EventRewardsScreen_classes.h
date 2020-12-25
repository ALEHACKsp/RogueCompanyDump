// WidgetBlueprintGeneratedClass WBP_EventRewardsScreen.WBP_EventRewardsScreen_C
// Size: 0x568 (Inherited: 0x4e0)
struct UWBP_EventRewardsScreen_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Image_406; // 0x4e8(0x08)
	struct UImage* Image_434; // 0x4f0(0x08)
	struct UImage* Image_732; // 0x4f8(0x08)
	struct UTextBlock* ItemDesc; // 0x500(0x08)
	struct UTextBlock* ItemDescription; // 0x508(0x08)
	struct UKSScrollBox* ItemDescriptionScrollBox; // 0x510(0x08)
	struct UWBP_ItemInfoContainer_C* ItemInfoContainer; // 0x518(0x08)
	struct UWBP_ItemPreviewStack_C* ItemPreviewStack; // 0x520(0x08)
	struct UWBP_EventProgress_C* WBP_EventProgress; // 0x528(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x530(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x538(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault_556; // 0x540(0x08)
	struct UWBP_RewardsTrack_C* WBP_RewardsTrack; // 0x548(0x08)
	struct UWBP_Subtitle_C* WBP_Subtitle; // 0x550(0x08)
	struct UKSActivityInstance* ActivityInstance; // 0x558(0x08)
	struct UWBP_RewardListEntry_C* SelectedEntry; // 0x560(0x08)

	void HandleOnPageNavigated(int32_t Direction); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.HandleOnPageNavigated
	void Select Initial Item(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.Select Initial Item
	void OnRewardButtonClicked(struct UWBP_RewardListEntry_C* Widget, struct FCosmeticSlotDetails RewardSlotDetails, struct UPUMG_StoreItem* StoreItem); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnRewardButtonClicked
	bool NavigateBack(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.NavigateBack
	void PerformInitialSetup(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.PerformInitialSetup
	void OnShown(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnShown
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidget
	void OnBackPrompt(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetNavigation
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateRightFailure
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.FocusGroupNavigateLeftFailure
	void InitializeWidgetButtonListeners(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.InitializeWidgetButtonListeners
	void OnTriggerPageLeft(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageLeft
	void OnTriggerPageRight(); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.OnTriggerPageRight
	void ExecuteUbergraph_WBP_EventRewardsScreen(int32_t EntryPoint); // Function WBP_EventRewardsScreen.WBP_EventRewardsScreen_C.ExecuteUbergraph_WBP_EventRewardsScreen
};

