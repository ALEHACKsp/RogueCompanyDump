// Enum Lobby.ELobbyBeaconJoinState
enum class ELobbyBeaconJoinState : uint8_t {
	None,
	SentJoinRequest,
	JoinRequestAcknowledged,
	ELobbyBeaconJoinState_MAX,
};

// ScriptStruct Lobby.LobbyPlayerStateInfoArray
// Size: 0x120 (Inherited: 0x108)
struct FLobbyPlayerStateInfoArray : public FFastArraySerializer {
	struct TArray<struct FLobbyPlayerStateActorInfo> Players; // 0x108(0x10)
	struct ALobbyBeaconState* ParentState; // 0x118(0x08)
};

// ScriptStruct Lobby.LobbyPlayerStateActorInfo
// Size: 0x18 (Inherited: 0x0c)
struct FLobbyPlayerStateActorInfo : public FFastArraySerializerItem {
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10(0x08)
};

