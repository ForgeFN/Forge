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

// Class AIModule.AIHotSpotManager
// 0x0000 (0x0028 - 0x0028)
class UAIHotSpotManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

};


// Class AIModule.AITask
// 0x0008 (0x0070 - 0x0068)
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                          // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

};


// Class AIModule.AIController
// 0x0090 (0x0320 - 0x0290)
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0290(0x0038) MISSED OFFSET
	unsigned char                                      bStopAILogicOnUnposses : 1;                               // 0x02C8(0x0001) (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLOSflag : 1;                                             // 0x02C8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                  // 0x02C8(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x02C8(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWantsPlayerState : 1;                                    // 0x02C8(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;               // 0x02C8(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UPathFollowingComponent*                     PathFollowingComponent;                                   // 0x02D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComponent;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // 0x02E0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnActionsComponent*                       ActionsComp;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                        Blackboard;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                             // 0x02F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultNavigationFilterClass;                             // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0308(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AIController.ReceiveMoveCompleted
	unsigned char                                      UnknownData03[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}


	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased);
	TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(struct FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(struct FVector FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};


// Class AIModule.AIPerceptionComponent
// 0x00D0 (0x0180 - 0x00B0)
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                             // 0x00B0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DominantSense;                                            // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET
	class AAIController*                               AIOwner;                                                  // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x80];                                      // 0x00E0(0x0080) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AIPerceptionComponent.OnPerceptionUpdated
	unsigned char                                      UnknownData03[0x10];                                      // 0x0170(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AIPerceptionComponent.OnTargetPerceptionUpdated

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}


	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
};


// Class AIModule.BrainComponent
// 0x0060 (0x0110 - 0x00B0)
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	class UBlackboardComponent*                        BlackboardComp;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                               AIOwner;                                                  // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00C8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}


	void StopLogic(struct FString Reason);
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};


// Class AIModule.BehaviorTreeComponent
// 0x0150 (0x0260 - 0x0110)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0110(0x0020) MISSED OFFSET
	TArray<class UBTNode*>                             NodeInstances;                                            // 0x0130(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x120];                                     // 0x0140(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}


	void SetDynamicSubtree(struct FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag);
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};


// Class AIModule.AISubsystem
// 0x0010 (0x0038 - 0x0028)
class UAISubsystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAISystem*                                   AISystem;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISubsystem");
		return ptr;
	}

};


// Class AIModule.AISense
// 0x0058 (0x0080 - 0x0028)
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EAISenseNotifyType                                 NotifyType;                                               // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bWantsNewPawnNotification : 1;                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

};


// Class AIModule.AISense_Hearing
// 0x0068 (0x00E8 - 0x0080)
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                              // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              SpeedOfSoundSq;                                           // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0094(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}


	static void ReportNoiseEvent(class UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, struct FName Tag);
};


// Class AIModule.AISystem
// 0x00D8 (0x0130 - 0x0058)
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                // 0x0058(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	struct FSoftClassPath                              HotSpotManagerClassName;                                  // 0x0070(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected)
	float                                              AcceptanceRadius;                                         // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;            // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingNavLinkAcceptanceRadius;                     // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishMoveOnGoalOverlap;                                 // 0x0094(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptPartialPaths;                                      // 0x0095(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStrafing;                                           // 0x0096(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableBTAITasks;                                         // 0x0097(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowControllersAsEQSQuerier;                            // 0x0098(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebuggerPlugin;                                    // 0x0099(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<ECollisionChannel>                     DefaultSightCollisionChannel;                             // 0x009A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x009B(0x0005) MISSED OFFSET
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                      // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                  // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIPerceptionSystem*                         PerceptionSystem;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                          // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UAIHotSpotManager*                           HotSpotManager;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavLocalGridManager*                        NavLocalGrids;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}


	void AILoggingVerbose();
	void AIIgnorePlayers();
};


// Class AIModule.PathFollowingComponent
// 0x01A8 (0x0258 - 0x00B0)
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B0(0x0038) MISSED OFFSET
	class UNavMovementComponent*                       MovementComp;                                             // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class ANavigationData*                             MyNavData;                                                // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x158];                                     // 0x0100(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}


	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<EPathFollowingAction> GetPathActionType();
};


