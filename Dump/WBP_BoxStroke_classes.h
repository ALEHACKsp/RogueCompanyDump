// WidgetBlueprintGeneratedClass WBP_BoxStroke.WBP_BoxStroke_C
// Size: 0x294 (Inherited: 0x238)
struct UWBP_BoxStroke_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Image_E; // 0x240(0x08)
	struct UImage* Image_N; // 0x248(0x08)
	struct UImage* Image_S; // 0x250(0x08)
	struct UImage* Image_W; // 0x258(0x08)
	struct USizeBox* SB_E; // 0x260(0x08)
	struct USizeBox* SB_N; // 0x268(0x08)
	struct USizeBox* SB_S; // 0x270(0x08)
	struct USizeBox* SB_W; // 0x278(0x08)
	float StrokeSize; // 0x280(0x04)
	struct FLinearColor StrokeColor; // 0x284(0x10)

	void SetStrokeColor(struct FLinearColor NewColor); // Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor
	void SetStrokeSize(float NewSize); // Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize
	void ApplyStrokeColor(); // Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor
	void ApplyStrokeSize(); // Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize
	void PreConstruct(bool IsDesignTime); // Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct
	void Construct(); // Function WBP_BoxStroke.WBP_BoxStroke_C.Construct
	void ExecuteUbergraph_WBP_BoxStroke(int32_t EntryPoint); // Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke
};

