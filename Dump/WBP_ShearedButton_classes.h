// WidgetBlueprintGeneratedClass WBP_ShearedButton.WBP_ShearedButton_C
// Size: 0x820 (Inherited: 0x4e0)
struct UWBP_ShearedButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct USizeBox* BeginSizedPadding_SizeWrapper; // 0x4e8(0x08)
	struct UImage* ButtonBorderImage; // 0x4f0(0x08)
	struct UImage* ButtonIcon; // 0x4f8(0x08)
	struct UOverlay* ButtonTopLayer; // 0x500(0x08)
	struct USizeBox* EndSizedPadding_SizeWrapper; // 0x508(0x08)
	struct UWidgetSwitcher* HeaderSwitcher; // 0x510(0x08)
	struct UButton* HitTarget; // 0x518(0x08)
	struct UOverlay* HitTarget_Overlay; // 0x520(0x08)
	struct USizeBox* HitTargetSizeWrapper; // 0x528(0x08)
	struct UOverlay* IconOverlay; // 0x530(0x08)
	struct USizeBox* IconSizeWrapper; // 0x538(0x08)
	struct UImage* PrimaryBorderBottomBegin_Image; // 0x540(0x08)
	struct UImage* PrimaryBorderBottomEnd_Image; // 0x548(0x08)
	struct UImage* PrimaryButtonImage; // 0x550(0x08)
	struct UImage* PrimaryTriangleBegin_Image; // 0x558(0x08)
	struct USizeBox* PrimaryTriangleBegin_SizeWrapper; // 0x560(0x08)
	struct UImage* PrimaryTriangleEnd_Image; // 0x568(0x08)
	struct USizeBox* PrimaryTriangleEnd_SizeWrapper; // 0x570(0x08)
	struct UOverlay* Shadow_Overlay; // 0x578(0x08)
	struct UImage* ShadowImage; // 0x580(0x08)
	struct USizeBox* ShadowSizeWrapper; // 0x588(0x08)
	struct UImage* ShadowTriangleBegin_Image; // 0x590(0x08)
	struct USizeBox* ShadowTriangleBegin_SizeWrapper; // 0x598(0x08)
	struct UImage* ShadowTriangleEnd_Image; // 0x5a0(0x08)
	struct USizeBox* ShadowTriangleEnd_SizeWrapper; // 0x5a8(0x08)
	struct USizeBox* SizeWrapper; // 0x5b0(0x08)
	struct UTextBlock* TitleText; // 0x5b8(0x08)
	struct UOverlay* TitleText_Overlay; // 0x5c0(0x08)
	struct USizeBox* TitleTextSizeWrapper; // 0x5c8(0x08)
	bool ShowDropShadow; // 0x5d0(0x01)
	bool ShowOnlyLowerDropShadow; // 0x5d1(0x01)
	bool bDisableReleaseAnim; // 0x5d2(0x01)
	bool ShowIcon; // 0x5d3(0x01)
	struct FLinearColor Idle_PrimaryColor; // 0x5d4(0x10)
	struct FLinearColor Idle_SecondaryColor; // 0x5e4(0x10)
	char UnknownData_5F4[0x4]; // 0x5f4(0x04)
	struct FText Title; // 0x5f8(0x18)
	struct FLinearColor DropshadowColor; // 0x610(0x10)
	float Width; // 0x620(0x04)
	float ShadowOffset; // 0x624(0x04)
	float Height; // 0x628(0x04)
	char UnknownData_62C[0x4]; // 0x62c(0x04)
	struct FMulticastInlineDelegate OnClicked; // 0x630(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x640(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x650(0x10)
	bool IsActive; // 0x660(0x01)
	bool IsDisabled; // 0x661(0x01)
	char UnknownData_662[0x2]; // 0x662(0x02)
	float HoverAnimationDurationMS; // 0x664(0x04)
	struct FSlateFontInfo Idle_FontInfo; // 0x668(0x50)
	struct FSlateFontInfo Hover_FontInfo; // 0x6b8(0x50)
	struct FSlateFontInfo Active_FontInfo; // 0x708(0x50)
	struct FLinearColor Hover_PrimaryColor; // 0x758(0x10)
	struct FLinearColor Active_PrimaryColor; // 0x768(0x10)
	struct FLinearColor Hover_SecondaryColor; // 0x778(0x10)
	struct FLinearColor Active_SecondaryColor; // 0x788(0x10)
	bool IsCurrentlyHovered; // 0x798(0x01)
	char UnknownData_799[0x3]; // 0x799(0x03)
	struct FLinearColor Disabled_PrimaryColor; // 0x79c(0x10)
	struct FLinearColor Disabled_SecondaryColor; // 0x7ac(0x10)
	char UnknownData_7BC[0x4]; // 0x7bc(0x04)
	struct FSlateFontInfo Disabled_FontInfo; // 0x7c0(0x50)
	struct UTexture2D* IconTexture; // 0x810(0x08)
	struct UKSButtonSoundLibrary* ButtonSound; // 0x818(0x08)

	void ApplyColors(struct FLinearColor PrimaryColor, struct FLinearColor SecondaryColor); // Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors
	void SetActive(bool Active); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive
	void SetDisabled(bool Disable); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled
	bool NavigateConfirm(); // Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm
	void SetMessage(struct FText InTitle); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage
	void SetShadowVisibility(bool Show); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility
	void SetPositions(float InOffset); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions
	void SetSizings(float InWidth, float InHeight); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings
	void SetColors(); // Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors
	void HoverStateAnimFinished(); // Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished
	void UnhoverStateAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim
	void UnhoverStateAnimFinished(); // Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished
	void PressedStateAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim
	void PressedStateAnimFinished(); // Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished
	void ReleasedStateAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim
	void ReleasedStateAnimFinished(); // Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished
	void HoverStateAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim
	void InitializeTickAnimations(); // Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations
	void PreConstruct(bool IsDesignTime); // Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct
	void Construct(); // Function WBP_ShearedButton.WBP_ShearedButton_C.Construct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void GamepadHover(); // Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover
	void ProxyClick(); // Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick
	void ProxyHover(); // Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover
	void ProxyUnhover(); // Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void ResetDisplay(); // Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_ShearedButton(int32_t EntryPoint); // Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature
};

