// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x280 (Inherited: 0x210)
struct UMockDataMeshTrackerComponent : public USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x208(0x10)
	bool ScanWorld; // 0x218(0x01)
	bool RequestNormals; // 0x219(0x01)
	bool RequestVertexConfidence; // 0x21a(0x01)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x21b(0x01)
	struct TArray<struct FColor> BlockVertexColors; // 0x220(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x230(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x240(0x10)
	float UpdateInterval; // 0x250(0x04)
	struct UMRMeshComponent* MRMesh; // 0x258(0x08)
	char UnknownData_260[0x20]; // 0x260(0x20)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
};

// Class MRMesh.MRMeshComponent
// Size: 0x4b0 (Inherited: 0x430)
struct UMRMeshComponent : public UPrimitiveComponent {
	char UnknownData_430[0x8]; // 0x430(0x08)
	struct UMaterialInterface* Material; // 0x438(0x08)
	bool bCreateMeshProxySections; // 0x440(0x01)
	bool bUpdateNavMeshOnMeshUpdate; // 0x441(0x01)
	bool bNeverCreateCollisionMesh; // 0x442(0x01)
	char UnknownData_443[0x5]; // 0x443(0x05)
	struct UBodySetup* CachedBodySetup; // 0x448(0x08)
	struct TArray<struct UBodySetup*> BodySetups; // 0x450(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x460(0x08)
	char UnknownData_468[0x48]; // 0x468(0x48)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void Clear(); // Function MRMesh.MRMeshComponent.Clear
};

