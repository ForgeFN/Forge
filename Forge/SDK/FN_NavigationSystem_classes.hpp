#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NavigationSystem.NavigationData
// 0x01D0 (0x03E8 - 0x0218)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         RenderingComp;                                            // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavDataConfig                              NavDataConfig;                                            // 0x0228(0x0078) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bEnableDrawing : 1;                                       // 0x02A0(0x0001) (Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bForceRebuildOnLoad : 1;                                  // 0x02A0(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanBeMainNavData : 1;                                    // 0x02A0(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCanSpawnOnRebuild : 1;                                   // 0x02A0(0x0001) (Edit, Config, EditConst, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRebuildAtRuntime : 1;                                    // 0x02A0(0x0001) (Config, Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	ERuntimeGenerationType                             RuntimeGeneration;                                        // 0x02A4(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              ObservedPathsTickInterval;                                // 0x02A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint32_t                                           DataVersion;                                              // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0xD0];                                      // 0x02B0(0x00D0) MISSED OFFSET
	TArray<struct FSupportedAreaData>                  SupportedAreas;                                           // 0x0380(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0390(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x00B8 (0x04A0 - 0x03E8)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      bDrawTriangleEdges : 1;                                   // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolyEdges : 1;                                       // 0x03E8(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFilledPolys : 1;                                     // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMeshEdges : 1;                                    // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileBounds : 1;                                      // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPathCollidingGeometry : 1;                           // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawTileLabels : 1;                                      // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawPolygonLabels : 1;                                   // 0x03E8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDefaultPolygonCost : 1;                              // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawLabelsOnPathNodes : 1;                               // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavLinks : 1;                                        // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedNavLinks : 1;                                  // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawClusters : 1;                                        // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctree : 1;                                          // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawOctreeDetails : 1;                                   // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawMarkedForbiddenPolys : 1;                            // 0x03E9(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDistinctlyDrawTilesBeingBuilt : 1;                       // 0x03EA(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawNavMesh : 1;                                         // 0x03EA(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x1];                                       // 0x03EB(0x0001) MISSED OFFSET
	float                                              DrawOffset;                                               // 0x03EC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedTilePoolSize : 1;                                   // 0x03F0(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F1(0x0003) MISSED OFFSET
	int                                                TilePoolSize;                                             // 0x03F4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSizeUU;                                               // 0x03F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                 // 0x03FC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellHeight;                                               // 0x0400(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentRadius;                                              // 0x0404(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                              // 0x0408(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxHeight;                                           // 0x040C(0x0004) (Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxSlope;                                            // 0x0410(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxStepHeight;                                       // 0x0414(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRegionArea;                                            // 0x0418(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MergeRegionSize;                                          // 0x041C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimplificationError;                                   // 0x0420(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSimultaneousTileGenerationJobsCount;                   // 0x0424(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileNumberHardLimit;                                      // 0x0428(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefTileBits;                                          // 0x042C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefNavPolyBits;                                       // 0x0430(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PolyRefSaltBits;                                          // 0x0434(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NavMeshOriginOffset;                                      // 0x0438(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultDrawDistance;                                      // 0x0444(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxSearchNodes;                                    // 0x0448(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultMaxHierarchicalSearchNodes;                        // 0x044C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERecastPartitioning>                   RegionPartitioning;                                       // 0x0450(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ERecastPartitioning>                   LayerPartitioning;                                        // 0x0451(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0452(0x0002) MISSED OFFSET
	int                                                RegionChunkSplits;                                        // 0x0454(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerChunkSplits;                                         // 0x0458(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortNavigationAreasByCost : 1;                           // 0x045C(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformVoxelFiltering : 1;                               // 0x045C(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMarkLowHeightAreas : 1;                                  // 0x045C(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanSequences : 1;                              // 0x045C(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                          // 0x045C(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDoFullyAsyncNavDataGathering : 1;                        // 0x045C(0x0001) (Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseBetterOffsetsFromCorners : 1;                         // 0x045C(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStoreEmptyTileLayers : 1;                                // 0x045C(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVirtualFilters : 1;                                   // 0x045D(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowNavLinkAsPathEnd : 1;                               // 0x045D(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseVoxelCache : 1;                                       // 0x045D(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x2];                                       // 0x045E(0x0002) MISSED OFFSET
	float                                              TileSetUpdateInterval;                                    // 0x0460(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeuristicScale;                                           // 0x0464(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalDeviationFromGroundCompensation;                  // 0x0468(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x34];                                      // 0x046C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}


	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);
};


