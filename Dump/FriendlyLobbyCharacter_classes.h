// BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C
// Size: 0x3771 (Inherited: 0x3740)
struct AFriendlyLobbyCharacter_C : public ALobbyMainCharacter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3740(0x08)
	struct UWidgetComponent* WidgetNameplate; // 0x3748(0x08)
	bool PendingIsLeader; // 0x3750(0x01)
	char UnknownData_3751[0x7]; // 0x3751(0x07)
	struct UKSItem* PendingAvatar; // 0x3758(0x08)
	struct FString PendingPlayerName; // 0x3760(0x10)
	bool NeedsToSetNameplate; // 0x3770(0x01)

	void ReceiveTick(float DeltaSeconds); // Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick
	void SetLobbyNameplate(struct FString PlayerName, struct UKSItem* AvatarItem, bool IsLeader); // Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate
	void HideLobbyNameplate(); // Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate
	void ShowLobbyNameplate(); // Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate
	void ExecuteUbergraph_FriendlyLobbyCharacter(int32_t EntryPoint); // Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter
};

