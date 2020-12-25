// WidgetBlueprintGeneratedClass WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C
// Size: 0x540 (Inherited: 0x4e0)
struct UWBP_TextChat_ChatWindow_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* LoseFocus; // 0x4e8(0x08)
	struct UWidgetAnimation* GainFocus; // 0x4f0(0x08)
	struct UImage* Backer; // 0x4f8(0x08)
	struct UOverlay* BackerWrapper; // 0x500(0x08)
	struct UButton* CloseBtn; // 0x508(0x08)
	struct UVerticalBox* MessageList; // 0x510(0x08)
	struct UScrollBox* Scroll; // 0x518(0x08)
	int32_t ScrollToBottomFrameDelay; // 0x520(0x04)
	bool IsCollapsed; // 0x524(0x01)
	char UnknownData_525[0x3]; // 0x525(0x03)
	struct UWBP_TextChat_C* TextChatWidget; // 0x528(0x08)
	struct FMulticastInlineDelegate OnCloseButtonClicked; // 0x530(0x10)

	void GetMaxChatMessages(int32_t MaxChatMessages); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages
	void SetCollapsed(bool Collapsed); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed
	void AddChatMessage(struct FPUMG_ChatData ChatData); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick
	void BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget
	void HandleInputStateChanged(char InputState); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged
	void ExecuteUbergraph_WBP_TextChat_ChatWindow(int32_t EntryPoint); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow
	void OnCloseButtonClicked__DelegateSignature(); // Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature
};

