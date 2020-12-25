// WidgetBlueprintGeneratedClass OutlineContainer.OutlineContainer_C
// Size: 0x548 (Inherited: 0x4e0)
struct UOutlineContainer_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UImage* Bg; // 0x4e8(0x08)
	struct UNamedSlot* ContentSlot; // 0x4f0(0x08)
	struct UButton* HitTarget; // 0x4f8(0x08)
	struct UImage* Hover; // 0x500(0x08)
	struct UImage* Outline; // 0x508(0x08)
	struct UObject* OutlineTexture; // 0x510(0x08)
	struct FMargin OutlineMargin; // 0x518(0x10)
	struct FMulticastInlineDelegate Gamepad Confirm; // 0x528(0x10)
	struct UAkAudioEvent* ClickOutlineContainerSFX; // 0x538(0x08)
	struct UAkAudioEvent* HoverOutlineContainerSFX; // 0x540(0x08)

	bool NavigateConfirm(); // Function OutlineContainer.OutlineContainer_C.NavigateConfirm
	void PreConstruct(bool IsDesignTime); // Function OutlineContainer.OutlineContainer_C.PreConstruct
	void GamepadHover(); // Function OutlineContainer.OutlineContainer_C.GamepadHover
	void GamepadUnhover(); // Function OutlineContainer.OutlineContainer_C.GamepadUnhover
	void Do Hover(); // Function OutlineContainer.OutlineContainer_C.Do Hover
	void Do Unhover(); // Function OutlineContainer.OutlineContainer_C.Do Unhover
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function OutlineContainer.OutlineContainer_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_OutlineContainer(int32_t EntryPoint); // Function OutlineContainer.OutlineContainer_C.ExecuteUbergraph_OutlineContainer
	void Gamepad Confirm__DelegateSignature(); // Function OutlineContainer.OutlineContainer_C.Gamepad Confirm__DelegateSignature
};

