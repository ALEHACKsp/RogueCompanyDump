// WidgetBlueprintGeneratedClass ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C
// Size: 0x680 (Inherited: 0x4e0)
struct UScoreboardPlayerStats_Lobby_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Hover; // 0x4e8(0x08)
	struct UWBP_PlayerIdentity_Avatar_C* avatar; // 0x4f0(0x08)
	struct USizeBox* AvatarWrapper; // 0x4f8(0x08)
	struct UTextBlock* DamageScore; // 0x500(0x08)
	struct UTextBlock* DeathScore; // 0x508(0x08)
	struct UTextBlock* DownScore; // 0x510(0x08)
	struct UTextBlock* EliminationScore; // 0x518(0x08)
	struct UButton* HitTarget; // 0x520(0x08)
	struct UImage* Image_302; // 0x528(0x08)
	struct UWBP_AsyncIcon_C* JobIcon; // 0x530(0x08)
	struct UImage* NameBackground; // 0x538(0x08)
	struct UTextBlock* ObjectiveScore; // 0x540(0x08)
	struct UWBP_PlayerIdentity_PlayerLevel_C* PlayerLevel; // 0x548(0x08)
	struct UTextBlock* PlayerName; // 0x550(0x08)
	struct UTextBlock* PointScore; // 0x558(0x08)
	struct UTextBlock* ReviveScore; // 0x560(0x08)
	struct UImage* ScoreBackground; // 0x568(0x08)
	struct UImage* SelfIndicator; // 0x570(0x08)
	struct UWBP_BoxStroke_C* WBP_BoxStroke; // 0x578(0x08)
	struct UWBP_BoxStroke_C* WBP_BoxStroke_272; // 0x580(0x08)
	struct FPlayerEntryStats playerStats; // 0x588(0xc8)
	struct UKSEMODataFactory* EMODataFactory; // 0x650(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x658(0x10)
	bool HasHovered; // 0x668(0x01)
	char UnknownData_669[0x7]; // 0x669(0x07)
	struct UAkAudioEvent* HoverScoreboardPlayerStatsSFX; // 0x670(0x08)
	struct UAkAudioEvent* ClickScoreboardPlayerStatsSFX; // 0x678(0x08)

	void Set Level From Player Info(struct UKSPlayerInfo* KS Player Info); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Level From Player Info
	void Set Avatar From Player Info(struct UKSPlayerInfo* KS Player Info); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Set Avatar From Player Info
	bool NavigateConfirm(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.NavigateConfirm
	void SetColors(bool IsFriendly); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetColors
	void Construct(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.Construct
	void SetTeamColor(bool IsFriendlyTeam); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetTeamColor
	void SetLocalPlayer(bool IsLocalPlayer); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetLocalPlayer
	void SetJobIcon(struct UKSJobItem* JobItem); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.SetJobIcon
	void InitializeWidget(struct APUMG_HUD* HUD); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.InitializeWidget
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadHover
	void GamepadUnhover(); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.GamepadUnhover
	void ExecuteUbergraph_ScoreboardPlayerStats_Lobby(int32_t EntryPoint); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.ExecuteUbergraph_ScoreboardPlayerStats_Lobby
	void OnClicked__DelegateSignature(struct UWidget* Widget, int64_t PlayerId); // Function ScoreboardPlayerStats_Lobby.ScoreboardPlayerStats_Lobby_C.OnClicked__DelegateSignature
};

