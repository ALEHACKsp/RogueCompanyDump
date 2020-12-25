// Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect
// Size: 0xa0 (Inherited: 0x90)
struct UAnimNotify_PlaySkinnedParticleEffect : public UAnimNotify_PlayParticleEffect {
	struct FName SkinKeyword; // 0x90(0x08)
	char UnknownData_98[0x8]; // 0x98(0x08)
};

// Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent
// Size: 0x68 (Inherited: 0x38)
struct UAnimNotify_SkinnedAkEvent : public UAnimNotify {
	struct FName AttachName; // 0x38(0x08)
	struct UAkAudioEvent* Event; // 0x40(0x08)
	bool bFollow; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
	struct FString EventName; // 0x50(0x10)
	struct FName SkinKeyword; // 0x60(0x08)
};

// Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent
// Size: 0x58 (Inherited: 0x50)
struct UAnimNotify_SkinSelectiveAkEvent : public UAnimNotify_SelectiveAkEvent {
	struct FName SkinKeyword; // 0x50(0x08)
};

