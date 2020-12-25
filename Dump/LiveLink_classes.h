// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// Size: 0x40 (Inherited: 0x28)
struct ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor {
	bool bInterpolatePropertyValues; // 0x28(0x01)
	char UnknownData_29[0x17]; // 0x29(0x17)
};

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// Size: 0x50 (Inherited: 0x40)
struct ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor {
	char UnknownData_40[0x10]; // 0x40(0x10)
};

// Class LiveLink.LiveLinkAnimationRoleToTransform
// Size: 0x40 (Inherited: 0x28)
struct ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator {
	struct FName BoneName; // 0x28(0x08)
	char UnknownData_30[0x10]; // 0x30(0x10)
};

// Class LiveLink.LiveLinkAnimationVirtualSubject
// Size: 0xe0 (Inherited: 0xd8)
struct ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject {
	char UnknownData_D8[0x1]; // 0xd8(0x01)
	bool bAppendSubjectNameToBones; // 0xd9(0x01)
	char UnknownData_DA[0x6]; // 0xda(0x06)
};

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// Size: 0x40 (Inherited: 0x28)
struct ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor {
	enum class ELiveLinkAxis OrientationAxisX; // 0x28(0x01)
	enum class ELiveLinkAxis OrientationAxisY; // 0x29(0x01)
	enum class ELiveLinkAxis OrientationAxisZ; // 0x2a(0x01)
	enum class ELiveLinkAxis TranslationAxisX; // 0x2b(0x01)
	enum class ELiveLinkAxis TranslationAxisY; // 0x2c(0x01)
	enum class ELiveLinkAxis TranslationAxisZ; // 0x2d(0x01)
	char UnknownData_2E[0x12]; // 0x2e(0x12)
};

// Class LiveLink.LiveLinkComponent
// Size: 0xd0 (Inherited: 0xb0)
struct ULiveLinkComponent : public UActorComponent {
	struct FMulticastInlineDelegate OnLiveLinkUpdated; // 0xb0(0x10)
	char UnknownData_C0[0x10]; // 0xc0(0x10)

	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool bSuccess, struct FSubjectFrameHandle SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode SceneTime, bool bSuccess, struct FSubjectFrameHandle SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectData(struct FName SubjectName, bool bSuccess, struct FSubjectFrameHandle SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectData
	void GetAvailableSubjectNames(struct TArray<struct FName> SubjectNames); // Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
};

// Class LiveLink.LiveLinkDrivenComponent
// Size: 0xc8 (Inherited: 0xb0)
struct ULiveLinkDrivenComponent : public UActorComponent {
	struct FLiveLinkSubjectName SubjectName; // 0xb0(0x08)
	struct FName ActorTransformBone; // 0xb8(0x08)
	bool bModifyActorTransform; // 0xc0(0x01)
	bool bSetRelativeLocation; // 0xc1(0x01)
	char UnknownData_C2[0x6]; // 0xc2(0x06)
};

// Class LiveLink.LiveLinkMessageBusFinder
// Size: 0x80 (Inherited: 0x28)
struct ULiveLinkMessageBusFinder : public UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)

	void GetAvailableProviders(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, struct TArray<struct FProviderPollResult> AvailableProviders); // Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	struct ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	void ConnectToProvider(struct FProviderPollResult Provider, struct FLiveLinkSourceHandle SourceHandle); // Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
};

// Class LiveLink.LiveLinkPreset
// Size: 0x48 (Inherited: 0x28)
struct ULiveLinkPreset : public UObject {
	struct TArray<struct FLiveLinkSourcePreset> Sources; // 0x28(0x10)
	struct TArray<struct FLiveLinkSubjectPreset> Subjects; // 0x38(0x10)

	void BuildFromClient(); // Function LiveLink.LiveLinkPreset.BuildFromClient
	bool ApplyToClient(); // Function LiveLink.LiveLinkPreset.ApplyToClient
};

// Class LiveLink.LiveLinkRemapAsset
// Size: 0xc8 (Inherited: 0x28)
struct ULiveLinkRemapAsset : public ULiveLinkRetargetAsset {
	char UnknownData_28[0xa0]; // 0x28(0xa0)

	void RemapCurveElements(struct TMap<struct FName, float> CurveItems); // Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	struct FName GetRemappedCurveName(struct FName CurveName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	struct FName GetRemappedBoneName(struct FName BoneName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
};

// Class LiveLink.LiveLinkSettings
// Size: 0xd0 (Inherited: 0x28)
struct ULiveLinkSettings : public UObject {
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x38(0x08)
	struct TSoftObjectPtr<struct ULiveLinkPreset> DefaultLiveLinkPreset; // 0x40(0x28)
	struct FDirectoryPath PresetSaveDir; // 0x68(0x10)
	float ClockOffsetCorrectionStep; // 0x78(0x04)
	enum class ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x7c(0x01)
	char UnknownData_7D[0x3]; // 0x7d(0x03)
	double MessageBusPingRequestFrequency; // 0x80(0x08)
	double MessageBusHeartbeatFrequency; // 0x88(0x08)
	double MessageBusHeartbeatTimeout; // 0x90(0x08)
	double MessageBusTimeBeforeRemovingInactiveSource; // 0x98(0x08)
	double TimeWithoutFrameToBeConsiderAsInvalid; // 0xa0(0x08)
	struct FLinearColor ValidColor; // 0xa8(0x10)
	struct FLinearColor InvalidColor; // 0xb8(0x10)
	char TextSizeSource; // 0xc8(0x01)
	char TextSizeSubject; // 0xc9(0x01)
	char UnknownData_CA[0x6]; // 0xca(0x06)
};

// Class LiveLink.LiveLinkTimecodeProvider
// Size: 0xc0 (Inherited: 0x30)
struct ULiveLinkTimecodeProvider : public UTimecodeProvider {
	struct FLiveLinkSubjectKey SubjectKey; // 0x30(0x18)
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation; // 0x48(0x04)
	bool bOverrideFrameRate; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct FFrameRate OverrideFrameRate; // 0x50(0x08)
	int32_t BufferSize; // 0x58(0x04)
	char UnknownData_5C[0x64]; // 0x5c(0x64)
};

// Class LiveLink.LiveLinkTimeSynchronizationSource
// Size: 0x80 (Inherited: 0x30)
struct ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource {
	struct FLiveLinkSubjectName SubjectName; // 0x30(0x08)
	char UnknownData_38[0x48]; // 0x38(0x48)
};

// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// Size: 0xa0 (Inherited: 0x98)
struct ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings {
	struct FName SourceName; // 0x98(0x08)
};

