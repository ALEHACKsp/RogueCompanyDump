// Class PlatformUMG.PUMG_AcquisitionManager
// Size: 0x50 (Inherited: 0x28)
struct UPUMG_AcquisitionManager : public UObject {
	struct FMulticastInlineDelegate OnAcquisitionSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnAcquisitionFailed; // 0x38(0x10)
	struct UPUMG_StoreItemHelper* StoreItemHelper; // 0x48(0x08)
};

// Class PlatformUMG.PUMG_AsyncImage
// Size: 0x260 (Inherited: 0x218)
struct UPUMG_AsyncImage : public UImage {
	struct UWidget* WaitingWidget; // 0x218(0x08)
	struct FMulticastInlineDelegate OnAsyncImageLoadStarted; // 0x220(0x10)
	struct FMulticastInlineDelegate OnAsyncImageLoadComplete; // 0x230(0x10)
	struct FMulticastInlineDelegate OnAsyncImageLoadCanceled; // 0x240(0x10)
	struct FMulticastInlineDelegate OnAsyncImageBrushChanged; // 0x250(0x10)

	void ShowWaitingWidget(); // Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
	void HideWaitingWidget(); // Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
};

// Class PlatformUMG.PUMG_DataFactory
// Size: 0x38 (Inherited: 0x28)
struct UPUMG_DataFactory : public UObject {
	struct APUMG_HUD* MyHud; // 0x28(0x08)
	char UnknownData_30[0x8]; // 0x30(0x08)

	bool IsLoggedIn(); // Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
};

// Class PlatformUMG.PUMG_ChatDataFactory
// Size: 0x118 (Inherited: 0x38)
struct UPUMG_ChatDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnChatMessageReceived; // 0x38(0x10)
	struct FMulticastInlineDelegate OnChatMessageRead; // 0x48(0x10)
	struct FMulticastInlineDelegate OnChatChannelJoined; // 0x58(0x10)
	struct FMulticastInlineDelegate OnChatChannelLeft; // 0x68(0x10)
	struct TArray<int32_t> ChatMessageIds; // 0x78(0x10)
	struct TArray<int32_t> PendingChatMessageIds; // 0x88(0x10)
	struct TMap<int32_t, struct FPUMG_ChatData> ChatMessagesById; // 0x98(0x50)
	int32_t LastCreatedMessageId; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct TArray<int64_t> m_FilteredPlayerIds; // 0xf0(0x10)
	struct TArray<struct FPUMG_ChatCommand> ChatCommands; // 0x100(0x10)
	char UnknownData_110[0x8]; // 0x110(0x08)

	void SetMaxMessageCount(int32_t MaxMessageCount); // Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
	void SendChatToPlayer(struct FString Message, int64_t TargetPlayerId); // Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
	void SendChatToChannel(struct FString Message, enum class EPUMG_ChatChannel Channel); // Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
	bool RemovePlayerFilter(int64_t PlayerId); // Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
	bool RemoveChatCommand(struct FString Command); // Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
	bool RemoveAllChatCommands(struct UObject* Target); // Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
	void QueueCheckPendingMessages(); // Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
	void MarkMessageAsRead(int32_t MessageId); // Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
	void ListChatCommands(); // Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
	bool IsValidMessage(struct FPUMG_ChatData Message); // Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
	bool IsPlayerFilteredFromChat(int64_t PlayerId); // Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
	void HandleCommunicationSettingChanged(); // Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
	struct FPUMG_ChatData GetMessage(int32_t MessageId); // Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
	int32_t GetMaxMessageCount(); // Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
	enum class EPCOM_PrivilegeStatus GetChatPrivilegeStatus(); // Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
	void GetActiveChatChannels(bool IncludePersonalChannel, struct TArray<struct FPUMG_ActiveChatChannelData> ActiveChatChatChannels); // Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
	int32_t FindChatCommandIndex(struct FString Command); // Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
	bool ExecuteChatCommandLine(struct FString CommandLine); // Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
	void CheckPendingMessages(); // Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
	void BeginProcessingChatMessage(struct FPUMG_ChatData Message); // Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
	void AddSystemMessage(struct FText Message); // Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
	bool AddPlayerFilter(int64_t PlayerId); // Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
	void AddGameMessage(struct FText Message, enum class EPUMG_ChatChannel Channel); // Function PlatformUMG.PUMG_ChatDataFactory.AddGameMessage
	bool AddChatCommand(struct FString Command, struct FText Desc, struct UObject* Target, struct FString Function, struct FString Alias1, struct FString Alias2, struct FString Alias3, struct FString Alias4); // Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
};

// Class PlatformUMG.PUMG_CollectionDataFactory
// Size: 0x68 (Inherited: 0x38)
struct UPUMG_CollectionDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnCollectionAvatarsUpdated; // 0x38(0x10)
	struct FMulticastInlineDelegate OnCollectionAvatarAcquisition; // 0x48(0x10)
	struct TArray<struct FPUMG_AvatarData> CollectionAvatars; // 0x58(0x10)
};

// Class PlatformUMG.PUMG_FriendDataFactory
// Size: 0x108 (Inherited: 0x38)
struct UPUMG_FriendDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnFriendDataUpdated; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFriendAddSuccess; // 0x48(0x10)
	struct FMulticastInlineDelegate OnFriendAddError; // 0x58(0x10)
	struct FMulticastInlineDelegate FriendInviteReceived; // 0x68(0x10)
	struct FMulticastInlineDelegate OnFriendAdded; // 0x78(0x10)
	struct FMulticastInlineDelegate OnFriendRejected; // 0x88(0x10)
	int32_t OnlineFriends; // 0x98(0x04)
	int32_t TotalFriends; // 0x9c(0x04)
	struct TArray<struct FPUMG_FriendData> CachedFriends; // 0xa0(0x10)
	struct TArray<struct FPUMG_FriendData> CachedPendingFriends; // 0xb0(0x10)
	struct TArray<struct FPUMG_FriendData> CachedFriendRequests; // 0xc0(0x10)
	char UnknownData_D0[0x20]; // 0xd0(0x20)
	float FriendsListUpdatePollInterval; // 0xf0(0x04)
	char UnknownData_F4[0x4]; // 0xf4(0x04)
	struct FTimerHandle FriendsListUpdatePollingTimerHandle; // 0xf8(0x08)
	bool IsFriendsListUpdatePollingEnabled; // 0x100(0x01)
	char UnknownData_101[0x7]; // 0x101(0x07)

	void UIX_OnRemoveFriend(int64_t PlayerId); // Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
	void UIX_OnRejectFriendRequest(int64_t PlayerId); // Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
	void UIX_OnCancelFriendRequest(int64_t PlayerId); // Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
	void UIX_OnAddFriend(struct UPUMG_PlayerInfo* playerinfo); // Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
	void UIX_OnAcceptFriendRequest(int64_t PlayerId); // Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
	void SetEnableFriendsListUpdatePolling(bool InBool); // Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
	void RequestUpdateFriendsList(); // Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
	bool IsCrossplaySocialEnabled(); // Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
	void HandleFriendsListUpdatePolling(); // Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
	void HandleCrossplaySettingChanged(); // Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
	struct TArray<struct FPUMG_FriendData> GetPendingFriends(); // Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
	struct TArray<struct FPUMG_FriendData> GetFriends(); // Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
	struct TArray<struct FPUMG_FriendData> GetFriendRequests(); // Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
	struct FText GetFriendName(int64_t PlayerId); // Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
	struct TSoftObjectPtr<struct UTexture2D> GetFriendAvatarTexture(struct FPUMG_FriendData Friend); // Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
	bool GetEnableFriendsListUpdatePolling(); // Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
	void FriendRemoveResponse(); // Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
	bool CheckAlreadyFriends(struct FString FriendName); // Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
};

