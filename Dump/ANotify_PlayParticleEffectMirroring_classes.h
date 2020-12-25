// BlueprintGeneratedClass ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C
// Size: 0x74 (Inherited: 0x38)
struct UANotify_PlayParticleEffectMirroring_C : public UAnimNotify {
	struct UParticleSystem* Particle System; // 0x38(0x08)
	struct FVector Location Offset; // 0x40(0x0c)
	struct FRotator Rotation Offset; // 0x4c(0x0c)
	struct FVector Scale; // 0x58(0x0c)
	struct FName Socket Attach; // 0x64(0x08)
	struct FName Socket Attach Mirrored; // 0x6c(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C.Received_Notify
};

