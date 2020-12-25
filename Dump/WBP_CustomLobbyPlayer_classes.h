// WidgetBlueprintGeneratedClass WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C
// Size: 0x618 (Inherited: 0x4e0)
struct UWBP_CustomLobbyPlayer_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* PlayerContextHover; // 0x4e8(0x08)
	struct UWidgetAnimation* ControlsEnterLeft; // 0x4f0(0x08)
	struct UWidgetAnimation* ControlsEnterRight; // 0x4f8(0x08)
	struct UWidgetAnimation* PlayerCardHover; // 0x500(0x08)
	struct UWidgetSwitcher* CardSwitcher; // 0x508(0x08)
	struct USizeBox* ContextMenuArrow; // 0x510(0x08)
	struct UOverlay* EmptyState; // 0x518(0x08)
	struct UTextBlock* EmptyText; // 0x520(0x08)
	struct UOverlay* FilledState; // 0x528(0x08)
	struct UImage* HoverBG; // 0x530(0x08)
	struct UVerticalBox* HoverControls; // 0x538(0x08)
	struct UImage* Image_8; // 0x540(0x08)
	struct UOverlay* InvitePendingState; // 0x548(0x08)
	struct UWBP_CustomKickButton_C* KickButton; // 0x550(0x08)
	struct UWBP_ControllerPrompt_C* LeftBackGamepadCallout; // 0x558(0x08)
	struct UOverlay* LeftBackGroup; // 0x560(0x08)
	struct UImage* LobbyLeaderIcon; // 0x568(0x08)
	struct UButton* LobbyPlayerButton; // 0x570(0x08)
	struct UTextBlock* PendingText; // 0x578(0x08)
	struct UButton* PlayerCardButton; // 0x580(0x08)
	struct UWBP_CustomSwapButton_C* SwapButton; // 0x588(0x08)
	struct UWBP_PlayerInfoDisplay_C* WBP_PlayerInfoDisplay; // 0x590(0x08)
	struct UWBP_ThrobberHorizontal_C* WBP_ThrobberHorizontal_2; // 0x598(0x08)
	bool bHiddenWhenEmpty; // 0x5a0(0x01)
	char ControlsSide; // 0x5a1(0x01)
	char UnknownData_5A2[0x6]; // 0x5a2(0x06)
	struct FMulticastInlineDelegate OnPlayerClicked; // 0x5a8(0x10)
	struct FMulticastInlineDelegate OnEmptyClicked; // 0x5b8(0x10)
	struct FPUMG_CustomMatchMember CachedPlayerInfo; // 0x5c8(0x10)
	struct FMulticastInlineDelegate OnPlayerSwap; // 0x5d8(0x10)
	struct FMulticastInlineDelegate OnPlayerKick; // 0x5e8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x5f8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x608(0x10)

	void HandlePlayerContextUnhover(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover
	void HandlePlayerContextHover(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover
	void DoHover(bool PlayControlsShow); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover
	void DoUnhover(bool PlayControlsHide); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover
	void DoPlayerClicked(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked
	void GetRendererIsLocalPlayer(bool IsLocalPlayer); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer
	void GetCanLocalPlayerKick(bool CanKick); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick
	void UserIsOverUs(bool IsOver); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs
	void GetCanLocalPlayerControl(bool CanControl); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl
	bool NavigateConfirm(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp
	void SetEmpty(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty
	void SetPlayerInfo(struct FPUMG_CustomMatchMember playerinfo); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo
	void SetControlsSide(char Side); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide
	void GetControlsHoverAnim(struct UWidgetAnimation* Animation); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim
	void PreConstruct(bool IsDesignTime); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover
	void GamepadUnhover(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover
	void OnInitialized(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void Construct(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct
	void HandlePlayerClicked(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void OnContextMenuOpen(char Side); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen
	void OnContextMenuClose(); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose
	void SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState
	void OnInputStateChange(char InputState); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange
	void ExecuteUbergraph_WBP_CustomLobbyPlayer(int32_t EntryPoint); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer
	void OnUnhovered__DelegateSignature(struct UWBP_CustomLobbyPlayer_C* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWBP_CustomLobbyPlayer_C* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature
	void OnPlayerKick__DelegateSignature(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature
	void OnPlayerSwap__DelegateSignature(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature
	void OnEmptyClicked__DelegateSignature(struct UKSWidget* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature
	void OnPlayerClicked__DelegateSignature(struct UKSPlayerInfo* playerinfo, struct UKSWidget* Widget); // Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature
};

