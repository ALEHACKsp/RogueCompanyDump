// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UEasyAntiCheatNetComponent : public UActorComponent {
	char UnknownData_B0[0x8]; // 0xb0(0x08)

	void ServerMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
	void ClientMessage(struct TArray<char> Message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
};

