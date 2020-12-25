// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C
// Size: 0x6ec (Inherited: 0x4e0)
struct UWBP_PurchaseConfirmation_C : public UKSPurchaseConfirmationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnShow; // 0x4e8(0x08)
	struct UVerticalBox* ActionButtonContainer; // 0x4f0(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem0; // 0x4f8(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem1; // 0x500(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem2; // 0x508(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem3; // 0x510(0x08)
	struct UWBP_KSCosmeticItemDisplay_C* BundleItem4; // 0x518(0x08)
	struct UVerticalBox* BundleItemsWrapper; // 0x520(0x08)
	struct UWBP_ButtonArrow_C* ButtonArrowNext; // 0x528(0x08)
	struct UWBP_ButtonArrow_C* ButtonArrowPrev; // 0x530(0x08)
	struct UWBP_CurrencySummary_C* CurrencySummary; // 0x538(0x08)
	struct UWBP_AsyncIcon_C* FullscreenMarketingImage; // 0x540(0x08)
	struct UCanvasPanel* GamepadScrollContainer; // 0x548(0x08)
	struct UKSAsyncImage* GamepadScrollLeft; // 0x550(0x08)
	struct UKSAsyncImage* GamepadScrollRight; // 0x558(0x08)
	struct UPUMG_AsyncImage* GampadNextItemDisplay; // 0x560(0x08)
	struct UPUMG_AsyncImage* GampadPrevItemDisplay; // 0x568(0x08)
	struct UImage* Image_155; // 0x570(0x08)
	struct UOverlay* ItemCountDisplay; // 0x578(0x08)
	struct UTextBlock* ItemCountDisplayText; // 0x580(0x08)
	struct UTextBlock* ItemDescription; // 0x588(0x08)
	struct UKSScrollBox* ItemDescriptionScrollBox; // 0x590(0x08)
	struct UWBP_AsyncIcon_C* ItemIcon; // 0x598(0x08)
	struct USizeBox* ItemIconHolder; // 0x5a0(0x08)
	struct UWBP_ItemInfoContainer_Centered_C* ItemInfoContainer; // 0x5a8(0x08)
	struct UTextBlock* ItemName; // 0x5b0(0x08)
	struct UTextBlock* ItemName_2; // 0x5b8(0x08)
	struct UWBP_AsyncIcon_C* ItemPreview2D; // 0x5c0(0x08)
	struct UTextBlock* ItemRarityText_2; // 0x5c8(0x08)
	struct UTextBlock* ItemTypeText_2; // 0x5d0(0x08)
	struct UOverlay* NextItemContainer; // 0x5d8(0x08)
	struct UWidgetSwitcher* OwnedSwitcher; // 0x5e0(0x08)
	struct UOverlay* PrevItemContainer; // 0x5e8(0x08)
	struct UOverlay* PurchaseBackPanel; // 0x5f0(0x08)
	struct UVerticalBox* PurchaseBackPanelVert; // 0x5f8(0x08)
	struct UCanvasPanel* PurchasingBlocker; // 0x600(0x08)
	struct UWBP_ButtonSlot_Cosmetic_C* RarityBorder; // 0x608(0x08)
	struct UImage* RarityColorBlock; // 0x610(0x08)
	struct UImage* RarityColorBlock_2; // 0x618(0x08)
	struct UImage* RarityGradient; // 0x620(0x08)
	struct URichTextBlock* RarityRichText; // 0x628(0x08)
	struct UKSAsyncImage* RightThumbstickScrollImage; // 0x630(0x08)
	struct UWBP_ButtonArrow_C* ScrollLeftButton; // 0x638(0x08)
	struct UHorizontalBox* ScrollLeftIndicator; // 0x640(0x08)
	struct UWBP_ButtonArrow_C* ScrollRightButton; // 0x648(0x08)
	struct UHorizontalBox* ScrollRightIndicator; // 0x650(0x08)
	struct UWBP_StandardButtonMedium_C* SlowPurchaseBackButton; // 0x658(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x660(0x08)
	struct UPUMG_StoreItem* StoreItem; // 0x668(0x08)
	struct AKSLobbyCharacter* PurchaseConfirmationCharacter; // 0x670(0x08)
	int32_t CurrentIndex; // 0x678(0x04)
	char UnknownData_67C[0x4]; // 0x67c(0x04)
	struct TArray<struct UPUMG_StoreItem*> StoreItems; // 0x680(0x10)
	int32_t ScrollValue; // 0x690(0x04)
	bool IsPurchasing; // 0x694(0x01)
	char UnknownData_695[0x3]; // 0x695(0x03)
	struct TArray<struct UPUMG_StoreItem*> BundleContents; // 0x698(0x10)
	bool IsViewingBundleContents; // 0x6a8(0x01)
	char UnknownData_6A9[0x7]; // 0x6a9(0x07)
	struct TArray<struct UWBP_KSCosmeticItemDisplay_C*> BundleButtons; // 0x6b0(0x10)
	int32_t BundleButtonScrollIndex; // 0x6c0(0x04)
	int32_t NAV_GROUP_MAIN; // 0x6c4(0x04)
	int32_t NAV_GROUP_PURCHASING; // 0x6c8(0x04)
	char UnknownData_6CC[0x4]; // 0x6cc(0x04)
	struct UWBP_PurchaseConfirmationButton_C* BundleContentsButton; // 0x6d0(0x08)
	int32_t BundleHighlightIndex; // 0x6d8(0x04)
	char UnknownData_6DC[0x4]; // 0x6dc(0x04)
	struct UAkAudioEvent* ShowPurcaseConfirmSFX; // 0x6e0(0x08)
	float PurchasingTimeout; // 0x6e8(0x04)

	void DisplaySlowPurchaseWarning(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySlowPurchaseWarning
	void SetPreviewImage(struct UKSItem* KSItem); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetPreviewImage
	void GetFullScreenSplashImage(bool SplashFound, struct TSoftObjectPtr<struct UTexture2D> FullSplashSoftTexture); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
	void OnAcquisitionFailed(struct FText ErrorMsg); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
	void SetPreferredDefaultSkin(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetPreferredDefaultSkin
	void Set Emote(struct UKSItem* EmoteItem); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Set Emote
	struct FEventReply TryHandleRightStickKeyDown(struct FKey Key); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
	void OnBundleItemHoveredGamepad(struct FCosmeticSlotDetails CosmeticSlotDetails, bool IsGamepad, struct UWBP_KSCosmeticItemDisplay_C* Widget); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
	void OnToggleViewMode(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
	void OnInputModeChanged(char InputState); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
	void SetSubDetails(struct UPUMG_StoreItem* StoreItem); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
	void OnBundleItemClicked(struct UWBP_KSCosmeticItemDisplay_C* Widget, struct FCosmeticSlotDetails CosmeticSlotDetails); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
	void PopulateBundleContentsPanel(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
	void OnNextBundlePage(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
	void OnPreviousBundlePage(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
	void GoBackToItemDisplay(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
	void OnViewBundleContents(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
	void OnNextItem(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
	void OnPreviousItem(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
	void DisplayModelOrImageForItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayModelOrImageForItem
	void ClearModels(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearModels
	void SetSkinOrRogueModel(struct UKSSkinBundle* SkinBundle); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSkinOrRogueModel
	void PopulateItemData(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
	void OnAcquisition(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
	void PurchaseItemWithPortalOffer(struct UPUMG_PortalOffer* PortalOffer); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
	void PurchaseItemWithPrice(struct UPUMG_StoreItemPrice* Price); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
	void DisplaySingleItem(struct UPUMG_StoreItem* StoreItem); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
	bool NavigateBack(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
	void PreConstruct(bool IsDesignTime); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
	void OnBackPrompt(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
	void InitializeWidgetNavigation(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
	void OnShown(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
	void OnHide(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
	void SetScrollValueUp(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
	void SetScrollValueDown(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
	void ClearScrollValue(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
	void FocusGroupNavigateRightFailure(int32_t FocusGroup); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
	void FocusGroupNavigateLeftFailure(int32_t FocusGroup); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
	void UpdateScrollPromptVisibility(); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ExecuteUbergraph_WBP_PurchaseConfirmation(int32_t EntryPoint); // Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
};

