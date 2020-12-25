// WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C
// Size: 0x558 (Inherited: 0x4f8)
struct URedeemCodeScreen_C : public UKSRedeemCodeScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWBP_RedeemCodeField_C* CodeEntry; // 0x500(0x08)
	struct UHorizontalBox* CodeRedemption; // 0x508(0x08)
	struct UTextBlock* ErrorLabel; // 0x510(0x08)
	struct UBorder* PendingOverlay; // 0x518(0x08)
	struct UImage* SelectPrompt; // 0x520(0x08)
	struct UWBP_StandardButtonMedium_C* SubmitButton; // 0x528(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x530(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x538(0x08)
	struct UDataTable* ColorPalette; // 0x540(0x08)
	struct FTimerHandle SpamPreventTimer; // 0x548(0x08)
	int32_t FocusGroup_NoInteraction; // 0x550(0x04)
	int32_t FocusGroup_Input; // 0x554(0x04)

	void UpdateSubmitButtonState(); // Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
	void SetErrorMessage(struct FText ErrorMessage); // Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
	void OnSpamPreventTimeout(); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
	void GetPaletteColor(struct FName Color Name, struct FSlateColor Color); // Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
	void ShowPending(); // Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
	void EndPending(); // Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
	bool NavigateBack(); // Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
	void StartShowAnim(); // Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
	void InitializeTickAnimations(); // Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
	void ShowCodeRedeemFinished(); // Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
	void ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha); // Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
	void InitHideAnimation(); // Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
	void HideCodeRedeemFinished(); // Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
	void HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha); // Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
	void StartHideAnim(); // Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
	void InitializeWidget(struct APUMG_HUD* HUD); // Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
	void Construct(); // Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
	void InitializeWidgetButtonListeners(); // Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
	void SubmitCode(); // Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
	void OnShown(); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
	void OnHide(); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
	void OnCloseButtonClicked(); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnRedeemCodeSubmit(); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
	void OnRedeemCodeResult(bool Success, struct FText Error); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
	void HandleInputStateChanged(char InputState); // Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
	void OnCodeTextChanged(struct FText Text); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
	void OnCodeTextCommit(struct FText Text, char CommitMethod); // Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
	void ExecuteUbergraph_RedeemCodeScreen(int32_t EntryPoint); // Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
};

