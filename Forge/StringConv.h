#pragma once

#include <Windows.h>

#include "framework.h"
#include "ContainerAllocationPolicies.h"

constexpr const uint16 HIGH_SURROGATE_START_CODEPOINT = 0xD800;
constexpr const uint16 HIGH_SURROGATE_END_CODEPOINT = 0xDBFF;
constexpr const uint16 LOW_SURROGATE_START_CODEPOINT = 0xDC00;
constexpr const uint16 LOW_SURROGATE_END_CODEPOINT = 0xDFFF;
constexpr const uint32 ENCODED_SURROGATE_START_CODEPOINT = 0x10000;
constexpr const uint32 ENCODED_SURROGATE_END_CODEPOINT = 0x10FFFF;

/** Is the provided Codepoint within the range of the high-surrogates? */
static FORCEINLINE bool IsHighSurrogate(const uint32 Codepoint)
{
	return Codepoint >= HIGH_SURROGATE_START_CODEPOINT && Codepoint <= HIGH_SURROGATE_END_CODEPOINT;
}

/** Is the provided Codepoint within the range of the low-surrogates? */
static FORCEINLINE bool IsLowSurrogate(const uint32 Codepoint)
{
	return Codepoint >= LOW_SURROGATE_START_CODEPOINT && Codepoint <= LOW_SURROGATE_END_CODEPOINT;
}

static FORCEINLINE bool IsEncodedSurrogate(const uint32 Codepoint)
{
	return Codepoint >= ENCODED_SURROGATE_START_CODEPOINT && Codepoint <= ENCODED_SURROGATE_END_CODEPOINT;
}

#define UNICODE_BOGUS_CHAR_CODEPOINT '?'

#define DEFAULT_STRING_CONVERSION_SIZE 128u

struct FCountingOutputIterator
{
	FCountingOutputIterator()
		: Counter(0)
	{
	}

	const FCountingOutputIterator& operator* () const { return *this; }
	const FCountingOutputIterator& operator++() { ++Counter; return *this; }
	const FCountingOutputIterator& operator++(int) { ++Counter; return *this; }
	const FCountingOutputIterator& operator+=(const int32 Amount) { Counter += Amount; return *this; }

	template <typename T>
	T operator=(T Val) const
	{
		return Val;
	}

	friend int32 operator-(FCountingOutputIterator Lhs, FCountingOutputIterator Rhs)
	{
		return Lhs.Counter - Rhs.Counter;
	}

	int32 GetCount() const { return Counter; }

private:
	int32 Counter;
};

struct ENullTerminatedString
{
	enum Type
	{
		No = 0,
		Yes = 1
	};
};


template<typename Converter, int32 DefaultConversionSize = DEFAULT_STRING_CONVERSION_SIZE>
class TStringConversion : private Converter, private TInlineAllocator<DefaultConversionSize>::template ForElementType<typename Converter::ToType>
{
	typedef typename TInlineAllocator<DefaultConversionSize>::template ForElementType<typename Converter::ToType> AllocatorType;

	typedef typename Converter::FromType FromType;
	typedef typename Converter::ToType   ToType;

	void Init(const FromType* Source, int32 SourceLen, ENullTerminatedString::Type NullTerminated)
	{
		StringLength = Converter::ConvertedLength(Source, SourceLen);

		int32 BufferSize = StringLength + NullTerminated;

		AllocatorType::ResizeAllocation(0, BufferSize, sizeof(ToType));

		Ptr = (ToType*)AllocatorType::GetAllocation();
		Converter::Convert(Ptr, BufferSize, Source, SourceLen + NullTerminated);
	}

public:
	explicit TStringConversion(const FromType* Source)
	{
		if (Source)
		{
			Init(Source, strlen(Source), ENullTerminatedString::Yes);
		}
		else
		{
			Ptr = NULL;
			StringLength = 0;
		}
	}

	FORCEINLINE const ToType* Get() const
	{
		return Ptr;
	}

	ToType* Ptr;
	int32   StringLength;
};

class FUTF8ToTCHAR_Convert
{
public:
	typedef char FromType;
	typedef wchar_t ToType;

	/**
	 * Converts the UTF-8 string to UTF-16.
	 *
	 * @param Dest      The destination buffer of the converted string.
	 * @param DestLen   The length of the destination buffer.
	 * @param Source    The source string to convert.
	 * @param SourceLen The length of the source string.
	 */
	static FORCEINLINE void Convert(TCHAR* Dest, const int32 DestLen, const char* Source, const int32 SourceLen)
	{
		Convert_Impl(Dest, DestLen, Source, SourceLen);
	}

