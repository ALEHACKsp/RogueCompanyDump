// WidgetBlueprintGeneratedClass WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct UWBP_VoiceActivityIcon_C : public UKSWidget {
	struct UImage* ActivityIndicator; // 0x4e0(0x08)
	struct UImage* Mic; // 0x4e8(0x08)
	struct UImage* MuteSymbol; // 0x4f0(0x08)

	void SetState(bool IsTalking, bool IsMuted); // Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.SetState
};

