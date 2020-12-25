// Enum Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t {
	NoMatchToRejoin,
	RejoinAvailable,
	UpdatingStatus,
	NeedsRecheck,
	NoMatchToRejoin_MatchEnded,
	ERejoinStatus_MAX,
};

