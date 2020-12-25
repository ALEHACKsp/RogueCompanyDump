// WidgetBlueprintGeneratedClass PlayerHealthMeterSegment.PlayerHealthMeterSegment_C
// Size: 0x310 (Inherited: 0x238)
struct UPlayerHealthMeterSegment_C : public UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UWidgetAnimation* DownedPulse; // 0x240(0x08)
	struct UWidgetAnimation* ImmunePulse; // 0x248(0x08)
	struct UWidgetAnimation* DisableImmune; // 0x250(0x08)
	struct UWidgetAnimation* EnableImmune; // 0x258(0x08)
	struct UWidgetAnimation* DamagePulse; // 0x260(0x08)
	struct UImage* Bg; // 0x268(0x08)
	struct UImage* Dot_Lower; // 0x270(0x08)
	struct UImage* Dot_Upper; // 0x278(0x08)
	struct UCanvasPanel* Dots; // 0x280(0x08)
	struct UImage* Image_120; // 0x288(0x08)
	struct UWidgetSwitcher* IsDownedSwitcher; // 0x290(0x08)
	struct UOverlay* SliceArmor; // 0x298(0x08)
	struct UImage* SliceArmorDamaged; // 0x2a0(0x08)
	struct UImage* SliceArmorTrim; // 0x2a8(0x08)
	struct USpacer* SliceDepleted; // 0x2b0(0x08)
	struct UOverlay* SliceHealth; // 0x2b8(0x08)
	struct UImage* SliceHealthDamaged; // 0x2c0(0x08)
	struct UImage* SliceHealthFill; // 0x2c8(0x08)
	struct UImage* SliceHealthTrim; // 0x2d0(0x08)
	struct UImage* SliceImmuneFill; // 0x2d8(0x08)
	struct UOverlay* SliceImmuneOverlay; // 0x2e0(0x08)
	struct UOverlay* SliceInactive; // 0x2e8(0x08)
	struct UImage* SliceInactiveFill; // 0x2f0(0x08)
	struct UOverlay* SliceOverheal; // 0x2f8(0x08)
	struct UImage* SliceOverhealDamaged; // 0x300(0x08)
	struct UImage* SliceOverhealTrim; // 0x308(0x08)

	void SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2(struct UOverlay* SliceImmuneOverlay); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_2
	void SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1(struct UOverlay* SliceImmuneOverlay); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SequenceEvent__ENTRYPOINTPlayerHealthMeterSegment_1
	void SetIsDowned(bool IsDowned); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetIsDowned
	void SetImmune(bool bEnabled, bool bImmediate); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetImmune
	void SetDotVisibility(bool IsVisible); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetDotVisibility
	void PlayDamagePulse(); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PlayDamagePulse
	void SetBonusState(bool IsBonus); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetBonusState
	void SetSliceValues(int32_t Health, int32_t Armor, int32_t Overheal, int32_t Depleted, int32_t Inactive); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.SetSliceValues
	void OnDisableImmuneParams(struct UOverlay* SliceImmuneOverlay); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnDisableImmuneParams
	void OnEnableImmuneParams(struct UOverlay* SliceImmuneOverlay); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.OnEnableImmuneParams
	void PreConstruct(bool IsDesignTime); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.PreConstruct
	void ExecuteUbergraph_PlayerHealthMeterSegment(int32_t EntryPoint); // Function PlayerHealthMeterSegment.PlayerHealthMeterSegment_C.ExecuteUbergraph_PlayerHealthMeterSegment
};

