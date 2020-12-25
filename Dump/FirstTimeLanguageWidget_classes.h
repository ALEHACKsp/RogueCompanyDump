// WidgetBlueprintGeneratedClass FirstTimeLanguageWidget.FirstTimeLanguageWidget_C
// Size: 0x4f8 (Inherited: 0x4a0)
struct UFirstTimeLanguageWidget_C : public UPUMG_Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UImage* Decro; // 0x4a8(0x08)
	struct UImage* Image_159; // 0x4b0(0x08)
	struct UOverlay* SettingsWidgetContainer; // 0x4b8(0x08)
	struct UTextBlock* Title; // 0x4c0(0x08)
	struct UWBP_StandardButtonMedium_C* WBP_StandardButtonMedium; // 0x4c8(0x08)
	struct FKSSettingsWidgetConfig SettingsWidgetConfig; // 0x4d0(0x10)
	struct UKSSettingsInfoBase* SettingsInfo; // 0x4e0(0x08)
	struct UKSSettingsWidget* SettingsWidget; // 0x4e8(0x08)
	struct UAkAudioEvent* ShowFirstTimeLanguageSFX; // 0x4f0(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.InitializeWidget
	void OnShown(); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnShown
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.PreConstruct
	void HandleInputState(char InputState); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.HandleInputState
	void SaveSetting(); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.SaveSetting
	void OnHide(); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnHide
	void OnSettingSelected(); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.OnSettingSelected
	void ExecuteUbergraph_FirstTimeLanguageWidget(int32_t EntryPoint); // Function FirstTimeLanguageWidget.FirstTimeLanguageWidget_C.ExecuteUbergraph_FirstTimeLanguageWidget
};

