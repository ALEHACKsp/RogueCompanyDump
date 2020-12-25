// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// Size: 0x590 (Inherited: 0x4e0)
struct UWBP_AsyncIcon_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UKSAsyncImage* Icon; // 0x4e8(0x08)
	struct UThrobber* LoadingThrobber; // 0x4f0(0x08)
	struct FMulticastInlineDelegate OnIconUpdated; // 0x4f8(0x10)
	struct FSlateBrush DefaultBrush; // 0x508(0x88)

	void Set Brush from Texture on Item(struct UKSItem* Item, bool MatchSize, struct TSoftObjectPtr<struct UTexture2D> Texture); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
	void Get Material(struct UMaterialInstanceDynamic* MaterialInstanceDynamic); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
	void SetMaterialToUse(struct UMaterialInterface* Material); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
	void ApplyDefaultBrush(); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> Texture, bool MatchSize); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
	void SetBrushFromTexture(struct UTexture2D* Texture, bool MatchSize); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
	void SetBrushFromItemIcon(struct UPlatformInventoryItem* Item, bool MatchSize); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
	void PreConstruct(bool IsDesignTime); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
	void Construct(); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
	void OnStartLoad(struct UPUMG_AsyncImage* Image); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
	void OnFinishLoad(struct UPUMG_AsyncImage* Image); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
	void ExecuteUbergraph_WBP_AsyncIcon(int32_t EntryPoint); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
	void OnIconUpdated__DelegateSignature(struct UTexture2D* Texture); // Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
};

