// WidgetBlueprintGeneratedClass WBP_TextChat.WBP_TextChat_C
// Size: 0x578 (Inherited: 0x510)
struct UWBP_TextChat_C : public UKSTextChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct UWBP_TextChat_ChatWindow_C* ChatWindow; // 0x518(0x08)
	struct UButton* ClickCatcher; // 0x520(0x08)
	struct UWBP_TextChat_Input_C* TextInput; // 0x528(0x08)
	bool IsEditingActive; // 0x530(0x01)
	char UnknownData_531[0x3]; // 0x531(0x03)
	float ChatMessageAutoHideDelay; // 0x534(0x04)
	struct FPUMG_ActiveChatChannelData CachedCurrentChannel; // 0x538(0x10)
	bool NeedToClearFocus; // 0x548(0x01)
	char UnknownData_549[0x7]; // 0x549(0x07)
	struct TArray<struct FKey> CancelKeys; // 0x550(0x10)
	bool WaitForCancelReleaseToClearFocus; // 0x560(0x01)
	char UnknownData_561[0x7]; // 0x561(0x07)
	struct TArray<enum class EMercCosmeticSlot> RadialMenuItemsToShowInChat; // 0x568(0x10)

	void IsTextChatEnabled(bool IsEnabled); // Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
	void HandleTextChatEnabledApplied(bool Value); // Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
	void AddCancelKey(struct FKey Key); // Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
	void ConsumeCancelInputReleased(); // Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
	void IsAnyCancelKeyDown(bool AnyKeyDown); // Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
	void AddAllCancelKeys(struct TArray<struct FName> Actions); // Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
	void ProcessDelayedFocusClear(); // Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
	void HandleSubmitTextInput(struct FText Text); // Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
	bool CanChatInChannel(enum class EPUMG_ChatChannel Channel); // Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
	void GetDefaultChannel(enum class EPUMG_ChatChannel DefaultChannel); // Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
	void HandleChannelChanged(struct FPUMG_ActiveChatChannelData ChannelData); // Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
	void HandleChatMessage(struct FPUMG_ChatData Message); // Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
	void DisableInputListeners(); // Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
	void EnableInputListeners(); // Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
	void ConsumeCancelInputPressed(); // Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
	void SetUIFocus(bool IsFocused); // Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
	void DisplayTextChat(); // Function WBP_TextChat.WBP_TextChat_C.DisplayTextChat
	void FinishTextChat(struct FText InputText, bool ShouldSubmitText, bool WaitForCancelRelease); // Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
	void StartTextChat(bool BeginChatCommand); // Function WBP_TextChat.WBP_TextChat_C.StartTextChat
	void Construct(); // Function WBP_TextChat.WBP_TextChat_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_TextChat.WBP_TextChat_C.Tick
	void OpenTextChat(bool BeginChatCommand); // Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
	void OnTextCommitted(struct FText Text, char CommitMethod); // Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
	void InitializeWidgetNavigation(); // Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
	void HandleChatMessageReceived(struct FPUMG_ChatData ReceivedMessage); // Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
	void OnChannelChanged(struct FPUMG_ActiveChatChannelData ChatChannelData); // Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
	void HandleChatChannelJoined(enum class EPUMG_ChatChannel Channel); // Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
	void HandleChatChannelLeft(enum class EPUMG_ChatChannel Channel); // Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
	void OnCancelButtonPressed(struct FKey Key); // Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
	void OpenTextChatToPlayer(struct UPUMG_PlayerInfo* Player); // Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
	void HandleCloseTextChat(); // Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
	void HandleTextChatEnabledChanged(); // Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
	void ShowTextChat(); // Function WBP_TextChat.WBP_TextChat_C.ShowTextChat
	void OnRadialMenuItemUse(struct FRadialMenuItemEventInfo EventInfo); // Function WBP_TextChat.WBP_TextChat_C.OnRadialMenuItemUse
	void ExecuteUbergraph_WBP_TextChat(int32_t EntryPoint); // Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
};

