// Class Qos.QosBeaconClient
// Size: 0x2e8 (Inherited: 0x2b0)
struct AQosBeaconClient : public AOnlineBeaconClient {
	char UnknownData_2B0[0x38]; // 0x2b0(0x38)

	void ServerQosRequest(struct FString InSessionId); // Function Qos.QosBeaconClient.ServerQosRequest
	void ClientQosResponse(enum class EQosResponseType Response); // Function Qos.QosBeaconClient.ClientQosResponse
};

// Class Qos.QosBeaconHost
// Size: 0x258 (Inherited: 0x248)
struct AQosBeaconHost : public AOnlineBeaconHostObject {
	char UnknownData_248[0x10]; // 0x248(0x10)
};

// Class Qos.QosEvaluator
// Size: 0x80 (Inherited: 0x28)
struct UQosEvaluator : public UObject {
	char UnknownData_28[0x20]; // 0x28(0x20)
	bool bInProgress; // 0x48(0x01)
	bool bCancelOperation; // 0x49(0x01)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FDatacenterQosInstance> Datacenters; // 0x50(0x10)
	char UnknownData_60[0x20]; // 0x60(0x20)
};

// Class Qos.QosRegionManager
// Size: 0xc0 (Inherited: 0x28)
struct UQosRegionManager : public UObject {
	int32_t NumTestsPerRegion; // 0x28(0x04)
	float PingTimeout; // 0x2c(0x04)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x30(0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x40(0x10)
	struct FDateTime LastCheckTimestamp; // 0x50(0x08)
	struct UQosEvaluator* Evaluator; // 0x58(0x08)
	enum class EQosCompletionResult QosEvalResult; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x68(0x10)
	struct FString ForceRegionId; // 0x78(0x10)
	bool bRegionForcedViaCommandline; // 0x88(0x01)
	char UnknownData_89[0x7]; // 0x89(0x07)
	struct FString SelectedRegionId; // 0x90(0x10)
	char UnknownData_A0[0x20]; // 0xa0(0x20)
};

