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

// Class EpicCMSUIFramework.EpicCMSImage
// 0x00B0 (0x0380 - 0x02D0)
class UEpicCMSImage : public UCommonLazyImage
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty EpicCMSUIFramework.EpicCMSImage.OnImageLoadingComplete
	struct FSlateBrush                                 LoadingFailFallback;                                      // 0x02E0(0x0088) (Edit, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  ExternalMedia;                                            // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDownloadingExternalMedia;                                // 0x0370(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0371(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSImage");
		return ptr;
	}


	void SetMediaURL(struct FString MediaUrl);
};


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0290 - 0x0228)
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>                    CarouselSlotDescriptions;                                 // 0x0228(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      CarouselClass;                                            // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0240(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSLayoutBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSManager
// 0x0090 (0x00B8 - 0x0028)
class UEpicCMSManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	struct FString                                     CmsEndpointOverride;                                      // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRefreshing;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x67];                                      // 0x0051(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSManager");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0090 (0x03A8 - 0x0318)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	struct FString                                     TileSetFieldName;                                         // 0x0318(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.TileTypeToTileClassDataTable
	unsigned char                                      UnknownData01[0x28];                                      // 0x0350(0x0028) UNKNOWN PROPERTY: SoftClassProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutErrorClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutTypeToLayoutClassDataTable
	unsigned char                                      UnknownData03[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSScreenBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSSimpleMessage
// 0x0018 (0x0248 - 0x0230)
class UEpicCMSSimpleMessage : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                            TitleText;                                                // 0x0230(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                            BodyText;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                               PrimaryImage;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSSimpleMessage");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0110 (0x0C50 - 0x0B40)
class UEpicCMSTileBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B40(0x0008) MISSED OFFSET
	class UClass*                                      DefaultTitleTextStyle;                                    // 0x0B48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FeaturedTitleTextStyle;                                   // 0x0B50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FText                                       Title;                                                    // 0x0B58(0x0018) (BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FString                                     Link;                                                     // 0x0B70(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDownloadingExternalMedia;                                // 0x0B80(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRefreshingMcpCatalog;                                    // 0x0B81(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0B82(0x0006) MISSED OFFSET
	class UTexture2D*                                  ExternalMedia;                                            // 0x0B88(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0B90(0x00A0) MISSED OFFSET
	class UCommonLazyImage*                            LazyImage_Icon;                                           // 0x0C30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TitleTextBlock;                                           // 0x0C38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            SubtitleTextBlock;                                        // 0x0C40(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            EyebrowTextBlock;                                         // 0x0C48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileBase");
		return ptr;
	}


	void Launch();
};


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0278 - 0x0228)
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                                 PreviousButtonSound;                                      // 0x0228(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                                 NextButtonSound;                                          // 0x0240(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                       Carousel;                                                 // 0x0258(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     NextPageButton;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     PreviousPageButton;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bShouldShowNavigationOnlyOnHover;                         // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInputActionsForPaging;                                   // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsShowingNavigation;                                     // 0x0272(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0273(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileCarousel");
		return ptr;
	}


	void SetCurrentPageByIndex(int PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int GetCurrentPageIndex();
	void BeginAutoScrolling();
	void AddTilePage(class UWidget* TilePageWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
