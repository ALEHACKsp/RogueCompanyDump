// WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C
// Size: 0x598 (Inherited: 0x4e0)
struct UWBP_ButtonStacked_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnClickAnim; // 0x4e8(0x08)
	struct UWidgetAnimation* HoverAnim_Red; // 0x4f0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4f8(0x08)
	struct UImage* background; // 0x500(0x08)
	struct UNamedSlot* ButtonContent; // 0x508(0x08)
	struct UImage* Click; // 0x510(0x08)
	struct UImage* EndCap; // 0x518(0x08)
	struct UImage* Highlight; // 0x520(0x08)
	struct UButton* HitTarget; // 0x528(0x08)
	struct UImage* Selected; // 0x530(0x08)
	struct FMulticastInlineDelegate OnBtnStackedClicked; // 0x538(0x10)
	struct FMulticastInlineDelegate OnBtnStackedHovered; // 0x548(0x10)
	struct FMulticastInlineDelegate OnBtnStackedUnhovered; // 0x558(0x10)
	bool bIsDisable; // 0x568(0x01)
	bool bIsActive; // 0x569(0x01)
	char UnknownData_56A[0x6]; // 0x56a(0x06)
	struct FMulticastInlineDelegate OnBtnStackedReleased; // 0x570(0x10)
	bool IsRedButton; // 0x580(0x01)
	char UnknownData_581[0x7]; // 0x581(0x07)
	struct UAkAudioEvent* ClickBtnStackedSFX; // 0x588(0x08)
	struct UAkAudioEvent* HoverBtnStackedSFX; // 0x590(0x08)

	void SetVisuallyDisabled(bool ShouldDisable); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled
	void SetInitialDisplay(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay
	void OnHoveredLogic(bool IsGamepad); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm
	void OnClickSound(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnClickSound
	void OnHoverSound(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoverSound
	void Construct(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct
	void OnGamepadConfirmed(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton
	void CallButtonHover(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover
	void SetIsActiveState(bool bIsActive); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_ButtonStacked(int32_t EntryPoint); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked
	void OnBtnStackedReleased__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature
	void OnBtnStackedUnhovered__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature
	void OnBtnStackedHovered__DelegateSignature(bool IsGamepad); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature
	void OnBtnStackedClicked__DelegateSignature(); // Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature
};

