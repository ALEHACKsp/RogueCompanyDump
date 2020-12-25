// WidgetBlueprintGeneratedClass WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C
// Size: 0x270 (Inherited: 0x250)
struct UWBP_LerpingNumberWidget_C : public UKSFloatTickLerpWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UWidgetAnimation* AnimBump; // 0x258(0x08)
	struct UTextBlock* Text; // 0x260(0x08)
	float RepeatThreshold; // 0x268(0x04)
	int32_t CurrentTextDisplay; // 0x26c(0x04)

	void UpdateTextDisplay(float NewTargetValue); // Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.UpdateTextDisplay
	void UpdateCashBalance(int32_t CashValue); // Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.UpdateCashBalance
	void DisplayForValue(float Value); // Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.DisplayForValue
	void ExecuteUbergraph_WBP_LerpingNumberWidget(int32_t EntryPoint); // Function WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C.ExecuteUbergraph_WBP_LerpingNumberWidget
};

