// Class DatasmithContent.DatasmithObjectTemplate
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithObjectTemplate : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithActorTemplate
// Size: 0xd0 (Inherited: 0x30)
struct UDatasmithActorTemplate : public UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; // 0x30(0x50)
	struct TSet<struct FName> Tags; // 0x80(0x50)
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size: 0x278 (Inherited: 0x220)
struct ADatasmithAreaLightActor : public AActor {
	enum class EDatasmithAreaLightActorType LightType; // 0x220(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x221(0x01)
	char UnknownData_222[0x2]; // 0x222(0x02)
	struct FVector2D Dimensions; // 0x224(0x08)
	float Intensity; // 0x22c(0x04)
	enum class ELightUnits IntensityUnits; // 0x230(0x01)
	char UnknownData_231[0x3]; // 0x231(0x03)
	struct FLinearColor Color; // 0x234(0x10)
	float Temperature; // 0x244(0x04)
	struct UTextureLightProfile* IESTexture; // 0x248(0x08)
	bool bUseIESBrightness; // 0x250(0x01)
	char UnknownData_251[0x3]; // 0x251(0x03)
	float IESBrightnessScale; // 0x254(0x04)
	struct FRotator Rotation; // 0x258(0x0c)
	float SourceRadius; // 0x264(0x04)
	float SourceLength; // 0x268(0x04)
	float AttenuationRadius; // 0x26c(0x04)
	float SpotlightInnerAngle; // 0x270(0x04)
	float SpotlightOuterAngle; // 0x274(0x04)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size: 0xa0 (Inherited: 0x30)
struct UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x30(0x01)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x31(0x01)
	char UnknownData_32[0x2]; // 0x32(0x02)
	struct FVector2D Dimensions; // 0x34(0x08)
	struct FLinearColor Color; // 0x3c(0x10)
	float Intensity; // 0x4c(0x04)
	enum class ELightUnits IntensityUnits; // 0x50(0x01)
	char UnknownData_51[0x3]; // 0x51(0x03)
	float Temperature; // 0x54(0x04)
	struct TSoftObjectPtr<struct UTextureLightProfile> IESTexture; // 0x58(0x28)
	bool bUseIESBrightness; // 0x80(0x01)
	char UnknownData_81[0x3]; // 0x81(0x03)
	float IESBrightnessScale; // 0x84(0x04)
	struct FRotator Rotation; // 0x88(0x0c)
	float SourceRadius; // 0x94(0x04)
	float SourceLength; // 0x98(0x04)
	float AttenuationRadius; // 0x9c(0x04)
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size: 0x70 (Inherited: 0x28)
struct UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData {
	struct FString Generator; // 0x28(0x10)
	float Version; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
	struct FString Author; // 0x40(0x10)
	struct FString License; // 0x50(0x10)
	struct FString Source; // 0x60(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size: 0x48 (Inherited: 0x28)
struct UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28(0x01)
	char UnknownData_29[0x7]; // 0x29(0x07)
	struct FString TexturesDir; // 0x30(0x10)
	char IntermediateSerialization; // 0x40(0x01)
	bool bColorizeMaterials; // 0x41(0x01)
	char UnknownData_42[0x6]; // 0x42(0x06)
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size: 0x90 (Inherited: 0x48)
struct UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bRemoveInvisibleNodes; // 0x4a(0x01)
	bool bSimplifyNodeHierarchy; // 0x4b(0x01)
	bool bImportVar; // 0x4c(0x01)
	char UnknownData_4D[0x3]; // 0x4d(0x03)
	struct FString VarPath; // 0x50(0x10)
	bool bImportPos; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct FString PosPath; // 0x68(0x10)
	bool bImportTml; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct FString TmlPath; // 0x80(0x10)
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size: 0xa8 (Inherited: 0x48)
struct UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x01)
	bool bOptimizeDuplicatedNodes; // 0x49(0x01)
	bool bImportMats; // 0x4a(0x01)
	char UnknownData_4B[0x5]; // 0x4b(0x05)
	struct FString MatsPath; // 0x50(0x10)
	bool bImportVar; // 0x60(0x01)
	bool bCleanVar; // 0x61(0x01)
	char UnknownData_62[0x6]; // 0x62(0x06)
	struct FString VarPath; // 0x68(0x10)
	bool bImportLightInfo; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct FString LightInfoPath; // 0x80(0x10)
	bool bImportClipInfo; // 0x90(0x01)
	char UnknownData_91[0x7]; // 0x91(0x07)
	struct FString ClipInfoPath; // 0x98(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithAssetUserData : public UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; // 0x28(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size: 0x60 (Inherited: 0x30)
struct UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30(0x30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size: 0x90 (Inherited: 0x30)
struct UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30(0x08)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38(0x04)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c(0x08)
	float CurrentFocalLength; // 0x44(0x04)
	float CurrentAperture; // 0x48(0x04)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50(0x40)
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithCustomActionBase : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size: 0x230 (Inherited: 0x220)
struct ADatasmithImportedSequencesActor : public AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x220(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size: 0x38 (Inherited: 0x28)
struct UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions Options; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size: 0x78 (Inherited: 0x28)
struct UDatasmithImportOptions : public UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28(0x01)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29(0x01)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a(0x01)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b(0x01)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2c(0x01)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d(0x01)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e(0x01)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2f(0x01)
	char UnknownData_30[0x4]; // 0x30(0x04)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x34(0x14)
	struct FDatasmithReimportOptions ReimportOptions; // 0x48(0x02)
	char UnknownData_4A[0x6]; // 0x4a(0x06)
	struct FString Filename; // 0x50(0x10)
	struct FString FilePath; // 0x60(0x10)
	char UnknownData_70[0x8]; // 0x70(0x08)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; // 0x30(0x08)
	int32_t StaticLightingLOD; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size: 0x68 (Inherited: 0x30)
struct UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate {
	char bVisible : 1; // 0x30(0x01)
	char UnknownData_30_1 : 7; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	char CastShadows : 1; // 0x34(0x01)
	char bUseTemperature : 1; // 0x34(0x01)
	char bUseIESBrightness : 1; // 0x34(0x01)
	char UnknownData_34_3 : 5; // 0x34(0x01)
	char UnknownData_35[0x3]; // 0x35(0x03)
	float Intensity; // 0x38(0x04)
	float Temperature; // 0x3c(0x04)
	float IESBrightnessScale; // 0x40(0x04)
	struct FLinearColor LightColor; // 0x44(0x10)
	char UnknownData_54[0x4]; // 0x54(0x04)
	struct UMaterialInterface* LightFunctionMaterial; // 0x58(0x08)
	struct UTextureLightProfile* IESTexture; // 0x60(0x08)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size: 0x198 (Inherited: 0x30)
struct UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {
	struct TSoftObjectPtr<struct UMaterialInterface> ParentMaterial; // 0x30(0x28)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x58(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xa8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture>> TextureParameterValues; // 0xf8(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	float SourceRadius; // 0x34(0x04)
	float SourceLength; // 0x38(0x04)
	float AttenuationRadius; // 0x3c(0x04)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size: 0x80 (Inherited: 0x30)
struct UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate {
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x30(0x40)
	char bEnabled : 1; // 0x70(0x01)
	char bUnbound : 1; // 0x70(0x01)
	char UnknownData_70_2 : 6; // 0x70(0x01)
	char UnknownData_71[0xf]; // 0x71(0x0f)
};

// Class DatasmithContent.DatasmithScene
// Size: 0x30 (Inherited: 0x28)
struct UDatasmithScene : public UObject {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

// Class DatasmithContent.DatasmithSceneActor
// Size: 0x278 (Inherited: 0x220)
struct ADatasmithSceneActor : public AActor {
	struct UDatasmithScene* Scene; // 0x220(0x08)
	struct TMap<struct FName, struct TSoftObjectPtr<struct AActor>> RelatedActors; // 0x228(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size: 0xe0 (Inherited: 0x30)
struct UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate {
	struct FTransform RelativeTransform; // 0x30(0x30)
	char Mobility; // 0x60(0x01)
	char UnknownData_61[0x7]; // 0x61(0x07)
	struct TSoftObjectPtr<struct USceneComponent> AttachParent; // 0x68(0x28)
	struct TSet<struct FName> Tags; // 0x90(0x50)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size: 0x40 (Inherited: 0x30)
struct UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {
	char SourceType; // 0x30(0x01)
	char UnknownData_31[0x3]; // 0x31(0x03)
	int32_t CubemapResolution; // 0x34(0x04)
	struct UTextureCube* Cubemap; // 0x38(0x08)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size: 0x38 (Inherited: 0x30)
struct UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30(0x04)
	float OuterConeAngle; // 0x34(0x04)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size: 0x48 (Inherited: 0x30)
struct UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x38(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size: 0xa8 (Inherited: 0x30)
struct UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30(0x50)
	int32_t LightMapCoordinateIndex; // 0x80(0x04)
	int32_t LightMapResolution; // 0x84(0x04)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98(0x10)
};

