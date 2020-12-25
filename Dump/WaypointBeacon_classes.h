// BlueprintGeneratedClass WaypointBeacon.WaypointBeacon_C
// Size: 0x248 (Inherited: 0x238)
struct AWaypointBeacon_C : public AKSPingBeaconBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x240(0x08)

	void UserConstructionScript(); // Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay
	void SetupBeaconDisplay(); // Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay
	void ExecuteUbergraph_WaypointBeacon(int32_t EntryPoint); // Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon
};

