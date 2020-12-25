// BlueprintGeneratedClass HandCrawlingNotify.HandCrawlingNotify_C
// Size: 0x44 (Inherited: 0x38)
struct UHandCrawlingNotify_C : public UAnimNotify {
	char StepType; // 0x38(0x01)
	char UnknownData_39[0x3]; // 0x39(0x03)
	struct FName BoneName; // 0x3c(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function HandCrawlingNotify.HandCrawlingNotify_C.Received_Notify
	struct FString GetNotifyName(); // Function HandCrawlingNotify.HandCrawlingNotify_C.GetNotifyName
};

