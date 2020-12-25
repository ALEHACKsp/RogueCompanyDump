// WidgetBlueprintGeneratedClass WBP_StoreButtonLarge.WBP_StoreButtonLarge_C
// Size: 0x560 (Inherited: 0x4e0)
struct UWBP_StoreButtonLarge_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* CompareHover; // 0x4e8(0x08)
	struct UWidgetAnimation* ShowCompare; // 0x4f0(0x08)
	struct UWidgetAnimation* SlideLeftToPrimary; // 0x4f8(0x08)
	struct UWidgetAnimation* SlideLeftToSecondary; // 0x500(0x08)
	struct UImage* CompareBG; // 0x508(0x08)
	struct UButton* CompareButton; // 0x510(0x08)
	struct UImage* ComparePrompt; // 0x518(0x08)
	struct UWBP_StoreItemInterior_C* PrimaryStoreItem; // 0x520(0x08)
	struct UWBP_StoreItemInterior_C* SecondaryStoreItem; // 0x528(0x08)
	struct UWBP_StoreItemRotator_C* StoreItemRotator; // 0x530(0x08)
	struct UWBP_StorePanelButton_C* WBP_StorePanelButton; // 0x538(0x08)
	struct UKSStoreSectionItem* MySection; // 0x540(0x08)
	int32_t CurrentStoreIndex; // 0x548(0x04)
	bool IsRotating; // 0x54c(0x01)
	char UnknownData_54D[0x3]; // 0x54d(0x03)
	float TimeVisible; // 0x550(0x04)
	bool CanCompare; // 0x554(0x01)
	char UnknownData_555[0x3]; // 0x555(0x03)
	float MaxTimeVisible; // 0x558(0x04)
	float ROTATION_TIMER_INTERVAL; // 0x55c(0x04)

	void OnRotationTimerTick(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick
	void OnInputStateChanged(char InputState); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged
	bool NavigateConfirm(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm
	void DisplayStoreItem(struct UPUMG_StoreItem* StoreItem, bool Animate); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem
	void SetStoreItems(struct UKSStoreSectionItem* StoreSection); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems
	void GamepadUnhover(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover
	void OnGamepadConfirm(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
	void OnComparePressed(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover
	void Construct(); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget
	void ExecuteUbergraph_WBP_StoreButtonLarge(int32_t EntryPoint); // Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge
};

