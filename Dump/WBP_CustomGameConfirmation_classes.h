// WidgetBlueprintGeneratedClass WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C
// Size: 0x568 (Inherited: 0x4e0)
struct UWBP_CustomGameConfirmation_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UHorizontalBox* ButtonWrapper; // 0x4e8(0x08)
	struct UPopupButton_C* CancelButton; // 0x4f0(0x08)
	struct UPopupButton_C* CreateButton; // 0x4f8(0x08)
	struct UTextBlock* CustomMatchMsg; // 0x500(0x08)
	struct UImage* Decro; // 0x508(0x08)
	struct UImage* Image_114; // 0x510(0x08)
	struct UKSAsyncImage* MapImage; // 0x518(0x08)
	struct USizeBox* MapImageContainer; // 0x520(0x08)
	struct UTextBlock* Title; // 0x528(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x530(0x08)
	struct FMulticastInlineDelegate OnCancelLobby; // 0x538(0x10)
	struct FMulticastInlineDelegate OnCreateLobby; // 0x548(0x10)
	struct UKSQueueDataFactory* QueueDataFactory; // 0x558(0x08)
	int32_t QueueId; // 0x560(0x04)
	int32_t MapId; // 0x564(0x04)

	void InitalizeButtons(); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons
	void GetButtons(struct TArray<struct UKSWidget*> Buttons); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons
	void PopulateCustomPopup(int32_t QueueId, int32_t MapId); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Index); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int32_t Index); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature(); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature
	void ExecuteUbergraph_WBP_CustomGameConfirmation(int32_t EntryPoint); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation
	void OnCreateLobby__DelegateSignature(int32_t QueueId); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature
	void OnCancelLobby__DelegateSignature(); // Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature
};

