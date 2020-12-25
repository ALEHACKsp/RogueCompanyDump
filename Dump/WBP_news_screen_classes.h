// WidgetBlueprintGeneratedClass WBP_news_screen.WBP_news_screen_C
// Size: 0x549 (Inherited: 0x4e0)
struct UWBP_news_screen_C : public UKSWhatsNewModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* hover_anim; // 0x4e8(0x08)
	struct UImage* bkg; // 0x4f0(0x08)
	struct UTextBlock* ButtonText; // 0x4f8(0x08)
	struct UStandardButtonNoArt_C* CloseButton; // 0x500(0x08)
	struct UImage* GameModeGamepad; // 0x508(0x08)
	struct UImage* Image_348; // 0x510(0x08)
	struct UWBP_Header1_C* WBP_Header1; // 0x518(0x08)
	struct UWBP_news_card_C* WBP_news_card; // 0x520(0x08)
	struct UWBP_news_card_C* WBP_news_card_C_2; // 0x528(0x08)
	struct UWBP_news_card_C* WBP_news_card_C_3; // 0x530(0x08)
	struct TArray<struct UWBP_news_card_C*> NewsCards; // 0x538(0x10)
	enum class EPUMG_LoginState LoginState; // 0x548(0x01)

	void GoBack(); // Function WBP_news_screen.WBP_news_screen_C.GoBack
	void HandleInputModeChanged(char Input Mode); // Function WBP_news_screen.WBP_news_screen_C.HandleInputModeChanged
	void PopulateNewsCards(); // Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards
	void PreConstruct(bool IsDesignTime); // Function WBP_news_screen.WBP_news_screen_C.PreConstruct
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_news_screen.WBP_news_screen_C.InitializeWidget
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_news_screen.WBP_news_screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void HandleCloseHovered(struct UWidget* Widget); // Function WBP_news_screen.WBP_news_screen_C.HandleCloseHovered
	void HandleCLoseUnhovered(struct UWidget* Widget); // Function WBP_news_screen.WBP_news_screen_C.HandleCLoseUnhovered
	void InitializeWidgetNavigation(); // Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation
	void OnJsonChanged(); // Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged
	void HandleLoginStateChange(enum class EPUMG_LoginState NewLoginState); // Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange
	void OnShown(); // Function WBP_news_screen.WBP_news_screen_C.OnShown
	void OnHide(); // Function WBP_news_screen.WBP_news_screen_C.OnHide
	void Destruct(); // Function WBP_news_screen.WBP_news_screen_C.Destruct
	void ExecuteUbergraph_WBP_news_screen(int32_t EntryPoint); // Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen
};

