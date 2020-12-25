// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_KSCosmeticItemSelector_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* CosmeticItemDisplay; // 0x4e8(0x08)
	struct UKSItem* KSItem; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x508(0x10)
	struct FMulticastInlineDelegate OnItemSelected; // 0x518(0x10)
	struct UPUMG_StoreItem* StoreItem; // 0x528(0x08)
	struct FCosmeticSlotDetails CosmeticDetails; // 0x530(0x18)
	bool IsClearSlot; // 0x548(0x01)
	char UnknownData_549[0x7]; // 0x549(0x07)
	struct FMulticastInlineDelegate OnPurchaseItem; // 0x550(0x10)
	struct UAkAudioEvent* HoverCosmeticItemSelectorSFX; // 0x560(0x08)
	struct UAkAudioEvent* ClickCosmeticItemSelectorSFX; // 0x568(0x08)

	bool NavigateConfirm(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm
	void OnClickSound(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound
	void OnHoverSound(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound
	void Construct(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget
	void OnCosmeticHover(struct FCosmeticSlotDetails CosmeticDetails, bool IsGamepad, struct UWBP_KSCosmeticItemDisplay_C* Widget); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover
	void OnCosmeticUnhover(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover
	void OnCosmeticClicked(struct UWBP_KSCosmeticItemDisplay_C* Widget, struct FCosmeticSlotDetails CosmeticSlotDetails); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked
	void GamepadHover(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover
	void GamepadUnhover(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover
	void SetSlotActive(bool Active); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive
	void SetItemOwned(struct UPUMG_StoreItem* StoreItem); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned
	void ExecuteUbergraph_WBP_KSCosmeticItemSelector(int32_t EntryPoint); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector
	void OnPurchaseItem__DelegateSignature(struct UPUMG_StoreItem* StoreItem); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature
	void OnItemSelected__DelegateSignature(struct UKSItem* KSItem, struct UWidget* Widget, struct FCosmeticSlotDetails CosmeticSlot); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature
	void OnItemUnhovered__DelegateSignature(); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature
	void OnItemHovered__DelegateSignature(struct FCosmeticSlotDetails CosmeticDetails, struct UKSItem* KSItem); // Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature
};

