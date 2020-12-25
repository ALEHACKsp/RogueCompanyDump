// Class Landscape.ControlPointMeshActor
// Size: 0x228 (Inherited: 0x220)
struct AControlPointMeshActor : public AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x220(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x4e0 (Inherited: 0x4d0)
struct UControlPointMeshComponent : public UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4d0(0x04)
	char UnknownData_4D4[0xc]; // 0x4d4(0x0c)
};

// Class Landscape.LandscapeProxy
// Size: 0x540 (Inherited: 0x220)
struct ALandscapeProxy : public AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x220(0x08)
	struct FGuid LandscapeGuid; // 0x228(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x238(0x08)
	int32_t MaxLODLevel; // 0x240(0x04)
	float LODDistanceFactor; // 0x244(0x04)
	char LODFalloff; // 0x248(0x01)
	char UnknownData_249[0x3]; // 0x249(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x24c(0x04)
	float LOD0ScreenSize; // 0x250(0x04)
	float LOD0DistributionSetting; // 0x254(0x04)
	float LODDistributionSetting; // 0x258(0x04)
	float TessellationComponentScreenSize; // 0x25c(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x260(0x01)
	char UnknownData_261[0x3]; // 0x261(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x264(0x04)
	int32_t OccluderGeometryLOD; // 0x268(0x04)
	int32_t StaticLightingLOD; // 0x26c(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x270(0x08)
	float StreamingDistanceMultiplier; // 0x278(0x04)
	char UnknownData_27C[0x4]; // 0x27c(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x280(0x08)
	char UnknownData_288[0x20]; // 0x288(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2a8(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b0(0x10)
	bool bMeshHoles; // 0x2c0(0x01)
	char MeshHolesMaxLod; // 0x2c1(0x01)
	char UnknownData_2C2[0x6]; // 0x2c2(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8(0x10)
	int32_t VirtualTextureNumLods; // 0x2d8(0x04)
	int32_t VirtualTextureLodBias; // 0x2dc(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e0(0x01)
	char UnknownData_2E1[0x3]; // 0x2e1(0x03)
	float NegativeZBoundsExtension; // 0x2e4(0x04)
	float PositiveZBoundsExtension; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x2f0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310(0x10)
	char UnknownData_320[0x64]; // 0x320(0x64)
	bool bHasLandscapeGrass; // 0x384(0x01)
	char UnknownData_385[0x3]; // 0x385(0x03)
	float StaticLightingResolution; // 0x388(0x04)
	char bCastStaticShadow : 1; // 0x38c(0x01)
	char bCastShadowAsTwoSided : 1; // 0x38c(0x01)
	char bCastFarShadow : 1; // 0x38c(0x01)
	char UnknownData_38C_3 : 5; // 0x38c(0x01)
	char UnknownData_38D[0x3]; // 0x38d(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x390(0x01)
	char UnknownData_390_1 : 7; // 0x390(0x01)
	struct FLightingChannels LightingChannels; // 0x391(0x01)
	char UnknownData_392[0x2]; // 0x392(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394(0x01)
	char bRenderCustomDepth : 1; // 0x394(0x01)
	char UnknownData_394_2 : 6; // 0x394(0x01)
	char UnknownData_395[0x3]; // 0x395(0x03)
	int32_t CustomDepthStencilValue; // 0x398(0x04)
	float LDMaxDrawDistance; // 0x39c(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3a0(0x18)
	int32_t CollisionMipLevel; // 0x3b8(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3bc(0x04)
	float CollisionThickness; // 0x3c0(0x04)
	char UnknownData_3C4[0x4]; // 0x3c4(0x04)
	struct FBodyInstance BodyInstance; // 0x3c8(0x110)
	char bGenerateOverlapEvents : 1; // 0x4d8(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4d8(0x01)
	char UnknownData_4D8_2 : 6; // 0x4d8(0x01)
	char UnknownData_4D9[0x3]; // 0x4d9(0x03)
	int32_t ComponentSizeQuads; // 0x4dc(0x04)
	int32_t SubsectionSizeQuads; // 0x4e0(0x04)
	int32_t NumSubsections; // 0x4e4(0x04)
	char bUsedForNavigation : 1; // 0x4e8(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x4e8(0x01)
	char UnknownData_4E8_2 : 6; // 0x4e8(0x01)
	char UnknownData_4E9[0x3]; // 0x4e9(0x03)
	bool bUseDynamicMaterialInstance; // 0x4ec(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x4ed(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x4ee(0x01)
	bool bHasLayersContent; // 0x4ef(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x4f0(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
};

