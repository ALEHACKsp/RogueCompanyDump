// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// Size: 0x6e0 (Inherited: 0x6b0)
struct ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b0(0x08)
	struct UBrightLobbyWidget_C* LobbyWidget; // 0x6b8(0x08)
	char Loadout Slot Edit; // 0x6c0(0x01)
	char UnknownData_6C1[0x7]; // 0x6c1(0x07)
	struct FMulticastInlineDelegate Loadout Slot Change; // 0x6c8(0x10)
	struct FName MatchLoadingRouteName; // 0x6d8(0x08)

	struct UKSItem* GetDefaultPlayerAccountItem(enum class EPlayerAccountSlot ItemSlot); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetDefaultPlayerAccountItem
	void SetupQueueEvents(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
	void CallRemoveTopViewRoute(bool ForceTransition, bool ViewChanged); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
	void CallAddViewRoute(struct FName RouteName, bool ClearRouteStack, bool ForceTransition, bool ViewChanged); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
	void SafeFrameSettingApplied(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
	void BindSettingCallbacks(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
	void InternalAddViewRoute(struct FName RouteName, bool ClearRouteStack, bool ForceTransition, struct UObject* Data, bool ViewChanged); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
	void OnAcquisition(struct UKSAcquisition* Acquisition); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
	struct UKSContextBarWidget* GetContextBarWidget(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
	void SwapViewRoute(struct FName RouteName, struct FName SwapTargetRoute, bool ForceTransition); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
	void Remove Top View Route(bool ForceTransition, bool ViewChanged); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
	void Add View Route(struct FName RouteName, bool ClearRouteStack, bool ForceTransition, bool ViewChanged); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
	void HandeEOMResults(bool ForceTransition); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
	void GetCurrentTransitionRoute(struct FName Current Route); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
	struct UKSLobbyWidget* GetLobbyWidget(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
	void Focus Home Screen(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
	void Get Current View Route(struct FName Current Route); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
	void Focus Sticky Loadout Panel(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
	void Get Current Loadout Slot(char Current Loadout Slot); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
	void Cache Current Loadout Slot(char Loadout Slot Edit); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
	void InitialLobbyAnimStatesBinding(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding
	void TempBootstrapFunctionality(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
	void FallbackLogoutCleanup(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
	struct TArray<struct UPanelWidget*> GetFocusableWidgetContainers(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
	void Handle Login State Change(enum class EPUMG_LoginState Login State); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
	struct UPUMG_PopupManager* GetPopupManager(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
	void ReceiveBeginPlay(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
	void HandleEndPlayingPreMatch(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch
	void HandleBeginPlayingPreMatch(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch
	void HandleEndPlayingPostMatch(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch
	void HandleLoginCameraSet(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet
	void HandleMainLobbyCameraSet(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet
	void Handle Party Invite Received(struct UPUMG_PlayerInfo* Inviter); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
	void HandleSettingsKeybind(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind
	void SetUIFocus(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus
	void HandleOpenTextChat(bool BeginChatCommand); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
	void OpenTextChatToPlayer(struct UPUMG_PlayerInfo* Player); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
	void ApplySafeFrameScale(float SafeFrameScale); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
	void OnCustomQueueJoin(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
	void EvaluateFocus(); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
	void HandleRewardsReceived(struct FPlayerRewardsSummary PlayerRewardsSummary, struct FScoreboardStats ScoreboardStats); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
	void ExecuteUbergraph_BP_BrightLobbyHUD(int32_t EntryPoint); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
	void Loadout Slot Change__DelegateSignature(char Loadout Slot Edit); // Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
};

