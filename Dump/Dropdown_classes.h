// WidgetBlueprintGeneratedClass Dropdown.Dropdown_C
// Size: 0x5b0 (Inherited: 0x4e0)
struct UDropdown_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4e8(0x08)
	struct UImage* DropArrow; // 0x4f0(0x08)
	struct UMenuAnchor* DropdownAnchor; // 0x4f8(0x08)
	struct UImage* DropDownBkg; // 0x500(0x08)
	struct UButton* HitTarget; // 0x508(0x08)
	struct UTextBlock* SelectionText; // 0x510(0x08)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x518(0x10)
	struct TArray<struct FText> Options; // 0x528(0x10)
	struct FText DefaultSelection; // 0x538(0x18)
	int32_t HoverIndex; // 0x550(0x04)
	int32_t SelectionIndex; // 0x554(0x04)
	struct FText HintText; // 0x558(0x18)
	bool IgnoreFirst; // 0x570(0x01)
	bool IgnoreCanceled; // 0x571(0x01)
	char UnknownData_572[0x6]; // 0x572(0x06)
	struct UDropdownList_C* DropdownList; // 0x578(0x08)
	struct UAkAudioEvent* ClickDropdownSFX; // 0x580(0x08)
	struct UAkAudioEvent* HoverDropdownSFX; // 0x588(0x08)
	struct FMulticastInlineDelegate OnHoverPreview; // 0x590(0x10)
	struct FMulticastInlineDelegate OnSelectionCanceled; // 0x5a0(0x10)

	void IsSelecting(bool IsSelecting); // Function Dropdown.Dropdown_C.IsSelecting
	bool NavigateConfirm(); // Function Dropdown.Dropdown_C.NavigateConfirm
	void AppendOptions(struct TArray<struct FText> OptionsToAppend); // Function Dropdown.Dropdown_C.AppendOptions
	void ForceClose(); // Function Dropdown.Dropdown_C.ForceClose
	void ForceToggle(); // Function Dropdown.Dropdown_C.ForceToggle
	void ForceOpen(); // Function Dropdown.Dropdown_C.ForceOpen
	struct UWidget* InitializeDropdownList(); // Function Dropdown.Dropdown_C.InitializeDropdownList
	void SetSelectedOptionByIndex(int32_t Index, bool Success); // Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
	void SetSelectedOptionByText(struct FText Text, bool Success); // Function Dropdown.Dropdown_C.SetSelectedOptionByText
	void RemoveOptionByIndex(int32_t Index, bool Success); // Function Dropdown.Dropdown_C.RemoveOptionByIndex
	void RemoveOptionByText(struct FText Option, bool Success); // Function Dropdown.Dropdown_C.RemoveOptionByText
	void GetSelectedOption(struct FText Selection, int32_t Index); // Function Dropdown.Dropdown_C.GetSelectedOption
	void GetOptionCount(int32_t Count); // Function Dropdown.Dropdown_C.GetOptionCount
	void FindIndexForOption(struct FText Option, bool Success, int32_t Index); // Function Dropdown.Dropdown_C.FindIndexForOption
	void FindOptionByIndex(int32_t Index, bool Success, struct FText Option); // Function Dropdown.Dropdown_C.FindOptionByIndex
	void ClearSelection(); // Function Dropdown.Dropdown_C.ClearSelection
	void ClearOptions(); // Function Dropdown.Dropdown_C.ClearOptions
	void AddOption(struct FText OptionText); // Function Dropdown.Dropdown_C.AddOption
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void SelectionMade(int32_t Index, struct FText Selection); // Function Dropdown.Dropdown_C.SelectionMade
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	void SelectionCancel(); // Function Dropdown.Dropdown_C.SelectionCancel
	void BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	void HandleSetCurrentHoverIndex(int32_t CurrentHoverIndex); // Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function Dropdown.Dropdown_C.GamepadHover
	void GamepadUnhover(); // Function Dropdown.Dropdown_C.GamepadUnhover
	void On Selected(); // Function Dropdown.Dropdown_C.On Selected
	void Hover(); // Function Dropdown.Dropdown_C.Hover
	void Unhover(); // Function Dropdown.Dropdown_C.Unhover
	void HoverPreview(int32_t Index); // Function Dropdown.Dropdown_C.HoverPreview
	void ExecuteUbergraph_Dropdown(int32_t EntryPoint); // Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
	void OnSelectionCanceled__DelegateSignature(); // Function Dropdown.Dropdown_C.OnSelectionCanceled__DelegateSignature
	void OnHoverPreview__DelegateSignature(int32_t Index); // Function Dropdown.Dropdown_C.OnHoverPreview__DelegateSignature
	void OnSelectionChanged__DelegateSignature(struct FText SelectionText, int32_t SelectionIndex); // Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
};