// Class AIModule.CrowdFollowingComponent
// 0x0040 (0x0298 - 0x0258)
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	class UCharacterMovementComponent*                 CharacterMovement;                                        // 0x0260(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     CrowdAgentMoveDirection;                                  // 0x0268(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0274(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}


	void SuspendCrowdSteering(bool bSuspend);
};


// Class AIModule.NavLinkProxy
// 0x0050 (0x0268 - 0x0218)
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	TArray<struct FNavigationLink>                     PointLinks;                                               // 0x0228(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavigationSegmentLink>              SegmentLinks;                                             // 0x0238(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UNavLinkCustomComponent*                     SmartLinkComp;                                            // 0x0248(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSmartLinkIsRelevant;                                     // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0251(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.NavLinkProxy.OnSmartLinkReached

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		return ptr;
	}


	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, struct FVector Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};


// Class AIModule.AITask_MoveTo
// 0x00A0 (0x0110 - 0x0070)
class UAITask_MoveTo : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0070(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AITask_MoveTo.OnRequestFailed
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AITask_MoveTo.OnMoveFinished
	struct FAIMoveRequest                              MoveRequest;                                              // 0x0090(0x0040) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x40];                                      // 0x00D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}


	static class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, struct FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};


// Class AIModule.AIDataProvider
// 0x0000 (0x0028 - 0x0028)
class UAIDataProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

};


// Class AIModule.AIPerceptionSystem
// 0x0100 (0x0138 - 0x0038)
class UAIPerceptionSystem : public UAISubsystem
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	TArray<class UAISense*>                            Senses;                                                   // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              PerceptionAgingRate;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x9C];                                      // 0x009C(0x009C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}


	static void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	static bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	static class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, struct FAIStimulus Stimulus);
};


// Class AIModule.EnvQueryContext
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

};


// Class AIModule.BTNode
// 0x0030 (0x0058 - 0x0028)
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     NodeName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               TreeAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBTCompositeNode*                            ParentNode;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

};


// Class AIModule.BTAuxiliaryNode
// 0x0008 (0x0060 - 0x0058)
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

};


// Class AIModule.BTService
// 0x0010 (0x0070 - 0x0060)
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RandomDeviation;                                          // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCallTickOnSearchStart : 1;                               // 0x0068(0x0001) (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                        // 0x0068(0x0001) (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

};


// Class AIModule.BTTaskNode
// 0x0018 (0x0070 - 0x0058)
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                 // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreRestartSelf : 1;                                   // 0x0068(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

};


// Class AIModule.BTTask_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveTo
// 0x0018 (0x00B0 - 0x0098)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObservedBlackboardValueTolerance;                         // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                              // 0x00AC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00AC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00AC(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTrackMovingGoal : 1;                                     // 0x00AC(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectGoalLocation : 1;                                 // 0x00AC(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                        // 0x00AC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                         // 0x00AC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlap : 1;                                       // 0x00AC(0x0001) (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                            // 0x00AD(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

};


// Class AIModule.BTDecorator
// 0x0008 (0x0068 - 0x0060)
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData00 : 7;                                        // 0x0060(0x0001)
	unsigned char                                      bInverseCondition : 1;                                    // 0x0060(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	TEnumAsByte<EBTFlowAbortMode>                      FlowAbortMode;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTService_BlackboardBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

};


// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (0x0078 - 0x0070)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                 // 0x0070(0x0001) (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}

};


// Class AIModule.CrowdManager
// 0x00C8 (0x00F0 - 0x0028)
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                          // 0x0030(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	int                                                MaxAgents;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAgentRadius;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedAgents;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedWalls;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NavmeshCheckInterval;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOptimizationInterval;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SeparationDirClamp;                                       // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOffsetRadiusMultiplier;                               // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00 : 4;                                        // 0x0070(0x0001)
	unsigned char                                      bResolveCollisions : 1;                                   // 0x0070(0x0001) (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7F];                                      // 0x0071(0x007F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

};


