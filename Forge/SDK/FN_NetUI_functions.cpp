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

// Function NetUI.BadNetworkIndicator.UpdateDisplay
// (Event, Protected, BlueprintEvent)

void UBadNetworkIndicator::UpdateDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.UpdateDisplay");

	UBadNetworkIndicator_UpdateDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.BadNetworkIndicator.ShouldDisplay
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::ShouldDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.ShouldDisplay");

	UBadNetworkIndicator_ShouldDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.HasSeverePing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePing()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.HasSeverePing");

	UBadNetworkIndicator_HasSeverePing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.HasSeverePacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasSeverePacketLoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.HasSeverePacketLoss");

	UBadNetworkIndicator_HasSeverePacketLoss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.HasBadPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.HasBadPing");

	UBadNetworkIndicator_HasBadPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.HasBadPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBadNetworkIndicator::HasBadPacketLoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.HasBadPacketLoss");

	UBadNetworkIndicator_HasBadPacketLoss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.GetPing
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.GetPing");

	UBadNetworkIndicator_GetPing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.BadNetworkIndicator.GetPacketLoss
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBadNetworkIndicator::GetPacketLoss()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.BadNetworkIndicator.GetPacketLoss");

	UBadNetworkIndicator_GetPacketLoss_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NetUI.NetDebugWidget.StopTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StopTimer");

	UNetDebugWidget_StopTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NetUI.NetDebugWidget.StartTimer
// (Final, Native, Protected, BlueprintCallable)

void UNetDebugWidget::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function NetUI.NetDebugWidget.StartTimer");

	UNetDebugWidget_StartTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
