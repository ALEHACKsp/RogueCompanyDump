// WidgetBlueprintGeneratedClass WBP_Subtitle.WBP_Subtitle_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_Subtitle_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* Text; // 0x240(0x08)
	struct FText TextValue; // 0x248(0x18)

	void SetText(struct FText Text); // Function WBP_Subtitle.WBP_Subtitle_C.SetText
	void PreConstruct(bool IsDesignTime); // Function WBP_Subtitle.WBP_Subtitle_C.PreConstruct
	void Construct(); // Function WBP_Subtitle.WBP_Subtitle_C.Construct
	void ExecuteUbergraph_WBP_Subtitle(int32_t EntryPoint); // Function WBP_Subtitle.WBP_Subtitle_C.ExecuteUbergraph_WBP_Subtitle
};

