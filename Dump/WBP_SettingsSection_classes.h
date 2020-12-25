// WidgetBlueprintGeneratedClass WBP_SettingsSection.WBP_SettingsSection_C
// Size: 0x520 (Inherited: 0x500)
struct UWBP_SettingsSection_C : public UKSSettingsSection {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UImage* Image_176; // 0x508(0x08)
	struct UVerticalBox* SectionSettings; // 0x510(0x08)
	struct UTextBlock* SettingSectionDisplayName; // 0x518(0x08)

	void Add Settings Group Widget(struct UKSSettingsGroup* Settings Group Widget); // Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
	void AddSettingsGroupWidget(struct UKSSettingsGroup* SettingsGroup); // Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
	void OnSectionConfigSet(); // Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
	void ExecuteUbergraph_WBP_SettingsSection(int32_t EntryPoint); // Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
};

