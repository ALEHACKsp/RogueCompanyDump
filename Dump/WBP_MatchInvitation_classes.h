// WidgetBlueprintGeneratedClass WBP_MatchInvitation.WBP_MatchInvitation_C
// Size: 0x548 (Inherited: 0x4f8)
struct UWBP_MatchInvitation_C : public UKSMatchInvitationModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* Show; // 0x500(0x08)
	struct UImage* BlockerBkg; // 0x508(0x08)
	struct UWBP_StandardButtonLarge_C* Confirm; // 0x510(0x08)
	struct UWBP_StandardButtonLarge_C* Decline; // 0x518(0x08)
	struct UVerticalBox* InvitationState; // 0x520(0x08)
	struct UTextBlock* InviteMessage; // 0x528(0x08)
	struct UCanvasPanel* MainWrapper; // 0x530(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x538(0x08)
	struct UAkAudioEvent* ShowMatchInvitationSFX; // 0x540(0x08)

	void BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ShowInvitation(struct UKSPlayerInfo* playerinfo, struct FClientQueueInfo QueueInfo); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation
	void ShowError(struct FText ErrorMessage); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence
	void InitializeWidgetNavigation(); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation
	void OnHideAnimFinished(); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished
	void ExecuteUbergraph_WBP_MatchInvitation(int32_t EntryPoint); // Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation
};

