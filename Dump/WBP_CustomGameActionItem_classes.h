// WidgetBlueprintGeneratedClass WBP_CustomGameActionItem.WBP_CustomGameActionItem_C
// Size: 0x268 (Inherited: 0x238)
struct UWBP_CustomGameActionItem_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* OnEntry; // 0x240(0x08)
	struct URichTextBlock* TextBlock; // 0x248(0x08)
	struct FText Text; // 0x250(0x18)

	void SetText(struct FText Text); // Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.SetText
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.PreConstruct
	void Construct(); // Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.Construct
	void ExecuteUbergraph_WBP_CustomGameActionItem(int32_t EntryPoint); // Function WBP_CustomGameActionItem.WBP_CustomGameActionItem_C.ExecuteUbergraph_WBP_CustomGameActionItem
};

