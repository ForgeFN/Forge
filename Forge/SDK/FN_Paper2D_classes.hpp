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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x0120 - 0x0100)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                               bSampleAdditionalTextures;                                // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	int                                                AdditionalSlotIndex;                                      // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       SlotDisplayName;                                          // 0x0108(0x0018) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0000 (0x0630 - 0x0630)
class APaperCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0050 - 0x0028)
class UPaperFlipbook : public UObject
{
public:
	float                                              FramesPerSecond;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FPaperFlipbookKeyFrame>              Keyframes;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}


	bool IsValidKeyFrameIndex(int Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int FrameIndex);
	int GetNumKeyFrames();
	int GetNumFrames();
	int GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x0220 - 0x0218)
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0040 (0x0430 - 0x03F0)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x03F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayRate;                                                 // 0x03F8(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLooping : 1;                                             // 0x03FC(0x0001) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReversePlayback : 1;                                     // 0x03FC(0x0001) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bPlaying : 1;                                             // 0x03FC(0x0001) (Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	float                                              AccumulatedTime;                                          // 0x0400(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                CachedFrameIndex;                                         // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0420(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Paper2D.PaperFlipbookComponent.OnFinishedPlaying

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}


	void Stop();
	void SetSpriteColor(struct FLinearColor NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	int GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x0220 - 0x0218)
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x0420 - 0x03F0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F0(0x0008) MISSED OFFSET
	TArray<struct FSpriteInstanceData>                 PerInstanceSpriteData;                                    // 0x03F8(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}


	bool UpdateInstanceTransform(int InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis);
	bool RemoveInstance(int InstanceIndex);
	bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	int GetInstanceCount();
	void ClearInstances();
	int AddInstance(struct FTransform Transform, class UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color);
};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                               bEnableSpriteAtlasGroups;                                 // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableTerrainSplineEditing;                              // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResizeSpriteDataToMatchTextures;                         // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0080 (0x00A8 - 0x0028)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceUV;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   BakedSourceDimension;                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                                  BakedSourceTexture;                                       // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          AlternateMaterial;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>                  Sockets;                                                  // 0x0070(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              PixelsPerUnrealUnit;                                      // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                                  BodySetup;                                                // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AlternateMaterialSplitIndex;                              // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FVector4>                            BakedRenderData;                                          // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x0220 - 0x0218)
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                       RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}


	static struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height);
};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x0410 - 0x03F0)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UMaterialInterface*                          MaterialOverride;                                         // 0x03F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                SpriteColor;                                              // 0x03F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}


	void SetSpriteColor(struct FLinearColor NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x0230 - 0x0218)
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                             DummyRoot;                                                // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*                SplineComponent;                                          // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                      RenderComponent;                                          // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0060 (0x0420 - 0x03C0)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClosedSpline;                                            // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilledSpline;                                            // 0x03C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                         // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RandomSeed;                                               // 0x03D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SegmentOverlapAmount;                                     // 0x03DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                TerrainColor;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReparamStepsPerSegment;                                   // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x03F4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	float                                              CollisionThickness;                                       // 0x03F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}


	void SetTerrainColor(struct FLinearColor NewColor);
};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0048 - 0x0030)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>           Rules;                                                    // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                InteriorFill;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (0x04D0 - 0x04C0)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x0098 - 0x0028)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                LayerWidth;                                               // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LayerHeight;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHiddenInGame : 1;                                        // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bLayerCollides : 1;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionThickness : 1;                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bOverrideCollisionOffset : 1;                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              CollisionThicknessOverride;                               // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CollisionOffsetOverride;                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                LayerColor;                                               // 0x0054(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FPaperTileInfo>                      AllocatedCells;                                           // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               TileSet;                                                  // 0x0080(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int>                                        AllocatedGrid;                                            // 0x0088(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileMap : public UObject
{
public:
	int                                                MapWidth;                                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileWidth;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileHeight;                                               // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelsPerUnrealUnit;                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileX;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerTileY;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeparationPerLayer;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Paper2D.PaperTileMap.SelectedTileSet
	class UMaterialInterface*                          Material;                                                 // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0078(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                       // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                    // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                           // 0x008D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	int                                                HexSideLength;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerNameIndex;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x0220 - 0x0218)
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                      RenderComponent;                                          // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x0440 - 0x03F0)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int                                                TileWidth;                                                // 0x03F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                               // 0x03F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                               DefaultLayerTileSet;                                      // 0x03F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                 // 0x0400(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>                     TileLayers;                                               // 0x0408(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	struct FLinearColor                                TileMapColor;                                             // 0x0418(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                UseSingleLayerIndex;                                      // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseSingleLayer;                                          // 0x042C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UPaperTileMap*                               TileMap;                                                  // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}


	void SetTileMapColor(struct FLinearColor NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int X, int Y, int Layer, struct FPaperTileInfo NewValue);
	void SetLayerColor(struct FLinearColor NewColor, int Layer);
	void SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int NewWidthInTiles, int NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int TileX, int TileY, int LayerIndex, bool bWorldSpace, TArray<struct FVector>* Points);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FVector GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace);
	struct FPaperTileInfo GetTile(int X, int Y, int Layer);
	void GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers);
	struct FLinearColor GetLayerColor(int Layer);
	void CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};


// Class Paper2D.PaperTileSet
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                                   TileSize;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                                  TileSheet;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                            AdditionalSourceTextures;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	struct FIntMargin                                  BorderMargin;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   PerTileSpacing;                                           // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                                   DrawingOffset;                                            // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                WidthInTiles;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                HeightInTiles;                                            // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedWidth;                                           // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                AllocatedHeight;                                          // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>                  PerTileData;                                              // 0x0078(0x0010) (Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>                Terrains;                                                 // 0x0088(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                TileWidth;                                                // 0x0098(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TileHeight;                                               // 0x009C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Margin;                                                   // 0x00A0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Spacing;                                                  // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}


	static struct FPaperTileInfo MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	static struct FName GetTileUserData(struct FPaperTileInfo Tile);
	static struct FTransform GetTileTransform(struct FPaperTileInfo Tile);
	static void BreakTile(struct FPaperTileInfo Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
