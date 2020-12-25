// WidgetBlueprintGeneratedClass WBP_PanelButton.WBP_PanelButton_C
// Size: 0x580 (Inherited: 0x4e0)
struct UWBP_PanelButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnClick; // 0x4e8(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f0(0x08)
	struct UButton* LoadoutButton; // 0x4f8(0x08)
	struct UImage* PanelBG; // 0x500(0x08)
	struct UImage* PanelBorder; // 0x508(0x08)
	struct UImage* PanelGlow; // 0x510(0x08)
	struct UImage* PanelHighlight; // 0x518(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x520(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x530(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x540(0x10)
	struct UAkAudioEvent* ClickPanelButtonSFX; // 0x550(0x08)
	struct FText DefaultButtonText; // 0x558(0x18)
	bool IsDisabled; // 0x570(0x01)
	char UnknownData_571[0x7]; // 0x571(0x07)
	struct UAkAudioEvent* HoverPanelButtonSFX; // 0x578(0x08)

	void SetIsDisabled(bool bDisabled); // Function WBP_PanelButton.WBP_PanelButton_C.SetIsDisabled
	bool NavigateConfirm(); // Function WBP_PanelButton.WBP_PanelButton_C.NavigateConfirm
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PanelButton.WBP_PanelButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_PanelButton.WBP_PanelButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PanelButton.WBP_PanelButton_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_PanelButton.WBP_PanelButton_C.GamepadConfirm
	void Do Hover(); // Function WBP_PanelButton.WBP_PanelButton_C.Do Hover
	void Do Unhover(); // Function WBP_PanelButton.WBP_PanelButton_C.Do Unhover
	void ExecuteUbergraph_WBP_PanelButton(int32_t EntryPoint); // Function WBP_PanelButton.WBP_PanelButton_C.ExecuteUbergraph_WBP_PanelButton
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_PanelButton.WBP_PanelButton_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_PanelButton.WBP_PanelButton_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_PanelButton.WBP_PanelButton_C.OnClicked__DelegateSignature
};

