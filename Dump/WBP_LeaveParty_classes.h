// WidgetBlueprintGeneratedClass WBP_LeaveParty.WBP_LeaveParty_C
// Size: 0x548 (Inherited: 0x4e0)
struct UWBP_LeaveParty_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UImage* BackgroundImage; // 0x4f0(0x08)
	struct UButton* Button_102; // 0x4f8(0x08)
	struct UImage* ButtonCallout; // 0x500(0x08)
	struct UOverlay* GamepadCalloutWrapper; // 0x508(0x08)
	struct UTextBlock* LeaveLabel; // 0x510(0x08)
	struct UImage* TabBar; // 0x518(0x08)
	struct UKSPartyDataFactory* PartyDF; // 0x520(0x08)
	struct FMulticastInlineDelegate OnpartyLeaveVisibilityChange; // 0x528(0x10)
	struct UAkAudioEvent* ClickLeavePartySFX; // 0x538(0x08)
	struct UAkAudioEvent* HoverLeavePartySFX; // 0x540(0x08)

	bool NavigateConfirm(); // Function WBP_LeaveParty.WBP_LeaveParty_C.NavigateConfirm
	void HandleInputStateChanged(char CurrentInputState); // Function WBP_LeaveParty.WBP_LeaveParty_C.HandleInputStateChanged
	void SocialLeavePartyHoverSFX(); // Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyHoverSFX
	void SocialLeavePartyClickSFX(); // Function WBP_LeaveParty.WBP_LeaveParty_C.SocialLeavePartyClickSFX
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_LeaveParty.WBP_LeaveParty_C.InitializeWidget
	void HandlePartyUpdated(); // Function WBP_LeaveParty.WBP_LeaveParty_C.HandlePartyUpdated
	void CallLeaveParty(); // Function WBP_LeaveParty.WBP_LeaveParty_C.CallLeaveParty
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_LeaveParty.WBP_LeaveParty_C.BndEvt__Button_101_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadHover
	void GamepadUnhover(); // Function WBP_LeaveParty.WBP_LeaveParty_C.GamepadUnhover
	void ExecuteUbergraph_WBP_LeaveParty(int32_t EntryPoint); // Function WBP_LeaveParty.WBP_LeaveParty_C.ExecuteUbergraph_WBP_LeaveParty
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible); // Function WBP_LeaveParty.WBP_LeaveParty_C.OnPartyLeaveVisibilityChange__DelegateSignature
};

