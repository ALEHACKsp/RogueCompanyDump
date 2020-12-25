// WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C
// Size: 0x770 (Inherited: 0x4e0)
struct UWBP_CustomGameLobby_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_CustomGameActionLog_C* ActionLog; // 0x4e8(0x08)
	struct UButton* Blocker; // 0x4f0(0x08)
	struct UWBP_Subtitle_C* GameName; // 0x4f8(0x08)
	struct UImage* Image; // 0x500(0x08)
	struct UImage* Image_2; // 0x508(0x08)
	struct UImage* Image_112; // 0x510(0x08)
	struct UImage* Image_379; // 0x518(0x08)
	struct UImage* Image_498; // 0x520(0x08)
	struct UWBP_StandardButtonLarge_C* JoiningButton; // 0x528(0x08)
	struct UWBP_ThrobberHorizontal_C* Loading; // 0x530(0x08)
	struct USizeBox* LoadingState; // 0x538(0x08)
	struct UVerticalBox* LoadingWrapper; // 0x540(0x08)
	struct UHorizontalBox* LobbyState; // 0x548(0x08)
	struct UWidgetSwitcher* LobbySwitcher; // 0x550(0x08)
	struct UWBP_PlayerContextMenu_C* PlayerContextMenu; // 0x558(0x08)
	struct UWBP_StandardButtonLarge_C* SpectateButton; // 0x560(0x08)
	struct UVerticalBox* Spectator; // 0x568(0x08)
	struct UVerticalBox* SpectatorContainer; // 0x570(0x08)
	struct UWBP_StandardButtonLarge_C* StartButton; // 0x578(0x08)
	struct UWidgetSwitcher* StartGameSwitcher; // 0x580(0x08)
	struct UVerticalBox* TeamA; // 0x588(0x08)
	struct UVerticalBox* TeamB; // 0x590(0x08)
	struct UWBP_Header1_C* Title; // 0x598(0x08)
	struct UWBP_VoiceActivityContainer_C* VoiceActivity; // 0x5a0(0x08)
	struct UImage* WarningIcon; // 0x5a8(0x08)
	struct UTextBlock* WarningMessage; // 0x5b0(0x08)
	struct UHorizontalBox* WarningWrapper; // 0x5b8(0x08)
	struct UWBP_GameModeInfoPanel_Lobby_C* WBP_GameModeInfoPanel_Lobby; // 0x5c0(0x08)
	struct TMap<int32_t, struct FFBP_CustomMatchTeam> TeamDataMap; // 0x5c8(0x50)
	struct FTimerHandle DataChangeTimer; // 0x618(0x08)
	struct FText FmtAdded; // 0x620(0x18)
	struct FText FmtRemoved; // 0x638(0x18)
	struct FText FmtPromoted; // 0x650(0x18)
	struct FText FmtDemoted; // 0x668(0x18)
	struct FText FmtInvited; // 0x680(0x18)
	struct FText FmtMovedTeam; // 0x698(0x18)
	struct TMap<struct UKSPlayerInfo*, struct FFBP_CustomPendingLogEntry> PendingLogs; // 0x6b0(0x50)
	struct FText FmtLobbyCreated; // 0x700(0x18)
	struct TArray<struct UPUMG_PlayerInfo*> TEMP_Invites; // 0x718(0x10)
	struct FText FmtGameName; // 0x728(0x18)
	struct FName RouteName; // 0x740(0x08)
	struct FName Prompt_Kick; // 0x748(0x08)
	struct FName Prompt_Swap; // 0x750(0x08)
	struct UAkAudioEvent* ShowCustomGameLobbySFX; // 0x758(0x08)
	int32_t FocusGroup_TeamsAndButtons; // 0x760(0x04)
	int32_t FocusGroup_ContextMenu; // 0x764(0x04)
	bool MembersPopulated; // 0x768(0x01)
	char UnknownData_769[0x3]; // 0x769(0x03)
	int32_t MaxSpectators; // 0x76c(0x04)

	void ToggleContextBar(bool bShouldShow); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ToggleContextBar
	void UpdateSpectateState(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateSpectateState
	void SetupSpectateButtonNavigation(int32_t FocusGroup); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupSpectateButtonNavigation
	void SetupStartButtonNavigation(int32_t FocusGroup); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupStartButtonNavigation
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnKeyUp
	void TogglePlayerCardFor(struct UKSPlayerInfo* playerinfo, struct UWBP_CustomLobbyPlayer_C* PlayerWidget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TogglePlayerCardFor
	void HandleVoiceMemberUpdate(struct FString AccountId, bool bIsTalking, bool bIsMuted); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberUpdate
	void HandleVoiceMemberRemoved(struct FString AccountId); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberRemoved
	void HandleVoiceMemberAdded(struct FString AccountId); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleVoiceMemberAdded
	void GetMemberWidgetForVoice(struct FString VoiceId, struct UWBP_CustomLobbyPlayer_C* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetMemberWidgetForVoice
	void SetupExistingPlayers(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupExistingPlayers
	void SetupQueueFactoryEvents(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupQueueFactoryEvents
	void OnQueueStateUpdated(enum class EPUMG_MatchStatus MatchStatus); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueStateUpdated
	void GetTeamButtons(struct TArray<struct UKSWidget*> TeamButtons); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamButtons
	void MassInvite_Close(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Close
	enum class EKSInviteSelectResult MassInvite_Select(struct UKSPlayerInfo* playerinfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_Select
	bool MassInvite_IsSelected(struct UKSPlayerInfo* playerinfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_IsSelected
	bool MassInvite_ShouldShowPlayer(struct UKSPlayerInfo* playerinfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.MassInvite_ShouldShowPlayer
	void OnReceiveHostName(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnReceiveHostName
	void UpdateQueueState(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueState
	void FinalizeLog(struct FText Text, struct UPUMG_PlayerInfo* playerinfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.FinalizeLog
	void LogPermissionChange(struct UPUMG_PlayerInfo* playerinfo, enum class EPUMG_CustomMatchPermission NewPermissions, enum class EPUMG_CustomMatchPermission OldPermissions); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.LogPermissionChange
	void HandleReceivePlayerName(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleReceivePlayerName
	struct FText GetTeamName(struct FPUMG_CustomMatchMember PUMG_CustomMatchMember); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetTeamName
	void AddLog(struct FText Text, struct UPUMG_PlayerInfo* playerinfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddLog
	void RemoveMember(struct FPUMG_CustomMatchMember FormerMember, bool Removed); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.RemoveMember
	void AddMember(struct FPUMG_CustomMatchMember MatchMember, bool Added); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.AddMember
	bool NavigateBack(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.NavigateBack
	void TEST_InviteNextAvailablePlayer(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.TEST_InviteNextAvailablePlayer
	void SetupTeamNavigation(int32_t FocusGroup); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupTeamNavigation
	void UpdateWidgetsWithData(struct FFBP_CustomMatchTeam Team); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateWidgetsWithData
	void OnMemberUpdate(struct FPUMG_CustomMatchMember MatchMember, struct FPUMG_CustomMatchMember PreviousData); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberUpdate
	void OnMemberRemoved(struct FPUMG_CustomMatchMember FormerMember); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberRemoved
	void OnMemberAdded(struct FPUMG_CustomMatchMember MatchMember); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnMemberAdded
	void OnQueueUpdate(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueUpdate
	void GetQueueDataFactory(struct UKSQueueDataFactory* DataFactory); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.GetQueueDataFactory
	void PopulateTeamRenderers(struct UPanelWidget* TeamPanel, int32_t TeamId, char ControlsSide, int32_t NumPlayers); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PopulateTeamRenderers
	void SetupRenderers(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupRenderers
	void SetupDisplayElements(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.SetupDisplayElements
	void UpdateQueueInfo(struct FClientQueueInfo QueueInfo); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.UpdateQueueInfo
	void Construct(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.Construct
	void OnInitialized(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnInitialized
	void HandleDataChange(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleDataChange
	void InvalidateData(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InvalidateData
	void InitializeWidgetNavigation(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.InitializeWidgetNavigation
	void HandlePlayerClicked(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerClicked
	void HandleEmptyClicked(struct UKSWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandleEmptyClicked
	void HandlePlayerKick(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerKick
	void HandlePlayerSwap(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.HandlePlayerSwap
	void OnClickBack(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnClickBack
	void OnShown(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnShown
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void OnPlayerHovered(struct UWBP_CustomLobbyPlayer_C* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerHovered
	void OnPlayerUnhovered(struct UWBP_CustomLobbyPlayer_C* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnPlayerUnhovered
	void OnQueueLeft(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.OnQueueLeft
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature(struct FString AccountId); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature(struct FString AccountId); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature(struct FString AccountId, bool bIsTalking, bool bIsMuted); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature(struct UWidget* FocusWidget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature(struct TArray<struct UWidget*> NavWidgets, struct UWidget* Default Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature(); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature
	void BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.BndEvt__SpectateButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.PreConstruct
	void ExecuteUbergraph_WBP_CustomGameLobby(int32_t EntryPoint); // Function WBP_CustomGameLobby.WBP_CustomGameLobby_C.ExecuteUbergraph_WBP_CustomGameLobby
};

