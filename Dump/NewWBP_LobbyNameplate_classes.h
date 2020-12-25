// WidgetBlueprintGeneratedClass NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C
// Size: 0x51c (Inherited: 0x4e0)
struct UNewWBP_LobbyNameplate_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UKSAsyncImage* AvatarIcon; // 0x4e8(0x08)
	struct UImage* PartyLeader; // 0x4f0(0x08)
	struct USizeBox* PartyLeaderIcon; // 0x4f8(0x08)
	struct UTextBlock* PlayerName; // 0x500(0x08)
	struct UPUMG_FriendDataFactory* FriendsDataFactory; // 0x508(0x08)
	struct UPUMG_PartyDataFactory* PartyDataFactory; // 0x510(0x08)
	int32_t MaxNameLength; // 0x518(0x04)

	void OnPossession(struct APlayerState* PlayerState, struct AKSCharacter* Character); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
	void OnHovered(); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
	void OnUnhovered(); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
	void Construct(); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
	void SetName(struct FText InName); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
	void SetIcons(bool IsLeader, struct UKSItem* AvatarItem); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetIcons
	void InitializeWidget(struct APUMG_HUD* HUD); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.InitializeWidget
	void PreConstruct(bool IsDesignTime); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
	void ExecuteUbergraph_NewWBP_LobbyNameplate(int32_t EntryPoint); // Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
};

