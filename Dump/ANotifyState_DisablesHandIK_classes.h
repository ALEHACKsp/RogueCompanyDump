// BlueprintGeneratedClass ANotifyState_DisablesHandIK.ANotifyState_DisablesHandIK_C
// Size: 0x32 (Inherited: 0x30)
struct UANotifyState_DisablesHandIK_C : public UAnimNotifyState {
	bool LeftHand Disable; // 0x30(0x01)
	bool RightHand Disable; // 0x31(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function ANotifyState_DisablesHandIK.ANotifyState_DisablesHandIK_C.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function ANotifyState_DisablesHandIK.ANotifyState_DisablesHandIK_C.Received_NotifyBegin
};

