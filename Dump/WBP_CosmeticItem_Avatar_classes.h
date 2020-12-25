// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C
// Size: 0x548 (Inherited: 0x4e0)
struct UWBP_CosmeticItem_Avatar_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* Button; // 0x4e8(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x4f0(0x08)
	struct UKSItem* KSItem; // 0x4f8(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x500(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x508(0x10)
	struct FMulticastInlineDelegate OnItemUnhovered; // 0x518(0x10)
	struct FMulticastInlineDelegate OnItemClicked; // 0x528(0x10)
	struct UAkAudioEvent* HoverAvatarItemSFX; // 0x538(0x08)
	struct UAkAudioEvent* ClickAvatarItemSFX; // 0x540(0x08)

	bool NavigateConfirm(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.NavigateConfirm
	void SetAvatarItemSlot(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.SetAvatarItemSlot
	void OnHoverSound(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnHoverSound
	void OnClickSound(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnClickSound
	void Construct(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.InitializeWidget
	void PopulateSlot(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.PopulateSlot
	void OnAvatarHover(bool IsGamepad); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarHover
	void OnAvatarUnhover(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarUnhover
	void OnAvatarClick(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnAvatarClick
	void GamepadHover(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.GamepadUnhover
	void SetAvatarActive(bool IsActive); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.SetAvatarActive
	void ExecuteUbergraph_WBP_CosmeticItem_Avatar(int32_t EntryPoint); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.ExecuteUbergraph_WBP_CosmeticItem_Avatar
	void OnItemClicked__DelegateSignature(struct UKSItem* KSItem, struct UWidget* Widget); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemClicked__DelegateSignature
	void OnItemUnhovered__DelegateSignature(); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemUnhovered__DelegateSignature
	void OnItemHovered__DelegateSignature(struct UKSItem* KSItem); // Function WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C.OnItemHovered__DelegateSignature
};