// Class Landscape.LandscapeComponent
// Size: 0x620 (Inherited: 0x430)
struct ULandscapeComponent : public UPrimitiveComponent {
	int32_t SectionBaseX; // 0x430(0x04)
	int32_t SectionBaseY; // 0x434(0x04)
	int32_t ComponentSizeQuads; // 0x438(0x04)
	int32_t SubsectionSizeQuads; // 0x43c(0x04)
	int32_t NumSubsections; // 0x440(0x04)
	char UnknownData_444[0x4]; // 0x444(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x448(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x450(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x458(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x468(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x478(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x488(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x498(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x4a8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x4b0(0x10)
	float WeightmapSubsectionOffset; // 0x4c0(0x04)
	char UnknownData_4C4[0xc]; // 0x4c4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x4d0(0x10)
	struct FBox CachedLocalBox; // 0x4e0(0x1c)
	LazyObjectProperty CollisionComponent; // 0x4fc(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x518(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x520(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x530(0x10)
	struct FGuid MapBuildDataId; // 0x540(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x550(0x10)
	int32_t CollisionMipLevel; // 0x560(0x04)
	int32_t SimpleCollisionMipLevel; // 0x564(0x04)
	float NegativeZBoundsExtension; // 0x568(0x04)
	float PositiveZBoundsExtension; // 0x56c(0x04)
	float StaticLightingResolution; // 0x570(0x04)
	int32_t ForcedLOD; // 0x574(0x04)
	int32_t LODBias; // 0x578(0x04)
	struct FGuid StateId; // 0x57c(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x58c(0x10)
	char UnknownData_59C[0x4]; // 0x59c(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x5a0(0x08)
	char MobileBlendableLayerMask; // 0x5a8(0x01)
	char UnknownData_5A9[0x7]; // 0x5a9(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x5b0(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x5b8(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x5c8(0x10)
	char UnknownData_5D8[0x48]; // 0x5d8(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	float EditorGetPaintLayerWeightAtLocation(struct FVector InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x270 (Inherited: 0x220)
struct ALandscapeGizmoActiveActor : public ALandscapeGizmoActor {
	char UnknownData_220[0x50]; // 0x220(0x50)
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : public UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char UnknownData_38_1 : 7; // 0x38(0x01)
	char UnknownData_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char UnknownData_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x510 (Inherited: 0x430)
struct ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x430(0x10)
	int32_t SectionBaseX; // 0x440(0x04)
	int32_t SectionBaseY; // 0x444(0x04)
	int32_t CollisionSizeQuads; // 0x448(0x04)
	float CollisionScale; // 0x44c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x458(0x10)
	struct FGuid HeightfieldGuid; // 0x468(0x10)
	struct FBox CachedLocalBox; // 0x478(0x1c)
	LazyObjectProperty RenderComponent; // 0x494(0x1c)
	char UnknownData_4B0[0x10]; // 0x4b0(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4c0(0x10)
	char UnknownData_4D0[0x40]; // 0x4d0(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : public UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char UnknownData_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char UnknownData_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : public UObject {
	char UnknownData_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : public UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char UnknownData_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x428 (Inherited: 0x410)
struct ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	char bIsLayerThumbnail : 1; // 0x420(0x01)
	char bDisableTessellation : 1; // 0x420(0x01)
	char bMobile : 1; // 0x420(0x01)
	char bEditorToolUsage : 1; // 0x420(0x01)
	char UnknownData_420_4 : 4; // 0x420(0x01)
	char UnknownData_421[0x7]; // 0x421(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x530 (Inherited: 0x510)
struct ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x510(0x10)
	char UnknownData_520[0x10]; // 0x520(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x228 (Inherited: 0x220)
struct ALandscapeMeshProxyActor : public AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x500 (Inherited: 0x4d0)
struct ULandscapeMeshProxyComponent : public UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x4d0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x4e0(0x10)
	int8_t ProxyLOD; // 0x4f0(0x01)
	char UnknownData_4F1[0xf]; // 0x4f1(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : public UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char UnknownData_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x460 (Inherited: 0x430)
struct ULandscapeSplinesComponent : public UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x430(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x440(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x450(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : public UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : public UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x560 (Inherited: 0x540)
struct ALandscapeStreamingProxy : public ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x540(0x1c)
	char UnknownData_55C[0x4]; // 0x55c(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x98 (Inherited: 0x30)
struct ULandscapeSubsystem : public UWorldSubsystem {
	char UnknownData_30[0x68]; // 0x30(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : public UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {
	char MappingType; // 0x40(0x01)
	char CustomUVType; // 0x41(0x01)
	char UnknownData_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char UnknownData_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char UnknownData_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char UnknownData_70_1 : 7; // 0x70(0x01)
	char UnknownData_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char UnknownData_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char UnknownData_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char UnknownData_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

