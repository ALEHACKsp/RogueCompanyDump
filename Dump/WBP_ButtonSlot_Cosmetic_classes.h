// WidgetBlueprintGeneratedClass WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C
// Size: 0x5b0 (Inherited: 0x4e0)
struct UWBP_ButtonSlot_Cosmetic_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoverNoZoom; // 0x4e8(0x08)
	struct UWidgetAnimation* OnSelect; // 0x4f0(0x08)
	struct UWidgetAnimation* HueShiftRed; // 0x4f8(0x08)
	struct UWidgetAnimation* OnHover; // 0x500(0x08)
	struct UImage* ActiveFrame; // 0x508(0x08)
	struct UBorder* BaseColorWrapper; // 0x510(0x08)
	struct UImage* BaseStroke; // 0x518(0x08)
	struct UNamedSlot* ButtonContent; // 0x520(0x08)
	struct UImage* ClickFill; // 0x528(0x08)
	struct UImage* GradientFill; // 0x530(0x08)
	struct UImage* GradientFillLight; // 0x538(0x08)
	struct UBorder* HighlightColorWrapper; // 0x540(0x08)
	struct UImage* highlightstroke; // 0x548(0x08)
	struct UButton* HitTarget; // 0x550(0x08)
	struct FMulticastInlineDelegate OnBtnClicked; // 0x558(0x10)
	struct FMulticastInlineDelegate OnBtnHovered; // 0x568(0x10)
	struct FMulticastInlineDelegate OnBtnUnhovered; // 0x578(0x10)
	bool bIsDisable; // 0x588(0x01)
	bool bIsActive; // 0x589(0x01)
	char UnknownData_58A[0x2]; // 0x58a(0x02)
	struct FLinearColor TintColor; // 0x58c(0x10)
	bool bColorOverride; // 0x59c(0x01)
	char UnknownData_59D[0x3]; // 0x59d(0x03)
	struct UAkAudioEvent* ClickBtnSlotCosmeticSFX; // 0x5a0(0x08)
	struct UAkAudioEvent* HoverBtnSlotCosmeticSFX; // 0x5a8(0x08)

	void ReverseHoverNoZoom(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ReverseHoverNoZoom
	void PlayHoverNoZoom(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PlayHoverNoZoom
	void RestoreDefaultColor(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.RestoreDefaultColor
	void OverrideColor(struct FLinearColor New Base Color, struct FLinearColor New Highlight Color); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OverrideColor
	void Set Tint(struct FLinearColor BaseColor, struct FLinearColor HighlightColor); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Set Tint
	void OnHoveredLogic(bool IsGamepad); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoveredLogic
	bool NavigateConfirm(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.NavigateConfirm
	void OnHoverSound(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnHoverSound
	void Construct(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.Construct
	void OnGamepadConfirmed(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnGamepadConfirmed
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.GamepadUnhover
	void DisableButton(bool bShouldDisable); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.DisableButton
	void CallButtonHover(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonHover
	void CallButtonUnhover(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.CallButtonUnhover
	void SetIsActiveState(bool bIsActive); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.SetIsActiveState
	void PreConstruct(bool IsDesignTime); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.PreConstruct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	void OnClickSound(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnClickSound
	void ExecuteUbergraph_WBP_ButtonSlot_Cosmetic(int32_t EntryPoint); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.ExecuteUbergraph_WBP_ButtonSlot_Cosmetic
	void OnBtnUnhovered__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnUnhovered__DelegateSignature
	void OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnHovered__DelegateSignature
	void OnBtnClicked__DelegateSignature(); // Function WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C.OnBtnClicked__DelegateSignature
};

