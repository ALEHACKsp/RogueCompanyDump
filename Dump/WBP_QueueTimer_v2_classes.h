// WidgetBlueprintGeneratedClass WBP_QueueTimer_v2.WBP_QueueTimer_v2_C
// Size: 0x558 (Inherited: 0x4f0)
struct UWBP_QueueTimer_v2_C : public UKSQueueTimerWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* Hover; // 0x4f8(0x08)
	struct UTextBlock* ButtonText; // 0x500(0x08)
	struct UBorder* CancelBg; // 0x508(0x08)
	struct UHorizontalBox* CancelContainer; // 0x510(0x08)
	struct UButton* CancelQueueButton; // 0x518(0x08)
	struct UImage* CancelQueueGamepad; // 0x520(0x08)
	struct UOverlay* Container; // 0x528(0x08)
	struct UBorder* ContentBkg; // 0x530(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x538(0x08)
	struct UTextBlock* StatusLabel; // 0x540(0x08)
	struct UDataTable* ColorPalette; // 0x548(0x08)
	struct UKSQueueDataFactory* QueueDataFactory; // 0x550(0x08)

	void UpdateCancelButton(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
	void SetNeutralLabel(struct FText InText); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
	void GetColorFromPalette(struct FName RowName, struct FLinearColor LinearColor); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
	void UpdatePenaltyTime(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
	void UpdateStatusLabel(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
	void HandleInputStateChanged(char InputState); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
	void SetGamepadCallout(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
	void UpdateQueueTime(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidget
	void Construct(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
	void CancelQueue(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
	void InitializeWidgetNavigation(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetNavigation
	void InitializeWidgetButtonListeners(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.InitializeWidgetButtonListeners
	void PreConstruct(bool IsDesignTime); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	void OnUpdateQueueTime(float TimeSecs); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
	void OnUpdateQueueTimerState(enum class EQueueTimerState State); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
	void OnControlQueuePermissionUpdate(bool CanControl); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
	void ExecuteUbergraph_WBP_QueueTimer_v2(int32_t EntryPoint); // Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
};

