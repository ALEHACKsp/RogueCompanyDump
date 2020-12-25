// WidgetBlueprintGeneratedClass WBP_StoreItemInterior.WBP_StoreItemInterior_C
// Size: 0x5b1 (Inherited: 0x4e0)
struct UWBP_StoreItemInterior_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* BaseCount; // 0x4e8(0x08)
	struct UTextBlock* BonusCount; // 0x4f0(0x08)
	struct UVerticalBox* BonusCurrencyWrapper; // 0x4f8(0x08)
	struct UImage* BtnBkg; // 0x500(0x08)
	struct UImage* CornerHighlight; // 0x508(0x08)
	struct UOverlay* CornerHighlightWrapper; // 0x510(0x08)
	struct UWidgetSwitcher* DescriptionSwitcher; // 0x518(0x08)
	struct UWBP_StoreDiscountTag_C* DiscountTag; // 0x520(0x08)
	struct UTextBlock* DLCDesc; // 0x528(0x08)
	struct UTextBlock* DLCName; // 0x530(0x08)
	struct UVerticalBox* DLCNameWrapper; // 0x538(0x08)
	struct UVerticalBox* FoundersLabel; // 0x540(0x08)
	struct UTextBlock* FoundersName; // 0x548(0x08)
	struct UImage* GradientBG; // 0x550(0x08)
	struct UWBP_AsyncIcon_C* ItemImage; // 0x558(0x08)
	struct UTextBlock* ItemName; // 0x560(0x08)
	struct UTextBlock* ItemName_Currency; // 0x568(0x08)
	struct UTextBlock* OwnedText; // 0x570(0x08)
	struct UWBP_StorePriceDisplay_C* PriceDisplay; // 0x578(0x08)
	struct UWidgetSwitcher* PriceSwitcher; // 0x580(0x08)
	struct UImage* RarityDecro; // 0x588(0x08)
	struct UImage* RarityDecro_2; // 0x590(0x08)
	struct UVerticalBox* RarityInfo; // 0x598(0x08)
	struct URichTextBlock* RarityRichText; // 0x5a0(0x08)
	struct UBorder* ThinStrokeHighlightWrapper; // 0x5a8(0x08)
	char EPanelSize; // 0x5b0(0x01)

	struct TSoftObjectPtr<struct UTexture2D> GetStoreIconForSize(struct UPlatformInventoryItem* InventoryItem); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.GetStoreIconForSize
	void SetRarityDisplay(struct UPlatformInventoryItem* InventoryItem); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetRarityDisplay
	void SetStoreItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.SetStoreItem
	void PreConstruct(bool IsDesignTime); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.PreConstruct
	void OnParentHovered(); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentHovered
	void OnParentUnhovered(); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.OnParentUnhovered
	void ExecuteUbergraph_WBP_StoreItemInterior(int32_t EntryPoint); // Function WBP_StoreItemInterior.WBP_StoreItemInterior_C.ExecuteUbergraph_WBP_StoreItemInterior
};

