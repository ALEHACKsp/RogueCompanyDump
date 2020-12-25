// Class CableComponent.CableActor
// Size: 0x228 (Inherited: 0x220)
struct ACableActor : public AActor {
	struct UCableComponent* CableComponent; // 0x220(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x4f0 (Inherited: 0x460)
struct UCableComponent : public UMeshComponent {
	bool bUpdateOnlyIfRendered; // 0x458(0x01)
	bool bAttachStart; // 0x459(0x01)
	bool bAttachEnd; // 0x45a(0x01)
	struct FComponentReference AttachEndTo; // 0x460(0x28)
	struct FName AttachEndToSocketName; // 0x488(0x08)
	struct FVector EndLocation; // 0x490(0x0c)
	float CableLength; // 0x49c(0x04)
	int32_t NumSegments; // 0x4a0(0x04)
	float SubstepTime; // 0x4a4(0x04)
	int32_t SolverIterations; // 0x4a8(0x04)
	bool bEnableStiffness; // 0x4ac(0x01)
	bool bEnableCollision; // 0x4ad(0x01)
	float CollisionFriction; // 0x4b0(0x04)
	struct FVector CableForce; // 0x4b4(0x0c)
	float CableGravityScale; // 0x4c0(0x04)
	float CableWidth; // 0x4c4(0x04)
	int32_t NumSides; // 0x4c8(0x04)
	float TileMaterial; // 0x4cc(0x04)
	char UnknownData_4D1[0x1f]; // 0x4d1(0x1f)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor
};

