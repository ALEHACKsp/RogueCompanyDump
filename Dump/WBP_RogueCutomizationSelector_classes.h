// WidgetBlueprintGeneratedClass WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C
// Size: 0x680 (Inherited: 0x4e8)
struct UWBP_RogueCutomizationSelector_C : public UKSCustomizationSelection {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* Show; // 0x4f0(0x08)
	struct UWBP_StandardButtonMedium_C* AcceptEquipAll; // 0x4f8(0x08)
	struct UWBP_StandardButtonMedium_C* CancelEquipAll; // 0x500(0x08)
	struct UKSSortableGridPanel* CosmeticItemContainer; // 0x508(0x08)
	struct UWidgetSwitcher* CosmeticSwitcher; // 0x510(0x08)
	struct UTextBlock* EquipAllDesc; // 0x518(0x08)
	struct UCanvasPanel* EquipAllPanel; // 0x520(0x08)
	struct UWBP_ButtonStacked_C* EquipCosmeticBtn; // 0x528(0x08)
	struct UImage* EquippedGamepadIcon; // 0x530(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* EquipToAllIcon; // 0x538(0x08)
	struct UImage* Image_54; // 0x540(0x08)
	struct UWBP_ItemInfoContainer_C* ItemInfoContainer; // 0x548(0x08)
	struct UKSAsyncImage* RogueIcon; // 0x550(0x08)
	struct UScrollBox* ScrollBox_1; // 0x558(0x08)
	struct UWBP_AsyncIcon_C* SprayImage; // 0x560(0x08)
	struct USizeBox* SprayImageContainer; // 0x568(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x570(0x08)
	struct UWBP_Header1_C* WBP_Header1_318; // 0x578(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector; // 0x580(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_2; // 0x588(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_3; // 0x590(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_4; // 0x598(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_5; // 0x5a0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_6; // 0x5a8(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_7; // 0x5b0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_8; // 0x5b8(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_9; // 0x5c0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_10; // 0x5c8(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_11; // 0x5d0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_12; // 0x5d8(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_13; // 0x5e0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_14; // 0x5e8(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_15; // 0x5f0(0x08)
	struct UWBP_KSCosmeticItemSelector_C* WBP_KSCosmeticItemSelector_16; // 0x5f8(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x600(0x08)
	struct TArray<struct UWBP_KSCosmeticItemSelector_C*> CosmeticItems; // 0x608(0x10)
	struct FMulticastInlineDelegate OnEquipCosmeticItem; // 0x618(0x10)
	struct FCosmeticSlotDetails CosmeticSlotDetail; // 0x628(0x18)
	struct UKSMercManager* MercManager; // 0x640(0x08)
	struct UKSLoadoutDataFactory* LouadoutDataFactory; // 0x648(0x08)
	struct AKSLobbyCharacter* MercSelectionCharacter; // 0x650(0x08)
	struct UKSItem* SelectedCosmeticKSItem; // 0x658(0x08)
	struct UKSWeaponAsset* WingSuitAsset; // 0x660(0x08)
	struct UWBP_KSCosmeticItemSelector_C* EquippedSlot; // 0x668(0x08)
	struct UKSItem* HoveredItem; // 0x670(0x08)
	struct UAkAudioEvent* ShowEquipAllRogueCustomSelectSFX; // 0x678(0x08)

	bool OnSortRarityDescNameAsc(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSortRarityDescNameAsc
	void IsEquipAllAllowed(struct UKSItem* Item, bool CanEquipAll); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsEquipAllAllowed
	void DisplayEquipAllPrompt(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.DisplayEquipAllPrompt
	void OnEquipAll(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipAll
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnKeyUp
	void SetEmoteModel(struct UKSItem* CosmeticItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteModel
	void SetEquippedItem(bool IsEquipped, struct UWBP_KSCosmeticItemSelector_C* CosmeticItemSlot, struct UKSItem* KSItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquippedItem
	void SetOwnedItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetOwnedItem
	void BindItemHelper(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BindItemHelper
	void OnPurchaseItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnPurchaseItem
	void AddClearCosmeticSlot(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.AddClearCosmeticSlot
	void IsItemEquipped(struct UKSItem* KSItem, bool IsEquipped); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.IsItemEquipped
	void Set Active States(struct UWBP_KSCosmeticItemSelector_C* ActiveWidget); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Set Active States
	void SetEquipBtn(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEquipBtn
	void SetWingSuitModel(struct UKSItem* CosmeticItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWingSuitModel
	void ResetSprayIcon(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetSprayIcon
	void ResetModels(bool Skip Character); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetModels
	void SetEmoteImage(struct UKSItem* CosmeticItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetEmoteImage
	void ResetCharacter(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCharacter
	void SetWeapon(struct UKSItem* CosmeticItem, struct UKSJobItem* JobItem, enum class EWeaponSlot WeaponSlot); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetWeapon
	void SetModelViewer(struct UKSItem* CosmeticItem, struct FCosmeticSlotDetails CosmeticDetail); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetModelViewer
	void SetCharacterSkin(struct UKSItem* CosmeticItem, struct UKSJobItem* JobItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCharacterSkin
	bool NavigateBack(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.NavigateBack
	void SetContextBar(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetContextBar
	void RegisterNavigation(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.RegisterNavigation
	void ResetCosmeticSelection(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ResetCosmeticSelection
	void SetCosmeticSelection(struct UWBP_KSCosmeticItemDisplay_C* CosmeticDisplayBtn); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.SetCosmeticSelection
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidget
	void OnHover(struct FCosmeticSlotDetails CosmeticDetails, struct UKSItem* KSItem); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHover
	void OnUnhover(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnUnhover
	void OnSelectCosmetic(struct UKSItem* KSItem, struct UWidget* Widget, struct FCosmeticSlotDetails CosmeticDetails); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnSelectCosmetic
	void OnShown(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnShown
	void OnBackPrompt(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.InitializeWidgetNavigation
	void EquipCosmetic(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.EquipCosmetic
	void OnHide(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnHide
	void HandleInputStateChanged(char InputState); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleInputStateChanged
	void HandleOnPurchasedItem(struct UPUMG_StoreItem* Item, struct UPUMG_StoreItemPrice* Price); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.HandleOnPurchasedItem
	void BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void On Close Button Clicked(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.On Close Button Clicked
	void OnItemGamepadHovered(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnItemGamepadHovered
	void Return To Job Preview Model(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Return To Job Preview Model
	void Hide Preview Character(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Hide Preview Character
	void Show Preview Character(); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.Show Preview Character
	void ExecuteUbergraph_WBP_RogueCutomizationSelector(int32_t EntryPoint); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.ExecuteUbergraph_WBP_RogueCutomizationSelector
	void OnEquipCosmeticItem__DelegateSignature(enum class EMercCosmeticSlot SlotType, int32_t SlotIndex, struct UKSItem* Item); // Function WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C.OnEquipCosmeticItem__DelegateSignature
};

