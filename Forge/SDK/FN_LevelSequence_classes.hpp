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

// Class LevelSequence.LevelSequence
// 0x0150 (0x0498 - 0x0348)
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                         // 0x0350(0x0050) (Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x03A0(0x00A0) (Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x0440(0x0050) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DirectorClass;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}


	void RemoveMetaDataByClass(class UClass* InClass);
	class UObject* FindOrAddMetaDataByClass(class UClass* InClass);
	class UObject* FindMetaDataByClass(class UClass* InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x0048 (0x0070 - 0x0028)
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class AActor*                                      TransformOriginActor;                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  TransformOrigin;                                          // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMetaData
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceMetaData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (0x0028 - 0x0028)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0028 (0x0050 - 0x0028)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0048(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}


	void SetBurnIn(struct FSoftClassPath InBurnInClass);
};


// Class LevelSequence.LevelSequenceActor
// 0x0080 (0x0298 - 0x0218)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0218(0x0010) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0228(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             LevelSequence;                                            // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoPlay : 1;                                            // 0x0280(0x0001) (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideInstanceData : 1;                                // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReplicatePlayback : 1;                                   // 0x0280(0x0001) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UObject*                                     DefaultInstanceData;                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(struct FMovieSceneObjectBindingID Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(struct FMovieSceneObjectBindingID Binding);
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	void AddBinding(struct FMovieSceneObjectBindingID Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x00A0 (0x02C8 - 0x0228)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                         // 0x0228(0x0098) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequenceDirector
// 0x0008 (0x0030 - 0x0028)
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                        Player;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0x0000 (0x00D8 - 0x00D8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x0140 (0x0908 - 0x07C8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty LevelSequence.LevelSequencePlayer.OnCameraCut
	unsigned char                                      UnknownData01[0x130];                                     // 0x07D8(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	class UCameraComponent* GetActiveCameraComponent();
	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, class ALevelSequenceActor** OutActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
