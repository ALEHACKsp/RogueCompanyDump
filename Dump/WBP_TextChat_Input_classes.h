// WidgetBlueprintGeneratedClass WBP_TextChat_Input.WBP_TextChat_Input_C
// Size: 0x5d9 (Inherited: 0x4e0)
struct UWBP_TextChat_Input_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* background; // 0x4e8(0x08)
	struct UBackgroundBlur* Blur; // 0x4f0(0x08)
	struct UButton* Button_200; // 0x4f8(0x08)
	struct UOverlay* ChannelOverlay; // 0x500(0x08)
	struct UTextBlock* ChannelText; // 0x508(0x08)
	struct UImage* GamepadFocus; // 0x510(0x08)
	struct UHorizontalBox* HorizontalLayout; // 0x518(0x08)
	struct UKSEditableTextBox* Input; // 0x520(0x08)
	struct UButton* OpenChatButton; // 0x528(0x08)
	struct UCanvasPanel* ParentPanel; // 0x530(0x08)
	struct USizeBox* PromptContainer; // 0x538(0x08)
	struct UWBP_ControllerPrompt_C* PromptIcon; // 0x540(0x08)
	struct UTextBlock* PromptText; // 0x548(0x08)
	struct FMulticastInlineDelegate OnTabPressed; // 0x550(0x10)
	struct FMulticastInlineDelegate OnCancelPressed; // 0x560(0x10)
	struct FMulticastInlineDelegate OnLeftPressed; // 0x570(0x10)
	struct FMulticastInlineDelegate OnRightPressed; // 0x580(0x10)
	struct FMulticastInlineDelegate OnUpPressed; // 0x590(0x10)
	struct FMulticastInlineDelegate OnDownPressed; // 0x5a0(0x10)
	struct UWBP_TextChat_C* TextChatWidget; // 0x5b0(0x08)
	bool IsEngaged; // 0x5b8(0x01)
	char UnknownData_5B9[0x7]; // 0x5b9(0x07)
	struct FText PreviousText; // 0x5c0(0x18)
	bool IsPromptActive; // 0x5d8(0x01)

	void SetPromptActionActive(bool IsActive); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive
	void UpdateGamepadFocus(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus
	void HandleInputStateChange(char InputState); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange
	void SetEngaged(bool Engaged); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged
	void UpdateHintText(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText
	struct FText GetHintText(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText
	void SetCurrentChannel(enum class EPUMG_ChatChannel Channel, struct UPUMG_PlayerInfo* PersonalChannelPlayer); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel
	struct FEventReply On_Input_KeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown
	void PreConstruct(bool IsDesignTime); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct
	void BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget
	void OnViewStateChanged(struct FName CurrentRoute, struct FName PreviousRoute, enum class EViewManagerLayer Layer); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged
	void BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	void BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, char CommitMethod); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	void ExecuteUbergraph_WBP_TextChat_Input(int32_t EntryPoint); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input
	void OnDownPressed__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature
	void OnUpPressed__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature
	void OnRightPressed__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature
	void OnLeftPressed__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature
	void OnCancelPressed__DelegateSignature(struct FKey Key); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature
	void OnTabPressed__DelegateSignature(); // Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature
};

