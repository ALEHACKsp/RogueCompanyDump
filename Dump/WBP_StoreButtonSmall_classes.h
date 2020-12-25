// WidgetBlueprintGeneratedClass WBP_StoreButtonSmall.WBP_StoreButtonSmall_C
// Size: 0x53c (Inherited: 0x4e0)
struct UWBP_StoreButtonSmall_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4e8(0x08)
	struct UWidgetAnimation* SlideLeftToPrimary; // 0x4f0(0x08)
	struct UWidgetAnimation* SlideLeftToSecondary; // 0x4f8(0x08)
	struct UWBP_StoreItemInterior_C* PrimaryStoreItem; // 0x500(0x08)
	struct UWBP_StoreItemInterior_C* SecondaryStoreItem; // 0x508(0x08)
	struct UWBP_StoreItemRotator_C* StoreItemRotator; // 0x510(0x08)
	struct UWBP_StorePanelButton_C* WBP_StorePanelButton; // 0x518(0x08)
	struct UKSStoreSectionItem* MyStoreSection; // 0x520(0x08)
	int32_t CurrentStoreIndex; // 0x528(0x04)
	bool IsRotating; // 0x52c(0x01)
	char UnknownData_52D[0x3]; // 0x52d(0x03)
	float TimeVisible; // 0x530(0x04)
	float MaxTimeVisible; // 0x534(0x04)
	float ROTATION_TIMER_INTERVAL; // 0x538(0x04)

	void OnRotationTimerTick(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnRotationTimerTick
	bool NavigateConfirm(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.NavigateConfirm
	void DisplayStoreItem(struct UPUMG_StoreItem* StoreItem, bool Animate); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.DisplayStoreItem
	void SetStoreItems(struct UKSStoreSectionItem* StoreItem); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.SetStoreItems
	void Construct(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Tick
	void GamepadHover(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadHover
	void GamepadUnhover(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadUnhover
	void OnGamepadConfirm(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnGamepadConfirm
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature(); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
	void ExecuteUbergraph_WBP_StoreButtonSmall(int32_t EntryPoint); // Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.ExecuteUbergraph_WBP_StoreButtonSmall
};

