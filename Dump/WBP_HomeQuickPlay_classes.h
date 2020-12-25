// WidgetBlueprintGeneratedClass WBP_HomeQuickPlay.WBP_HomeQuickPlay_C
// Size: 0x830 (Inherited: 0x4f8)
struct UWBP_HomeQuickPlay_C : public UKSQuickPlayWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* SupplementaryBtnClick; // 0x500(0x08)
	struct UWidgetAnimation* SupplementaryBtnHover_Disabled; // 0x508(0x08)
	struct UWidgetAnimation* PlayBtnClick; // 0x510(0x08)
	struct UWidgetAnimation* PlayButtonMode; // 0x518(0x08)
	struct UWidgetAnimation* SupplementaryBtnHover; // 0x520(0x08)
	struct UWidgetAnimation* PlayBtnHover; // 0x528(0x08)
	struct UImage* AffirmativeIcon; // 0x530(0x08)
	struct USizeBox* GamemodeDisplayWrapper; // 0x538(0x08)
	struct UTextBlock* GameModeNameTextForJoin; // 0x540(0x08)
	struct UTextBlock* GameModeNameTextForStatus; // 0x548(0x08)
	struct UImage* PlayBtn_Fill; // 0x550(0x08)
	struct UImage* PlayBtn_HoverFill; // 0x558(0x08)
	struct UImage* PlayBtn_HoverStroke; // 0x560(0x08)
	struct UImage* PlayBtn_Stroke; // 0x568(0x08)
	struct UImage* PlayBtnEdge_EdgeDeco; // 0x570(0x08)
	struct UImage* PlayBtnGamepadCallout; // 0x578(0x08)
	struct UStandardButtonNoArt_C* PlayBtnHitTarget; // 0x580(0x08)
	struct UImage* PlayBtnStatus_Fill; // 0x588(0x08)
	struct UImage* PlayBtnStatus_HoverFill; // 0x590(0x08)
	struct UImage* PlayBtnStatus_HoverStroke; // 0x598(0x08)
	struct UImage* PlayBtnStatus_Stroke; // 0x5a0(0x08)
	struct UOverlay* PlayButton_JoinMode; // 0x5a8(0x08)
	struct UOverlay* PlayButton_StatusMode; // 0x5b0(0x08)
	struct UImage* PlayIcon; // 0x5b8(0x08)
	struct UWidgetSwitcher* StatusIconSwitcherLeft_2; // 0x5c0(0x08)
	struct UTextBlock* StatusMsgText; // 0x5c8(0x08)
	struct UScaleBox* StatusMsgWrapper; // 0x5d0(0x08)
	struct UImage* SupplementaryBtn_EdgeDeco; // 0x5d8(0x08)
	struct UImage* SupplementaryBtn_Fill; // 0x5e0(0x08)
	struct UImage* SupplementaryBtn_HoverFill; // 0x5e8(0x08)
	struct UImage* SupplementaryBtn_HoverStroke; // 0x5f0(0x08)
	struct UImage* SupplementaryBtn_Stroke; // 0x5f8(0x08)
	struct UOverlay* SupplementaryBtnChangeMode; // 0x600(0x08)
	struct UImage* SupplementaryBtnGamepadCallout; // 0x608(0x08)
	struct UStandardButtonNoArt_C* SupplementaryBtnHitTarget; // 0x610(0x08)
	struct UTextBlock* SupplementaryBtnLabel; // 0x618(0x08)
	struct UOverlay* SupplementaryBtnOverlay; // 0x620(0x08)
	struct UOverlay* SupplementaryBtnStandardWrapper; // 0x628(0x08)
	struct UImage* WarningIcon; // 0x630(0x08)
	bool KeyShortcutsEnabled; // 0x638(0x01)
	char UnknownData_639[0x3]; // 0x639(0x03)
	int32_t CurrentPenaltyTimeLeft; // 0x63c(0x04)
	struct FText StatusMsg_Unknown; // 0x640(0x18)
	struct FText StatusMsg_NoQueuesAvailable; // 0x658(0x18)
	struct FText StatusMsg_NoSelection; // 0x670(0x18)
	struct FText StatusMsg_QueueUnavailable; // 0x688(0x18)
	struct FText StatusMsg_PartyLimit; // 0x6a0(0x18)
	struct FText StatusMsg_ReadyToJoin; // 0x6b8(0x18)
	struct FText StatusMsg_WaitingForLeader; // 0x6d0(0x18)
	struct FText StatusMsg_QueuedStatus; // 0x6e8(0x18)
	struct FText StatusMsg_EnteringMatch; // 0x700(0x18)
	struct FText StatusMsg_PartyLevel; // 0x718(0x18)
	struct FText StatusMsg_PlayerLevel; // 0x730(0x18)
	struct FText StatusMsg_DeserterStatus; // 0x748(0x18)
	struct FText Msg_ChooseGamemode; // 0x760(0x18)
	struct FText Msg_CancelSearch; // 0x778(0x18)
	bool bPlayBtnEnabled; // 0x790(0x01)
	bool bSupplementaryBtnEnabled; // 0x791(0x01)
	char UnknownData_792[0x6]; // 0x792(0x06)
	struct FMulticastInlineDelegate TriggerStatusModeDisplayUpdate; // 0x798(0x10)
	bool bForceFirstTimeUpdate; // 0x7a8(0x01)
	char UnknownData_7A9[0x3]; // 0x7a9(0x03)
	float CurrentQueueTimeElapsed; // 0x7ac(0x04)
	struct FText Msg_ReadyToRejoin; // 0x7b0(0x18)
	struct FText Msg_LeaveMatch; // 0x7c8(0x18)
	struct FText Msg_LeaveCustomMatch; // 0x7e0(0x18)
	struct FTimerHandle PendingQueueUpdateTimer; // 0x7f8(0x08)
	float PendingQueueUpdateTimeoutTime; // 0x800(0x04)
	bool MsgLeaveCustomLobby; // 0x804(0x01)
	char UnknownData_805[0x3]; // 0x805(0x03)
	struct UAkAudioEvent* ClickPlayBtnHomeQuickPlaySFX; // 0x808(0x08)
	struct UAkAudioEvent* ClickCancelBtnHomeQuickPlaySFX; // 0x810(0x08)
	struct FText StatusMsg_PartyLimitMin; // 0x818(0x18)

	void GetDeserterStatusMessage(struct FText OutDisplayText); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetDeserterStatusMessage
	void Apply Pending Display(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Apply Pending Display
	void ForceVisualState(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceVisualState
	void UpdateQueueTimer(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateQueueTimer
	void UpdateStatusModeDisplay(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateStatusModeDisplay
	void UpdateDeserterCountdown(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.UpdateDeserterCountdown
	void HandleQuickPlayStateUpdate(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleQuickPlayStateUpdate
	void TogglePlayBtnEnabled(bool InIsEnabled); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TogglePlayBtnEnabled
	void ToggleSupplementaryBtnEnabled(bool InIsEnabled); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ToggleSupplementaryBtnEnabled
	void ApplyKeyShortcutsEnabled(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ApplyKeyShortcutsEnabled
	void GetNavigationWidgets(struct TArray<struct UPUMG_Widget*> Return Value); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.GetNavigationWidgets
	void HandleInputModeChanged(char InputMode); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleInputModeChanged
	void SetCurrentGameModeTextDisplay(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetCurrentGameModeTextDisplay
	void SetupGamepadCallout(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.SetupGamepadCallout
	void ForceClickPlayButton(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickPlayButton
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void ForceClickSupplementaryButton(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceClickSupplementaryButton
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
	void BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
	void BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.BndEvt__SupplementaryBtnHitTarget_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
	void ForceUnhoverSupplementaryBtn(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceUnhoverSupplementaryBtn
	void ForceHoverSupplementaryBtn(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ForceHoverSupplementaryBtn
	void OnUpdateQuickPlayState(enum class EQuickPlayQueueState QueueState); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQuickPlayState
	void OnUpdatePenaltyTimeLeft(int32_t TimeLeft); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdatePenaltyTimeLeft
	void OnSelectedQueueUpdate(struct FClientQueueInfo CurrentSelectedQueue); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnSelectedQueueUpdate
	void OnQueueStateUpdate(enum class EPUMG_MatchStatus CurrentMatchStatus); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnQueueStateUpdate
	void OnTransitionAnimationFinished(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnTransitionAnimationFinished
	void HandleTriggerStatusModeEvent(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleTriggerStatusModeEvent
	void OnUpdateQueueTimeElapsed(float TimeElapsed); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnUpdateQueueTimeElapsed
	void Pending Queue Update Timeout(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.Pending Queue Update Timeout
	void OnInitialized(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.OnInitialized
	void HandleCustomQueueUpdate(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.HandleCustomQueueUpdate
	void InitializeWidgetNavigation(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.InitializeWidgetNavigation
	void ExecuteUbergraph_WBP_HomeQuickPlay(int32_t EntryPoint); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.ExecuteUbergraph_WBP_HomeQuickPlay
	void TriggerStatusModeDisplayUpdate__DelegateSignature(); // Function WBP_HomeQuickPlay.WBP_HomeQuickPlay_C.TriggerStatusModeDisplayUpdate__DelegateSignature
};

