// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C
// Size: 0x550 (Inherited: 0x4e0)
struct UWBP_CosmeticItem_Border_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* Button; // 0x4e8(0x08)
	struct UImage* Image_134; // 0x4f0(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x4f8(0x08)
	struct UKSItem* KSItem; // 0x500(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x508(0x08)
	struct UAkAudioEvent* HoverBorderItemSFX; // 0x510(0x08)
	struct UAkAudioEvent* ClickBorderItemSFX; // 0x518(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x520(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x530(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x540(0x10)

	bool NavigateConfirm(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.NavigateConfirm
	void SetBorderItemSlot(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderItemSlot
	void OnHoverSound(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnHoverSound
	void OnClickSound(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnClickSound
	void Construct(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.InitializeWidget
	void PopulateSlot(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.PopulateSlot
	void OnBorderHover(bool IsGamepad); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderHover
	void OnBorderUnhover(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderUnhover
	void OnBorderClick(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnBorderClick
	void GamepadHover(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.GamepadUnhover
	void SetBorderActive(bool IsActive); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.SetBorderActive
	void ExecuteUbergraph_WBP_CosmeticItem_Border(int32_t EntryPoint); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.ExecuteUbergraph_WBP_CosmeticItem_Border
	void OnItemClicked__DelegateSignature(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemClicked__DelegateSignature
	void OnItemUnhovered__DelegateSignature(); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemUnhovered__DelegateSignature
	void OnItemHovered__DelegateSignature(struct UKSItem* KSItem); // Function WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C.OnItemHovered__DelegateSignature
};

