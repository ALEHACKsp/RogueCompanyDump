// WidgetBlueprintGeneratedClass WBP_CustomizeBorder.WBP_CustomizeBorder_C
// Size: 0x578 (Inherited: 0x4e0)
struct UWBP_CustomizeBorder_C : public UKSPlayerCosmeticWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UKSSortableGridPanel* ItemContainer; // 0x4f0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x4f8(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border; // 0x500(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_2; // 0x508(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_3; // 0x510(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_4; // 0x518(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_5; // 0x520(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_6; // 0x528(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_7; // 0x530(0x08)
	struct UWBP_CosmeticItem_Border_C* WBP_CosmeticItem_Border_8; // 0x538(0x08)
	struct UWBP_PlayerIDCustomize_C* WBP_PlayerIDCustomize; // 0x540(0x08)
	struct TArray<struct UWBP_CosmeticItem_Border_C*> BorderItems; // 0x548(0x10)
	struct UWBP_CosmeticItem_Border_C* EquippedBorder; // 0x558(0x08)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x560(0x08)
	struct UKSItem* HoveredItem; // 0x568(0x08)
	int32_t VisibleGridRows; // 0x570(0x04)
	int32_t VisibleGridColumns; // 0x574(0x04)

	bool OnSortRarityDescNameAsc(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnSortRarityDescNameAsc
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnKeyDown
	bool NavigateBack(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.NavigateBack
	void AddEmptySlots(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.AddEmptySlots
	void SetActiveStates(struct UWBP_CosmeticItem_Border_C* ActiveWidget); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetActiveStates
	void RegisterNavigation(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.RegisterNavigation
	void IsBorderItemEquipped(struct UKSItem* KSItem, bool IsEquipped); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.IsBorderItemEquipped
	void ResetBorderSelection(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ResetBorderSelection
	void SetContextBar(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetContextBar
	void SetBorderSelection(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.SetBorderSelection
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnShown
	void OnHide(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnHide
	void OnBackPrompt(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBackPrompt
	void OnBorderHover(struct UKSItem* KSItem); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderHover
	void OnBorderUnhover(); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderUnhover
	void OnBorderSelected(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderSelected
	void OnBorderGamepadHover(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.OnBorderGamepadHover
	void ExecuteUbergraph_WBP_CustomizeBorder(int32_t EntryPoint); // Function WBP_CustomizeBorder.WBP_CustomizeBorder_C.ExecuteUbergraph_WBP_CustomizeBorder
};

