// WidgetBlueprintGeneratedClass Blocker.Blocker_C
// Size: 0x501 (Inherited: 0x4e0)
struct UBlocker_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UButton* Closer; // 0x4e8(0x08)
	struct UImage* Image_1; // 0x4f0(0x08)
	struct UPUMG_Widget* Target; // 0x4f8(0x08)
	bool ClickToClose; // 0x500(0x01)

	void BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	void Bind(struct UPUMG_Widget* Widget, bool ClickToClose); // Function Blocker.Blocker_C.Bind
	void InitializeWidget(struct APUMG_HUD* HUD); // Function Blocker.Blocker_C.InitializeWidget
	void HandleBlockerChange(bool Show, struct UUserWidget* InWidget); // Function Blocker.Blocker_C.HandleBlockerChange
	void ExecuteUbergraph_Blocker(int32_t EntryPoint); // Function Blocker.Blocker_C.ExecuteUbergraph_Blocker
};

