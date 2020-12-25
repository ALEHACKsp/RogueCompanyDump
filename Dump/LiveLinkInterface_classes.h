// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size: 0xd8 (Inherited: 0x28)
struct ULiveLinkVirtualSubject : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
	struct ULiveLinkRole* Role; // 0x30(0x08)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x38(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; // 0x48(0x10)
	char UnknownData_58[0x80]; // 0x58(0x80)
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size: 0x98 (Inherited: 0x28)
struct ULiveLinkSourceSettings : public UObject {
	enum class ELiveLinkSourceMode Mode; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30(0x50)
	struct FString ConnectionString; // 0x80(0x10)
	struct ULiveLinkSourceFactory* Factory; // 0x90(0x08)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size: 0xe8 (Inherited: 0x98)
struct ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; // 0x98(0x50)
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size: 0x58 (Inherited: 0x28)
struct ULiveLinkSubjectSettings : public UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38(0x08)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; // 0x40(0x10)
	struct ULiveLinkRole* Role; // 0x50(0x08)
};

