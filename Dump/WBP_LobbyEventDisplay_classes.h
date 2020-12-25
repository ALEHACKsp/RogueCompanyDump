// WidgetBlueprintGeneratedClass WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C
// Size: 0x5b8 (Inherited: 0x4e0)
struct UWBP_LobbyEventDisplay_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* HighlightCompleted; // 0x4e8(0x08)
	struct UWidgetAnimation* OnClick; // 0x4f0(0x08)
	struct UWidgetAnimation* Highlight; // 0x4f8(0x08)
	struct UImage* Btn_BkgHoverGradient; // 0x500(0x08)
	struct UImage* Btn_BkgPress; // 0x508(0x08)
	struct UImage* Btn_Fill; // 0x510(0x08)
	struct UImage* Btn_HoverStroke; // 0x518(0x08)
	struct UImage* Btn_Stroke; // 0x520(0x08)
	struct UOverlay* ButtonBackground; // 0x528(0x08)
	struct UImage* CheckMark_2; // 0x530(0x08)
	struct UTextBlock* EventName; // 0x538(0x08)
	struct UWBP_ProgressEarnedBar_C* EventProgress; // 0x540(0x08)
	struct UWBP_Header3_C* EventsHeader; // 0x548(0x08)
	struct UTextBlock* EventXPText; // 0x550(0x08)
	struct UImage* Fill; // 0x558(0x08)
	struct UImage* Fill_2; // 0x560(0x08)
	struct UImage* FillInterior_2; // 0x568(0x08)
	struct UOverlay* FinishedItemIcon_2; // 0x570(0x08)
	struct UButton* HitTarget; // 0x578(0x08)
	struct UOverlay* NormalItemIcon; // 0x580(0x08)
	struct UTextBlock* RewardCountText; // 0x588(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RewardItem; // 0x590(0x08)
	bool IsFinished; // 0x598(0x01)
	char UnknownData_599[0x7]; // 0x599(0x07)
	struct UAkAudioEvent* ClickLobbyEventDisplaySFX; // 0x5a0(0x08)
	struct UAkAudioEvent* HoverLobbyEventDisplaySFX; // 0x5a8(0x08)
	struct UAkAudioEvent* OverlayLobbyEventDisplaySFX; // 0x5b0(0x08)

	bool NavigateConfirmPressed(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.NavigateConfirmPressed
	void UpdateProgressBar(int32_t CurrentTierXP, int32_t NeededTierXP); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.UpdateProgressBar
	void RefreshDisplay(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.RefreshDisplay
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	void GamepadHover(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.GamepadHover
	void GamepadUnhover(); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.GamepadUnhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.InitializeWidget
	void OnActivityProgressInitialized(struct UKSActivityInstance* Activity, int32_t Count); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.OnActivityProgressInitialized
	void ExecuteUbergraph_WBP_LobbyEventDisplay(int32_t EntryPoint); // Function WBP_LobbyEventDisplay.WBP_LobbyEventDisplay_C.ExecuteUbergraph_WBP_LobbyEventDisplay
};

