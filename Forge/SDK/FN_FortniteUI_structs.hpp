#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8_t
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6
};


// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8_t
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	Creative                       = 7,
	EFortBuildingInteraction_MAX   = 8
};


// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8_t
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3
};


// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	XXL                            = 6,
	EFortItemCardSize_MAX          = 7
};


// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8_t
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	InGame_Custom                  = 5,
	UNUSED                         = 6,
	InGame_STW                     = 7,
	Cinematic                      = 8,
	InGame_BR                      = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	AthenaReplay                   = 12,
	MAX                            = 13
};


// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8_t
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PurchaseOpen                   = 5,
	PackOpen                       = 6,
	CardEnter                      = 7,
	CardBackReveal                 = 8,
	CardFlip                       = 9,
	CardFrontReveal                = 10,
	CardExit                       = 11,
	SummaryAdd                     = 12,
	PackDestroy                    = 13,
	Summary                        = 14,
	PresentChoice                  = 15,
	ChoiceMade                     = 16,
	SummaryAddTransition           = 17,
	MAX_None                       = 18,
	EFortStoreState_MAX            = 19
};


// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8_t
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	AthenaWeaponFireCooldown       = 5,
	EFortItemCooldownType_MAX      = 6
};


// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8_t
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7
};


// Enum FortniteUI.ESpectatorPlayerListSortMethod
enum class ESpectatorPlayerListSortMethod : uint8_t
{
	SquadId                        = 0,
	PlayerName                     = 1,
	Eliminations                   = 2,
	EventScore                     = 3,
	State                          = 4,
	Count                          = 5,
	ESpectatorPlayerListSortMethod_MAX = 6
};


// Enum FortniteUI.EFortFrontEndFeatureStateReason
enum class EFortFrontEndFeatureStateReason : uint8_t
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7
};


// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4
};


// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8_t
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	STWArmory_Transform            = 9,
	STWArmory_CollectionBook       = 10,
	MAX_None                       = 11,
	EFortFrontEndFeature_MAX       = 12
};


// Enum FortniteUI.EFortUIFeatureStateReason
enum class EFortUIFeatureStateReason : uint8_t
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9
};


// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4
};


// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8_t
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowCommand                    = 2,
	ShowHeros                      = 3,
	ShowSquads                     = 4,
	ShowArmory                     = 5,
	ShowLocker                     = 6,
	ShowSkillTree                  = 7,
	ShowStore                      = 8,
	ShowQuests                     = 9,
	ShowMainStore                  = 10,
	ShowContextHelpMenu            = 11,
	ShowCampaign                   = 12,
	ShowActiveBoost                = 13,
	ShowJournal                    = 14,
	ShowPartyBar                   = 15,
	ShowChatWindow                 = 16,
	ShowFriendsMenu                = 17,
	ShowObjectives                 = 18,
	ShowRatingIconsInTopbar        = 19,
	ShowAntiAddictionMessage       = 20,
	ShowMinorShutdownMessage       = 21,
	ShowHealthWarningScreen        = 22,
	ShowSimplifiedHUD              = 23,
	LargeHeaderFooterButtons       = 24,
	ShowAthenaFavoriting           = 25,
	ShowAthenaItemRandomization    = 26,
	ShowAthenaChallenges           = 27,
	ShowBattlePass                 = 28,
	ShowNewBattlePass              = 29,
	ShowBattlePassFAQ              = 30,
	ShowReplays                    = 31,
	ShowProfileStatsUI             = 32,
	ShowAthenaItemShop             = 33,
	ShowShowdown                   = 34,
	ShowAccountBoosts              = 35,
	ShowCustomerSupport            = 36,
	ShowGlobalChat                 = 37,
	ShowEULA                       = 38,
	ShowEndOfZoneCinematic         = 39,
	ShowOnboardingCinematics       = 40,
	ShowFounderBannerIcons         = 41,
	ShowCurrentRegionInLobby       = 42,
	ShowPrerollLlamas              = 43,
	EnableFoundersDailyRewards     = 44,
	EnableTwitchIntegration        = 45,
	EnableMatchmakingRegionSetting = 46,
	EnableLanguageSetting          = 47,
	EnableFriendCodeSetting        = 48,
	EnableEarlyAccessLoadingScreenBanner = 49,
	EnableAlterationModifications  = 50,
	EnableSchematicRarityUpgrade   = 51,
	EnableMissionActivationVote    = 52,
	EnableLtmRetrieveTheData       = 53,
	EnableUpgradesVideos           = 54,
	Max_None                       = 55,
	EFortUIFeature_MAX             = 56
};


// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8_t
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2
};


// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8_t
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3
};


// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8_t
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4
};


// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason : uint8_t
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2
};


// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8_t
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	EItemRecyclingRestrictionReason_MAX = 5
};


// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8_t
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	HighTier                       = 2,
	CanSlotInCollectionBook        = 3,
	EItemRecyclingWarning_MAX      = 4
};


// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8_t
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3
};


// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8_t
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4
};


// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8_t
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3
};


// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8_t
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6
};


// Enum FortniteUI.EActivatePanelOption
enum class EActivatePanelOption : uint8_t
{
	Show                           = 0,
	Hide                           = 1,
	PlatformDefault                = 2,
	EActivatePanelOption_MAX       = 3
};


// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8_t
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5
};


// Enum FortniteUI.EFortCollectionBookPopupButtonType
enum class EFortCollectionBookPopupButtonType : uint8_t
{
	Invalid                        = 0,
	SelectItem                     = 1,
	Preview                        = 2,
	Purchase                       = 3,
	Unslot                         = 4,
	Back                           = 5,
	EFortCollectionBookPopupButtonType_MAX = 6
};


// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8_t
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2
};


// Enum FortniteUI.EViewerNavigationDirection
enum class EViewerNavigationDirection : uint8_t
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2
};


// Enum FortniteUI.EHeroLoadoutSlotType
enum class EHeroLoadoutSlotType : uint8_t
{
	CommanderSlot                  = 0,
	TeamPerkSlot                   = 1,
	CrewSlot                       = 2,
	GadgetSlot                     = 3,
	EHeroLoadoutSlotType_MAX       = 4
};


// Enum FortniteUI.ESquadSlotSortType
enum class ESquadSlotSortType : uint8_t
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5
};


// Enum FortniteUI.EBattleMapTimelineWidgetState
enum class EBattleMapTimelineWidgetState : uint8_t
{
	None                           = 0,
	HasNext                        = 1,
	HasPrevious                    = 2,
	IsInReplay                     = 3,
	CanBeScrubbed                  = 4,
	IsStreaming                    = 5,
	Invalid                        = 6,
	EBattleMapTimelineWidgetState_MAX = 7
};


// Enum FortniteUI.ECountdownDisplay
enum class ECountdownDisplay : uint8_t
{
	EventEndTime                   = 0,
	ChallengeUnlockTime            = 1,
	MAX                            = 2
};


// Enum FortniteUI.EChallengeInfoPage
enum class EChallengeInfoPage : uint8_t
{
	PartyAssist                    = 0,
	Daily                          = 1,
	Suggested                      = 2,
	EChallengeInfoPage_MAX         = 3
};


// Enum FortniteUI.EChallengeListSection
enum class EChallengeListSection : uint8_t
{
	SpecialOffers                  = 0,
	CompletionRewards              = 1,
	AllChallenges                  = 2,
	FreeChallenges                 = 3,
	PaidChallenges                 = 4,
	EChallengeListSection_MAX      = 5
};


// Enum FortniteUI.EEquippedWeaponDisplay
enum class EEquippedWeaponDisplay : uint8_t
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	EEquippedWeaponDisplay_MAX     = 4
};


// Enum FortniteUI.EAthenaEventMatchInfoSortMethod
enum class EAthenaEventMatchInfoSortMethod : uint8_t
{
	Eliminations                   = 0,
	Place                          = 1,
	Count                          = 2,
	EAthenaEventMatchInfoSortMethod_MAX = 3
};


// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8_t
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	NewZebulonDrone                = 3,
	NewZebulonDroneYou             = 4,
	EAthenaPlayerActionAlert_MAX   = 5
};


// Enum FortniteUI.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8_t
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3
};


// Enum FortniteUI.EFortMarkerActions
enum class EFortMarkerActions : uint8_t
{
	None                           = 0,
	Cancel                         = 1,
	Confirm                        = 2,
	EFortMarkerActions_MAX         = 3
};


// Enum FortniteUI.EHealthBarType
enum class EHealthBarType : uint8_t
{
	Health                         = 0,
	Shield                         = 1,
	Stamina                        = 2,
	VehicleHealth                  = 3,
	SignalInStorm                  = 4,
	EHealthBarType_MAX             = 5
};


// Enum FortniteUI.EAthenaSquadListUpdateType
enum class EAthenaSquadListUpdateType : uint8_t
{
	None                           = 0,
	CanResurrect                   = 1,
	FindResurrectChip              = 2,
	EAthenaSquadListUpdateType_MAX = 3
};


// Enum FortniteUI.ERespawnUIState
enum class ERespawnUIState : uint8_t
{
	Hidden                         = 0,
	ShowRespawnEnabled             = 1,
	ShowRespawnDisabled            = 2,
	ERespawnUIState_MAX            = 3
};


// Enum FortniteUI.ESpectatorBuildCountType
enum class ESpectatorBuildCountType : uint8_t
{
	BuildCount                     = 0,
	Wood                           = 1,
	Stone                          = 2,
	Metal                          = 3,
	ESpectatorBuildCountType_MAX   = 4
};


// Enum FortniteUI.ESpectatorMapPlayerListState
enum class ESpectatorMapPlayerListState : uint8_t
{
	Default                        = 0,
	Irrelevant                     = 1,
	Eliminated                     = 2,
	ESpectatorMapPlayerListState_MAX = 3
};


// Enum FortniteUI.EAthenaSpectatorNameplateDetailState
enum class EAthenaSpectatorNameplateDetailState : uint8_t
{
	High                           = 0,
	Low                            = 1,
	Arrow                          = 2,
	Off                            = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4
};


// Enum FortniteUI.EAthenaSpectatorNameplateDistanceState
enum class EAthenaSpectatorNameplateDistanceState : uint8_t
{
	Near                           = 0,
	MidDistance                    = 1,
	FurtherThanMaxDistance         = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3
};


// Enum FortniteUI.EStormSurgeThresholdType
enum class EStormSurgeThresholdType : uint8_t
{
	None                           = 0,
	Above                          = 1,
	Below                          = 2,
	Equal                          = 3,
	EStormSurgeThresholdType_MAX   = 4
};


// Enum FortniteUI.EComboSlotType
enum class EComboSlotType : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Combo                          = 2,
	Creative                       = 3,
	COUNT                          = 4,
	EComboSlotType_MAX             = 5
};


// Enum FortniteUI.EBacchusSignalQuality
enum class EBacchusSignalQuality : uint8_t
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBacchusSignalQuality_MAX      = 4
};


// Enum FortniteUI.EAthenaNewsStyle
enum class EAthenaNewsStyle : uint8_t
{
	None                           = 0,
	SpecialEvent                   = 1,
	EAthenaNewsStyle_MAX           = 2
};


// Enum FortniteUI.ESubGameFilter
enum class ESubGameFilter : uint8_t
{
	All                            = 0,
	SaveTheWorld                   = 1,
	BattleRoyale                   = 2,
	ESubGameFilter_MAX             = 3
};


// Enum FortniteUI.ESurvivalObjectiveIconState
enum class ESurvivalObjectiveIconState : uint8_t
{
	None                           = 0,
	Spawned                        = 1,
	Destroyed                      = 2,
	ESurvivalObjectiveIconState_MAX = 3
};


// Enum FortniteUI.EDiscoCaptureUIState
enum class EDiscoCaptureUIState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Dance                          = 2,
	Capturing                      = 3,
	Contested                      = 4,
	EDiscoCaptureUIState_MAX       = 5
};


// Enum FortniteUI.EDiscoScoreProgressTypes
enum class EDiscoScoreProgressTypes : uint8_t
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	EDiscoScoreProgressTypes_MAX   = 6
};


// Enum FortniteUI.EDiscoCaptureProgressState
enum class EDiscoCaptureProgressState : uint8_t
{
	None                           = 0,
	AllyProgress                   = 1,
	EnemyProgress                  = 2,
	EDiscoCaptureProgressState_MAX = 3
};


