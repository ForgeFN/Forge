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

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MediaUrl                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSImage::SetMediaURL(struct FString MediaUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL");

	UEpicCMSImage_SetMediaURL_Params params;
	params.MediaUrl = MediaUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileBase::Launch()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileBase.Launch");

	UEpicCMSTileBase_Launch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            PageIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::SetCurrentPageByIndex(int PageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex");

	UEpicCMSTileCarousel_SetCurrentPageByIndex_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::PreviousPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage");

	UEpicCMSTileCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
// (Final, Native, Protected, BlueprintCallable)

void UEpicCMSTileCarousel::NextPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage");

	UEpicCMSTileCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bShowNavigation                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::NavigationVisibilityChanged(bool bShowNavigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged");

	UEpicCMSTileCarousel_NavigationVisibilityChanged_Params params;
	params.bShowNavigation = bShowNavigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                 TileWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::HandleTilePageAdded(class UWidget* TileWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded");

	UEpicCMSTileCarousel_HandleTilePageAdded_Params params;
	params.TileWidget = TileWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int UEpicCMSTileCarousel::GetCurrentPageIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex");

	UEpicCMSTileCarousel_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)

void UEpicCMSTileCarousel::BeginAutoScrolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling");

	UEpicCMSTileCarousel_BeginAutoScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 TilePageWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEpicCMSTileCarousel::AddTilePage(class UWidget* TilePageWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage");

	UEpicCMSTileCarousel_AddTilePage_Params params;
	params.TilePageWidget = TilePageWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
