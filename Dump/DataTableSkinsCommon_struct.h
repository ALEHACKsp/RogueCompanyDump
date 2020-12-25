// Enum DataTableSkinsCommon.EMaterialSkinType
enum class EMaterialSkinType : uint8_t {
	Material,
	InstanceDataMine,
	FloatParam,
	VectorParam,
	TextureParam,
	EMaterialSkinType_MAX,
};

// ScriptStruct DataTableSkinsCommon.DataTableInfo
// Size: 0x58 (Inherited: 0x00)
struct FDataTableInfo {
	struct UDataTable* DataTable; // 0x00(0x08)
	int32_t TablePriority; // 0x08(0x04)
	char UnknownData_C[0x4]; // 0x0c(0x04)
	struct FGameplayTagQuery SkinTagQuery; // 0x10(0x48)
};

// ScriptStruct DataTableSkinsCommon.SoftAssetTableRow
// Size: 0x1d8 (Inherited: 0x08)
struct FSoftAssetTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UAnimationAsset> AnimationAsset; // 0x08(0x28)
	struct TSoftObjectPtr<struct UAkAudioEvent> AudioEvent; // 0x30(0x28)
	struct TSoftObjectPtr<struct USelectiveAkAudioEvent> SelectiveAudioEvent; // 0x58(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x80(0x28)
	struct TSoftObjectPtr<struct UPhysicsAsset> PhysicsAsset; // 0xa8(0x28)
	struct TSoftObjectPtr<struct UStaticMesh> StaticMesh; // 0xd0(0x28)
	struct TSoftObjectPtr<struct UParticleSystem> ParticleSystem; // 0xf8(0x28)
	struct TSoftObjectPtr<struct UMaterialInterface> MaterialInterface; // 0x120(0x28)
	struct TSoftObjectPtr<struct UTexture> Texture; // 0x148(0x28)
	SoftClassProperty Class; // 0x170(0x28)
	bool Bool; // 0x198(0x01)
	char UnknownData_199[0x3]; // 0x199(0x03)
	float Float; // 0x19c(0x04)
	struct FLinearColor LinearColor; // 0x1a0(0x10)
	int32_t Int; // 0x1b0(0x04)
	struct FName NameField; // 0x1b4(0x08)
	char UnknownData_1BC[0x1c]; // 0x1bc(0x1c)
};

// ScriptStruct DataTableSkinsCommon.HardAssetTableRow
// Size: 0x98 (Inherited: 0x08)
struct FHardAssetTableRow : public FTableRowBase {
	struct UAnimationAsset* AnimationAsset; // 0x08(0x08)
	struct UAkAudioEvent* AudioEvent; // 0x10(0x08)
	struct USelectiveAkAudioEvent* SelectiveAudioEvent; // 0x18(0x08)
	struct USkeletalMesh* SkeletalMesh; // 0x20(0x08)
	struct UPhysicsAsset* PhysicsAsset; // 0x28(0x08)
	struct UStaticMesh* StaticMesh; // 0x30(0x08)
	struct UParticleSystem* ParticleSystem; // 0x38(0x08)
	struct UMaterialInterface* MaterialInterface; // 0x40(0x08)
	struct UTexture* Texture; // 0x48(0x08)
	struct UObject* Class; // 0x50(0x08)
	bool Bool; // 0x58(0x01)
	char UnknownData_59[0x3]; // 0x59(0x03)
	float Float; // 0x5c(0x04)
	struct FLinearColor LinearColor; // 0x60(0x10)
	int32_t Int; // 0x70(0x04)
	struct FName NameField; // 0x74(0x08)
	char UnknownData_7C[0x1c]; // 0x7c(0x1c)
};

// ScriptStruct DataTableSkinsCommon.MaterialSkinInfo
// Size: 0x1c (Inherited: 0x00)
struct FMaterialSkinInfo {
	struct FName Prefix; // 0x00(0x08)
	int32_t MaterialSlot; // 0x08(0x04)
	enum class EMaterialSkinType SkinType; // 0x0c(0x01)
	char UnknownData_D[0x3]; // 0x0d(0x03)
	struct FName ParamName; // 0x10(0x08)
	bool bValid; // 0x18(0x01)
	char UnknownData_19[0x3]; // 0x19(0x03)
};

// ScriptStruct DataTableSkinsCommon.CachedRowsEntry
// Size: 0xa0 (Inherited: 0x00)
struct FCachedRowsEntry {
	int32_t Priority; // 0x00(0x04)
	char UnknownData_4[0x4]; // 0x04(0x04)
	struct FHardAssetTableRow Row; // 0x08(0x98)
};

// ScriptStruct DataTableSkinsCommon.DynamicSkinTableMapEntry
// Size: 0x10 (Inherited: 0x00)
struct FDynamicSkinTableMapEntry {
	struct UDynamicSkinTable* Table; // 0x00(0x08)
	char UnknownData_8[0x8]; // 0x08(0x08)
};

// ScriptStruct DataTableSkinsCommon.SkinUpdateTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkinUpdateTickFunction : public FTickFunction {
	char UnknownData_28[0x8]; // 0x28(0x08)
};

