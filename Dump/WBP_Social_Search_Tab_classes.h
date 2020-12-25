// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// Size: 0x5a0 (Inherited: 0x578)
struct UWBP_Social_Search_Tab_C : public UKSSocialSearchPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UKSTreeView* Results; // 0x580(0x08)
	struct UWBP_Social_Search_bar_C* SearchBar; // 0x588(0x08)
	struct UObject* LastSelectedItem; // 0x590(0x08)
	struct UAkAudioEvent* ClickSocialSearchTabSFX; // 0x598(0x08)

	void ClearListFocus(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearListFocus
	void TryRecoverLastKnownListFocus(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.TryRecoverLastKnownListFocus
	void GetFirstVisibleItem(struct UKSTreeView* List, struct UObject* Item); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFirstVisibleItem
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnKeyUp
	void GetFocusTargets(struct TArray<struct UWidget*> Target); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFocusTargets
	void ClearSearch(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearSearch
	void HandlePlayerCardClicked(struct UObject* Object); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.HandlePlayerCardClicked
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.UninitializeWidget
	void OnHide(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnHide
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(struct UObject* Item); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
	void OnInputStateChange(char InputState); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnInputStateChange
	void InitializeWidgetNavigation(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidgetNavigation
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(struct FText SearchTerm); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature
	void ExecuteUbergraph_WBP_Social_Search_Tab(int32_t EntryPoint); // Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ExecuteUbergraph_WBP_Social_Search_Tab
};

