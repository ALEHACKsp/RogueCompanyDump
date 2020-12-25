// WidgetBlueprintGeneratedClass WBP_SettingsCarousel.WBP_SettingsCarousel_C
// Size: 0x5c0 (Inherited: 0x538)
struct UWBP_SettingsCarousel_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Right_Hover; // 0x540(0x08)
	struct UWidgetAnimation* Left_Hover; // 0x548(0x08)
	struct UWidgetAnimation* Button_Text_Anim_Reset; // 0x550(0x08)
	struct UWidgetAnimation* Left_Button_Text_Anim; // 0x558(0x08)
	struct UWidgetAnimation* Right_Button_Text_Anim; // 0x560(0x08)
	struct UWidgetAnimation* Hover; // 0x568(0x08)
	struct UTextBlock* AnimatedTextBlock; // 0x570(0x08)
	struct UButton* Carousel_Button; // 0x578(0x08)
	struct UTextBlock* DisplayTextBlock; // 0x580(0x08)
	struct UButton* Left_Button; // 0x588(0x08)
	struct UHorizontalBox* LightInicationBox; // 0x590(0x08)
	struct UButton* Right_Button; // 0x598(0x08)
	struct TArray<struct UWBP_SettingsCarousel_Light_Indicator_C*> Indicator Lights; // 0x5a0(0x10)
	struct UAkAudioEvent* HoverSettingsCarouselSFX; // 0x5b0(0x08)
	struct UAkAudioEvent* ClickSettingsCarouselSFX; // 0x5b8(0x08)

	void Make Indicator Lights(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights
	void Add Indicator Light(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light
	void SetAnimationTextToIndex(int32_t Index); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex
	void SetDisplayTextToIndex(int32_t Index); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex
	void GetDirtyIndex(int32_t Index); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex
	void SetDesiredIndex(int32_t Desired Index, bool Index Changed); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex
	void SetTextToIndex(struct UTextBlock* Text Widget, int32_t Index); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex
	void SettingsCarouselHoverSFX(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX
	void SettingsCarouselClickedSFX(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX
	void GamepadHover(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover
	void GamepadUnhover(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void Master Hover(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover
	void Master Unhover(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet
	void OnWidgetConfigSet(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void Reset Text(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text
	void Reset Indicator Light(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light
	void Reset(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset
	void NavigateRightFailure(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure
	void NavigateLeftFailure(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure
	void Reset Indicator Lights(); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights
	void OnSettingsInfoValueChanged(bool bChangedExternally); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnSettingsInfoValueChanged
	void ExecuteUbergraph_WBP_SettingsCarousel(int32_t EntryPoint); // Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel
};

