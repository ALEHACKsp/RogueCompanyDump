// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// Size: 0x570 (Inherited: 0x548)
struct UWBP_Social_Friends_Tab_C : public UKSSocialFriendsPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct UKSTreeView* PlayerList; // 0x550(0x08)
	struct UAkAudioEvent* ClickSocialFriendsSFX; // 0x558(0x08)
	struct FMulticastInlineDelegate OnPlayerListScrolled; // 0x560(0x10)

	void FocusFirstItem(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
	void TryGetFirstItemForCategory(enum class EKSSocialOverlaySection Category, struct UKSPlayerInfo* Output); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
	void FindFirstOnlinePlayerOrDefault(struct UObject* Item); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
	void FocusFirstOnlinePlayer(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
	void HandleItemClicked(struct UObject* Item); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
	bool NavigateConfirm(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
	void GetFocusTarget(struct UWidget* Target); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
	void OnShown(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
	void OnInputStateChanged(char InputState); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
	void InitializeWidgetNavigation(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
	void OnListScrolled(float ItemOffset, float DistanceRemaining); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnListScrolled
	void ExecuteUbergraph_WBP_Social_Friends_Tab(int32_t EntryPoint); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
	void OnPlayerListScrolled__DelegateSignature(); // Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnPlayerListScrolled__DelegateSignature
};

