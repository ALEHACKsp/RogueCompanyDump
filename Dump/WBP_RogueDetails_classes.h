// WidgetBlueprintGeneratedClass WBP_RogueDetails.WBP_RogueDetails_C
// Size: 0x588 (Inherited: 0x4e0)
struct UWBP_RogueDetails_C : public UKSRogueDetailsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ItemDescSlot_C* AbilitySlot; // 0x4e8(0x08)
	struct UImage* BioLockIcon_2; // 0x4f0(0x08)
	struct UWBP_ButtonStacked_C* ButtonBio; // 0x4f8(0x08)
	struct UWBP_ButtonStacked_C* ButtonCustomize; // 0x500(0x08)
	struct UWBP_ButtonStacked_C* ButtonLoadout; // 0x508(0x08)
	struct UWBP_ButtonStacked_C* ButtonMastery; // 0x510(0x08)
	struct UWBP_ButtonStacked_C* ButtonUnlock; // 0x518(0x08)
	struct UImage* Image; // 0x520(0x08)
	struct UVerticalBox* JobPrices; // 0x528(0x08)
	struct UWBP_ItemDescSlot_C* PassiveSlot; // 0x530(0x08)
	struct UTextBlock* RogueDescription; // 0x538(0x08)
	struct UKSAsyncImage* RogueIcon; // 0x540(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x548(0x08)
	struct UWBP_RogueMasteryProgress_C* WBP_MecMasteryProgress; // 0x550(0x08)
	struct UWBP_RogueItemDisplay_C* WBP_RogueItemDisplay; // 0x558(0x08)
	struct UWBP_RogueItemDisplay_C* WBP_RogueItemDisplay_2; // 0x560(0x08)
	struct UKSJobItem* JobItem; // 0x568(0x08)
	struct TArray<struct UWBP_ButtonStacked_C*> ButtonArray; // 0x570(0x10)
	struct UKSMercManager* MercManager; // 0x580(0x08)

	void SetJobCharacter(struct UKSJobItem* KSJobItem); // Function WBP_RogueDetails.WBP_RogueDetails_C.SetJobCharacter
	void OnPurchaseRogue(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnPurchaseRogue
	void SetContextBar(); // Function WBP_RogueDetails.WBP_RogueDetails_C.SetContextBar
	void InitializeOverViewButtons(); // Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeOverViewButtons
	bool NavigateBack(); // Function WBP_RogueDetails.WBP_RogueDetails_C.NavigateBack
	void BindOverViewButtons(); // Function WBP_RogueDetails.WBP_RogueDetails_C.BindOverViewButtons
	void PopulatedJobOverview(struct UKSJobItem* JobItem); // Function WBP_RogueDetails.WBP_RogueDetails_C.PopulatedJobOverview
	void Construct(); // Function WBP_RogueDetails.WBP_RogueDetails_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidget
	void OnShown(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnShown
	void InitializeWidgetNavigation(); // Function WBP_RogueDetails.WBP_RogueDetails_C.InitializeWidgetNavigation
	void OnCombatLoadout(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnCombatLoadout
	void OnCustomizeLoadout(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnCustomizeLoadout
	void OnRogueMastery(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnRogueMastery
	void OnBackPrompt(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnBackPrompt
	void SetDisableButtons(); // Function WBP_RogueDetails.WBP_RogueDetails_C.SetDisableButtons
	void OnHide(); // Function WBP_RogueDetails.WBP_RogueDetails_C.OnHide
	void ExecuteUbergraph_WBP_RogueDetails(int32_t EntryPoint); // Function WBP_RogueDetails.WBP_RogueDetails_C.ExecuteUbergraph_WBP_RogueDetails
};

