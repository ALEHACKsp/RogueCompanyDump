// WidgetBlueprintGeneratedClass WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C
// Size: 0x2b0 (Inherited: 0x238)
struct UWBP_LoadoutButtonPerks_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* ItemName; // 0x240(0x08)
	struct UWBP_AsyncIcon_C* Perk1; // 0x248(0x08)
	struct UWBP_AsyncIcon_C* Perk2; // 0x250(0x08)
	struct UWBP_AsyncIcon_C* Perk3; // 0x258(0x08)
	struct UWBP_AsyncIcon_C* Perk4; // 0x260(0x08)
	struct UWBP_AsyncIcon_C* Perk5; // 0x268(0x08)
	struct UWBP_AsyncIcon_C* Perk6; // 0x270(0x08)
	struct UWBP_ButtonSlot_C* SlotButton; // 0x278(0x08)
	struct TArray<struct UWBP_AsyncIcon_C*> PerksImages; // 0x280(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x290(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x2a0(0x10)

	void PopulateLoadoutButton(); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PopulateLoadoutButton
	void SetLoadoutPerks(struct TArray<struct TSoftObjectPtr<struct UKSItem>> LoadoutItem); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetLoadoutPerks
	void PreConstruct(bool IsDesignTime); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.PreConstruct
	void Construct(); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.Construct
	void OnBtnHovered(bool IsGamepad); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnHovered
	void OnBtnClicked(); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnBtnClicked
	void SetIsActive(bool IsActive); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.SetIsActive
	void ExecuteUbergraph_WBP_LoadoutButtonPerks(int32_t EntryPoint); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.ExecuteUbergraph_WBP_LoadoutButtonPerks
	void OnClicked__DelegateSignature(); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnClicked__DelegateSignature
	void OnHovered__DelegateSignature(bool IsGamepad); // Function WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C.OnHovered__DelegateSignature
};

