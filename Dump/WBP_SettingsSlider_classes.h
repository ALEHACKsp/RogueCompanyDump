// WidgetBlueprintGeneratedClass WBP_SettingsSlider.WBP_SettingsSlider_C
// Size: 0x584 (Inherited: 0x538)
struct UWBP_SettingsSlider_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWidgetAnimation* Hover; // 0x540(0x08)
	struct UTextBlock* DisplayText; // 0x548(0x08)
	struct UButton* HoverButton; // 0x550(0x08)
	struct UImage* hoverstroke; // 0x558(0x08)
	struct USlider* SettingsSlider; // 0x560(0x08)
	struct UProgressBar* SliderBar; // 0x568(0x08)
	bool bIsHovered; // 0x570(0x01)
	char UnknownData_571[0x3]; // 0x571(0x03)
	float CurrentAcceleration; // 0x574(0x04)
	float MaxAcceleration; // 0x578(0x04)
	float MinAcceleration; // 0x57c(0x04)
	float LinearAccelerationCoeff; // 0x580(0x04)

	void IsSliderKey(struct FKey InKey, bool IsKey); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey
	void ResetCurrentAcceleration(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration
	void IncreaseCurrentAcceleration(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown
	void Step Left(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
	void Step(float Multiplier); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
	void Step Right(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
	void Set Display Text(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
	void Set Desired Value(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
	void Position Slider To Value(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
	void Slider To Value(float Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
	void GetMaxSliderValue(float Max Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
	void GetMinSliderValue(float Min Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
	void Value To Slider(float Slider Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
	void Get Dirty Value(float Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
	void Construct(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
	void GamepadHover(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
	void GamepadUnhover(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
	void NavigateLeftFailure(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
	void NavigateRightFailure(); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
	void OnSettingsInfoValueChanged(bool bChangedExternally); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged
	void ExecuteUbergraph_WBP_SettingsSlider(int32_t EntryPoint); // Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
};

