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

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
struct UEpicCMSImage_SetMediaURL_Params
{
	struct FString                                     MediaUrl;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileBase.Launch
struct UEpicCMSTileBase_Launch_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
struct UEpicCMSTileCarousel_SetCurrentPageByIndex_Params
{
	int                                                PageIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage
struct UEpicCMSTileCarousel_PreviousPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage
struct UEpicCMSTileCarousel_NextPage_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
struct UEpicCMSTileCarousel_NavigationVisibilityChanged_Params
{
	bool                                               bShowNavigation;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
struct UEpicCMSTileCarousel_HandleTilePageAdded_Params
{
	class UWidget*                                     TileWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
struct UEpicCMSTileCarousel_GetCurrentPageIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling
struct UEpicCMSTileCarousel_BeginAutoScrolling_Params
{
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
struct UEpicCMSTileCarousel_AddTilePage_Params
{
	class UWidget*                                     TilePageWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