// Class AIModule.EnvQueryNode
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator
// 0x0020 (0x0050 - 0x0030)
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoSortTests : 1;                                       // 0x0048(0x0001) (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0070 (0x00C0 - 0x0050)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                       // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                               // 0x0058(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SearchRadius;                                             // 0x0088(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                             // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x0050(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0168 (0x01E8 - 0x0080)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                             // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                           // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FEnvDirection                               ArcDirection;                                             // 0x0118(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0138(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              AngleRadians;                                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	class UClass*                                      CircleCenter;                                             // 0x0170(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;              // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                      // 0x0180(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvTraceData                               TraceData;                                                // 0x01B0(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                           // 0x01E0(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Point
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest
// 0x0190 (0x01C0 - 0x0030)
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvTestPurpose>                       TestPurpose;                                              // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	struct FString                                     TestComment;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvTestFilterOperator>                MultipleContextFilterOp;                                  // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvTestScoreOperator>                 MultipleContextScoreOp;                                   // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvTestFilterType>                    FilterType;                                               // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FAIDataProviderBoolValue                    BoolValue;                                                // 0x0050(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                            // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                            // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E0(0x0001) MISSED OFFSET
	TEnumAsByte<EEnvTestScoreEquation>                 ScoringEquation;                                          // 0x00E1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMinType;                                             // 0x00E2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvQueryTestClamping>                 ClampMaxType;                                             // 0x00E3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEQSNormalizationType                              NormalizationType;                                        // 0x00E4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                            // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                            // 0x0118(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                            // 0x0148(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                           // 0x0178(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bDefineReferenceValue;                                    // 0x01A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0xF];                                       // 0x01A9(0x000F) MISSED OFFSET
	unsigned char                                      bWorkOnFloatValues : 1;                                   // 0x01B8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

};


// Class AIModule.GenericTeamAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UGenericTeamAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

};


// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (0x0068 - 0x0028)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AIAsyncTaskBlueprintProxy.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.AIAsyncTaskBlueprintProxy.OnFail
	unsigned char                                      UnknownData02[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}


	void OnMoveCompleted(struct FAIRequestID RequestId, TEnumAsByte<EPathFollowingResult> MovementResult);
};


// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (0x0028 - 0x0028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}


	static void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	static class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail);
	static void SimpleMoveToLocation(class AController* Controller, struct FVector Goal);
	static void SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	static void SendAIMessage(class APawn* Target, struct FName Message, class UObject* MessageSource, bool bSuccess);
	static void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static bool IsValidAIRotation(struct FRotator Rotation);
	static bool IsValidAILocation(struct FVector Location);
	static bool IsValidAIDirection(struct FVector DirectionVector);
	static class UNavigationPath* GetCurrentPath(class AController* Controller);
	static class UBlackboardComponent* GetBlackboard(class AActor* Target);
	static class AAIController* GetAIController(class AActor* ControlledActor);
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, struct FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};


// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (0x0040 - 0x0028)
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

};


// Class AIModule.AIDataProvider_Random
// 0x0010 (0x0050 - 0x0040)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              min;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              max;                                                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInteger : 1;                                             // 0x0048(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}

};


// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (0x0028 - 0x0028)
class UAIPerceptionListenerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

};


// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (0x00C8 - 0x00B0)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}


	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};


// Class AIModule.AIResourceInterface
// 0x0000 (0x0028 - 0x0028)
class UAIResourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

};


// Class AIModule.AIResource_Movement
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Movement : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

};


// Class AIModule.AIResource_Logic
// 0x0000 (0x0038 - 0x0038)
class UAIResource_Logic : public UGameplayTaskResource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

};


// Class AIModule.AISense_Blueprint
// 0x0028 (0x00A8 - 0x0080)
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                         // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                        // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                        // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}


	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};


// Class AIModule.AISense_Damage
// 0x0010 (0x0090 - 0x0080)
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}


	static void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation);
};


// Class AIModule.AISense_Prediction
// 0x0010 (0x0090 - 0x0080)
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}


	static void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	static void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};


