// BlueprintGeneratedClass DroppedMagazine.DroppedMagazine_C
// Size: 0x240 (Inherited: 0x220)
struct ADroppedMagazine_C : public AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x230(0x08)
	struct UBoxComponent* Collision; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
	void SetMesh(struct USkeletalMesh* NewSkelMesh, struct UStaticMesh* NewStaticMesh); // Function DroppedMagazine.DroppedMagazine_C.SetMesh
	void SetVelocity(struct FVector Velocity); // Function DroppedMagazine.DroppedMagazine_C.SetVelocity
	void ExecuteUbergraph_DroppedMagazine(int32_t EntryPoint); // Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
};

