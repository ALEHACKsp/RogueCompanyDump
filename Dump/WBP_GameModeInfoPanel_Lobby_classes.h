// WidgetBlueprintGeneratedClass WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C
// Size: 0x290 (Inherited: 0x238)
struct UWBP_GameModeInfoPanel_Lobby_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct URichTextBlock* DescriptionLabel; // 0x240(0x08)
	struct UWBP_Header2_C* Header; // 0x248(0x08)
	struct UWidgetSwitcher* ImageSwitcher; // 0x250(0x08)
	struct UWBP_AsyncIcon_C* MapImage; // 0x258(0x08)
	struct UTextBlock* mapName; // 0x260(0x08)
	struct UWBP_AsyncIcon_C* WBP_AsyncIcon; // 0x268(0x08)
	struct UTexture2D* DemolitionImage; // 0x270(0x08)
	struct UTexture2D* ExtractionImage; // 0x278(0x08)
	struct UTexture2D* StrikeoutImage; // 0x280(0x08)
	struct UDataTable* DTCustomQueues; // 0x288(0x08)

	void GetQueueImageById(int32_t QueueId, struct UTexture2D* QueueImage); // Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.GetQueueImageById
	void SetDisplayInfo(struct FText Title, struct FText Description, struct TSoftObjectPtr<struct UTexture2D> Icon, bool UseMapImage, struct FUIMapInfo MapInfo); // Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetDisplayInfo
	void SetQueueInfo(struct FClientQueueInfo QueueInfo, bool UseMapImage, struct FUIMapInfo MapInfo); // Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.SetQueueInfo
	void ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby(int32_t EntryPoint); // Function WBP_GameModeInfoPanel_Lobby.WBP_GameModeInfoPanel_Lobby_C.ExecuteUbergraph_WBP_GameModeInfoPanel_Lobby
};

