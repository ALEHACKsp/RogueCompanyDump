// WidgetBlueprintGeneratedClass ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C
// Size: 0x590 (Inherited: 0x4e0)
struct UScoreboardTeamSection_Lobby_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UVerticalBox* PlayerEntries; // 0x4e8(0x08)
	struct UScoreboardPlayerStats_Lobby_C* ScoreboardPlayerStats_Lobby; // 0x4f0(0x08)
	struct UTextBlock* teamScore; // 0x4f8(0x08)
	struct USizeBox* TeamScoreContainer; // 0x500(0x08)
	struct UImage* TeamScoreGradient; // 0x508(0x08)
	struct UBorder* TeamScoreWrapper; // 0x510(0x08)
	struct UWBP_PanelDefault_C* WBP_PanelDefault; // 0x518(0x08)
	struct UTextBlock* WinText; // 0x520(0x08)
	struct FTeamStats TeamStruct; // 0x528(0x20)
	struct TArray<struct FPlayerEntryStats> playerStats; // 0x548(0x10)
	struct UPUMG_PlayerDataFactory* PlayerDataFactory; // 0x558(0x08)
	struct TArray<struct UScoreboardPlayerStats_Lobby_C*> Players; // 0x560(0x10)
	struct TArray<struct FPlayerEntryStats> TeamPlayerStats; // 0x570(0x10)
	struct FMulticastInlineDelegate OnPlayersChanged; // 0x580(0x10)

	void GetPlayerDisplays(struct TArray<struct UScoreboardPlayerStats_Lobby_C*> PlayerEntries); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.GetPlayerDisplays
	void CreatePlayerEntry(int32_t Index, struct FPlayerEntryStats playerStats, struct UScoreboardPlayerStats_Lobby_C* PlayerEntry); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntry
	void SetIsVictorious(bool IsVictorious); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetIsVictorious
	void SortPlayers(struct TArray<struct FPlayerEntryStats> PlayerEntries, bool DescOrder); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SortPlayers
	void CreatePlayerEntries(struct TArray<struct FPlayerEntryStats> PlayerEntries); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.CreatePlayerEntries
	void FindPlayerTeam(int32_t PlayerTeamNum); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.FindPlayerTeam
	void PopulatePlayer(); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PopulatePlayer
	void Construct(); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.Construct
	void SetColor(); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.SetColor
	void PreConstruct(bool IsDesignTime); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.PreConstruct
	void ExecuteUbergraph_ScoreboardTeamSection_Lobby(int32_t EntryPoint); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.ExecuteUbergraph_ScoreboardTeamSection_Lobby
	void OnPlayersChanged__DelegateSignature(); // Function ScoreboardTeamSection_Lobby.ScoreboardTeamSection_Lobby_C.OnPlayersChanged__DelegateSignature
};

