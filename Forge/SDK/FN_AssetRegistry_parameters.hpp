#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
	struct FARFilter                                   InFilter;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FTagAndValue>                        InTagsAndValues;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistryHelpers_IsValid_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistryHelpers_IsUAsset_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistryHelpers_IsRedirector_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistryHelpers_GetTagValue_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InTagName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutTagValue;                                              // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistryHelpers_GetFullName_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistryHelpers_GetExportTextName_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistryHelpers_GetClass_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
	TScriptInterface<class UAssetRegistry>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistryHelpers_GetAsset_Params
{
	struct FAssetData                                  InAssetData;                                              // (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistryHelpers_CreateAssetData_Params
{
	class UObject*                                     InAsset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBlueprintClass;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct UAssetRegistry_UseFilterToExcludeAssets_Params
{
	TArray<struct FAssetData>                          AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct UAssetRegistry_SearchAllAssets_Params
{
	bool                                               bSynchronousSearch;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct UAssetRegistry_ScanPathsSynchronous_Params
{
	TArray<struct FString>                             InPaths;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct UAssetRegistry_ScanModifiedAssetFiles_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct UAssetRegistry_ScanFilesSynchronous_Params
{
	TArray<struct FString>                             InFilePaths;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bForceRescan;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct UAssetRegistry_RunAssetsThroughFilter_Params
{
	TArray<struct FAssetData>                          AssetDataList;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct UAssetRegistry_PrioritizeSearchPath_Params
{
	struct FString                                     PathToPrioritize;                                         // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct UAssetRegistry_K2_GetReferencers_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetRegistryDependencyOptions             ReferenceOptions;                                         // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OutReferencers;                                           // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct UAssetRegistry_K2_GetDependencies_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetRegistryDependencyOptions             DependencyOptions;                                        // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OutDependencies;                                          // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct UAssetRegistry_IsLoadingAssets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.HasAssets
struct UAssetRegistry_HasAssets_Params
{
	struct FName                                       PackagePath;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecursive;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetSubPaths
struct UAssetRegistry_GetSubPaths_Params
{
	struct FString                                     InBasePath;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bInRecurse;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct UAssetRegistry_GetAssetsByPath_Params
{
	struct FName                                       PackagePath;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRecursive;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct UAssetRegistry_GetAssetsByPackageName_Params
{
	struct FName                                       PackageName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct UAssetRegistry_GetAssetsByClass_Params
{
	struct FName                                       ClassName;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bSearchSubClasses;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssets
struct UAssetRegistry_GetAssets_Params
{
	struct FARFilter                                   Filter;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct UAssetRegistry_GetAssetByObjectPath_Params
{
	struct FName                                       ObjectPath;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetData                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct UAssetRegistry_GetAllCachedPaths_Params
{
	TArray<struct FString>                             OutPathList;                                              // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AssetRegistry.AssetRegistry.GetAllAssets
struct UAssetRegistry_GetAllAssets_Params
{
	TArray<struct FAssetData>                          OutAssetData;                                             // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
