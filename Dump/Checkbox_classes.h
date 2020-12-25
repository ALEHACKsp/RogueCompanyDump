// WidgetBlueprintGeneratedClass Checkbox.Checkbox_C
// Size: 0x538 (Inherited: 0x4e0)
struct UCheckbox_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetSwitcher* background; // 0x4e8(0x08)
	struct UImage* Check; // 0x4f0(0x08)
	struct UButton* HitTarget; // 0x4f8(0x08)
	struct UImage* Hovered; // 0x500(0x08)
	struct UImage* Unhovered; // 0x508(0x08)
	bool Checked; // 0x510(0x01)
	char UnknownData_511[0x7]; // 0x511(0x07)
	struct FMulticastInlineDelegate OnCheckChanged; // 0x518(0x10)
	struct UAkAudioEvent* HoverCheckboxSFX; // 0x528(0x08)
	struct UAkAudioEvent* ClickCheckboxSFX; // 0x530(0x08)

	bool NavigateConfirm(); // Function Checkbox.Checkbox_C.NavigateConfirm
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function Checkbox.Checkbox_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void SetCheckedState(bool Checked); // Function Checkbox.Checkbox_C.SetCheckedState
	void GamepadConfirm(); // Function Checkbox.Checkbox_C.GamepadConfirm
	void GamepadHover(); // Function Checkbox.Checkbox_C.GamepadHover
	void GamepadUnhover(); // Function Checkbox.Checkbox_C.GamepadUnhover
	void ExecuteUbergraph_Checkbox(int32_t EntryPoint); // Function Checkbox.Checkbox_C.ExecuteUbergraph_Checkbox
	void OnCheckChanged__DelegateSignature(bool Checked); // Function Checkbox.Checkbox_C.OnCheckChanged__DelegateSignature
};

