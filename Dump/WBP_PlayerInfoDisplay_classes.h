// WidgetBlueprintGeneratedClass WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C
// Size: 0x624 (Inherited: 0x4e0)
struct UWBP_PlayerInfoDisplay_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UScaleBox* AvatarContainer; // 0x4e8(0x08)
	struct UKSAsyncImage* IconA; // 0x4f0(0x08)
	struct UHorizontalBox* IconsShelf; // 0x4f8(0x08)
	struct UImage* InputIcon; // 0x500(0x08)
	struct USizeBox* InputIconContainer; // 0x508(0x08)
	struct UTextBlock* LevelText; // 0x510(0x08)
	struct UTextBlock* MetaStatusLabel; // 0x518(0x08)
	struct USizeBox* PartyLeaderContainer; // 0x520(0x08)
	struct UImage* PartyLeaderIcon; // 0x528(0x08)
	struct UWBP_PlatformIcon_C* PlatformIcon; // 0x530(0x08)
	struct UWBP_PlatformIcon_C* PlatformIconA; // 0x538(0x08)
	struct USizeBox* PlatformIconContainer; // 0x540(0x08)
	struct UOverlay* PlayerLevelGroup; // 0x548(0x08)
	struct UTextBlock* PlayerNameText; // 0x550(0x08)
	struct UHorizontalBox* StatusContainer; // 0x558(0x08)
	struct UTextBlock* StatusLabel; // 0x560(0x08)
	struct UImage* StatusSwatch; // 0x568(0x08)
	struct USizeBox* VoiceIconContainer; // 0x570(0x08)
	struct UWBP_VoiceActivityIcon_C* WBP_VoiceActivityIcon; // 0x578(0x08)
	bool ShowStatus; // 0x580(0x01)
	bool ShowPartyLeaderIcon; // 0x581(0x01)
	char IconShelfAlignment; // 0x582(0x01)
	char UnknownData_583[0x5]; // 0x583(0x05)
	struct UKSPlayerInfo* CachedPlayerInfo; // 0x588(0x08)
	struct UDataTable* StatusColors; // 0x590(0x08)
	struct FSlateColor PlayerNameColor; // 0x598(0x28)
	struct FSlateFontInfo PlayerNameFont; // 0x5c0(0x50)
	bool IsMuted; // 0x610(0x01)
	bool IsTalking; // 0x611(0x01)
	char UnknownData_612[0x2]; // 0x612(0x02)
	struct FMargin IconShelfMargin; // 0x614(0x10)

	void UpdateVoiceDisplay(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
	void SetPlayerNameFont(struct FSlateFontInfo Font); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
	void SetPlayerNameColor(struct FSlateColor Color); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
	void TogglePartyLeaderIcon(bool ShowLeaderIcon); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
	void SetVoiceActive(bool IsActive); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
	void SetVoiceTalking(bool Talking); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
	void SetVoiceMuted(bool Muted); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
	void GetStatusColor(struct FSlateColor StatusColor); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
	void UpdateStatus(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
	void UpdatePlayerInfoIcons(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
	void UpdateAvatarDisplay(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
	void SetPlayerInfo(struct UKSPlayerInfo* playerinfo); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
	void SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
	void ToggleStatusDisplay(bool ShowStatus); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
	void PreConstruct(bool IsDesignTime); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
	void HandleFilteredNameUpdate(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
	void OnInitialized(); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
	void ExecuteUbergraph_WBP_PlayerInfoDisplay(int32_t EntryPoint); // Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
};

