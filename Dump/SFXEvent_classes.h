// BlueprintGeneratedClass SFXEvent.SFXEvent_C
// Size: 0x41 (Inherited: 0x38)
struct USFXEvent_C : public UAnimNotify {
	struct UAkAudioEvent* AkEvent; // 0x38(0x08)
	bool bStopWhenAttachedToDestroyed; // 0x40(0x01)

	struct FString GetNotifyName(); // Function SFXEvent.SFXEvent_C.GetNotifyName
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function SFXEvent.SFXEvent_C.Received_Notify
};

