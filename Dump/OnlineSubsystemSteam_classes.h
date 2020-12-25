// Class OnlineSubsystemSteam.SteamNetConnection
// Size: 0x1ad8 (Inherited: 0x1ad0)
struct USteamNetConnection : public UIpConnection {
	bool bIsPassthrough; // 0x1ad0(0x01)
	char UnknownData_1AD1[0x7]; // 0x1ad1(0x07)
};

// Class OnlineSubsystemSteam.SteamNetDriver
// Size: 0x7c0 (Inherited: 0x7b8)
struct USteamNetDriver : public UIpNetDriver {
	char UnknownData_7B8[0x8]; // 0x7b8(0x08)
};

