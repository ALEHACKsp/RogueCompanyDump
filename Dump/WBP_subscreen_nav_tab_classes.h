// WidgetBlueprintGeneratedClass WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C
// Size: 0x5c8 (Inherited: 0x4e0)
struct UWBP_subscreen_nav_tab_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Unhover; // 0x4e8(0x08)
	struct UWidgetAnimation* Selected; // 0x4f0(0x08)
	struct UWidgetAnimation* Hovered; // 0x4f8(0x08)
	struct UImage* BackFill; // 0x500(0x08)
	struct UImage* BottomEdge; // 0x508(0x08)
	struct UOverlay* Container; // 0x510(0x08)
	struct UImage* LockIcon; // 0x518(0x08)
	struct UImage* SelectedGradient; // 0x520(0x08)
	struct UButton* TabButton; // 0x528(0x08)
	struct UTextBlock* TabHeading; // 0x530(0x08)
	struct FMulticastInlineDelegate On Tab Selected; // 0x538(0x10)
	bool IsSelected; // 0x548(0x01)
	char UnknownData_549[0x7]; // 0x549(0x07)
	struct FText SubNavText; // 0x550(0x18)
	bool IsDisabled; // 0x568(0x01)
	char UnknownData_569[0x7]; // 0x569(0x07)
	SoftClassProperty CalloutClass; // 0x570(0x28)
	struct UWidget* CalloutWidget; // 0x598(0x08)
	char CalloutWidget_HorizontalAlignment; // 0x5a0(0x01)
	char CalloutWidget_VerticalAlignment; // 0x5a1(0x01)
	char UnknownData_5A2[0x2]; // 0x5a2(0x02)
	struct FMargin CalloutWidget_Padding; // 0x5a4(0x10)
	char UnknownData_5B4[0x4]; // 0x5b4(0x04)
	struct UAkAudioEvent* HoverSubscreenNavTabSFX; // 0x5b8(0x08)
	struct UAkAudioEvent* ClickSubscreenNavTabSFX; // 0x5c0(0x08)

	void TryCreateCalloutWidget(bool Created); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.TryCreateCalloutWidget
	void SetShowCallout(bool Show); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetShowCallout
	void SetDisabled(bool SetDisabled); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetDisabled
	void SettingsSubScreenNavTabClickedSFX(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabClickedSFX
	void SettingsSubScreenNavTabHoveredSFX(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SettingsSubScreenNavTabHoveredSFX
	void Construct(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.Construct
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void On Selected(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Selected
	void On Unselected(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Unselected
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void SetButtonText(struct FText ButtonText); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.SetButtonText
	void ProxyClick(); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ProxyClick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.InitializeWidget
	void PreConstruct(bool IsDesignTime); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.PreConstruct
	void ExecuteUbergraph_WBP_subscreen_nav_tab(int32_t EntryPoint); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.ExecuteUbergraph_WBP_subscreen_nav_tab
	void On Tab Selected__DelegateSignature(struct UWBP_subscreen_nav_tab_C* Tab); // Function WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C.On Tab Selected__DelegateSignature
};

