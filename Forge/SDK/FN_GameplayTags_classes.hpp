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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	static bool RemoveGameplayTag(struct FGameplayTag Tag, struct FGameplayTagContainer* TagContainer);
	static bool NotEqual_TagTag(struct FGameplayTag A, struct FString B);
	static bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B);
	static bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer A, struct FGameplayTagContainer B);
	static bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);
	static bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch);
	static bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer OtherContainer, bool bExactMatch);
	static struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value);
	static struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value);
	static struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag);
	static struct FGameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	static bool IsTagQueryEmpty(struct FGameplayTagQuery TagQuery);
	static bool IsGameplayTagValid(struct FGameplayTag GameplayTag);
	static bool HasTag(struct FGameplayTagContainer TagContainer, struct FGameplayTag Tag, bool bExactMatch);
	static bool HasAnyTags(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bExactMatch);
	static bool HasAllTags(struct FGameplayTagContainer TagContainer, struct FGameplayTagContainer OtherContainer, bool bExactMatch);
	static bool HasAllMatchingGameplayTags(TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer OtherContainer);
	static struct FName GetTagName(struct FGameplayTag GameplayTag);
	static int GetNumGameplayTagsInContainer(struct FGameplayTagContainer TagContainer);
	static struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer TagContainer);
	static struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag);
	static void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, class UClass* ActorClass, struct FGameplayTagQuery GameplayTagQuery, TArray<class AActor*>* OutActors);
	static bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer A, struct FGameplayTagContainer B);
	static bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B);
	static bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag);
	static bool DoesContainerMatchTagQuery(struct FGameplayTagContainer TagContainer, struct FGameplayTagQuery TagQuery);
	static void BreakGameplayTagContainer(struct FGameplayTagContainer GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	static void AppendGameplayTagContainers(struct FGameplayTagContainer InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
	static void AddGameplayTag(struct FGameplayTag Tag, struct FGameplayTagContainer* TagContainer);
};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck);
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer TagContainer);
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};


// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	class UEditableGameplayTagQueryExpression*         RootExpression;                                           // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                // 0x0050(0x0048) (NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                     // 0x0028(0x0020) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsManager
// 0x01E8 (0x0210 - 0x0028)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET
	TArray<struct FGameplayTagSource>                  TagSources;                                               // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xE0];                                      // 0x00D0(0x00E0) MISSED OFFSET
	TArray<class UDataTable*>                          GameplayTagTables;                                        // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagTableRow>                GameplayTagList;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.RestrictedGameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class URestrictedGameplayTagsList : public UObject
{
public:
	struct FString                                     ConfigFileName;                                           // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedGameplayTagTableRow>      RestrictedGameplayTagList;                                // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x0070 (0x00B8 - 0x0048)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                               ImportTagsFromConfig;                                     // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               WarnOnInvalidTags;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FastReplication;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET
	struct FString                                     InvalidTagCharacters;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagCategoryRemap>           CategoryRemapping;                                        // 0x0060(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     GameplayTagTableList;                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FGameplayTagRedirect>                GameplayTagRedirects;                                     // 0x0080(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FName>                               CommonlyReplicatedTags;                                   // 0x0090(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int                                                NumBitsForContainerSize;                                  // 0x00A0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetIndexFirstBitSegment;                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRestrictedConfigInfo>               RestrictedConfigFiles;                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	struct FString                                     DeveloperConfigName;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
