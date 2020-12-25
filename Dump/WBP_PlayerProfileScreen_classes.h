// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C
// Size: 0x528 (Inherited: 0x4e0)
struct UWBP_PlayerProfileScreen_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UImage* Bg; // 0x4f0(0x08)
	struct UMultiLineEditableTextBox* MultiLineEditableTextBox_64; // 0x4f8(0x08)
	struct UTextBlock* PlayerIdDisplay; // 0x500(0x08)
	struct UKSAsyncImage* PortalIcon; // 0x508(0x08)
	struct UWBP_PlayerProfileScreen_AccountPanel_C* WBP_PlayerProfileScreen_AccountPanel; // 0x510(0x08)
	struct UWBP_PlayerProfileScreen_AwardPanel_C* WBP_PlayerProfileScreen_AwardPanel; // 0x518(0x08)
	struct UWBP_PlayerProfileScreen_StatPanel_C* WBP_PlayerProfileScreen_StatPanel; // 0x520(0x08)

	void GetPlatformIcon(bool Success, struct UTexture2D* Icon); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon
	void SetPlayerHint(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint
	void ClearPlayerHint(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint
	bool NavigateBack(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack
	void Construct(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct
	void OnShown(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget
	void AwardButtonClicked(struct UWidget* Widget); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked
	void StatsButtonClicked(struct UWidget* Widget); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked
	void CustomizeButtonClicked(struct UWidget* Widget); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked
	void InitializeWidgetNavigation(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation
	void OnBackPrompt(); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt
	void HandleLoginStateChange(enum class EPUMG_LoginState LoginState); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange
	void ExecuteUbergraph_WBP_PlayerProfileScreen(int32_t EntryPoint); // Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen
};

