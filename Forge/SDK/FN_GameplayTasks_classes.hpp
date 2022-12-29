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

// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (0x0120 - 0x00B0)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B0(0x000C) MISSED OFFSET
	unsigned char                                      UnknownData01 : 1;                                        // 0x00BC(0x0001)
	unsigned char                                      bIsNetDirty : 1;                                          // 0x00BC(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x00C0(0x0010) (Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x00D0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class UGameplayTask*>                       TickingTasks;                                             // 0x00F0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                       KnownTasks;                                               // 0x0100(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTasksComponent.OnClaimedResourcesChange

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}


	void OnRep_SimulatedTasks();
	static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};


// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                    // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x25];                                      // 0x003B(0x0025) MISSED OFFSET
	class UGameplayTask*                               ChildTask;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	static class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, struct FName TaskInstanceName);
	static class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner, class UClass* ResourceClass, unsigned char Priority, struct FName TaskInstanceName);
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTask_SpawnActor.Success
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTask_SpawnActor.DidNotSpawn
	unsigned char                                      UnknownData02[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}


	static class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0098 - 0x0068)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTask_TimeLimitedExecution.OnFinished
	unsigned char                                      UnknownData01[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTask_TimeLimitedExecution.OnTimeExpired
	unsigned char                                      UnknownData02[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty GameplayTasks.GameplayTask_WaitDelay.OnFinish
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}


	static class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
