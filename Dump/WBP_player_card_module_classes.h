// WidgetBlueprintGeneratedClass WBP_player_card_module.WBP_player_card_module_C
// Size: 0x690 (Inherited: 0x4f0)
struct UWBP_player_card_module_C : public UKSPlayerCardModuleBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* Hover; // 0x4f8(0x08)
	struct UBorder* CardBackground; // 0x500(0x08)
	struct UOverlay* CardGroup; // 0x508(0x08)
	struct UWidgetSwitcher* CardStyleSwitcher; // 0x510(0x08)
	struct UOverlay* EmptyGroup; // 0x518(0x08)
	struct UButton* HitTarget; // 0x520(0x08)
	struct UWidgetSwitcher* HoverGroup; // 0x528(0x08)
	struct UWidgetSwitcher* HoverGroup_Under; // 0x530(0x08)
	struct UImage* Image_8; // 0x538(0x08)
	struct UImage* Image_11; // 0x540(0x08)
	struct UImage* Image_13; // 0x548(0x08)
	struct UImage* Image_134; // 0x550(0x08)
	struct UWBP_ControllerPrompt_C* LeftBackGamepadCallout; // 0x558(0x08)
	struct UOverlay* LeftBackGroup; // 0x560(0x08)
	struct UOverlay* LeftBackHoverGroup; // 0x568(0x08)
	struct UOverlay* LeftBackHoverGroup_Under; // 0x570(0x08)
	struct UWBP_ControllerPrompt_C* LeftBackHoverPrompt; // 0x578(0x08)
	struct UOverlay* LeftHoverGroup; // 0x580(0x08)
	struct UOverlay* LeftHoverGroup_Under; // 0x588(0x08)
	struct UWBP_ControllerPrompt_C* LeftHoverPrompt; // 0x590(0x08)
	struct UWBP_PlayerInfoDisplay_C* PlayerDisplay; // 0x598(0x08)
	struct UImage* RedGradient; // 0x5a0(0x08)
	struct UImage* RedGradient2; // 0x5a8(0x08)
	struct UImage* RedGradient3; // 0x5b0(0x08)
	struct UImage* RedGradient4; // 0x5b8(0x08)
	struct UWBP_ControllerPrompt_C* RightBackGamepadCallout; // 0x5c0(0x08)
	struct UOverlay* RightBackGroup; // 0x5c8(0x08)
	struct UOverlay* RightBackHoverGroup; // 0x5d0(0x08)
	struct UOverlay* RightBackHoverGroup_Under; // 0x5d8(0x08)
	struct UWBP_ControllerPrompt_C* RightBackHoverPrompt; // 0x5e0(0x08)
	struct UOverlay* RightHoverGroup; // 0x5e8(0x08)
	struct UOverlay* RightHoverGroup_Under; // 0x5f0(0x08)
	struct UWBP_ControllerPrompt_C* RightHoverPrompt; // 0x5f8(0x08)
	struct FMulticastInlineDelegate OnPlayerClicked; // 0x600(0x10)
	float ShowPlayerCardAnimationDuration; // 0x610(0x04)
	float ShowAnimDelay; // 0x614(0x04)
	struct FMulticastInlineDelegate OnNavigateLeftFailure; // 0x618(0x10)
	struct FMulticastInlineDelegate OnNavigateRightFailure; // 0x628(0x10)
	struct FMulticastInlineDelegate OnCardHovered; // 0x638(0x10)
	bool CanShowPartyLeaderIcon; // 0x648(0x01)
	char UnknownData_649[0x7]; // 0x649(0x07)
	struct UDataTable* StatusColors; // 0x650(0x08)
	char Player Card Style; // 0x658(0x01)
	char UnknownData_659[0x7]; // 0x659(0x07)
	struct FMulticastInlineDelegate OnBackButton; // 0x660(0x10)
	char ContextSide; // 0x670(0x01)
	char UnknownData_671[0x7]; // 0x671(0x07)
	struct UPUMG_PlayerInfo* CurrentPlayerInfo; // 0x678(0x08)
	char DefaultState; // 0x680(0x01)
	char UnknownData_681[0x7]; // 0x681(0x07)
	struct UAkAudioEvent* HoverPlayercardmoduleSFX; // 0x688(0x08)

	void SetPlayerCardStyle(char PlayerCardStyle); // Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
	void SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted); // Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
	void View_ResetPlayerCardState(); // Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
	bool NavigateConfirm(); // Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
	void PlayerUpdate(struct UPUMG_PlayerInfo* Player Info); // Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate
	void View_SetDefault(); // Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
	void View_SetEmpty(); // Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
	void SocialPlayerCardHoverSFX(); // Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX
	void SocialPlayerCardClickSFX(); // Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX
	void ShowPlayerCardAnimation(float ElapsedTime, float ElapsedAlpha); // Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
	void ShowPlayerCardAnimationFinished(); // Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
	void AddShowPlayerCardAnimation(float Delay); // Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
	void PreConstruct(bool IsDesignTime); // Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void Manual Clicked(); // Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
	void GamepadUnhover(); // Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
	void GamepadHover(); // Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
	void NavigateLeftFailure(); // Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
	void NavigateRightFailure(); // Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
	void Manual Hover(); // Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
	void Manual Unhover(); // Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
	void OnPlayerUpdate(struct UPUMG_PlayerInfo* playerinfo, enum class EKSPlayerOnlineStatus PlayerStatus, bool IsPortalFriend, bool IsPending); // Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate
	void Handle Input State Changed(char InputState); // Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
	void OnContextMenuOpen(char Side); // Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
	void OnContextMenuClose(); // Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
	void OnInitialized(); // Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
	void ExecuteUbergraph_WBP_player_card_module(int32_t EntryPoint); // Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
	void OnBackButton__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature
	void OnCardHovered__DelegateSignature(struct UPUMG_PlayerInfo* Card Player Info); // Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature
	void OnNavigateRightFailure__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature
	void OnNavigateLeftFailure__DelegateSignature(); // Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature
	void OnPlayerClicked__DelegateSignature(struct UWBP_player_card_module_C* Selected Player Card); // Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature
};

