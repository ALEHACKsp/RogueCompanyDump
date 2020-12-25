// WidgetBlueprintGeneratedClass WBP_news_card.WBP_news_card_C
// Size: 0x270 (Inherited: 0x238)
struct UWBP_news_card_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UTextBlock* Description; // 0x240(0x08)
	struct UImage* featured_image; // 0x248(0x08)
	struct UImage* Image_264; // 0x250(0x08)
	struct UWBP_news_header_C* WBP_news_header; // 0x258(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel; // 0x260(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel_C_4; // 0x268(0x08)

	void SetCardData(struct UKSWhatsNewPanel* CardData); // Function WBP_news_card.WBP_news_card_C.SetCardData
	void PreConstruct(bool IsDesignTime); // Function WBP_news_card.WBP_news_card_C.PreConstruct
	void ExecuteUbergraph_WBP_news_card(int32_t EntryPoint); // Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card
};

