// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// Size: 0x508 (Inherited: 0x4e0)
struct UBrightLobbyHeader_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UNewMenuMain_C* NewMenuMain; // 0x4e8(0x08)
	struct TArray<enum class EPUMG_LoginState> LoggedOutStates; // 0x4f0(0x10)
	struct UPUMG_LoginDataFactory* LoginDataFactory; // 0x500(0x08)

	void InitializeWidget(struct APUMG_HUD* HUD); // Function BrightLobbyHeader.BrightLobbyHeader_C.InitializeWidget
	void StartShowSequence(struct FName FromRoute, struct FName ToRoute); // Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
	void HandleLobbyStartMenuInputAction(); // Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
	void HandleLoginStateChange(enum class EPUMG_LoginState LoginState); // Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLoginStateChange
	void ExecuteUbergraph_BrightLobbyHeader(int32_t EntryPoint); // Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
};

