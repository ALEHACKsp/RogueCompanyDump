// WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C
// Size: 0x278 (Inherited: 0x238)
struct UWBP_Guided_Tutorial_Card_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct URichTextBlock* DescriptionText; // 0x240(0x08)
	struct UImage* Image_111; // 0x248(0x08)
	struct UImage* Image_113; // 0x250(0x08)
	struct UImage* Image_114; // 0x258(0x08)
	struct UImage* Image_115; // 0x260(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x268(0x08)
	struct UWBP_Header2_C* WBP_Header2; // 0x270(0x08)

	void SetCardData(struct FGuidedCalloutCardData CardData); // Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
	void PreConstruct(bool IsDesignTime); // Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
	void ExecuteUbergraph_WBP_Guided_Tutorial_Card(int32_t EntryPoint); // Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
};

