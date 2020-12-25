// BlueprintGeneratedClass CamMod_Master.CamMod_Master_C
// Size: 0x68 (Inherited: 0x48)
struct UCamMod_Master_C : public UCameraModifier {
	bool bIsActive; // 0x48(0x01)
	char UnknownData_49[0x3]; // 0x49(0x03)
	struct FVector AddViewLocation; // 0x4c(0x0c)
	struct FRotator AddViewRotation; // 0x58(0x0c)
	float AddFOV; // 0x64(0x04)

	void OnCamModFinished(); // Function CamMod_Master.CamMod_Master_C.OnCamModFinished
	void PlayTimeline(); // Function CamMod_Master.CamMod_Master_C.PlayTimeline
	void ShouldModifyCamera(bool bSuccess); // Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
	void UpdateValues(struct FVector InLocation, struct FRotator InRotation, float InFOV); // Function CamMod_Master.CamMod_Master_C.UpdateValues
	void GetKSCharacterData(bool Success, struct AKSCharacter* KSCharacter, struct UKSCharacterMovementComponent* MovementComponent, struct AKSCameraManager_C* Camera Manager); // Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
	void BlueprintModifyCamera(float DeltaTime, struct FVector ViewLocation, struct FRotator ViewRotation, float FOV, struct FVector NewViewLocation, struct FRotator NewViewRotation, float NewFOV); // Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
};

