// WidgetBlueprintGeneratedClass WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C
// Size: 0x268 (Inherited: 0x238)
struct UWBP_RogueMasteryIcon_C : public UUserWidget {
	struct UImage* background; // 0x238(0x08)
	struct UWidgetSwitcher* BadgeSwitcher; // 0x240(0x08)
	struct UTextBlock* MasteryLevel; // 0x248(0x08)
	struct UImage* MaxMastery; // 0x250(0x08)
	struct USizeBox* MaxMasteryWrapper; // 0x258(0x08)
	struct UOverlay* RegularMastery; // 0x260(0x08)

	void SetMasteryLevelExplicit(int32_t CurrentLevel); // Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelExplicit
	void SetMasteryLevelForJob(struct UKSJobItem* JobItem); // Function WBP_RogueMasteryIcon.WBP_RogueMasteryIcon_C.SetMasteryLevelForJob
};

