// WidgetBlueprintGeneratedClass WBP_CreateCustomGame.WBP_CreateCustomGame_C
// Size: 0x6a4 (Inherited: 0x5d0)
struct UWBP_CreateCustomGame_C : public UKSQuickPlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UWidgetAnimation* PopulateMaps; // 0x5d8(0x08)
	struct UImage* Image_112; // 0x5e0(0x08)
	struct UKSScrollBox* MapScrollBox; // 0x5e8(0x08)
	struct UWBP_ControllerPrompt_C* MapScrollPrompt; // 0x5f0(0x08)
	struct USizeBox* MapScrollPromptContainer; // 0x5f8(0x08)
	struct UUniformGridPanel* MapSelectionPanel; // 0x600(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_1; // 0x608(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_2; // 0x610(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_3; // 0x618(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_4; // 0x620(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_5; // 0x628(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_6; // 0x630(0x08)
	struct UWBP_CreateCustomGame_MapButton_C* WBP_CreateCustomGame_MapButton_C_7; // 0x638(0x08)
	struct UWBP_CustomGameConfirmation_C* WBP_CustomGameConfirmation; // 0x640(0x08)
	struct UWBP_GameModeInfoPanel_C* WBP_GameModeInfoPanel; // 0x648(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x650(0x08)
	struct UWBP_NavBar_C* WBP_NavBar; // 0x658(0x08)
	struct TArray<struct FClientQueueInfo> CustomQueues; // 0x660(0x10)
	int32_t CurrentTabIndex; // 0x670(0x04)
	char UnknownData_674[0x4]; // 0x674(0x04)
	struct TArray<struct UWBP_CreateCustomGame_MapButton_C*> MapButtons; // 0x678(0x10)
	int32_t TabCount; // 0x688(0x04)
	char UnknownData_68C[0x4]; // 0x68c(0x04)
	struct UKSQueueDataFactory* QueueDataFactory; // 0x690(0x08)
	struct UDataTable* DTCustomQueues; // 0x698(0x08)
	float MapScrollSpeed; // 0x6a0(0x04)

	void Handle Input State Changed(char InputState); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Handle Input State Changed
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyUp
	void GetQueueImageById(int32_t QueueId, struct UTexture2D* QueueImage); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
	void SetupQueueInfoPanel(struct FClientQueueInfo ClientQueueInfo); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
	void OnLobbyCreated(int32_t QueueId); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
	void OnLobbyCanceled(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
	void SetupConfirmation(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
	void ShowConfirmation(int32_t QueueId, int32_t MapId); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
	void BindConfirmationNavigation(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
	void GoToLastScreen(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
	bool NavigateBack(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
	void OnPreviousTab(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
	void OnNextTab(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
	void SetNavigation(int32_t NumColumns); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
	void ResetMapSelection(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
	void OnMapSelected(int32_t MapId); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
	void OnTabSelected(int32_t ButtonIndex); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
	void Setup Custom Tabs(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
	void Construct(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
	void InitializeWidgetNavigation(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
	void CheckIsInCustomMatch(enum class EPUMG_MatchStatus MatchStatus); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
	void OnButtonsCreated(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
	void OnBackButtonClicked(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
	void OnHide(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
	void OnShown(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
	void PreConstruct(bool IsDesignTime); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
	void HandleMapScrollChange(); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.HandleMapScrollChange
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Tick
	void ExecuteUbergraph_WBP_CreateCustomGame(int32_t EntryPoint); // Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
};

