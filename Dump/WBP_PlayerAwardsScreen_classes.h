// WidgetBlueprintGeneratedClass WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C
// Size: 0x514 (Inherited: 0x4e0)
struct UWBP_PlayerAwardsScreen_C : public UKSPlayerAwardsPanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UImage* Bg; // 0x4f0(0x08)
	struct UKSSortableGridPanel* GrdAwardEntries; // 0x4f8(0x08)
	struct UScrollBox* SclAwardEntries; // 0x500(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x508(0x08)
	float ScrollSpeed; // 0x510(0x04)

	bool NavigateBack(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
	void GoBack(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
	void RegisterScrollingInput(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
	void TickScrolling(float DeltaTime); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
	void ScrollReleased(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
	void ScrollDownPressed(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
	void ScrollUpPressed(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
	bool CompareChildren(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
	void Construct(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
	void OnShown(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
	void InitializeWidgetButtonListeners(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
	void OnBackPrompt(); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
	void ExecuteUbergraph_WBP_PlayerAwardsScreen(int32_t EntryPoint); // Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
};

