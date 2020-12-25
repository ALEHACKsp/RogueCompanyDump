// WidgetBlueprintGeneratedClass WBP_NewsRotatorButton.WBP_NewsRotatorButton_C
// Size: 0x51c (Inherited: 0x4e0)
struct UWBP_NewsRotatorButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* EmptyPip; // 0x4e8(0x08)
	struct UButton* PipButton; // 0x4f0(0x08)
	struct UImage* SelectedPip; // 0x4f8(0x08)
	bool IsActivePip; // 0x500(0x01)
	char UnknownData_501[0x7]; // 0x501(0x07)
	struct FMulticastInlineDelegate OnClicked; // 0x508(0x10)
	int32_t ButtonIndex; // 0x518(0x04)

	void SetActiveButton(bool IsActive); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.SetActiveButton
	void BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.BndEvt__PipButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_NewsRotatorButton(int32_t EntryPoint); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.ExecuteUbergraph_WBP_NewsRotatorButton
	void OnClicked__DelegateSignature(int32_t ButtonIndex); // Function WBP_NewsRotatorButton.WBP_NewsRotatorButton_C.OnClicked__DelegateSignature
};

