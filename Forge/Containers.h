// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once
#include <string>

#define FORCEINLINE __forceinline

typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;

#define NumBitsPerDWORD ((int32)32)
#define NumBitsPerDWORDLogTwo ((int32)5)

inline void* (*FMemory_Realloc2)(void* Memory, __int64 NewSize, unsigned int Alignment) = decltype(FMemory_Realloc2)((uintptr_t)GetModuleHandle(0) + 0x2093D50);

static inline void* FMemory_Malloc(size_t size, unsigned int Alignment = 0)
{
    return FMemory_Realloc2(0, size, Alignment);
}

namespace UE
{
    static FORCEINLINE uint32 CountLeadingZeros(uint32 Value)
    {
        unsigned long Log2;
        if (_BitScanReverse(&Log2, Value) != 0)
        {
            return 31 - Log2;
        }

        return 32;
    }


    template <class ArrayType>
    class TArray
    {
        friend struct FString;

        template <typename ArrayType>
        friend class TSparseArray;

        template <typename SetType>
        friend class TSet;

    public:

        TArray() = default;

        FORCEINLINE int Num() const
        {
            return Count;
        }
        FORCEINLINE int Max() const
        {
            return MaxElements;
        }
        FORCEINLINE ArrayType*& GetData()
        {
            return Data;
        }
        FORCEINLINE int Slack() const
        {
            return MaxElements - Count;
        }
        FORCEINLINE void Reserve(const int NumElements)
        {
        }
        FORCEINLINE void Reset(int MinSizeAfterReset = 5)
        {

        }
        FORCEINLINE bool RemoveSingle(const int Index)
        {
        }
        FORCEINLINE void RemoveAt(int Index, int Lenght = 1)
        {
            for (; Lenght != 0; --Lenght)
            {
                if (!RemoveSingle(Index++))
                    break;
            }
        }
        FORCEINLINE void Add(const ArrayType& InData)
        {
        }
        FORCEINLINE void MultiAdd(int Num, ArrayType InData...)
        {
            va_list MyList;
            va_start(MyList, Num);

            Reserve(Num);

            for (int i = 0; i < Num; i++)
            {
                Add(va_arg(MyList, ArrayType));
            }
            va_end(MyList);
        };
        FORCEINLINE void FreeArray()
        {
        }

        FORCEINLINE explicit operator bool() const
        {
            return Count > 0 && Data;
        }
        FORCEINLINE ArrayType& operator[](int i)
        {
            return Data[i];
        };

        FORCEINLINE const ArrayType& operator[](int i) const
        {
            return Data[i];
        };

        FORCEINLINE int MaxIndex()
        {
            return Count - 1;
        }

        class FBaseArrayIterator
        {
            int32 Index;
            TArray<ArrayType>& ItArray;

        public:
            FBaseArrayIterator(TArray<ArrayType>& Array)
                : ItArray(Array)
                , Index(Array.Count)
            {
            }
            FBaseArrayIterator(TArray<ArrayType>& Array, int32 CurrentIndex)
                : ItArray(Array)
                , Index(CurrentIndex)
            {
            }

            FORCEINLINE ArrayType& operator*()
            {
                return ItArray[Index];
            }
            FORCEINLINE ArrayType& operator->()
            {
                return ItArray[Index];
            }
            FORCEINLINE FBaseArrayIterator& operator++()
            {
                ++Index;
                return *this;
            }
            FORCEINLINE FBaseArrayIterator& operator--()
            {
                --Index;
                return *this;
            }
            FORCEINLINE bool operator==(const FBaseArrayIterator& other) const
            {
                return Index == other.Index;
            }
            FORCEINLINE bool operator!=(const FBaseArrayIterator& other) const
            {
                return Index != other.Index;
            }
        };

        FORCEINLINE FBaseArrayIterator begin()
        {
            return FBaseArrayIterator(*this, 0);
        }
        FORCEINLINE FBaseArrayIterator begin() const
        {
            return FBaseArrayIterator(*this, 0);
        }
        FORCEINLINE FBaseArrayIterator end()
        {
            return FBaseArrayIterator(*this);
        }
        FORCEINLINE FBaseArrayIterator end() const
        {
            return FBaseArrayIterator(*this);
        }

    private:
        ArrayType* Data;
        int32_t Count;
        int32_t MaxElements;
    };

