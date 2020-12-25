// WidgetBlueprintGeneratedClass WBP_JobGeneralButton.WBP_JobGeneralButton_C
// Size: 0x601 (Inherited: 0x4e0)
struct UWBP_JobGeneralButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* background; // 0x4f0(0x08)
	struct UImage* BackgroundDecro; // 0x4f8(0x08)
	struct UButton* FavoriteHitBox; // 0x500(0x08)
	struct UImage* HighlightFrame; // 0x508(0x08)
	struct UButton* HitTarget; // 0x510(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x518(0x08)
	struct UWBP_AsyncIcon_C* JobIcon; // 0x520(0x08)
	struct UImage* LockIcon; // 0x528(0x08)
	struct UImage* NameplateBG; // 0x530(0x08)
	struct UImage* NameplateDecroBar; // 0x538(0x08)
	struct UTextBlock* RogueName; // 0x540(0x08)
	struct UImage* Starred; // 0x548(0x08)
	struct UImage* Unstarred; // 0x550(0x08)
	struct UWBP_RogueMasteryIcon_C* WBP_MercMasteryIcon; // 0x558(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x560(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x570(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x580(0x10)
	struct UKSJobItem* JobItem; // 0x590(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x598(0x08)
	bool MainButtonHovered; // 0x5a0(0x01)
	bool SubButtonHovered; // 0x5a1(0x01)
	bool NeedsUnhovering; // 0x5a2(0x01)
	char UnknownData_5A3[0x5]; // 0x5a3(0x05)
	struct FSlateColor LockedPortraitTint; // 0x5a8(0x28)
	struct FMulticastInlineDelegate OnFavorited; // 0x5d0(0x10)
	struct UAkAudioEvent* ClickJobGenButton; // 0x5e0(0x08)
	struct UAkAudioEvent* HoverJobGenButton; // 0x5e8(0x08)
	struct UAkAudioEvent* ClickJobGenFavoriteButton; // 0x5f0(0x08)
	struct UAkAudioEvent* HoverJobGenFavoriteButton; // 0x5f8(0x08)
	bool SubButtonHovered_1; // 0x600(0x01)

	void SetItemOwned(struct UPUMG_StoreItem* StoreItem); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.SetItemOwned
	void CanBeFavorited(bool IsValid); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.CanBeFavorited
	void DisplayFavoriteStatus(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.DisplayFavoriteStatus
	void PopulateJobButton(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PopulateJobButton
	bool NavigateConfirm(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.NavigateConfirm
	void OnClickSound(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickSound
	void OnHoverSound(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverSound
	void OnHoverFavoriteSFX(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHoverFavoriteSFX
	void OnClickFavoriteSFX(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClickFavoriteSFX
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.Construct
	void PreConstruct(bool IsDesignTime); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.PreConstruct
	void OnGamepadConfirm(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnGamepadConfirm
	void GamepadHover(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.GamepadUnhover
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.InitializeWidget
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void UninitializeWidget(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.UninitializeWidget
	void ExecuteUbergraph_WBP_JobGeneralButton(int32_t EntryPoint); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.ExecuteUbergraph_WBP_JobGeneralButton
	void OnFavorited__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnFavorited__DelegateSignature
	void OnUnhovered__DelegateSignature(); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UKSJobItem* JobItem, struct UPUMG_StoreItem* StoreItem); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UKSJobItem* JobItem); // Function WBP_JobGeneralButton.WBP_JobGeneralButton_C.OnClicked__DelegateSignature
};

