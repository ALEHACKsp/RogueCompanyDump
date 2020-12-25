// WidgetBlueprintGeneratedClass WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C
// Size: 0x560 (Inherited: 0x4e0)
struct UWBP_PartyModuleCardSlot_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Addbutton_Fill; // 0x4e8(0x08)
	struct UOverlay* AddButton_Hover; // 0x4f0(0x08)
	struct UImage* Addbutton_HoverGradient; // 0x4f8(0x08)
	struct UImage* Addbutton_Stroke; // 0x500(0x08)
	struct UOverlay* AddButton_Up; // 0x508(0x08)
	struct UImage* AddButtonHover; // 0x510(0x08)
	struct UImage* AddButtonPlus; // 0x518(0x08)
	struct UButton* EmptySlotGroup; // 0x520(0x08)
	struct UImage* Image_355; // 0x528(0x08)
	struct UImage* PlayBtn_HoverStroke; // 0x530(0x08)
	struct UWBP_player_card_module_C* PlayerCard; // 0x538(0x08)
	struct UOverlay* SuggestionGroup; // 0x540(0x08)
	struct UWidgetSwitcher* Switcher; // 0x548(0x08)
	struct UAkAudioEvent* HoverPartyModuleCardSlotSFX; // 0x550(0x08)
	struct UAkAudioEvent* ClickPartyModuleCardSlotSFX; // 0x558(0x08)

	bool NavigateConfirm(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.NavigateConfirm
	void SetPlayerView(struct UPUMG_PlayerInfo* Player Info); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetPlayerView
	void SetEmptyView(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.SetEmptyView
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.InitializeWidget
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.BndEvt__EmptySlotGroup_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.GamepadUnhover
	void Add Party Member Selected(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Selected
	void Add Party Member Hovered(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Hovered
	void Add Party Member Unhovered(); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.Add Party Member Unhovered
	void ExecuteUbergraph_WBP_PartyModuleCardSlot(int32_t EntryPoint); // Function WBP_PartyModuleCardSlot.WBP_PartyModuleCardSlot_C.ExecuteUbergraph_WBP_PartyModuleCardSlot
};

