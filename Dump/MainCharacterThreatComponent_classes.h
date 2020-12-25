// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// Size: 0x228 (Inherited: 0x198)
struct UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C {
	struct TMap<int32_t, struct FLinearColor> DebugColorMap; // 0x198(0x50)
	bool DebuggingVisuals; // 0x1e8(0x01)
	char UnknownData_1E9[0x3]; // 0x1e9(0x03)
	struct FLinearColor K2Node_MakeStruct_LinearColor; // 0x1ec(0x10)
	float K2Node_Event_DeltaSeconds; // 0x1fc(0x04)
	bool K2Node_Event_Show; // 0x200(0x01)
	char UnknownData_201[0x3]; // 0x201(0x03)
	struct FLinearColor K2Node_MakeStruct_LinearColor_2; // 0x204(0x10)
	struct FLinearColor CallFunc_Map_Find_Value; // 0x214(0x10)
	char UnknownData_224[0x4]; // 0x224(0x04)

	void ReceiveTick(float bpp__DeltaSeconds__pf); // Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick
	void DebugThreatLevels(bool bpp__Show__pf); // Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels
};

