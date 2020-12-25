// WidgetBlueprintGeneratedClass WBP_PanelDefault.WBP_PanelDefault_C
// Size: 0x270 (Inherited: 0x238)
struct UWBP_PanelDefault_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* PanelBG; // 0x240(0x08)
	struct UNamedSlot* PanelContent; // 0x248(0x08)
	struct FLinearColor PanelColor; // 0x250(0x10)
	struct FMargin ContentPadding; // 0x260(0x10)

	void SetContentPadding(struct FMargin ContentPadding); // Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding
	void SetPanelColor(struct FLinearColor PanelColor); // Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor
	void PreConstruct(bool IsDesignTime); // Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct
	void Construct(); // Function WBP_PanelDefault.WBP_PanelDefault_C.Construct
	void ExecuteUbergraph_WBP_PanelDefault(int32_t EntryPoint); // Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault
};

