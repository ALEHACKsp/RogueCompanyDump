// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t {
	None,
	Normals,
	Tangents,
	WeightedNTBs,
	EComputeNTBsOptions_MAX,
};

// ScriptStruct MeshDescription.ElementID
// Size: 0x04 (Inherited: 0x00)
struct FElementID {
	int32_t IDValue; // 0x00(0x04)
};

