// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C
// Size: 0x519 (Inherited: 0x4e0)
struct UWBP_PlayerProfileScreen_AccountPanel_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* ComingSoon; // 0x4e8(0x08)
	struct UVerticalBox* ContentBox; // 0x4f0(0x08)
	struct UImage* LockIcon; // 0x4f8(0x08)
	struct UTextBlock* Title; // 0x500(0x08)
	struct UWBP_PanelButton_C* WBP_PanelButton; // 0x508(0x08)
	struct UWBP_PlayerIdentity_Full_C* WBP_PlayerIdentity_Full; // 0x510(0x08)
	bool IsDisabled; // 0x518(0x01)

	bool NavigateConfirm(); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm
	void RefreshPlayer(struct UPUMG_PlayerInfo* playerinfo); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct
	void Construct(); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget
	void GamepadHover(); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover
	void Update Player Identity(); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Update Player Identity
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel(int32_t EntryPoint); // Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel
};

