// WidgetBlueprintGeneratedClass WBP_ButtonArrow.WBP_ButtonArrow_C
// Size: 0x53a (Inherited: 0x4e0)
struct UWBP_ButtonArrow_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4e8(0x08)
	struct UImage* background; // 0x4f0(0x08)
	struct UImage* Highlight; // 0x4f8(0x08)
	struct UButton* HitTarget; // 0x500(0x08)
	struct FMulticastInlineDelegate OnBtnClicked; // 0x508(0x10)
	struct FMulticastInlineDelegate OnBtnHovered; // 0x518(0x10)
	struct FMulticastInlineDelegate OnBtnUnhovered; // 0x528(0x10)
	bool bIsDisable; // 0x538(0x01)
	bool bIsActive; // 0x539(0x01)

	void OnHoveredLogic(bool IsGamepad); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.NavigateConfirm
	void OnClickSound(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnClickSound
	void OnHoverSound(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoverSound
	void Construct(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.Construct
	void OnGamepadConfirmed(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.DisableButton
	void CallButtonHover(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonUnhover
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.PreConstruct
	void ExecuteUbergraph_WBP_ButtonArrow(int32_t EntryPoint); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.ExecuteUbergraph_WBP_ButtonArrow
	void OnBtnUnhovered__DelegateSignature(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnUnhovered__DelegateSignature
	void OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnHovered__DelegateSignature
	void OnBtnClicked__DelegateSignature(); // Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnClicked__DelegateSignature
};

