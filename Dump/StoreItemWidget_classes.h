// WidgetBlueprintGeneratedClass StoreItemWidget.StoreItemWidget_C
// Size: 0x270 (Inherited: 0x238)
struct UStoreItemWidget_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Icon; // 0x240(0x08)
	struct UButton* ItemButton; // 0x248(0x08)
	struct UTextBlock* ItemName; // 0x250(0x08)
	struct UTextBlock* PriceField; // 0x258(0x08)
	struct UButton* PurchaseButton; // 0x260(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x268(0x08)

	void SetItemData(struct UPUMG_StoreItem* StoreItem); // Function StoreItemWidget.StoreItemWidget_C.SetItemData
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function StoreItemWidget.StoreItemWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_StoreItemWidget(int32_t EntryPoint); // Function StoreItemWidget.StoreItemWidget_C.ExecuteUbergraph_StoreItemWidget
};

