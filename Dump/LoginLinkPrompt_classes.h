// WidgetBlueprintGeneratedClass LoginLinkPrompt.LoginLinkPrompt_C
// Size: 0x538 (Inherited: 0x4e0)
struct ULoginLinkPrompt_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UStandardButton_C* CreateButton; // 0x4e8(0x08)
	struct UStandardButton_C* DeclineButton; // 0x4f0(0x08)
	struct UStandardButton_C* ExistingButton; // 0x4f8(0x08)
	struct UImage* highlight_stroke; // 0x500(0x08)
	struct UImage* highlightborder; // 0x508(0x08)
	struct UImage* Image_56; // 0x510(0x08)
	struct UImage* Image_297; // 0x518(0x08)
	struct UImage* Image_531; // 0x520(0x08)
	struct UWidgetSwitcher* NextSwitcher; // 0x528(0x08)
	struct UImage* TitleLogo; // 0x530(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidget
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature
	void InitializeWidgetNavigation(); // Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidgetNavigation
	void BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature(struct UWidget* Widget); // Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
	void ExecuteUbergraph_LoginLinkPrompt(int32_t EntryPoint); // Function LoginLinkPrompt.LoginLinkPrompt_C.ExecuteUbergraph_LoginLinkPrompt
};

