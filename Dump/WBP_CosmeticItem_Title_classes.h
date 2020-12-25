// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C
// Size: 0x560 (Inherited: 0x4e0)
struct UWBP_CosmeticItem_Title_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* Button; // 0x4e8(0x08)
	struct UImage* Gradient; // 0x4f0(0x08)
	struct UBorder* RarityElementWrapper; // 0x4f8(0x08)
	struct UImage* ScanLines; // 0x500(0x08)
	struct UTextBlock* Title; // 0x508(0x08)
	struct UKSItem* KSItem; // 0x510(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x518(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x520(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x530(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x540(0x10)
	struct UAkAudioEvent* HoverTitleItemSFX; // 0x550(0x08)
	struct UAkAudioEvent* ClickTitleItemSFX; // 0x558(0x08)

	void SetTitleItemSlot(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleItemSlot
	bool NavigateConfirm(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.NavigateConfirm
	void OnHoverSound(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnHoverSound
	void OnClickSound(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnClickSound
	void Construct(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.Construct
	void PopulateSlot(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.PopulateSlot
	void OnTitleHover(bool IsGamepad); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleHover
	void OnTitleUnhover(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleUnhover
	void OnTitleClick(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnTitleClick
	void GamepadHover(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.GamepadUnhover
	void SetTitleActive(bool IsActive); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.SetTitleActive
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.InitializeWidget
	void ExecuteUbergraph_WBP_CosmeticItem_Title(int32_t EntryPoint); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.ExecuteUbergraph_WBP_CosmeticItem_Title
	void OnItemClicked__DelegateSignature(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemClicked__DelegateSignature
	void OnItemUnhovered__DelegateSignature(); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemUnhovered__DelegateSignature
	void OnItemHovered__DelegateSignature(struct UKSItem* KSItem); // Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.OnItemHovered__DelegateSignature
};

