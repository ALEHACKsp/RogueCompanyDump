// DynamicClass PlayerHealthMeter.PlayerHealthMeter_C
// Size: 0x318 (Inherited: 0x238)
struct UPlayerHealthMeter_C : public UKSPlayerHealthMeterBase {
	struct UWidgetAnimation* Pulseborder; // 0x238(0x08)
	struct UWidgetAnimation* DisableImmune; // 0x240(0x08)
	struct UWidgetAnimation* EnableImmune; // 0x248(0x08)
	struct UImage* BorderShimmer; // 0x250(0x08)
	struct UOverlay* ImmuneOverlay; // 0x258(0x08)
	struct UImage* OutlineBorder; // 0x260(0x08)
	struct UHorizontalBox* SegmentContainer; // 0x268(0x08)
	int32_t HealthSegmentWidth; // 0x270(0x04)
	bool ShouldUseDots; // 0x274(0x01)
	char UnknownData_275[0x3]; // 0x275(0x03)
	struct FPlayerHealthMeterState CurrentHealthMeterState; // 0x278(0x18)
	float SegmentPadding; // 0x290(0x04)
	struct FLinearColor ImmuneBorderColor; // 0x294(0x10)
	struct FLinearColor StandardBorderColor; // 0x2a4(0x10)
	bool bIsImmune; // 0x2b4(0x01)
	char UnknownData_2B5[0x3]; // 0x2b5(0x03)
	int32_t Temp_int_Array_Index_Variable; // 0x2b8(0x04)
	int32_t Temp_int_Loop_Counter_Variable; // 0x2bc(0x04)
	struct UImage* K2Node_CustomEvent_OutlineBorder_2; // 0x2c0(0x08)
	struct UImage* K2Node_CustomEvent_OutlineBorder; // 0x2c8(0x08)
	bool K2Node_Event_IsDesignTime; // 0x2d0(0x01)
	char UnknownData_2D1[0x3]; // 0x2d1(0x03)
	struct FPlayerHealthMeterState K2Node_Event_HealthMeterState; // 0x2d4(0x18)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct UWidget*> CallFunc_GetAllChildren_ReturnValue; // 0x2f0(0x10)
	struct FMargin K2Node_MakeStruct_Margin; // 0x300(0x10)
	struct UWidget* CallFunc_Array_Get_Item; // 0x310(0x08)

	void SetImmune(bool bpp__bEnabled__pf, bool bpp__bImmediate__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.SetImmune
	void SetHealthMeterState(struct FPlayerHealthMeterState bpp__HealthMeterState__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.SetHealthMeterState
	void SequenceEvent__ENTRYPOINTPlayerHealthMeter_2(struct UImage* bpp__OutlineBorder__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_2
	void SequenceEvent__ENTRYPOINTPlayerHealthMeter_1(struct UImage* bpp__OutlineBorder__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.SequenceEvent__ENTRYPOINTPlayerHealthMeter_1
	void PreConstruct(bool bpp__IsDesignTime__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.PreConstruct
	void PlayDamagePulse(); // Function PlayerHealthMeter.PlayerHealthMeter_C.PlayDamagePulse
	void OnEnableImmuneParams(struct UImage* bpp__OutlineBorder__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.OnEnableImmuneParams
	void OnDisableImmuneParams(struct UImage* bpp__OutlineBorder__pf); // Function PlayerHealthMeter.PlayerHealthMeter_C.OnDisableImmuneParams
	void Construct(); // Function PlayerHealthMeter.PlayerHealthMeter_C.Construct
	void Apply State To Segments(); // Function PlayerHealthMeter.PlayerHealthMeter_C.Apply State To Segments
	void Add Segments If Needed(); // Function PlayerHealthMeter.PlayerHealthMeter_C.Add Segments If Needed
};

