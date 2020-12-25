// Class PlatformCommon.PComGameEngine
// Size: 0xea0 (Inherited: 0xe68)
struct UPComGameEngine : public UGameEngine {
	char UnknownData_E68[0x10]; // 0xe68(0x10)
	bool bRedirectLogsToConsole; // 0xe78(0x01)
	char UnknownData_E79[0x27]; // 0xe79(0x27)
};

// Class PlatformCommon.PCom_IpConnection
// Size: 0x1ad8 (Inherited: 0x1ad0)
struct UPCom_IpConnection : public UIpConnection {
	char UnknownData_1AD0[0x8]; // 0x1ad0(0x08)
};

// Class PlatformCommon.PCom_SimpleTimecodeProvider
// Size: 0x40 (Inherited: 0x30)
struct UPCom_SimpleTimecodeProvider : public UTimecodeProvider {
	struct FFrameRate FrameRate; // 0x30(0x08)
	char UnknownData_38[0x8]; // 0x38(0x08)

	void SetFrameRate(struct FFrameRate InFrameRate); // Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate
};

