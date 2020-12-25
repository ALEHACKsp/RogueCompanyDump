// WidgetBlueprintGeneratedClass WBP_CustomizeTitle.WBP_CustomizeTitle_C
// Size: 0x598 (Inherited: 0x4e0)
struct UWBP_CustomizeTitle_C : public UKSPlayerCosmeticWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UKSSortableGridPanel* ItemContainer; // 0x4f0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x4f8(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_1; // 0x500(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_2; // 0x508(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_3; // 0x510(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_4; // 0x518(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_5; // 0x520(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_6; // 0x528(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_7; // 0x530(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_8; // 0x538(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_9; // 0x540(0x08)
	struct UWBP_CosmeticItem_Title_C* WBP_CosmeticItem_Title_C_10; // 0x548(0x08)
	struct UWBP_PlayerIDCustomize_C* WBP_PlayerIDCustomize; // 0x550(0x08)
	struct FMargin EntryPadding; // 0x558(0x10)
	struct TArray<struct UWBP_CosmeticItem_Title_C*> TitleItems; // 0x568(0x10)
	struct UWBP_CosmeticItem_Title_C* EquippedTitle; // 0x578(0x08)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x580(0x08)
	struct UKSItem* HoveredItem; // 0x588(0x08)
	int32_t VisibleGridRows; // 0x590(0x04)
	int32_t VisibleGridColumns; // 0x594(0x04)

	bool OnSortRarityDescTextAsc(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnSortRarityDescTextAsc
	void AddEmptySlots(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.AddEmptySlots
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnKeyDown
	void SetActiveStates(struct UWBP_CosmeticItem_Title_C* ActiveWidget); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetActiveStates
	void RegisterNavigation(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.RegisterNavigation
	void IsTitleItemEquipped(struct UKSItem* KSItem, bool IsEquipped); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.IsTitleItemEquipped
	void ResetTitleSelection(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ResetTitleSelection
	void SetContextBar(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetContextBar
	bool NavigateBack(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.NavigateBack
	void SetTitleSelection(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.SetTitleSelection
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnShown
	void OnHide(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnHide
	void OnBackPrompt(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnBackPrompt
	void OnTitleHover(struct UKSItem* KSItem); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleHover
	void OnTitleUnhover(); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleUnhover
	void OnTitleSelected(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleSelected
	void OnTitleGamepadHover(struct UPUMG_Widget* Widget, bool Hovered); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.OnTitleGamepadHover
	void ExecuteUbergraph_WBP_CustomizeTitle(int32_t EntryPoint); // Function WBP_CustomizeTitle.WBP_CustomizeTitle_C.ExecuteUbergraph_WBP_CustomizeTitle
};

