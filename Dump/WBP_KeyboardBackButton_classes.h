// WidgetBlueprintGeneratedClass WBP_KeyboardBackButton.WBP_KeyboardBackButton_C
// Size: 0x258 (Inherited: 0x238)
struct UWBP_KeyboardBackButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UButton* BackButton; // 0x240(0x08)
	struct FMulticastInlineDelegate OnBackButtonClicked; // 0x248(0x10)

	void BndEvt__Button_253_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_KeyboardBackButton.WBP_KeyboardBackButton_C.BndEvt__Button_253_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_KeyboardBackButton.WBP_KeyboardBackButton_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph_WBP_KeyboardBackButton(int32_t EntryPoint); // Function WBP_KeyboardBackButton.WBP_KeyboardBackButton_C.ExecuteUbergraph_WBP_KeyboardBackButton
	void OnBackButtonClicked__DelegateSignature(); // Function WBP_KeyboardBackButton.WBP_KeyboardBackButton_C.OnBackButtonClicked__DelegateSignature
};

