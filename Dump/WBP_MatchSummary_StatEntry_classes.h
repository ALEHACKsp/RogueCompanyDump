// WidgetBlueprintGeneratedClass WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C
// Size: 0x530 (Inherited: 0x4e0)
struct UWBP_MatchSummary_StatEntry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* StatNameText; // 0x4e8(0x08)
	struct UTextBlock* StatValueText; // 0x4f0(0x08)
	bool NewVar_1; // 0x4f8(0x01)
	char UnknownData_4F9[0x7]; // 0x4f9(0x07)
	struct FText StatName; // 0x500(0x18)
	struct FText StatValue; // 0x518(0x18)

	void SetStatText(struct FText StatName, struct FText StatValue); // Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.SetStatText
	void PreConstruct(bool IsDesignTime); // Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.PreConstruct
	void Construct(); // Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.Construct
	void ExecuteUbergraph_WBP_MatchSummary_StatEntry(int32_t EntryPoint); // Function WBP_MatchSummary_StatEntry.WBP_MatchSummary_StatEntry_C.ExecuteUbergraph_WBP_MatchSummary_StatEntry
};

