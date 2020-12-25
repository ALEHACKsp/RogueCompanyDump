// WidgetBlueprintGeneratedClass BrightLobbyWidget.BrightLobbyWidget_C
// Size: 0x5e0 (Inherited: 0x4e0)
struct UBrightLobbyWidget_C : public UKSLobbyWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x4e8(0x08)
	struct UPUMG_CanvasPanel* AlwaysPersistent; // 0x4f0(0x08)
	struct UPUMG_CanvasPanel* AlwaysVisibile; // 0x4f8(0x08)
	struct UImage* bkg; // 0x500(0x08)
	struct UBlocker_C* Blocker; // 0x508(0x08)
	struct UBrightLobbyHeader_C* BrightLobbyHeader; // 0x510(0x08)
	struct UPUMG_CanvasPanel* Content; // 0x518(0x08)
	struct UImage* Image_100; // 0x520(0x08)
	struct UWBP_local_player_card_C* PlayerCard; // 0x528(0x08)
	struct UPUMG_CanvasPanel* PopupContent; // 0x530(0x08)
	struct UPopupManager_C* PopupManager; // 0x538(0x08)
	struct UImage* SafeFrameBorderBottom; // 0x540(0x08)
	struct UImage* SafeFrameBorderLeft; // 0x548(0x08)
	struct UImage* SafeFrameBorderRight; // 0x550(0x08)
	struct UImage* SafeFrameBorderTop; // 0x558(0x08)
	struct UGridPanel* SafeFrameGrid; // 0x560(0x08)
	struct UPUMG_CanvasPanel* StickyContent; // 0x568(0x08)
	struct UPUMG_CanvasPanel* StickyContentTop; // 0x570(0x08)
	struct UWBP_TextChat_C* TextChat; // 0x578(0x08)
	struct UWBP_ToastNotification_Manager_C* ToastNotificationManager; // 0x580(0x08)
	struct UWBP_Context_Bar_C* WBP_Context_Bar; // 0x588(0x08)
	struct UWBP_LogoLarge_C* WBP_LogoLarge; // 0x590(0x08)
	struct UWBP_LogoMedium_C* WBP_LogoMedium; // 0x598(0x08)
	struct UWBP_QueueTimer_v2_C* WBP_QueueTimer_v2; // 0x5a0(0x08)
	struct UWBP_TopNavBar_C* WBP_TopNavBar; // 0x5a8(0x08)
	struct UWBP_VersionNumber_C* WBP_VersionNumber; // 0x5b0(0x08)
	struct FVector2D Latest Viewport Size; // 0x5b8(0x08)
	struct FMulticastInlineDelegate BackButtonClicked; // 0x5c0(0x10)
	struct TArray<struct FStickyWidgetData> StickyWidgets; // 0x5d0(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown
	void SetErrorMessageDT(); // Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
	void UninitializeSubWidgets(struct UPanelWidget* Container); // Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
	void InitializeSubWidgets(struct UPanelWidget* Container); // Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
	void HidePersistentWidgets(); // Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
	void HandleMainLobbyCameraSet(); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet
	void HandlePreMatchAnimStarted(); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted
	void UnbindLobbyAnimationHandling(); // Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling
	void BindLobbyAnimationHandling(); // Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling
	void UninitializeKSWidgets(); // Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
	void InitializeKSWidgets(); // Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
	void CreateStickyWidgetData(); // Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
	void Set Safe Frame(float Scale); // Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
	void InitializeWidget(struct APUMG_HUD* HUD); // Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget
	void UninitializeWidget(); // Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
	void OnShown(); // Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
	void HandleSpecialRouteCases(struct FName CurrentRoute, struct FName LastRoute, enum class EViewManagerLayer Layer); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
	void Handle Viewport Size Changed(struct FIntPoint ViewportSize); // Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed
	void HandleOpenTextChat(bool BeginChatCommand); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat
	void InitializeWidgetButtonListeners(); // Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners
	void HandleOpenTextChatForCommand(); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand
	void HandleOpenTextChatForChat(); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat
	void OpenTextChatToPlayer(struct UPUMG_PlayerInfo* Player); // Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer
	void HandleViewStateChangeStarted(struct FName CurrentRoute, struct FName NextRoute, enum class EViewManagerLayer Layer); // Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
	void DebugOnePress(); // Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress
	void DebugOneRelease(); // Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease
	void DebugTwoPress(); // Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress
	void DebugTwoRelease(); // Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease
	void ExecuteUbergraph_BrightLobbyWidget(int32_t EntryPoint); // Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
	void BackButtonClicked__DelegateSignature(); // Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
};

