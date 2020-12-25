// WidgetBlueprintGeneratedClass WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C
// Size: 0x564 (Inherited: 0x4e0)
struct UWBP_CreateCustomGame_MapButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnHover; // 0x4e8(0x08)
	struct UImage* ActiveFrame; // 0x4f0(0x08)
	struct UButton* HitTarget; // 0x4f8(0x08)
	struct UWBP_QuickPlay_MapThumbnail_C* WBP_QuickPlay_MapThumbnail; // 0x500(0x08)
	struct FMulticastInlineDelegate OnMapSelected; // 0x508(0x10)
	struct FMapDetail MapInfo; // 0x518(0x48)
	int32_t MapId; // 0x560(0x04)

	bool NavigateConfirm(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm
	void SetMap(int32_t MapId, struct FMapDetail MapInfo); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap
	void BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget
	void GamepadHover(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void OnGamepadConfirm(); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm
	void ExecuteUbergraph_WBP_CreateCustomGame_MapButton(int32_t EntryPoint); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton
	void OnMapSelected__DelegateSignature(int32_t MapId); // Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature
};

