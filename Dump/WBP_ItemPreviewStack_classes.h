// WidgetBlueprintGeneratedClass WBP_ItemPreviewStack.WBP_ItemPreviewStack_C
// Size: 0x558 (Inherited: 0x4e0)
struct UWBP_ItemPreviewStack_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct USizeBox* 1pxBar; // 0x4e8(0x08)
	struct USizeBox* 1pxBar_2; // 0x4f0(0x08)
	struct UImage* BottomBar; // 0x4f8(0x08)
	struct UImage* Gradient; // 0x500(0x08)
	struct UWBP_AsyncIcon_C* ItemPreview2D; // 0x508(0x08)
	struct UBorder* RarityElementWrapper; // 0x510(0x08)
	struct UImage* ScanLines; // 0x518(0x08)
	struct UTextBlock* Title; // 0x520(0x08)
	struct UOverlay* TitleDisplay; // 0x528(0x08)
	struct UImage* TopBar; // 0x530(0x08)
	enum class ELobbyCharacterIndex CharacterIndex; // 0x538(0x01)
	char UnknownData_539[0x3]; // 0x539(0x03)
	struct FName ModelName; // 0x53c(0x08)
	char UnknownData_544[0x4]; // 0x544(0x04)
	struct AKSLobbyCharacter* PreviewCharacter; // 0x548(0x08)
	struct UKSJobItem* JobItem; // 0x550(0x08)

	void SetTitle(struct UKSItem* KSItem); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetTitle
	void SetPreviewJob(struct UKSJobItem* JobItem); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetPreviewJob
	void Set2DPreviewImage(struct UKSItem* KSItem); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Set2DPreviewImage
	void SetModelDisplayForEmote(); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetModelDisplayForEmote
	void SetEmote(struct UKSItem* EmoteItem); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetEmote
	void SetSkinOrRogueModel(struct UKSSkinBundle* SkinBundle); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.SetSkinOrRogueModel
	void DisplayItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.DisplayItem
	void ClearDisplay(); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ClearDisplay
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.InitializeWidget
	void Construct(); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.Construct
	void ExecuteUbergraph_WBP_ItemPreviewStack(int32_t EntryPoint); // Function WBP_ItemPreviewStack.WBP_ItemPreviewStack_C.ExecuteUbergraph_WBP_ItemPreviewStack
};

