// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C
// Size: 0x523 (Inherited: 0x4e0)
struct UWBP_PlayerStatus_ContextMenuOption_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UTextBlock* OptionText; // 0x4f0(0x08)
	struct UImage* SelectGamepadIcon; // 0x4f8(0x08)
	struct UWBP_ButtonStacked_C* WBP_ButtonStacked; // 0x500(0x08)
	char Assigned Context Option; // 0x508(0x01)
	char UnknownData_509[0x7]; // 0x509(0x07)
	struct FMulticastInlineDelegate OnContextOptionSelected; // 0x510(0x10)
	bool IsActiveInMenu; // 0x520(0x01)
	char Current Input State; // 0x521(0x01)
	bool Is Hovered; // 0x522(0x01)

	bool NavigateConfirm(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm
	void IsActiveForNavigation(bool Return Value); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation
	void Update Callout Visibility(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility
	void SocialPlayerContextMenuOptionClickSFX(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
	void SocialPlayerContextMenuOptionHoverSFX(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct
	void SetActiveInMenu(bool IsActive); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.InitializeWidget
	void Handle Input State Changed(char InputState); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed
	void GamepadHover(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.GamepadUnhover
	void Construct(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Construct
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature(); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption(int32_t EntryPoint); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption
	void OnContextOptionSelected__DelegateSignature(char Context Option); // Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.OnContextOptionSelected__DelegateSignature
};

