// DynamicClass FootstepNotify.FootstepNotify_C
// Size: 0x48 (Inherited: 0x38)
struct UFootstepNotify_C : public UAnimNotify {
	enum class StepType StepType; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FName BoneName; // 0x3c(0x08)
	char UnknownData_44[0x4]; // 0x44(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* bpp__MeshComp__pf, struct UAnimSequenceBase* bpp__Animation__pf); // Function FootstepNotify.FootstepNotify_C.Received_Notify
	void GetSFXMaterial(struct UAnimInstance* bpp__AnimInstance__pf, struct FName bpp__BonexName__pfT, struct FName bpp__MaterialxReturn__pfT, struct AActor* bpp__ActorxReturn__pfT); // Function FootstepNotify.FootstepNotify_C.GetSFXMaterial
};

