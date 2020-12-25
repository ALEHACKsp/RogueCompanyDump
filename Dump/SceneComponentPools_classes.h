// Class SceneComponentPools.BasePoolComponent
// Size: 0xd0 (Inherited: 0xb0)
struct UBasePoolComponent : public UActorComponent {
	int32_t MaxPoolSize; // 0xb0(0x04)
	int32_t StartingPoolSize; // 0xb4(0x04)
	struct FString ComponentClassName; // 0xb8(0x10)
	enum class EPoolOverflowHandling OverflowType; // 0xc8(0x01)
	char UnknownData_C9[0x7]; // 0xc9(0x07)
};

// Class SceneComponentPools.DecalPoolComponent
// Size: 0x148 (Inherited: 0xd0)
struct UDecalPoolComponent : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct UPoolableDecalComponent* PooledDecalComponentClass; // 0xd8(0x08)
	struct TArray<struct UPoolableDecalComponent*> UnusedComponentsArray; // 0xe0(0x10)
	struct TSet<struct UPoolableDecalComponent*> UsedComponentsSet; // 0xf0(0x50)
	struct UPoolableDecalComponent* PeekedDecalComponent; // 0x140(0x08)
};

// Class SceneComponentPools.ParticleSystemPoolComponentBase
// Size: 0x150 (Inherited: 0xd0)
struct UParticleSystemPoolComponentBase : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct UParticleSystemComponent* PooledParticleSystemComponentClass; // 0xd8(0x08)
	struct TArray<struct UParticleSystemComponent*> UnusedComponentsArray; // 0xe0(0x10)
	struct TSet<struct UParticleSystemComponent*> UsedComponentsSet; // 0xf0(0x50)
	struct UParticleSystemComponent* PeekedParticleSystemComponent; // 0x140(0x08)
	bool bClearTemplateWhenReturnedToPool; // 0x148(0x01)
	char UnknownData_149[0x7]; // 0x149(0x07)

	void OnPSCFinished(struct UParticleSystemComponent* InPSC); // Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
};

// Class SceneComponentPools.PoolableDecalComponent
// Size: 0x280 (Inherited: 0x250)
struct UPoolableDecalComponent : public UDecalComponent {
	char UnknownData_250[0x10]; // 0x250(0x10)
	struct FMulticastInlineDelegate OnDecalReturnedToPoolDelegate; // 0x260(0x10)
	bool bInUse; // 0x270(0x01)
	char UnknownData_271[0xf]; // 0x271(0x0f)

	void ForceReturnToPool(); // Function SceneComponentPools.PoolableDecalComponent.ForceReturnToPool
};

// Class SceneComponentPools.SkeletalMeshPoolComponent
// Size: 0x148 (Inherited: 0xd0)
struct USkeletalMeshPoolComponent : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct USkeletalMeshComponent*> UnusedComponentsArray; // 0xd8(0x10)
	struct TSet<struct USkeletalMeshComponent*> UsedComponentsSet; // 0xe8(0x50)
	struct USkeletalMeshComponent* PeekedSkeletalMeshComponent; // 0x138(0x08)
	struct USkeletalMeshComponent* PooledSkeletalMeshComponentClass; // 0x140(0x08)
};

// Class SceneComponentPools.StaticMeshPoolComponent
// Size: 0x148 (Inherited: 0xd0)
struct UStaticMeshPoolComponent : public UBasePoolComponent {
	char UnknownData_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct UStaticMeshComponent*> UnusedComponentsArray; // 0xd8(0x10)
	struct TSet<struct UStaticMeshComponent*> UsedComponentsSet; // 0xe8(0x50)
	struct UStaticMeshComponent* PeekedStaticMeshComponent; // 0x138(0x08)
	struct UStaticMeshComponent* PooledStaticMeshComponentClass; // 0x140(0x08)
};

