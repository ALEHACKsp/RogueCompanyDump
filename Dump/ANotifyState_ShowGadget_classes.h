// BlueprintGeneratedClass ANotifyState_ShowGadget.ANotifyState_ShowGadget_C
// Size: 0x32 (Inherited: 0x30)
struct UANotifyState_ShowGadget_C : public UAnimNotifyState {
	bool bReverse; // 0x30(0x01)
	bool bKeepGadgetUnhidden; // 0x31(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyBegin
};