// Class NavigationSystem.NavigationSystemV1
// 0x0510 (0x0538 - 0x0028)
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	class ANavigationData*                             MainNavData;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANavigationData*                             AbstractNavData;                                          // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DefaultAgentName;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty NavigationSystem.NavigationSystemV1.CrowdManagerClass
	unsigned char                                      bAutoCreateNavigationData : 1;                            // 0x0068(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0068(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowClientSideNavigation : 1;                           // 0x0068(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldDiscardSubLevelNavData : 1;                        // 0x0068(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bTickWhilePaused : 1;                                     // 0x0068(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSupportRebuilding : 1;                                   // 0x0068(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInitialBuildingLocked : 1;                               // 0x0068(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0068(0x0001)
	unsigned char                                      bSkipAgentHeightCheckWhenPickingNavData : 1;              // 0x0069(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	ENavDataGatheringModeConfig                        DataGatheringMode;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	unsigned char                                      bGenerateNavigationOnlyAroundNavigationInvokers : 1;      // 0x0070(0x0001) (Edit, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              ActiveTilesUpdateInterval;                                // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNavDataConfig>                      SupportedAgents;                                          // 0x0078(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FNavAgentSelector                           SupportedAgentsMask;                                      // 0x0088(0x0004) (Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData05[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	TArray<class ANavigationData*>                     NavDataSet;                                               // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                 // 0x00A0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData07[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationSystemV1.OnNavDataRegisteredEvent
	unsigned char                                      UnknownData08[0x10];                                      // 0x00D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationSystemV1.OnNavigationGenerationFinishedDelegate
	unsigned char                                      UnknownData09[0xDC];                                      // 0x00E0(0x00DC) MISSED OFFSET
	EFNavigationSystemRunMode                          OperationMode;                                            // 0x01BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData10[0x357];                                     // 0x01BD(0x0357) MISSED OFFSET
	float                                              DirtyAreasUpdateFreq;                                     // 0x0514(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData11[0x20];                                      // 0x0518(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void UnregisterNavigationInvoker(class AActor* Invoker);
	static void SimpleMoveToLocation(class AController* Controller, struct FVector Goal);
	static void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	static struct FVector ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector Point, class ANavigationData* NavData, class UClass* FilterClass, struct FVector QueryExtent);
	void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	static bool NavigationRaycast(class UObject* WorldContextObject, struct FVector RayStart, struct FVector RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);
	bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);
	static bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, struct FVector Point, class ANavigationData* NavData, class UClass* FilterClass, struct FVector QueryExtent, struct FVector* ProjectedLocation);
	static bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	static bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	static bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, struct FVector Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	static bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	static bool IsNavigationBeingBuilt(class UObject* WorldContextObject);
	static struct FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, struct FVector Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static struct FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, struct FVector Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	static TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);
	static TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);
	static class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);
	static class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	static class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, struct FVector PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x0008 (0x0058 - 0x0050)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      bStrictlyStatic : 1;                                      // 0x0050(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x0050(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoSpawnMissingNavData : 1;                             // 0x0050(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bSpawnNavDataInNavBoundsLevel : 1;                        // 0x0050(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x0010 (0x0228 - 0x0218)
class ANavSystemConfigOverride : public AActor
{
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ENavSystemOverridePolicy                           OverridePolicy;                                           // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLoadOnClient : 1;                                        // 0x0221(0x0001) (Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0222(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}

};


// Class NavigationSystem.NavArea
// 0x0018 (0x0048 - 0x0030)
class UNavArea : public UNavAreaBase
{
public:
	float                                              DefaultCost;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FixedAreaEnteringCost;                                    // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FColor                                      DrawColor;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x003C(0x0004) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent0 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent1 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent2 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent3 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent4 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent5 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent6 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent7 : 1;                                      // 0x0040(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent8 : 1;                                      // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent9 : 1;                                      // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent10 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent11 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent12 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent13 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent14 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsAgent15 : 1;                                     // 0x0041(0x0001) (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0x0000 (0x03C0 - 0x03C0)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000 (0x0028 - 0x0028)
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0x0030 (0x00E0 - 0x00B0)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x00B0(0x0024) MISSED OFFSET
	unsigned char                                      bAttachToOwnersRoot : 1;                                  // 0x00D4(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	class UObject*                                     CachedNavParent;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy(bool bRelevant);
};


// Class NavigationSystem.NavLinkCustomComponent
// 0x00A8 (0x0188 - 0x00E0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET
	uint32_t                                           NavLinkUserId;                                            // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	class UClass*                                      EnabledAreaClass;                                         // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DisabledAreaClass;                                        // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeStart;                                        // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     LinkRelativeEnd;                                          // 0x010C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ENavLinkDirection>                     LinkDirection;                                            // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	unsigned char                                      bLinkEnabled : 1;                                         // 0x011C(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenEnabled : 1;                                   // 0x011C(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bNotifyWhenDisabled : 1;                                  // 0x011C(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCreateBoxObstacle : 1;                                   // 0x011C(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x0120(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     ObstacleExtent;                                           // 0x012C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      ObstacleAreaClass;                                        // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastRadius;                                          // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BroadcastInterval;                                        // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ECollisionChannel>                     BroadcastChannel;                                         // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x3F];                                      // 0x0149(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0x0000 (0x0048 - 0x0048)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x0020 (0x0048 - 0x0028)
