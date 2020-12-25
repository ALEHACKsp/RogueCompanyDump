// WidgetBlueprintGeneratedClass WBP_RougeStatsScreen.WBP_RougeStatsScreen_C
// Size: 0x56c (Inherited: 0x4e0)
struct UWBP_RougeStatsScreen_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UKSSortableVerticalBox* PnlStatEntries; // 0x4f0(0x08)
	struct UVerticalBox* PnlStatTabs; // 0x4f8(0x08)
	struct UScrollBox* SclStatsEntries; // 0x500(0x08)
	struct UWBP_AsyncIcon_C* StatIcon; // 0x508(0x08)
	struct UTextBlock* StatName; // 0x510(0x08)
	struct UTextBlock* StatValue; // 0x518(0x08)
	struct TArray<enum class EKSMercMasteryActivityType> DisplayedMercStats; // 0x520(0x10)
	enum class EKSMercMasteryActivityType CurrentStat; // 0x530(0x01)
	char UnknownData_531[0x7]; // 0x531(0x07)
	struct TArray<struct UWBP_RogueStatsScreen_RogueEntry_C*> PooledStatEntries; // 0x538(0x10)
	struct TArray<struct UWBP_RogueStatsScreen_RogueEntry_C*> ActiveStatEntries; // 0x548(0x10)
	struct TArray<struct UWBP_RogueStatsScreen_TabEntry_C*> TabWidgets; // 0x558(0x10)
	float ScrollSpeed; // 0x568(0x04)

	void RegisterScrollingInput(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput
	bool NavigateBack(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack
	void GoBack(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack
	void TickScrolling(float DeltaTime); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling
	void ScrollReleased(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased
	void ScrollDownPressed(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed
	void ScrollUpPressed(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed
	void SetupTabNavigation(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation
	void GetPooledStatEntry(struct UWBP_RogueStatsScreen_RogueEntry_C* StatEntry); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry
	void ReturnAllStatEntriesToPool(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool
	bool On_PnlStatEntries_SortCompareChildren_1(struct UWidget* LHS, struct UWidget* RHS); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
	void SelectStat(enum class EKSMercMasteryActivityType ActivityType); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat
	void AddStatTabs(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs
	void Construct(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget
	void BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
	void InitializeWidgetNavigation(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation
	void InitializeWidgetButtonListeners(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners
	void OnShown(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown
	void OnBackPrompt(); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt
	void ExecuteUbergraph_WBP_RougeStatsScreen(int32_t EntryPoint); // Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen
};

