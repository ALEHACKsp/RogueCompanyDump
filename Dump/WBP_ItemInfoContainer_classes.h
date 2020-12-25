// WidgetBlueprintGeneratedClass WBP_ItemInfoContainer.WBP_ItemInfoContainer_C
// Size: 0x299 (Inherited: 0x238)
struct UWBP_ItemInfoContainer_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* Show; // 0x240(0x08)
	struct UVerticalBox* ItemInfoContainer; // 0x248(0x08)
	struct UTextBlock* ItemNameField; // 0x250(0x08)
	struct UImage* ItemRaritySwatch; // 0x258(0x08)
	struct UImage* LeftBGDimmer; // 0x260(0x08)
	struct UImage* LeftBGImage; // 0x268(0x08)
	struct UOverlay* NameWrapper; // 0x270(0x08)
	struct URichTextBlock* RarityRichText; // 0x278(0x08)
	struct UImage* RightBGDimmer; // 0x280(0x08)
	struct UImage* RightBGImage; // 0x288(0x08)
	struct UHorizontalBox* TypeWrapper; // 0x290(0x08)
	char Justification; // 0x298(0x01)

	void SetAlignment(); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetAlignment
	void SetItemRarityInfo(struct UPlatformInventoryItem* CosmeticItem); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetItemRarityInfo
	void SetInfoFieldData(struct UPlatformInventoryItem* CosmeticItem); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.SetInfoFieldData
	void PreConstruct(bool IsDesignTime); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.PreConstruct
	void Construct(); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.Construct
	void ExecuteUbergraph_WBP_ItemInfoContainer(int32_t EntryPoint); // Function WBP_ItemInfoContainer.WBP_ItemInfoContainer_C.ExecuteUbergraph_WBP_ItemInfoContainer
};

