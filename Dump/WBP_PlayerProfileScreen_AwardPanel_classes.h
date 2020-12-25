// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C
// Size: 0x559 (Inherited: 0x4e0)
struct UWBP_PlayerProfileScreen_AwardPanel_C : public UKSPlayerAwardsPanelWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_PlayerProfileScreen_AwardEntry_C* AwardEntry1; // 0x4e8(0x08)
	struct UWBP_PlayerProfileScreen_AwardEntry_C* AwardEntry2; // 0x4f0(0x08)
	struct UWBP_PlayerProfileScreen_AwardEntry_C* AwardEntry3; // 0x4f8(0x08)
	struct UWBP_PlayerProfileScreen_AwardEntry_C* AwardEntry4; // 0x500(0x08)
	struct UVerticalBox* ContentBox; // 0x508(0x08)
	struct UWBP_ThrobberHorizontal_C* Loading; // 0x510(0x08)
	struct UVerticalBox* LoadingWrapper; // 0x518(0x08)
	struct UImage* LockIcon; // 0x520(0x08)
	struct UVerticalBox* PanelContent; // 0x528(0x08)
	struct UTextBlock* Title; // 0x530(0x08)
	struct UVerticalBox* TitleWrapper; // 0x538(0x08)
	struct UTextBlock* TxtNoRecentProgress; // 0x540(0x08)
	struct UWBP_PanelButton_C* WBP_PanelButton; // 0x548(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x550(0x08)
	bool IsDisabled; // 0x558(0x01)

	void SetDisableState(bool IsDisable); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.SetDisableState
	bool NavigateConfirm(); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.NavigateConfirm
	void RefreshAwards(); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.RefreshAwards
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.PreConstruct
	void Construct(); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.Construct
	void GamepadHover(); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.GamepadUnhover
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel(int32_t EntryPoint); // Function WBP_PlayerProfileScreen_AwardPanel.WBP_PlayerProfileScreen_AwardPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardPanel
};

