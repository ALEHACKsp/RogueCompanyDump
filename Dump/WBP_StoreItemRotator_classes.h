// WidgetBlueprintGeneratedClass WBP_StoreItemRotator.WBP_StoreItemRotator_C
// Size: 0x51c (Inherited: 0x4e0)
struct UWBP_StoreItemRotator_C : public UKSWidget {
	struct UTextBlock* ActiveTick; // 0x4e0(0x08)
	struct UProgressBar* Progress; // 0x4e8(0x08)
	struct UHorizontalBox* RotatorTickBox; // 0x4f0(0x08)
	struct UWBP_StoreRotatorTick_C* TickExample1; // 0x4f8(0x08)
	struct UWBP_StoreRotatorTick_C* TickExample2; // 0x500(0x08)
	struct TArray<struct UWBP_StoreRotatorTick_C*> RotatorObjects; // 0x508(0x10)
	int32_t NumTicks; // 0x518(0x04)

	void SetPercentTimeRemaining(float PercentRemaining); // Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetPercentTimeRemaining
	void SetRotatorSize(int32_t NumElements); // Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetRotatorSize
	void SetActiveIndex(int32_t Index); // Function WBP_StoreItemRotator.WBP_StoreItemRotator_C.SetActiveIndex
};