    struct FString : private TArray<wchar_t>
    {
        inline FString() {};

        FString(const wchar_t* other)
        {
            MaxElements = Count = *other ? std::wcslen(other) + 1 : 0;

            if (Count)
            {
                Data = const_cast<wchar_t*>(other);
            }
        };

        FORCEINLINE bool IsValid() const
        {
            return Data != nullptr;
        }

        FORCEINLINE const wchar_t* ToWString() const
        {
            return Data;
        }
        FORCEINLINE void Free()
        {
            this->FreeArray();
        }

        FORCEINLINE std::string ToString() const
        {
            auto length = wcslen(Data);

            std::string str(length, '\0');

            std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

            return str;
        }

        FORCEINLINE explicit operator bool() const
        {
            return this->TArray<wchar_t>::operator bool();
        }
    };

    // Allocates Elements directly where the instance is created rather than on the heap
    template <int32 NumElements>
    class TInlineAllocator
    {
    private:
        template <int32 Size, int32 Alignment>
        struct alignas(Alignment) TAlligendBytes
        {
            uint8 Pad[Size];
        };

        template <typename ElementType>
        struct TTypeCompatibleBytes : public TAlligendBytes<sizeof(ElementType), alignof(ElementType)>
        {
        };

    public:
        template <typename ElementType>
        class ForElementType
        {
            friend class TBitArray;

        private:
            TTypeCompatibleBytes<ElementType> InlineData[NumElements];

            ElementType* SecondaryData;

        public:

            FORCEINLINE int32 NumInlineBytes() const
            {
                return sizeof(ElementType) * NumElements;
            }
            FORCEINLINE int32 NumInlineBits() const
            {
                return NumInlineBytes() * 8;
            }

            FORCEINLINE ElementType& operator[](int32 Index)
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE const ElementType& operator[](int32 Index) const
            {
                return *(ElementType*)(&InlineData[Index]);
            }

            FORCEINLINE void operator=(void* InElements)
            {
                SecondaryData = (ElementType*)InElements;
            }

            FORCEINLINE ElementType& GetInlineElement(int32 Index)
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE const ElementType& GetInlineElement(int32 Index) const
            {
                return *(ElementType*)(&InlineData[Index]);
            }
            FORCEINLINE ElementType& GetSecondaryElement(int32 Index)
            {
                return SecondaryData[Index];
            }
            FORCEINLINE const ElementType& GetSecondaryElement(int32 Index) const
            {
                return SecondaryData[Index];
            }
        };
    };

    class TBitArray
    {
    private:
        template <typename ArrayType>
        friend class TSparseArray;
        template <typename SetType>
        friend class TSet;

    private:
        TInlineAllocator<4>::ForElementType<uint32> Data;
        int32 NumBits;
        int32 MaxBits;

        struct FRelativeBitReference
        {
        public:
            FORCEINLINE explicit FRelativeBitReference(int32 BitIndex)
                : DWORDIndex(BitIndex >> NumBitsPerDWORDLogTwo)
                , Mask(1 << (BitIndex & ((NumBitsPerDWORD)-1)))
            {
            }

            int32 DWORDIndex;
            uint32 Mask;
        };

    public:
        struct FBitReference
        {
            FORCEINLINE FBitReference(uint32& InData, uint32 InMask)
                : Data(InData)
                , Mask(InMask)
            {
            }
            FORCEINLINE const FBitReference(const uint32& InData, const uint32 InMask)
                : Data(const_cast<uint32&>(InData))
                , Mask(InMask)
            {
            }

            FORCEINLINE void SetBit(const bool Value)
            {
                Value ? Data |= Mask : Data &= ~Mask;

                // 10011101 - Data			 // 10011101 - Data
                // 00000010 - Mask - true |	 // 00000010 - Mask - false
                // 10011111	-  |=			 // 11111101 -  ~
                //							 // 10011111 -  &=
            }

            FORCEINLINE operator bool() const
            {
                return (Data & Mask) != 0;
            }
            FORCEINLINE void operator=(const bool Value)
            {
                this->SetBit(Value);
            }

        private:
            uint32& Data;
            uint32 Mask;
        };

    public:
        class FBitIterator : public FRelativeBitReference
        {
        private:
            int32 Index;
            const TBitArray& IteratedArray;

