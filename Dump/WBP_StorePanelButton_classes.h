// WidgetBlueprintGeneratedClass WBP_StorePanelButton.WBP_StorePanelButton_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_StorePanelButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4e8(0x08)
	struct UImage* ClickFill; // 0x4f0(0x08)
	struct UBorder* HighlightBorderWrapper; // 0x4f8(0x08)
	struct UButton* HitTarget; // 0x500(0x08)
	struct UImage* Image_215; // 0x508(0x08)
	struct UNamedSlot* NamedSlot_151; // 0x510(0x08)
	struct FMulticastInlineDelegate OnBtnClicked; // 0x518(0x10)
	struct FMulticastInlineDelegate OnBtnHovered; // 0x528(0x10)
	struct FMulticastInlineDelegate OnBtnUnhovered; // 0x538(0x10)
	bool bIsDisable; // 0x548(0x01)
	bool bIsActive; // 0x549(0x01)
	char UnknownData_54A[0x2]; // 0x54a(0x02)
	struct FLinearColor TintColor; // 0x54c(0x10)
	bool bColorOverride; // 0x55c(0x01)
	char UnknownData_55D[0x3]; // 0x55d(0x03)
	struct UAkAudioEvent* HoverStorePanelBtnSFX; // 0x560(0x08)
	struct UAkAudioEvent* ClickStorePanelBtnSFX; // 0x568(0x08)

	void SetTint(struct FLinearColor BaseColor); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.SetTint
	void OnHoveredLogic(bool IsGamepad); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.NavigateConfirm
	void OnClickSound(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnClickSound
	void OnHoverSound(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnHoverSound
	void Construct(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.Construct
	void OnGamepadConfirmed(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.DisableButton
	void CallButtonHover(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.CallButtonUnhover
	void PreConstruct(bool IsDesignTime); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.PreConstruct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_StorePanelButton(int32_t EntryPoint); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.ExecuteUbergraph_WBP_StorePanelButton
	void OnBtnUnhovered__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnUnhovered__DelegateSignature
	void OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnHovered__DelegateSignature
	void OnBtnClicked__DelegateSignature(); // Function WBP_StorePanelButton.WBP_StorePanelButton_C.OnBtnClicked__DelegateSignature
};

