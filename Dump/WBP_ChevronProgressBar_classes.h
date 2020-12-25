// WidgetBlueprintGeneratedClass WBP_ChevronProgressBar.WBP_ChevronProgressBar_C
// Size: 0x2e0 (Inherited: 0x238)
struct UWBP_ChevronProgressBar_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* BackBar_3; // 0x240(0x08)
	struct UScaleBox* BackWrapper; // 0x248(0x08)
	struct UImage* Fill; // 0x250(0x08)
	struct UImage* Fill_2; // 0x258(0x08)
	struct UScaleBox* FillWrapper; // 0x260(0x08)
	struct FSlateColor FillColor; // 0x268(0x28)
	struct FSlateColor FillColor_Highlight; // 0x290(0x28)
	struct FSlateColor BackColor; // 0x2b8(0x28)

	void SetColors(); // Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetColors
	void SetProgress(float Progress); // Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.SetProgress
	void PreConstruct(bool IsDesignTime); // Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.PreConstruct
	void Construct(); // Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.Construct
	void ExecuteUbergraph_WBP_ChevronProgressBar(int32_t EntryPoint); // Function WBP_ChevronProgressBar.WBP_ChevronProgressBar_C.ExecuteUbergraph_WBP_ChevronProgressBar
};

