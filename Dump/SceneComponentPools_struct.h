// Enum SceneComponentPools.EPoolOverflowHandling
enum class EPoolOverflowHandling : uint8_t {
	IgnoreNewRequest,
	KillExistingRequest,
	CreateStandaloneInstance,
	EPoolOverflowHandling_MAX,
};

// ScriptStruct SceneComponentPools.PoolAttachmentInfo
// Size: 0x30 (Inherited: 0x00)
struct FPoolAttachmentInfo {
	struct FName AttachPoint; // 0x00(0x08)
	struct FVector Location; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
	struct FVector Scale; // 0x20(0x0c)
	char LocationType; // 0x2c(0x01)
	char UnknownData_2D[0x3]; // 0x2d(0x03)
};