// Class AIModule.AISense_Sight
// 0x00D8 (0x0158 - 0x0080)
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0080(0x00B0) MISSED OFFSET
	int                                                MaxTracesPerTick;                                         // 0x0130(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinQueriesPerTimeSliceCheck;                              // 0x0134(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             MaxTimeSlicePerTick;                                      // 0x0138(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighImportanceQueryDistanceThreshold;                     // 0x0140(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	float                                              MaxQueryImportance;                                       // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SightLimitQueryImportance;                                // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

};


// Class AIModule.AISense_Team
// 0x0010 (0x0090 - 0x0080)
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

};


// Class AIModule.AISense_Touch
// 0x0010 (0x0090 - 0x0080)
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                         // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseBlueprintListener
// 0x0000 (0x00F0 - 0x00F0)
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

};


// Class AIModule.AISenseConfig
// 0x0020 (0x0048 - 0x0028)
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAge;                                                   // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bStartsEnabled : 1;                                       // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0031(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Damage
// 0x0008 (0x0050 - 0x0048)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Hearing
// 0x0018 (0x0060 - 0x0048)
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingRange;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoSHearingRange;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLoSHearing : 1;                                       // 0x0058(0x0001) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Prediction
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Sight
// 0x0020 (0x0068 - 0x0048)
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                          // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                             // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                   // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AutoSuccessRangeFromLastSeenLocation;                     // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Team
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

};


// Class AIModule.AISenseConfig_Touch
// 0x0000 (0x0048 - 0x0048)
class UAISenseConfig_Touch : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

};


// Class AIModule.AISenseEvent
// 0x0000 (0x0028 - 0x0028)
class UAISenseEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Damage
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

};


// Class AIModule.AISenseEvent_Hearing
// 0x0030 (0x0058 - 0x0028)
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                    // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

};


// Class AIModule.AISightTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UAISightTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

};


// Class AIModule.AITask_LockLogic
// 0x0000 (0x0070 - 0x0070)
class UAITask_LockLogic : public UAITask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}

};


// Class AIModule.AITask_RunEQS
// 0x0078 (0x00E8 - 0x0070)
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0070(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}


	static class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};


// Class AIModule.BehaviorTree
// 0x0038 (0x0060 - 0x0028)
class UBehaviorTree : public UObject
{
public:
	class UBTCompositeNode*                            RootNode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                        RootDecorators;                                           // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                         // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeManager
// 0x0028 (0x0050 - 0x0028)
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                         // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                          // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

};


// Class AIModule.BehaviorTreeTypes
// 0x0000 (0x0028 - 0x0028)
class UBehaviorTreeTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

};


// Class AIModule.BlackboardComponent
// 0x00F8 (0x01A8 - 0x00B0)
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                             BlackboardAsset;                                          // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x20];                                      // 0x00C0(0x0020) MISSED OFFSET
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                             // 0x00E0(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0xB8];                                      // 0x00F0(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}


	void SetValueAsVector(struct FName KeyName, struct FVector VectorValue);
	void SetValueAsString(struct FName KeyName, struct FString StringValue);
	void SetValueAsRotator(struct FName KeyName, struct FRotator VectorValue);
	void SetValueAsObject(struct FName KeyName, class UObject* ObjectValue);
	void SetValueAsName(struct FName KeyName, struct FName NameValue);
	void SetValueAsInt(struct FName KeyName, int IntValue);
	void SetValueAsFloat(struct FName KeyName, float FloatValue);
	void SetValueAsEnum(struct FName KeyName, unsigned char EnumValue);
	void SetValueAsClass(struct FName KeyName, class UClass* ClassValue);
	void SetValueAsBool(struct FName KeyName, bool BoolValue);
	bool IsVectorValueSet(struct FName KeyName);
	struct FVector GetValueAsVector(struct FName KeyName);
	struct FString GetValueAsString(struct FName KeyName);
	struct FRotator GetValueAsRotator(struct FName KeyName);
	class UObject* GetValueAsObject(struct FName KeyName);
	struct FName GetValueAsName(struct FName KeyName);
	int GetValueAsInt(struct FName KeyName);
	float GetValueAsFloat(struct FName KeyName);
	unsigned char GetValueAsEnum(struct FName KeyName);
	class UClass* GetValueAsClass(struct FName KeyName);
	bool GetValueAsBool(struct FName KeyName);
	bool GetRotationFromEntry(struct FName KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(struct FName KeyName, struct FVector* ResultLocation);
	void ClearValue(struct FName KeyName);
};


