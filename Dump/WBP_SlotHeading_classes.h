// WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C
// Size: 0x268 (Inherited: 0x238)
struct UWBP_SlotHeading_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* Heading; // 0x240(0x08)
	struct UImage* UnderlineBorder; // 0x248(0x08)
	struct FText HeadingText; // 0x250(0x18)

	void SetText(struct FText newText); // Function WBP_SlotHeading.WBP_SlotHeading_C.SetText
	void SetUnderlineColor(struct FLinearColor NewColor); // Function WBP_SlotHeading.WBP_SlotHeading_C.SetUnderlineColor
	void SetTextColor(struct FSlateColor NewColor); // Function WBP_SlotHeading.WBP_SlotHeading_C.SetTextColor
	void PreConstruct(bool IsDesignTime); // Function WBP_SlotHeading.WBP_SlotHeading_C.PreConstruct
	void Construct(); // Function WBP_SlotHeading.WBP_SlotHeading_C.Construct
	void SetSlotHeading(struct FText Text); // Function WBP_SlotHeading.WBP_SlotHeading_C.SetSlotHeading
	void ExecuteUbergraph_WBP_SlotHeading(int32_t EntryPoint); // Function WBP_SlotHeading.WBP_SlotHeading_C.ExecuteUbergraph_WBP_SlotHeading
};

