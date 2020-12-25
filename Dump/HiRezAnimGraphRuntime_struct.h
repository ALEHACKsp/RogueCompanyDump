// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base {
	struct FPoseLink NotDedicatedServer; // 0x10(0x10)
	struct FPoseLink DedicatedServer; // 0x20(0x10)
	char UnknownData_30[0x8]; // 0x30(0x08)
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByLOD
// Size: 0xa0 (Inherited: 0x98)
struct FAnimNode_BlendByLOD : public FAnimNode_BlendListBase {
	int32_t LOD; // 0x98(0x04)
	char UnknownData_9C[0x4]; // 0x9c(0x04)
};

