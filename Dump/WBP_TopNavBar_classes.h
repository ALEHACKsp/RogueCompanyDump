// WidgetBlueprintGeneratedClass WBP_TopNavBar.WBP_TopNavBar_C
// Size: 0x55c (Inherited: 0x4e0)
struct UWBP_TopNavBar_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* DisableOverlay; // 0x4e8(0x08)
	struct UImage* GamepadBumperLeftIcon; // 0x4f0(0x08)
	struct UImage* GamepadBumperRightIcon; // 0x4f8(0x08)
	struct UWidgetSwitcher* GamepadLeftBumperSwitcher; // 0x500(0x08)
	struct UWidgetSwitcher* GamepadRightBumperSwitcher; // 0x508(0x08)
	struct UWBP_TopNavButton_C* HomeNav; // 0x510(0x08)
	struct UImage* Image_89; // 0x518(0x08)
	struct UWBP_TopNavButton_C* LoadoutNav; // 0x520(0x08)
	struct UHorizontalBox* NavigationContainer; // 0x528(0x08)
	struct UWBP_TopNavButton_C* ProfileNav; // 0x530(0x08)
	struct UWBP_TopNavButton_C* StoreNav; // 0x538(0x08)
	struct UOverlay* TopBarContainer; // 0x540(0x08)
	bool IsDisable; // 0x548(0x01)
	char UnknownData_549[0x3]; // 0x549(0x03)
	struct FName HideAnimName; // 0x54c(0x08)
	struct FName ShowAnimName; // 0x554(0x08)

	void OnHasNewStoreItems(bool HasNew); // Function WBP_TopNavBar.WBP_TopNavBar_C.OnHasNewStoreItems
	void HandleViewRouteChanged(struct FName CurrentRoute, struct FName NextRoute, enum class EViewManagerLayer Layer); // Function WBP_TopNavBar.WBP_TopNavBar_C.HandleViewRouteChanged
	void HandleInputStateChanged(char InputState); // Function WBP_TopNavBar.WBP_TopNavBar_C.HandleInputStateChanged
	void HandleNavRight(); // Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavRight
	void HandleNavLeft(); // Function WBP_TopNavBar.WBP_TopNavBar_C.HandleNavLeft
	void InitializeNavButtons(); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeNavButtons
	void SetupGamepadIcon(); // Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadIcon
	void SetupGamepadCallout(); // Function WBP_TopNavBar.WBP_TopNavBar_C.SetupGamepadCallout
	void InitializeTickAnimations(); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeTickAnimations
	void ShowTopBarFinished(); // Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarFinished
	void ShowTopBarAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_TopNavBar.WBP_TopNavBar_C.ShowTopBarAnim
	void InitHideAnimation(); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitHideAnimation
	void HideTopBarFinished(); // Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarFinished
	void HideTopBarAnim(float ElapsedTime, float ElapsedAlpha); // Function WBP_TopNavBar.WBP_TopNavBar_C.HideTopBarAnim
	void StartHideAnim(); // Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideAnim
	void StartShowAnim(); // Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowAnim
	void DisableTopBar(bool IsDisable); // Function WBP_TopNavBar.WBP_TopNavBar_C.DisableTopBar
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidget
	void InitializeWidgetButtonListeners(); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetButtonListeners
	void Construct(); // Function WBP_TopNavBar.WBP_TopNavBar_C.Construct
	void InitializeWidgetNavigation(); // Function WBP_TopNavBar.WBP_TopNavBar_C.InitializeWidgetNavigation
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_TopNavBar.WBP_TopNavBar_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_TopNavBar.WBP_TopNavBar_C.StartHideSequence
	void ExecuteUbergraph_WBP_TopNavBar(int32_t EntryPoint); // Function WBP_TopNavBar.WBP_TopNavBar_C.ExecuteUbergraph_WBP_TopNavBar
};

