// WidgetBlueprintGeneratedClass PopupButton.PopupButton_C
// Size: 0x590 (Inherited: 0x4e0)
struct UPopupButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* background; // 0x4f0(0x08)
	struct UButton* Button; // 0x4f8(0x08)
	struct USizeBox* ButtonCallout; // 0x500(0x08)
	struct UImage* ButtonCalloutImage; // 0x508(0x08)
	struct UTextBlock* DisplayTextBlock; // 0x510(0x08)
	struct UImage* HoverImage; // 0x518(0x08)
	struct FText ButtonText; // 0x520(0x18)
	struct FLinearColor ButtonColor; // 0x538(0x10)
	int32_t Index; // 0x548(0x04)
	char UnknownData_54C[0x4]; // 0x54c(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x550(0x10)
	struct FMulticastInlineDelegate OnNavigateBackAction; // 0x560(0x10)
	bool CapturesNavBack; // 0x570(0x01)
	bool DisableClickSound; // 0x571(0x01)
	char UnknownData_572[0x6]; // 0x572(0x06)
	struct UAkAudioEvent* NavBackPopupBtnSFX; // 0x578(0x08)
	struct UAkAudioEvent* ClickPopupBtnSFX; // 0x580(0x08)
	struct UAkAudioEvent* HoverPopupBtnSFX; // 0x588(0x08)

	bool NavigateBack(); // Function PopupButton.PopupButton_C.NavigateBack
	void ToggleGamepadCallout(bool Show); // Function PopupButton.PopupButton_C.ToggleGamepadCallout
	void SetDisplayText(struct FText InText); // Function PopupButton.PopupButton_C.SetDisplayText
	void SetButtonCalloutImage(struct FName InActionName); // Function PopupButton.PopupButton_C.SetButtonCalloutImage
	void SetFontSize(int32_t In Font Size); // Function PopupButton.PopupButton_C.SetFontSize
	bool NavigateConfirm(); // Function PopupButton.PopupButton_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function PopupButton.PopupButton_C.PreConstruct
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function PopupButton.PopupButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function PopupButton.PopupButton_C.GamepadHover
	void GamepadUnhover(); // Function PopupButton.PopupButton_C.GamepadUnhover
	void GamepadPress(); // Function PopupButton.PopupButton_C.GamepadPress
	void OnNavBack(); // Function PopupButton.PopupButton_C.OnNavBack
	void Construct(); // Function PopupButton.PopupButton_C.Construct
	void ExecuteUbergraph_PopupButton(int32_t EntryPoint); // Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
	void OnNavigateBackAction__DelegateSignature(); // Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
	void OnClicked__DelegateSignature(int32_t Index); // Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
};

