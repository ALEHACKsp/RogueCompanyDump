// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C
// Size: 0x548 (Inherited: 0x4e0)
struct UWBP_CosmeticItem_Banner_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* Button; // 0x4e8(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x4f8(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x508(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x518(0x10)
	struct UKSItem* KSItem; // 0x528(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x530(0x08)
	struct UAkAudioEvent* HoverBannerItemSFX; // 0x538(0x08)
	struct UAkAudioEvent* ClickBannerItemSFX; // 0x540(0x08)

	bool NavigateConfirm(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.NavigateConfirm
	void SetBannerItemSlot(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerItemSlot
	void OnHoverSound(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnHoverSound
	void OnClickSound(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnClickSound
	void Construct(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.Construct
	void PopulateSlot(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.PopulateSlot
	void OnBannerHover(bool IsGamepad); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerHover
	void OnBannerUnhover(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerUnhover
	void OnBannerClick(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnBannerClick
	void GamepadHover(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.GamepadUnhover
	void SetBannerActive(bool IsActive); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.SetBannerActive
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.InitializeWidget
	void ExecuteUbergraph_WBP_CosmeticItem_Banner(int32_t EntryPoint); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.ExecuteUbergraph_WBP_CosmeticItem_Banner
	void OnItemClicked__DelegateSignature(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemClicked__DelegateSignature
	void OnItemUnhovered__DelegateSignature(); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemUnhovered__DelegateSignature
	void OnItemHovered__DelegateSignature(struct UKSItem* KSItem); // Function WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C.OnItemHovered__DelegateSignature
};

