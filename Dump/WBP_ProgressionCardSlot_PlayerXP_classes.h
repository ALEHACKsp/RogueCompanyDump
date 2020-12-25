// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C
// Size: 0x270 (Inherited: 0x238)
struct UWBP_ProgressionCardSlot_PlayerXP_C : public UUserWidget {
	struct UTextBlock* Category; // 0x238(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x240(0x08)
	struct UImage* Image_508; // 0x248(0x08)
	struct UImage* PerkIcon; // 0x250(0x08)
	struct UTextBlock* PlayerLevelText; // 0x258(0x08)
	struct UTextBlock* PointsEarned; // 0x260(0x08)
	struct UWBP_ProgressionTally_C* ProgressionTally; // 0x268(0x08)

	void ProcessPlayerProgression(struct FPlayerProgression PlayerProgress); // Function WBP_ProgressionCardSlot_PlayerXP.WBP_ProgressionCardSlot_PlayerXP_C.ProcessPlayerProgression
};

