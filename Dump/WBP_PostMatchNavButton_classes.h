// WidgetBlueprintGeneratedClass WBP_PostMatchNavButton.WBP_PostMatchNavButton_C
// Size: 0x528 (Inherited: 0x4e0)
struct UWBP_PostMatchNavButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UWBP_subscreen_nav_tab_C* WBP_subscreen_nav_tab; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x4f8(0x10)
	bool IsActive; // 0x508(0x01)
	char UnknownData_509[0x7]; // 0x509(0x07)
	struct FText ButtonTextMsg; // 0x510(0x18)

	bool NavigateConfirm(); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm
	void GamepadConfirm(); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm
	void GamepadHover(); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadHover
	void GamepadUnhover(); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadUnhover
	void SetActive(bool IsActive); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive
	void Construct(); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget
	void PreConstruct(bool IsDesignTime); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct
	void HandleButtonClicked(struct UWBP_subscreen_nav_tab_C* Widget); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleButtonClicked
	void ExecuteUbergraph_WBP_PostMatchNavButton(int32_t EntryPoint); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton
	void OnClicked__DelegateSignature(struct UWBP_PostMatchNavButton_C* SelectedWidget); // Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature
};

