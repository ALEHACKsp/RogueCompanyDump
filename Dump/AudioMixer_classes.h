// Class AudioMixer.SynthComponent
// Size: 0x6e0 (Inherited: 0x210)
struct USynthComponent : public USceneComponent {
	char bAutoDestroy : 1; // 0x208(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x208(0x01)
	char bAllowSpatialization : 1; // 0x208(0x01)
	char bOverrideAttenuation : 1; // 0x208(0x01)
	char bOutputToBusOnly : 1; // 0x20c(0x01)
	struct USoundAttenuation* AttenuationSettings; // 0x210(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x218(0x3a0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5b8(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5c0(0x50)
	struct USoundClass* SoundClass; // 0x610(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x618(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x620(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x628(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x638(0x10)
	struct FSoundModulation Modulation; // 0x648(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x658(0x10)
	char bIsUISound : 1; // 0x668(0x01)
	char bIsPreviewSound : 1; // 0x668(0x01)
	char UnknownData_669[0x3]; // 0x669(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x66c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x670(0x04)
	char UnknownData_674[0x4]; // 0x674(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x678(0x10)
	char UnknownData_688[0x20]; // 0x688(0x20)
	struct USynthSound* Synth; // 0x6a8(0x08)
	struct UAudioComponent* AudioComponent; // 0x6b0(0x08)
	char UnknownData_6B8[0x28]; // 0x6b8(0x28)

	void Stop(); // Function AudioMixer.SynthComponent.Stop
	void start(); // Function AudioMixer.SynthComponent.start
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : public UObject {
	char UnknownData_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x108 (Inherited: 0x40)
struct USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {
	char UnknownData_40[0x78]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xb8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0x88 (Inherited: 0x40)
struct USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {
	char UnknownData_40[0x38]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0xd0 (Inherited: 0x40)
struct USubmixEffectReverbPreset : public USoundEffectSubmixPreset {
	char UnknownData_40[0x5c]; // 0x40(0x5c)
	struct FSubmixEffectReverbSettings Settings; // 0x9c(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	void SetSettings(struct FSubmixEffectReverbSettings InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size: 0xd8 (Inherited: 0x40)
struct USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {
	char UnknownData_40[0x60]; // 0x40(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xa0(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
	void SetSettings(struct FSubmixEffectReverbFastSettings InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : public USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x08)
	char UnknownData_368[0x18]; // 0x368(0x18)
};

