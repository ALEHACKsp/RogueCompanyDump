// WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C
// Size: 0x558 (Inherited: 0x4e0)
struct UWBP_Social_Header_Cosmetic_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWBP_AsyncIcon_C* AvatarIcon; // 0x4e8(0x08)
	struct UButton* DNDToggleBtn; // 0x4f0(0x08)
	struct UTextBlock* NameLabel; // 0x4f8(0x08)
	struct UKSAsyncImage* PlayerBanner; // 0x500(0x08)
	struct UWBP_ControllerPrompt_C* PlayerStatusGamepadCallout; // 0x508(0x08)
	struct UWBP_PlayerStatus_ContextMenu_C* WBP_PlayerStatus_ContextMenu; // 0x510(0x08)
	struct UKSPlayerInfo* CurrentPlayerInfo; // 0x518(0x08)
	struct FMulticastInlineDelegate OnNavigationReady; // 0x520(0x10)
	struct FMulticastInlineDelegate OnMenuShown; // 0x530(0x10)
	struct FMulticastInlineDelegate OnMenuHidden; // 0x540(0x10)
	struct UAkAudioEvent* ClickSocialHeaderCosmeticSFX; // 0x550(0x08)

	void BindContextMenu(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
	void UpdateName(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
	void UpdateAfterInfoChange(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
	void UpdateBanner(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateBanner
	void UpdateAvatar(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAvatar
	void SetData(struct UKSPlayerInfo* playerinfo); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
	void PreConstruct(bool IsDesignTime); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.InitializeWidget
	void BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void HandleInputStateChanged(char InputState); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
	void ToggleDND(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ToggleDND
	void HandleReadyNavigation(struct TArray<struct UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
	void HandleMenuStart(struct UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
	void HandleMenuHidden(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuHidden
	void HideStatusMenu(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HideStatusMenu
	void ExecuteUbergraph_WBP_Social_Header_Cosmetic(int32_t EntryPoint); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
	void OnMenuHidden__DelegateSignature(); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuHidden__DelegateSignature
	void OnMenuShown__DelegateSignature(struct UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
	void OnNavigationReady__DelegateSignature(struct TArray<struct UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons); // Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
};

