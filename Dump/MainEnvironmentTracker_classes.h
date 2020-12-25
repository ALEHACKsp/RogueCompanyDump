// DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C
// Size: 0x178 (Inherited: 0x138)
struct UMainEnvironmentTracker_C : public UEnvironmentTrackerComponent {
	struct TArray<struct FName> Environment Priorties; // 0x138(0x10)
	struct FName Temp_name_Variable; // 0x148(0x08)
	bool K2Node_SwitchName_CmpSuccess; // 0x150(0x01)
	char UnknownData_151[0x3]; // 0x151(0x03)
	struct FName Temp_name_Variable_2; // 0x154(0x08)
	struct FName Temp_name_Variable_3; // 0x15c(0x08)
	struct FName Temp_name_Variable_4; // 0x164(0x08)
	struct FName K2Node_Event_OldEnvironment; // 0x16c(0x08)
	char UnknownData_174[0x4]; // 0x174(0x04)

	void BlueprintEnvironmentChanged(struct FName bpp__OldEnvironment__pf); // Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged
};

