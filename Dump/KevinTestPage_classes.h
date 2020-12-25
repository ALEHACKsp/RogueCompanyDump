// WidgetBlueprintGeneratedClass KevinTestPage.KevinTestPage_C
// Size: 0x55c (Inherited: 0x4e0)
struct UKevinTestPage_C : public UKSKevinTest {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UBackButton_C* BackButton; // 0x4e8(0x08)
	struct UCanvasPanel* Blank; // 0x4f0(0x08)
	struct UComboBoxString* ExampleSelector; // 0x4f8(0x08)
	struct UCanvasPanel* ItemHelper; // 0x500(0x08)
	struct UWrapBox* ItemHelperItems; // 0x508(0x08)
	struct UButton* PurchaseButton; // 0x510(0x08)
	struct UTextBlock* PurchaseButtonText; // 0x518(0x08)
	struct UCanvasPanel* PurchasePanel; // 0x520(0x08)
	struct TArray<struct UPUMG_Widget*> Buttons; // 0x528(0x10)
	struct TArray<struct UCanvasPanel*> Scenes; // 0x538(0x10)
	struct AKSHUDCommon* HUD; // 0x548(0x08)
	struct UPUMG_StoreItem* ItemToPurchase; // 0x550(0x08)
	int32_t ItemHelperVendorRequestGroupId; // 0x558(0x04)

	void Intialize Item Helper Example(struct AKSLobbyHUDNew* HUD); // Function KevinTestPage.KevinTestPage_C.Intialize Item Helper Example
	void OnShowPurchaseModal(struct UPUMG_StoreItem* Item, struct UPUMG_StoreItemPrice* Price); // Function KevinTestPage.KevinTestPage_C.OnShowPurchaseModal
	void OnNeedMoreMoney(struct UPUMG_StorePurchaseRequest* Purchase Request); // Function KevinTestPage.KevinTestPage_C.OnNeedMoreMoney
	void OnVendorReceived(int32_t GroupId, struct TArray<int32_t> VendorIds); // Function KevinTestPage.KevinTestPage_C.OnVendorReceived
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function KevinTestPage.KevinTestPage_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function KevinTestPage.KevinTestPage_C.InitializeWidget
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature(); // Function KevinTestPage.KevinTestPage_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature
	void Construct(); // Function KevinTestPage.KevinTestPage_C.Construct
	void BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, char SelectionType); // Function KevinTestPage.KevinTestPage_C.BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	void ExecuteUbergraph_KevinTestPage(int32_t EntryPoint); // Function KevinTestPage.KevinTestPage_C.ExecuteUbergraph_KevinTestPage
};

