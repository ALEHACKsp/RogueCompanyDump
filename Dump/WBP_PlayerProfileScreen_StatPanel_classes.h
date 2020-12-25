// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C
// Size: 0x551 (Inherited: 0x4e0)
struct UWBP_PlayerProfileScreen_StatPanel_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Image_187; // 0x4e8(0x08)
	struct UWBP_ThrobberHorizontal_C* Loading; // 0x4f0(0x08)
	struct UVerticalBox* LoadingWrapper; // 0x4f8(0x08)
	struct UVerticalBox* PanelContent; // 0x500(0x08)
	struct UWBP_PlayerProfileScreen_StatEntry_C* Stat1; // 0x508(0x08)
	struct UWBP_PlayerProfileScreen_StatEntry_C* Stat2; // 0x510(0x08)
	struct UWBP_PlayerProfileScreen_StatEntry_C* Stat3; // 0x518(0x08)
	struct UWBP_PlayerProfileScreen_StatEntry_C* Stat4; // 0x520(0x08)
	struct UTextBlock* Title; // 0x528(0x08)
	struct UVerticalBox* TitleWrapper; // 0x530(0x08)
	struct UWBP_PanelButton_C* WBP_PanelButton; // 0x538(0x08)
	struct UWBP_PlayerProfileScreen_AccountLevel_C* WBP_PlayerProfileScreen_AccountLevel; // 0x540(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_3; // 0x548(0x08)
	bool IsDisabled; // 0x550(0x01)

	void SetDisableState(bool IsDisabled); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState
	bool NavigateConfirm(); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm
	void RefreshStats(); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct
	void Construct(); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct
	void GamepadHover(); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover
	void OnActivityInstanceChanged(bool IsLoaded); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged
	void ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel(int32_t EntryPoint); // Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel
};

