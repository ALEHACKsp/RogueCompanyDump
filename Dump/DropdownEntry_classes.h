// WidgetBlueprintGeneratedClass DropdownEntry.DropdownEntry_C
// Size: 0x560 (Inherited: 0x4e0)
struct UDropdownEntry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* Color_Swatch_Brush; // 0x4f0(0x08)
	struct UButton* HitTarget; // 0x4f8(0x08)
	struct UTextBlock* OptionText; // 0x500(0x08)
	struct UImage* Selected; // 0x508(0x08)
	struct FText Text; // 0x510(0x18)
	int32_t Index; // 0x528(0x04)
	char UnknownData_52C[0x4]; // 0x52c(0x04)
	struct FMulticastInlineDelegate OnOptionSelected; // 0x530(0x10)
	struct FMulticastInlineDelegate OnOptionHovered; // 0x540(0x10)
	struct UAkAudioEvent* HoverDropdownEntrySFX; // 0x550(0x08)
	struct UAkAudioEvent* ClickDropdownEntrySFX; // 0x558(0x08)

	bool NavigateConfirm(); // Function DropdownEntry.DropdownEntry_C.NavigateConfirm
	void Construct(); // Function DropdownEntry.DropdownEntry_C.Construct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function DropdownEntry.DropdownEntry_C.GamepadHover
	void GamepadUnhover(); // Function DropdownEntry.DropdownEntry_C.GamepadUnhover
	void GamepadConfirm(); // Function DropdownEntry.DropdownEntry_C.GamepadConfirm
	void ChangeSelectionState(bool Selected); // Function DropdownEntry.DropdownEntry_C.ChangeSelectionState
	void ExecuteUbergraph_DropdownEntry(int32_t EntryPoint); // Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry
	void OnOptionHovered__DelegateSignature(struct UWidget* Widget, int32_t Index); // Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature
	void OnOptionSelected__DelegateSignature(int32_t Index, struct FText Text); // Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature
};