        public:
            FORCEINLINE const FBitIterator(const TBitArray& ToIterate, const int32 StartIndex) // Begin
                : IteratedArray(ToIterate)
                , Index(StartIndex)
                , FRelativeBitReference(StartIndex)
            {
            }
            FORCEINLINE const FBitIterator(const TBitArray& ToIterate) // End
                : IteratedArray(ToIterate)
                , Index(ToIterate.NumBits)
                , FRelativeBitReference(ToIterate.NumBits)
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return Index < IteratedArray.Num();
            }
            FORCEINLINE FBitIterator& operator++()
            {
                ++Index;
                this->Mask <<= 1;
                if (!this->Mask)
                {
                    this->Mask = 1;
                    ++this->DWORDIndex;
                }
                return *this;
            }
            FORCEINLINE bool operator*() const
            {
                // Thesis: Once there are more elements in the BitArray than InlineData can hold it'll just allocate all of 
                // them through SecondaryElements, leaving InlineData all true

                if (IteratedArray.NumBits < IteratedArray.Data.NumInlineBits())
                {
                    return (bool)FBitReference(IteratedArray.Data.GetInlineElement(this->DWORDIndex), this->Mask);
                }
                else
                {
                    return (bool)FBitReference(IteratedArray.Data.GetSecondaryElement(this->DWORDIndex), this->Mask);
                }
            }
            FORCEINLINE bool operator==(const FBitIterator& OtherIt) const
            {
                return Index == OtherIt.Index;
            }
            FORCEINLINE bool operator!=(const FBitIterator& OtherIt) const
            {
                return Index </*=*/ OtherIt.Index;
            }
            FORCEINLINE bool operator < (const int32 Other) const
            {
                return Index < Other;
            }
            FORCEINLINE bool operator > (const int32 Other) const
            {
                return Index < Other;
            }

            FORCEINLINE int32 GetIndex() const
            {
                return Index;
            }
        };

        class FSetBitIterator : public FRelativeBitReference
        {
        private:
            const TBitArray& IteratedArray;

            uint32 UnvisitedBitMask;
            int32  CurrentBitIndex;
            int32  BaseBitIndex;

        public:
            FORCEINLINE FSetBitIterator(const TBitArray& ToIterate, int32 StartIndex)
                : FRelativeBitReference(StartIndex)
                , IteratedArray(const_cast<TBitArray&>(ToIterate))
                , UnvisitedBitMask((~0U) << (StartIndex & (NumBitsPerDWORD - 1)))
                , CurrentBitIndex(StartIndex)
                , BaseBitIndex(StartIndex & ~(NumBitsPerDWORD - 1))
            {
                if (StartIndex != IteratedArray.NumBits)
                {
                    FindNextSetBit();
                }
            }
            FORCEINLINE FSetBitIterator(const TBitArray& ToIterate)
                : FRelativeBitReference(ToIterate.NumBits)
                , IteratedArray(const_cast<TBitArray&>(ToIterate))
                , UnvisitedBitMask(0)
                , CurrentBitIndex(ToIterate.NumBits)
                , BaseBitIndex(ToIterate.NumBits)
            {
            }

            FORCEINLINE FSetBitIterator& operator++()
            {
                UnvisitedBitMask &= ~this->Mask;

                FindNextSetBit();

                return *this;
            }
            FORCEINLINE bool operator*() const
            {
                return true;
            }

            FORCEINLINE bool operator==(const FSetBitIterator& Other) const
            {
                return CurrentBitIndex == Other.CurrentBitIndex;
            }
            FORCEINLINE bool operator!=(const FSetBitIterator& Other) const
            {
                return CurrentBitIndex </*=*/ Other.CurrentBitIndex;
            }

            FORCEINLINE explicit operator bool() const
            {
                return CurrentBitIndex < IteratedArray.NumBits;
            }

            FORCEINLINE int32 GetIndex() const
            {
                return CurrentBitIndex;
            }

        private:

