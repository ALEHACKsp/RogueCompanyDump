// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x340 (Inherited: 0x210)
struct UMagicLeapARPinComponent : public USceneComponent {
	struct FString ObjectUID; // 0x208(0x10)
	int32_t UserIndex; // 0x218(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x21c(0x01)
	bool bShouldPinActor; // 0x21d(0x01)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x220(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x228(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x238(0x10)
	struct FGuid PinnedCFUID; // 0x248(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x258(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x260(0x08)
	char UnknownData_26E[0xd2]; // 0x26e(0xd2)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	bool GetPinState(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	bool GetPinnedPinID(struct FGuid PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : public UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x10)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xa0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : public USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char UnknownData_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

