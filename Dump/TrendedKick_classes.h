// BlueprintGeneratedClass TrendedKick.TrendedKick_C
// Size: 0x3c (Inherited: 0x28)
struct UTrendedKick_C : public UKickbackModule {
	struct TArray<struct FKickTrendProfile> KickTrendProfiles; // 0x28(0x10)
	int32_t TrendRepeatIndex; // 0x38(0x04)

	float GetMaximumHorizontalKick(); // Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
	float GetMaximumVerticalKick(); // Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
	void GetCurrentTrendProfile(int32_t ShotIndex, struct FKickTrendProfile TrendProfile); // Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
	struct FInterpCurveVector2D MakeKickbackInstance(int32_t ShotIndex, float AbsoluteMaxDuration); // Function TrendedKick.TrendedKick_C.MakeKickbackInstance
};

