// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C
// Size: 0x5f0 (Inherited: 0x4e0)
struct UWBP_QuickPlay_QueueButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hoveranim; // 0x4e8(0x08)
	struct UTextBlock* ButtonText; // 0x4f0(0x08)
	struct UImage* WarningIcon; // 0x4f8(0x08)
	struct UWBP_Graphic_Button_C* WBP_Graphic_Button; // 0x500(0x08)
	struct FMulticastInlineDelegate OnQueueBtnClicked; // 0x508(0x10)
	struct FMulticastInlineDelegate OnQueueBtnHovered; // 0x518(0x10)
	struct FMulticastInlineDelegate OnQueueBtnUnhovered; // 0x528(0x10)
	struct FClientQueueInfo QueueInfo; // 0x538(0xb8)

	void UpdateStatus(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.UpdateStatus
	bool NavigateConfirm(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.NavigateConfirm
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature(bool IsGamepad); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.InitializeWidget
	void Construct(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.Construct
	void OnButtonHovered(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonHovered
	void OnButtonUnhovered(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnButtonUnhovered
	void GamepadHover(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadUnhover
	void GamepadConfirm(); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.GamepadConfirm
	void SetButtonActive(bool bIsActive); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.SetButtonActive
	void PreConstruct(bool IsDesignTime); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.PreConstruct
	void ExecuteUbergraph_WBP_QuickPlay_QueueButton(int32_t EntryPoint); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.ExecuteUbergraph_WBP_QuickPlay_QueueButton
	void OnQueueBtnUnhovered__DelegateSignature(struct UWidget* UnhoverWidget); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
	void OnQueueBtnHovered__DelegateSignature(struct UWidget* HoveredWidget); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnHovered__DelegateSignature
	void OnQueueBtnClicked__DelegateSignature(int32_t QueueId); // Function WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C.OnQueueBtnClicked__DelegateSignature
};

