// WidgetBlueprintGeneratedClass WBP_CustomSwapButton.WBP_CustomSwapButton_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_CustomSwapButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UButton* SwapButton; // 0x248(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x250(0x10)

	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void ForceClick(); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.ForceClick
	void ExecuteUbergraph_WBP_CustomSwapButton(int32_t EntryPoint); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.ExecuteUbergraph_WBP_CustomSwapButton
	void OnClicked__DelegateSignature(); // Function WBP_CustomSwapButton.WBP_CustomSwapButton_C.OnClicked__DelegateSignature
};

