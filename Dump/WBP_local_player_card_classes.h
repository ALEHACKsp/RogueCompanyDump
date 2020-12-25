// WidgetBlueprintGeneratedClass WBP_local_player_card.WBP_local_player_card_C
// Size: 0x5a8 (Inherited: 0x4e0)
struct UWBP_local_player_card_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* AvatarShade; // 0x4e8(0x08)
	struct UImage* BackgroundFill; // 0x4f0(0x08)
	struct USizeBox* IconSizer; // 0x4f8(0x08)
	struct UCircularThrobber* PendingPurchaseThrobber; // 0x500(0x08)
	struct UWBP_PlayerIdentity_Avatar_C* PlayerAvatar; // 0x508(0x08)
	struct UWBP_PlayerIdentity_PlayerLevel_C* PlayerLevel; // 0x510(0x08)
	struct UTextBlock* PlayerName; // 0x518(0x08)
	struct UImage* PlayerNameShade; // 0x520(0x08)
	struct UWBP_PersonalRankedIcon_C* RankIcon; // 0x528(0x08)
	struct UTextBlock* RBCount; // 0x530(0x08)
	struct UImage* RBIcon; // 0x538(0x08)
	struct USizeBox* RBIconSizer; // 0x540(0x08)
	struct UWidgetSwitcher* RBSwitcher; // 0x548(0x08)
	struct UWidgetSwitcher* RepSwitcher; // 0x550(0x08)
	struct UTextBlock* ReputationCount; // 0x558(0x08)
	struct UImage* ReputationIcon; // 0x560(0x08)
	struct UHorizontalBox* ReputationWrapper; // 0x568(0x08)
	struct UHorizontalBox* RogueBucksWrapper; // 0x570(0x08)
	struct UThrobber* Throbber; // 0x578(0x08)
	struct UThrobber* Throbber_2; // 0x580(0x08)
	struct UKSPlayerDataFactory* PlayerDataFactory; // 0x588(0x08)
	struct TArray<struct UTexture2D*> AvatarOptions; // 0x590(0x10)
	struct UKSLoadoutDataFactory* LoadoutDataFactory; // 0x5a0(0x08)

	void UpdatePendingPurchaseWarning(); // Function WBP_local_player_card.WBP_local_player_card_C.UpdatePendingPurchaseWarning
	void SetPlayerAvatar(); // Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerAvatar
	void SetPlayerCurrency(); // Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerCurrency
	void SetPlayerLevel(); // Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerLevel
	void SetPlayerInfo(); // Function WBP_local_player_card.WBP_local_player_card_C.SetPlayerInfo
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
	void UninitializeWidget(); // Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
	void ExecuteUbergraph_WBP_local_player_card(int32_t EntryPoint); // Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
};

