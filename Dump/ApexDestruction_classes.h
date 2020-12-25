// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : public AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x220(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x750 (Inherited: 0x670)
struct UDestructibleComponent : public USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x670(0x01)
	char UnknownData_670_1 : 7; // 0x670(0x01)
	char UnknownData_671[0x7]; // 0x671(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x678(0x10)
	bool bEnableHardSleeping; // 0x688(0x01)
	char UnknownData_689[0x3]; // 0x689(0x03)
	float LargeChunkThreshold; // 0x68c(0x04)
	char UnknownData_690[0x10]; // 0x690(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x6a0(0x10)
	char UnknownData_6B0[0xa0]; // 0x6b0(0xa0)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage
	void ApplyDamage(float DamageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : public UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char UnknownData_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char UnknownData_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x428 (Inherited: 0x388)
struct UDestructibleMesh : public USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x388(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x410(0x10)
	char UnknownData_420[0x8]; // 0x420(0x08)
};

