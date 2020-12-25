// BlueprintGeneratedClass LobbyAnnouncer.LobbyAnnouncer_C
// Size: 0x498 (Inherited: 0x458)
struct ALobbyAnnouncer_C : public AKSAnnouncer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UAkAudioEvent* Play Music Event; // 0x460(0x08)
	struct UAkAudioEvent* Stop Music Event; // 0x468(0x08)
	struct UAkAudioEvent* Lobby Music Start Event; // 0x470(0x08)
	struct UAkAudioEvent* Lobby Match Found Event; // 0x478(0x08)
	struct UAkAudioEvent* Lobby To Loading Screen Event; // 0x480(0x08)
	struct UAkAudioEvent* Lobby End of Match; // 0x488(0x08)
	struct UKSGameInstance* GameInstance; // 0x490(0x08)

	void OnLoadingScreenEnded(); // Function LobbyAnnouncer.LobbyAnnouncer_C.OnLoadingScreenEnded
	void OnLobbyWidgetReady(); // Function LobbyAnnouncer.LobbyAnnouncer_C.OnLobbyWidgetReady
	void ReceiveBeginPlay(); // Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveBeginPlay
	void OnViewStateChangedStarted(struct FName CurrentRoute, struct FName NextRoute, enum class EViewManagerLayer Layer); // Function LobbyAnnouncer.LobbyAnnouncer_C.OnViewStateChangedStarted
	void ReceiveEndPlay(char EndPlayReason); // Function LobbyAnnouncer.LobbyAnnouncer_C.ReceiveEndPlay
	void EventQueueInGame(); // Function LobbyAnnouncer.LobbyAnnouncer_C.EventQueueInGame
	void ExecuteUbergraph_LobbyAnnouncer(int32_t EntryPoint); // Function LobbyAnnouncer.LobbyAnnouncer_C.ExecuteUbergraph_LobbyAnnouncer
};

