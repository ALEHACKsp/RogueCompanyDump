// WidgetBlueprintGeneratedClass WBP_Header1.WBP_Header1_C
// Size: 0x268 (Inherited: 0x238)
struct UWBP_Header1_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Decro; // 0x240(0x08)
	struct UTextBlock* Text; // 0x248(0x08)
	struct FText TextValue; // 0x250(0x18)

	void SetText(struct FText Text); // Function WBP_Header1.WBP_Header1_C.SetText
	void PreConstruct(bool IsDesignTime); // Function WBP_Header1.WBP_Header1_C.PreConstruct
	void Construct(); // Function WBP_Header1.WBP_Header1_C.Construct
	void ExecuteUbergraph_WBP_Header1(int32_t EntryPoint); // Function WBP_Header1.WBP_Header1_C.ExecuteUbergraph_WBP_Header1
};

