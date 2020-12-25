// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size: 0x3d8 (Inherited: 0x308)
struct AMagicLeapSharedWorldGameMode : public AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318(0x10)
	float PinSelectionConfidenceThreshold; // 0x328(0x04)
	char UnknownData_32C[0xa4]; // 0x32c(0xa4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0(0x08)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size: 0x2d0 (Inherited: 0x290)
struct AMagicLeapSharedWorldGameState : public AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size: 0x5a0 (Inherited: 0x588)
struct AMagicLeapSharedWorldPlayerController : public APlayerController {
	char UnknownData_588[0x18]; // 0x588(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
};

