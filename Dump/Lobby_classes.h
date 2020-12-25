// Class Lobby.LobbyBeaconClient
// Size: 0x338 (Inherited: 0x2b0)
struct ALobbyBeaconClient : public AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x2b0(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x2b8(0x08)
	char UnknownData_2C0[0x1]; // 0x2c0(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x2c1(0x01)
	char UnknownData_2C2[0x76]; // 0x2c2(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer
};

// Class Lobby.LobbyBeaconHost
// Size: 0x280 (Inherited: 0x248)
struct ALobbyBeaconHost : public AOnlineBeaconHostObject {
	char UnknownData_248[0x8]; // 0x248(0x08)
	SoftClassProperty LobbyStateClass; // 0x250(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x278(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x2e0 (Inherited: 0x220)
struct ALobbyBeaconPlayerState : public AInfo {
	struct FText DisplayName; // 0x220(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x238(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x260(0x28)
	bool bInLobby; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x290(0x08)
	char UnknownData_298[0x48]; // 0x298(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby
};

// Class Lobby.LobbyBeaconState
// Size: 0x3c8 (Inherited: 0x220)
struct ALobbyBeaconState : public AInfo {
	int32_t MaxPlayers; // 0x220(0x04)
	char UnknownData_224[0x4]; // 0x224(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x228(0x08)
	char UnknownData_230[0x8]; // 0x230(0x08)
	bool bLobbyStarted; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	float WaitForPlayersTimeRemaining; // 0x23c(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x240(0x120)
	char UnknownData_360[0x68]; // 0x360(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted
};

