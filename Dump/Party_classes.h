// Class Party.Chatroom
// Size: 0x58 (Inherited: 0x28)
struct UChatroom : public UObject {
	struct FString CurrentChatRoomId; // 0x28(0x10)
	int32_t MaxChatRoomRetries; // 0x38(0x04)
	int32_t NumChatRoomRetries; // 0x3c(0x04)
	char UnknownData_40[0x18]; // 0x40(0x18)
};

// Class Party.SocialManager
// Size: 0x1a0 (Inherited: 0x28)
struct USocialManager : public UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	struct TArray<struct USocialToolkit*> SocialToolkits; // 0x48(0x10)
	struct USocialDebugTools* SocialDebugTools; // 0x58(0x08)
	char UnknownData_60[0x140]; // 0x60(0x140)
};

// Class Party.SocialParty
// Size: 0x2a0 (Inherited: 0x28)
struct USocialParty : public UObject {
	char UnknownData_28[0x30]; // 0x28(0x30)
	struct APartyBeaconClient* ReservationBeaconClientClass; // 0x58(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClientClass; // 0x60(0x08)
	char UnknownData_68[0x10]; // 0x68(0x10)
	struct FUniqueNetIdRepl OwningLocalUserId; // 0x78(0x28)
	struct FUniqueNetIdRepl CurrentLeaderId; // 0xa0(0x28)
	struct TMap<struct FUniqueNetIdRepl, struct UPartyMember*> PartyMembersById; // 0xc8(0x50)
	bool bEnableAutomaticPartyRejoin; // 0x118(0x01)
	char UnknownData_119[0x77]; // 0x119(0x77)
	struct APartyBeaconClient* ReservationBeaconClient; // 0x190(0x08)
	char UnknownData_198[0x8]; // 0x198(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClient; // 0x1a0(0x08)
	char UnknownData_1A8[0xf8]; // 0x1a8(0xf8)
};

// Class Party.PartyMember
// Size: 0xf0 (Inherited: 0x28)
struct UPartyMember : public UObject {
	char UnknownData_28[0x40]; // 0x28(0x40)
	struct USocialUser* SocialUser; // 0x68(0x08)
	char UnknownData_70[0x80]; // 0x70(0x80)
};

// Class Party.SocialToolkit
// Size: 0x1f0 (Inherited: 0x28)
struct USocialToolkit : public UObject {
	char UnknownData_28[0x38]; // 0x28(0x38)
	struct USocialUser* LocalUser; // 0x60(0x08)
	struct TArray<struct USocialUser*> AllUsers; // 0x68(0x10)
	char UnknownData_78[0x50]; // 0x78(0x50)
	struct ULocalPlayer* LocalPlayerOwner; // 0xc8(0x08)
	struct USocialChatManager* SocialChatManager; // 0xd0(0x08)
	char UnknownData_D8[0x118]; // 0xd8(0x118)
};

// Class Party.SocialChatManager
// Size: 0x220 (Inherited: 0x28)
struct USocialChatManager : public UObject {
	char UnknownData_28[0x50]; // 0x28(0x50)
	struct TMap<struct FWeakObjectPtr<struct USocialUser>, struct USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x78(0x50)
	struct TMap<struct FString, struct USocialChatRoom*> ChatRoomsById; // 0xc8(0x50)
	struct TMap<struct FString, struct USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x118(0x50)
	bool bEnableChatSlashCommands; // 0x168(0x01)
	char UnknownData_169[0x7]; // 0x169(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct USocialGroupChannel*> GroupChannels; // 0x170(0x50)
	char UnknownData_1C0[0x60]; // 0x1c0(0x60)
};

// Class Party.SocialChatChannel
// Size: 0xe8 (Inherited: 0x28)
struct USocialChatChannel : public UObject {
	char UnknownData_28[0xc0]; // 0x28(0xc0)
};

// Class Party.SocialChatRoom
// Size: 0xf8 (Inherited: 0xe8)
struct USocialChatRoom : public USocialChatChannel {
	char UnknownData_E8[0x10]; // 0xe8(0x10)
};

// Class Party.SocialDebugTools
// Size: 0x88 (Inherited: 0x28)
struct USocialDebugTools : public UObject {
	char UnknownData_28[0x60]; // 0x28(0x60)
};

// Class Party.SocialGroupChannel
// Size: 0x90 (Inherited: 0x28)
struct USocialGroupChannel : public UObject {
	struct USocialUser* SocialUser; // 0x28(0x08)
	struct FUniqueNetIdRepl GroupId; // 0x30(0x28)
	struct FText DisplayName; // 0x58(0x18)
	struct TArray<struct USocialUser*> Members; // 0x70(0x10)
	char UnknownData_80[0x10]; // 0x80(0x10)
};

// Class Party.SocialPrivateMessageChannel
// Size: 0xf0 (Inherited: 0xe8)
struct USocialPrivateMessageChannel : public USocialChatChannel {
	struct USocialUser* TargetUser; // 0xe8(0x08)
};

// Class Party.SocialSettings
// Size: 0x50 (Inherited: 0x28)
struct USocialSettings : public UObject {
	struct TArray<struct FName> OssNamesWithEnvironmentIdPrefix; // 0x28(0x10)
	int32_t DefaultMaxPartySize; // 0x38(0x04)
	bool bPreferPlatformInvites; // 0x3c(0x01)
	bool bMustSendPrimaryInvites; // 0x3d(0x01)
	bool bLeavePartyOnDisconnect; // 0x3e(0x01)
	char UnknownData_3F[0x1]; // 0x3f(0x01)
	float UserListAutoUpdateRate; // 0x40(0x04)
	int32_t MinNicknameLength; // 0x44(0x04)
	int32_t MaxNicknameLength; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Party.SocialUser
// Size: 0x168 (Inherited: 0x28)
struct USocialUser : public UObject {
	char UnknownData_28[0x140]; // 0x28(0x140)
};

