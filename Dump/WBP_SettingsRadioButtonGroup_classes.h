// WidgetBlueprintGeneratedClass WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C
// Size: 0x560 (Inherited: 0x538)
struct UWBP_SettingsRadioButtonGroup_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UHorizontalBox* RadioButtonBox; // 0x540(0x08)
	struct UWBP_SettingsRadio_C* Settings Radio Button; // 0x548(0x08)
	struct TArray<struct UWBP_SettingsRadio_C*> Radio Buttons; // 0x550(0x10)

	bool NavigateBack(); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack
	void Set Selection To Index(int32_t Index); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index
	void Get Dirty Index(int32_t Index); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index
	void Set Desired Index(int32_t Index, bool Success); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet
	void On Radio Button Clicked(struct UWBP_SettingsRadio_C* Radio Button); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked
	void On Setting Value Changed(bool bChangedExternally); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed
	void GamepadHover(); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover
	void InitializeWidgetNavigation(); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure
	void ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int32_t EntryPoint); // Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup
};

