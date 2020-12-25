// ScriptStruct CensorAssets.CensorTableRow
// Size: 0x58 (Inherited: 0x08)
struct FCensorTableRow : public FTableRowBase {
	struct TSoftObjectPtr<struct UObject> CensoredAsset; // 0x08(0x28)
	struct TSoftObjectPtr<struct UObject> ReplacementAsset; // 0x30(0x28)
};

