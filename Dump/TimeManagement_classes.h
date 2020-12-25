// Class TimeManagement.TimeSynchronizationSource
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynchronizationSource : public UObject {
	bool bUseForSynchronization; // 0x28(0x01)
	char UnknownData_29[0x3]; // 0x29(0x03)
	int32_t FrameOffset; // 0x2c(0x04)
};

// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x30 (Inherited: 0x28)
struct UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep {
	struct FFrameRate FixedFrameRate; // 0x28(0x08)
};

