// WidgetBlueprintGeneratedClass LoginExisting.LoginExisting_C
// Size: 0x64c (Inherited: 0x4e0)
struct ULoginExisting_C : public UKSLoginExistingBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UButton* AnonLoginButton; // 0x4e8(0x08)
	struct UGamepadPromptBasic_C* AnonLoginPromptGamepad; // 0x4f0(0x08)
	struct UGamepadPromptBasic_C* AnonLoginPromptMouse; // 0x4f8(0x08)
	struct UWidgetSwitcher* AnonLoginPromptSwitcher; // 0x500(0x08)
	struct UImage* bkg; // 0x508(0x08)
	struct UHorizontalBox* change_user_prompt; // 0x510(0x08)
	struct UImage* ConsoleLoginPrompt; // 0x518(0x08)
	struct UImage* highlightborder; // 0x520(0x08)
	struct UImage* hirez_logo; // 0x528(0x08)
	struct UImage* Image_47; // 0x530(0x08)
	struct UImage* Image_531; // 0x538(0x08)
	struct UImage* Image_607; // 0x540(0x08)
	struct UImage* Image_610; // 0x548(0x08)
	struct UImage* Image_689; // 0x550(0x08)
	struct UImage* Image_874; // 0x558(0x08)
	struct UImage* Image_1029; // 0x560(0x08)
	struct UHorizontalBox* login_prompt_wrapper; // 0x568(0x08)
	struct UTextBlock* LoginAsGamertagText; // 0x570(0x08)
	struct UCanvasPanel* LoginInterfaceAnonymous; // 0x578(0x08)
	struct UCanvasPanel* LoginInterfaceConsole; // 0x580(0x08)
	struct UCanvasPanel* LoginInterfacePC; // 0x588(0x08)
	struct UWidgetSwitcher* LoginInterfaceSwitcher; // 0x590(0x08)
	struct UTextBlock* LoginPrompt; // 0x598(0x08)
	struct UTextBlock* Password_Required_Msg; // 0x5a0(0x08)
	struct UWBP_error_report_C* PasswordError; // 0x5a8(0x08)
	struct UEditableTextBox* PasswordField; // 0x5b0(0x08)
	struct UPopupButton_C* PCCreateButton; // 0x5b8(0x08)
	struct UPopupButton_C* PCLoginButton; // 0x5c0(0x08)
	struct UOutlineContainer_C* PCPassword; // 0x5c8(0x08)
	struct UOutlineContainer_C* PCUsername; // 0x5d0(0x08)
	struct UImage* roco_logo; // 0x5d8(0x08)
	struct UTextBlock* Username_Required_Msg; // 0x5e0(0x08)
	struct UWBP_error_report_C* UsernameError; // 0x5e8(0x08)
	struct UEditableTextBox* UsernameField; // 0x5f0(0x08)
	struct UTextBlock* VersionDisplay; // 0x5f8(0x08)
	struct UImage* WarningIcon; // 0x600(0x08)
	struct UTextBlock* WarningText; // 0x608(0x08)
	struct UWBP_GameNotification_C* WBP_GameNotification; // 0x610(0x08)
	struct UWBP_text_button_C* WBP_text_button_C_1; // 0x618(0x08)
	struct UWBP_text_button_C* WBP_text_button_C_2; // 0x620(0x08)
	struct UButton* XboxCalloutWrapper; // 0x628(0x08)
	struct UImage* XboxChangeUserPrompt; // 0x630(0x08)
	struct UPUMG_LoginDataFactory* LoginDataFac; // 0x638(0x08)
	bool FirstLogin; // 0x640(0x01)
	char UnknownData_641[0x3]; // 0x641(0x03)
	struct FName ProfileChangeAction; // 0x644(0x08)

	void SetCacheErrorMsg(); // Function LoginExisting.LoginExisting_C.SetCacheErrorMsg
	void UpdatePlayerName(); // Function LoginExisting.LoginExisting_C.UpdatePlayerName
	bool NavigateBack(); // Function LoginExisting.LoginExisting_C.NavigateBack
	bool NavigateConfirm(); // Function LoginExisting.LoginExisting_C.NavigateConfirm
	void SetPlatformSpecificInterface(); // Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface
	void HandleLoginError(struct FText ErrorMsg); // Function LoginExisting.LoginExisting_C.HandleLoginError
	void BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(int32_t Index); // Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
	void InitializeWidgetNavigation(); // Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation
	void OnShown(); // Function LoginExisting.LoginExisting_C.OnShown
	void BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
	void BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature
	void BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature
	void Handle Input State Changed(char InputState); // Function LoginExisting.LoginExisting_C.Handle Input State Changed
	void ConfirmClicked(); // Function LoginExisting.LoginExisting_C.ConfirmClicked
	void OnHide(); // Function LoginExisting.LoginExisting_C.OnHide
	void BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature(int32_t Index); // Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function LoginExisting.LoginExisting_C.InitializeWidget
	void BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function LoginExisting.LoginExisting_C.PreConstruct
	void OnProfileChangeRequested(); // Function LoginExisting.LoginExisting_C.OnProfileChangeRequested
	void Gamepad Select Username(); // Function LoginExisting.LoginExisting_C.Gamepad Select Username
	void Gamepad Select Password(); // Function LoginExisting.LoginExisting_C.Gamepad Select Password
	void ExecuteUbergraph_LoginExisting(int32_t EntryPoint); // Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting
};

