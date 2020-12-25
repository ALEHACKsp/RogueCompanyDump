// WidgetBlueprintGeneratedClass WBP_StorePriceTag.WBP_StorePriceTag_C
// Size: 0x289 (Inherited: 0x238)
struct UWBP_StorePriceTag_C : public UUserWidget {
	struct UKSAsyncImage* CurrencyIcon; // 0x238(0x08)
	struct UWidgetSwitcher* CurrencySwitcher; // 0x240(0x08)
	struct UImage* Image; // 0x248(0x08)
	struct UImage* Image_136; // 0x250(0x08)
	struct UOverlay* OriginalPortalPriceWrapper; // 0x258(0x08)
	struct UTextBlock* OriginalPrice; // 0x260(0x08)
	struct UCanvasPanel* OriginalPriceContainer; // 0x268(0x08)
	struct UTextBlock* PriceAmount; // 0x270(0x08)
	struct UTextBlock* RealMoneyPrice; // 0x278(0x08)
	struct UTextBlock* RealMoneyPrice_2; // 0x280(0x08)
	bool bIndicateNotEnoughCurrency; // 0x288(0x01)

	void SetPriceDisplay(struct UPUMG_StoreItemPrice* PriceInfo, struct UPUMG_PortalOffer* PortalOffer); // Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay
};

