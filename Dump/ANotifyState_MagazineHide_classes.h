// BlueprintGeneratedClass ANotifyState_MagazineHide.ANotifyState_MagazineHide_C
// Size: 0x34 (Inherited: 0x30)
struct UANotifyState_MagazineHide_C : public UAnimNotifyState {
	bool Is DodgeRollReload Montage; // 0x30(0x01)
	bool Reverse; // 0x31(0x01)
	bool Only Unhide; // 0x32(0x01)
	bool Only Hide; // 0x33(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function ANotifyState_MagazineHide.ANotifyState_MagazineHide_C.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function ANotifyState_MagazineHide.ANotifyState_MagazineHide_C.Received_NotifyBegin
};