// Class PlatformUMG.PUMG_GamepadDataFactory
// Size: 0x88 (Inherited: 0x38)
struct UPUMG_GamepadDataFactory : public UPUMG_DataFactory {
	char UnknownData_38[0x50]; // 0x38(0x50)

	bool UnregisterPromptForButton(struct FKey Button); // Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
	void SetPromptForGamepadButton(struct FKey Button, struct FText PromptText); // Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
	void RemovePromptForGamepadButton(struct FKey Button); // Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
	bool RegisterPromptWidgetForButton(struct UWidget* Widget, struct FKey Button); // Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
	void ClearAllGamepadPrompts(); // Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
};

// Class PlatformUMG.PUMG_GameViewportClient
// Size: 0x348 (Inherited: 0x338)
struct UPUMG_GameViewportClient : public UGameViewportClient {
	char UnknownData_338[0x10]; // 0x338(0x10)
};

// Class PlatformUMG.PUMG_HUD
// Size: 0x550 (Inherited: 0x310)
struct APUMG_HUD : public AHUD {
	struct FMulticastInlineDelegate OnInputStateChanged; // 0x310(0x10)
	struct TMap<int64_t, struct FMulticastInlineDelegate> PlayerDataUpdated; // 0x320(0x50)
	struct UPUMG_InputManager* InputManager; // 0x370(0x08)
	struct UPUMG_ViewManager* ViewManager; // 0x378(0x08)
	struct UPUMG_InputManager* InputManagerClass; // 0x380(0x08)
	struct UPUMG_UISoundTheme* SoundTheme; // 0x388(0x08)
	char UnknownData_390[0x1c0]; // 0x390(0x1c0)

	void TestHirezLogin(struct FString User, struct FString password); // Function PlatformUMG.PUMG_HUD.TestHirezLogin
	void TestAutoLogin(int32_t ControllerId); // Function PlatformUMG.PUMG_HUD.TestAutoLogin
	void ShowSystemTrayNotification(struct FString popupType); // Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
	void SetUseNewUIFeatures(bool UseNewFeatures); // Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
	void SetUIFocus(); // Function PlatformUMG.PUMG_HUD.SetUIFocus
	void SetNavigationEnabled(bool Enabled); // Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
	void OnQuit(); // Function PlatformUMG.PUMG_HUD.OnQuit
	bool OnNavigateBack(); // Function PlatformUMG.PUMG_HUD.OnNavigateBack
	void OnConfirmQuit(); // Function PlatformUMG.PUMG_HUD.OnConfirmQuit
	struct UPUMG_PlayerInfo* NewPlayerInfo(); // Function PlatformUMG.PUMG_HUD.NewPlayerInfo
	bool IsLobbyHUD(); // Function PlatformUMG.PUMG_HUD.IsLobbyHUD
	bool IsCrossplayEnabled(); // Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
	void InputStateChangePassthrough(char InputState); // Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
	struct UPUMG_ViewManager* GetViewManager(); // Function PlatformUMG.PUMG_HUD.GetViewManager
	struct UPUMG_PopupManager* GetPopupManager(); // Function PlatformUMG.PUMG_HUD.GetPopupManager
	struct APlayerController* GetPlayerControllerOwner(); // Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
	struct UPUMG_PlayerInfo* GetOrCreatePlayerInfo(int64_t PlayerId); // Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
	struct UPUMG_InputManager* GetInputManager(); // Function PlatformUMG.PUMG_HUD.GetInputManager
	char GetCurrentInputState(); // Function PlatformUMG.PUMG_HUD.GetCurrentInputState
	void DisplayGenericPopup(struct FString sTitle, struct FString sDesc); // Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
	void DisplayGenericError(struct FString sDesc); // Function PlatformUMG.PUMG_HUD.DisplayGenericError
};

// Class PlatformUMG.PUMG_InputManager
// Size: 0xd8 (Inherited: 0x28)
struct UPUMG_InputManager : public UObject {
	struct TMap<struct UPUMG_Widget*, struct FPUMG_InputFocusDetails> InputFocusData; // 0x28(0x50)
	char UnknownData_78[0x28]; // 0x78(0x28)
	struct UInputComponent* InputComponent; // 0xa0(0x08)
	char UnknownData_A8[0x30]; // 0xa8(0x30)

	void HandleModeChange(char Mode); // Function PlatformUMG.PUMG_InputManager.HandleModeChange
	bool GetFocusedWidget(struct UPUMG_Widget* ParentWidget, struct UWidget* FocusWidget); // Function PlatformUMG.PUMG_InputManager.GetFocusedWidget
	void ClearNavInputThrottled(); // Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
	void ClearNavInputDebouncedThrottled(); // Function PlatformUMG.PUMG_InputManager.ClearNavInputDebouncedThrottled
};

// Class PlatformUMG.PUMG_JsonDataFactory
// Size: 0x48 (Inherited: 0x38)
struct UPUMG_JsonDataFactory : public UPUMG_DataFactory {
	char UnknownData_38[0x10]; // 0x38(0x10)

	void HandleJsonReady(struct UPGame_LandingPanelJSONHandler* pHandler); // Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
	void HandleImagesReady(struct UPGame_LandingPanelJSONHandler* pHandler); // Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
};

// Class PlatformUMG.PUMG_Loadout
// Size: 0xa0 (Inherited: 0x28)
struct UPUMG_Loadout : public UObject {
	struct FMulticastInlineDelegate OnRenamed; // 0x28(0x10)
	struct FMulticastInlineDelegate OnNumberChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnTypeChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnServerUpdate; // 0x58(0x10)
	char UnknownData_68[0x38]; // 0x68(0x38)
};

