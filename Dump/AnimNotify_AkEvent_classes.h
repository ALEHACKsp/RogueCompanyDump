// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// Size: 0x69 (Inherited: 0x38)
struct UAnimNotify_AkEvent_C : public UAnimNotify {
	struct FString Attach Name; // 0x38(0x10)
	struct UAkAudioEvent* Event; // 0x48(0x08)
	bool Follow; // 0x50(0x01)
	char UnknownData_51[0x7]; // 0x51(0x07)
	struct FString EventName; // 0x58(0x10)
	bool Post to root component; // 0x68(0x01)

	void Hirez Get Ak Component(struct USkeletalMeshComponent* AttachComponent, struct FName AttachPointName, bool bComponentCreated, struct UAkComponent* Return Value); // Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Hirez Get Ak Component
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
};

