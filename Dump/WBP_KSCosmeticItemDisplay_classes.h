// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C
// Size: 0x5e9 (Inherited: 0x4e0)
struct UWBP_KSCosmeticItemDisplay_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* Button; // 0x4e8(0x08)
	struct USizeBox* CornerIcon; // 0x4f0(0x08)
	struct UWBP_AsyncIcon_C* CornerIconImage; // 0x4f8(0x08)
	struct URetainerBox* CosmeticRetainer; // 0x500(0x08)
	struct UWBP_DisabledIcon_C* DisabledIcon; // 0x508(0x08)
	struct UImage* EmptyIcon; // 0x510(0x08)
	struct UHorizontalBox* IconWrapper; // 0x518(0x08)
	struct UImage* Image_538; // 0x520(0x08)
	struct UScaleBox* ItemIconWrapper; // 0x528(0x08)
	struct UImage* LockIcon; // 0x530(0x08)
	struct UBorder* NullWrapBorder; // 0x538(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x540(0x08)
	struct UImage* WrapTypeGradient; // 0x548(0x08)
	struct UWidgetSwitcher* WrapTypeIconSwitcher; // 0x550(0x08)
	struct USizeBox* WrapTypeIconWrapper; // 0x558(0x08)
	struct FText WeaponSlotHeadingText; // 0x560(0x18)
	struct FMulticastInlineDelegate OnHover; // 0x578(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x588(0x10)
	struct FMulticastInlineDelegate OnCosmeticClicked; // 0x598(0x10)
	enum class EMercCosmeticSlot SlotType; // 0x5a8(0x01)
	char UnknownData_5A9[0x3]; // 0x5a9(0x03)
	int32_t SlotIndex; // 0x5ac(0x04)
	bool bShowCornerIcon; // 0x5b0(0x01)
	enum class EWeaponSlot WeaponSlotType; // 0x5b1(0x01)
	bool bIsSelector; // 0x5b2(0x01)
	char UnknownData_5B3[0x5]; // 0x5b3(0x05)
	struct FCosmeticSlotDetails CosmeticDetails; // 0x5b8(0x18)
	struct UPUMG_StoreItem* StoreItem; // 0x5d0(0x08)
	struct UAkAudioEvent* ClickCosmeticItemDisplaySFX; // 0x5d8(0x08)
	struct UAkAudioEvent* HoverCosmeticItemDisplaySFX; // 0x5e0(0x08)
	bool bDisableLockIcon; // 0x5e8(0x01)

	void ReverseBackgroundHoverNoZoom(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ReverseBackgroundHoverNoZoom
	void BackgroundHoverNoZoom(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.BackgroundHoverNoZoom
	void SetItemOwned(struct UPUMG_StoreItem* StoreItem); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
	bool NavigateConfirm(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
	void ResetSlot(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
	void SetWeaponSlot(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
	void SetCornerIcon(bool bShowIcon, struct TSoftObjectPtr<struct UTexture2D> SoftTexture2DObject); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
	void SetCosmeticSlot(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
	void OnClickSound(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
	void OnHoverSound(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
	void PopulateSlot(struct UKSItem* KSItem, struct UKSJobItem* AssiocatedJobItem, struct UPUMG_StoreItem* StoreItem); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
	void Construct(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
	void OnHovered(bool IsGamepad); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
	void OnButtonUnhovered(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
	void PreConstruct(bool IsDesignTime); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
	void OnButtonClicked(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
	void GamepadHover(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
	void GamepadUnhover(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
	void CallHovered(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
	void CallUnhovered(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
	void SetSlotActive(bool Active); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
	void ExecuteUbergraph_WBP_KSCosmeticItemDisplay(int32_t EntryPoint); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
	void OnCosmeticClicked__DelegateSignature(struct UWBP_KSCosmeticItemDisplay_C* Widget, struct FCosmeticSlotDetails CosmeticSlotDetails); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
	void OnUnhover__DelegateSignature(); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
	void OnHover__DelegateSignature(struct FCosmeticSlotDetails CosmeticSlotDetails, bool IsGamepad, struct UWBP_KSCosmeticItemDisplay_C* Widget); // Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
};

