// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// Size: 0x19c (Inherited: 0x190)
struct UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)
	int32_t Previous ammo in clip; // 0x198(0x04)

	void MagDropForDodgeReload(struct UKSWeaponComponent* Master Weapon Ref); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
	bool StopAnimationFromEvent(struct FName AnimEventName, struct UKSCharacterAnimInst* CharAnimInstance); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
	bool ReactsToAnimationEvent(struct FName AnimEventName, int32_t Priority); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
	void OnDodgeRoll(float RollDuration); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
	void RemotePlayerAudio(); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
	void Dodge Reload Mod Notified(); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
	void ExecuteUbergraph_ReloadOnDodgeRollModInst(int32_t EntryPoint); // Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
};