// Class AIModule.BlackboardData
// 0x0020 (0x0050 - 0x0030)
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlackboardEntry>                    Keys;                                                     // 0x0038(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bHasSynchronizedKeys : 1;                                 // 0x0048(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType
// 0x0008 (0x0030 - 0x0028)
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Class
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BASEClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (0x0050 - 0x0030)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumName;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnumNameValid : 1;                                     // 0x0048(0x0001) (Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Float
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Int
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Name
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (0x0048 - 0x0030)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                       EnumType;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Object
// 0x0008 (0x0038 - 0x0030)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BASEClass;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_String
// 0x0010 (0x0040 - 0x0030)
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

};


// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (0x0030 - 0x0030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

};


// Class AIModule.BTCompositeNode
// 0x0038 (0x0090 - 0x0058)
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                 // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBTService*>                          Services;                                                 // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET
	unsigned char                                      bApplyDecoratorScope : 1;                                 // 0x0088(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

};


// Class AIModule.BTComposite_Selector
// 0x0000 (0x0090 - 0x0090)
class UBTComposite_Selector : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

};


// Class AIModule.BTComposite_Sequence
// 0x0000 (0x0090 - 0x0090)
class UBTComposite_Sequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

};


// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (0x0098 - 0x0090)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<EBTParallelMode>                       FinishMode;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Blackboard
// 0x0030 (0x00C0 - 0x0090)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                 // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FloatValue;                                               // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     StringValue;                                              // 0x0098(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                        // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      OperationType;                                            // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EBTBlackboardRestart>                  NotifyObserver;                                           // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00BA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

};


// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (0x00A0 - 0x0068)
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                               // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ObservedKeyNames;                                         // 0x0078(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0098(0x0001) (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                 // 0x0098(0x0001) (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsObservingBB : 1;                                       // 0x0098(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};


// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0098(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                        // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

};


// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (0x00C0 - 0x0068)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<EBlackBoardEntryComparison>            Operator;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0098(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (0x00C0 - 0x00C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (0x00F0 - 0x0068)
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeDirection;                                            // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x00C0(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Cooldown
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                           // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                           // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUseSelf : 1;                                             // 0x00B8(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	TEnumAsByte<EPathExistanceQueryType>               PathQueryType;                                            // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	class UClass*                                      FilterClass;                                              // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsAtLocation
// 0x0040 (0x00D0 - 0x0090)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                             // 0x0098(0x0030) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	EFAIDistanceType                                   GeometricDistanceType;                                    // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	unsigned char                                      bUseParametrizedRadius : 1;                               // 0x00CC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                             // 0x00CC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathFindingBasedTest : 1;                                // 0x00CC(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

};


// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (0x0098 - 0x0090)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

};


// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (0x00C8 - 0x0068)
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      ConeOrigin;                                               // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                 // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsOrigin : 1;                                     // 0x00C0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsObserved : 1;                                   // 0x00C0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

};


// Class AIModule.BTDecorator_Loop
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteLoop;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              InfiniteLoopTimeoutTime;                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

};


// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (0x0068 - 0x0068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

};


// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (0x0078 - 0x0068)
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                   // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivatesCooldown;                                       // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0076(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

};


// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

};


