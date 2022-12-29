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

// Function McpProfileSys.McpProfile.UnlockProfileForWrite
struct UMcpProfile_UnlockProfileForWrite_Params
{
	struct FString                                     Code;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDedicatedServerUrlContext                  Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.QueryPublicProfile
struct UMcpProfile_QueryPublicProfile_Params
{
	struct FBaseUrlContext                             Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.QueryProfile
struct UMcpProfile_QueryProfile_Params
{
	struct FBaseUrlContext                             Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.LockProfileForWrite
struct UMcpProfile_LockProfileForWrite_Params
{
	struct FString                                     Code;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDedicatedServerUrlContext                  Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.DeleteProfile
struct UMcpProfile_DeleteProfile_Params
{
	struct FClientUrlContext                           Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.DeleteAllProfiles
struct UMcpProfile_DeleteAllProfiles_Params
{
	struct FClientUrlContext                           Context;                                                  // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
