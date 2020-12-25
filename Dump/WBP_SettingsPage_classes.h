// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// Size: 0x524 (Inherited: 0x500)
struct UWBP_SettingsPage_C : public UKSSettingsPage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UScrollBox* PageScrollBox; // 0x508(0x08)
	struct UVerticalBox* SettingsGroupBox; // 0x510(0x08)
	float StartTranslationXAnim; // 0x518(0x04)
	float StartOpacityAnim; // 0x51c(0x04)
	float AnimPlayTime; // 0x520(0x04)

	struct UScrollBox* GetScrollBox(); // Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
	void Add Settings Section Widget(struct UKSSettingsSection* Selection Widget); // Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
	void InitializeTickAnimations(); // Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
	void HandleShowPageAnimFinished(); // Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
	void HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha); // Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
	void HandleHidePageAnimFinished(); // Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
	void HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha); // Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
	void PlayShowPageAnim(); // Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
	void PlayHidePageAnim(); // Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
	void SetInitPageState(); // Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
	void Construct(); // Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
	void AddSettingsSectionWidget(struct UKSSettingsSection* SettingsSection); // Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
	void ExecuteUbergraph_WBP_SettingsPage(int32_t EntryPoint); // Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
};

