// WidgetBlueprintGeneratedClass WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C
// Size: 0x310 (Inherited: 0x238)
struct UWBP_QuickPlay_MapThumbnail_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UImage* Image; // 0x240(0x08)
	struct UImage* Image_2; // 0x248(0x08)
	struct UImage* Image_3; // 0x250(0x08)
	struct UImage* Image_58; // 0x258(0x08)
	struct UWBP_AsyncIcon_C* MapImage; // 0x260(0x08)
	struct UTextBlock* mapName; // 0x268(0x08)
	struct FUIMapInfo UIMapInfo; // 0x270(0x58)
	struct FMapDetail MapDetail; // 0x2c8(0x48)

	void Construct(); // Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.Construct
	void SetMapInfo(struct FUIMapInfo UIMapInfo); // Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapInfo
	void SetMapDetail(struct FMapDetail MapDetail); // Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.SetMapDetail
	void ExecuteUbergraph_WBP_QuickPlay_MapThumbnail(int32_t EntryPoint); // Function WBP_QuickPlay_MapThumbnail.WBP_QuickPlay_MapThumbnail_C.ExecuteUbergraph_WBP_QuickPlay_MapThumbnail
};

