// WidgetBlueprintGeneratedClass WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C
// Size: 0x510 (Inherited: 0x4e0)
struct UWBP_ProgressionCardSlot_Reputation_C : public UKSWidget {
	struct UTextBlock* Category; // 0x4e0(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x4e8(0x08)
	struct UImage* Image_508; // 0x4f0(0x08)
	struct UImage* PerkIcon; // 0x4f8(0x08)
	struct UTextBlock* PointsEarned; // 0x500(0x08)
	struct UWBP_ProgressionTally_C* WBP_ProgressionTally_C_1; // 0x508(0x08)

	void ProcessPlayerProgression(struct FPlayerProgression PlayerProgression); // Function WBP_ProgressionCardSlot_Reputation.WBP_ProgressionCardSlot_Reputation_C.ProcessPlayerProgression
};

