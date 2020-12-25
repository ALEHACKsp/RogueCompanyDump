// WidgetBlueprintGeneratedClass WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C
// Size: 0x2a1 (Inherited: 0x238)
struct UWBP_ItemInfoContainer_Centered_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Show; // 0x240(0x08)
	struct UImage* ItemNameBG; // 0x248(0x08)
	struct UImage* ItemNameBG_2; // 0x250(0x08)
	struct UTextBlock* ItemNameField; // 0x258(0x08)
	struct UImage* ItemRaritySwatch; // 0x260(0x08)
	struct URichTextBlock* RarityRichText; // 0x268(0x08)
	struct FText Current Item Type Text; // 0x270(0x18)
	struct FText Current Rarity Format Text; // 0x288(0x18)
	bool Current IsCurrency; // 0x2a0(0x01)

	void Refresh Rarity Text(); // Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.Refresh Rarity Text
	void SetItemRarityInfo(struct UPlatformInventoryItem* CosmeticItem); // Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetItemRarityInfo
	void SetInfoFieldData(struct UPUMG_StoreItem* StoreItem); // Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.SetInfoFieldData
	void PreConstruct(bool IsDesignTime); // Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.PreConstruct
	void ExecuteUbergraph_WBP_ItemInfoContainer_Centered(int32_t EntryPoint); // Function WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C.ExecuteUbergraph_WBP_ItemInfoContainer_Centered
};

