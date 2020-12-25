// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
// Size: 0x520 (Inherited: 0x4e0)
struct UWBP_Player_Card_Social_Entry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_Social_Accordian_Header_C* Header; // 0x4e8(0x08)
	struct UWidgetSwitcher* MainSwitcher; // 0x4f0(0x08)
	struct UWBP_player_card_module_C* PlayerCard; // 0x4f8(0x08)
	struct USizeBox* PlayerCardContainer; // 0x500(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x508(0x10)
	struct UKSDataSocialPlayer* CurrentData; // 0x518(0x08)

	void SetCurrentInfoContainer(struct UObject* InfoContainer); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer
	void UpdatePlayerCard(struct UKSPlayerInfo* playerinfo); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdatePlayerCard
	void SetHoverState(bool IsHovered); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState
	void GetDisplayItem(struct UKSWidget* ActiveDisplayItem); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem
	void UpdateDataItem(struct UObject* Data); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged
	void BP_OnEntryReleased(); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnEntryReleased
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UninitializeWidget
	void OnHeaderClicked(struct UUserWidget* Widget); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked
	void OnPlayerClicked(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave
	void OnShown(); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnShown
	void HandlePlayerContainerUpdate(struct UKSPlayerInfo* playerinfo); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.HandlePlayerContainerUpdate
	void ExecuteUbergraph_WBP_Player_Card_Social_Entry(int32_t EntryPoint); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry
	void OnClicked__DelegateSignature(struct UUserWidget* Item); // Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature
};

