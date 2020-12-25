// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : public UAnimNotify {
	struct FName NotifyName; // 0x38(0x08)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x08)
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : public UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	char UnknownData_78[0x30]; // 0x78(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, int32_t CreatedInstanceID, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
};

