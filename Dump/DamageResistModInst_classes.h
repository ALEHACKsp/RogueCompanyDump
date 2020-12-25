// BlueprintGeneratedClass DamageResistModInst.DamageResistModInst_C
// Size: 0x190 (Inherited: 0x188)
struct UDamageResistModInst_C : public UKSPlayerModInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x188(0x08)

	void OnNewCharacter(); // Function DamageResistModInst.DamageResistModInst_C.OnNewCharacter
	void DamageTaken(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function DamageResistModInst.DamageResistModInst_C.DamageTaken
	void ExecuteUbergraph_DamageResistModInst(int32_t EntryPoint); // Function DamageResistModInst.DamageResistModInst_C.ExecuteUbergraph_DamageResistModInst
};

