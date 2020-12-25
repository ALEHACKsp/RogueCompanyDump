// ScriptStruct KSNetTools.ReplicatedLog
// Size: 0x70 (Inherited: 0x00)
struct FReplicatedLog {
	int32_t MaxEntryReplication; // 0x00(0x04)
	int32_t MaxHistory; // 0x04(0x04)
	int32_t TailRepIndex; // 0x08(0x04)
	int32_t HeadRepIndex; // 0x0c(0x04)
	int32_t ItemArrayTail; // 0x10(0x04)
	int32_t ItemArrayHead; // 0x14(0x04)
	char UnknownData_18[0x58]; // 0x18(0x58)
};

// ScriptStruct KSNetTools.ReplicatedLogItem
// Size: 0x01 (Inherited: 0x00)
struct FReplicatedLogItem {
	char UnknownData_0[0x1]; // 0x00(0x01)
};

// ScriptStruct KSNetTools.ReplicatedPreloader
// Size: 0x1d8 (Inherited: 0x108)
struct FReplicatedPreloader : public FFastArraySerializer {
	char UnknownData_108[0x50]; // 0x108(0x50)
	struct TArray<struct FRepPreloaderItem> RepArray; // 0x158(0x10)
	struct TArray<struct FName> AlwaysIncludeBundles; // 0x168(0x10)
	char UnknownData_178[0x60]; // 0x178(0x60)
};

// ScriptStruct KSNetTools.RepPreloaderItem
// Size: 0x38 (Inherited: 0x0c)
struct FRepPreloaderItem : public FFastArraySerializerItem {
	struct FPrimaryAssetId PrimaryAssetId; // 0x0c(0x10)
	struct FName BundleName; // 0x1c(0x08)
	bool bEntryWasReplicated; // 0x24(0x01)
	char UnknownData_25[0x13]; // 0x25(0x13)
};

