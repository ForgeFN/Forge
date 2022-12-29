#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AssetRegistry.AssetData
// 0x0050
struct FAssetData
{
	struct FName                                       ObjectPath;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PackageName;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PackagePath;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AssetName;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AssetClass;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct AssetRegistry.ARFilter
// 0x00E8
struct FARFilter
{
	TArray<struct FName>                               PackageNames;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PackagePaths;                                             // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ObjectPaths;                                              // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ClassNames;                                               // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0040(0x0050) UNKNOWN PROPERTY: SetProperty AssetRegistry.ARFilter.RecursiveClassesExclusionSet
	bool                                               bRecursivePaths;                                          // 0x00E0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRecursiveClasses;                                        // 0x00E1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeOnlyOnDiskAssets;                                 // 0x00E2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x5];                                       // 0x00E3(0x0005) MISSED OFFSET
};

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018
struct FTagAndValue
{
	struct FName                                       Tag;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                    // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// 0x0005
struct FAssetRegistryDependencyOptions
{
	bool                                               bIncludeSoftPackageReferences;                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeHardPackageReferences;                            // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeSearchableNames;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeSoftManagementReferences;                         // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeHardManagementReferences;                         // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028
struct FAssetBundleEntry
{
	struct FPrimaryAssetId                             BundleScope;                                              // 0x0000(0x0010) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BundleName;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     BundleAssets;                                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010
struct FAssetBundleData
{
	TArray<struct FAssetBundleEntry>                   Bundles;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
