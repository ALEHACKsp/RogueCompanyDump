// Class HeadMountedDisplay.MotionControllerComponent
// Size: 0x4f0 (Inherited: 0x430)
struct UMotionControllerComponent : public UPrimitiveComponent {
	int32_t PlayerIndex; // 0x430(0x04)
	enum class EControllerHand Hand; // 0x434(0x01)
	char UnknownData_435[0x3]; // 0x435(0x03)
	struct FName MotionSource; // 0x438(0x08)
	char bDisableLowLatencyUpdate : 1; // 0x440(0x01)
	char UnknownData_440_1 : 7; // 0x440(0x01)
	char UnknownData_441[0x3]; // 0x441(0x03)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x444(0x01)
	bool bDisplayDeviceModel; // 0x445(0x01)
	char UnknownData_446[0x2]; // 0x446(0x02)
	struct FName DisplayModelSource; // 0x448(0x08)
	struct UStaticMesh* CustomDisplayMesh; // 0x450(0x08)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x458(0x10)
	char UnknownData_468[0x68]; // 0x468(0x68)
	struct UPrimitiveComponent* DisplayComponent; // 0x4d0(0x08)
	char UnknownData_4D8[0x18]; // 0x4d8(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	float GetParameterValue(struct FName InName, bool bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	struct FVector GetHandJointPosition(int32_t jointIndex, bool bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
};

// Class HeadMountedDisplay.VRNotificationsComponent
// Size: 0x140 (Inherited: 0xb0)
struct UVRNotificationsComponent : public UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xe0(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130(0x10)
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size: 0x60 (Inherited: 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	char UnknownData_50[0x8]; // 0x50(0x08)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x08)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId XRDeviceId, struct UPrimitiveComponent* NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform, struct UPrimitiveComponent* NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
};

