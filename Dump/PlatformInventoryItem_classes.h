// Class PlatformInventoryItem.PInv_AssetManager
// Size: 0x588 (Inherited: 0x440)
struct UPInv_AssetManager : public UAssetManager {
	bool bHasCompletedInitialAssetScan; // 0x440(0x01)
	char UnknownData_441[0x147]; // 0x441(0x147)
};

// Class PlatformInventoryItem.PlatformInventoryItem
// Size: 0xf8 (Inherited: 0x30)
struct UPlatformInventoryItem : public UPrimaryDataAsset {
	int32_t ItemId; // 0x30(0x04)
	char UnknownData_34[0x4]; // 0x34(0x04)
	struct FText ItemDisplayName; // 0x38(0x18)
	struct FText ItemDescription; // 0x50(0x18)
	struct FString FriendlySearchName; // 0x68(0x10)
	bool IsOwnableInventoryItem; // 0x78(0x01)
	char UnknownData_79[0x7]; // 0x79(0x07)
	struct TSoftObjectPtr<struct UTexture2D> ItemIcon; // 0x80(0x28)
	struct TArray<struct FIconReference> Icons; // 0xa8(0x10)
	struct FGameplayTagContainer CollectionContainer; // 0xb8(0x20)
	char UnknownData_D8[0x20]; // 0xd8(0x20)

	bool ShouldDisplayToUser(); // Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
	void SetFriendlySearchName(struct FString InFriendlyName); // Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
	void SetCollectionContainer(struct FGameplayTagContainer InContainer); // Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
	void GetTextureAsync(struct TSoftObjectPtr<struct UTexture2D> Texture, struct FDelegate IconLoadedEvent); // Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
	struct TSoftObjectPtr<struct UTexture2D> GetSoftItemIcon(); // Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
	bool GetSoftIconByName(struct FName IconType, struct TSoftObjectPtr<struct UTexture2D> Icon); // Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
	struct FString GetItemNameAsString(); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
	struct FText GetItemName(); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
	int32_t GetItemId(); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
	struct FString GetItemDescriptionAsString(); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
	struct FText GetItemDescription(); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
	struct TSoftObjectPtr<struct UPlatformInventoryItem> GetItemByFriendlyName(struct FString InFriendlyName); // Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
	struct FGameplayTagContainer GetCollectionContainer(); // Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
};

// Class PlatformInventoryItem.PlatformStoreAsset
// Size: 0x108 (Inherited: 0xf8)
struct UPlatformStoreAsset : public UPlatformInventoryItem {
	int32_t LootId; // 0xf8(0x04)
	struct FPrimaryAssetRules Rules; // 0xfc(0x0c)

	int32_t GetLootId(); // Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
};

