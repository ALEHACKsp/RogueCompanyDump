// WidgetBlueprintGeneratedClass StandardButtonNoArt.StandardButtonNoArt_C
// Size: 0x550 (Inherited: 0x4e0)
struct UStandardButtonNoArt_C : public UKSWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UWidgetAnimation* Highlight; // 0x4e8(0x08)
	struct UNamedSlot* HighlightGroup; // 0x4f0(0x08)
	struct UButton* LoadoutButton; // 0x4f8(0x08)
	struct UNamedSlot* NamedSlot_1; // 0x500(0x08)
	struct UNamedSlot* TextGroup; // 0x508(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x510(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x520(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x530(0x10)
	struct UAkAudioEvent* ClickStandardButtonNoArtSFX; // 0x540(0x08)
	struct UAkAudioEvent* HoverStandardButtonNoArtSFX; // 0x548(0x08)

	bool NavigateConfirm(); // Function StandardButtonNoArt.StandardButtonNoArt_C.NavigateConfirm
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function StandardButtonNoArt.StandardButtonNoArt_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	void GamepadHover(); // Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadHover
	void GamepadUnhover(); // Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadUnhover
	void GamepadConfirm(); // Function StandardButtonNoArt.StandardButtonNoArt_C.GamepadConfirm
	void Do Hover(); // Function StandardButtonNoArt.StandardButtonNoArt_C.Do Hover
	void Do Unhover(); // Function StandardButtonNoArt.StandardButtonNoArt_C.Do Unhover
	void ExecuteUbergraph_StandardButtonNoArt(int32_t EntryPoint); // Function StandardButtonNoArt.StandardButtonNoArt_C.ExecuteUbergraph_StandardButtonNoArt
	void OnUnhovered__DelegateSignature(struct UWidget* Widget); // Function StandardButtonNoArt.StandardButtonNoArt_C.OnUnhovered__DelegateSignature
	void OnHovered__DelegateSignature(struct UWidget* Widget); // Function StandardButtonNoArt.StandardButtonNoArt_C.OnHovered__DelegateSignature
	void OnClicked__DelegateSignature(struct UWidget* Widget); // Function StandardButtonNoArt.StandardButtonNoArt_C.OnClicked__DelegateSignature
};

