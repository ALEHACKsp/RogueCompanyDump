// WidgetBlueprintGeneratedClass WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C
// Size: 0x5c8 (Inherited: 0x4e0)
struct UWBP_RogueMasteryTrackLevel_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* SelectedPulse; // 0x4e8(0x08)
	struct UWidgetAnimation* OnSelect; // 0x4f0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4f8(0x08)
	struct UHorizontalBox* GamepadNavCallouts; // 0x500(0x08)
	struct UButton* HitTarget; // 0x508(0x08)
	struct UHorizontalBox* NextCalloutSection; // 0x510(0x08)
	struct UHorizontalBox* PreviousCalloutSection; // 0x518(0x08)
	struct UHorizontalBox* RewardsContainer; // 0x520(0x08)
	struct UOverlay* RewardsWrapper; // 0x528(0x08)
	struct UImage* SelectedGradientBack; // 0x530(0x08)
	struct UImage* SideGlow; // 0x538(0x08)
	struct UImage* SideGlow_2; // 0x540(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x548(0x08)
	struct UWBP_AdditiveImage_C* WBP_AdditiveImage; // 0x550(0x08)
	struct UWBP_RogueMasteryIcon_C* WBP_MercMasteryIcon; // 0x558(0x08)
	struct FMulticastInlineDelegate OnTrackLevelSelected; // 0x560(0x10)
	struct FActivityTier ActivityData; // 0x570(0x40)
	char InputState; // 0x5b0(0x01)
	bool IsSelected; // 0x5b1(0x01)
	bool IsAchieved; // 0x5b2(0x01)
	char UnknownData_5B3[0x5]; // 0x5b3(0x05)
	struct UAkAudioEvent* ClickStandardBtnInnerSFX; // 0x5b8(0x08)
	struct UAkAudioEvent* HoverStandardBtnInnerSFX; // 0x5c0(0x08)

	void HideEdgeNavCallouts(int32_t TierNumber); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.HideEdgeNavCallouts
	void SetSelected(bool Selected); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.SetSelected
	void UpdateGamepadPromptState(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.UpdateGamepadPromptState
	void OnInputStateChanged(char InputState); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnInputStateChanged
	void Set Tier Data(struct FActivityTier ActivityTier, int32_t CurrentTier); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Set Tier Data
	void Construct(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.Construct
	void BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.BndEvt__Button_339_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadHover
	void GamepadUnhover(); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.GamepadUnhover
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.InitializeWidget
	void ExecuteUbergraph_WBP_RogueMasteryTrackLevel(int32_t EntryPoint); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.ExecuteUbergraph_WBP_RogueMasteryTrackLevel
	void OnTrackLevelSelected__DelegateSignature(struct FActivityTier Activity); // Function WBP_RogueMasteryTrackLevel.WBP_RogueMasteryTrackLevel_C.OnTrackLevelSelected__DelegateSignature
};

