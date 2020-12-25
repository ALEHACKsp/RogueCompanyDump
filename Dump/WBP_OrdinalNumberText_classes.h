// WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C
// Size: 0x254 (Inherited: 0x238)
struct UWBP_OrdinalNumberText_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* MainText; // 0x240(0x08)
	struct UTextBlock* SuperscriptText; // 0x248(0x08)
	int32_t Number; // 0x250(0x04)

	void Get Language Specific Superscript Text(struct FString Language Code, struct FText Return Value); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
	void Get Language Specific Main Text(struct FString Language Code, struct FText Return Value); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
	void PreConstruct(bool IsDesignTime); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
	void Set Font(struct FSlateFontInfo InFontInfo); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
	void Set Value(int32_t Number); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
	void ExecuteUbergraph_WBP_OrdinalNumberText(int32_t EntryPoint); // Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
};

