// WidgetBlueprintGeneratedClass WBP_KSItemDisplay.WBP_KSItemDisplay_C
// Size: 0x590 (Inherited: 0x4e0)
struct UWBP_KSItemDisplay_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* Active; // 0x4f0(0x08)
	struct UImage* ButtonBkg; // 0x4f8(0x08)
	struct UWBP_DisabledIcon_C* DisabledIcon; // 0x500(0x08)
	struct UImage* Fill; // 0x508(0x08)
	struct UButton* HitTarget; // 0x510(0x08)
	struct UImage* HoverButtonBkg; // 0x518(0x08)
	struct UWBP_AsyncIcon_C* WeaponIcon; // 0x520(0x08)
	struct FText WeaponSlotHeadingText; // 0x528(0x18)
	struct FMulticastInlineDelegate OnHover; // 0x540(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x550(0x10)
	struct UKSItem* KSItem; // 0x560(0x08)
	bool IsActive; // 0x568(0x01)
	char UnknownData_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate OnClick; // 0x570(0x10)
	struct UAkAudioEvent* HoverKSItemDisplaySFX; // 0x580(0x08)
	struct UAkAudioEvent* ClickKSItemDisplaySFX; // 0x588(0x08)

	void OnButtonHovered(bool IsGamepad); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered
	void OnHoverSound(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound
	void PopulateSlot(struct UKSItem* KSItem); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot
	void GamepadHover(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover
	void GamepadUnhover(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover
	void BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void SetIsActiveState(bool bIsActive); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_KSItemDisplay(int32_t EntryPoint); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay
	void OnClick__DelegateSignature(struct UKSItem* PerkItem); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature
	void OnUnhover__DelegateSignature(); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature
	void OnHover__DelegateSignature(struct UKSItem* KSItem, bool IsGamepad); // Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature
};

