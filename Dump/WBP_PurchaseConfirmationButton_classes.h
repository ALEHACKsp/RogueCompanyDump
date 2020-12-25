// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C
// Size: 0x588 (Inherited: 0x4e0)
struct UWBP_PurchaseConfirmationButton_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* OnGamepadHover; // 0x4e8(0x08)
	struct UWBP_StoreDiscountTag_C* DiscountTag; // 0x4f0(0x08)
	struct UKSAsyncImage* GamepadPrompt; // 0x4f8(0x08)
	struct UOverlay* GamepadPromptHolder; // 0x500(0x08)
	struct UWBP_ButtonStacked_C* MainButton; // 0x508(0x08)
	struct UOverlay* PressAndHoldWrapper; // 0x510(0x08)
	struct UWBP_StorePriceTag_C* PriceTag; // 0x518(0x08)
	struct UImage* ProgressCircle; // 0x520(0x08)
	struct UTextBlock* UnlockText; // 0x528(0x08)
	bool InHoverState; // 0x530(0x01)
	char UnknownData_531[0x7]; // 0x531(0x07)
	struct UPUMG_PortalOffer* PortalOffer; // 0x538(0x08)
	struct UPUMG_StoreItemPrice* StorePrice; // 0x540(0x08)
	struct FMulticastInlineDelegate PurcaseItemWithPrice; // 0x548(0x10)
	struct FMulticastInlineDelegate PurcaseItemWithPortalOffer; // 0x558(0x10)
	bool IsHoldingConfirm; // 0x568(0x01)
	char UnknownData_569[0x3]; // 0x569(0x03)
	float HoldConfirmTime; // 0x56c(0x04)
	float TIME_TO_HOLD; // 0x570(0x04)
	char UnknownData_574[0x4]; // 0x574(0x04)
	struct FMulticastInlineDelegate OnRawClick; // 0x578(0x10)

	void StartConfirmHold(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.StartConfirmHold
	void ClearConfirmHold(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ClearConfirmHold
	void UpdateGamepadPromptDisplay(char InputMode); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.UpdateGamepadPromptDisplay
	void OnButtonUnhovered(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonUnhovered
	void OnButtonHovered(bool IsGamepad); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonHovered
	void OnButtonClicked(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnButtonClicked
	void SetPortalOffer(struct UPUMG_PortalOffer* PortalOffer); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetPortalOffer
	void SetRawText(struct FText ButtonText); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetRawText
	void SetStorePrice(struct UPUMG_StoreItemPrice* ItemPrice); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.SetStorePrice
	void PreConstruct(bool IsDesignTime); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PreConstruct
	void Construct(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Construct
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.Tick
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.InitializeWidget
	void ExecuteUbergraph_WBP_PurchaseConfirmationButton(int32_t EntryPoint); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.ExecuteUbergraph_WBP_PurchaseConfirmationButton
	void OnRawClick__DelegateSignature(); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.OnRawClick__DelegateSignature
	void PurcaseItemWithPortalOffer__DelegateSignature(struct UPUMG_PortalOffer* PortalOffer); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPortalOffer__DelegateSignature
	void PurcaseItemWithPrice__DelegateSignature(struct UPUMG_StoreItemPrice* Price); // Function WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C.PurcaseItemWithPrice__DelegateSignature
};