// Class PlatformUMG.PUMG_LoadoutDataFactory
// Size: 0xa8 (Inherited: 0x28)
struct UPUMG_LoadoutDataFactory : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct FMulticastInlineDelegate OnLoadoutsInitialized; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadoutsUpdatedFromServer; // 0x40(0x10)
	struct FMulticastInlineDelegate OnLoadoutFactoryReadyNoLoadouts; // 0x50(0x10)
	struct FMulticastInlineDelegate OnLoadoutChanged; // 0x60(0x10)
	struct FMulticastInlineDelegate OnLoadoutAdded; // 0x70(0x10)
	struct FMulticastInlineDelegate OnLoadoutDeleted; // 0x80(0x10)
	char UnknownData_90[0x8]; // 0x90(0x08)
	struct TArray<struct UPUMG_Loadout*> Loadouts; // 0x98(0x10)
};

// Class PlatformUMG.PUMG_LoginDataFactory
// Size: 0xf8 (Inherited: 0x38)
struct UPUMG_LoginDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnLoginUserChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLoginStateChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLoginError; // 0x58(0x10)
	char UnknownData_68[0x8]; // 0x68(0x08)
	struct FMulticastInlineDelegate OnControllerDisconnected; // 0x70(0x10)
	struct UDataTable* ErrorMsgsDT; // 0x80(0x08)
	char UnknownData_88[0x60]; // 0x88(0x60)
	struct FMulticastInlineDelegate OnLoginWaitQueueMessage; // 0xe8(0x10)

	bool UpdateControllers(); // Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
	void UIX_TriggerAutoLogin(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_TriggerAutoLogin
	void UIX_OnTwoFactorSubmit(struct FString AuthCode); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
	void UIX_OnTwoFactorDecline(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
	void UIX_OnSubmitLogin(struct FString UserName, struct FString password); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
	void UIX_OnSubmitConsoleLogin(int32_t ControllerId); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
	void UIX_OnSubmitAutoLogin(int32_t ControllerId); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
	void UIX_OnPlayerCreate(struct FString PlayerName); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
	void UIX_OnLinkExistingAccount(struct FString UserName, struct FString password); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
	void UIX_OnLinkDecline(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
	void UIX_OnLinkCreateAccount(struct FString UserName, struct FString password, struct FString Email, bool bAcceptAgeReqs); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
	void UIX_OnEulaDecline(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
	void UIX_OnEulaAccept(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
	void UIX_OnChangeUserAccount(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
	void UIX_OnCancelLogin(); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnCancelLogin
	void UIX_OnAccountCreate(struct FString UserName, struct FString password, struct FString Email, bool bAcceptAgeReqs); // Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
	void TriggerAutoLogin(); // Function PlatformUMG.PUMG_LoginDataFactory.TriggerAutoLogin
	bool ShouldDisplayUsername(); // Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
	bool ShouldDisplayDisconnectError(); // Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
	void SetUserErrorDataTable(struct UDataTable* ErrorMsgTable); // Function PlatformUMG.PUMG_LoginDataFactory.SetUserErrorDataTable
	void RecordLoginState(enum class EPUMG_LoginState NewState); // Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
	void LoginEvent_ShowEula(); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowEula
	void LoginEvent_Queued(uint32_t QueuePosition, uint32_t QueueSize, uint32_t queueEstimatedWait); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Queued
	void LoginEvent_LoginRequested(); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
	void LoginEvent_LoggedIn(); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
	void LoginEvent_FailedClient(struct FText ErrorMsg); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_FailedClient
	void LoginEvent_Failed(uint32_t ErrorMsgId); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
	void LoginEvent_CreatePlayer(uint32_t ErrorMsgId); // Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_CreatePlayer
	bool LoadEULAFile(struct FString SaveText); // Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
	void HandleControllerPairingChange(int32_t ControllerIndex, int32_t NewUserId, int32_t OldUserId); // Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
	void HandleControllerConnectionChange(bool IsConnection, int32_t UserId, int32_t ControllerIndex); // Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
	struct FString GetVersion(); // Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
	bool GetLastDisconnectReason(struct FText ErrorMsg); // Function PlatformUMG.PUMG_LoginDataFactory.GetLastDisconnectReason
	bool GetCurrentPlayerName(struct FText NameText); // Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
	enum class EPUMG_LoginState GetCurrentLoginState(); // Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
};

// Class PlatformUMG.PUMG_PartyDataFactory
// Size: 0x158 (Inherited: 0x38)
struct UPUMG_PartyDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnPartyDataUpdated; // 0x38(0x10)
	struct FMulticastInlineDelegate OnPartyLocalPlayerLeft; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPartyLocalPlayerPromoted; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPartyMemberPromoted; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPartyMemberDataUpdated; // 0x78(0x10)
	struct FMulticastInlineDelegate OnPartyMemberDataAdded; // 0x88(0x10)
	struct FMulticastInlineDelegate OnPartyMemberRemoved; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPartyMemberLeftGeneric; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationError; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationSent; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationReceived; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationAccepted; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationRejected; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnPartyInvitationExpired; // 0x108(0x10)
	struct TArray<struct FPUMG_PartyMemberData> PartyMembers; // 0x118(0x10)
	struct UPUMG_PlayerInfo* PartyInviter; // 0x128(0x08)
	struct FString LastInviteSentErrorMessage; // 0x130(0x10)
	char UnknownData_140[0x18]; // 0x140(0x18)

	void UIX_PromoteMemberToLeader(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
	void UIX_LeaveParty(); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
	void UIX_KickMemberFromParty(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
	bool UIX_InviteMemberToParty(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
	void UIX_GiveInvitePermission(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
	void UIX_DisbandParty(); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
	void UIX_DenyPartyInvitation(); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
	void UIX_AcceptPartyInvitation(); // Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
	void PartyPromoteResponse(); // Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
	void PartyLeaveResponse(); // Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
	void PartyKickResponse(); // Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
	bool IsPlayerInParty(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
	bool IsPending(); // Function PlatformUMG.PUMG_PartyDataFactory.IsPending
	bool IsPartyMaxed(); // Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
	bool IsLeader(); // Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
	bool IsInParty(); // Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
	bool HasInvitePrivileges(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.HasInvitePrivileges
	int32_t GetQueueId(); // Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
	struct FText GetPartyMemeberName(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
	struct TArray<struct FPUMG_PartyMemberData> GetPartyMembers(); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
	int32_t GetPartyMemberCount(); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberCount
	struct FPUMG_PartyMemberData GetPartyMemberByID(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
	struct UPUMG_PlayerInfo* GetPartyInviter(); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
	enum class EPUMG_PartyInviteRightsMode GetPartyInviteMode(); // Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
	int32_t GetMaxPartyMembers(); // Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
	bool CheckPartyMemberIsLeader(int64_t PlayerId); // Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
};

// Class PlatformUMG.PUMG_PlayerDataFactory
// Size: 0xb0 (Inherited: 0x38)
struct UPUMG_PlayerDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnPlayerDataChanged; // 0x38(0x10)
	struct FMulticastInlineDelegate OnPlayerRankChanged; // 0x48(0x10)
	struct FMulticastInlineDelegate OnCrossplayChanged; // 0x58(0x10)
	int64_t PlayerId; // 0x68(0x08)
	struct FString PlayerName; // 0x70(0x10)
	int32_t Level; // 0x80(0x04)
	int32_t AvatarId; // 0x84(0x04)
	int32_t LastMMR; // 0x88(0x04)
	int32_t CurrentMMR; // 0x8c(0x04)
	int32_t BestMMR; // 0x90(0x04)
	int32_t CurrentWinRank; // 0x94(0x04)
	int32_t PreviousWinRank; // 0x98(0x04)
	int32_t CurrentWinPeak; // 0x9c(0x04)
	int32_t PreviousWinPeak; // 0xa0(0x04)
	int32_t CurrentWinStreak; // 0xa4(0x04)
	int32_t PreviousWinStreak; // 0xa8(0x04)
	char UnknownData_AC[0x4]; // 0xac(0x04)

	void OnSelectAvatar(int32_t ItemId); // Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
	struct TSoftObjectPtr<struct UTexture2D> GetAvatarIcon(); // Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
};

// Class PlatformUMG.PUMG_PlayerInfo
// Size: 0x80 (Inherited: 0x28)
struct UPUMG_PlayerInfo : public UObject {
	struct FMulticastInlineDelegate OnFilteredNameSetDel; // 0x28(0x10)
	char UnknownData_38[0x48]; // 0x38(0x48)

	void SetIgnored(bool Ignored); // Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
	bool IsIgnored(); // Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
	int64_t GetPlayerId(); // Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
	struct FText GetName(); // Function PlatformUMG.PUMG_PlayerInfo.GetName
	struct FString GetMctsName(); // Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
	int32_t GetAvatarItemId(); // Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
};

// Class PlatformUMG.PUMG_PlayerInventoryHelper
// Size: 0x118 (Inherited: 0x28)
struct UPUMG_PlayerInventoryHelper : public UObject {
	char UnknownData_28[0xf0]; // 0x28(0xf0)
};

// Class PlatformUMG.PUMG_PlayerWhoDataFactory
// Size: 0x60 (Inherited: 0x38)
struct UPUMG_PlayerWhoDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnSearchByNameResultsUpdated; // 0x38(0x10)
	struct TArray<struct UPUMG_PlayerInfo*> CachedSearchByNameResults; // 0x48(0x10)
	char UnknownData_58[0x8]; // 0x58(0x08)

	void UIX_SearchByNameForPlayer(struct FString PlayerName, bool bIncludeOfflinePlayers); // Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
	struct TArray<struct UPUMG_PlayerInfo*> GetSearchByNameResults(); // Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
};

// Class PlatformUMG.PUMG_Widget
// Size: 0x4a0 (Inherited: 0x238)
struct UPUMG_Widget : public UUserWidget {
	struct FMulticastInlineDelegate OnGamepadHovered; // 0x238(0x10)
	struct FMulticastInlineDelegate OnMouseEntered; // 0x248(0x10)
	struct FMulticastInlineDelegate OnNavigateBack; // 0x258(0x10)
	struct FMulticastInlineDelegate OnTextureLoadComplete; // 0x268(0x10)
	struct FMulticastInlineDelegate OnNavigateUpFailed; // 0x278(0x10)
	struct FMulticastInlineDelegate OnNavigateDownFailed; // 0x288(0x10)
	struct FMulticastInlineDelegate OnNavigateLeftFailed; // 0x298(0x10)
	struct FMulticastInlineDelegate OnNavigateRightFailed; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnFocusGroupNavigateUpFailed; // 0x2b8(0x10)
	struct FMulticastInlineDelegate OnFocusGroupNavigateDownFailed; // 0x2c8(0x10)
	struct FMulticastInlineDelegate OnFocusGroupNavigateLeftFailed; // 0x2d8(0x10)
	struct FMulticastInlineDelegate OnFocusGroupNavigateRightFailed; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnHideSequenceFinished; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnShowSequenceFinished; // 0x308(0x10)
	struct FWeakObjectPtr<struct APUMG_HUD> MyHud; // 0x318(0x08)
	bool CloseOnLogout; // 0x320(0x01)
	bool IsComponent; // 0x321(0x01)
	bool StartsHidden; // 0x322(0x01)
	bool UsesBlocker; // 0x323(0x01)
	bool BlockerClickToClose; // 0x324(0x01)
	char UnknownData_325[0x3]; // 0x325(0x03)
	struct TSoftObjectPtr<struct UTexture2D> LoadedTexture; // 0x328(0x28)
	char UnknownData_350[0x150]; // 0x350(0x150)

	void UpdateRegistrationToInputManager(struct UWidget* Widget, int32_t FocusGroup, struct UWidget* Up, struct UWidget* Down, struct UWidget* Left, struct UWidget* Right); // Function PlatformUMG.PUMG_Widget.UpdateRegistrationToInputManager
	void UnregisterWidgetFromInputManager(struct UWidget* Widget); // Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
	void UnregisterFocusGroup(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
	void UninitializeWidget(); // Function PlatformUMG.PUMG_Widget.UninitializeWidget
	bool SwapViewRoute(struct FName RouteName, struct FName SwapTargetRoute, bool ForceTransition); // Function PlatformUMG.PUMG_Widget.SwapViewRoute
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function PlatformUMG.PUMG_Widget.StartShowSequence
	void StartHideSequence(struct FName FromRoute, struct FName ToRoute); // Function PlatformUMG.PUMG_Widget.StartHideSequence
	void ShowWidget(); // Function PlatformUMG.PUMG_Widget.ShowWidget
	void SetPendingRouteData(struct FName RouteName, struct UObject* Data); // Function PlatformUMG.PUMG_Widget.SetPendingRouteData
	void SetFocusToWidgetOfGroup(int32_t FocusGroup, struct UPUMG_Widget* Widget); // Function PlatformUMG.PUMG_Widget.SetFocusToWidgetOfGroup
	struct UWidget* SetFocusToThis(); // Function PlatformUMG.PUMG_Widget.SetFocusToThis
	void SetFocusToGroup(int32_t FocusGroup, bool KeepLastFocus); // Function PlatformUMG.PUMG_Widget.SetFocusToGroup
	void SetDefaultFocusForGroup(struct UWidget* Widget, int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
	bool RemoveViewRoute(struct FName RouteName); // Function PlatformUMG.PUMG_Widget.RemoveViewRoute
	bool RemoveTopViewRoute(bool ForceTransition); // Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
	void RegisterWidgetToInputManager(struct UWidget* Widget, int32_t FocusGroup, struct UWidget* Up, struct UWidget* Down, struct UWidget* Left, struct UWidget* Right); // Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
	void OnShown(); // Function PlatformUMG.PUMG_Widget.OnShown
	void OnHide(); // Function PlatformUMG.PUMG_Widget.OnHide
	void OnGamepadUnhover(); // Function PlatformUMG.PUMG_Widget.OnGamepadUnhover
	void OnGamepadHover(); // Function PlatformUMG.PUMG_Widget.OnGamepadHover
	void NavigateUpFailure(); // Function PlatformUMG.PUMG_Widget.NavigateUpFailure
	void NavigateRightFailure(); // Function PlatformUMG.PUMG_Widget.NavigateRightFailure
	void NavigateLeftFailure(); // Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
	void NavigateDownFailure(); // Function PlatformUMG.PUMG_Widget.NavigateDownFailure
	bool NavigateConfirmPressed(); // Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
	void NavigateConfirmCancelled(); // Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
	bool NavigateConfirm(); // Function PlatformUMG.PUMG_Widget.NavigateConfirm
	bool NavigateBackPressed(); // Function PlatformUMG.PUMG_Widget.NavigateBackPressed
	void NavigateBackCancelled(); // Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
	bool NavigateBack(); // Function PlatformUMG.PUMG_Widget.NavigateBack
	bool IsFocusEnabled(); // Function PlatformUMG.PUMG_Widget.IsFocusEnabled
	void InitializeWidgetNavigation(); // Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
	void InitializeWidgetButtonListeners(); // Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
	void InitializeWidget(struct APUMG_HUD* HUD); // Function PlatformUMG.PUMG_Widget.InitializeWidget
	void HideWidget(); // Function PlatformUMG.PUMG_Widget.HideWidget
	struct UPUMG_ViewManager* GetViewManager(); // Function PlatformUMG.PUMG_Widget.GetViewManager
	bool GetUsesBlocker(); // Function PlatformUMG.PUMG_Widget.GetUsesBlocker
	bool GetPendingRouteData(struct FName RouteName, struct UObject* Data); // Function PlatformUMG.PUMG_Widget.GetPendingRouteData
	struct FGeometry GetGeometryFromLastTick(); // Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
	bool GetCurrentFocusGroup(int32_t OutFocusGroup); // Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
	struct UWidget* GetCurrentFocusForGroup(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
	void GamepadUnhover(); // Function PlatformUMG.PUMG_Widget.GamepadUnhover
	void GamepadHover(); // Function PlatformUMG.PUMG_Widget.GamepadHover
	struct FEventReply GamepadButtonUp(struct FKey Button); // Function PlatformUMG.PUMG_Widget.GamepadButtonUp
	struct FEventReply GamepadButtonDown(struct FKey Button); // Function PlatformUMG.PUMG_Widget.GamepadButtonDown
	void FocusGroupNavigateUpFailure(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
	void FocusGroupNavigateDownFailure(int32_t FocusGroup); // Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
	bool ExplicitNavigateUp(); // Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
	bool ExplicitNavigateRight(); // Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
	bool ExplicitNavigateLeft(); // Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
	bool ExplicitNavigateDown(); // Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
	void DisplayGenericPopup(struct FString sTitle, struct FString sDesc); // Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
	void DisplayGenericError(struct FString sDesc); // Function PlatformUMG.PUMG_Widget.DisplayGenericError
	void ClearNavigationInputThrottle(); // Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
	bool CanCloseOnLogout(); // Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
	void CallOnShowSequenceFinished(); // Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
	void CallOnHideSequenceFinished(); // Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
	void BindToInputManager(int32_t DefaultFocusGroup); // Function PlatformUMG.PUMG_Widget.BindToInputManager
	void AsyncLoadTexture2D(struct TSoftObjectPtr<struct UTexture2D> Texture2DRef); // Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
	bool AddViewRoute(struct FName RouteName, bool ClearRouteStack, bool ForceTransition, struct UObject* Data); // Function PlatformUMG.PUMG_Widget.AddViewRoute
};

// Class PlatformUMG.PUMG_PopupManager
// Size: 0x5a8 (Inherited: 0x4a0)
struct UPUMG_PopupManager : public UPUMG_Widget {
	struct TArray<struct FPUMG_PopupConfig> PopupQueue; // 0x4a0(0x10)
	int32_t m_nPopupId; // 0x4b0(0x04)
	char UnknownData_4B4[0xdc]; // 0x4b4(0xdc)
	struct FText CommittedText; // 0x590(0x18)

	void ShowPopup(struct FPUMG_PopupConfig popupData); // Function PlatformUMG.PUMG_PopupManager.ShowPopup
	void RemovePopup(int32_t PopupId); // Function PlatformUMG.PUMG_PopupManager.RemovePopup
	void OnPopupResponse(int32_t nPopupId, int32_t nResponseIndex); // Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
	void OnPopupCanceled(); // Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
	void NextPopup(); // Function PlatformUMG.PUMG_PopupManager.NextPopup
	void HidePopup(); // Function PlatformUMG.PUMG_PopupManager.HidePopup
	void CloseUnimportantPopups(); // Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
	void CloseAllPopups(); // Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
	int32_t AddPopup(struct FPUMG_PopupConfig popupData); // Function PlatformUMG.PUMG_PopupManager.AddPopup
};

// Class PlatformUMG.PUMG_QueueDataFactory
// Size: 0x1e0 (Inherited: 0x38)
struct UPUMG_QueueDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnQueueJoined; // 0x38(0x10)
	struct FMulticastInlineDelegate OnQueueLeft; // 0x48(0x10)
	struct FMulticastInlineDelegate OnQueueStatusChange; // 0x58(0x10)
	struct FMulticastInlineDelegate OnQueueDataUpdated; // 0x68(0x10)
	struct FMulticastInlineDelegate OnMatchStatusUpdatedError; // 0x78(0x10)
	struct FMulticastInlineDelegate OnCustomMatchJoined; // 0x88(0x10)
	struct FMulticastInlineDelegate OnCustomQueueMemberAdded; // 0x98(0x10)
	struct FMulticastInlineDelegate OnCustomQueueMemberRemoved; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnCustomQueueMemberUpdated; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnCustomQueueChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnCustomInviteErrorRecieved; // 0xd8(0x10)
	int32_t PendingCustomMatchMapId; // 0xe8(0x04)
	char UnknownData_EC[0x4]; // 0xec(0x04)
	struct TArray<int32_t> QueueIds; // 0xf0(0x10)
	char UnknownData_100[0x50]; // 0x100(0x50)
	float QueueUpdatePollInterval; // 0x150(0x04)
	char UnknownData_154[0x4]; // 0x154(0x04)
	struct FTimerHandle QueueUpdateTimerHandle; // 0x158(0x08)
	struct TArray<struct FPUMG_CustomMatchMember> CustomMatchMembers; // 0x160(0x10)
	char UnknownData_170[0x6c]; // 0x170(0x6c)
	int32_t CustomMatchSpectateTeamId; // 0x1dc(0x04)

	void StartCustomMatch(); // Function PlatformUMG.PUMG_QueueDataFactory.StartCustomMatch
	void SetPlayerTeamCustomMatch(int64_t PlayerId, int32_t TeamId); // Function PlatformUMG.PUMG_QueueDataFactory.SetPlayerTeamCustomMatch
	void SetPendingMapForCustomQueue(int32_t MapId); // Function PlatformUMG.PUMG_QueueDataFactory.SetPendingMapForCustomQueue
	void SetMapForCustomMatch(int32_t MapId); // Function PlatformUMG.PUMG_QueueDataFactory.SetMapForCustomMatch
	bool LeaveQueue(); // Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
	void KickFromCustomMatch(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.KickFromCustomMatch
	bool JoinQueue(int32_t QueueId); // Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
	bool IsQueueActive(int32_t QueueId); // Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
	bool IsInQueue(); // Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
	bool IsInGame(); // Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
	bool IsInCustomMatch(); // Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
	bool IsCustomInvitePending(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.IsCustomInvitePending
	void InviteToCustomMatch(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.InviteToCustomMatch
	void IncrementPlayerTeamCustomMatch(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.IncrementPlayerTeamCustomMatch
	void HandleInviteCooldowns(); // Function PlatformUMG.PUMG_QueueDataFactory.HandleInviteCooldowns
	void HandleConfirmKickCustomPlayer(); // Function PlatformUMG.PUMG_QueueDataFactory.HandleConfirmKickCustomPlayer
	float GetTimeInQueueSeconds(); // Function PlatformUMG.PUMG_QueueDataFactory.GetTimeInQueueSeconds
	int32_t GetTeamMemberCount(int32_t TeamId); // Function PlatformUMG.PUMG_QueueDataFactory.GetTeamMemberCount
	struct TArray<int32_t> GetQueueIds(); // Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
	int32_t GetPlayerTeamId(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.GetPlayerTeamId
	int32_t GetPendingCustomMatchMapId(); // Function PlatformUMG.PUMG_QueueDataFactory.GetPendingCustomMatchMapId
	int32_t GetNextTeamId(int32_t RelativeToTeamId); // Function PlatformUMG.PUMG_QueueDataFactory.GetNextTeamId
	enum class EPUMG_CustomMatchPermission GetCustomMatchPermissions(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchPermissions
	struct TArray<struct FPUMG_CustomMatchMember> GetCustomMatchMembers(); // Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMembers
	int32_t GetCustomMatchMapId(); // Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchMapId
	struct UPUMG_PlayerInfo* GetCustomMatchInviterPlayerInfo(); // Function PlatformUMG.PUMG_QueueDataFactory.GetCustomMatchInviterPlayerInfo
	enum class EPUMG_MatchStatus GetCurrentQueueMatchState(); // Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
	bool GetCurrentQueueId(int32_t QueueId); // Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
	bool GetCurrentMatchId(int32_t MatchID); // Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId
	bool GetBaseQueueInfoById(int32_t QueueId, struct FPUMG_ClientQueueInfo InClientQueueInfo); // Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
	void DeclineMatchInvite(); // Function PlatformUMG.PUMG_QueueDataFactory.DeclineMatchInvite
	void CreateCustomMatch(int32_t QueueId); // Function PlatformUMG.PUMG_QueueDataFactory.CreateCustomMatch
	enum class EPUMG_CustomMatchError CheckCustomMatch(); // Function PlatformUMG.PUMG_QueueDataFactory.CheckCustomMatch
	bool CanQueue(); // Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
	bool CanLocalPlayerPromoteCustomLobbyPlayer(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer
	bool CanLocalPlayerKickCustomLobbyPlayer(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer
	bool CanLocalPlayerControlCustomLobbyPlayer(int64_t PlayerId); // Function PlatformUMG.PUMG_QueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer
	bool AttemptRejoinMatch(bool Forced); // Function PlatformUMG.PUMG_QueueDataFactory.AttemptRejoinMatch
	void AcceptMatchInvite(); // Function PlatformUMG.PUMG_QueueDataFactory.AcceptMatchInvite
};

// Class PlatformUMG.PUMG_SettingsDataFactory
// Size: 0xd8 (Inherited: 0x38)
struct UPUMG_SettingsDataFactory : public UPUMG_DataFactory {
	struct FMulticastInlineDelegate OnPopulateUserSettings; // 0x38(0x10)
	struct FMulticastInlineDelegate OnPopulateUserBindings; // 0x48(0x10)
	struct FMulticastInlineDelegate OnPopulateUserGPBindings; // 0x58(0x10)
	struct FMulticastInlineDelegate OnPostLogin; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPostLogoff; // 0x78(0x10)
	struct FMulticastInlineDelegate OnSettingValueChanged; // 0x88(0x10)
	char UnknownData_98[0x40]; // 0x98(0x40)

	bool OnSettingChanged(struct FName SettingId, int32_t SettingValue); // Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
	void InitSettingsForPlayer(); // Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
};

// Class PlatformUMG.PUMG_StorePurchaseRequest
// Size: 0x60 (Inherited: 0x28)
struct UPUMG_StorePurchaseRequest : public UObject {
	int32_t LootTableItemId; // 0x28(0x04)
	int32_t VendorId; // 0x2c(0x04)
	int32_t PriceInUI; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct UPlatformInventoryItem* CurrencyType; // 0x38(0x08)
	int32_t Quantity; // 0x40(0x04)
	int32_t LocationId; // 0x44(0x04)
	int32_t CouponId; // 0x48(0x04)
	int32_t GiftPlayerId; // 0x4c(0x04)
	int32_t GiftMsgIndex; // 0x50(0x04)
	bool AnonymousGift; // 0x54(0x01)
	char UnknownData_55[0x3]; // 0x55(0x03)
	struct FWeakObjectPtr<struct UPUMG_StoreItemHelper> pItemHelper; // 0x58(0x08)

	bool SubmitPurchaseRequest(); // Function PlatformUMG.PUMG_StorePurchaseRequest.SubmitPurchaseRequest
};

// Class PlatformUMG.PUMG_PortalOffer
// Size: 0xd0 (Inherited: 0x28)
struct UPUMG_PortalOffer : public UObject {
	struct FString SKU; // 0x28(0x10)
	float cost; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FText DisplayCost; // 0x40(0x18)
	struct FText CurrencyCode; // 0x58(0x18)
	struct FText Name; // 0x70(0x18)
	struct FText Desc; // 0x88(0x18)
	struct FText ShortDesc; // 0xa0(0x18)
	struct FText TaxMessage; // 0xb8(0x18)
};

// Class PlatformUMG.PUMG_StoreItemPrice
// Size: 0x60 (Inherited: 0x28)
struct UPUMG_StoreItemPrice : public UObject {
	int32_t PreSalePrice; // 0x28(0x04)
	int32_t Price; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UPlatformInventoryItem> CurrencyType; // 0x30(0x28)
	struct FWeakObjectPtr<struct UPUMG_StoreItem> pStoreItem; // 0x58(0x08)

	int32_t GetDiscountPercentage(); // Function PlatformUMG.PUMG_StoreItemPrice.GetDiscountPercentage
	bool CanAfford(); // Function PlatformUMG.PUMG_StoreItemPrice.CanAfford
};

// Class PlatformUMG.PUMG_StoreItem
// Size: 0xd0 (Inherited: 0x28)
struct UPUMG_StoreItem : public UObject {
	struct FMulticastInlineDelegate OnPriceSetDirty; // 0x28(0x10)
	char UnknownData_38[0x10]; // 0x38(0x10)
	struct FWeakObjectPtr<struct UPUMG_StoreItemHelper> pItemHelper; // 0x48(0x08)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct TMap<struct TSoftObjectPtr<struct UPlatformInventoryItem>, struct UPUMG_StoreItemPrice*> Prices; // 0x58(0x50)
	struct TSoftObjectPtr<struct UPlatformInventoryItem> InventoryItem; // 0xa8(0x28)

	void UIX_ShowPurchaseConfirmation(struct UPUMG_StoreItemPrice* pPrice); // Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
	bool ShouldDisplayToUser(); // Function PlatformUMG.PUMG_StoreItem.ShouldDisplayToUser
	void PurchaseFromPortal(); // Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
	bool IsRented(int64_t PlayerId); // Function PlatformUMG.PUMG_StoreItem.IsRented
	bool IsRecipeFulfilled(int64_t PlayerId); // Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
	bool IsOwned(int64_t PlayerId); // Function PlatformUMG.PUMG_StoreItem.IsOwned
	bool IsOnSale(); // Function PlatformUMG.PUMG_StoreItem.IsOnSale
	bool IsActive(); // Function PlatformUMG.PUMG_StoreItem.IsActive
	bool HasPortalOffer(); // Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
	int32_t GetUIHint(); // Function PlatformUMG.PUMG_StoreItem.GetUIHint
	int32_t GetType(); // Function PlatformUMG.PUMG_StoreItem.GetType
	int32_t GetSubType(); // Function PlatformUMG.PUMG_StoreItem.GetSubType
	int32_t GetSortOrder(); // Function PlatformUMG.PUMG_StoreItem.GetSortOrder
	struct TSoftObjectPtr<struct UTexture2D> GetSoftItemIcon(); // Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
	int32_t GetQuantityOwned(int64_t PlayerId); // Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
	struct UPUMG_StorePurchaseRequest* GetPurchaseRequest(); // Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
	struct TArray<struct UPUMG_StoreItemPrice*> GetPrices(); // Function PlatformUMG.PUMG_StoreItem.GetPrices
	struct UPUMG_StoreItemPrice* GetPrice(struct TSoftObjectPtr<struct UPlatformInventoryItem> nCurrencyType); // Function PlatformUMG.PUMG_StoreItem.GetPrice
	struct UPUMG_PortalOffer* GetPortalOffer(); // Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
	struct FText GetName(); // Function PlatformUMG.PUMG_StoreItem.GetName
	int32_t GetLootQuantity(); // Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
	int32_t GetLootId(); // Function PlatformUMG.PUMG_StoreItem.GetLootId
	struct TSoftObjectPtr<struct UPlatformInventoryItem> GetInventoryItem(); // Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
	struct FText GetFormattedNameDisplay(); // Function PlatformUMG.PUMG_StoreItem.GetFormattedNameDisplay
	struct FText GetFormattedDescDisplay(); // Function PlatformUMG.PUMG_StoreItem.GetFormattedDescDisplay
	struct FText GetDescription(); // Function PlatformUMG.PUMG_StoreItem.GetDescription
	int32_t GetBestDiscount(); // Function PlatformUMG.PUMG_StoreItem.GetBestDiscount
	void ConfirmGotoPortalOffer(); // Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
	bool CanAfford(struct UPUMG_StoreItemPrice* Price); // Function PlatformUMG.PUMG_StoreItem.CanAfford
};

// Class PlatformUMG.PUMG_XpTable
// Size: 0x30 (Inherited: 0x28)
struct UPUMG_XpTable : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)

	int64_t GetXpAtLevel(int32_t XpLevel); // Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
	int64_t GetXpAtIndex(int32_t Index); // Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
	int32_t GetMinXpLevel(); // Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
	int32_t GetLevelCount(); // Function PlatformUMG.PUMG_XpTable.GetLevelCount
	int32_t GetLevelAtXp(int64_t XpPoints); // Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
	int64_t GetId(); // Function PlatformUMG.PUMG_XpTable.GetId
};

// Class PlatformUMG.PUMG_StoreItemHelper
// Size: 0x1d0 (Inherited: 0x28)
struct UPUMG_StoreItemHelper : public UObject {
	struct FMulticastInlineDelegate OnPurchaseItem; // 0x28(0x10)
	struct FMulticastInlineDelegate OnPurchasePortalItem; // 0x38(0x10)
	struct FMulticastInlineDelegate OnNotEnoughCurrency; // 0x48(0x10)
	struct FMulticastInlineDelegate OnReceiveVendor; // 0x58(0x10)
	struct FMulticastInlineDelegate OnReceiveXpTables; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPortalOffersReceived; // 0x78(0x10)
	struct FMulticastInlineDelegate OnPendingPurchaseReceived; // 0x88(0x10)
	struct FMulticastInlineDelegate OnPurchaseSubmitted; // 0x98(0x10)
	char UnknownData_A8[0x28]; // 0xa8(0x28)
	struct TMap<int32_t, struct UPUMG_StoreItem*> StoreItems; // 0xd0(0x50)
	struct TMap<int64_t, struct UPUMG_XpTable*> XpTables; // 0x120(0x50)
	bool XpTablesLoaded; // 0x170(0x01)
	char UnknownData_171[0x7]; // 0x171(0x07)
	struct TMap<int64_t, struct UPUMG_PortalOffer*> PortalOffers; // 0x178(0x50)
	struct UGameInstance* GameInstance; // 0x1c8(0x08)

	void UIX_RedeemCode(struct FString Code); // Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
	bool UIX_CompletePurchaseItem(struct UPUMG_StorePurchaseRequest* PurchaseRequest); // Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
	int32_t RequestVendorData(struct TArray<int32_t> VendorIds); // Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
	bool HasPendingPurchase(); // Function PlatformUMG.PUMG_StoreItemHelper.HasPendingPurchase
	struct UPUMG_XpTable* GetXpTable(int64_t XpTableId); // Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
	struct TArray<struct UPUMG_StoreItem*> GetStoreItemsForVendor(int32_t nVendorId, bool bIncludeInctiveItems, bool bSearchSubContainers); // Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
	struct UPUMG_StoreItem* GetStoreItemForVendorByItemId(int32_t nVendorId, int32_t nItemId); // Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
	struct UPUMG_StoreItem* GetStoreItemForVendor(int32_t nVendorId, int32_t nLootItemId); // Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
	struct UPUMG_StoreItem* GetStoreItem(int32_t LootId); // Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
	struct UPUMG_PortalOffer* GetPortalOffer(int64_t LootId); // Function PlatformUMG.PUMG_StoreItemHelper.GetPortalOffer
	struct TArray<struct UPUMG_StorePurchaseRequest*> GetPendingPurchaseData(); // Function PlatformUMG.PUMG_StoreItemHelper.GetPendingPurchaseData
	void ExitInGameStoreUI(); // Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
	void EnterInGameStoreUI(); // Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
	bool DoesPortalHaveOffers(); // Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
	bool AreXpTablesLoaded(); // Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
};

// Class PlatformUMG.PUMG_UISoundTheme
// Size: 0x78 (Inherited: 0x28)
struct UPUMG_UISoundTheme : public UObject {
	struct TMap<struct FName, struct FPUMG_SoundThemeEventMapping> SoundEventBindings; // 0x28(0x50)
};

// Class PlatformUMG.PUMG_GenericRouteDataObject
// Size: 0x48 (Inherited: 0x28)
struct UPUMG_GenericRouteDataObject : public UObject {
	struct FString StringValue; // 0x28(0x10)
	int32_t IntValue; // 0x38(0x04)
	struct FName NameValue; // 0x3c(0x08)
	char UnknownData_44[0x4]; // 0x44(0x04)
};

// Class PlatformUMG.PUMG_ViewLayer
// Size: 0x118 (Inherited: 0x28)
struct UPUMG_ViewLayer : public UObject {
	struct UCanvasPanel* DisplayTarget; // 0x28(0x08)
	struct UPUMG_ViewManager* MyManager; // 0x30(0x08)
	enum class EViewManagerTransitionState CurrentTransitionState; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct TArray<struct FName> CurrentRouteStack; // 0x40(0x10)
	struct TArray<struct FName> CurrentTransitionRouteStack; // 0x50(0x10)
	struct TMap<struct FName, struct UPUMG_Widget*> RouteWidgetMap; // 0x60(0x50)
	struct FName DefaultRoute; // 0xb0(0x08)
	char UnknownData_B8[0x8]; // 0xb8(0x08)
	struct TMap<struct FName, struct UObject*> PendingRouteData; // 0xc0(0x50)
	struct UDataTable* Routes; // 0x110(0x08)

	bool IsRouteValid(struct FName RouteName); // Function PlatformUMG.PUMG_ViewLayer.IsRouteValid
	void GoToRoute_InternalShowStep(); // Function PlatformUMG.PUMG_ViewLayer.GoToRoute_InternalShowStep
	void GoToRoute_HandleShowFinished(struct UPUMG_Widget* Widget); // Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleShowFinished
	void GoToRoute_HandleHideFinished(struct UPUMG_Widget* Widget); // Function PlatformUMG.PUMG_ViewLayer.GoToRoute_HandleHideFinished
};

// Class PlatformUMG.PUMG_ViewManager
// Size: 0xe8 (Inherited: 0x28)
struct UPUMG_ViewManager : public UObject {
	struct TArray<struct UPUMG_ViewLayer*> ViewLayers; // 0x28(0x10)
	struct TMap<struct FName, struct UPUMG_Widget*> StickyWidgetMap; // 0x38(0x50)
	struct FMulticastInlineDelegate OnViewStateChanged; // 0x88(0x10)
	struct FMulticastInlineDelegate OnViewStateChangeStarted; // 0x98(0x10)
	struct APUMG_HUD* HudRef; // 0xa8(0x08)
	struct TArray<struct UCanvasPanel*> CanvasPanels; // 0xb0(0x10)
	struct TArray<struct FStickyWidgetData> StickyWidgets; // 0xc0(0x10)
	struct UDataTable* Routes; // 0xd0(0x08)
	struct TArray<struct FViewRouteRedirectData> AlwaysCheckRouteData; // 0xd8(0x10)

	bool SwapRoute(struct FName RouteName, struct FName SwapTargetRoute, bool ForceTransition); // Function PlatformUMG.PUMG_ViewManager.SwapRoute
	void SetPendingRouteData(struct FName RouteName, struct UObject* Data); // Function PlatformUMG.PUMG_ViewManager.SetPendingRouteData
	bool ReplaceRoute(struct FName RouteName, bool ForceTransition, struct UObject* Data); // Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
	bool RemoveRoute(struct FName RouteName); // Function PlatformUMG.PUMG_ViewManager.RemoveRoute
	bool PushRoute(struct FName RouteName, bool ForceTransition, struct UObject* Data); // Function PlatformUMG.PUMG_ViewManager.PushRoute
	bool PopRoute(bool ForceTransition); // Function PlatformUMG.PUMG_ViewManager.PopRoute
	bool IsBlockingAcquisitions(); // Function PlatformUMG.PUMG_ViewManager.IsBlockingAcquisitions
	void InitializeRoutes(struct UDataTable* RouteTable); // Function PlatformUMG.PUMG_ViewManager.InitializeRoutes
	void Initialize(); // Function PlatformUMG.PUMG_ViewManager.Initialize
	bool HasCompletedRedirectFlow(enum class EViewRouteRedirectionPhase RedirectPhase); // Function PlatformUMG.PUMG_ViewManager.HasCompletedRedirectFlow
	int32_t GetViewRouteCount(); // Function PlatformUMG.PUMG_ViewManager.GetViewRouteCount
	struct UPUMG_Widget* GetTopViewRouteWidget(); // Function PlatformUMG.PUMG_ViewManager.GetTopViewRouteWidget
	struct FName GetTopViewRoute(); // Function PlatformUMG.PUMG_ViewManager.GetTopViewRoute
	enum class EViewManagerLayer GetTopLayer(); // Function PlatformUMG.PUMG_ViewManager.GetTopLayer
	bool GetPendingRouteData(struct FName RouteName, struct UObject* Data); // Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
	struct FName GetDefaultRouteForLayer(enum class EViewManagerLayer LayerType); // Function PlatformUMG.PUMG_ViewManager.GetDefaultRouteForLayer
	struct FName GetCurrentTransitionRoute(enum class EViewManagerLayer Layer); // Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
	struct FName GetCurrentRoute(enum class EViewManagerLayer Layer); // Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
};

