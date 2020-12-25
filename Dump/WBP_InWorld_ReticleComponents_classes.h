// WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C
// Size: 0x260 (Inherited: 0x238)
struct UWBP_InWorld_ReticleComponents_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x240(0x08)
	struct UWBP_AbilityDurationBar_C* WBP_AbilityDurationBar; // 0x248(0x08)
	struct UWBP_AmmoWrapper_C* WBP_AmmoWrapper; // 0x250(0x08)
	struct UKSModInst_Activated* ModInstance; // 0x258(0x08)

	void SetWeaponComponent(struct UKSWeaponComponent* WeaponComponent); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetWeaponComponent
	void SetPlayerState(struct APlayerState* PlayerState); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetPlayerState
	void SetAmmoColor(bool IsActive); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.SetAmmoColor
	void OnPossession(struct APlayerState* PlayerState); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnPossession
	void OnWeaponSet(struct UKSWeaponComponent* WeaponComponent); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnWeaponSet
	void OnModActivated(bool bActive); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.OnModActivated
	void Construct(); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Construct
	void Destruct(); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.Destruct
	void ExecuteUbergraph_WBP_InWorld_ReticleComponents(int32_t EntryPoint); // Function WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C.ExecuteUbergraph_WBP_InWorld_ReticleComponents
};

