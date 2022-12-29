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

// Class AssetRegistry.AssetRegistryImpl
// 0x0750 (0x0778 - 0x0028)
class UAssetRegistryImpl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x750];                                     // 0x0028(0x0750) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
		return ptr;
	}

};


// Class AssetRegistry.AssetRegistryHelpers
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistryHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
		return ptr;
	}


	static struct FSoftObjectPath ToSoftObjectPath(struct FAssetData InAssetData);
	static struct FARFilter SetFilterTagsAndValues(struct FARFilter InFilter, TArray<struct FTagAndValue> InTagsAndValues);
	static bool IsValid(struct FAssetData InAssetData);
	static bool IsUAsset(struct FAssetData InAssetData);
	static bool IsRedirector(struct FAssetData InAssetData);
	static bool IsAssetLoaded(struct FAssetData InAssetData);
	static bool GetTagValue(struct FAssetData InAssetData, struct FName InTagName, struct FString* OutTagValue);
	static struct FString GetFullName(struct FAssetData InAssetData);
	static struct FString GetExportTextName(struct FAssetData InAssetData);
	static class UClass* GetClass(struct FAssetData InAssetData);
	static TScriptInterface<class UAssetRegistry> GetAssetRegistry();
	static class UObject* GetAsset(struct FAssetData InAssetData);
	static struct FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};


// Class AssetRegistry.AssetRegistry
// 0x0000 (0x0028 - 0x0028)
class UAssetRegistry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
		return ptr;
	}


	void UseFilterToExcludeAssets(struct FARFilter Filter, TArray<struct FAssetData>* AssetDataList);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan);
	void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);
	void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(struct FARFilter Filter, TArray<struct FAssetData>* AssetDataList);
	void PrioritizeSearchPath(struct FString PathToPrioritize);
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions ReferenceOptions, TArray<struct FName>* OutReferencers);
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions DependencyOptions, TArray<struct FName>* OutDependencies);
	bool IsLoadingAssets();
	bool HasAssets(struct FName PackagePath, bool bRecursive);
	void GetSubPaths(struct FString InBasePath, bool bInRecurse, TArray<struct FString>* OutPathList);
	bool GetAssetsByPath(struct FName PackagePath, bool bRecursive, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByPackageName(struct FName PackageName, bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
	bool GetAssetsByClass(struct FName ClassName, bool bSearchSubClasses, TArray<struct FAssetData>* OutAssetData);
	bool GetAssets(struct FARFilter Filter, TArray<struct FAssetData>* OutAssetData);
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	void GetAllCachedPaths(TArray<struct FString>* OutPathList);
	bool GetAllAssets(bool bIncludeOnlyOnDiskAssets, TArray<struct FAssetData>* OutAssetData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
