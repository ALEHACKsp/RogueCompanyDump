// BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C
// Size: 0x74 (Inherited: 0x68)
struct UCamMod_Mantle_C : public UCamMod_Master_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x08)
	int32_t MantleIndex; // 0x70(0x04)

	void ShouldModifyCamera(bool bSuccess); // Function CamMod_Mantle.CamMod_Mantle_C.ShouldModifyCamera
	void PlayTimeline(); // Function CamMod_Mantle.CamMod_Mantle_C.PlayTimeline
	void ExecuteUbergraph_CamMod_Mantle(int32_t EntryPoint); // Function CamMod_Mantle.CamMod_Mantle_C.ExecuteUbergraph_CamMod_Mantle
};

