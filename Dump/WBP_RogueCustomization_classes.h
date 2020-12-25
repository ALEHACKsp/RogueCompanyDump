// WidgetBlueprintGeneratedClass WBP_RogueCustomization.WBP_RogueCustomization_C
// Size: 0x5f0 (Inherited: 0x4e0)
struct UWBP_RogueCustomization_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Show; // 0x4e8(0x08)
	struct UWBP_ItemInfoContainer_C* ItemInfoContainer; // 0x4f0(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* Melee; // 0x4f8(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* Outfit; // 0x500(0x08)
	struct UWBP_SlotHeading_C* OutfitLabel; // 0x508(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* PrimaryOne; // 0x510(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* PrimaryTwo; // 0x518(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot01; // 0x520(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot02; // 0x528(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot03; // 0x530(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot04; // 0x538(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot05; // 0x540(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot06; // 0x548(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot07; // 0x550(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RadialSlot08; // 0x558(0x08)
	struct UKSAsyncImage* RogueIcon; // 0x560(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* Secondary; // 0x568(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x570(0x08)
	struct UWBP_SlotHeading_C* WBP_SlotHeading_C_2; // 0x578(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* WingSuit; // 0x580(0x08)
	struct UWBP_SlotHeading_C* WingsuitLabel; // 0x588(0x08)
	struct UWBP_SlotHeading_C* Wraps_2; // 0x590(0x08)
	struct UKSMercManager* MercManager; // 0x598(0x08)
	struct TArray<struct UWBP_KSCosmeticItemDisplay_C*> RadialSlots; // 0x5a0(0x10)
	struct TArray<struct UWBP_KSCosmeticItemDisplay_C*> WrapSlots; // 0x5b0(0x10)
	struct FMulticastInlineDelegate GotoCustomizationScreen; // 0x5c0(0x10)
	struct UKSJobItem* JobItem; // 0x5d0(0x08)
	struct TArray<struct UWBP_KSCosmeticItemDisplay_C*> CosmeticSlots; // 0x5d8(0x10)
	struct AKSLobbyCharacter* RogueCharacter; // 0x5e8(0x08)

	void SetMeleeCustomizeNav(bool IsVisible); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav
	void RegisterGamepadNavigation(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation
	bool NavigateBack(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack
	void SetContextBar(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar
	void BindSlots(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots
	void SetSlots(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots
	void InitializeButtons(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons
	void UpdateEquippedItems(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems
	void SetActiveJob(struct UKSJobItem* JobItem); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget
	void OnCosmeticHovered(struct FCosmeticSlotDetails CosmeticSlotDetail, bool IsGamepad, struct UWBP_KSCosmeticItemDisplay_C* Widget); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered
	void OnCosmeticUnhovered(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered
	void OnCosmeticSelected(struct UWBP_KSCosmeticItemDisplay_C* CosmeticSlot, struct FCosmeticSlotDetails CosmeticSlotDetails); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected
	void OnShown(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown
	void ExternalOnShown(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown
	void OnBackPrompt(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation
	void PreConstruct(bool IsDesignTime); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct
	void ExecuteUbergraph_WBP_RogueCustomization(int32_t EntryPoint); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization
	void GotoCustomizationScreen__DelegateSignature(struct UWBP_KSCosmeticItemDisplay_C* CosmeticSlot); // Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature
};