            void FindNextSetBit()
            {
                //InlineData is the first 16-bytes of TBitArray
                const uint32* ArrayData = (IteratedArray.Data.SecondaryData ? IteratedArray.Data.SecondaryData : (uint32*)&IteratedArray.Data.InlineData);

                const int32 ArrayNum = IteratedArray.NumBits;
                const int32 LastDWORDIndex = (ArrayNum - 1) / NumBitsPerDWORD;

                uint32 RemainingBitMask = ArrayData[this->DWORDIndex] & UnvisitedBitMask;
                while (!RemainingBitMask)
                {
                    ++this->DWORDIndex;
                    BaseBitIndex += NumBitsPerDWORD;

                    if (this->DWORDIndex > LastDWORDIndex)
                    {
                        CurrentBitIndex = ArrayNum;
                        return;
                    }

                    RemainingBitMask = ArrayData[this->DWORDIndex];
                    UnvisitedBitMask = ~0;
                }

                const uint32 NewRemainingBitMask = RemainingBitMask & (RemainingBitMask - 1);

                this->Mask = NewRemainingBitMask ^ RemainingBitMask;

                CurrentBitIndex = BaseBitIndex + NumBitsPerDWORD - 1 - CountLeadingZeros(this->Mask);

                if (CurrentBitIndex > ArrayNum)
                {
                    CurrentBitIndex = ArrayNum;
                }
            }
        };

    public:
        FORCEINLINE FBitIterator Iterator(int32 StartIndex)
        {
            return FBitIterator(*this, StartIndex);
        }
        FORCEINLINE FSetBitIterator SetBitIterator(int32 StartIndex)
        {
            return FSetBitIterator(*this, StartIndex);
        }

        FORCEINLINE FBitIterator begin()
        {
            return FBitIterator(*this, 0);
        }
        FORCEINLINE const FBitIterator begin() const
        {
            return FBitIterator(*this, 0);
        }
        FORCEINLINE FBitIterator end()
        {
            return FBitIterator(*this);
        }
        FORCEINLINE const FBitIterator end() const
        {
            return  FBitIterator(*this);
        }

        FORCEINLINE FSetBitIterator SetBitsItBegin()
        {
            return FSetBitIterator(*this, 0);
        }
        FORCEINLINE const FSetBitIterator SetBitsItBegin() const
        {
            return FSetBitIterator(*this, 0);
        }
        FORCEINLINE const FSetBitIterator SetBitsItEnd()
        {
            return FSetBitIterator(*this);
        }
        FORCEINLINE const FSetBitIterator SetBitsItEnd() const
        {
            return FSetBitIterator(*this);
        }

