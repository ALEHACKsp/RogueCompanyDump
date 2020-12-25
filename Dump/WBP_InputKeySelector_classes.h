// WidgetBlueprintGeneratedClass WBP_InputKeySelector.WBP_InputKeySelector_C
// Size: 0x548 (Inherited: 0x4a0)
struct UWBP_InputKeySelector_C : public UPUMG_Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* HideKeyText; // 0x4a8(0x08)
	struct UWidgetAnimation* Hover; // 0x4b0(0x08)
	struct UTextBlock* ComboText; // 0x4b8(0x08)
	struct UImage* GamepadImage; // 0x4c0(0x08)
	struct UImage* GamepadImage2; // 0x4c8(0x08)
	struct USizeBox* GamepadImage2Wrapper; // 0x4d0(0x08)
	struct UWidgetSwitcher* Icon_Text_Switcher; // 0x4d8(0x08)
	struct UHorizontalBox* IconBox; // 0x4e0(0x08)
	struct UInputKeySelector* KeySelector; // 0x4e8(0x08)
	struct UTextBlock* KeyText; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnKeySelected; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x508(0x10)
	bool bIsSelecting; // 0x518(0x01)
	char UnknownData_519[0x7]; // 0x519(0x07)
	struct FMulticastInlineDelegate OnComboKeySelected; // 0x520(0x10)
	bool bIsCapturingCombo; // 0x530(0x01)
	char UnknownData_531[0x7]; // 0x531(0x07)
	struct UAkAudioEvent* HoverInputKeySelectorSFX; // 0x538(0x08)
	struct UAkAudioEvent* ClickInputKeySelectorSFX; // 0x540(0x08)

	void SetMouseWheel(float WheelDelta); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetMouseWheel
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseWheel
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp
	void InputKeySelectorInputSelectedSFX(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX
	void InputKeySelectorClickSFX(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX
	void InputKeySelectorHoverSFX(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX
	void Construct(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct
	void BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
	void BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
	void GamepadHover(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover
	void GamepadUnhover(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover
	void Set Selected Key(struct FInputChord Selected Key); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget
	void SetDisabledText(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText
	void SetComboGamepadKey(struct FInputChord Selected Key, struct FInputChord Selected Combo Key); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey
	void Capture Combo(bool bCapture); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo
	void TabRight(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight
	void ExecuteUbergraph_WBP_InputKeySelector(int32_t EntryPoint); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
	void OnComboKeySelected__DelegateSignature(struct FInputChord Combo Key); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
	void OnKeySelected__DelegateSignature(struct FInputChord Selected Key); // Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
};

