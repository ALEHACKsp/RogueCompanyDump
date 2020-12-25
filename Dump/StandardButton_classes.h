// WidgetBlueprintGeneratedClass StandardButton.StandardButton_C
// Size: 0x550 (Inherited: 0x4e0)
struct UStandardButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* bkg; // 0x4f0(0x08)
	struct UImage* HoverLeft; // 0x4f8(0x08)
	struct UButton* LoadoutButton; // 0x500(0x08)
	struct UNamedSlot* NamedSlot_1; // 0x508(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x510(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x520(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x530(0x10)
	struct UAkAudioEvent* ClickStandardBtnSFX; // 0x540(0x08)
	struct UAkAudioEvent* HoverStandardBtnSFX; // 0x548(0x08)

	bool NavigateConfirm(); // Function StandardButton.StandardButton_C.NavigateConfirm
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function StandardButton.StandardButton_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function StandardButton.StandardButton_C.GamepadHover
	void GamepadUnhover(); // Function StandardButton.StandardButton_C.GamepadUnhover
	void GamepadConfirm(); // Function StandardButton.StandardButton_C.GamepadConfirm
	void Do Hover(); // Function StandardButton.StandardButton_C.Do Hover
	void Do Unhover(); // Function StandardButton.StandardButton_C.Do Unhover
	void ExecuteUbergraph_StandardButton(int32_t EntryPoint); // Function StandardButton.StandardButton_C.ExecuteUbergraph_StandardButton
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function StandardButton.StandardButton_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function StandardButton.StandardButton_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function StandardButton.StandardButton_C.OnClicked__DelegateSignature
};

