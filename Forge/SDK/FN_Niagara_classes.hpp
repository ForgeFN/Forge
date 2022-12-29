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

// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0030 (0x0098 - 0x0068)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0068(0x0030) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0098 - 0x0098)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0000 (0x00E0 - 0x00E0)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x00A0 - 0x0098)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0008 (0x0220 - 0x0218)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x01E0 (0x05A0 - 0x03C0)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                    // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x03C8(0x0148) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      bForceSolo : 1;                                           // 0x0510(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0511(0x0027) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0538(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x0538(0x0001) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x0538(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0539(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Niagara.NiagaraComponent.OnSystemFinished
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AutoAttachSocketName;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x0562(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0563(0x0001) MISSED OFFSET
	int                                                PreviewDetailLevel;                                       // 0x0564(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PreviewLODDistance;                                       // 0x0568(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePreviewDetailLevel : 1;                            // 0x056C(0x0001) (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnablePreviewLODDistance : 1;                            // 0x056C(0x0001) (Edit, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x33];                                      // 0x056D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue);
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue);
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue);
	void SetVariableQuat(struct FName InVariableName, struct FQuat InValue);
	void SetVariableObject(struct FName InVariableName, class UObject* Object);
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue);
	void SetVariableInt(struct FName InVariableName, int InValue);
	void SetVariableFloat(struct FName InVariableName, float InValue);
	void SetVariableBool(struct FName InVariableName, bool InValue);
	void SetVariableActor(struct FName InVariableName, class AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPreviewDetailLevel(bool bEnablePreviewDetailLevel, int PreviewDetailLevel);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue);
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue);
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue);
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue);
	void SetNiagaraVariableObject(struct FString InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue);
	void SetNiagaraVariableInt(struct FString InVariableName, int InValue);
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue);
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue);
	void SetNiagaraVariableActor(struct FString InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};


// Class Niagara.NiagaraDataInterface
// 0x0010 (0x0038 - 0x0028)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0020 (0x0058 - 0x0038)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              LUTMinTime;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTMaxTime;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              LUTInvTimeRange;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUseLUT : 1;                                              // 0x0054(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  GreenCurve;                                               // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  BlueCurve;                                                // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00D8 - 0x0058)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0038 - 0x0038)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0090 (0x00C8 - 0x0038)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class USkeletalMesh*                               DefaultMesh;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                        // 0x0048(0x0030) (Edit, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x0078(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0088(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                WholeMeshLOD;                                             // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<struct FName>                               SpecificBones;                                            // 0x00A0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SpecificSockets;                                          // 0x00B0(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (0x0068 - 0x0038)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Source;                                                   // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0050(0x0010) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (0x0040 - 0x0038)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0158 - 0x0058)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  WCurve;                                                   // 0x01D8(0x0080) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01D8 - 0x0058)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileX;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileY;                                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTileZ;                                                   // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0043(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x0138 (0x0160 - 0x0028)
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0030(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0058(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  // 0x0080(0x0028) (NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 // 0x00A8(0x0028) (NativeAccessSpecifierPublic)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x00D4(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MinDetailLevel;                                           // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDetailLevel;                                           // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x00F8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedBounds : 1;                                         // 0x00F8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x00F8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x00F8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x00F8(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00F9(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x0100(0x0001) (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FString                                     UniqueEmitterName;                                        // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x0118(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x0128(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x0140(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UNiagaraEmitter*                             Parent;                                                   // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraEmitter*                             ParentAtLastMerge;                                        // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate);
	static class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate);
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class UStaticMesh* StaticMesh);
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, struct FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};


