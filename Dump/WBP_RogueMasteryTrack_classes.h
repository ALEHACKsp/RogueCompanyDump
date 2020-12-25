// WidgetBlueprintGeneratedClass WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C
// Size: 0x5a0 (Inherited: 0x4e0)
struct UWBP_RogueMasteryTrack_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* CurrentXp; // 0x4e8(0x08)
	struct UWBP_KeyCallout_C* GamepadPageLeft; // 0x4f0(0x08)
	struct UWBP_KeyCallout_C* GamepadPageRight; // 0x4f8(0x08)
	struct UTextBlock* MasteryLevel; // 0x500(0x08)
	struct UHorizontalBox* Pagination; // 0x508(0x08)
	struct UTextBlock* PaginationLabel; // 0x510(0x08)
	struct UKSScrollBox* RewardsSectionContainer; // 0x518(0x08)
	struct UWBP_ButtonArrow_C* ScrollLeftButton; // 0x520(0x08)
	struct UHorizontalBox* ScrollLeftIndicator; // 0x528(0x08)
	struct UWBP_ButtonArrow_C* ScrollRightButton; // 0x530(0x08)
	struct UHorizontalBox* ScrollRightIndicator; // 0x538(0x08)
	struct UWBP_RogueMasteryTrackSection_C* Section0; // 0x540(0x08)
	struct UWBP_RogueMasteryTrackSection_C* Section1; // 0x548(0x08)
	struct UWBP_RogueMasteryTrackSection_FinalPrestige_C* Section2; // 0x550(0x08)
	struct UTextBlock* TotalXp; // 0x558(0x08)
	struct UWBP_RogueMasteryPortrait_C* WBP_MercMasteryPortrait; // 0x560(0x08)
	struct UHorizontalBox* XPWrapper; // 0x568(0x08)
	int32_t CurrentIndex; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct FMulticastInlineDelegate OnMasteryLevelSelectedEvent; // 0x578(0x10)
	struct FMulticastInlineDelegate OnPrestiegeSelected; // 0x588(0x10)
	int32_t LAST_SECTION_INDEX; // 0x598(0x04)
	int32_t SelectedTierNumber; // 0x59c(0x04)

	void UpdateSelectedTier(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSelectedTier
	void ViewPreviousMasteryLevel(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewPreviousMasteryLevel
	void ViewNextMasteryLevel(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ViewNextMasteryLevel
	void SetActiveSection(int32_t SectionIndex); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetActiveSection
	void UpdateSectionViewed(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.UpdateSectionViewed
	void OnInputStateChanged(char InputState); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnInputStateChanged
	void OnMasteryLevelSelected(struct FActivityTier ActivityTier); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelected
	void SetupPersonalProgress(struct UKSJobItem* JobItem, struct UKSActivityInstance* ActivityInstance); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupPersonalProgress
	void SetupTrackSections(struct TArray<struct FMasterySectionData> SectionData, int32_t CurrentTier); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetupTrackSections
	void SetTrackData(struct UKSJobItem* JobItem, struct TArray<struct FMasterySectionData> SectionData); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.SetTrackData
	void PreConstruct(bool IsDesignTime); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.PreConstruct
	void Construct(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.Construct
	void BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollRightButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
	void BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.BndEvt__ScrollLeftButton_K2Node_ComponentBoundEvent_1_OnBtnClicked__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.InitializeWidget
	void ExecuteUbergraph_WBP_RogueMasteryTrack(int32_t EntryPoint); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.ExecuteUbergraph_WBP_RogueMasteryTrack
	void OnPrestiegeSelected__DelegateSignature(); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnPrestiegeSelected__DelegateSignature
	void OnMasteryLevelSelectedEvent__DelegateSignature(struct FActivityTier ActivityTier); // Function WBP_RogueMasteryTrack.WBP_RogueMasteryTrack_C.OnMasteryLevelSelectedEvent__DelegateSignature
};