// Enum FortniteUI.EDiscoCaptureIconState
enum class EDiscoCaptureIconState : uint8_t
{
	None                           = 0,
	Hidden                         = 1,
	Neutral                        = 2,
	AllyCaptured                   = 3,
	EnemyCaptured                  = 4,
	EDiscoCaptureIconState_MAX     = 5
};


// Enum FortniteUI.EPlayerReportingStep
enum class EPlayerReportingStep : uint8_t
{
	ReportingReason                = 0,
	ReportingPlayer                = 1,
	Confirmation                   = 2,
	AdditionalInfo                 = 3,
	EPlayerReportingStep_MAX       = 4
};


// Enum FortniteUI.EFortAlterationOptionType
enum class EFortAlterationOptionType : uint8_t
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3
};


// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3
};


// Enum FortniteUI.EFillDisableReason
enum class EFillDisableReason : uint8_t
{
	Enabled                        = 0,
	FillDisabledOnPlaylist         = 1,
	NotPartyLeader                 = 2,
	AlreadyMatchmaking             = 3,
	PartyTooSmall                  = 4,
	PartyTooBig                    = 5,
	InactiveTournament             = 6,
	EFillDisableReason_MAX         = 7
};


// Enum FortniteUI.EServerAccessSetting
enum class EServerAccessSetting : uint8_t
{
	Invalid                        = 0,
	FriendsOfCurrentPlayers        = 1,
	LeaderInviteOnly               = 2,
	EServerAccessSetting_MAX       = 3
};


// Enum FortniteUI.ESpectatorQueueType
enum class ESpectatorQueueType : uint8_t
{
	Invalid                        = 0,
	Player                         = 1,
	Spectator                      = 2,
	ESpectatorQueueType_MAX        = 3
};


// Enum FortniteUI.ESquadFillSetting
enum class ESquadFillSetting : uint8_t
{
	Invalid                        = 0,
	Fill                           = 1,
	NoFill                         = 2,
	ESquadFillSetting_MAX          = 3
};


// Enum FortniteUI.EFortMemberConnectionState
enum class EFortMemberConnectionState : uint8_t
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Invalid                        = 3,
	EFortMemberConnectionState_MAX = 4
};


// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8_t
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3
};


// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8_t
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2
};


// Enum FortniteUI.EFortContentControlsSettingType
enum class EFortContentControlsSettingType : uint8_t
{
	AutoDeclineFriendRequests      = 0,
	FilterMatureLanguage           = 1,
	VoiceChat                      = 2,
	HideYourName                   = 3,
	HideOtherNames                 = 4,
	PlaytimeReporting              = 5,
	PurchaseReporting              = 6,
	TextChat                       = 7,
	InvalidOrMax                   = 8,
	EFortContentControlsSettingType_MAX = 9
};


// Enum FortniteUI.EFortCreativeIslandLinkCategory
enum class EFortCreativeIslandLinkCategory : uint8_t
{
	Default                        = 0,
	Favorite                       = 1,
	Published                      = 2,
	Recent                         = 3,
	EFortCreativeIslandLinkCategory_MAX = 4
};


// Enum FortniteUI.EFortCreativeIslandLinkValidationResult
enum class EFortCreativeIslandLinkValidationResult : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	IslandNotFound                 = 2,
	InvalidKeyTooShort             = 3,
	InvalidKeyTooLong              = 4,
	InvalidKeyCharacters           = 5,
	EFortCreativeIslandLinkValidationResult_MAX = 6
};


// Enum FortniteUI.EFortCreativeServerPrivacySetting
enum class EFortCreativeServerPrivacySetting : uint8_t
{
	Unknown                        = 0,
	Private                        = 1,
	Public                         = 2,
	EFortCreativeServerPrivacySetting_MAX = 3
};


// Enum FortniteUI.EFortDefenderSlotType
enum class EFortDefenderSlotType : uint8_t
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3
};


// Enum FortniteUI.EDynamicEntryPatternDirection
enum class EDynamicEntryPatternDirection : uint8_t
{
	FirstToLast                    = 0,
	LastToFirst                    = 1,
	EDynamicEntryPatternDirection_MAX = 2
};


// Enum FortniteUI.DateFormat
enum class EDateFormat : uint8_t
{
	CountdownTextual               = 0,
	CountdownNumeric               = 1,
	CountdownNumUnder12Hours       = 2,
	Date                           = 3,
	DateFormat_MAX                 = 4
};


// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8_t
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3
};


// Enum FortniteUI.EShareButtonType
enum class EShareButtonType : uint8_t
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EShareButtonType_MAX           = 3
};


// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8_t
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	EFrontEndRewardType_MAX        = 9
};


// Enum FortniteUI.EFortUIGameFeedbackType
enum class EFortUIGameFeedbackType : uint8_t
{
	Bug                            = 0,
	Comment                        = 1,
	Content                        = 2,
	EpicQABug                      = 3,
	EFortUIGameFeedbackType_MAX    = 4
};


// Enum FortniteUI.ESelectionState
enum class ESelectionState : uint8_t
{
	Unselected                     = 0,
	Selected                       = 1,
	CannotGift                     = 2,
	ESelectionState_MAX            = 3
};


// Enum FortniteUI.EFortHeroPerkDisplayType
enum class EFortHeroPerkDisplayType : uint8_t
{
	CommanderPerk                  = 0,
	TeamPerk                       = 1,
	ClassPerk                      = 2,
	StandardPerk                   = 3,
	Max_None                       = 4,
	EFortHeroPerkDisplayType_MAX   = 5
};


// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3
};


// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8_t
{
	NotVisible                     = 0,
	WaitingForOutpostOwner         = 1,
	ECenterPopupMessageStateEnum_MAX = 2
};


// Enum FortniteUI.EBuildingFocusType
enum class EBuildingFocusType : uint8_t
{
	Contextual                     = 0,
	Interactable                   = 1,
	Normal                         = 2,
	Count                          = 3,
	EBuildingFocusType_MAX         = 4
};


// Enum FortniteUI.EContextPositionPlatform
enum class EContextPositionPlatform : uint8_t
{
	NonMobile                      = 0,
	Mobile                         = 1,
	EContextPositionPlatform_MAX   = 2
};


// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8_t
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3
};


// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode : uint8_t
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	UpgradeRarity                  = 5,
	EFortItemInspectionMode_MAX    = 6
};


// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8_t
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3
};


// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8_t
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3
};


// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8_t
{
	None                           = 0,
	Minimap                        = 1,
	MAX                            = 2
};


// Enum FortniteUI.ELocalUserOnlineStatus
enum class ELocalUserOnlineStatus : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	ELocalUserOnlineStatus_MAX     = 6
};


// Enum FortniteUI.EFortLoginInteraction
enum class EFortLoginInteraction : uint8_t
{
	Begin                          = 0,
	PlayedBefore                   = 1,
	CredentialSelect               = 2,
	NamePassword                   = 3,
	RedirectEpicAccount            = 4,
	AccountNotFound                = 5,
	CreateDisplayName              = 6,
	MultiFactorAuth                = 7,
	EULA                           = 8,
	AccountLink                    = 9,
	AccountPinLink                 = 10,
	WebLogin                       = 11,
	WebAccountCreation             = 12,
	EFortLoginInteraction_MAX      = 13
};


// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8_t
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8_t
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2
};


// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5
};


// Enum FortniteUI.EFortMissionActivationWidgetState
enum class EFortMissionActivationWidgetState : uint8_t
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetState_MAX = 4
};


// Enum FortniteUI.EFortFortMobileShareButtonOS
enum class EFortFortMobileShareButtonOS : uint8_t
{
	Android                        = 0,
	iOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2
};


// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8_t
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4
};


// Enum FortniteUI.EFortMtxOfferDisplaySize
enum class EFortMtxOfferDisplaySize : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EFortMtxOfferDisplaySize_MAX   = 3
};


// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8_t
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Unknown                        = 2,
	Max_None                       = 3,
	EFortMtxStoreOfferType_MAX     = 4
};


// Enum FortniteUI.ESettingTab
enum class ESettingTab : uint8_t
{
	None                           = 0,
	Video                          = 1,
	Game                           = 2,
	Brightness                     = 3,
	Audio                          = 4,
	Accessibility                  = 5,
	Input                          = 6,
	Controller                     = 7,
	ControllerSensitivity          = 8,
	Account                        = 9,
	CreativeWorld                  = 10,
	CreativePlayer                 = 11,
	ESettingTab_MAX                = 12
};


// Enum FortniteUI.ESettingValueType
enum class ESettingValueType : uint8_t
{
	None                           = 0,
	Rotator                        = 1,
	Slider                         = 2,
	ESettingValueType_MAX          = 3
};


// Enum FortniteUI.ESettingType
enum class ESettingType : uint8_t
{
	None                           = 0,
	Header                         = 1,
	WindowMode                     = 2,
	DisplayResolution              = 3,
	FrameRateLimit                 = 4,
	VideoQuality                   = 5,
	ThreeDResolution               = 6,
	ViewDistance                   = 7,
	Shadows                        = 8,
	AntiAliasing                   = 9,
	Textures                       = 10,
	Effects                        = 11,
	PostProcessing                 = 12,
	VSync                          = 13,
	MotionBlur                     = 14,
	ShowGrass                      = 15,
	MobileFPSType                  = 16,
	ShowFPS                        = 17,
	AllowLowPower                  = 18,
	AllowVideoPlayback             = 19,
	AllowDynamicResolution         = 20,
	AllowMultithreadedRendering    = 21,
	RegionHeader                   = 22,
	Language                       = 23,
	Region                         = 24,
	MouseSensitivityYaw            = 25,
	MouseSensitivityPitch          = 26,
	MouseSensitivityMultiplierForAircraft = 27,
	TouchDragSensitivity           = 28,
	ControllerLookSensitivityYaw   = 29,
	ControllerLookSensitivityPitch = 30,
	MouseTargetingMultiplier       = 31,
	MouseScopedMultiplier          = 32,
	GamepadTargetingMultiplier     = 33,
	GamepadScopedMultiplier        = 34,
	GamepadBuildingMultiplier      = 35,
	GamepadEditModeMultiplier      = 36,
	TouchLookAccelerationMultiplier = 37,
	TouchDragTargetingSensitivity  = 38,
	TouchDragScopedSensitivity     = 39,
	TouchBuildingMultiplier        = 40,
	TouchEditModeMultiplier        = 41,
	TouchVerticalSensitivity       = 42,
	InvertPitch                    = 43,
	InvertYaw                      = 44,
	InvertPitchForMotion           = 45,
	InvertPitchForAircraftPrimary  = 46,
	InvertPitchForAircraftSecondary = 47,
	InvertYawForMotion             = 48,
	GyroEnabled                    = 49,
	GyroYawAxis                    = 50,
	GyroSensitivity                = 51,
	GyroTargetingSensitivity       = 52,
	GyroScopedSensitivity          = 53,
	GyroHarvestingToolSensitivity  = 54,
	SafeZone                       = 55,
	AnonymousMode                  = 56,
	AnonymousCharacterMode         = 57,
	HideOtherPlayerNames           = 58,
	HiddenMatchmakingDelay         = 59,
	AutoJoinGameVoiceChannel       = 60,
	ShowVoiceIndicators            = 61,
	HUDScale                       = 62,
	ShowViewerCount                = 63,
	FirstPersonCamera              = 64,
	PeripheralLighting             = 65,
	PingPlaceDangerMarkerWhenTargeting = 66,
	ShowGlobalChat                 = 67,
	ConsoleUnlockedFPS             = 68,
	ToggleSprint                   = 69,
	SprintByDefault                = 70,
	SprintCancelsReload            = 71,
	TapInteract                    = 72,
	ToggleTargeting                = 73,
	HoldToSwapPickup               = 74,
	AutoEquipBetterItems           = 75,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 76,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 77,
	AimAssist                      = 78,
	EditModeAimAssist              = 79,
	TouchEdit                      = 80,
	EditConfirmOnRelease           = 81,
	TurboBuild                     = 82,
	CreativeTurboDelete            = 83,
	AutoChangeMaterial             = 84,
	GamepadAutoRun                 = 85,
	CrossplayPreference            = 86,
	UseTapToShoot                  = 87,
	AutoOpenDoors                  = 88,
	AutoPickupWeapons              = 89,
	AutoPickupWeaponsConsolePC     = 90,
	AutoSortConsumablesToRight     = 91,
	EnableTryBuildOnFocus          = 92,
	EditButtonHoldTime             = 93,
	ShowHeadAccessories            = 94,
	ShowBackpack                   = 95,
	ForceFeedback                  = 96,
	ContextTutorial                = 97,
	ReplayRecording                = 98,
	ReplayRecordingLargeTeams      = 99,
	ReplayRecordingCreativeMode    = 100,
	UsePowerSavingMode             = 101,
	ShadowPlayHighlights           = 102,
	ShowTemperature                = 103,
	GammaValue                     = 104,
	MusicVolume                    = 105,
	SoundFXVolume                  = 106,
	DialogVolume                   = 107,
	VoiceChatVolume                = 108,
	CinematicsVolume               = 109,
	Subtitles                      = 110,
	Quality                        = 111,
	VoiceChat                      = 112,
	PushToTalk                     = 113,
	ProximityVoiceChat             = 114,
	VoiceChatInputDevice           = 115,
	VoiceChatOutputDevice          = 116,
	AllowBackgroundAudio           = 117,
	ColorBlindMode                 = 118,
	ColorBlindStrength             = 119,
	IgnoreGamepadInput             = 120,
	LockPrimaryInputMethodToMouse  = 121,
	EnableRudderControl            = 122,
	RudderDeadZone                 = 123,
	RudderMaxThrottle              = 124,
	VisualizeSoundEffects          = 125,
	VisualizeSoundEffectsHeader    = 126,
	MoveStickDeadZone              = 127,
	LookStickDeadZone              = 128,
	LookSensitivityPreset          = 129,
	LookSensitivityPresetAds       = 130,
	LookBuildModeMultiplier        = 131,
	LookEditModeMultiplier         = 132,
	UseAdvancedOptions             = 133,
	LookHorizontalSpeed            = 134,
	LookVerticalSpeed              = 135,
	LookHorizontalSpeedAds         = 136,
	LookVerticalSpeedAds           = 137,
	LookHorizontalBoostSpeed       = 138,
	LookVerticalBoostSpeed         = 139,
	LookBoostAccelerationTime      = 140,
	LookHorizontalBoostSpeedAds    = 141,
	LookVerticalBoostSpeedAds      = 142,
	LookBoostAccelerationTimeAds   = 143,
	InstantBoostWhenBuilding       = 144,
	LookEaseTime                   = 145,
	LookInputCurve                 = 146,
	AimAssistStrength              = 147,
	UseLegacyControls              = 148,
	PlayerSurveysAllowed           = 149,
	NotifyWhenPlaying              = 150,
	LocalNotifications             = 151,
	FireMode                       = 152,
	COUNT                          = 153,
	ESettingType_MAX               = 154
};


// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8_t
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3
};


// Enum FortniteUI.ESaveProfileForBanners
enum class ESaveProfileForBanners : uint8_t
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2
};


// Enum FortniteUI.EFortPlayerSurveyAggregateOp
enum class EFortPlayerSurveyAggregateOp : uint8_t
{
	Sum                            = 0,
	Max                            = 1
};


// Enum FortniteUI.EFortPlayerSurveyAthenaSeasonStat
enum class EFortPlayerSurveyAthenaSeasonStat : uint8_t
{
	XP                             = 0,
	Level                          = 1,
	BookXP                         = 2,
	BookLevel                      = 3,
	EFortPlayerSurveyAthenaSeasonStat_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType
enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType : uint8_t
{
	Unknown                        = 0,
	ChoiceButton                   = 1,
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataAggregateOp
enum class EFortPlayerSurveyCMSDataAggregateOp : uint8_t
{
	s                              = 0,
	mx                             = 1,
	EFortPlayerSurveyCMSDataAggregateOp_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataAthenaSeasonStat
enum class EFortPlayerSurveyCMSDataAthenaSeasonStat : uint8_t
{
	sx                             = 0,
	sl                             = 1,
	bx                             = 2,
	bl                             = 3,
	EFortPlayerSurveyCMSDataAthenaSeasonStat_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataBinaryComparisonOp
enum class EFortPlayerSurveyCMSDataBinaryComparisonOp : uint8_t
{
	e                              = 0,
	n                              = 1,
	l                              = 2,
	g                              = 3,
	le                             = 4,
	ge                             = 5,
	EFortPlayerSurveyCMSDataBinaryComparisonOp_MAX = 6
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataGameMode
enum class EFortPlayerSurveyCMSDataGameMode : uint8_t
{
	c                              = 0,
	a                              = 1,
	pc                             = 2,
	EFortPlayerSurveyCMSDataGameMode_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataGameplayTagQueryExprType
enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8_t
{
	n                              = 0,
	s                              = 1,
	a                              = 2,
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataPlaylistCategory
enum class EFortPlayerSurveyCMSDataPlaylistCategory : uint8_t
{
	a                              = 0,
	s                              = 1,
	d                              = 2,
	q                              = 3,
	lt                             = 4,
	c                              = 5,
	pl                             = 6,
	EFortPlayerSurveyCMSDataPlaylistCategory_MAX = 7
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataPresentationStyle
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8_t
{
	standard                       = 0,
	rating                         = 1,
	EFortPlayerSurveyCMSDataPresentationStyle_MAX = 2
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataQuestState
enum class EFortPlayerSurveyCMSDataQuestState : uint8_t
{
	i                              = 0,
	a                              = 1,
	co                             = 2,
	cl                             = 3,
	EFortPlayerSurveyCMSDataQuestState_MAX = 4
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataRelativeSurveyKeyType
enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType : uint8_t
{
	s                              = 0,
	a                              = 1,
	o                              = 2,
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType_MAX = 3
};


// Enum FortniteUI.EFortPlayerSurveyCMSDataTrigger
enum class EFortPlayerSurveyCMSDataTrigger : uint8_t
{
	rm                             = 0,
	EFortPlayerSurveyCMSDataTrigger_MAX = 1
};


// Enum FortniteUI.EFortPlayerSurveyPlaylistCategory
enum class EFortPlayerSurveyPlaylistCategory : uint8_t
{
	All                            = 0,
	Solo                           = 1,
	Duo                            = 2,
	Squad                          = 3,
	LTM                            = 4,
	Creative                       = 5,
	Playground                     = 6,
	EFortPlayerSurveyPlaylistCategory_MAX = 7
};


// Enum FortniteUI.EFortPlayerSurveyTrigger
enum class EFortPlayerSurveyTrigger : uint8_t
{
	Invalid                        = 0,
	Any                            = 1,
	ReturnToMainMenu               = 2,
	EFortPlayerSurveyTrigger_MAX   = 3
};


// Enum FortniteUI.EPurchaseReturnStep
enum class EPurchaseReturnStep : uint8_t
{
	ItemSelection                  = 0,
	ReasonSelection                = 1,
	FinalSubmission                = 2,
	EPurchaseReturnStep_MAX        = 3
};


// Enum FortniteUI.ECalloutNavigationDirection
enum class ECalloutNavigationDirection : uint8_t
{
	Previous                       = 0,
	Next                           = 1,
	ECalloutNavigationDirection_MAX = 2
};


// Enum FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8_t
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5
};


// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8_t
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4
};


// Enum FortniteUI.EFortSettingGameVisibility
enum class EFortSettingGameVisibility : uint8_t
{
	None                           = 0,
	Campaign                       = 1,
	Athena                         = 2,
	EFortSettingGameVisibility_MAX = 3
};


// Enum FortniteUI.EFortSettingPlatformVisibility
enum class EFortSettingPlatformVisibility : uint8_t
{
	None                           = 0,
	PC                             = 1,
	PS4                            = 2,
	XBoxOne                        = 3,
	Switch                         = 4,
	Mobile                         = 5,
	EFortSettingPlatformVisibility_MAX = 6
};


// Enum FortniteUI.EFortShowdownPinState
enum class EFortShowdownPinState : uint8_t
{
	None                           = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	EFortShowdownPinState_MAX      = 3
};


// Enum FortniteUI.EFortEventWindowEligibility
enum class EFortEventWindowEligibility : uint8_t
{
	Unknown                        = 0,
	Public                         = 1,
	Private                        = 2,
	Locked                         = 3,
	EFortEventWindowEligibility_MAX = 4
};


// Enum FortniteUI.EFortShowdownEventState
enum class EFortShowdownEventState : uint8_t
{
	Unknown                        = 0,
	FutureTBD                      = 1,
	FutureScheduled                = 2,
	FutureNext                     = 3,
	Live                           = 4,
	LiveParticipating              = 5,
	LiveNotParticipating           = 6,
	Completed                      = 7,
	CompletedParticipated          = 8,
	CompletedNotPartipated         = 9,
	Cancelled                      = 10,
	EFortShowdownEventState_MAX    = 11
};


// Enum FortniteUI.EFortShowdownMatchType
enum class EFortShowdownMatchType : uint8_t
{
	Unknown                        = 0,
	Solo                           = 1,
	Duos                           = 2,
	Squads                         = 3,
	EFortShowdownMatchType_MAX     = 4
};


// Enum FortniteUI.EFortDateTimeStyle
enum class EFortDateTimeStyle : uint8_t
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EFortDateTimeStyle_MAX         = 5
};


// Enum FortniteUI.ESocialImportPanelType
enum class ESocialImportPanelType : uint8_t
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2
};


// Enum FortniteUI.EFriendLinkShareButtonType
enum class EFriendLinkShareButtonType : uint8_t
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EFriendLinkShareButtonType_MAX = 3
};


// Enum FortniteUI.EListHeaderType
enum class EListHeaderType : uint8_t
{
	TeamMember                     = 0,
	PartyMember                    = 1,
	JoinableParty                  = 2,
	PlatformOnlineFriend           = 3,
	McpOnlineFriend                = 4,
	OfflineFriend                  = 5,
	Blocked                        = 6,
	VoiceChatMember                = 7,
	FriendInvite                   = 8,
	SuggestedFriend                = 9,
	RecentPlayer                   = 10,
	Invalid                        = 11,
	EListHeaderType_MAX            = 12
};


// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8_t
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	HeroAlreadyEquippedInLoadout   = 4,
	EFortSquadSlottingRestrictionReason_MAX = 5
};


// Enum FortniteUI.EPauseType
enum class EPauseType : uint8_t
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4
};


// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8_t
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5
};


// Enum FortniteUI.EFortStoreTransition
enum class EFortStoreTransition : uint8_t
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1
};


// Enum FortniteUI.EFortSubgameSelectOption
enum class EFortSubgameSelectOption : uint8_t
{
	Campaign                       = 0,
	Athena                         = 1,
	Creative                       = 2,
	Invalid                        = 3,
	Count                          = 4,
	EFortSubgameSelectOption_MAX   = 5
};


// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8_t
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4
};


// Enum FortniteUI.ETouchState
enum class ETouchState : uint8_t
{
	None                           = 0,
	WaitingForStart                = 1,
	Started                        = 2,
	Active                         = 3,
	COUNT                          = 4,
	ETouchState_MAX                = 5
};


// Enum FortniteUI.EFortControlType
enum class EFortControlType : uint8_t
{
	None                           = 0,
	CameraAndMovement              = 1,
	Picking                        = 2,
	COUNT                          = 3,
	EFortControlType_MAX           = 4
};


// Enum FortniteUI.EFortTouchControlRegion
enum class EFortTouchControlRegion : uint8_t
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4
};


// Enum FortniteUI.EEventTimeState
enum class EEventTimeState : uint8_t
{
	Unknown                        = 0,
	Completed                      = 1,
	Live                           = 2,
	Future                         = 3,
	EEventTimeState_MAX            = 4
};


// Enum FortniteUI.EFortNamedBundle
enum class EFortNamedBundle : uint8_t
{
	Menu                           = 0,
	MenuCampaign                   = 1,
	MenuAthena                     = 2,
	Zone                           = 3,
	ZoneCampaign                   = 4,
	ZoneAthena                     = 5,
	Client                         = 6,
	ClientCampaign                 = 7,
	ClientAthena                   = 8,
	EFortNamedBundle_MAX           = 9
};


// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior : uint8_t
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5
};


// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8_t
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9
};


// Enum FortniteUI.EFortLoginStage
enum class EFortLoginStage : uint8_t
{
	Begin                          = 0,
	SplashScreen                   = 1,
	UpdateCheck                    = 2,
	SignIn                         = 3,
	Benchmark                      = 4,
	RejoinCheck                    = 5,
	LoadingAthenaProfile           = 6,
	Complete                       = 7,
	EFortLoginStage_MAX            = 8
};


