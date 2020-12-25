// WidgetBlueprintGeneratedClass WBP_AcquistionItem.WBP_AcquistionItem_C
// Size: 0x518 (Inherited: 0x4e0)
struct UWBP_AcquistionItem_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* CosmeticItem; // 0x4e8(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnSlotSelected; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnSlotHover; // 0x508(0x10)

	void OnSlotHovered(struct FCosmeticSlotDetails CosmeticSlotDetails, bool IsGamepad, struct UWBP_KSCosmeticItemDisplay_C* Widget); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHovered
	void OnSlotClicked(struct UWBP_KSCosmeticItemDisplay_C* Widget, struct FCosmeticSlotDetails CosmeticSlotDetails); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotClicked
	void SetSlotItem(struct UPUMG_StoreItem* SlotItem); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.SetSlotItem
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.InitializeWidget
	void ExecuteUbergraph_WBP_AcquistionItem(int32_t EntryPoint); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.ExecuteUbergraph_WBP_AcquistionItem
	void OnSlotHover__DelegateSignature(struct UPUMG_StoreItem* Item, struct UKSWidget* Widget); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotHover__DelegateSignature
	void OnSlotSelected__DelegateSignature(struct UPUMG_StoreItem* StoreItem); // Function WBP_AcquistionItem.WBP_AcquistionItem_C.OnSlotSelected__DelegateSignature
};

