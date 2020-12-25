// WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C
// Size: 0x5e0 (Inherited: 0x538)
struct UWBP_SettingsBinding_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UWBP_InputKeySelector_C* WBP_InputKeySelector_Gamepad; // 0x540(0x08)
	struct UWBP_InputKeySelector_C* WBP_InputKeySelector_Primary; // 0x548(0x08)
	struct UWBP_InputKeySelector_C* WBP_InputKeySelector_Secondary; // 0x550(0x08)
	struct FInputChord CachedPrimaryBinding; // 0x558(0x20)
	struct FInputChord CachedSecondaryBinding; // 0x578(0x20)
	struct FInputChord CachedGamepadBinding; // 0x598(0x20)
	bool bCachedGamepadEnabled; // 0x5b8(0x01)
	bool bCachedPrimaryEnabled; // 0x5b9(0x01)
	bool bCachedSecondaryEnabled; // 0x5ba(0x01)
	char UnknownData_5BB[0x1]; // 0x5bb(0x01)
	float TimeToWaitForCombo; // 0x5bc(0x04)
	struct FKey Pending Gamepad Key; // 0x5c0(0x18)
	struct FTimerHandle Combo Key Timer Handle; // 0x5d8(0x08)

	void Set Desired Gamepad Combo(struct FKey Gamepad Key, struct FKey Combo Key, bool Dirtied); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo
	void Get Dirty Combo Key(struct FKey Key, enum class EKSInputActionType Type); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key
	void OnInputStateChanged(char Input State); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged
	bool CanGamepadNavigate(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate
	void DisableUnbindableKeybinds(struct UKSSettingsInfo_Binding* Binding Settings Info); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds
	bool NavigateBack(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack
	void Set Desired Gamepad Key(struct FKey Key, bool Dirtied); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key
	void Set Desired Secondary Key(struct FKey Key, bool Dirtied); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key
	void Set Desired Primary Key(struct FKey Key, bool Dirtied); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key
	void Get Dirty Gamepad Key(struct FKey Key, enum class EKSInputActionType Type); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key
	void Get Dirty Secondary Key(struct FKey Key, enum class EKSInputActionType Type); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key
	void Get Dirty Primary Key(struct FKey Key, enum class EKSInputActionType Type); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key
	void SetKeysForBindingDisplays(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays
	void SetKeyForGamepadBindingDisplay(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay
	void SetKeyForSecondaryBindingDisplay(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay
	void SetKeyForPrimaryBindingDisplay(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet
	void GamepadHover(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover
	void GamepadUnhover(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover
	void InitializeWidgetNavigation(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(struct FInputChord Selected Key); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(struct FInputChord Selected Key); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(struct FInputChord Selected Key); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget
	void StopCapturingCombo(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo
	void StartCapturingCombo(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo
	void Combo Succeed(struct FInputChord Combo Key); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed
	void Combo Failed(); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached
	void OnSettingsInfoValueChanged(bool bChangedExternally); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnSettingsInfoValueChanged
	void ExecuteUbergraph_WBP_SettingsBinding(int32_t EntryPoint); // Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding
};

