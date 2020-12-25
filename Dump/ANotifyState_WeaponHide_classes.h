// BlueprintGeneratedClass ANotifyState_WeaponHide.ANotifyState_WeaponHide_C
// Size: 0x37 (Inherited: 0x30)
struct UANotifyState_WeaponHide_C : public UAnimNotifyState {
	bool Is DodgeRollReload Montage; // 0x30(0x01)
	bool Reverse; // 0x31(0x01)
	bool Only Hide; // 0x32(0x01)
	bool Only Unhide; // 0x33(0x01)
	bool For Emote; // 0x34(0x01)
	bool Hide Left Prop Only; // 0x35(0x01)
	bool Hide Right Prop Only; // 0x36(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function ANotifyState_WeaponHide.ANotifyState_WeaponHide_C.Received_NotifyEnd
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function ANotifyState_WeaponHide.ANotifyState_WeaponHide_C.Received_NotifyBegin
};