// Enum FortniteUI.EFortLoginDisplay
enum class EFortLoginDisplay : uint8_t
{
	LoginStatus                    = 0,
	SplashScreen                   = 1,
	SignIn                         = 2,
	EFortLoginDisplay_MAX          = 3
};


// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType : uint8_t
{
	None                           = 0,
	EpicAccount                    = 1,
	Facebook                       = 2,
	Google                         = 3,
	PSN                            = 4,
	XBLive                         = 5,
	Erebus                         = 6,
	EFortLoginAccountType_MAX      = 7
};


// Enum FortniteUI.EPlayerReportReasons
enum class EPlayerReportReasons : uint8_t
{
	None                           = 0,
	Communication                  = 1,
	Offensive                      = 2,
	AFK                            = 3,
	IgnoringObjective              = 4,
	Harassment                     = 5,
	Exploiting                     = 6,
	TradeScam                      = 7,
	CommunicationsAbuse            = 8,
	OffensiveName                  = 9,
	TeamingUpWithEnemies           = 10,
	InappropriateContent           = 11,
	ExploitingOrHacking            = 12,
	Harassment_Threatening         = 13,
	Harassment_Annoying            = 14,
	Harassment_Selling             = 15,
	Harassment_Verbal              = 16,
	Harassment_GameBehavior        = 17,
	EPlayerReportReasons_MAX       = 18
};


// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8_t
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4
};


// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8_t
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3
};


// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8_t
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3
};


// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8_t
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6
};


// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed : uint8_t
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3
};


// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8_t
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3
};


// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8_t
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2
};


// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8_t
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4
};


// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8_t
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2
};


// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8_t
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3
};


// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8_t
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4
};


// Enum FortniteUI.EFortToastType
enum class EFortToastType : uint8_t
{
	Default                        = 0,
	Subdued                        = 1,
	Impactful                      = 2,
	EFortToastType_MAX             = 3
};


// Enum FortniteUI.EUpgradeInfoImageSize
enum class EUpgradeInfoImageSize : uint8_t
{
	Small                          = 0,
	Large                          = 1,
	EUpgradeInfoImageSize_MAX      = 2
};


// Enum FortniteUI.EChannelSpeakerStyle
enum class EChannelSpeakerStyle : uint8_t
{
	InGame                         = 0,
	InLobby                        = 1,
	OutOfClient                    = 2,
	Max                            = 3
};


// Enum FortniteUI.ERadarIconState
enum class ERadarIconState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	ERadarIconState_MAX            = 2
};


// Enum FortniteUI.EHeistExitCraftIconState
enum class EHeistExitCraftIconState : uint8_t
{
	None                           = 0,
	Incoming                       = 1,
	Spawned                        = 2,
	Exited                         = 3,
	EHeistExitCraftIconState_MAX   = 4
};


// Enum FortniteUI.EHeistBlingIconState
enum class EHeistBlingIconState : uint8_t
{
	None                           = 0,
	SupplyDrop                     = 1,
	PickupItem                     = 2,
	CarriedEnemy                   = 3,
	CarriedAlly                    = 4,
	EHeistBlingIconState_MAX       = 5
};


// Enum FortniteUI.EHeistExitCraftUIState
enum class EHeistExitCraftUIState : uint8_t
{
	None                           = 0,
	OnTheWay                       = 1,
	Incoming                       = 2,
	Arrived                        = 3,
	EHeistExitCraftUIState_MAX     = 4
};


// Enum FortniteUI.EMatchmakingInputSource
enum class EMatchmakingInputSource : uint8_t
{
	Local                          = 0,
	Remote                         = 1,
	Pool                           = 2,
	EMatchmakingInputSource_MAX    = 3
};


// Enum FortniteUI.ESpectatorLeaderboardEntryType
enum class ESpectatorLeaderboardEntryType : uint8_t
{
	ScoreWithEndScore              = 0,
	NoEndScore                     = 1,
	Time                           = 2,
	Invalid                        = 3,
	ESpectatorLeaderboardEntryType_MAX = 4
};


// Enum FortniteUI.EMinigameCaptureObjectiveIconState
enum class EMinigameCaptureObjectiveIconState : uint8_t
{
	NotCaptured                    = 0,
	Captured                       = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2
};


// Enum FortniteUI.ECooldownTrackingType
enum class ECooldownTrackingType : uint8_t
{
	Cue                            = 0,
	AbilityCooldownTags            = 1,
	COUNT                          = 2,
	ECooldownTrackingType_MAX      = 3
};


