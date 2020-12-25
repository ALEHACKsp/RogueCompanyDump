// WidgetBlueprintGeneratedClass WBP_TopNavButton.WBP_TopNavButton_C
// Size: 0x570 (Inherited: 0x4e0)
struct UWBP_TopNavButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UCanvasPanel* NewIndicator; // 0x4e8(0x08)
	struct UWBP_CallToAction_C* WBP_CallToAction; // 0x4f0(0x08)
	struct UWBP_subscreen_nav_tab_C* WBP_subscreen_nav_tab; // 0x4f8(0x08)
	struct FText Message; // 0x500(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x518(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x528(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x538(0x10)
	struct FName TargetViewState; // 0x548(0x08)
	struct TArray<struct FName> RelatedViewStates; // 0x550(0x10)
	struct FMulticastInlineDelegate OnNonRouteClicked; // 0x560(0x10)

	void SetNewIndicator(bool Visible); // Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
	void IsDisabled(bool Disabled); // Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
	void IsActive(bool Active); // Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
	void PreConstruct(bool IsDesignTime); // Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
	void SetMessage(struct FText Message); // Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
	void Construct(); // Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
	void DisableButton(bool IsDisabled); // Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
	void SetActive(bool IsActive); // Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
	void GamepadConfirm(); // Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
	void HandleButtonClick(struct UWBP_subscreen_nav_tab_C* Tab); // Function WBP_TopNavButton.WBP_TopNavButton_C.HandleButtonClick
	void ExecuteUbergraph_WBP_TopNavButton(int32_t EntryPoint); // Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
	void OnNonRouteClicked__DelegateSignature(struct UKSWidget* ButtonClicked); // Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
	void OnUnhovered__DelegateSignature(); // Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(); // Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct FName TargetViewState); // Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
};

