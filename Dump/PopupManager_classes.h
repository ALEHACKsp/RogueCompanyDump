// WidgetBlueprintGeneratedClass PopupManager.PopupManager_C
// Size: 0x678 (Inherited: 0x5a8)
struct UPopupManager_C : public UPUMG_PopupManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5a8(0x08)
	struct UWidgetAnimation* OnShow; // 0x5b0(0x08)
	struct UImage* background; // 0x5b8(0x08)
	struct UHorizontalBox* ButtonContainer; // 0x5c0(0x08)
	struct USizeBox* ContentBox; // 0x5c8(0x08)
	struct UVerticalBox* ContentVertBox; // 0x5d0(0x08)
	struct UTextBlock* Description; // 0x5d8(0x08)
	struct UTextBlock* HeaderText; // 0x5e0(0x08)
	struct UImage* Image_1; // 0x5e8(0x08)
	struct UImage* Image_197; // 0x5f0(0x08)
	struct UImage* Shadow; // 0x5f8(0x08)
	struct UWBP_StandardButton_02_C* StandardButton_02; // 0x600(0x08)
	struct UWBP_StandardButton_02_C* StandardButton_02_C_2; // 0x608(0x08)
	struct UTextBlock* SubheaderText; // 0x610(0x08)
	struct UEditableTextBox* TextEntry; // 0x618(0x08)
	struct UTextBlock* Warning; // 0x620(0x08)
	struct UWBP_panel_bevel_C* WBP_panel_bevel_C_3; // 0x628(0x08)
	int32_t CurrentPopupId; // 0x630(0x04)
	char UnknownData_634[0x4]; // 0x634(0x04)
	struct TArray<struct UWBP_StandardButton_02_C*> Buttons; // 0x638(0x10)
	char CurrentInputState; // 0x648(0x01)
	bool BackHeldOnShown; // 0x649(0x01)
	char UnknownData_64A[0x6]; // 0x64a(0x06)
	struct TArray<struct FName> ActionMapKeysToAllow; // 0x650(0x10)
	struct TArray<struct FKey> KeysToAllowDownUp; // 0x660(0x10)
	struct UAkAudioEvent* CancelClickPopupManSFX; // 0x670(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function PopupManager.PopupManager_C.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function PopupManager.PopupManager_C.OnKeyDown
	void SetupSubHeaderText(struct FText NewSubHeaderText); // Function PopupManager.PopupManager_C.SetupSubHeaderText
	void SetupButtons(struct TArray<struct FPUMG_PopupButtonConfig> ButtonInfo); // Function PopupManager.PopupManager_C.SetupButtons
	void SetupTextEntry(bool HasTextEntry, struct FText DefaultEntryText); // Function PopupManager.PopupManager_C.SetupTextEntry
	void SetupWarningText(struct FText NewWarningText); // Function PopupManager.PopupManager_C.SetupWarningText
	void SetupDescription(struct FText NewDescText); // Function PopupManager.PopupManager_C.SetupDescription
	void SetupHeader(struct FText NewHeaderText); // Function PopupManager.PopupManager_C.SetupHeader
	bool NavigateBack(); // Function PopupManager.PopupManager_C.NavigateBack
	void Construct(); // Function PopupManager.PopupManager_C.Construct
	void ShowPopup(struct FPUMG_PopupConfig popupData); // Function PopupManager.PopupManager_C.ShowPopup
	void HidePopup(); // Function PopupManager.PopupManager_C.HidePopup
	void ButtonPressed(struct UWidget* Index); // Function PopupManager.PopupManager_C.ButtonPressed
	void InitializeWidgetNavigation(); // Function PopupManager.PopupManager_C.InitializeWidgetNavigation
	void InitializeWidget(struct APUMG_HUD* HUD); // Function PopupManager.PopupManager_C.InitializeWidget
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(struct UWidget* Widget); // Function PopupManager.PopupManager_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void HandleCancelButtonClicked(struct UWidget* InIndex); // Function PopupManager.PopupManager_C.HandleCancelButtonClicked
	void OnShown(); // Function PopupManager.PopupManager_C.OnShown
	void OnHide(); // Function PopupManager.PopupManager_C.OnHide
	void OnBackButton(); // Function PopupManager.PopupManager_C.OnBackButton
	void ExecuteUbergraph_PopupManager(int32_t EntryPoint); // Function PopupManager.PopupManager_C.ExecuteUbergraph_PopupManager
};

