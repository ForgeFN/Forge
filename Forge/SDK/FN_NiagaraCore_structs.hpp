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

// ScriptStruct NiagaraCore.NiagaraCompileHash
// 0x0010
struct FNiagaraCompileHash
{
	TArray<unsigned char>                              DataHash;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
