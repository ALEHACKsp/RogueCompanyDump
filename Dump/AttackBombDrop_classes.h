// BlueprintGeneratedClass AttackBombDrop.AttackBombDrop_C
// Size: 0x962 (Inherited: 0x938)
struct AAttackBombDrop_C : public AKSAttackBombDrop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x938(0x08)
	struct UCapsuleComponent* BuildBlocker; // 0x940(0x08)
	struct UDistance_OcclusionKSAkComponent_C* DistanceKSAkComponent; // 0x948(0x08)
	struct UParticleSystem* ExplosionParticleSystem; // 0x950(0x08)
	struct UAkAudioEvent* ExplosionSoundEvent; // 0x958(0x08)
	bool IsBombArmed; // 0x960(0x01)
	bool IsBombActive; // 0x961(0x01)

	void BombBeepStopSFX(); // Function AttackBombDrop.AttackBombDrop_C.BombBeepStopSFX
	void ReceiveBeginPlay(); // Function AttackBombDrop.AttackBombDrop_C.ReceiveBeginPlay
	void ExplodeCosmetic(); // Function AttackBombDrop.AttackBombDrop_C.ExplodeCosmetic
	void OnBombStateChanged(struct FKSNeutralBombState BombState); // Function AttackBombDrop.AttackBombDrop_C.OnBombStateChanged
	void ReceiveTick(float DeltaSeconds); // Function AttackBombDrop.AttackBombDrop_C.ReceiveTick
	void ReceiveDestroyed(); // Function AttackBombDrop.AttackBombDrop_C.ReceiveDestroyed
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function AttackBombDrop.AttackBombDrop_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void BombBeepPlaySFX(); // Function AttackBombDrop.AttackBombDrop_C.BombBeepPlaySFX
	void PlayDestroyedEffects(); // Function AttackBombDrop.AttackBombDrop_C.PlayDestroyedEffects
	void ExecuteUbergraph_AttackBombDrop(int32_t EntryPoint); // Function AttackBombDrop.AttackBombDrop_C.ExecuteUbergraph_AttackBombDrop
};

