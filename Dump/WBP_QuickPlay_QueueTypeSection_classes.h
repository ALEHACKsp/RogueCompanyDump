// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C
// Size: 0x5c8 (Inherited: 0x4e0)
struct UWBP_QuickPlay_QueueTypeSection_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UTextBlock* ButtonText; // 0x4e8(0x08)
	struct UWBP_Graphic_Button_C* CustomButton; // 0x4f0(0x08)
	struct UHorizontalBox* CustomMatchBtn; // 0x4f8(0x08)
	struct UVerticalBox* QueueButtonsContainer; // 0x500(0x08)
	struct UWBP_QuickPlay_QueueTypeHeader_C* QueueTypeHeader; // 0x508(0x08)
	struct UImage* WarningIcon; // 0x510(0x08)
	struct UWBP_QuickPlay_QueueButton_C* WBP_QuickPlay_QueueButton; // 0x518(0x08)
	struct UWBP_QuickPlay_QueueButton_C* WBP_QuickPlay_QueueButton_108; // 0x520(0x08)
	struct FQueueSection QueueSectionInfo; // 0x528(0x18)
	struct FMulticastInlineDelegate OnQueueSelected; // 0x540(0x10)
	struct FMulticastInlineDelegate OnQueueHovered; // 0x550(0x10)
	struct FMulticastInlineDelegate OnQueueUnhovered; // 0x560(0x10)
	struct TArray<struct UWBP_QuickPlay_QueueButton_C*> QueueButtons; // 0x570(0x10)
	struct FMulticastInlineDelegate OnQueuePopulated; // 0x580(0x10)
	struct TArray<struct FClientQueueInfo> AssociatedQueues; // 0x590(0x10)
	struct FMulticastInlineDelegate OnCustomMatchSelected; // 0x5a0(0x10)
	struct FMulticastInlineDelegate OnCustomMatchPopulated; // 0x5b0(0x10)
	struct UKSQueueDataFactory* KSQueueDataFactory; // 0x5c0(0x08)

	void ResetQueueButtons(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
	void GetQueueButtons(struct TArray<struct UWBP_QuickPlay_QueueButton_C*> Buttons); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
	void PopulateSection(struct FQueueSection QueueSectionInfo); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
	void Construct(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
	void HandleOnQueueClicked(int32_t QueueId); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
	void HandleOnQueueHovered(struct UWidget* Widget); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
	void HandleOnQueueUnhovered(struct UWidget* Widget); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
	void HandleCustomBtnHovered(bool IsGamepad); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
	void HandleCustomBtnUnhovered(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
	void HandleCustomBtnClicked(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
	void OnInitialized(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnInitialized
	void ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection(int32_t EntryPoint); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
	void OnCustomMatchPopulated__DelegateSignature(struct TArray<struct UKSWidget*> Buttons); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
	void OnCustomMatchSelected__DelegateSignature(); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
	void OnQueuePopulated__DelegateSignature(struct TArray<struct UWBP_QuickPlay_QueueButton_C*> QueueButton); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
	void OnQueueUnhovered__DelegateSignature(struct UWidget* Widget); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
	void OnQueueHovered__DelegateSignature(struct UWidget* Widget); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
	void OnQueueSelected__DelegateSignature(int32_t QueueId); // Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
};

