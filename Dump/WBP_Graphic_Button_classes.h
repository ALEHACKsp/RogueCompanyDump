// WidgetBlueprintGeneratedClass WBP_Graphic_Button.WBP_Graphic_Button_C
// Size: 0x590 (Inherited: 0x4e0)
struct UWBP_Graphic_Button_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4e8(0x08)
	struct UImage* Active; // 0x4f0(0x08)
	struct UImage* button_base; // 0x4f8(0x08)
	struct UNamedSlot* ButtonContent; // 0x500(0x08)
	struct UButton* HitTarget; // 0x508(0x08)
	struct UImage* Hover; // 0x510(0x08)
	struct FMulticastInlineDelegate OnGraphicBtnClicked; // 0x518(0x10)
	struct FMulticastInlineDelegate OnGraphicBtnHovered; // 0x528(0x10)
	struct FMulticastInlineDelegate OnGraphicBtnUnhovered; // 0x538(0x10)
	struct UTexture2D* NormalButtonImage; // 0x548(0x08)
	struct FLinearColor NormalButtonTint; // 0x550(0x10)
	struct UTexture2D* HoverButtonImage; // 0x560(0x08)
	struct FLinearColor HoverButtonTint; // 0x568(0x10)
	bool bIsDisable; // 0x578(0x01)
	bool bIsActive; // 0x579(0x01)
	char UnknownData_57A[0x6]; // 0x57a(0x06)
	struct UAkAudioEvent* ClickGraphicBtnSFX; // 0x580(0x08)
	struct UAkAudioEvent* HoverGraphicBtnSFX; // 0x588(0x08)

	void OnHoveredLogic(bool IsGamepad); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.NavigateConfirm
	void SetImage(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImage
	void SetImageTint(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetImageTint
	void OnClickSound(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnClickSound
	void OnHoverSound(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnHoverSound
	void Construct(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.Construct
	void OnGamepadConfirmed(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadHover
	void GamepadUnhover(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.DisableButton
	void CallButtonHover(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.CallButtonUnhover
	void SetIsActiveState(bool bIsActive); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.SetIsActiveState
	void ExecuteUbergraph_WBP_Graphic_Button(int32_t EntryPoint); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.ExecuteUbergraph_WBP_Graphic_Button
	void OnGraphicBtnUnhovered__DelegateSignature(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnUnhovered__DelegateSignature
	void OnGraphicBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnHovered__DelegateSignature
	void OnGraphicBtnClicked__DelegateSignature(); // Function WBP_Graphic_Button.WBP_Graphic_Button_C.OnGraphicBtnClicked__DelegateSignature
};