// Class AIModule.BTFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}


	static void StopUsingExternalEvent(class UBTNode* NodeOwner);
	static void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	static void SetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FVector Value);
	static void SetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FString Value);
	static void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FRotator Value);
	static void SetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, class UObject* Value);
	static void SetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FName Value);
	static void SetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, int Value);
	static void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, float Value);
	static void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, unsigned char Value);
	static void SetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, class UClass* Value);
	static void SetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key, bool Value);
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	static struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static struct FString GetBlackboardValueAsString(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static struct FName GetBlackboardValueAsName(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static int GetBlackboardValueAsInt(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static unsigned char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
	static void ClearBlackboardValue(class UBTNode* NodeOwner, struct FBlackboardKeySelector Key);
};


// Class AIModule.BTService_BlueprintBase
// 0x0028 (0x0098 - 0x0070)
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x0090(0x0001) (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShowEventDetails : 1;                                    // 0x0090(0x0001) (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};


// Class AIModule.BTService_DefaultFocus
// 0x0008 (0x00A0 - 0x0098)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                            // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

};


// Class AIModule.BTService_RunEQS
// 0x0058 (0x00F0 - 0x0098)
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x0098(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}

};


// Class AIModule.BTTask_BlueprintBase
// 0x0038 (0x00A8 - 0x0070)
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                  // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                               // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntervalCountdown                          TickInterval;                                             // 0x0080(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	unsigned char                                      bShowPropertyDetails : 1;                                 // 0x00A0(0x0001) (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}


	void SetFinishOnMessageWithId(struct FName MessageName, int RequestId);
	void SetFinishOnMessage(struct FName MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};


// Class AIModule.BTTask_FinishWithResult
// 0x0008 (0x0078 - 0x0070)
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	TEnumAsByte<EBTNodeResult>                         Result;                                                   // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		return ptr;
	}

};


// Class AIModule.BTTask_MakeNoise
// 0x0008 (0x0078 - 0x0070)
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

};


// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (0x00B8 - 0x00B0)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;               // 0x00B0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                       // 0x00B0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                         // 0x00B0(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

};


// Class AIModule.BTTask_PawnActionBase
// 0x0000 (0x0070 - 0x0070)
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

};


// Class AIModule.BTTask_PlayAnimation
// 0x0040 (0x00B0 - 0x0070)
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                          // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                             // 0x0078(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNonBlocking : 1;                                         // 0x0078(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	class UBehaviorTreeComponent*                      MyOwnerComp;                                              // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                           // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

};


// Class AIModule.BTTask_PlaySound
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                              // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

};


// Class AIModule.BTTask_PushPawnAction
// 0x0008 (0x0078 - 0x0070)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                   // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

};


// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (0x00A0 - 0x0098)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehavior
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

};


// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (0x0088 - 0x0070)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                             // 0x0070(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                     // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               BehaviorAsset;                                            // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

};


// Class AIModule.BTTask_RunEQSQuery
// 0x00B8 (0x0150 - 0x0098)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                    // 0x00C8(0x0028) (Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                               bUseBBKey;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                               // 0x00F8(0x0048) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

};


// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (0x0080 - 0x0070)
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                              // 0x0070(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                   // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

};


// Class AIModule.BTTask_Wait
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomDeviation;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

};


// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (0x00A0 - 0x0078)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                            // 0x0078(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

};


// Class AIModule.CrowdAgentInterface
// 0x0000 (0x0028 - 0x0028)
class UCrowdAgentInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

};


// Class AIModule.DetourCrowdAIController
// 0x0000 (0x0320 - 0x0320)
class ADetourCrowdAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

};


// Class AIModule.EnvQuery
// 0x0018 (0x0048 - 0x0030)
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryOption*>                     Options;                                                  // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (0x0030 - 0x0028)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}


	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


// Class AIModule.EnvQueryContext_Item
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

};


// Class AIModule.EnvQueryContext_Querier
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

};


// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryDebugHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (0x0080 - 0x0050)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                              // 0x0050(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                  // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GeneratedItemType;                                        // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}


	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(struct FVector GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};


// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (0x0070 - 0x0050)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                               // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDifferentItemTypes : 1;                             // 0x0060(0x0001) (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasMatchingItemType : 1;                                 // 0x0060(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UClass*                                      ForcedItemType;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Cone
// 0x00D0 (0x0150 - 0x0080)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                    // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   AngleStep;                                                // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   Range;                                                    // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      CenterActor;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIncludeContextLocation : 1;                              // 0x0148(0x0001) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_Donut
// 0x0128 (0x01A8 - 0x0080)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                              // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                              // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfRings;                                            // 0x00E0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerRing;                                            // 0x0110(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                               ArcDirection;                                             // 0x0140(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                 // 0x0160(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUseSpiralPattern;                                        // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      Center;                                                   // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                           // 0x01A0(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0068 (0x00E8 - 0x0080)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                 // 0x0080(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                             // 0x00B0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      GenerateAround;                                           // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0068 (0x0150 - 0x00E8)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                               // 0x00E8(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationFilter;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0120(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

};


// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (0x0078 - 0x0028)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                QueryID;                                                  // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
	class UClass*                                      ItemType;                                                 // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                OptionIndex;                                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0064(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.EnvQueryInstanceBlueprintWrapper.OnQueryFinishedEvent

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}


	void SetNamedParam(struct FName ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
	bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors);
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
};


// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

};


// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (0x0030 - 0x0030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

};


// Class AIModule.EnvQueryManager
// 0x0108 (0x0140 - 0x0038)
class UEnvQueryManager : public UAISubsystem
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0038(0x0070) MISSED OFFSET
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                            // 0x00A8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                            // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                       // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x54];                                      // 0x00D8(0x0054) MISSED OFFSET
	float                                              MaxAllowedTestingTime;                                    // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTestQueriesUsingBreadth;                                 // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	int                                                QueryCountWarningThreshold;                               // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             QueryCountWarningInterval;                                // 0x0138(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}


	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};


// Class AIModule.EnvQueryOption
// 0x0018 (0x0040 - 0x0028)
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                       Tests;                                                    // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Distance
// 0x0010 (0x01D0 - 0x01C0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestDistance>                      TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      DistanceTo;                                               // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Dot
// 0x0048 (0x0208 - 0x01C0)
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                    // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                               LineB;                                                    // 0x01E0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	EEnvTestDot                                        TestMode;                                                 // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAbsoluteValue;                                           // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0202(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (0x0230 - 0x01C0)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                          // 0x01C0(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bUpdatedToUseQuery;                                       // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EGameplayContainerMatchType                        TagsToMatch;                                              // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0210(0x0020) (Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (0x01E0 - 0x01C0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                              // 0x01C0(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Pathfinding
// 0x0078 (0x0238 - 0x01C0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                 // 0x01C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	class UClass*                                      Context;                                                  // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    PathFromContext;                                          // 0x01D0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                          // 0x0200(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                              // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0030 (0x0268 - 0x0238)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                      // 0x0238(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Project
// 0x0030 (0x01F0 - 0x01C0)
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                           // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Random
// 0x0000 (0x01C0 - 0x01C0)
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Trace
// 0x00C8 (0x0288 - 0x01C0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                // 0x01C0(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                         // 0x01F0(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                         // 0x0220(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                      // 0x0250(0x0030) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

};


// Class AIModule.EnvQueryTest_Volume
// 0x0018 (0x01D8 - 0x01C0)
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UClass*                                      VolumeContext;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      VolumeClass;                                              // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bDoComplexVolumeTest : 1;                                 // 0x01D0(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		return ptr;
	}

};


// Class AIModule.EnvQueryTypes
// 0x0000 (0x0028 - 0x0028)
class UEnvQueryTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

};


// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (0x0028 - 0x0028)
class UEQSQueryResultSourceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

};


// Class AIModule.EQSRenderingComponent
// 0x0040 (0x0400 - 0x03C0)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

};


// Class AIModule.EQSTestingPawn
// 0x0090 (0x06C0 - 0x0630)
class AEQSTestingPawn : public ACharacter
{
public:
	class UEnvQuery*                                   QueryTemplate;                                            // 0x0630(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                              // 0x0638(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                              // 0x0648(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeLimitPerStep;                                         // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StepToDebugDraw;                                          // 0x065C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEnvQueryHightlightMode                            HighlightMode;                                            // 0x0660(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	unsigned char                                      bDrawLabels : 1;                                          // 0x0664(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedItems : 1;                                     // 0x0664(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                        // 0x0664(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                               // 0x0664(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTickDuringGame : 1;                                      // 0x0664(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	TEnumAsByte<EEnvQueryRunMode>                      QueryingMode;                                             // 0x0668(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0669(0x0007) MISSED OFFSET
	struct FNavAgentProperties                         NavAgentProperties;                                       // 0x0670(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x20];                                      // 0x06A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

};


