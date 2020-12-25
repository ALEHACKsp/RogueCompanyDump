// BlueprintGeneratedClass ImmunityModInst.ImmunityModInst_C
// Size: 0x198 (Inherited: 0x190)
struct UImmunityModInst_C : public UDamageResistModInst_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x190(0x08)

	void ReceiveBeginPlay(); // Function ImmunityModInst.ImmunityModInst_C.ReceiveBeginPlay
	void ReceiveTick(float DeltaSeconds); // Function ImmunityModInst.ImmunityModInst_C.ReceiveTick
	void ReceiveEndPlay(char EndPlayReason); // Function ImmunityModInst.ImmunityModInst_C.ReceiveEndPlay
	void OnNewCharacter(); // Function ImmunityModInst.ImmunityModInst_C.OnNewCharacter
	void ExecuteUbergraph_ImmunityModInst(int32_t EntryPoint); // Function ImmunityModInst.ImmunityModInst_C.ExecuteUbergraph_ImmunityModInst
};

