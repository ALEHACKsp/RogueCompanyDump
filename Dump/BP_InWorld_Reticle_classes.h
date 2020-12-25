// BlueprintGeneratedClass BP_InWorld_Reticle.BP_InWorld_Reticle_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_InWorld_Reticle_C : public AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Reticle; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UWBP_InWorld_Reticle_C* ReticleWidget; // 0x238(0x08)
	struct UWBP_InWorld_ReticleComponents_C* ReticleComponentWidget; // 0x240(0x08)

	void SetWeaponComponent(struct UKSWeaponComponent* WeaponComponent); // Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetWeaponComponent
	void SetPossession(struct APlayerState* PlayerState); // Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.SetPossession
	void ReceiveBeginPlay(); // Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_InWorld_Reticle(int32_t EntryPoint); // Function BP_InWorld_Reticle.BP_InWorld_Reticle_C.ExecuteUbergraph_BP_InWorld_Reticle
};