// Class AIModule.GridPathAIController
// 0x0000 (0x0320 - 0x0320)
class AGridPathAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}

};


// Class AIModule.GridPathFollowingComponent
// 0x0030 (0x0288 - 0x0258)
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                              // 0x0258(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0260(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}

};


// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (0x0048 - 0x0048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}

};


// Class AIModule.NavLocalGridManager
// 0x0030 (0x0058 - 0x0028)
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}


	static bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	static void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	static bool FindLocalNavigationGridPath(class UObject* WorldContextObject, struct FVector Start, struct FVector End, TArray<struct FVector>* PathPoints);
	static int AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForPoint(class UObject* WorldContextObject, struct FVector Location, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, struct FVector Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	static int AddLocalNavigationGridForBox(class UObject* WorldContextObject, struct FVector Location, struct FVector Extent, struct FRotator Rotation, int Radius2D, float Height, bool bRebuildGrids);
};


// Class AIModule.PathFollowingManager
// 0x0000 (0x0028 - 0x0028)
class UPathFollowingManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		return ptr;
	}

};


// Class AIModule.PawnAction
// 0x0070 (0x0098 - 0x0028)
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnAction*                                 ParentAction;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnActionsComponent*                       OwnerComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     Instigator;                                               // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComp;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
	unsigned char                                      bAllowNewSameClassInstance : 1;                           // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                      // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldPauseMovement : 1;                                 // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                              // 0x0080(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0081(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}


	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	static class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};


// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (0x0098 - 0x0098)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}


	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);
};


// Class AIModule.PawnAction_Move
// 0x0050 (0x00E8 - 0x0098)
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     GoalLocation;                                             // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AcceptableRadius;                                         // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FilterClass;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowStrafe : 1;                                         // 0x00B8(0x0001) (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bFinishOnOverlap : 1;                                     // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUsePathfinding : 1;                                      // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowPartialPath : 1;                                    // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bProjectGoalToNavigation : 1;                             // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUpdatePathToGoal : 1;                                    // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                        // 0x00B8(0x0001) (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x00B9(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

};


// Class AIModule.PawnAction_Repeat
// 0x0020 (0x00B8 - 0x0098)
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00A9(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

};


// Class AIModule.PawnAction_Sequence
// 0x0028 (0x00C0 - 0x0098)
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                           // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<EPawnActionFailHandling>               ChildFailureHandlingMode;                                 // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class UPawnAction*                                 RecentActionCopy;                                         // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

};


// Class AIModule.PawnAction_Wait
// 0x0010 (0x00A8 - 0x0098)
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x009C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

};


// Class AIModule.PawnActionsComponent
// 0x0038 (0x00E8 - 0x00B0)
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                           // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionStack>                    ActionStacks;                                             // 0x00B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                             // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPawnAction*                                 CurrentAction;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}


	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	static bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};


// Class AIModule.PawnSensingComponent
// 0x0048 (0x00F8 - 0x00B0)
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOSHearingThreshold;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                              // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensingInterval;                                          // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingMaxSoundAge;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableSensingUpdates : 1;                                // 0x00C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlySensePlayers : 1;                                    // 0x00C4(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSeePawns : 1;                                            // 0x00C4(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHearNoises : 1;                                          // 0x00C4(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xB];                                       // 0x00C5(0x000B) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C5(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.PawnSensingComponent.OnSeePawn
	unsigned char                                      UnknownData02[0x10];                                      // 0x00E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AIModule.PawnSensingComponent.OnHearNoise
	float                                              PeripheralVisionAngle;                                    // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PeripheralVisionCosine;                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}


	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};


// Class AIModule.VisualLoggerExtension
// 0x0000 (0x0028 - 0x0028)
class UVisualLoggerExtension : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
