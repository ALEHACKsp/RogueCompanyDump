// BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C
// Size: 0x128 (Inherited: 0xc8)
struct UDefaultEnvironmentListener_C : public UEnvironmentListenerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct FName LevelStateGroup; // 0xd0(0x08)
	struct TMap<struct FString, struct FName> LevelToStateGroupMap; // 0xd8(0x50)

	void OnEnvironmentChanged(struct FName OldEnvironmentTag); // Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
	void Print State(bool Print to Screen, bool Print to Log, struct FLinearColor Text Color, float Duration); // Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
	void ReceiveBeginPlay(); // Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
	void ExecuteUbergraph_DefaultEnvironmentListener(int32_t EntryPoint); // Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
};

