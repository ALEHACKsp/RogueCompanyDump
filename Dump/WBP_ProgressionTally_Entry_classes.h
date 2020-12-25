// WidgetBlueprintGeneratedClass WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C
// Size: 0x4f9 (Inherited: 0x4e0)
struct UWBP_ProgressionTally_Entry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UBorder* BGWrapper; // 0x4e8(0x08)
	struct UTextBlock* BonusPointsEarned; // 0x4f0(0x08)
	bool IsBonus; // 0x4f8(0x01)

	void SetValue(int32_t BonusValue); // Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetValue
	void SetVisualStyle(); // Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.SetVisualStyle
	void PreConstruct(bool IsDesignTime); // Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.PreConstruct
	void Construct(); // Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.Construct
	void ExecuteUbergraph_WBP_ProgressionTally_Entry(int32_t EntryPoint); // Function WBP_ProgressionTally_Entry.WBP_ProgressionTally_Entry_C.ExecuteUbergraph_WBP_ProgressionTally_Entry
};

