// WidgetBlueprintGeneratedClass WBP_StackedStatBar.WBP_StackedStatBar_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_StackedStatBar_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct USizeBox* BarGroup; // 0x240(0x08)
	struct UImage* CurrentBar; // 0x248(0x08)
	struct UImage* ProjectedBar; // 0x250(0x08)
	struct UTextBlock* StatText; // 0x258(0x08)
	struct UImage* UpgradeArrow; // 0x260(0x08)
	struct UTextBlock* UpgradeValueText; // 0x268(0x08)
	struct UTextBlock* ValueText; // 0x270(0x08)

	void SetStatCurrentToNext(struct FItemDisplayStat CurrentStat, struct FItemDisplayStat ProjectedStat); // Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrentToNext
	void SetStatCurrent(struct FItemDisplayStat Stat); // Function WBP_StackedStatBar.WBP_StackedStatBar_C.SetStatCurrent
	void PreConstruct(bool IsDesignTime); // Function WBP_StackedStatBar.WBP_StackedStatBar_C.PreConstruct
	void Construct(); // Function WBP_StackedStatBar.WBP_StackedStatBar_C.Construct
	void ExecuteUbergraph_WBP_StackedStatBar(int32_t EntryPoint); // Function WBP_StackedStatBar.WBP_StackedStatBar_C.ExecuteUbergraph_WBP_StackedStatBar
};

