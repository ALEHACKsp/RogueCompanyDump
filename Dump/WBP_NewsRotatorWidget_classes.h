// WidgetBlueprintGeneratedClass WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C
// Size: 0x578 (Inherited: 0x4f8)
struct UWBP_NewsRotatorWidget_C : public UKSNewsRotatorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f8(0x08)
	struct UWidgetAnimation* Anim_ChangeNewsImage; // 0x500(0x08)
	struct UStandardButtonNoArt_C* ActionButton; // 0x508(0x08)
	struct UWBP_ControllerPrompt_C* LeftNavPrompt; // 0x510(0x08)
	struct UKSAsyncImage* NewsImage; // 0x518(0x08)
	struct UKSAsyncImage* NewsImageAnimateOut; // 0x520(0x08)
	struct UWBP_ControllerPrompt_C* RightNavPrompt; // 0x528(0x08)
	struct UHorizontalBox* RotatorButtons; // 0x530(0x08)
	struct UWBP_Header3_C* WBP_Header3_C_1; // 0x538(0x08)
	struct UWBP_NewsRotatorButton_C* WBP_NewsRotatorButton; // 0x540(0x08)
	float TickTimer; // 0x548(0x04)
	int32_t CurrentPanelIndex; // 0x54c(0x04)
	bool IsAnimating; // 0x550(0x01)
	char UnknownData_551[0x7]; // 0x551(0x07)
	struct TArray<struct UKSNewsRotatorData*> NewsRotatorObjects; // 0x558(0x10)
	struct FMulticastInlineDelegate NewsVisibilityUpdated; // 0x568(0x10)

	bool NavigateConfirm(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
	void UpdatePrompts(char InputState, bool HasFocus); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
	void GetNavigationWidgets(struct TArray<struct UPUMG_Widget*> Widgets); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
	void ShowPanel(int32_t NewPanelIndex); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
	void UpdateRotatorButtons(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
	void ShowPrevPanel(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
	void ShowNextPanel(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
	void PopulateData(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
	void InitializeWidget(struct APUMG_HUD* HUD); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
	void OnJsonChanged(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
	void OnItemClicked(int32_t ButtonIndex); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
	void OnActionClicked(struct UWidget* Widget); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
	void OnActionButtonHovered(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
	void OnInputModeChange(char CurrentState); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
	void InitializeWidgetNavigation(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
	void BindInputActions(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
	void UnbindInputActions(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
	void HandleGamepadHovered(struct UPUMG_Widget* Widget, bool bHovered); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
	void GamepadHover(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
	void GamepadUnhover(); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
	void ExecuteUbergraph_WBP_NewsRotatorWidget(int32_t EntryPoint); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
	void NewsVisibilityUpdated__DelegateSignature(bool Visibility); // Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
};

