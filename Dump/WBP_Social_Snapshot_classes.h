// WidgetBlueprintGeneratedClass WBP_Social_Snapshot.WBP_Social_Snapshot_C
// Size: 0x590 (Inherited: 0x4e8)
struct UWBP_Social_Snapshot_C : public UKSSocialWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* Click; // 0x4f0(0x08)
	struct UWidgetAnimation* Hover; // 0x4f8(0x08)
	struct UImage* Btn_BkgHoverGradient; // 0x500(0x08)
	struct UImage* Btn_BkgPress; // 0x508(0x08)
	struct UImage* Btn_Fill; // 0x510(0x08)
	struct UImage* Btn_HoverStroke; // 0x518(0x08)
	struct UImage* Btn_Stroke; // 0x520(0x08)
	struct UOverlay* ButtonBackground; // 0x528(0x08)
	struct UScaleBox* CTAWrapper; // 0x530(0x08)
	struct UImage* FriendsOnlineIcon; // 0x538(0x08)
	struct UTextBlock* FriendsOnlineText; // 0x540(0x08)
	struct UWBP_ControllerPrompt_C* GamepadPrompt; // 0x548(0x08)
	struct UButton* HitTarget; // 0x550(0x08)
	struct UImage* PartyIcon; // 0x558(0x08)
	struct UHorizontalBox* PartyList; // 0x560(0x08)
	struct UTextBlock* PartyText; // 0x568(0x08)
	struct USizeBox* PromptWrapper; // 0x570(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x578(0x08)
	struct UAkAudioEvent* HoverSocialSnapshotSFX; // 0x580(0x08)
	struct UAkAudioEvent* ClickSocialSnapshotSFX; // 0x588(0x08)

	bool NavigateConfirm(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.NavigateConfirm
	void UpdateGamepadPrompt(char InputState); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.UpdateGamepadPrompt
	void Update Alerts Counter(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.Update Alerts Counter
	void Construct(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.Construct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void HandleFriendDataUpdated(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.HandleFriendDataUpdated
	void HandlePartyDataUpdated(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.HandlePartyDataUpdated
	void Force Click(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.Force Click
	void OnInputStateChanged(char InputState); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.OnInputStateChanged
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.InitializeWidget
	void PreConstruct(bool IsDesignTime); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.PreConstruct
	void GamepadHover(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.GamepadHover
	void GamepadUnhover(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.GamepadUnhover
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_Social_Snapshot(int32_t EntryPoint); // Function WBP_Social_Snapshot.WBP_Social_Snapshot_C.ExecuteUbergraph_WBP_Social_Snapshot
};

