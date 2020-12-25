// WidgetBlueprintGeneratedClass WBP_Loadout.WBP_Loadout_C
// Size: 0x670 (Inherited: 0x4e0)
struct UWBP_Loadout_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_LoadoutTierButton_C* BaseTier; // 0x4e8(0x08)
	struct UWBP_LoadoutButton_C* Gadget1; // 0x4f0(0x08)
	struct UWBP_LoadoutButton_C* Gadget2; // 0x4f8(0x08)
	struct UImage* GamepadButton0; // 0x500(0x08)
	struct UImage* GamepadButton1; // 0x508(0x08)
	struct UTextBlock* ItemDesc; // 0x510(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x518(0x08)
	struct UTextBlock* ItemName; // 0x520(0x08)
	struct UHorizontalBox* ItemTierContainer; // 0x528(0x08)
	struct UTextBlock* ItemType; // 0x530(0x08)
	struct UWBP_LoadoutButton_C* MeleeWeapon; // 0x538(0x08)
	struct UWBP_KSItemDisplay_C* Perk1; // 0x540(0x08)
	struct UWBP_KSItemDisplay_C* Perk2; // 0x548(0x08)
	struct UWBP_KSItemDisplay_C* Perk3; // 0x550(0x08)
	struct UWBP_KSItemDisplay_C* Perk4; // 0x558(0x08)
	struct UWBP_KSItemDisplay_C* Perk5; // 0x560(0x08)
	struct UWBP_KSItemDisplay_C* Perk6; // 0x568(0x08)
	struct UWBP_LoadoutButtonPerks_C* Perks; // 0x570(0x08)
	struct UWBP_LoadoutButton_C* PrimaryWeapon; // 0x578(0x08)
	struct UWBP_LoadoutButton_C* PrimaryWeapon2; // 0x580(0x08)
	struct UWBP_AsyncIcon_C* RogueIcon; // 0x588(0x08)
	struct UWBP_LoadoutButton_C* SecondaryWeapon; // 0x590(0x08)
	struct UWBP_StackedStatBar_C* Stat0; // 0x598(0x08)
	struct UWBP_StackedStatBar_C* Stat1; // 0x5a0(0x08)
	struct UWBP_StackedStatBar_C* Stat2; // 0x5a8(0x08)
	struct UWBP_StackedStatBar_C* Stat3; // 0x5b0(0x08)
	struct UWBP_StackedStatBar_C* Stat4; // 0x5b8(0x08)
	struct UWBP_StackedStatBar_C* Stat5; // 0x5c0(0x08)
	struct UOverlay* StatPanelWrapper; // 0x5c8(0x08)
	struct UWBP_LoadoutTierButton_C* Tier1; // 0x5d0(0x08)
	struct UWBP_LoadoutTierButton_C* Tier2; // 0x5d8(0x08)
	struct UWBP_LoadoutTierButton_C* Tier3; // 0x5e0(0x08)
	struct UWidgetSwitcher* TierPerkSwitcher; // 0x5e8(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x5f0(0x08)
	struct UKSJobItem* JobItem; // 0x5f8(0x08)
	struct TArray<struct UWBP_StackedStatBar_C*> ItemStats; // 0x600(0x10)
	struct TArray<struct UWBP_LoadoutTierButton_C*> TierButtons; // 0x610(0x10)
	struct TArray<struct UWBP_KSItemDisplay_C*> PerkButtons; // 0x620(0x10)
	struct TArray<struct TSoftObjectPtr<struct UKSItem>> PerkItems; // 0x630(0x10)
	int32_t CurrentIndex; // 0x640(0x04)
	char UnknownData_644[0x4]; // 0x644(0x04)
	struct UKSItem* LoadoutItem; // 0x648(0x08)
	int32_t NumIndexes; // 0x650(0x04)
	int32_t ITEM DISPLAY INDEX; // 0x654(0x04)
	int32_t PERK VIEWER INDEX; // 0x658(0x04)
	char UnknownData_65C[0x4]; // 0x65c(0x04)
	struct TArray<struct UWBP_LoadoutButton_C*> LoadoutButtons; // 0x660(0x10)

	void OnPerkClicked(struct UKSItem* PerkItem); // Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked
	void OnPerkSectionClicked(); // Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked
	void OnLoadoutClicked(struct UKSItem* LoadoutItem, struct UWBP_LoadoutButton_C* LoadoutButton); // Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked
	void SelectPerk(struct UKSItem* PerkItem, bool ShouldUpdate); // Function WBP_Loadout.WBP_Loadout_C.SelectPerk
	bool NavigateBack(); // Function WBP_Loadout.WBP_Loadout_C.NavigateBack
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Loadout.WBP_Loadout_C.OnKeyDown
	void HandleInputModeChanged(char InputMode); // Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged
	void PopulateStatsPanel(); // Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel
	void SetCurrentIndex(int32_t SelectedTier); // Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex
	void CreateWidgetArrays(); // Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays
	void SwapToItemDisplay(struct UKSItem* ItemSelected, bool ShouldSwap); // Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay
	void Swap to Perk Display(bool ShouldSwap); // Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display
	void PopulatePerkButtons(); // Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons
	void PopulateItemDetails(struct UKSItem* Item); // Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails
	void PopulateRogueDetails(); // Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails
	void PopulateLoadout(); // Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout
	void PreConstruct(bool IsDesignTime); // Function WBP_Loadout.WBP_Loadout_C.PreConstruct
	void Construct(); // Function WBP_Loadout.WBP_Loadout_C.Construct
	void OnShown(); // Function WBP_Loadout.WBP_Loadout_C.OnShown
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Loadout.WBP_Loadout_C.InitializeWidget
	void OnBackPrompt(); // Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation
	void ExecuteUbergraph_WBP_Loadout(int32_t EntryPoint); // Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout
};

