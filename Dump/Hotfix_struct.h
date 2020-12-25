// Enum Hotfix.EHotfixResult
enum class EHotfixResult : uint8_t {
	Failed,
	Success,
	SuccessNoChange,
	SuccessNeedsReload,
	SuccessNeedsRelaunch,
	EHotfixResult_MAX,
};

// Enum Hotfix.EPatchCheckResult
enum class EPatchCheckResult : uint8_t {
	NoPatchRequired,
	PatchRequired,
	NoLoggedInUser,
	PatchCheckFailure,
	EPatchCheckResult_MAX,
};

// Enum Hotfix.EUpdateCompletionStatus
enum class EUpdateCompletionStatus : uint8_t {
	UpdateUnknown,
	UpdateSuccess,
	UpdateSuccess_NoChange,
	UpdateSuccess_NeedsReload,
	UpdateSuccess_NeedsRelaunch,
	UpdateSuccess_NeedsPatch,
	UpdateFailure_PatchCheck,
	UpdateFailure_HotfixCheck,
	UpdateFailure_NotLoggedIn,
	EUpdateCompletionStatus_MAX,
};

// Enum Hotfix.EUpdateState
enum class EUpdateState : uint8_t {
	UpdateIdle,
	UpdatePending,
	CheckingForPatch,
	DetectingPlatformEnvironment,
	CheckingForHotfix,
	WaitingOnInitialLoad,
	InitialLoadComplete,
	UpdateComplete,
	EUpdateState_MAX,
};

