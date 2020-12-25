// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0x470 (Inherited: 0x450)
struct UBP_GameInstance_C : public UKSGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UAkAudioEvent* Begin Loading Music; // 0x458(0x08)
	struct UAkAudioEvent* End Loading Music; // 0x460(0x08)
	struct UAkAudioEvent* Play Music Event; // 0x468(0x08)

	void EndLoading(); // Function BP_GameInstance.BP_GameInstance_C.EndLoading
	void BeginLoading(struct FString mapName); // Function BP_GameInstance.BP_GameInstance_C.BeginLoading
	void ExecuteUbergraph_BP_GameInstance(int32_t EntryPoint); // Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
};

