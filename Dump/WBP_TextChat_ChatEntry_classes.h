// WidgetBlueprintGeneratedClass WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C
// Size: 0x2b8 (Inherited: 0x238)
struct UWBP_TextChat_ChatEntry_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* FadeOut; // 0x240(0x08)
	struct UWidgetAnimation* Show; // 0x248(0x08)
	struct UButton* NameButton; // 0x250(0x08)
	struct UTextBlock* NameText; // 0x258(0x08)
	struct UCanvasPanel* Panel; // 0x260(0x08)
	struct UTextBlock* Text; // 0x268(0x08)
	struct FPUMG_ChatData ChatDataCopy; // 0x270(0x40)
	bool IsWindowCollapsed; // 0x2b0(0x01)
	bool IsInitialShowFinished; // 0x2b1(0x01)
	char UnknownData_2B2[0x2]; // 0x2b2(0x02)
	float ChatMessageDisplayDuration; // 0x2b4(0x04)

	void HandleInitialSpawn(); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn
	void InitialShowFinished(); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished
	void SetWindowCollapsed(bool Collapsed); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed
	void SetTextWithoutPlayer(struct FText Text, enum class EPUMG_ChatChannel Channel); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer
	void SetTextWithPlayer(struct FText Text, struct UPUMG_PlayerInfo* Sender, struct UPUMG_PlayerInfo* Recipient, bool IsOwnMessage, enum class EPUMG_ChatChannel Channel); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer
	void Construct(); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct
	void ExecuteUbergraph_WBP_TextChat_ChatEntry(int32_t EntryPoint); // Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry
};

