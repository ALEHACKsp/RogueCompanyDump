// WidgetBlueprintGeneratedClass WBP_NavBar.WBP_NavBar_C
// Size: 0x548 (Inherited: 0x4e0)
struct UWBP_NavBar_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* DisableOverlay; // 0x4e8(0x08)
	struct UOverlay* GamepadBumperLeft; // 0x4f0(0x08)
	struct UOverlay* GamepadBumperRight; // 0x4f8(0x08)
	struct UTextBlock* LeftBumperCallout; // 0x500(0x08)
	struct UHorizontalBox* NavigationContainer; // 0x508(0x08)
	struct UTextBlock* RightBumperCallout; // 0x510(0x08)
	struct UOverlay* TopBarContainer; // 0x518(0x08)
	struct FMulticastInlineDelegate OnButtonSelected; // 0x520(0x10)
	bool NextIsTarget; // 0x530(0x01)
	char UnknownData_531[0x7]; // 0x531(0x07)
	struct FMulticastInlineDelegate OnButtonsCreated; // 0x538(0x10)

	void HandleInput(struct FKey InKey, bool Handled); // Function WBP_NavBar.WBP_NavBar_C.HandleInput
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
	void SetButtonIndexActive(int32_t ButtonIndex); // Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
	void HandleNavRight(); // Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
	void HandleNavLeft(); // Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
	void HandleInputStateChanged(char InputState); // Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
	void SetupGamepadCallouts(); // Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
	void SetNavButtons(struct TArray<struct FNavButtonData> Buttons); // Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
	void Construct(); // Function WBP_NavBar.WBP_NavBar_C.Construct
	void OnButtonClicked(struct UKSWidget* ButtonClicked); // Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
	void ExecuteUbergraph_WBP_NavBar(int32_t EntryPoint); // Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
	void OnButtonsCreated__DelegateSignature(); // Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
	void OnButtonSelected__DelegateSignature(int32_t ButtonIndex); // Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
};

