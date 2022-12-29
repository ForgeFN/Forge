// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function McpProfileSys.McpProfile.UnlockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FString                 Code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::UnlockProfileForWrite(struct FString Code, struct FDedicatedServerUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.UnlockProfileForWrite");

	UMcpProfile_UnlockProfileForWrite_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.QueryPublicProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FBaseUrlContext         Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryPublicProfile(struct FBaseUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.QueryPublicProfile");

	UMcpProfile_QueryPublicProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.QueryProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FBaseUrlContext         Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.QueryProfile");

	UMcpProfile_QueryProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.LockProfileForWrite
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FString                 Code                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Timeout                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDedicatedServerUrlContext Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::LockProfileForWrite(struct FString Code, int Timeout, struct FDedicatedServerUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.LockProfileForWrite");

	UMcpProfile_LockProfileForWrite_Params params;
	params.Code = Code;
	params.Timeout = Timeout;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.DeleteProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteProfile");

	UMcpProfile_DeleteProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function McpProfileSys.McpProfile.DeleteAllProfiles
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)

void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteAllProfiles");

	UMcpProfile_DeleteAllProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
