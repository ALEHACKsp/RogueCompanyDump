// WidgetBlueprintGeneratedClass WBP_LoadoutButton.WBP_LoadoutButton_C
// Size: 0x280 (Inherited: 0x238)
struct UWBP_LoadoutButton_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x240(0x08)
	struct UTextBlock* ItemName; // 0x248(0x08)
	struct UWBP_ButtonSlot_C* SlotButton; // 0x250(0x08)
	struct UKSItem* LoadoutItem; // 0x258(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x260(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x270(0x10)

	void PopulateLoadoutButton(); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.PopulateLoadoutButton
	void SetLoadoutItem(struct TSoftObjectPtr<struct UKSItem> LoadoutItem); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetLoadoutItem
	void PreConstruct(bool IsDesignTime); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.PreConstruct
	void Construct(); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.Construct
	void OnClick(); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClick
	void OnHover(bool IsGamepad); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHover
	void SetIsActive(bool IsActive); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.SetIsActive
	void ExecuteUbergraph_WBP_LoadoutButton(int32_t EntryPoint); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.ExecuteUbergraph_WBP_LoadoutButton
	void OnClicked__DelegateSignature(struct UKSItem* LoadoutItem, struct UWBP_LoadoutButton_C* LoadoutButton); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnClicked__DelegateSignature
	void OnHovered__DelegateSignature(struct UKSItem* LoadoutItem, bool IsGamepad); // Function WBP_LoadoutButton.WBP_LoadoutButton_C.OnHovered__DelegateSignature
};

