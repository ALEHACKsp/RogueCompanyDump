// WidgetBlueprintGeneratedClass WBP_SettingsRadio.WBP_SettingsRadio_C
// Size: 0x550 (Inherited: 0x4e0)
struct UWBP_SettingsRadio_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover_Selected; // 0x4e8(0x08)
	struct UWidgetAnimation* Hover; // 0x4f0(0x08)
	struct UWidgetAnimation* Select; // 0x4f8(0x08)
	struct UButton* RadioButton; // 0x500(0x08)
	struct UTextBlock* RadioText; // 0x508(0x08)
	struct FText DisplayText; // 0x510(0x18)
	struct FMulticastInlineDelegate On Radio Button Selected; // 0x528(0x10)
	bool bSelected; // 0x538(0x01)
	char UnknownData_539[0x7]; // 0x539(0x07)
	struct UAkAudioEvent* HoverSettingsRadioSFX; // 0x540(0x08)
	struct UAkAudioEvent* ClickSettingsRadioSFX; // 0x548(0x08)

	bool NavigateConfirmPressed(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.NavigateConfirmPressed
	bool NavigateConfirm(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.NavigateConfirm
	void SettingsRadioClickedSFX(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.SettingsRadioClickedSFX
	void SettingsRadioHoveredSFX(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.SettingsRadioHoveredSFX
	void Construct(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.Construct
	void On Selected(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.On Selected
	void On Unselected(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.On Unselected
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__RadioButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.BndEvt__RadioButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void GamepadHover(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.GamepadHover
	void GamepadUnhover(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.GamepadUnhover
	void Select Button(); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.Select Button
	void ExecuteUbergraph_WBP_SettingsRadio(int32_t EntryPoint); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.ExecuteUbergraph_WBP_SettingsRadio
	void On Radio Button Selected__DelegateSignature(struct UWBP_SettingsRadio_C* SettingsRadio); // Function WBP_SettingsRadio.WBP_SettingsRadio_C.On Radio Button Selected__DelegateSignature
};

