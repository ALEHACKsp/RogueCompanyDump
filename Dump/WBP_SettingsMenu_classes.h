// WidgetBlueprintGeneratedClass WBP_SettingsMenu.WBP_SettingsMenu_C
// Size: 0x600 (Inherited: 0x508)
struct UWBP_SettingsMenu_C : public UKSSettingsMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UWidgetAnimation* BackHovered; // 0x510(0x08)
	struct UWidgetAnimation* RevertHovered; // 0x518(0x08)
	struct UWidgetAnimation* ApplyHovered; // 0x520(0x08)
	struct UHorizontalBox* NavTabBox; // 0x528(0x08)
	struct UOverlay* PreviewContainer; // 0x530(0x08)
	struct UTextBlock* SettingsDescription; // 0x538(0x08)
	struct UWidgetSwitcher* SettingsPageWidgetSwitcher; // 0x540(0x08)
	struct UTextBlock* SettingsTitle; // 0x548(0x08)
	struct UImage* TabLeftImage; // 0x550(0x08)
	struct UImage* TabRightImage; // 0x558(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel; // 0x560(0x08)
	struct TArray<struct UWBP_subscreen_nav_tab_C*> WBP_subscreen_nav_tabs; // 0x568(0x10)
	struct TArray<struct UPUMG_Widget*> TopWidgets; // 0x578(0x10)
	struct TArray<struct UPUMG_Widget*> BottomWidgets; // 0x588(0x10)
	enum class EPUMG_LoginState Login State; // 0x598(0x01)
	char UnknownData_599[0x3]; // 0x599(0x03)
	struct FName TAB_LEFT_NAME; // 0x59c(0x08)
	struct FName TAB_RIGHT_NAME; // 0x5a4(0x08)
	struct FName APPLY_NAME; // 0x5ac(0x08)
	struct FName RESTORE_NAME; // 0x5b4(0x08)
	char UnknownData_5BC[0x4]; // 0x5bc(0x04)
	struct TArray<struct UKSSettingsPage*> WBP_SubScreens; // 0x5c0(0x10)
	struct FName ESC_NAME; // 0x5d0(0x08)
	struct UAkAudioEvent* BackSettingsMenuSFX; // 0x5d8(0x08)
	struct UAkAudioEvent* RevertSettingsMenuSFX; // 0x5e0(0x08)
	struct UAkAudioEvent* ApplySettingsMenuSFX; // 0x5e8(0x08)
	struct TArray<struct UKSWidget*> PreviewWidgets; // 0x5f0(0x10)

	void ResetPreviewWidgets(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPreviewWidgets
	void HandlePreviewHovered(struct UKSWidget* PreviewWidget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.HandlePreviewHovered
	void AddPreviewToSettingMenu(struct UKSWidget* PreviewWidget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddPreviewToSettingMenu
	void SetupPreviewWidgets(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupPreviewWidgets
	void On Tab Clicked(struct UWBP_subscreen_nav_tab_C* Tab Selected); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
	void ResetPageState(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
	void GetContainerWidgetForPUMGWidgetOnPage(struct UKSSettingsPage* Page, struct UPUMG_Widget* PUMG_Widget, struct UKSSettingsContainer* KSSettingsContainerWidget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
	void On Widget Mouse Entered(struct UPUMG_Widget* PUMG_Widget, bool bEntered); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
	void Setup Hover Handling(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
	void GetSettingsContainersForPage(struct UKSSettingsPage* SettingsPage, struct TArray<struct UKSSettingsContainer*> SettingsContainers, struct TArray<struct UPUMG_Widget*> SettingsContainersAsPUMG); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
	void GetSettingsWidgetForPUMGWidgetOnPage(struct UKSSettingsPage* Page, struct UPUMG_Widget* PUMG_Widget, struct UKSSettingsWidget* KSSettingsWidget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
	void Get Current Page(struct UKSSettingsPage* KSSettingsPage); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
	void Assign Tab Icons(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icons
	void Assign Tab Icon(struct UImage* Icon, struct FName Action Name); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icon
	void On Input State Changed(char Input State); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
	void Setup Input State Handling(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
	void Setup Login Handling(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
	void Handle Login State(enum class EPUMG_LoginState Login State); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
	void Tab Right(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
	void Tab Left(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
	void Go To Active Tab(bool bInstantSwitch); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
	void Recover From Navigate Failure(struct UPUMG_Widget* PUMG_Widget, int32_t Index Offset); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
	void Widget Navigate Down Failure(int32_t Focus Group, struct UPUMG_Widget* PUMG_Widget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
	void Widget Navigate Up Failure(int32_t Focus Group, struct UPUMG_Widget* PUMG_Widget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
	void On Widget Gamepad Hovered(struct UPUMG_Widget* PUMG_Widget, bool bHovered); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
	void Scroll Widget Into View(struct UPUMG_Widget* PUMG_Widget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
	void Scroll To Start(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
	void Scroll To End(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
	void GoBack(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
	void Revert Settings(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Revert Settings
	void ConfirmExit(bool ShouldSaveSettings); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
	void Restore Settings(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
	void ExitSettingsPage(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
	void HasAnyUnsavedSetting(bool AnyUnsaved); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
	void Save Settings(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
	bool NavigateBackPressed(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
	bool NavigateBack(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
	void GetSettingsWidgetsForPage(struct UKSSettingsPage* SettingsPage, struct TArray<struct UKSSettingsWidget*> SettingsWidgets, struct TArray<struct UPUMG_Widget*> SettingsWidgetsAsPUMG); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
	void SetupNavigationForPage(struct UKSSettingsPage* Page, int32_t Index); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
	void On Tab Selected(struct UWBP_subscreen_nav_tab_C* Tab Selected, bool bInstantSwitch); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
	void Add Tab For Settings Page(struct UKSSettingsPage* Settings Page Widget); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
	void Add Settings Page Widget(struct UKSSettingsPage* Settings Page); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
	void SettingsMenuApplyClickSFX(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
	void SettingsMenuBackClickSFX(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
	void SettingsMenuRevertButtonClickSFX(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
	void AddSettingsPageWidget(struct UKSSettingsPage* SettingsPage); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
	void OnShown(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
	void OnHide(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
	void OnMenuConfigSet(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
	void RebuildNavigation(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
	void OnBackButton(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
	void OnApplyButton(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
	void OnRevertButton(); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
	void OnConfirmExit(bool ShouldSaveSettings); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
	void PreConstruct(bool IsDesignTime); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
	void ExecuteUbergraph_WBP_SettingsMenu(int32_t EntryPoint); // Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
};

