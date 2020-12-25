// BlueprintGeneratedClass TaskBeacon.TaskBeacon_C
// Size: 0x2b0 (Inherited: 0x238)
struct ATaskBeacon_C : public AKSPingBeaconBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x240(0x08)
	struct FLinearColor PingColor; // 0x248(0x10)
	struct FDataTableInfo PingTypesDT ; // 0x258(0x58)

	void UserConstructionScript(); // Function TaskBeacon.TaskBeacon_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function TaskBeacon.TaskBeacon_C.ReceiveBeginPlay
	void ExecuteUbergraph_TaskBeacon(int32_t EntryPoint); // Function TaskBeacon.TaskBeacon_C.ExecuteUbergraph_TaskBeacon
};

