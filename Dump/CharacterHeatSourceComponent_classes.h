// DynamicClass CharacterHeatSourceComponent.CharacterHeatSourceComponent_C
// Size: 0x160 (Inherited: 0x100)
struct UCharacterHeatSourceComponent_C : public UKSHeatSourceComponent {
	struct UParticleSystem* ThermalVisionExtraParticlesPS; // 0x100(0x08)
	struct UParticleSystemComponent* ThermalVisionExtraParticlesComp; // 0x108(0x08)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate; // 0x110(0x10)
	enum class EModViewModeState K2Node_Event_NewState; // 0x120(0x01)
	bool K2Node_SwitchEnum_CmpSuccess; // 0x121(0x01)
	char K2Node_Event_EndPlayReason; // 0x122(0x01)
	char UnknownData_123[0x5]; // 0x123(0x05)
	struct AKSCharacterBase* K2Node_DynamicCast_AsKSCharacter_Base; // 0x128(0x08)
	bool K2Node_DynamicCast_bSuccess; // 0x130(0x01)
	char UnknownData_131[0x7]; // 0x131(0x07)
	struct UKSHeatSourceComponent* K2Node_CustomEvent_HeatSource; // 0x138(0x08)
	float K2Node_CustomEvent_NewTemperature; // 0x140(0x04)
	char UnknownData_144[0x4]; // 0x144(0x04)
	struct AKSCharacter* K2Node_DynamicCast_AsKSCharacter; // 0x148(0x08)
	bool K2Node_DynamicCast_bSuccess_2; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	int32_t CallFunc_GetParticleSystem_Priority; // 0x154(0x04)
	int32_t CallFunc_GetFloat_Priority; // 0x158(0x04)
	char UnknownData_15C[0x4]; // 0x15c(0x04)

	void ReceiveEndPlay(char bpp__EndPlayReason__pf); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
	void OnThermalVisionStateChanged(enum class EModViewModeState bpp__NewState__pf); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
	void OnTemperatureChanged_Event_1(struct UKSHeatSourceComponent* bpp__HeatSource__pf__const, float bpp__NewTemperature__pf); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
	void OnOwnerInfoUpdateNotify(); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
	void ExecuteUbergraph_CharacterHeatSourceComponent_2(int32_t bpp__EntryPoint__pf); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
	void Apply Temperature(float bpp__AppliedxTemp__pfT); // Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
	void OnTempChanged__DelegateSignature(struct UKSHeatSourceComponent* bpp__HeatSource__pf, float bpp__NewTemperature__pf); // DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
};