// Enum FortniteUI.ETDMScoreProgressTypes
enum class ETDMScoreProgressTypes : uint8_t
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	ETDMScoreProgressTypes_MAX     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortniteUI.ContentPushState
// 0x0003
struct FContentPushState
{
	bool                                               bHideHeader;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideFooter;                                              // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideChatWidget;                                          // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.MutatorAddedWidgets
// 0x0010
struct FMutatorAddedWidgets
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.TimerDisplayData
// 0x0038
struct FTimerDisplayData
{
	struct FLinearColor                                BrushColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TimeRemainingDisplayText;                                 // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DetailClassEntry
// 0x0010
struct FDetailClassEntry
{
	struct FGameplayTag                                IdentifierTag;                                            // 0x0000(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      DetailsWidgetClass;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
// 0x000C
struct FAthenaChallengeListVisualOptions
{
	bool                                               bHideHeaders;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideCompletionRewards;                                   // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideQuestRewards;                                        // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCompactActionInfo;                                    // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideLockedQuests;                                        // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideCompletedQuests;                                     // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowOnlyCurentBundleLevelChallenges;                     // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSortCompletedToEnd;                                      // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewBundleLevel;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// 0x00A0
struct FFortTabButtonLabelInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 IconBrush;                                                // 0x0018(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// 0x0028 (0x00C8 - 0x00A0)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowEmptySlotItem;                                      // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	struct FText                                       EmptyFilterDisplay;                                       // 0x00B0(0x0018) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortHUDState
// 0x0014
struct FFortHUDState
{
	bool                                               bInBuildMode;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInCombatMode;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInEditMode;                                              // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInCreativeMode;                                          // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsParachuteOpen;                                         // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFreeFalling;                                           // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInLockedBus;                                             // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInUnlockedBus;                                           // 0x0007(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnTargeting;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnUsingScopeTargeting;                                   // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnCanTarget;                                             // 0x000A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnCanUseScopeTargeting;                                  // 0x000B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnCanUseSecondaryAbility;                                // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanOpenChute;                                            // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCrouching;                                               // 0x000E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDBNO;                                                    // 0x000F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsControllingRCPawn;                                     // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInVehicle;                                             // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDrivingVehicle;                                        // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSwapSeats;                                            // 0x0013(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaWinnerInfo
// 0x0020
struct FAthenaWinnerInfo
{
	struct FString                                     BigNameWinnerName;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             WinnerNames;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaCustomizationParams
// 0x0048
struct FAthenaCustomizationParams
{
	EAthenaCustomizationCategory                       Category;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CategorySubslotIndex;                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CategoryDisplayName;                                      // 0x0008(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ItemDisplayTypeName;                                      // 0x0020(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bAllowUnownedItems;                                       // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOneItemPerSlot;                                          // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	class UMaterialInstance*                           OverrideSlotImage;                                        // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.LeaderboardFilter
// 0x0028
struct FLeaderboardFilter
{
	class UDataTable*                                  LeaderboardDisplayData;                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
// 0x0050
struct FAthenaPlaylistLeaderboardData
{
	struct FName                                       StatId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       StatDisplayName;                                          // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TabDisplayName;                                           // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     BaseGameplayTag;                                          // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGlobal;                                                // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortResurrectionUIData
// 0x0003
struct FFortResurrectionUIData
{
	bool                                               bResurrectionChipAvailable;                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResurrectionChipPickedUp;                                // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResurrectionChipRebooting;                               // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaPostGameScreenArrayData
// 0x0008
struct FAthenaPostGameScreenArrayData
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIStatStyle
// 0x00C0
struct FFortUIStatStyle
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       HighestText;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Icon;                                                     // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	ECommonNumericType                                 NumericType;                                              // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	float                                              MinimalNotableValue;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.StatGroupData
// 0x00B0
struct FStatGroupData
{
	struct FText                                       GroupName;                                                // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Group;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChartValue;                                               // 0x00A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChartOrigionalValue;                                      // 0x00A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaReplayBrowserMatchStats
// 0x0028
struct FAthenaReplayBrowserMatchStats
{
	int                                                Hits;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Headshots;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Revives;                                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageTaken;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamagePlayers;                                            // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageStructures;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChestsOpened;                                             // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Distance;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialsGathered;                                        // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialsUsed;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
// 0x0090
struct FAthenaReplayBrowserRowData
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   Date;                                                     // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Version;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                     // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Mode;                                                     // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Rank;                                                     // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPlayers;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Kills;                                                    // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Views;                                                    // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Assists;                                                  // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Accuracy;                                                 // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOld;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FAthenaReplayBrowserMatchStats              MatchStats;                                               // 0x0050(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsSaved;                                                 // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCorrupt;                                               // 0x0079(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFeatured;                                              // 0x007A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x15];                                      // 0x007B(0x0015) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
// 0x0088
struct FAthenaTeamDisplayInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaTeamDisplayInfo.Icon
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.AthenaTeamDisplayInfo.Ribbon
	struct FText                                       Name;                                                     // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                TextColor;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PedestalColor;                                            // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.MarkerLargeIndicatorType
// 0x0010
struct FMarkerLargeIndicatorType
{
	class UMaterialInterface*                          MarkerMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ImageSize;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaTeamCountSlotData
// 0x0038
struct FAthenaTeamCountSlotData
{
	struct FText                                       TeamNameText;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       TeamCountText;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsMyTeam;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
// 0x00B0
struct FFortTopBarTabButtonInfo
{
	struct FName                                       TabId;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 IconBrush;                                                // 0x0020(0x0088) (Edit, NativeAccessSpecifierPublic)
	EFortUIFeature                                     LinkedUIFeature;                                          // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBangType                                      BangType;                                                 // 0x00A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.BackgroundColors
// 0x0030
struct FBackgroundColors
{
	struct FLinearColor                                Color_0_1;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color_1_2;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                GridColor;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.BarrierObjectState
// 0x0010
struct FBarrierObjectState
{
	class AAthenaBarrierObjective*                     ObjectiveActor;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TeamNum;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBarrierFoodTeam                                   FoodTeam;                                                 // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBarrierObjectiveDamageState                       DamageState;                                              // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaBossHealthData
// 0x0030
struct FAthenaBossHealthData
{
	bool                                               bVisible;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowShields;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Health;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealthMax;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Shields;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShieldsMax;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaNewsData
// 0x0070
struct FAthenaNewsData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     Image;                                                    // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     _type;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       AdSpace;                                                  // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               SpotLight;                                                // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Hidden;                                                   // 0x0069(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	ESubGameFilter                                     SubGameFilter;                                            // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
};

// ScriptStruct FortniteUI.AthenaNewsPlatformData
// 0x0090
struct FAthenaNewsPlatformData
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsData                             Message;                                                  // 0x0010(0x0070) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     _type;                                                    // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaNewsMessages
// 0x0030
struct FAthenaNewsMessages
{
	TArray<struct FAthenaNewsData>                     messages;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAthenaNewsPlatformData>             platform_messages;                                        // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     _type;                                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaNewsSource
// 0x0050
struct FAthenaNewsSource
{
	struct FString                                     Header;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsMessages                         news;                                                     // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     _locale;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ShowdownTournamentData
// 0x01C8
struct FShowdownTournamentData
{
	struct FString                                     Tournament_Display_Id;                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title_Line_1_2;                                           // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Title_Line_2_3;                                           // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Schedule_Info;                                            // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     Poster_Front_Image;                                       // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Poster_Back_Image;                                        // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Flavor_Description;                                       // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Details_Description;                                      // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Short_Format_Title;                                       // 0x00A8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Long_Format_Title;                                        // 0x00C0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Pin_Score_Requirement;                                    // 0x00D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FText                                       Pin_Earned_Text;                                          // 0x00E0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                Base_Color;                                               // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Primary_Color;                                            // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Secondary_Color;                                          // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Highlight_Color;                                          // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Title_Color;                                              // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Shadow_Color;                                             // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Background_Left_Color;                                    // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Background_Right_Color;                                   // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Background_Text_Color;                                    // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Poster_Fade_Color;                                        // 0x0188(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Playlist_Tile_Image;                                      // 0x0198(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Loading_Screen_Image;                                     // 0x01A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Style_Info_Id;                                            // 0x01B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
// 0x0010
struct FShowdownTournamentJsonObject
{
	TArray<struct FShowdownTournamentData>             Tournaments;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ShowdownTournamentSource
// 0x0030
struct FShowdownTournamentSource
{
	struct FShowdownTournamentJsonObject               Tournament_Info;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     _title;                                                   // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     _locale;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.KoreanCafeData
// 0x0038
struct FKoreanCafeData
{
	struct FGameplayTag                                Korean_Cafe;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Korean_Cafe_Header;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Korean_Cafe_Description;                                  // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.KoreanCafeJsonObject
// 0x0010
struct FKoreanCafeJsonObject
{
	TArray<struct FKoreanCafeData>                     Cafes;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.KoreanCafeSource
// 0x0030
struct FKoreanCafeSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKoreanCafeJsonObject                       Cafe_Info;                                                // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SubgameDisplayData
// 0x0098
struct FSubgameDisplayData
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       SpecialMessage;                                           // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       StandardMessageLine1;                                     // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       StandardMessageLine2;                                     // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     Image;                                                    // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SubgameScreenSource
// 0x01E8
struct FSubgameScreenSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                         Creative;                                                 // 0x0020(0x0098) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                         SaveTheWorld;                                             // 0x00B8(0x0098) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                         BattleRoyale;                                             // 0x0150(0x0098) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CreativeAdData
// 0x0068
struct FCreativeAdData
{
	struct FString                                     Header;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Sub_Header;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                              // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Creator_Name;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Island_Code;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortCreativeAdType                                Ad_Type;                                                  // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortCreativeAdColorPreset                         Ad_Color_Preset;                                          // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	struct FString                                     Image;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CreativeAdJsonObject
// 0x0010
struct FCreativeAdJsonObject
{
	TArray<struct FCreativeAdData>                     Ads;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CreativeAdSource
// 0x0030
struct FCreativeAdSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreativeAdJsonObject                       Ad_Info;                                                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CmsJsonMessages
// 0x02E8
struct FCmsJsonMessages
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     _locale;                                                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsSource                           BattleRoyaleNews;                                         // 0x0020(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FShowdownTournamentSource                   TournamentInformation;                                    // 0x0070(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKoreanCafeSource                           KoreanCafe;                                               // 0x00A0(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameScreenSource                        SubGameInfo;                                              // 0x00D0(0x01E8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCreativeAdSource                           CreativeAds;                                              // 0x02B8(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaNews
// 0x0028
struct FAthenaNews
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.AthenaNewsEntry
// 0x0058
struct FAthenaNewsEntry
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct FortniteUI.DynamicBackground
// 0x0048
struct FDynamicBackground
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDynamicBackgroudKey                               Key;                                                      // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     BackgroundImage;                                          // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Stage;                                                    // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DynamicBackgrounds
// 0x0010
struct FDynamicBackgrounds
{
	TArray<struct FDynamicBackground>                  Backgrounds;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DynamicBackgroundsSource
// 0x0040
struct FDynamicBackgroundsSource
{
	struct FString                                     _title;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     __locale;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastModified;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicBackgrounds                         Backgrounds;                                              // 0x0030(0x0010) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SurvivalObjectiveText
// 0x0010
struct FSurvivalObjectiveText
{
	TArray<struct FString>                             SafezoneStateText;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SurvivalObjectiveIconData
// 0x0010
struct FSurvivalObjectiveIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESurvivalObjectiveIconState                        IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ESurvivalObjectiveIconState                        PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FName                                       SpecialActorID;                                           // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DiscoCaptureUIData
// 0x0040
struct FDiscoCaptureUIData
{
	EDiscoCaptureUIState                               CurrDisplayState;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawnAthena*                       CurrPawn;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*                    CurrMID;                                                  // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FillAmount;                                               // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DiscoCaptureIconData
// 0x0010
struct FDiscoCaptureIconData
{
	EDiscoCaptureIconState                             CurrIconState;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDiscoCaptureProgressState                         CurrProgressState;                                        // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              CurrCapturePercent;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAthenaCapturePoint*                         CapturePoint;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.DiscoTeamScoreData
// 0x0020
struct FDiscoTeamScoreData
{
	struct FText                                       CurrScoreText;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              CurrScorePercent;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrScore;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PlatformOverrides
// 0x0038
struct FPlatformOverrides
{
	bool                                               DisplayOnPlatform;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       PlatformDisplayText;                                      // 0x0008(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       PlatformHoverText;                                        // 0x0020(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SliderSettings
// 0x0020
struct FSliderSettings
{
	int                                                MinIntegralDigits;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxIntegralDigits;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFractionalDigits;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxFractionalDigits;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSensitivityValue;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSensitivityValue;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                             // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.SettingData
// 0x0198
struct FSettingData
{
	ESettingType                                       SettingType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      SettingWidgetType;                                        // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayText;                                              // 0x0010(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       HoverText;                                                // 0x0028(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                          PlatformPCOverrides;                                      // 0x0040(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                          PlatformXboxOverrides;                                    // 0x0078(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                          PlatformPS4Overrides;                                     // 0x00B0(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                          PlatformSwitchOverrides;                                  // 0x00E8(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                          PlatformMobileOverrides;                                  // 0x0120(0x0038) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<ESubGame>                                   HiddenModes;                                              // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSliderSettings                             SliderSettings;                                           // 0x0168(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0188(0x0010) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaPlaylistEntry
// 0x0078
struct FAthenaPlaylistEntry
{
	struct FString                                     PlaylistName;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplaySubName;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Violator;                                                 // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Image;                                                    // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ExtraImages;                                              // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                CropOffset;                                               // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortMatchmakingTileStyle                          SpecialBorderId;                                          // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRevealAnimation;                                     // 0x0075(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// 0x0070
struct FFortDisplayAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Label;                                                    // 0x0020(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Value;                                                    // 0x0038(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       HoverText;                                                // 0x0050(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              NumericValue;                                             // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x006C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBuffState                                     BuffState;                                                // 0x006D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortClampState                                    ClampState;                                               // 0x006E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortComparisonType                                ComparisonType;                                           // 0x006F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortStateStyle
// 0x0350
struct FFortStateStyle
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0000(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                PrimaryColor;                                             // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryColor;                                           // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
// 0x0020
struct FFortBattlePassVideoAnnotation
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScreenPosition;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryAngle;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EntryMagnitude;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         RewardItemDefinition;                                     // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// 0x0070
struct FFortSwipeDetector
{
	struct FVector2D                                   SwipeThreshold;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct FortniteUI.CachedIslandsGroup
// 0x0028
struct FCachedIslandsGroup
{
	TArray<class UFortCreativeIslandLink*>             IslandLinks;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemListCategoryArray
// 0x0028
struct FItemListCategoryArray
{
	TArray<struct FFortItemEntry>                      ItemList;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       CategoryTitle;                                            // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemListOptionBucket
// 0x0020
struct FFortItemListOptionBucket
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                ItemIndex;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class UFortItemListOptionProxy*>            ItemOptionData;                                           // 0x0010(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.OptionsReleaseInfo
// 0x0008
struct FOptionsReleaseInfo
{
	ESettingType                                       SettingType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ReleaseVersion;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.RarityArray
// 0x0010
struct FRarityArray
{
	TArray<class UFortItemDefinition*>                 Items;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortDailyRewardsItemData
// 0x0010
struct FFortDailyRewardsItemData
{
	class UFortItem*                                   RewardItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RewardDay;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCurrentReward;                                          // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsClaimed;                                                // 0x000D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
// 0x0098
struct FFortDailyRewardsScheduleData
{
	struct FText                                       ScheduleTitle;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ScheduleDescription;                                      // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ScheduleItemDescription;                                  // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ScheduleEpicItemDescription;                              // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                WeekOffset;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RewardsGiven;                                             // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RewardsAllowed;                                           // 0x0068(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FFortDailyRewardsItemData>           CalendarItems;                                            // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortDailyRewardsItemData>           HighValueItems;                                           // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ClaimedToday;                                             // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// 0x0018
struct FFortDailyRewardsData
{
	int                                                CurrentLoginDays;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanClaim;                                                // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	TArray<struct FFortDailyRewardsScheduleData>       Schedules;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortTournamentDisplayInfo
// 0x0168 (0x0170 - 0x0008)
struct FFortTournamentDisplayInfo : public FTableRowBase
{
	struct FText                                       TitleLine1;                                               // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TitleLine2;                                               // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ScheduleInfo;                                             // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       FlavorDescription;                                        // 0x0050(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DetailsDescription;                                       // 0x0068(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ShortFormatTitle;                                         // 0x0080(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       LongFormatTitle;                                          // 0x0098(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                PinScoreRequirement;                                      // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FText                                       PinEarnedText;                                            // 0x00B8(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                                BaseColor;                                                // 0x00D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PrimaryColor;                                             // 0x00E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryColor;                                           // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HighlightColor;                                           // 0x0100(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TitleColor;                                               // 0x0110(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                              // 0x0120(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundLeftColor;                                      // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundRightColor;                                     // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundTextColor;                                      // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PosterFadeColor;                                          // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ShowdownTournamentEntry
// 0x0188
struct FShowdownTournamentEntry
{
	struct FString                                     TournamentDisplayId;                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleLine1;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleLine2;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScheduleInfo;                                             // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PosterFrontImage;                                         // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PosterBackImage;                                          // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FlavorDescription;                                        // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DetailsDescription;                                       // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ShortFormatTitle;                                         // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LongFormatTitle;                                          // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PinScoreRequirement;                                      // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FString                                     PinEarnedText;                                            // 0x00A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BaseColor;                                                // 0x00B8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrimaryColor;                                             // 0x00C8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondaryColor;                                           // 0x00D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HighlightColor;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TitleColor;                                               // 0x00F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ShadowColor;                                              // 0x0108(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BackgroundLeftColor;                                      // 0x0118(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BackgroundRightColor;                                     // 0x0128(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BackgroundTextColor;                                      // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PosterFadeColor;                                          // 0x0148(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlaylistTileImage;                                        // 0x0158(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoadingScreenImage;                                       // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StyleInfoId;                                              // 0x0178(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
// 0x0018
struct FFortShowdownEventBestResultsSummary
{
	int                                                TotalScore;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchesPlayed;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumVictoryRoyales;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlacementPoints;                                          // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EliminationPoints;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EntryFeePoints;                                           // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortErrorInfo
// 0x0070
struct FFortErrorInfo
{
	struct FText                                       Operation;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                             // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     ErrorCode;                                                // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortErrorSeverity                                 ErrorSeverity;                                            // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FText                                       ContinueButtonText;                                       // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0060(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.ExpeditionTabInfo
// 0x00A8
struct FExpeditionTabInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0008(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// 0x0018
struct FFortFrontEndFeatureStruct
{
	EFortFrontEndFeatureState                          CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortFrontEndFeatureState                          ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortFrontEndFeatureStateReason                    ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0003(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortFrontEndFeatureStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
// 0x0028
struct FUnlockableVariantPreviewInfo
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SetNumber;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SetCount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       UnlockCondition;                                          // 0x0010(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// 0x00B0
struct FFortMissionRewardInfo
{
	struct FSlateBrush                                 Icon;                                                     // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DisplayName;                                              // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                                   Item;                                                     // 0x00A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMissionAlertReward;                                    // 0x00A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMissionDetails
// 0x0170
struct FFortMissionDetails
{
	EFortTheaterMapTileType                            TileType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MissionName;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MissionDescription;                                       // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsGroupContent;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	class UFortMissionGenerator*                       MissionDefinition;                                        // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ZoneName;                                                 // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ZoneDescription;                                          // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       RegionThemeName;                                          // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortMissionDetails.RegionThemeIcon
	struct FText                                       DifficultyName;                                           // 0x00D0(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRewardInfo>              MissionRewards;                                           // 0x00E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                                   AvailableTime;                                            // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERatingsEnforcementType                            RatingsEnforcement;                                       // 0x0100(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                RequiredBaseRating;                                       // 0x0104(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecommendedBaseRating;                                    // 0x0108(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxBaseRating;                                            // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ContentDifficultyLevel;                                   // 0x0110(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnboarding;                                            // 0x0114(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	int                                                LootLevel;                                                // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideConningText;                                     // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FText                                       ConningOverrideText;                                      // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     TheaterUniqueId;                                          // 0x0138(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCloudSaveItemDefinition*                AssociatedCloudSaveItemDefinition;                        // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                        // 0x0150(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Objectives;                                               // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortActionBeingUnbound
// 0x000C
struct FFortActionBeingUnbound
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InputIndex;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.GiftingErrorText
// 0x0038
struct FGiftingErrorText
{
	EOfferPurchaseError                                GiftingError;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ErrorTitle;                                               // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       ErrorDesc;                                                // 0x0020(0x0018) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// 0x0018
struct FFortUIFeatureStruct
{
	EFortUIFeatureState                                CurrentState;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortUIFeatureState                                ForcedState;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortUIFeatureStateReason                          ForcedStateReason;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0003(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortUIFeatureStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.FortBackendVersion
// 0x0098
struct FFortBackendVersion
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     App;                                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ModuleName;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Branch;                                                   // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BuildDate;                                                // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerDate;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Build;                                                    // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Changelist;                                               // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverridePropertiesVersion;                                // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Version;                                                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortLastMissionInfo
// 0x0048
struct FFortLastMissionInfo
{
	struct FText                                       TheaterName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MissionName;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Difficulty;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortInGamePerkDisplayData
// 0x0010
struct FFortInGamePerkDisplayData
{
	EFortHeroPerkDisplayType                           PerkDisplayType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Row;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// 0x00A8
struct FFortAttributeModifierDisplayData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayModOp>                        ModifierType;                                             // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0028(0x0040) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0068(0x0040) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// 0x0050
struct FFortFocusedBuildingInfo
{
	bool                                               bIsInteractable;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBePlayerEdited;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     IndicatorRelativeLocation;                                // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBuildingHealthDisplayRule                     HealthDisplayRule;                                        // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MaxHealth;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAnyTrapAttached;                                       // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTrapAttachedFacingPlayer;                              // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPreviewTrapAttached;                                   // 0x001A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              AttachedTrapMaxDurability;                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentLevel;                                             // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBuildingInteraction                           InteractionType;                                          // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                InteractionCost;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpgradeBonus;                                             // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EFortResourceType>                     BuildingMaterial;                                         // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHostile;                                               // 0x0031(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FText                                       ContextualText;                                           // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemDelta
// 0x0010
struct FFortItemDelta
{
	class UFortItemDefinition*                         ItemDefinition;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BaseAmount;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeltaAmount;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// 0x0390
struct FFortBasicMissionInfo
{
	struct FText                                       MissionName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                         MissionIcons;                                             // 0x0018(0x0330) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       TheaterName;                                              // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       DifficultyName;                                           // 0x0360(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                                EndOfMissionMediaSource;                                  // 0x0378(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                EndOfMissionMediaSourceStreamed;                          // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSkipEndOfMissionVideo;                                   // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGroupContent;                                          // 0x0389(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.ContextPosition
// 0x0010
struct FContextPosition
{
	EContextPositionPlatform                           Platform;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   Position;                                                 // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemListFilter
// 0x0018
struct FFortItemListFilter
{
	struct FString                                     SearchText;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortInventoryFilter                               FilterType;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInStorageVault;                                          // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeVaultOverflow;                                    // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIPerk
// 0x0098
struct FFortUIPerk
{
	struct FFortSpecializationSlot                     SpecializationSlot;                                       // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortHero*                                   Hero;                                                     // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortItemTier                                      Tier;                                                     // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortSupportBonusType                              SupportBonusType;                                         // 0x0091(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsTierPerk;                                              // 0x0092(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUpgrade;                                               // 0x0093(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEvolution;                                             // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEvolutionBranch;                                       // 0x0095(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0096(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// 0x0050
struct FFortItemSorterDefinition
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// 0x0060
struct FFortItemFilterDefinition
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemListViewConfig
// 0x00C0
struct FFortItemListViewConfig
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// 0x0008 (0x00A8 - 0x00A0)
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// 0x0008
struct FFortItemEntryPreviewData
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortItemInspectionMode                            InspectMode;                                              // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortReceivedItemLootInfo
// 0x0028
struct FFortReceivedItemLootInfo
{
	class UFortItemDefinition*                         ItemDef;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     TemplateId;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                                   GeneratedItemInstance;                                    // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.MeasuredText
// 0x0028
struct FMeasuredText
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct FortniteUI.OfferGroup
// 0x0018
struct FOfferGroup
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNumberToShow;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMtxGradient
// 0x0020
struct FFortMtxGradient
{
	struct FLinearColor                                Start;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Stop;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.BundledItemInfo
// 0x0018
struct FBundledItemInfo
{
	struct FString                                     TemplateId;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOwned;                                                   // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// 0x0030
struct FFortMtxDetailsAttribute
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// 0x003C
struct FFortMaterialProgressBarSectionStyle
{
	bool                                               bGradientBar;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       BarParamName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BarColorOneParamName;                                     // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BarColorTwoParamName;                                     // 0x0014(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BarColorOne;                                              // 0x001C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BarColorTwo;                                              // 0x002C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// 0x0040
struct FFortMaterialProgressBarSectionInfo
{
	struct FFortMaterialProgressBarSectionStyle        SectionStyle;                                             // 0x0000(0x003C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Percent;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortMobileContextFilter
// 0x0040
struct FFortMobileContextFilter
{
	struct FGameplayTagContainer                       ShownInContexts;                                          // 0x0000(0x0020) (Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       HiddenInContexts;                                         // 0x0020(0x0020) (Edit, NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteUI.FortMobileActionButtonLayout
// 0x0030
struct FFortMobileActionButtonLayout
{
	struct FAnchorData                                 LayoutData;                                               // 0x0000(0x0028) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              ButtonSize;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ButtonDisplayScale;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteUI.FortMobileActionButtonSchema
// 0x0038
struct FFortMobileActionButtonSchema
{
	class UClass*                                      ButtonBehaviorClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortMobileActionButtonLayout               ButtonLayout;                                             // 0x0008(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct FortniteUI.StateWidgetEntry
// 0x0030
struct FStateWidgetEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.StateWidgetEntry.Class
	EFortNamedBundle                                   Bundle;                                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// 0x0050
struct FFortItemCard_PowerRatingBlock_Configuration
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FMargin                                     CustomRatingInternalPadding;                              // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   CustomRatingIconSize;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_Configuration.CustomRatingTextStyle
	struct FVector2D                                   ComparisonIndicatorSize;                                  // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
// 0x0160 (0x01B0 - 0x0050)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PersonnelPowerRatingIconBrush;                            // 0x0050(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.PersonnelPowerRatingTextStyle
	struct FSlateBrush                                 SchematicPowerRatingIconBrush;                            // 0x0100(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0188(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.SchematicPowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// 0x0098
struct FFortItemCard_NameplateBorder_Configuration
{
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush;                                                    // 0x0010(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// 0x0008
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
	struct FVector2D                                   IconConstraints;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// 0x0014
struct FFortItemCard_DetailAreaBorder_Configuration
{
	float                                              MinimumHeight;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                  // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// 0x000C
struct FFortItemCard_TierMeter_Configuration
{
	struct FVector2D                                   PipSize;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterPipPadding;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// 0x0350
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ItemNameTextStyle
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenIconSlots;                                  // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x029C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x02A4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x02AC(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RarityNameTextLeftPadding;                                // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x02C4(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.RarityNameTextStyle
	float                                              ClassIconImageLeftPadding;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ClassIconSize;                                            // 0x02F4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenClassIconAndName;                           // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0300(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration.ClassNameTextStyle
	float                                              TierMeterLeftPadding;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x032C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     IconSlotOverNameplatePadding;                             // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   IconSlotOverNameplateSize;                                // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
// 0x00B0 (0x0100 - 0x0050)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
	struct FSlateBrush                                 PowerRatingIconBrush;                                     // 0x0050(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration.PowerRatingTextStyle
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// 0x0030
struct FFortItemCard_StackCountBlock_Configuration
{
	bool                                               bShowShorthandStackCount;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty FortniteUI.FortItemCard_StackCountBlock_Configuration.TextStyle
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// 0x0014
struct FFortItemCard_DurabilityMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_XL_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XL_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// 0x0014
struct FFortItemCard_LevelMeter_Configuration
{
	float                                              MeterThickness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     MeterPadding;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_L_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
// 0x0048
struct FFortItemCard_L_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// 0x01B0
struct FFortItemCard_M_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenTraitIcons;                                 // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondTraitSize;                                          // 0x0174(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TierMeterPadding;                                         // 0x017C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x018C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0198(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
// 0x0048
struct FFortItemCard_M_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// 0x02C8
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                         // 0x0010(0x01B0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x01C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                                // 0x01C8(0x0098) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ClassIconSize;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   LeadSurvivorTypeIconSize;                                 // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstIconSlotSize;                                        // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PaddingBetweenIconSlots;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   SecondIconSlotSize;                                       // 0x027C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                                   // 0x0284(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x028C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration      LevelMeter;                                               // 0x02A0(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TierMeterLeftPadding;                                     // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// 0x01A0
struct FFortItemCard_S_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0128(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0158(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0168(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TierMeterPadding;                                         // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration       TierMeter;                                                // 0x0180(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x018C(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
// 0x0048
struct FFortItemCard_S_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// 0x0034
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                         // 0x0018(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   AvailableUpgradeIconSize;                                 // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// 0x0188
struct FFortItemCard_XS_ItemInstance_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     PowerRatingBlockPadding;                                  // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                         // 0x0020(0x0100) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   BookmarkImageSize;                                        // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     TraitBoxPadding;                                          // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstTraitSize;                                           // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0140(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                          // 0x0170(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
// 0x0048
struct FFortItemCard_XS_TransformKey_Configuration
{
	struct FMargin                                     BackgroundPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransformKeyIconSize;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
// 0x0030
struct FFortItemCard_XXS_ItemInstance_Configuration
{
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                          // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
// 0x0018
struct FFortUIPickerTrapSortScores
{
	float                                              UniqueTrapBonus;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlottedBonus;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FavoriteBonus;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PinnedBonus;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTrackedTrapBonusTime;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TrackedTrapBonusMultiplier;                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// 0x001C
struct FFortModalContainerSizeEntry
{
	float                                              AbsoluteWidth;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TopPercent;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MiddlePercent;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BottomPercent;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalPadding;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalPadding;                                        // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContentPadding;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.OptionsTabData
// 0x0010
struct FOptionsTabData
{
	TArray<struct FSettingData>                        SettingDatas;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// 0x0020
struct FFortUIPerkTier
{
	class UFortHeroSpecialization*                     HeroSpecialization;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortItemTier                                      Tier;                                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class UFortHero*                                   CurrentHero;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUpgrade;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEvolution;                                             // 0x0019(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.RadialOptionData
// 0x00C8
struct FRadialOptionData
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush;                                                    // 0x0018(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.RadialOptionData.SoftIcon
};

// ScriptStruct FortniteUI.ItemDefOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FItemDefOptionData : public FRadialOptionData
{
	class UObject*                                     ItemDef;                                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SquadQuickChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadQuickChatOptionData : public FRadialOptionData
{
	struct FAthenaQuickChatActiveEntry                 ChatEntry;                                                // 0x00C8(0x0014) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                 // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
// 0x0020
struct FFortPickerTemporaryWheelItem
{
	struct FText                                       LabelOverride;                                            // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	class UFortItemDefinition*                         Item;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheel
// 0x0030
struct FFortPickerTemporaryWheel
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	TArray<struct FFortPickerTemporaryWheelItem>       Items;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FBuildingCategoryOptionData : public FRadialOptionData
{
	TEnumAsByte<EFortBuildingType>                     BuildingType;                                             // 0x00C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FBuildingOptionData : public FRadialOptionData
{
	struct FString                                     ClassSuffix;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClassMirrored;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FItemCategoryOptionData : public FRadialOptionData
{
	struct FString                                     TemplatePrefix;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EBuildingAttachmentType>               BuildingAttachmentType;                                   // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.ChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FMapNoteOptionData : public FRadialOptionData
{
	struct FText                                       MapNoteText;                                              // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.EmoteOptionData
// 0x0008 (0x00D0 - 0x00C8)
struct FEmoteOptionData : public FRadialOptionData
{
	struct FName                                       EmoteCommand;                                             // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyAnswerWidgetDataTableEntry
// 0x0058
struct FFortPlayerSurveyAnswerWidgetDataTableEntry
{
	TMap<EFortPlayerSurveyQuestionPresentationStyle, class UClass*> WidgetClassMap;                                           // 0x0000(0x0050) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UClass*                                      FallbackWidgetClass;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
// 0x0018
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
{
	class UCommonButton*                               ButtonWidget;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
// 0x0008
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
{
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType FocusType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyConditionsContext
// 0x0028
struct FFortPlayerSurveyConditionsContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UPlayer*                                     Player;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	class UFortPlayerSurveyContext*                    Context;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PlatformSupportDesc
// 0x0020
struct FPlatformSupportDesc
{
	struct FText                                       DisableDesc;                                              // 0x0000(0x0018) (Edit, NativeAccessSpecifierPublic)
	EFortLoginAccountType                              AccountType;                                              // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimationBase
// 0x0001
struct FFortSimpleWidgetAnimationBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeBase
// 0x0060
struct FFortSimpleWidgetAnimationKeyframeBase
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETransitionCurve                                   CurveType;                                                // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5B];                                      // 0x0005(0x005B) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeVector2D
// 0x0008 (0x0068 - 0x0060)
struct FFortSimpleWidgetAnimationKeyframeVector2D : public FFortSimpleWidgetAnimationKeyframeBase
{
	struct FVector2D                                   Value;                                                    // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortSimpleWidgetTranslationAnimation
// 0x003F (0x0040 - 0x0001)
struct FFortSimpleWidgetTranslationAnimation : public FFortSimpleWidgetAnimationBase
{
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
	TArray<struct FFortSimpleWidgetAnimationKeyframeVector2D> Keyframes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetScaleAnimation
// 0x003F (0x0040 - 0x0001)
struct FFortSimpleWidgetScaleAnimation : public FFortSimpleWidgetAnimationBase
{
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
	TArray<struct FFortSimpleWidgetAnimationKeyframeVector2D> Keyframes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeFloat
// 0x0008 (0x0068 - 0x0060)
struct FFortSimpleWidgetAnimationKeyframeFloat : public FFortSimpleWidgetAnimationKeyframeBase
{
	float                                              Value;                                                    // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAlphaAnimation
// 0x003F (0x0040 - 0x0001)
struct FFortSimpleWidgetAlphaAnimation : public FFortSimpleWidgetAnimationBase
{
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
	TArray<struct FFortSimpleWidgetAnimationKeyframeFloat> Keyframes;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
// 0x0118
struct FFortSimpleWidgetAnimation
{
	struct FName                                       TargetName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldAnimateTranslation;                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortSimpleWidgetTranslationAnimation       Translation;                                              // 0x0010(0x0040) (Edit, NativeAccessSpecifierPublic)
	bool                                               bShouldAnimateScale;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FFortSimpleWidgetScaleAnimation             Scale;                                                    // 0x0058(0x0040) (Edit, NativeAccessSpecifierPublic)
	bool                                               bShouldAnimateAlpha;                                      // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FFortSimpleWidgetAlphaAnimation             Alpha;                                                    // 0x00A0(0x0040) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x38];                                      // 0x00E0(0x0038) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
// 0x0028
struct FFortSimpleWidgetAnimations
{
	TArray<struct FFortSimpleWidgetAnimation>          Animations;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.FortSimpleWidgetAnimations.OnAnimationFinished
	unsigned char                                      UnknownData01[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSettingsFilterState
// 0x0018
struct FFortSettingsFilterState
{
	class UFortLocalPlayer*                            LocalPlayer;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortSetting*>                        SettingWhiteList;                                         // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PlatformPrefixIcon
// 0x0018
struct FPlatformPrefixIcon
{
	struct FString                                     Platform;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PrefixIcon;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PlatformPrefixIconList
// 0x0010
struct FPlatformPrefixIconList
{
	TArray<struct FPlatformPrefixIcon>                 PlatformPrefixIcons;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUserListHeaderInfo
// 0x0018
struct FFortUserListHeaderInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.PotentialSpectatorTarget
// 0x0010
struct FPotentialSpectatorTarget
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerStateAthena>       PlayerState;                                              // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCurrentViewTarget;                                       // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
// 0x0030
struct FFortLandingPageDefenderSummaryInfo
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TheaterDisplayName;                                       // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     TheaterUniqueId;                                          // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
// 0x0030
struct FFortAttributeModifierAccumulation
{
	struct FGameplayTag                                GameplayTag;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          Attribute;                                                // 0x0008(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SquadSlotSortTypes
// 0x0010
struct FSquadSlotSortTypes
{
	TArray<ESquadSlotSortType>                         SortTypes;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CardPackOffer
// 0x0078
struct FCardPackOffer
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                MtxPrice;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<char>                      SaleType;                                                 // 0x0034(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FText                                       SaleText;                                                 // 0x0038(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Price;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RegularPrice;                                             // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItemDefinition*                  CurrencyType;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityRemaining;                                        // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTimedOffer;                                              // 0x0064(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x13];                                      // 0x0065(0x0013) MISSED OFFSET
};

// ScriptStruct FortniteUI.Card
// 0x0018
struct FCard
{
	int                                                QuantityReceived;                                         // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UFortItem*                                   Item;                                                     // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPauseType                                         PauseType;                                                // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.OpenedCardPack
// 0x0010
struct FOpenedCardPack
{
	class UFortCardPackItemDefinition*                 CardPackDefinition;                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisplayLevel;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
// 0x00B0
struct FFortSurvivorSquadSlottingFeedbackData
{
	bool                                               HadLeaderMatch;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasLeaderMatch;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	TMap<struct FGameplayTag, int>                     PreviousSetBonusCounts;                                   // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, int>                     CurrentSetBonusCounts;                                    // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PreviousPersonalityMatchCount;                            // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPersonalityMatchCount;                             // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
// 0x0070
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
	struct FName                                       SquadId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                          FortAttribute;                                            // 0x0008(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FortAttributeValue;                                       // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FGameplayAttribute                          FortTeamAttribute;                                        // 0x0030(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeamFortAttributeValue;                                   // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SquadPowerValue;                                          // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       FortAttributeName;                                        // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// 0x0340
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
	int                                                NumPersonalityMatches;                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNonLeaderSquadMembers;                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HavePersonalityIcons;                                     // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FFortMultiSizeBrush                         PersonalityIcons;                                         // 0x0010(0x0330) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
// 0x0370
struct FFortUISurvivorSquadStatMatch
{
	struct FFortMultiSizeBrush                         Icons;                                                    // 0x0000(0x0330) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       MagnitudeText;                                            // 0x0330(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       AttributeDisplayName;                                     // 0x0348(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                NumMembersMeetingCriteria;                                // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMembersRequired;                                       // 0x0364(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortUISurvivorSquadMatchType                      MatchType;                                                // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBuffState                                     PreviewEffect;                                            // 0x0369(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// 0x00C8
struct FFortTabListRegistrationInfo
{
	struct FName                                       TabNameID;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowedInZone;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // 0x0010(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UClass*                                      TabButtonType;                                            // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      TabContentType;                                           // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     CreatedTabContentWidget;                                  // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CachedComponentMaterials
// 0x0018
struct FCachedComponentMaterials
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUITutorialData
// 0x0050 (0x0058 - 0x0008)
struct FFortUITutorialData : public FTableRowBase
{
	struct FName                                       TutorialWidgetName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                    // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     DevComment;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FText>                               Descriptions;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortUITutorialData.PreviewImages
};

// ScriptStruct FortniteUI.UINavigationData
// 0x0030
struct FUINavigationData
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UObject*                                     ObjectData;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       IdData;                                                   // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntData;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.UINavigationEntry
// 0x0050
struct FUINavigationEntry
{
	struct FUINavigationData                           Data;                                                     // 0x0000(0x0030) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: DelegateProperty FortniteUI.UINavigationEntry.NavigateToDelegate
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: DelegateProperty FortniteUI.UINavigationEntry.NavigateFromDelegate
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// 0x0030
struct FFortUINavigationOperation
{
	EFortUINavigationOp                                Operation;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FName                                       SquadId;                                                  // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadSlotIndex;                                           // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PageId;                                                   // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NodeId;                                                   // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                                   Item;                                                     // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortUIFeature                                     Feature;                                                  // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortFrontendInventoryFilter                       ItemManagementFilter;                                     // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// 0x0010
struct FFortUINavigationRequest
{
	TArray<struct FFortUINavigationOperation>          Operations;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// 0x002C
struct FFortUIXpInfo
{
	int                                                InitialLevel;                                             // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialDisplayXp;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortExperienceDelta                        ChangeInXp;                                               // 0x0008(0x0024) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIStyleWindowButtons
// 0x09E0
struct FFortUIStyleWindowButtons
{
	struct FButtonStyle                                Close;                                                    // 0x0000(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                Minimize;                                                 // 0x0278(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                Maximize;                                                 // 0x04F0(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                                Restore;                                                  // 0x0768(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortUIStyleDefinition
// 0x09E0
struct FFortUIStyleDefinition
{
	struct FFortUIStyleWindowButtons                   WindowButtons;                                            // 0x0000(0x09E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortVideoInfo
// 0x0038
struct FFortVideoInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  PreviewImage;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                                VideoSource;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalizedOverlays*                          SubtitleOverlays;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestObjectiveName;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                             RequiredActiveQuest;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
// 0x0050
struct FFortWeaponBoardDisplaySlot
{
	struct FGameplayTag                                RequiredTag;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  MeshRelativeTransform;                                    // 0x0010(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LocalOffsetMultiplier;                                    // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
// 0x0060
struct FFortWeaponBoardDisplaySlotItem
{
	struct FFortWeaponBoardDisplaySlot                 DisplaySlot;                                              // 0x0000(0x0050) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.GGCenterDisplayEntry
// 0x0017 (0x0018 - 0x0001)
struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct
{
	bool                                               bIsEnabled;                                               // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFinal;                                                 // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class UFortWeaponItemDefinition*                   WeaponAt;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersAtWeapon;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.GoosePickupDisplayData
// 0x0020
struct FGoosePickupDisplayData
{
	struct FName                                       ChestName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayText;                                              // 0x0008(0x0018) (Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.GooseWeaponDisplayData
// 0x0038
struct FGooseWeaponDisplayData
{
	struct FGameplayTag                                WeaponTag;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ChestName;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  IconTexture;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          IconMaterial;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       DisplayText;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.HeistExitCraftIconData
// 0x0010
struct FHeistExitCraftIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeistExitCraftIconState                           IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeistExitCraftIconState                           PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                SecondsUntilIncoming;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeamHasBling;                                            // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.HeistBlingIconData
// 0x0008
struct FHeistBlingIconData
{
	int                                                IconIndex;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeistBlingIconState                               IconState;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EHeistBlingIconState                               PrevIconState;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FortniteUI.HudLayoutToolProxyPropertyData
// 0x0030
struct FHudLayoutToolProxyPropertyData
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ELayoutPropertyType                                Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PickupStreamEntry
// 0x0018
struct FPickupStreamEntry
{
	class UUserWidget*                                 PickupWidget;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.SoundThreshold
// 0x0010
struct FSoundThreshold
{
	class USoundCue*                                   SoundCue;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Threshold;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortToastDisplayInfo
// 0x0060
struct FFortToastDisplayInfo
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Body;                                                     // 0x0018(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortToastDisplayInfo.Image
	EFortToastType                                     Type;                                                     // 0x0058(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.StoreCallout
// 0x0090
struct FStoreCallout
{
	struct FFortToastDisplayInfo                       ToastDisplayInfo;                                         // 0x0000(0x0060) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       ItemName;                                                 // 0x0060(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       ItemSet;                                                  // 0x0078(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.TDMTeamScoreData
// 0x0020
struct FTDMTeamScoreData
{
	struct FText                                       CurrScoreText;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              CurrScorePercent;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrScore;                                                // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.WaxPlacementData
// 0x0020
struct FWaxPlacementData
{
	int                                                Placement;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CoinCount;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPlayer;                                                // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.GridSortKey
// 0x0018
struct FGridSortKey
{
	float                                              Number;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     String;                                                   // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
// 0x0018
struct FGlyphAllUpdateTransitions
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FortniteUI.GlyphUpdateTransition
// 0x000C
struct FGlyphUpdateTransition
{
	int                                                Count;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeOffset;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTimeOffset;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AthenaLeaderboardData
// 0x0020 (0x0028 - 0x0008)
struct FAthenaLeaderboardData : public FTableRowBase
{
	EFortAthenaPlaylist                                Playlist;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FName                                       PlaylistName;                                             // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECommonInputType                                   InputType;                                                // 0x0014(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	TArray<struct FAthenaPlaylistLeaderboardData>      Stats;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ShowdownLatestTournamentData
// 0x0060
struct FShowdownLatestTournamentData
{
	struct FString                                     LastModified;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FShowdownTournamentEntry> Entries;                                                  // 0x0010(0x0050) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.CharacterRanges
// 0x0030
struct FCharacterRanges
{
	TArray<int>                                        Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        SinglePoints;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ExcludedPoints;                                           // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
// 0x0008 (0x0010 - 0x0008)
struct FFortCreativeItemListCategoryData : public FTableRowBase
{
	ECreativeItemCategory                              Category;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortItemCardSize                                  CardSize;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollapseCardBorderPad;                                   // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
// 0x0018 (0x0020 - 0x0008)
struct FFortCreativeServerDisplayOption : public FTableRowBase
{
	class UTexture*                                    Image;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// 0x0018
struct FConsumedCriteriaData
{
	float                                              PowerMod;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               CriteriaNames;                                            // 0x0008(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.AttributeRequirement
// 0x0020
struct FAttributeRequirement
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                Level;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequirementsMet;                                         // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FortniteUI.BuildingRequirements
// 0x0028
struct FBuildingRequirements
{
	int                                                RequiredAccountLevel;                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentAccountLevel;                                      // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeRequirement>               AttributeRequirements;                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                RequiredPower;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentPower;                                             // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredManufacturing;                                    // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrentManufacturing;                                     // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortHeroLoadoutHeroPickerTabConfiguration
// 0x00B0
struct FFortHeroLoadoutHeroPickerTabConfiguration
{
	struct FFortItemFilterDefinition                   Filter;                                                   // 0x0000(0x0060) (NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition                   Sorter;                                                   // 0x0060(0x0050) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortHeroNamesData
// 0x0030 (0x0038 - 0x0008)
struct FFortHeroNamesData : public FTableRowBase
{
	struct FString                                     FirstName;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NickName;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LastName;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortKillerVisualInfo
// 0x00A0
struct FFortKillerVisualInfo
{
	struct FSlateBrush                                 KillerBrush;                                              // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       KillerName;                                               // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// 0x0010
struct FItemDefinitionChangedStruct
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty FortniteUI.ItemDefinitionChangedStruct.ChangeDelegate
};

// ScriptStruct FortniteUI.FortRefundDescriptionsData
// 0x0038 (0x0040 - 0x0008)
struct FFortRefundDescriptionsData : public FTableRowBase
{
	struct FString                                     SearchString;                                             // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TargetReleaseVersion;                                     // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       RefundDescriptionText;                                    // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.SquadChatOptionData
// 0x0018 (0x00E0 - 0x00C8)
struct FSquadChatOptionData : public FRadialOptionData
{
	struct FText                                       ChatText;                                                 // 0x00C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataCondition
// 0x0010
struct FFortPlayerSurveyCMSDataCondition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionBase
// 0x0008
struct FFortPlayerSurveyCMSDataConditionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupBase
// 0x0010 (0x0018 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionGroupBase : public FFortPlayerSurveyCMSDataConditionBase
{
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAnd
// 0x0000 (0x0018 - 0x0018)
struct FFortPlayerSurveyCMSDataConditionAnd : public FFortPlayerSurveyCMSDataConditionGroupBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase : public FFortPlayerSurveyCMSDataConditionBase
{
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                T;                                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat
// 0x0088 (0x0098 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionAthenaMatchStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
	TArray<EFortPlayerSurveyCMSDataPlaylistCategory>   pt;                                                       // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0020(0x0050) UNKNOWN PROPERTY: SetProperty FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat.P
	TArray<struct FString>                             I;                                                        // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     S;                                                        // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortPlayerSurveyCMSDataAggregateOp                ag;                                                       // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataGameplayTagQuery
// 0x0018
struct FFortPlayerSurveyCMSDataGameplayTagQuery
{
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType   T;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               N;                                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaPoi
// 0x0018 (0x0020 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionAthenaPoi : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataGameplayTagQuery    Q;                                                        // 0x0008(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonBookState
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState : public FFortPlayerSurveyCMSDataConditionBase
{
	bool                                               T;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonStat
// 0x0008 (0x0018 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
	EFortPlayerSurveyCMSDataAthenaSeasonStat           S;                                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroup
// 0x0018
struct FFortPlayerSurveyCMSDataConditionGroup
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupReference
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionGroupReference : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRelativeSurveyKey
// 0x0018
struct FFortPlayerSurveyCMSDataRelativeSurveyKey
{
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType      T;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FString                                     ID;                                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionMostRecentlyCompleted
// 0x0028 (0x0030 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey   S;                                                        // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	double                                             T;                                                        // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionOr
// 0x0000 (0x0018 - 0x0018)
struct FFortPlayerSurveyCMSDataConditionOr : public FFortPlayerSurveyCMSDataConditionGroupBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionPlatform
// 0x0050 (0x0058 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionPlatform : public FFortPlayerSurveyCMSDataConditionBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty FortniteUI.FortPlayerSurveyCMSDataConditionPlatform.P
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionQuestState
// 0x0028 (0x0030 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionQuestState : public FFortPlayerSurveyCMSDataConditionBase
{
	EFortPlayerSurveyCMSDataGameMode                   sg;                                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Q;                                                        // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<EFortPlayerSurveyCMSDataQuestState>         st;                                                       // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionRandom
// 0x0008 (0x0010 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionRandom : public FFortPlayerSurveyCMSDataConditionBase
{
	float                                              P;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSeasonNumber
// 0x0000 (0x0010 - 0x0010)
struct FFortPlayerSurveyCMSDataConditionSeasonNumber : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{

};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionTimesCompleted
// 0x0020 (0x0028 - 0x0008)
struct FFortPlayerSurveyCMSDataConditionTimesCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey   S;                                                        // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	EFortPlayerSurveyCMSDataBinaryComparisonOp         O;                                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                T;                                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestion
// 0x0010
struct FFortPlayerSurveyCMSDataQuestion
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionBase
// 0x0008
struct FFortPlayerSurveyCMSDataQuestionBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionStandardBase
// 0x0020 (0x0028 - 0x0008)
struct FFortPlayerSurveyCMSDataQuestionStandardBase : public FFortPlayerSurveyCMSDataQuestionBase
{
	EFortPlayerSurveyCMSDataPresentationStyle          S;                                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       T;                                                        // 0x0010(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionFreeFormText
// 0x0020 (0x0048 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionFreeFormText : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	struct FText                                       ht;                                                       // 0x0028(0x0018) (NativeAccessSpecifierPublic)
	bool                                               R;                                                        // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                L;                                                        // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionChoice
// 0x0018
struct FFortPlayerSurveyCMSDataQuestionChoice
{
	struct FText                                       T;                                                        // 0x0000(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleChoice
// 0x0010 (0x0038 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionMultipleChoice : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                        // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleSelection
// 0x0018 (0x0040 - 0x0028)
struct FFortPlayerSurveyCMSDataQuestionMultipleSelection : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                        // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                mn;                                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                mx;                                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurveyDescriptionMessage
// 0x0030
struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage
{
	struct FText                                       T;                                                        // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       M;                                                        // 0x0018(0x0018) (NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurvey
// 0x0098
struct FFortPlayerSurveyCMSDataSurvey
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       T;                                                        // 0x0010(0x0018) (NativeAccessSpecifierPublic)
	bool                                               rt;                                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TArray<struct FJsonObjectWrapper>                  C;                                                        // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage cm;                                                       // 0x0040(0x0030) (NativeAccessSpecifierPublic)
	EFortPlayerSurveyCMSDataTrigger                    R;                                                        // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<EFortPlayerSurveyCMSDataGameMode>           sg;                                                       // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>                  Q;                                                        // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRoot
// 0x0028
struct FFortPlayerSurveyCMSDataRoot
{
	bool                                               E;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FFortPlayerSurveyCMSDataConditionGroup> cg;                                                       // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSDataSurvey>      S;                                                        // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortQuestMapEventQuestSideBarData
// 0x0020 (0x0028 - 0x0008)
struct FFortQuestMapEventQuestSideBarData : public FTableRowBase
{
	class UFortQuestItemDefinition*                    QuestItemDefinition;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             EventFlags;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bShowAlways;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              CycleTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// 0x0270 (0x0278 - 0x0008)
struct FFortRichTextStyleData : public FTableRowBase
{
	struct FTextBlockStyle                             TextStyle;                                                // 0x0008(0x0268) (Edit, NativeAccessSpecifierPublic)
	bool                                               bHyperlinkStyle;                                          // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortEventStyleInfo
// 0x00A0 (0x00A8 - 0x0008)
struct FFortEventStyleInfo : public FTableRowBase
{
	struct FLinearColor                                BaseColor;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PrimaryColor;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryColor;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                HighlightColor;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TitleColor;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColor;                                              // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundLeftColor;                                      // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundRightColor;                                     // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundTextColor;                                      // 0x0088(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                PosterFadeColor;                                          // 0x0098(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
// 0x0040 (0x0048 - 0x0008)
struct FFortShowdownScoringRuleDisplayInfo : public FTableRowBase
{
	struct FText                                       Description;                                              // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.FortShowdownScoringRuleDisplayInfo.Icon
};

// ScriptStruct FortniteUI.TouchMove
// 0x000C
struct FTouchMove
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// 0x00C0
struct FFortItemTransformFilterTabLabelInfo
{
	struct FName                                       FilterTabNameId;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo                     TabButtonLabelInfo;                                       // 0x0008(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<EFortInventoryFilter>                       ItemFilters;                                              // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EFortItemType                                      ItemType;                                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
// 0x0050 (0x0058 - 0x0008)
struct FFortUIPickerTrapSortModifier : public FTableRowBase
{
	struct FGameplayTagQuery                           ItemTagQuery;                                             // 0x0008(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              ScoreBonus;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct FortniteUI.FortHealthyGamingData
// 0x0088 (0x0090 - 0x0008)
struct FFortHealthyGamingData : public FTableRowBase
{
	float                                              HealthWarningToastInterval;                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       HealthWarningToastDescriptionFormat;                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       HealthWarningScreenText;                                  // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       GameplayRestrictionText;                                  // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              GameplayRestrictionWarningTimeOffset;                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FText                                       AntiAddictionTotalDescriptionFormat;                      // 0x0060(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bUsePlayerTimeLimitSystem;                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0079(0x0010) UNKNOWN PROPERTY: ArrayProperty FortniteUI.FortHealthyGamingData.RatingIcons
};

// ScriptStruct FortniteUI.FortSquadIconData
// 0x0330 (0x0338 - 0x0008)
struct FFortSquadIconData : public FTableRowBase
{
	struct FFortMultiSizeBrush                         Brush;                                                    // 0x0008(0x0330) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// 0x0038
struct FFortDisplayModifier
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	EFortStatValueDisplayType                          DisplayType;                                              // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EFortBuffState                                     BuffState;                                                // 0x0031(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
};

// ScriptStruct FortniteUI.HomebaseNodeDisplayData
// 0x0088 (0x0090 - 0x0008)
struct FHomebaseNodeDisplayData : public FTableRowBase
{
	struct FText                                       Title;                                                    // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.LargePreviewImage
	unsigned char                                      UnknownData01[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteUI.HomebaseNodeDisplayData.SmallPreviewImage
	class UMediaSource*                                PreviewVideoMediaSource;                                  // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct FortniteUI.PanZoomFingerState
// 0x0010
struct FPanZoomFingerState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
