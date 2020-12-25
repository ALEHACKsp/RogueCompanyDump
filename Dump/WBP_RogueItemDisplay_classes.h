// WidgetBlueprintGeneratedClass WBP_RogueItemDisplay.WBP_RogueItemDisplay_C
// Size: 0x258 (Inherited: 0x238)
struct UWBP_RogueItemDisplay_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x240(0x08)
	struct UTextBlock* ItemName; // 0x248(0x08)
	struct UTextBlock* ItemType; // 0x250(0x08)

	void SetItem(struct UKSItem* KSItem); // Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.SetItem
	void Construct(); // Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.PreConstruct
	void ExecuteUbergraph_WBP_RogueItemDisplay(int32_t EntryPoint); // Function WBP_RogueItemDisplay.WBP_RogueItemDisplay_C.ExecuteUbergraph_WBP_RogueItemDisplay
};

