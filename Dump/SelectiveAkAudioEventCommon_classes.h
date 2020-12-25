// Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_SelectiveAkEvent : public UAnimNotify {
	struct FName AttachName; // 0x38(0x08)
	struct USelectiveAkAudioEvent* Event; // 0x40(0x08)
	bool bFollow; // 0x48(0x01)
	char UnknownData_49[0x7]; // 0x49(0x07)
};

// Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent
// Size: 0x50 (Inherited: 0x28)
struct UViewDependentAkAudioEvent : public USelectiveAkAudioEvent {
	struct UViewDependentAkEventRules* Rules; // 0x28(0x08)
	struct UAkAudioEvent* FirstPersonAkEventPlay; // 0x30(0x08)
	struct UAkAudioEvent* ThirdPersonAkEventPlay; // 0x38(0x08)
	struct UAkAudioEvent* FirstPersonAkEventStop; // 0x40(0x08)
	struct UAkAudioEvent* ThirdPersonAkEventStop; // 0x48(0x08)
};

