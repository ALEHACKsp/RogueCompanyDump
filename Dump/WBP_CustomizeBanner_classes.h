// WidgetBlueprintGeneratedClass WBP_CustomizeBanner.WBP_CustomizeBanner_C
// Size: 0x578 (Inherited: 0x4e0)
struct UWBP_CustomizeBanner_C : public UKSPlayerCosmeticWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* ShowAnim; // 0x4e8(0x08)
	struct UKSSortableGridPanel* ItemContainer; // 0x4f0(0x08)
	struct UScrollBox* ScrollBox_1; // 0x4f8(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner; // 0x500(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_2; // 0x508(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_3; // 0x510(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_4; // 0x518(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_5; // 0x520(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_6; // 0x528(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_7; // 0x530(0x08)
	struct UWBP_CosmeticItem_Banner_C* WBP_CosmeticItem_Banner_8; // 0x538(0x08)
	struct UWBP_PlayerIDCustomize_C* WBP_PlayerIDCustomize; // 0x540(0x08)
	struct TArray<struct UWBP_CosmeticItem_Banner_C*> BannerItems; // 0x548(0x10)
	struct UWBP_CosmeticItem_Banner_C* EquippedBanner; // 0x558(0x08)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x560(0x08)
	struct UKSItem* HoveredItem; // 0x568(0x08)
	int32_t VisibleGridRows; // 0x570(0x04)
	int32_t VisibleGridColumns; // 0x574(0x04)

	bool OnSortRarityDescNameAsc(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnSortRarityDescNameAsc
	bool NavigateBack(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.NavigateBack
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnKeyDown
	void AddEmptySlots(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.AddEmptySlots
	void SetActiveStates(struct UWBP_CosmeticItem_Banner_C* ActiveWidget); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetActiveStates
	void RegisterNavigation(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.RegisterNavigation
	void IsBannerItemEquipped(struct UKSItem* KSItem, bool IsEquipped); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.IsBannerItemEquipped
	void ResetBannerSelection(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ResetBannerSelection
	void SetContextBar(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetContextBar
	void SetBannerSelection(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.SetBannerSelection
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidget
	void OnShown(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnShown
	void OnHide(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnHide
	void InitializeWidgetNavigation(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.InitializeWidgetNavigation
	void OnBackPrompt(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBackPrompt
	void OnBannerHover(struct UKSItem* KSItem); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerHover
	void OnBannerUnhover(); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerUnhover
	void OnBannerSelected(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerSelected
	void OnBannerGamepadHover(struct UPUMG_Widget* Widget, bool Hovered); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.OnBannerGamepadHover
	void ExecuteUbergraph_WBP_CustomizeBanner(int32_t EntryPoint); // Function WBP_CustomizeBanner.WBP_CustomizeBanner_C.ExecuteUbergraph_WBP_CustomizeBanner
};