// Class Niagara.NiagaraRendererProperties
// 0x0008 (0x0030 - 0x0028)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x0378 (0x03A8 - 0x0030)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x0030(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x0030(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideRenderingEnabled : 1;                            // 0x0030(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ColorAdd;                                                 // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0048(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x00D8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0168(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01F8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x0288(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x0318(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x06E8 (0x0718 - 0x0030)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x003C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x003C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0058(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00E8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0178(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0208(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0298(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0328(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03B8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0448(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x04D8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0568(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x05F8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0688(0x0090) (Edit, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x0110 (0x0138 - 0x0028)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x00F8) (NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter(struct FString InVariableName, struct FVector InValue);
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue);
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue);
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue);
	void SetIntParameter(struct FString InVariableName, int InValue);
	void SetFloatParameter(struct FString InVariableName, float InValue);
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue);
	void SetBoolParameter(struct FString InVariableName, bool InValue);
	struct FVector GetVectorParameter(struct FString InVariableName);
	struct FVector4 GetVector4Parameter(struct FString InVariableName);
	struct FVector2D GetVector2DParameter(struct FString InVariableName);
	struct FQuat GetQuatParameter(struct FString InVariableName);
	int GetIntParameter(struct FString InVariableName);
	float GetFloatParameter(struct FString InVariableName);
	struct FLinearColor GetColorParameter(struct FString InVariableName);
	bool GetBoolParameter(struct FString InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x0030 (0x0058 - 0x0028)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                       CompileId;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x0218 - 0x0218)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}


	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(struct FText InXAxisText, struct FText InYAxisText);
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000 (0x0028 - 0x0028)
class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0038 - 0x0028)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (0x0048 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   min;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   max;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (0x0050 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     min;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     max;                                                      // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (0x0060 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    min;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                                    max;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0058 - 0x0038)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                                max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0050 (0x0268 - 0x0218)
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraPreviewGridResetMode                       ResetMode;                                                // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PreviewClass;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingX;                                                 // 0x0240(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpacingY;                                                 // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumX;                                                     // 0x0248(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumY;                                                     // 0x024C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0250(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}


	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0838 (0x0868 - 0x0030)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              UV0TilingDistance;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Scale;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0Offset;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              UV1TilingDistance;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Scale;                                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1Offset;                                                // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	float                                              CurveTension;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseConstantFactor;                                       // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScreenSpaceTessellation;                                 // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0088(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0118(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x01A8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0238(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x02C8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0358(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x03E8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0478(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x0508(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0598(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0628(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x06B8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0748(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x07D8(0x0090) (Edit, AdvancedDisplay, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x0680 (0x06A8 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0040(0x00F8) (NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreCPU;                             // 0x0138(0x0118) (Transient, NativeAccessSpecifierPrivate)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStoreGPU;                             // 0x0250(0x0118) (Transient, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x0368(0x0048) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId                  LastGeneratedVMId;                                        // 0x03B0(0x0048) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x188];                                     // 0x03F8(0x0188) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x0580(0x0108) (NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x0688(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x0698(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void OnCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0030 (0x0068 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x09D8 (0x0A08 - 0x0030)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector                                     CustomFacingVectorMask;                                   // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0054(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x005C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x005C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x005C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFacingCameraBlendDistance;                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0068(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x00F8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0188(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0218(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x02A8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0338(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x03C8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x0458(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x04E8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x0578(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0608(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x0698(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0728(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x07B8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0848(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x08D8(0x0090) (Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0968(0x0090) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x10];                                      // 0x09F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x01D0 (0x01F8 - 0x0028)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	bool                                               bDumpDebugSystemInfo;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	unsigned char                                      bFixedBounds : 1;                                         // 0x002C(0x0001) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0040(0x0010) (Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterSpawnAttributes>      EmitterSpawnAttributes;                                   // 0x0060(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x0070(0x0148) (Protected, NativeAccessSpecifierProtected)
	struct FBox                                        FixedBounds;                                              // 0x01B8(0x001C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bAutoDeactivate;                                          // 0x01D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01D5(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x01D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                WarmupTickCount;                                          // 0x01DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WarmupTickDelta;                                          // 0x01E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x01E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01E5(0x0003) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x01E8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
