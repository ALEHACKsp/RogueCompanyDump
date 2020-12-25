// WidgetBlueprintGeneratedClass WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C
// Size: 0x52b (Inherited: 0x4e0)
struct UWBP_PlayerContextMenuOption_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct USizeBox* GamepadPromptWrapper; // 0x4f0(0x08)
	struct UTextBlock* OptionText; // 0x4f8(0x08)
	struct UImage* SelectGamepadIcon; // 0x500(0x08)
	struct UWBP_ButtonStacked_C* WBP_ButtonStacked; // 0x508(0x08)
	char Assigned Context Option; // 0x510(0x01)
	char UnknownData_511[0x7]; // 0x511(0x07)
	struct FMulticastInlineDelegate OnContextOptionSelected; // 0x518(0x10)
	bool IsActiveInMenu; // 0x528(0x01)
	char Current Input State; // 0x529(0x01)
	bool Is Hovered; // 0x52a(0x01)

	struct FText GetCurrentOptionText(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
	bool NavigateConfirm(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
	void IsActiveForNavigation(bool Return Value); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
	void Update Callout Visibility(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
	void SocialPlayerContextMenuOptionClickSFX(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
	void SocialPlayerContextMenuOptionHoverSFX(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
	void SetActiveInMenu(bool IsActive); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SetActiveInMenu
	void Handle Input State Changed(char InputState); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
	void GamepadHover(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadUnhover
	void Construct(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Construct
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
	void OnInitialized(); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnInitialized
	void ExecuteUbergraph_WBP_PlayerContextMenuOption(int32_t EntryPoint); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
	void OnContextOptionSelected__DelegateSignature(char Context Option); // Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature
};

