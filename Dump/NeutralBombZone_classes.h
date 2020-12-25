// BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C
// Size: 0x488 (Inherited: 0x468)
struct ANeutralBombZone_C : public AKSNeutralBombZone {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UBoxComponent* Z Axis; // 0x470(0x08)
	struct UMaterialInstanceDynamic* ZoneMaterial; // 0x478(0x08)
	struct AKSCharacterBase* BombHolderWhenArming; // 0x480(0x08)

	void ReceiveBeginPlay(); // Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
	void UpdateZoneMaterial(); // Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
	void RoundSetup(struct FRoundInitState RoundInitState); // Function NeutralBombZone.NeutralBombZone_C.RoundSetup
	void TeamUpdated(); // Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
	void Activated(bool bActive); // Function NeutralBombZone.NeutralBombZone_C.Activated
	void BombStateChanged(struct FKSNeutralBombState BombState); // Function NeutralBombZone.NeutralBombZone_C.BombStateChanged
	void ExecuteUbergraph_NeutralBombZone(int32_t EntryPoint); // Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
};

