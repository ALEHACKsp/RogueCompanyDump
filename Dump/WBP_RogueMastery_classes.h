// WidgetBlueprintGeneratedClass WBP_RogueMastery.WBP_RogueMastery_C
// Size: 0x588 (Inherited: 0x4e0)
struct UWBP_RogueMastery_C : public UKSRogueMasteryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* RefreshRewardList; // 0x4e8(0x08)
	struct UWidgetAnimation* RefreshPreview; // 0x4f0(0x08)
	struct UTextBlock* FinalPrestigeText; // 0x4f8(0x08)
	struct UImage* Image_314; // 0x500(0x08)
	struct UWBP_ItemPreviewStack_C* ItemPreviewStack; // 0x508(0x08)
	struct UImage* LockTexture; // 0x510(0x08)
	struct USizeBox* LockWrapper; // 0x518(0x08)
	struct UWBP_RogueMasteryPortrait_C* MasteryPortraitPreview; // 0x520(0x08)
	struct UTextBlock* MasteryRewardsHeader; // 0x528(0x08)
	struct UWidgetSwitcher* RewardDisplaySwitcher; // 0x530(0x08)
	struct UVerticalBox* RewardItemList; // 0x538(0x08)
	struct UWBP_AsyncIcon_C* RogueIcon; // 0x540(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x548(0x08)
	struct UWBP_RogueMasteryTrack_C* WBP_RogueMasteryTrack; // 0x550(0x08)
	struct TArray<struct UWBP_ListButton_Cosmetic_C*> RewardItems; // 0x558(0x10)
	int32_t CurrentMasteryLevel; // 0x568(0x04)
	int32_t CurrentMasteryXP; // 0x56c(0x04)
	int32_t MaxRegularLevel; // 0x570(0x04)
	int32_t SelectedRewardIndex; // 0x574(0x04)
	struct FMasteryRewardData PreviewedReward; // 0x578(0x10)

	void Display Reward(struct FMasteryRewardData RewardItem, struct UWidget* SelectedWidget); // Function WBP_RogueMastery.WBP_RogueMastery_C.Display Reward
	void SetRewardDisplayLevel(int32_t Level); // Function WBP_RogueMastery.WBP_RogueMastery_C.SetRewardDisplayLevel
	void DisplayPrestigeLevels(); // Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayPrestigeLevels
	void DisplayMasteryLevel(struct FActivityTier ActivityTier); // Function WBP_RogueMastery.WBP_RogueMastery_C.DisplayMasteryLevel
	void SetContextBar(); // Function WBP_RogueMastery.WBP_RogueMastery_C.SetContextBar
	bool NavigateBack(); // Function WBP_RogueMastery.WBP_RogueMastery_C.NavigateBack
	void OnBack(); // Function WBP_RogueMastery.WBP_RogueMastery_C.OnBack
	void PreConstruct(bool IsDesignTime); // Function WBP_RogueMastery.WBP_RogueMastery_C.PreConstruct
	void Construct(); // Function WBP_RogueMastery.WBP_RogueMastery_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidget
	void OnShown(); // Function WBP_RogueMastery.WBP_RogueMastery_C.OnShown
	void InitializeWidgetNavigation(); // Function WBP_RogueMastery.WBP_RogueMastery_C.InitializeWidgetNavigation
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateLeftFailure
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function WBP_RogueMastery.WBP_RogueMastery_C.FocusGroupNavigateRightFailure
	void ExecuteUbergraph_WBP_RogueMastery(int32_t EntryPoint); // Function WBP_RogueMastery.WBP_RogueMastery_C.ExecuteUbergraph_WBP_RogueMastery
};

