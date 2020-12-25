// WidgetBlueprintGeneratedClass WBP_CustomizeAvatar.WBP_CustomizeAvatar_C
// Size: 0x580 (Inherited: 0x4e0)
struct UWBP_CustomizeAvatar_C : public UKSPlayerCosmeticWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UKSSortableGridPanel* ItemContainer; // 0x4f0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x4f8(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar; // 0x500(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_2; // 0x508(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_3; // 0x510(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_4; // 0x518(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_5; // 0x520(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_6; // 0x528(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_7; // 0x530(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_8; // 0x538(0x08)
	struct UWBP_CosmeticItem_Avatar_C* WBP_CosmeticItem_Avatar_9; // 0x540(0x08)
	struct UWBP_PlayerIDCustomize_C* WBP_PlayerIDCustomize; // 0x548(0x08)
	struct TArray<struct UWBP_CosmeticItem_Avatar_C*> AvatarItems; // 0x550(0x10)
	struct UWBP_CosmeticItem_Avatar_C* EquippedAvatar; // 0x560(0x08)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x568(0x08)
	struct UKSItem* HoveredItem; // 0x570(0x08)
	int32_t VisibleGridRows; // 0x578(0x04)
	int32_t VisibleGridColumns; // 0x57c(0x04)

	bool OnSortRarityDescNameAsc(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnSortRarityDescNameAsc
	bool NavigateBack(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.NavigateBack
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnKeyDown
	void AddEmptySlots(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.AddEmptySlots
	void SetActiveStates(struct UWBP_CosmeticItem_Avatar_C* ActiveWidget); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetActiveStates
	void RegisterNavigation(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.RegisterNavigation
	void IsAvatarItemEquipped(struct UKSItem* KSItem, bool IsEquipped); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.IsAvatarItemEquipped
	void ResetAvatarSelection(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ResetAvatarSelection
	void SetContextBar(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetContextBar
	void SetAvatarSelection(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.SetAvatarSelection
	void OnShown(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnShown
	void OnBackPrompt(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidgetNavigation
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.InitializeWidget
	void OnAvatarHover(struct UKSItem* KSItem); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarHover
	void OnAvatarUnhover(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarUnhover
	void OnAvatarSelected(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarSelected
	void OnAvatarGamepadHover(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnAvatarGamepadHover
	void OnHide(); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.OnHide
	void ExecuteUbergraph_WBP_CustomizeAvatar(int32_t EntryPoint); // Function WBP_CustomizeAvatar.WBP_CustomizeAvatar_C.ExecuteUbergraph_WBP_CustomizeAvatar
};

