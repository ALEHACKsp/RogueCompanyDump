// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C
// Size: 0x561 (Inherited: 0x4e0)
struct UWBP_PlayerStatus_ContextMenu_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UTextBlock* OnlineStatus; // 0x4f0(0x08)
	struct UImage* OptionsBg; // 0x4f8(0x08)
	struct UVerticalBox* OptionsContainer; // 0x500(0x08)
	struct USizeBox* OuterMenuContainer; // 0x508(0x08)
	struct FMulticastInlineDelegate OnReadyNavigation; // 0x510(0x10)
	struct FMulticastInlineDelegate OnMenuHidden; // 0x520(0x10)
	struct FMulticastInlineDelegate OnMenuStart; // 0x530(0x10)
	struct UKSPlayerInfo* LocalPlayerInfo; // 0x540(0x08)
	struct UDataTable* StatusColors; // 0x548(0x08)
	struct TArray<struct UWBP_PlayerStatus_ContextMenuOption_C*> OptionButtons; // 0x550(0x10)
	bool IsOpen; // 0x560(0x01)

	void GetStatusColor(enum class EKSPlayerOnlineStatus PlayerStatus, struct FSlateColor StatusColor); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
	void UpdatePlayerStatus(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
	void HideContextMenu(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
	void ShowContextMenu(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
	void HandleOptionSelected(char EPlayerStatus); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
	void SetupOptionButton(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget
	void Construct(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct
	void SetPlayerInfo(struct UKSPlayerInfo* playerinfo); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
	void DetermineToggleState(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenu(int32_t EntryPoint); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
	void OnMenuStart__DelegateSignature(struct UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
	void OnReadyNavigation__DelegateSignature(struct TArray<struct UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
	void OnMenuHidden__DelegateSignature(); // Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature
};

