// WidgetBlueprintGeneratedClass WBP_SettingsDropdown.WBP_SettingsDropdown_C
// Size: 0x548 (Inherited: 0x538)
struct UWBP_SettingsDropdown_C : public UKSSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UDropdown_C* Dropdown; // 0x540(0x08)

	void SetPreviewIndex(int32_t Index, bool Success); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetPreviewIndex
	bool NavigateBack(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
	bool NavigateConfirmPressed(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
	bool NavigateConfirm(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
	void SetDesiredIndex(int32_t Index, bool Success); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
	void GetDirtyIndex(int32_t Index); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
	void Set Text To Index(int32_t Index); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
	void OnWidgetSettingsInfoSet(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
	void Selection Made(struct FText Text, int32_t Index); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
	void GamepadHover(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
	void InitializeWidgetNavigation(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
	void OnSettingsInfoValueChanged(bool bChangedExternally); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnSettingsInfoValueChanged
	void HoverPreview(int32_t Index); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.HoverPreview
	void SelectionCanceled(); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SelectionCanceled
	void ExecuteUbergraph_WBP_SettingsDropdown(int32_t EntryPoint); // Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
};

