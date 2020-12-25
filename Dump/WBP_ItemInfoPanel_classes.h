// WidgetBlueprintGeneratedClass WBP_ItemInfoPanel.WBP_ItemInfoPanel_C
// Size: 0x508 (Inherited: 0x4e0)
struct UWBP_ItemInfoPanel_C : public UKSWidget {
	struct UTextBlock* ItemDescription; // 0x4e0(0x08)
	struct UKSAsyncImage* PreviewImage; // 0x4e8(0x08)
	struct UBorder* PreviewImageBox; // 0x4f0(0x08)
	struct UWBP_ItemInfoContainer_C* WBP_ItemInfoContainer; // 0x4f8(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x500(0x08)

	void SetInfoFieldData(struct UPlatformInventoryItem* CosmeticItem, enum class EPlayerAccountSlot ItemSlot); // Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData
};

