// WidgetBlueprintGeneratedClass WBP_ButtonSlot.WBP_ButtonSlot_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_ButtonSlot_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4e8(0x08)
	struct UImage* background; // 0x4f0(0x08)
	struct UImage* BackgroundDecro; // 0x4f8(0x08)
	struct UNamedSlot* ButtonContent; // 0x500(0x08)
	struct UButton* HitTarget; // 0x508(0x08)
	struct UImage* SelectedBackgroundFill; // 0x510(0x08)
	struct UImage* SelectedFrame; // 0x518(0x08)
	struct UImage* SelectedGradient; // 0x520(0x08)
	struct FMulticastInlineDelegate OnBtnClicked; // 0x528(0x10)
	struct FMulticastInlineDelegate OnBtnHovered; // 0x538(0x10)
	struct FMulticastInlineDelegate OnBtnUnhovered; // 0x548(0x10)
	bool bIsDisable; // 0x558(0x01)
	bool bIsActive; // 0x559(0x01)
	char UnknownData_55A[0x6]; // 0x55a(0x06)
	struct UAkAudioEvent* ClickBtnSlotSFX; // 0x560(0x08)
	struct UAkAudioEvent* HoverBtnSlotSFX; // 0x568(0x08)

	void OnHoveredLogic(bool IsGamepad); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.NavigateConfirm
	void OnClickSound(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnClickSound
	void OnHoverSound(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnHoverSound
	void Construct(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.Construct
	void OnGamepadConfirmed(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.DisableButton
	void CallButtonHover(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.CallButtonUnhover
	void SetIsActiveState(bool bIsActive); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.SetIsActiveState
	void ExecuteUbergraph_WBP_ButtonSlot(int32_t EntryPoint); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.ExecuteUbergraph_WBP_ButtonSlot
	void OnBtnUnhovered__DelegateSignature(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnUnhovered__DelegateSignature
	void OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnHovered__DelegateSignature
	void OnBtnClicked__DelegateSignature(); // Function WBP_ButtonSlot.WBP_ButtonSlot_C.OnBtnClicked__DelegateSignature
};

