// WidgetBlueprintGeneratedClass WBP_AdditiveImage.WBP_AdditiveImage_C
// Size: 0x2e0 (Inherited: 0x238)
struct UWBP_AdditiveImage_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Texture; // 0x240(0x08)
	struct FSlateBrush DefaultBrush; // 0x248(0x88)
	struct UMaterialInterface* BrushMaterial; // 0x2d0(0x08)
	struct FName ParameterName; // 0x2d8(0x08)

	void SetAdditiveMaterial(); // Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial
	void PreConstruct(bool IsDesignTime); // Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct
	void Construct(); // Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct
	void ExecuteUbergraph_WBP_AdditiveImage(int32_t EntryPoint); // Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage
};

