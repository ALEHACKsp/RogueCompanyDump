// BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C
// Size: 0x71 (Inherited: 0x68)
struct UCamMod_JumpLanding_C : public UCamMod_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x08)
	bool WasJumping; // 0x70(0x01)

	void ShouldModifyCamera(bool bSuccess); // Function CamMod_JumpLanding.CamMod_JumpLanding_C.ShouldModifyCamera
	void PlayTimeline(); // Function CamMod_JumpLanding.CamMod_JumpLanding_C.PlayTimeline
	void OnCamModFinished(); // Function CamMod_JumpLanding.CamMod_JumpLanding_C.OnCamModFinished
	void ExecuteUbergraph_CamMod_JumpLanding(int32_t EntryPoint); // Function CamMod_JumpLanding.CamMod_JumpLanding_C.ExecuteUbergraph_CamMod_JumpLanding
};

