// WidgetBlueprintGeneratedClass WBP_RewardListEntry.WBP_RewardListEntry_C
// Size: 0x5a8 (Inherited: 0x4e0)
struct UWBP_RewardListEntry_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* SelectedPulse; // 0x4e8(0x08)
	struct UWidgetAnimation* OnSelected; // 0x4f0(0x08)
	struct UOverlay* AchievedBorder; // 0x4f8(0x08)
	struct UImage* CompletedCheckmark; // 0x500(0x08)
	struct UImage* CurrentLevelIndicator; // 0x508(0x08)
	struct UButton* HitTest; // 0x510(0x08)
	struct UImage* LevelGlow; // 0x518(0x08)
	struct UImage* ProgressionBar; // 0x520(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* RewardIcon; // 0x528(0x08)
	struct UImage* SelectedGradientBack; // 0x530(0x08)
	struct UVerticalBox* SelectionBackground; // 0x538(0x08)
	struct UOverlay* SelectionForeground; // 0x540(0x08)
	struct UImage* SelectionFrame; // 0x548(0x08)
	struct UImage* SideGlow; // 0x550(0x08)
	struct UImage* SideGlow_2; // 0x558(0x08)
	struct UTextBlock* Text_RewardLevel; // 0x560(0x08)
	struct FMulticastInlineDelegate OnBtnClicked; // 0x568(0x10)
	struct FMulticastInlineDelegate OnBtnHovered; // 0x578(0x10)
	struct FMulticastInlineDelegate OnBtnUnhovered; // 0x588(0x10)
	struct UAkAudioEvent* ClickRewardListEntry; // 0x598(0x08)
	struct UAkAudioEvent* HoverRewardListEntry; // 0x5a0(0x08)

	void HandleGamepadAutoSelect(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.HandleGamepadAutoSelect
	void BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void PopulateSlot(struct UKSActivityInstance* ActivityInstance, struct FActivityTier ActivityTier); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.PopulateSlot
	void GamepadHover(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadHover
	void GamepadUnhover(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.GamepadUnhover
	void BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.BndEvt__HitTest_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void PlaySelected(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlaySelected
	void PlayUnselected(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.PlayUnselected
	void PreConstruct(bool IsDesignTime); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.PreConstruct
	void ExecuteUbergraph_WBP_RewardListEntry(int32_t EntryPoint); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.ExecuteUbergraph_WBP_RewardListEntry
	void OnBtnUnhovered__DelegateSignature(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnUnhovered__DelegateSignature
	void OnBtnHovered__DelegateSignature(); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnHovered__DelegateSignature
	void OnBtnClicked__DelegateSignature(struct UWBP_RewardListEntry_C* Widget, struct FCosmeticSlotDetails RewardSlotDetails, struct UPUMG_StoreItem* StoreItem); // Function WBP_RewardListEntry.WBP_RewardListEntry_C.OnBtnClicked__DelegateSignature
};

