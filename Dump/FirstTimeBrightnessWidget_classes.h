// WidgetBlueprintGeneratedClass FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C
// Size: 0x4f0 (Inherited: 0x4a0)
struct UFirstTimeBrightnessWidget_C : public UPUMG_Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UImage* Decro; // 0x4a8(0x08)
	struct UOverlay* SettingsWidgetContainer; // 0x4b0(0x08)
	struct UTextBlock* Title; // 0x4b8(0x08)
	struct UWBP_StandardButtonMedium_C* WBP_StandardButtonMedium; // 0x4c0(0x08)
	struct FKSSettingsWidgetConfig SettingsWidgetConfig; // 0x4c8(0x10)
	struct UKSSettingsInfoBase* SettingsInfo; // 0x4d8(0x08)
	struct UKSSettingsWidget* SettingsWidget; // 0x4e0(0x08)
	struct UAkAudioEvent* ShowFirstTimeBrightnessSFX; // 0x4e8(0x08)

	void OnShown(); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnShown
	void OnHide(); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.OnHide
	void InitializeWidget(struct APUMG_HUD* HUD); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.InitializeWidgetNavigation
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.PreConstruct
	void ExecuteUbergraph_FirstTimeBrightnessWidget(int32_t EntryPoint); // Function FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C.ExecuteUbergraph_FirstTimeBrightnessWidget
};

