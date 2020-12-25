// WidgetBlueprintGeneratedClass WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C
// Size: 0x5a0 (Inherited: 0x4e0)
struct UWBP_RogueMasteryTrackSection_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UHorizontalBox* MasteryRewardEntries; // 0x4e8(0x08)
	struct UImage* ProgressBarComplete; // 0x4f0(0x08)
	struct UWBP_ChevronProgressBar_C* WBP_ChevronProgressBar; // 0x4f8(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry; // 0x500(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_2; // 0x508(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_3; // 0x510(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_4; // 0x518(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_5; // 0x520(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_6; // 0x528(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_7; // 0x530(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_8; // 0x538(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_9; // 0x540(0x08)
	struct UWBP_RogueMasteryTrackLevel_C* WBP_RogueMasteryTrackEntry_10; // 0x548(0x08)
	struct FMulticastInlineDelegate OnTrackEntrySelected; // 0x550(0x10)
	struct FActivityTier LastSelectedActivity; // 0x560(0x40)

	void SetSelectedEntry(int32_t ActivityTierNumber); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSelectedEntry
	void SetSectionData(struct FMasterySectionData SectionData, int32_t CurrentTier); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.SetSectionData
	void GetSelectedActivity(int32_t Index, struct FActivityTier Activity); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.GetSelectedActivity
	void OnMasteryLevelSelected(struct FActivityTier Activity); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnMasteryLevelSelected
	void PreConstruct(bool IsDesignTime); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.PreConstruct
	void Construct(); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.InitializeWidget
	void ExecuteUbergraph_WBP_RogueMasteryTrackSection(int32_t EntryPoint); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.ExecuteUbergraph_WBP_RogueMasteryTrackSection
	void OnTrackEntrySelected__DelegateSignature(struct FActivityTier ActivityTier); // Function WBP_RogueMasteryTrackSection.WBP_RogueMasteryTrackSection_C.OnTrackEntrySelected__DelegateSignature
};

