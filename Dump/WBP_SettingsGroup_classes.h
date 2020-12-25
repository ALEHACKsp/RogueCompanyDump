// WidgetBlueprintGeneratedClass WBP_SettingsGroup.WBP_SettingsGroup_C
// Size: 0x530 (Inherited: 0x510)
struct UWBP_SettingsGroup_C : public UKSSettingsGroup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UVerticalBox* MainSettingBox; // 0x518(0x08)
	struct UVerticalBox* SubSettingsBox; // 0x520(0x08)
	struct UHorizontalBox* SubSettingsContainer; // 0x528(0x08)

	void Add Sub Settings Widget(struct UKSSettingsContainer* Settings Container); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
	void Add Main Settings Widget(struct UKSSettingsContainer* Settings Container); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
	void AddSettingsWidget(struct UKSSettingsContainer* Settings Container, struct UVerticalBox* Vertical Box); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
	void AddSubSettingsContainerWidget(struct UKSSettingsContainer* SettingsContainer); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
	void AddMainSettingsContainerWidget(struct UKSSettingsContainer* SettingsContainer); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
	void ExecuteUbergraph_WBP_SettingsGroup(int32_t EntryPoint); // Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
};