class UNavigationQueryFilter : public UObject
{
public:
	TArray<struct FNavigationFilterArea>               Areas;                                                    // 0x0028(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      IncludeFlags;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNavigationFilterFlags                      ExcludeFlags;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0x0000 (0x03E8 - 0x03E8)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0x0000 (0x0048 - 0x0048)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0x0000 (0x0048 - 0x0048)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x0080 (0x00C8 - 0x0048)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	class UClass*                                      Agent0Area;                                               // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent1Area;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent2Area;                                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent3Area;                                               // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent4Area;                                               // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent5Area;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent6Area;                                               // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent7Area;                                               // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent8Area;                                               // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent9Area;                                               // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent10Area;                                              // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent11Area;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent12Area;                                              // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent13Area;                                              // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent14Area;                                              // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Agent15Area;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x0068 (0x00D8 - 0x0070)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FNavCollisionCylinder>               CylinderCollision;                                        // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavCollisionBox>                    BoxCollision;                                             // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      AreaClass;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherConvexGeometry : 1;                                // 0x00A8(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreateOnClient : 1;                                      // 0x00A8(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00A9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0x0000 (0x03E8 - 0x03E8)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0x0000 (0x0218 - 0x0218)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0x0030 (0x0220 - 0x01F0)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	struct FNavGraphNode                               Node;                                                     // 0x01F0(0x0018) (NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                        // 0x0208(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                        // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	float                                              TileGenerationRadius;                                     // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TileRemovalRadius;                                        // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x0060 (0x0088 - 0x0028)
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NavigationSystem.NavigationPath.PathUpdatedNotifier
	TArray<struct FVector>                             PathPoints;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<ENavigationOptionFlag>                 RecalculateOnInvalidation;                                // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3F];                                      // 0x0049(0x003F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	bool IsValid();
	bool IsStringPulled();
	bool IsPartial();
	float GetPathLength();
	float GetPathCost();
	struct FString GetDebugString();
	void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor);
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000 (0x0028 - 0x0028)
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x00E8 (0x0300 - 0x0218)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavigationInvokerComponent*                 InvokerComponent;                                         // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bActAsNavigationInvoker : 1;                              // 0x0238(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0239(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProps;                                            // 0x0240(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     QueryingExtent;                                           // 0x0270(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ProjectedLocation;                                        // 0x0288(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectedLocationValid : 1;                              // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSearchStart : 1;                                         // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bBacktracking : 1;                                        // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseHierarchicalPathfinding : 1;                          // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bGatherDetailedInfo : 1;                                  // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawDistanceToWall : 1;                                  // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowNodePool : 1;                                        // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowBestPath : 1;                                        // 0x0294(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowDiffWithPreviousStep : 1;                            // 0x0295(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0295(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0296(0x0002) MISSED OFFSET
	TEnumAsByte<ENavCostDisplay>                       CostDisplayMode;                                          // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0299(0x0003) MISSED OFFSET
	struct FVector2D                                   TextCanvasOffset;                                         // 0x029C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathExist : 1;                                           // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathIsPartial : 1;                                       // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathSearchOutOfNodes : 1;                                // 0x02A4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x3];                                       // 0x02A5(0x0003) MISSED OFFSET
	float                                              PathfindingTime;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathCost;                                                 // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PathfindingSteps;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	class ANavigationTestingActor*                     OtherActor;                                               // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShowStepIndex;                                            // 0x02C8(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetFromCornersDistance;                                // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData07[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x0020 (0x03E0 - 0x03C0)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	TArray<struct FNavigationLink>                     Links;                                                    // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000 (0x0028 - 0x0028)
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0x0000 (0x0050 - 0x0050)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x0008 (0x0258 - 0x0250)
class ANavMeshBoundsVolume : public AVolume
{
public:
	struct FNavAgentSelector                           SupportedAgents;                                          // 0x0250(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0x0010 (0x03D0 - 0x03C0)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavModifierComponent
// 0x0028 (0x0108 - 0x00E0)
class UNavModifierComponent : public UNavRelevantComponent
{
public:
	class UClass*                                      AreaClass;                                                // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FailsafeExtent;                                           // 0x00E8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIncludeAgentHeight : 1;                                  // 0x00F4(0x0001) (Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x13];                                      // 0x00F5(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavModifierVolume
// 0x0010 (0x0260 - 0x0250)
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0250(0x0008) MISSED OFFSET
	class UClass*                                      AreaClass;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass(class UClass* NewAreaClass);
};


// Class NavigationSystem.NavNodeInterface
// 0x0000 (0x0028 - 0x0028)
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0x0000 (0x03C0 - 0x03C0)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0x0000 (0x0048 - 0x0048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0x0010 (0x0040 - 0x0030)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
