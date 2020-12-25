// WidgetBlueprintGeneratedClass ScoreboardOverview.ScoreboardOverview_C
// Size: 0x550 (Inherited: 0x4e0)
struct UScoreboardOverview_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Eliminated_Enemy; // 0x4e8(0x08)
	struct UImage* Objective_Enemy; // 0x4f0(0x08)
	struct UScoreboardTeamSection_Lobby_C* ScoreboardTeamSection_Lobby; // 0x4f8(0x08)
	struct UVerticalBox* TeamSections; // 0x500(0x08)
	struct UImage* TimeExpired_Enemy; // 0x508(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x510(0x08)
	struct UWBP_RoundRecap_C* WBP_RoundRecap; // 0x518(0x08)
	struct UPUMG_PlayerDataFactory* PlayerDataFactory; // 0x520(0x08)
	struct TArray<struct UScoreboardTeamSection_Lobby_C*> teams; // 0x528(0x10)
	bool DidWin; // 0x538(0x01)
	char UnknownData_539[0x7]; // 0x539(0x07)
	struct FMulticastInlineDelegate OnTeamsChanged; // 0x540(0x10)

	void GetAllPlayerDisplays(struct TArray<struct UScoreboardPlayerStats_Lobby_C*> Widgets); // Function ScoreboardOverview.ScoreboardOverview_C.GetAllPlayerDisplays
	void CreateTeamDisplay(struct FTeamStats TeamStats, struct FScoreboardStats ScoreboardStats, struct UScoreboardTeamSection_Lobby_C* ScoreboardTeam); // Function ScoreboardOverview.ScoreboardOverview_C.CreateTeamDisplay
	void PopulateScoreboard(struct FScoreboardStats ScoreboardStatStruct); // Function ScoreboardOverview.ScoreboardOverview_C.PopulateScoreboard
	void InitializeWidget(struct APUMG_HUD* HUD); // Function ScoreboardOverview.ScoreboardOverview_C.InitializeWidget
	void SetMatchResult(bool DidWin); // Function ScoreboardOverview.ScoreboardOverview_C.SetMatchResult
	void SetTeamColor(); // Function ScoreboardOverview.ScoreboardOverview_C.SetTeamColor
	void PreConstruct(bool IsDesignTime); // Function ScoreboardOverview.ScoreboardOverview_C.PreConstruct
	void HandleTeamPlayersChanged(); // Function ScoreboardOverview.ScoreboardOverview_C.HandleTeamPlayersChanged
	void ExecuteUbergraph_ScoreboardOverview(int32_t EntryPoint); // Function ScoreboardOverview.ScoreboardOverview_C.ExecuteUbergraph_ScoreboardOverview
	void OnTeamsChanged__DelegateSignature(); // Function ScoreboardOverview.ScoreboardOverview_C.OnTeamsChanged__DelegateSignature
};