        FORCEINLINE int32 Num() const
        {
            return NumBits;
        }
        FORCEINLINE int32 Max() const
        {
            return MaxBits;
        }
        FORCEINLINE bool IsSet(int32 Index) const
        {
            return *FBitIterator(*this, Index);
        }
        FORCEINLINE void Set(const int32 Index, const bool Value, bool bIsSettingAllZero = false)
        {
            const int32 DWORDIndex = (Index >> ((int32)5));
            const int32 Mask = (1 << (Index & (((int32)32) - 1)));

            if (!bIsSettingAllZero)
                NumBits = Index >= NumBits ? Index < MaxBits ? Index + 1 : NumBits : NumBits;

            FBitReference(Data[DWORDIndex], Mask).SetBit(Value);
        }
        FORCEINLINE void ZeroAll()
        {
            for (int i = 0; i < MaxBits; i++)
            {
                Set(i, false, true);
            }
        }
    };

    template <typename ElementType>
    union TSparseArrayElementOrListLink
    {
        TSparseArrayElementOrListLink(ElementType& InElement)
            : ElementData(InElement)
        {
        }
        TSparseArrayElementOrListLink(ElementType&& InElement)
            : ElementData(InElement)
        {
        }

        TSparseArrayElementOrListLink(int32 InPrevFree, int32 InNextFree)
            : PrevFreeIndex(InPrevFree)
            , NextFreeIndex(InNextFree)
        {
        }

        TSparseArrayElementOrListLink<ElementType> operator=(const TSparseArrayElementOrListLink<ElementType>& Other)
        {
            return TSparseArrayElementOrListLink(Other.NextFreeIndex, Other.PrevFreeIndex);
        }

        /** If the element is allocated, its value is stored here. */
        ElementType ElementData;

        struct
        {
            /** If the element isn't allocated, this is a link to the previous element in the array's free list. */
            int32 PrevFreeIndex;

            /** If the element isn't allocated, this is a link to the next element in the array's free list. */
            int32 NextFreeIndex;
        };
    };

    template <typename ArrayType>
    class TSparseArray
    {
    private:
        template <typename SetType>
        friend class TSet;

    public:
        typedef TSparseArrayElementOrListLink<ArrayType> FSparseArrayElement;

    private:
        TArray<FSparseArrayElement> Data;
        TBitArray AllocationFlags;
        int32 FirstFreeIndex;
        int32 NumFreeIndices;

    public:
        class FBaseIterator
        {
        private:
            TSparseArray<ArrayType>& IteratedArray;
            TBitArray::FSetBitIterator BitArrayIt;

        public:
            FORCEINLINE FBaseIterator(const TSparseArray<ArrayType>& Array, const TBitArray::FSetBitIterator BitIterator)
                : IteratedArray(const_cast<TSparseArray<ArrayType>&>(Array))
                , BitArrayIt(const_cast<TBitArray::FSetBitIterator&>(BitIterator))
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return (bool)BitArrayIt;
            }
            FORCEINLINE TSparseArray<ArrayType>::FBaseIterator& operator++()
            {
                ++BitArrayIt;
                return *this;
            }
            FORCEINLINE ArrayType& operator*()
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE const ArrayType& operator*() const
            {
                return IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE ArrayType* operator->()
            {
                return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE const ArrayType* operator->() const
            {
                return &IteratedArray[BitArrayIt.GetIndex()].ElementData;
            }
            FORCEINLINE bool operator==(const TSparseArray<ArrayType>::FBaseIterator& Other) const
            {
                return BitArrayIt == Other.BitArrayIt;
            }
            FORCEINLINE bool operator!=(const TSparseArray<ArrayType>::FBaseIterator& Other) const
            {
                return BitArrayIt != Other.BitArrayIt;
            }

            FORCEINLINE int32 GetIndex() const
            {
                return BitArrayIt.GetIndex();
            }
            FORCEINLINE bool IsElementValid() const
            {
                return *BitArrayIt;
            }
        };

    public:
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator begin()
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
        }
        FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator begin() const
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags, 0));
        }
        FORCEINLINE TSparseArray<ArrayType>::FBaseIterator end()
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
        }
        FORCEINLINE const TSparseArray<ArrayType>::FBaseIterator end() const
        {
            return TSparseArray<ArrayType>::FBaseIterator(*this, TBitArray::FSetBitIterator(AllocationFlags));
        }

        FORCEINLINE FSparseArrayElement& operator[](uint32 Index)
        {
            return *(FSparseArrayElement*)&Data[Index].ElementData;
        }
        FORCEINLINE const FSparseArrayElement& operator[](uint32 Index) const
        {
            return *(const FSparseArrayElement*)&Data[Index].ElementData;
        }

        FORCEINLINE int32 Num() const
        {
            return Data.Num() - NumFreeIndices;
        }
        FORCEINLINE int32 GetNumFreeIndices() const
        {
            return NumFreeIndices;
        }
        FORCEINLINE int32 GetFirstFreeIndex() const
        {
            return FirstFreeIndex;
        }
        FORCEINLINE const TArray<FSparseArrayElement>& GetData() const
        {
            return Data;
        }
        FORCEINLINE const TBitArray& GetAllocationFlags() const
        {
            return AllocationFlags;
        }
        FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
        {
            return AllocationFlags.IsSet(IndexToCheck);
        }

        FORCEINLINE bool RemoveAt(const int32 IndexToRemove)
        {
            if (IndexToRemove >= 0 && IndexToRemove < Data.Num() && AllocationFlags.IsSet(IndexToRemove))
            {
                int32 PreviousFreeIndex = -1;
                int32 NextFreeIndex = -1;

                if (NumFreeIndices == 0)
                {
                    FirstFreeIndex = IndexToRemove;
                    Data[IndexToRemove] = { -1, -1 };
                }
                else
                {
                    for (auto It = AllocationFlags.begin(); It != AllocationFlags.end(); ++It)
                    {
                        if (!It)
                        {
                            if (It.GetIndex() < IndexToRemove)
                            {
                                Data[IndexToRemove].PrevFreeIndex = It.GetIndex();
                            }
                            else if (It.GetIndex() > IndexToRemove)
                            {
                                Data[IndexToRemove].NextFreeIndex = It.GetIndex();
                                break;
                            }
                        }
                    }
                }
                AllocationFlags.Set(IndexToRemove, false);
                NumFreeIndices++;

                return true;
            }
            return false;
        }
        FORCEINLINE int32 Add(ArrayType InElement)
        {
            FSparseArrayElement Element(InElement);

            int32 NextFree;
            int32 OutIndex;
            if (FirstFreeIndex >= 1)
            {
                NextFree = Data[FirstFreeIndex].NextFreeIndex;
                Data[FirstFreeIndex] = Element;
                --NumFreeIndices;

                AllocationFlags.Set(FirstFreeIndex, true);

                if (NumFreeIndices >= 1)
                {
                    OutIndex = NextFree;
                    FirstFreeIndex = NextFree;
                    Data[NextFree].PrevFreeIndex = -1;

                    return OutIndex;
                }
            }
            else
            {
                Data.Add(Element);
                AllocationFlags.Set(Data.Num() - 1, true);

                return Data.Num() - 1;
            }
        }
    };

    template <typename ElementType>
    class TSetElement
    {
    public:
        ElementType Value;
        mutable int32 HashNextId;
        mutable int32 HashIndex;

        TSetElement(ElementType InValue, int32 InHashNextId, int32 InHashIndex)
            : Value(InValue)
            , HashNextId(InHashNextId)
            , HashIndex(InHashIndex)
        {
        }

        FORCEINLINE TSetElement<ElementType>& operator=(const TSetElement<ElementType>& Other)
        {
            Value = Other.Value;
        }

        FORCEINLINE bool operator==(const TSetElement& Other) const
        {
            return Value == Other.Value;
        }
        FORCEINLINE bool operator!=(const TSetElement& Other) const
        {
            return Value != Other.Value;
        }
    };

    template <typename SetType>
    class TSet
    {
    private:
        friend TSparseArray;

    public:
        typedef TSetElement<SetType> ElementType;
        typedef TSparseArrayElementOrListLink<ElementType> ArrayElementType;

        TSparseArray<ElementType> Elements;

        mutable TInlineAllocator<1>::ForElementType<int> Hash;
        mutable int32 HashSize;

    public:
        class FBaseIterator
        {
        private:
            TSet<SetType>& IteratedSet;
            TSparseArray<ElementType>::FBaseIterator ElementIt;

        public:
            FORCEINLINE FBaseIterator(const TSet<SetType>& InSet, TSparseArray<TSetElement<SetType>>::FBaseIterator InElementIt)
                : IteratedSet(const_cast<TSet<SetType>&>(InSet))
                , ElementIt(InElementIt)
            {
            }

            FORCEINLINE explicit operator bool() const
            {
                return (bool)ElementIt;
            }
            FORCEINLINE TSet<SetType>::FBaseIterator& operator++()
            {
                ++ElementIt;
                return *this;
            }
            FORCEINLINE bool operator==(const TSet<SetType>::FBaseIterator& OtherIt) const
            {
                return ElementIt == OtherIt.ElementIt;
            }
            FORCEINLINE bool operator!=(const TSet<SetType>::FBaseIterator& OtherIt) const
            {
                return ElementIt != OtherIt.ElementIt;
            }
            FORCEINLINE TSet<SetType>::FBaseIterator& operator=(TSet<SetType>::FBaseIterator& OtherIt)
            {
                return ElementIt = OtherIt.ElementIt;
            }
            FORCEINLINE SetType& operator*()
            {
                return (*ElementIt).Value;
            }
            FORCEINLINE const SetType& operator*() const
            {
                return &((*ElementIt).Value);
            }
            FORCEINLINE SetType* operator->()
            {
                return &((*ElementIt).Value);
            }
            FORCEINLINE const SetType* operator->() const
            {
                return &(*ElementIt).Value;
            }
            FORCEINLINE const int32 GetIndex() const
            {
                return ElementIt.GetIndex();
            }
            FORCEINLINE ElementType& GetSetElement()
            {
                return *ElementIt;
            }
            FORCEINLINE const ElementType& GetSetElement() const
            {
                return *ElementIt;
            }
            FORCEINLINE bool IsElementValid() const
            {
                return ElementIt.IsElementValid();
            }
        };

    public:
        FORCEINLINE TSet<SetType>::FBaseIterator begin()
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.begin());
        }
        FORCEINLINE const TSet<SetType>::FBaseIterator begin() const
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.begin());
        }
        FORCEINLINE TSet<SetType>::FBaseIterator end()
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.end());
        }
        FORCEINLINE const TSet<SetType>::FBaseIterator end() const
        {
            return TSet<SetType>::FBaseIterator(*this, Elements.end());
        }

        FORCEINLINE SetType& operator[](int Index)
        {
            return Elements[Index].ElementData.Value;
        }

        FORCEINLINE int32 Num() const
        {
            return Elements.Num();
        }
        FORCEINLINE bool IsValid() const
        {
            return Elements.Data.Data != nullptr && Elements.AllocationFlags.MaxBits > 0;
        }
        FORCEINLINE TSparseArray<ElementType>& GetElements()
        {
            return Elements;
        }
        FORCEINLINE const TSparseArray<ElementType>& GetElements() const
        {
            return Elements;
        }
        FORCEINLINE const TBitArray& GetAllocationFlags() const
        {
            return Elements.GetAllocationFlags();
        }
        FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
        {
            return Elements.IsIndexValid(IndexToCheck);
        }
        FORCEINLINE const bool Contains(const SetType& ElementToLookFor) const
        {
            if (Num() <= 0)
                return false;

            for (SetType Element : *this)
            {
                if (Element == ElementToLookFor)
                    return true;
            }
            return false;
        }
        FORCEINLINE const int32 Find(const SetType& ElementToLookFor) const
        {
            for (auto It = this->begin(); It != this->end(); ++It)
            {
                if (*It == ElementToLookFor)
                {
                    return It.GetIndex();
                }
            }
            return -1;
        }
        FORCEINLINE bool Remove(const SetType& ElementToRemove)
        {
            return Elements.RemoveAt(Find(ElementToRemove));
        }
        FORCEINLINE int32 AddSingle(SetType InElement, int32 InHashIndex = 0, int32 InHashNextId = 0)
        {
            // ToDo: Check for duplication

            if (!this->IsValid())
            {
                this->Initialize();
                return 0; // ???
            }

            return Elements.Add({ InElement, InHashIndex, InHashNextId });
        }
        FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
        {
            if (this->IsValid())
                return;

            Elements.Data.MaxElements = NumElementsToInitWith;
            Elements.Data.Count = NumElementsToInitWith;
            Elements.Data.Data = (ArrayElementType*)(FMemory_Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType)));
            for (int i = 0; i < NumElementsToInitWith; i++)
            {
                Elements.Data.Data[i].PrevFreeIndex = i - 1;
                Elements.Data.Data[i].NextFreeIndex = i + 1;
            }

            Elements.FirstFreeIndex = 0;
            Elements.NumFreeIndices = NumElementsToInitWith;

            Elements.AllocationFlags.MaxBits = 128;
            Elements.AllocationFlags.NumBits = NumElementsToInitWith;
            Elements.AllocationFlags.ZeroAll();

            Hash = FMemory_Malloc(NumElementsToInitWith * sizeof(ElementType), alignof(ElementType));
            HashSize = NumElementsToInitWith * sizeof(ElementType);
        }
    };

    template <typename KeyType, typename ValueType>
    class TPair
    {
    private:
        KeyType First;
        ValueType Second;

    public:
        TPair(KeyType Key, ValueType Value)
            : First(Key)
            , Second(Value)
        {
        }

    public:
        FORCEINLINE KeyType& Key()
        {
            return First;
        }
        FORCEINLINE const KeyType& Key() const
        {
            return First;
        }
        FORCEINLINE ValueType& Value()
        {
            return Second;
        }
        FORCEINLINE const ValueType& Value() const
        {
            return Second;
        }
    };

    template <typename KeyType, typename ValueType>
    class TMap
    {
    public:
        typedef TPair<KeyType, ValueType> ElementType;

        TSet<ElementType> Pairs;

    public:
        class FBaseIterator
        {
        private:
            TMap<KeyType, ValueType>& IteratedMap;
            TSet<ElementType>::FBaseIterator SetIt;

        public:
            FBaseIterator(TMap<KeyType, ValueType>& InMap, TSet<ElementType>::FBaseIterator InSet)
                : IteratedMap(InMap)
                , SetIt(InSet)
            {
            }
            FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator operator++()
            {
                ++SetIt;
                return *this;
            }
            FORCEINLINE TMap<KeyType, ValueType>::ElementType& operator*()
            {
                return *SetIt;
            }
            FORCEINLINE const TMap<KeyType, ValueType>::ElementType& operator*() const
            {
                return *SetIt;
            }
            FORCEINLINE bool operator==(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
            {
                return SetIt == Other.SetIt;
            }
            FORCEINLINE bool operator!=(const TMap<KeyType, ValueType>::FBaseIterator& Other) const
            {
                return SetIt != Other.SetIt;
            }
            FORCEINLINE bool IsElementValid() const
            {
                return SetIt.IsElementValid();
            }
        };

        FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator begin()
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
        }
        FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator begin() const
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.begin());
        }
        FORCEINLINE TMap<KeyType, ValueType>::FBaseIterator end()
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
        }
        FORCEINLINE const TMap<KeyType, ValueType>::FBaseIterator end() const
        {
            return TMap<KeyType, ValueType>::FBaseIterator(*this, Pairs.end());
        }
        FORCEINLINE ValueType& operator[](const KeyType& Key)
        {
            return this->GetByKey(Key);
        }
        FORCEINLINE const ValueType& operator[](const KeyType& Key) const
        {
            return this->GetByKey(Key);
        }
        FORCEINLINE int32 Num() const
        {
            return Pairs.Num();
        }
        FORCEINLINE bool IsValid() const
        {
            return Pairs.IsValid();
        }
        FORCEINLINE bool IsIndexValid(int32 IndexToCheck) const
        {
            return Pairs.IsIndexValid(IndexToCheck);
        }
        FORCEINLINE void Initialize(const int32 NumElementsToInitWith = 5)
        {
            return Pairs.Initialize(NumElementsToInitWith);
        }
        FORCEINLINE bool Contains(const KeyType& ElementToLookFor) const
        {
            for (auto Element : *this)
            {
                if (Element.Key() == ElementToLookFor)
                    return true;
            }
            return false;
        }
        FORCEINLINE int32 AddSingle(KeyType InKey, ValueType InValue)
        {
            return Pairs.AddSingle({ InKey, InValue });
        }
        FORCEINLINE int32 AddSingle(ElementType InElement)
        {
            return Pairs.AddSingle(InElement);
        }
        FORCEINLINE ValueType& GetByKey(const KeyType& Key)
        {
            for (auto Pair : *this)
            {
                if (Pair.Key() == Key)
                {
                    return Pair.Value();
                }
            }
        }
        FORCEINLINE ValueType GetByKeyNoRef(const KeyType& Key)
        {
            for (auto Pair : *this)
            {
                if (Pair.Key() == Key)
                {
                    return Pair.Value();
                }
            }
        }
    };


    template <typename PtrType>
    class TUniquePtr
    {
    private:

        PtrType* Ptr;

    public:
        bool IsValid() const
        {
            return Ptr != nullptr;
        }

        FORCEINLINE explicit operator bool() const
        {
            return IsValid();
        }

        FORCEINLINE bool operator!() const
        {
            return !IsValid();
        }

        FORCEINLINE PtrType* operator->() const
        {
            return Ptr;
        }

        FORCEINLINE PtrType& operator*() const
        {
            return *Ptr;
        }

        FORCEINLINE const PtrType*& Get() const
        {
            return Ptr;
        }

        FORCEINLINE PtrType*& Get()
        {
            return Ptr;
        }
    };

    template <class ObjectType>
    class TSharedPtr
    {
    public:
        ObjectType* Object;

        int32 SharedReferenceCount;
        int32 WeakReferenceCount;

        FORCEINLINE ObjectType* Get()
        {
            return Object;
        }
        FORCEINLINE ObjectType* Get() const
        {
            return Object;
        }
        FORCEINLINE ObjectType& operator*()
        {
            return *Object;
        }
        FORCEINLINE const ObjectType& operator*() const
        {
            return *Object;
        }
        FORCEINLINE ObjectType* operator->()
        {
            return Object;
        }
    };

    struct FFrame
    {
        char pad[0x10];
        struct UFunction* Node;
        class UObject* Object;
        uint8_t* Code;
        uint8_t* Locals;
    };
}