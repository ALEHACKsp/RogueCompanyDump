// WidgetBlueprintGeneratedClass WBP_CustomMassInvite.WBP_CustomMassInvite_C
// Size: 0x5f8 (Inherited: 0x4f8)
struct UWBP_CustomMassInvite_C : public UKSMassInviteModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* LoadingSearch; // 0x500(0x08)
	struct UWidgetAnimation* Intro; // 0x508(0x08)
	struct UWidgetAnimation* Loading; // 0x510(0x08)
	struct UOverlay* AutoListContent; // 0x518(0x08)
	struct UTextBlock* AutoListError; // 0x520(0x08)
	struct UWidgetSwitcher* AutoListSwitcher; // 0x528(0x08)
	struct UWBP_ThrobberShield_C* AutoLoadThrobber; // 0x530(0x08)
	struct UWBP_ThrobberHorizontal_C* AutoLoadThrobber2; // 0x538(0x08)
	struct UWBP_subscreen_nav_tab_C* AutoTab; // 0x540(0x08)
	struct UBorder* Blocker; // 0x548(0x08)
	struct UButton* BlockerButton; // 0x550(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x558(0x08)
	struct UKSTreeView* PlayerList; // 0x560(0x08)
	struct UWBP_Social_Search_bar_C* SearchBar; // 0x568(0x08)
	struct UKSTreeView* SearchList; // 0x570(0x08)
	struct UOverlay* SearchListContent; // 0x578(0x08)
	struct UTextBlock* SearchListError; // 0x580(0x08)
	struct UWBP_ThrobberShield_C* SearchLoadThrobber; // 0x588(0x08)
	struct UWBP_ThrobberHorizontal_C* SearchLoadThrobber2; // 0x590(0x08)
	struct UWidgetSwitcher* SearchSwitcher; // 0x598(0x08)
	struct UWBP_subscreen_nav_tab_C* SearchTab; // 0x5a0(0x08)
	struct UWBP_StandardButtonMedium_C* SubmitBtn; // 0x5a8(0x08)
	struct UTextBlock* TitleLabel; // 0x5b0(0x08)
	struct UWBP_ModalPopupContainer_C* WBP_ModalPopupContainer; // 0x5b8(0x08)
	struct FName RouteName; // 0x5c0(0x08)
	struct FMulticastInlineDelegate OnSelect; // 0x5c8(0x10)
	int32_t AutoListFocusGroup; // 0x5d8(0x04)
	int32_t NoFocusGroup; // 0x5dc(0x04)
	int32_t SearchListFocusGroup; // 0x5e0(0x04)
	char UnknownData_5E4[0x4]; // 0x5e4(0x04)
	struct FKSPlayerQueryHandle SearchHandle; // 0x5e8(0x10)

	void FocusFirstPlayer(struct UKSTreeView* TreeView); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer
	void List_HandleItemClicked(struct UObject* Item, struct UKSTreeView* OwningList); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked
	void List_HandleItemInitialized(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized
	void List_HandleListItemHover(struct UObject* Item, bool bIsSelected); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover
	void ShowLoadAnimImpl(bool ShowLoading, struct UWidgetAnimation* Animation); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl
	void ShowSearchListLoading(bool ShowLoading); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading
	void HandleReceiveSearchPlayers(enum class EKSPlayerQueryError Error, struct TArray<struct UKSPlayerInfo*> Matches); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers
	void GetQueryDataFactory(struct UKSPlayerQueryDataFactory* DataFactory); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory
	void SetTab(int32_t Index); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp
	void ShowAutoListLoading(bool Show); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading
	struct FEventReply OnBlockerClick(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick
	void List_OnGetItemChildren(struct UObject* Item, struct TArray<struct UObject*> Children); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren
	bool NavigateBack(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack
	void OnShown(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	void OnReceivePlayers(struct TArray<struct UKSPlayerInfo*> Players); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
	void InitializeWidgetNavigation(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature
	void BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	void OnInitialized(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized
	void OnLoadingAnimationStart(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart
	void OnLoadingAnimationEnd(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd
	void OnInputStateChanged(char InputState); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget
	void BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On Tab Selected__DelegateSignature(struct UWBP_subscreen_nav_tab_C* Tab); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On Tab Selected__DelegateSignature
	void BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature(struct UWBP_subscreen_nav_tab_C* Tab); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature(struct FText SearchTerm); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature
	void OnHide(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide
	void OnLoadingSearchStart(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart
	void OnLoadingSearchEnd(); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature(struct UObject* Item, struct UUserWidget* Widget); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsSelected); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature(struct UObject* Item, bool bIsHovered); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature
	void BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	void ExecuteUbergraph_WBP_CustomMassInvite(int32_t EntryPoint); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite
	void OnSelect__DelegateSignature(struct UKSPlayerInfo* playerinfo); // Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature
};