	/**
	 * Determines the length of the converted string.
	 *
	 * @param Source string to read and determine amount of TCHARs to represent
	 * @param SourceLen Length of source string; we will not read past this amount, even if the characters tell us to
	 * @return The length of the string in UTF-16 characters.
	 */
	static int32 ConvertedLength(const char* Source, const int32 SourceLen)
	{
		FCountingOutputIterator Dest;
		Convert_Impl(Dest, MAX_int32, Source, SourceLen);

		return Dest.GetCount();
	}

private:
	static uint32 CodepointFromUtf8(const char*& SourceString, const uint32 SourceLengthRemaining)
	{
		// checkSlow(SourceLengthRemaining > 0)

		const char* OctetPtr = SourceString;

		uint32 Codepoint = 0;
		uint32 Octet = (uint32)((uint8)*SourceString);
		uint32 Octet2, Octet3, Octet4;

		if (Octet < 128)  // one octet char: 0 to 127
		{
			++SourceString;  // skip to next possible start of codepoint.
			return Octet;
		}
		else if (Octet < 192)  // bad (starts with 10xxxxxx).
		{
			// Apparently each of these is supposed to be flagged as a bogus
			//  char, instead of just resyncing to the next valid codepoint.
			++SourceString;  // skip to next possible start of codepoint.
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}
		else if (Octet < 224)  // two octets
		{
			// Ensure our string has enough characters to read from
			if (SourceLengthRemaining < 2)
			{
				// Skip to end and write out a single char (we always have room for at least 1 char)
				SourceString += SourceLengthRemaining;
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet -= (128 + 64);
			Octet2 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet2 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Codepoint = ((Octet << 6) | (Octet2 - 128));
			if ((Codepoint >= 0x80) && (Codepoint <= 0x7FF))
			{
				SourceString += 2;  // skip to next possible start of codepoint.
				return Codepoint;
			}
		}
		else if (Octet < 240)  // three octets
		{
			// Ensure our string has enough characters to read from
			if (SourceLengthRemaining < 3)
			{
				// Skip to end and write out a single char (we always have room for at least 1 char)
				SourceString += SourceLengthRemaining;
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet -= (128 + 64 + 32);
			Octet2 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet2 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet3 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet3 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Codepoint = (((Octet << 12)) | ((Octet2 - 128) << 6) | ((Octet3 - 128)));

			// UTF-8 characters cannot be in the UTF-16 surrogates range
			if (IsHighSurrogate(Codepoint) || IsLowSurrogate(Codepoint))
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			// 0xFFFE and 0xFFFF are illegal, too, so we check them at the edge.
			if ((Codepoint >= 0x800) && (Codepoint <= 0xFFFD))
			{
				SourceString += 3;  // skip to next possible start of codepoint.
				return Codepoint;
			}
		}
		else if (Octet < 248)  // four octets
		{
			// Ensure our string has enough characters to read from
			if (SourceLengthRemaining < 4)
			{
				// Skip to end and write out a single char (we always have room for at least 1 char)
				SourceString += SourceLengthRemaining;
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet -= (128 + 64 + 32 + 16);
			Octet2 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet2 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet3 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet3 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet4 = (uint32)((uint8) * (++OctetPtr));
			if ((Octet4 & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Codepoint = (((Octet << 18)) | ((Octet2 - 128) << 12) |
				((Octet3 - 128) << 6) | ((Octet4 - 128)));
			if ((Codepoint >= 0x10000) && (Codepoint <= 0x10FFFF))
			{
				SourceString += 4;  // skip to next possible start of codepoint.
				return Codepoint;
			}
		}
		// Five and six octet sequences became illegal in rfc3629.
		//  We throw the codepoint away, but parse them to make sure we move
		//  ahead the right number of bytes and don't overflow the buffer.
		else if (Octet < 252)  // five octets
		{
			// Ensure our string has enough characters to read from
			if (SourceLengthRemaining < 5)
			{
				// Skip to end and write out a single char (we always have room for at least 1 char)
				SourceString += SourceLengthRemaining;
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			SourceString += 5;  // skip to next possible start of codepoint.
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		else  // six octets
		{
			// Ensure our string has enough characters to read from
			if (SourceLengthRemaining < 6)
			{
				// Skip to end and write out a single char (we always have room for at least 1 char)
				SourceString += SourceLengthRemaining;
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			Octet = (uint32)((uint8) * (++OctetPtr));
			if ((Octet & (128 + 64)) != 128)  // Format isn't 10xxxxxx?
			{
				++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
				return UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			SourceString += 6;  // skip to next possible start of codepoint.
			return UNICODE_BOGUS_CHAR_CODEPOINT;
		}

		++SourceString;  // Sequence was not valid UTF-8. Skip the first byte and continue.
		return UNICODE_BOGUS_CHAR_CODEPOINT;  // catch everything else.
	}

	/**
	 * Read Source string, converting the data from UTF-8 into UTF-16, and placing these in the Destination
	 */
	template <typename DestBufferType>
	static void Convert_Impl(DestBufferType& ConvertedBuffer, int32 DestLen, const char* Source, const int32 SourceLen)
	{
		const char* SourceEnd = Source + SourceLen;
		while (Source < SourceEnd && DestLen > 0)
		{
			// Read our codepoint, advancing the source pointer
			uint32 Codepoint = CodepointFromUtf8(Source, SourceEnd - Source);

			// We want to write out two chars
			if (IsEncodedSurrogate(Codepoint))
			{
				// We need two characters to write the surrogate pair
				if (DestLen >= 2)
				{
					Codepoint -= 0x10000;
					const TCHAR HighSurrogate = (Codepoint >> 10) + HIGH_SURROGATE_START_CODEPOINT;
					const TCHAR LowSurrogate = (Codepoint & 0x3FF) + LOW_SURROGATE_START_CODEPOINT;
					*(ConvertedBuffer++) = HighSurrogate;
					*(ConvertedBuffer++) = LowSurrogate;
					DestLen -= 2;
					continue;
				}

				// If we don't have space, write a bogus character instead (we should have space for it)
				Codepoint = UNICODE_BOGUS_CHAR_CODEPOINT;
			}
			else if (Codepoint > ENCODED_SURROGATE_END_CODEPOINT)
			{
				// Ignore values higher than the supplementary plane range
				Codepoint = UNICODE_BOGUS_CHAR_CODEPOINT;
			}

			*(ConvertedBuffer++) = Codepoint;
			--DestLen;
		}
	}
};

typedef TStringConversion<FUTF8ToTCHAR_Convert> FUTF8ToTCHAR;

inline std::wstring string_towstring(const std::string& Str)
{
	return (TCHAR*)FUTF8ToTCHAR((const char*)Str.c_str()).Get();
}