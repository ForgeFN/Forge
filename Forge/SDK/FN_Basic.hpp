#pragma once

// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
template<typename Fn>
inline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

class UObject;

inline void (*FNameToString)(void*, struct FString&) = decltype(FNameToString)((uintptr_t)GetModuleHandle(0) + 0x215F700);
inline void (*FreeMemory)(void*) = decltype(FreeMemory)((uintptr_t)GetModuleHandle(0) + 0x2084780);
inline void* (*FMemory_Realloc)(void* Memory, __int64 NewSize, unsigned int Alignment) = decltype(FMemory_Realloc)((uintptr_t)GetModuleHandle(0) + 0x2093D50);

template<class T>
struct TArray
{
	friend struct FString;

public:
	inline TArray()
	{
		Data = nullptr;
		Count = Max = 0;
	};

	inline int Num() const
	{
		return Count;
	};

	inline T& operator[](int i)
	{
		return Data[i];
	};

	inline const T& operator[](int i) const
	{
		return Data[i];
	};

	inline T* GetRef(int i) 
	{
		return &Data[i];
	};

	inline bool IsValidIndex(int i) const
	{
		return i < Num();
	};

	inline bool IsEmpty() const
	{
		return Count == 0;
	}

	inline void Reserve(const int NumElements)
	{
		Data = (T*)FMemory_Realloc(Data, (Max = Count + NumElements) * sizeof(T), 0);
	}

	inline void Free()
	{
		if (Data)
			FreeMemory(Data);

		Count = 0;
		Max = 0;
	}

	inline void FreeBAD()
	{
		Data = nullptr;

		Count = 0;
		Max = 0;
	}

	inline T& Add(const T& InData)
	{
		Reserve(1);

		// if (Data)
		{
			Data[Count] = InData;
			++Count;
			// ++Max;
			return Data[Count - 1];
		}

		// return T();
	}

	inline bool Remove(const int Index)
	{
		if (Index < Count)
		{
			if (Index != Count - 1)
				Data[Index] = Data[Count - 1];

			--Count;

			return true;
		}
		return false;
	};

	inline void Reset()
	{
		Data = nullptr;
		Count = 0;
		Max = 0;
	}

	T* Data;
	int32_t Count;
	int32_t Max;
};

struct FString : TArray<wchar_t>
{
	inline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		if (!Data)
			return std::string();

		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

struct FName
{
	int32_t ComparisonIndex;
	int32_t Number;

	std::string ToString()
	{
		FString Buffer;

		FNameToString(this, Buffer);

		std::string Str(Buffer.ToString());

		FreeMemory((void*)Buffer.c_str());

		return Str;
	}


	FString ToStringFStr()
	{
		FString Buffer;

		FNameToString(this, Buffer);

		return Buffer;
	}

	bool IsValid()
	{
		return ComparisonIndex != 0;
	}

	bool operator ==(FName other)
	{
		return ComparisonIndex == other.ComparisonIndex;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value = 0;
};

class FScriptInterface
{
public:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	template <typename T = UObject>
	inline T* GetObjectPtr() const
	{
		return (T*)ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
	char UnknownData[0x18];
};

struct FScriptDelegate
{
	char UnknownData[16];
};

struct FScriptMulticastDelegate
{
	char UnknownData[16];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FUObjectItem // https://github.com/EpicGames/UnrealEngine/blob/4.27/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L26
{
	UObject* Object;
	int32_t Flags;
	int32_t ClusterRootIndex;
	int32_t SerialNumber;
	// int pad_01;
};

struct FChunkedFixedUObjectArray // https://github.com/EpicGames/UnrealEngine/blob/7acbae1c8d1736bb5a0da4f6ed21ccb237bc8851/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L321
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};

	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;

	inline const int32_t Num() const { return NumElements; }

	const int32_t Capacity() const { return MaxElements; }

	UObject* GetObjectById(int32_t Index) const
	{
		if (Index > NumElements || Index < 0) return nullptr;

		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;

		if (ChunkIndex > NumChunks) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;

		auto obj = (Chunk + WithinChunkIndex)->Object;

		return obj;
	}
};

struct FWeakObjectPtr
{
public:
	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;

	template <typename T>
	T* Get()
	{
		if (!this->ObjectIndex)
			return nullptr;

		static FChunkedFixedUObjectArray* ObjObjects = decltype(ObjObjects)(__int64(GetModuleHandleW(0)) + 0x64A0090);

		return (T*)ObjObjects->GetObjectById(ObjectIndex);
	}
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : public TWeakObjectPtrBase
{
public:
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T*() const
	{
		return TBASE::Get();
	}

	inline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{
};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
