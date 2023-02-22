#pragma once

#include "framework.h"
#include <format>
#include "memcury.h"

inline int HexToDec(std::string hexValue)
{
	int len = hexValue.size();
	// Initializing base value to 1, i.e 16 ^ 0
	int base = 1;
	int dec_value = 0;
	// extracting characters as digits from last
	// character
	for (int i = len - 1; i >= 0; i--) {
		if (hexValue[i] >= '0' && hexValue[i] <= '9') {
			dec_value += (int(hexValue[i]) - 48) * base;


			// incrementing base by power
			base = base * 16;
		}
		// if character lies in 'A' - 'F' , converting
		// it to integral 10 - 15 by subtracting 55
		// from ASCII value
		else if (hexValue[i] >= 'A' && hexValue[i] <= 'F') {
			dec_value += (int(hexValue[i]) - 55) * base;


			// incrementing base by power
			base = base * 16;
		}
	}
	return dec_value;
}

inline std::string GetBytes(uintptr_t Address, int count = 10) {
	std::string Bytes;

	for (int i = 0; i < count; i++) {
		auto byte = *(uint8_t*)(Address + i) & 0xff;
		auto Byte = (byte == 0) ? "? " : std::format("{:x} ", byte);

		if (Byte.length() == 2 && byte != 0) // 2 because of the space
			Byte = "0" + Byte;

		Bytes += Byte;
	}

	std::transform(Bytes.begin(), Bytes.end(), Bytes.begin(), ::toupper);

	return Bytes;
}

enum IAmADumbass
{
	NO,
	fALSE,
	tRUE
};

static bool BasicLocationCheck(AActor* Actor, AActor* OtherActor, float FarthestPossible)
{
	if (Actor->GetDistanceTo(OtherActor) > FarthestPossible)
		return false;

	return true;
}

inline __int64 GetFunctionIdxOrPtr2(UFunction* Function, bool bHookExec = false)
{
	auto NativeAddr = __int64(Function->Func);

	// std::cout << std::format("{} Exec: 0x{:x}\n", Function->GetName(), NativeAddr - __int64(GetModuleHandleW(0)));

	if (bHookExec)
		return NativeAddr;

	std::wstring ValidateWStr = (std::wstring(Function->GetNameFStr().Data) + L"_Validate");
	const wchar_t* ValidateWCStr = ValidateWStr.c_str();
	bool bHasValidateFunc = Memcury::Scanner::FindStringRef(ValidateWCStr).Get();

	bool bFoundValidate = !bHasValidateFunc;

	__int64 RetAddr = 0;

	for (int i = 0; i < 2000; i++)
	{
		// std::cout << std::format("CURRENT 0x{:x}\n", __int64((uint8_t*)(NativeAddr + i)) - __int64(GetModuleHandleW(0)));

		if (!RetAddr && *(uint8_t*)(NativeAddr + i) == 0xC3)
		{
			RetAddr = NativeAddr + i;
			break;
		}
	}

	// std::cout << std::format("RETT {}: 0x{:x}\n", Function->GetName(), RetAddr - __int64(GetModuleHandleW(0)));

	int i = 0;

	__int64 functionAddyOrOffset = 0;

	for (__int64 CurrentAddy = RetAddr; CurrentAddy != NativeAddr && i < 2000; CurrentAddy -= 1) // Find last call
	{
		// LOG_INFO(LogDev, "[{}] 0x{:x}", i, *(uint8_t*)CurrentAddy);

		/* if (*(uint8_t*)CurrentAddy == 0xE8) // BAD
		{
			// LOG_INFO(LogDev, "CurrentAddy 0x{:x}", CurrentAddy - __int64(GetModuleHandleW(0)));
			functionAddyOrOffset = (CurrentAddy + 1 + 4) + *(int*)(CurrentAddy + 1);
			break;
		}

		else */ if ((*(uint8_t*)(CurrentAddy) == 0xFF && *(uint8_t*)(CurrentAddy + 1) == 0x90) ||
			*(uint8_t*)(CurrentAddy) == 0xFF && *(uint8_t*)(CurrentAddy + 1) == 0x93)
		{
			/* if (!bFoundValidate)
			{
				bFoundValidate = true;
				continue;
			} */

			// std::cout << "found vcall!\n";

			auto SecondByte = *(uint8_t*)(CurrentAddy + 2);
			auto ThirdByte = *(uint8_t*)(CurrentAddy + 3);

			std::string bytes = GetBytes(CurrentAddy + 2, 2);

			std::string last2bytes;
			last2bytes += bytes[3];
			last2bytes += bytes[4];

			std::string neww;

			if (last2bytes != "00")
				neww = last2bytes;

			neww += bytes[0];
			neww += bytes[1];
			bytes = neww;

			functionAddyOrOffset = HexToDec(bytes);
			break;
		}

		i++;
	}

	std::cout << "FOUND: " << functionAddyOrOffset << '\n';

	return functionAddyOrOffset;
 }

inline __int64 GetFunctionIdxOrPtr(UFunction* Function, bool bHookExec = false, IAmADumbass Dumbass = IAmADumbass::NO) // This can return address or index
{
	auto NativeAddr = __int64(Function->Func);

	// std::cout << std::format("{} Exec: 0x{:x}\n", Function->GetName(), NativeAddr - __int64(GetModuleHandleW(0)));

	if (bHookExec)
		return NativeAddr;

	std::wstring ValidateWStr = (std::wstring(Function->GetNameFStr().Data) + L"_Validate");
	const wchar_t* ValidateWCStr = ValidateWStr.c_str();
	bool bHasValidateFunc = Memcury::Scanner::FindStringRef(ValidateWCStr).Get();

	if (Dumbass != IAmADumbass::NO)
	{
		bHasValidateFunc = Dumbass == IAmADumbass::fALSE ? false : true;
	}

	// LOG_INFO(LogDev, "[{}] bHasValidateFunc: {}", Function->GetName(), bHasValidateFunc);
	// LOG_INFO(LogDev, "NativeAddr: 0x{:x}", __int64(NativeAddr) - __int64(GetModuleHandleW(0)));

	bool bFoundValidate = !bHasValidateFunc;

	__int64 RetAddr = 0;

	for (int i = 0; i < 2000; i++)
	{
		// LOG_INFO(LogDev, "0x{:x}", *(uint8_t*)(NativeAddr + i));

		if ((*(uint8_t*)(NativeAddr + i) == 0x48 && *(uint8_t*)(NativeAddr + i + 1) == 0xFF && *(uint8_t*)(NativeAddr + i + 2) == 0xA0))
		{
			auto SecondByte = *(uint8_t*)(NativeAddr + i + 3);
			auto ThirdByte = *(uint8_t*)(NativeAddr + i + 4);

			std::string bytes = GetBytes(NativeAddr + i + 3, 2);

			std::string last2bytes;
			last2bytes += bytes[3];
			last2bytes += bytes[4];

			std::string neww;

			if (last2bytes != "00")
				neww = last2bytes;

			neww += bytes[0];
			neww += bytes[1];
			bytes = neww;

			// bytes.erase(std::remove(bytes.begin(), bytes.end(), '0'), bytes.end());

			// std::cout << Function->GetName() + " Bytes: " << bytes << '\n';

			auto decidx = HexToDec(bytes);

			std::cout << "decidx: " << decidx << '\n';

			return decidx;
		}

		if ((*(uint8_t*)(NativeAddr + i) == 0xFF && *(uint8_t*)(NativeAddr + i + 1) == 0x90) ||
			*(uint8_t*)(NativeAddr + i) == 0xFF && *(uint8_t*)(NativeAddr + i + 1) == 0x93)
		{
			if (bFoundValidate)
			{
				std::string wtf = "";

				int shots = 0;

				bool bFoundFirstNumber = false;

				for (__int64 z = (NativeAddr + i + 5); z != (NativeAddr + i + 1); z -= 1)
				{
					auto anafa = (int)(*(uint8_t*)z);

					auto asfk = anafa < 10 ? "0" + std::format("{:x}", anafa) : std::format("{:x}", anafa);

					// std::cout << std::format("[{}] 0x{}\n", shots, asfk);

					if (*(uint8_t*)z == 0 ? bFoundFirstNumber : true)
					{
						wtf += asfk;
						bFoundFirstNumber = true;
					}

					shots++;
				}

				std::transform(wtf.begin(), wtf.end(), wtf.begin(), ::toupper);

				// std::cout << "wtf: " << wtf << '\n';

				auto decidx2 = HexToDec(wtf);

				// std::cout << "decidx2: " << decidx2 << '\n';

				auto SecondByte = *(uint8_t*)(NativeAddr + i + 2);
				auto ThirdByte = *(uint8_t*)(NativeAddr + i + 3);

				std::string bytes = GetBytes(NativeAddr + i + 2, 2);

				std::string last2bytes;
				last2bytes += bytes[3];
				last2bytes += bytes[4];

				std::string neww;

				if (last2bytes != "00")
					neww = last2bytes;

				neww += bytes[0];
				neww += bytes[1];
				bytes = neww;

				// bytes.erase(std::remove(bytes.begin(), bytes.end(), '0'), bytes.end());

				// std::cout << Function->GetName() + " Bytes: " << bytes << '\n';

				auto decidx = HexToDec(bytes);

				// std::cout << "decidx: " << decidx << '\n';

				return decidx2;
			}
			else
			{
				bFoundValidate = true;
				continue;
			}
		}

		if (!RetAddr && *(uint8_t*)(NativeAddr + i) == 0xC3)
		{
			RetAddr = NativeAddr + i;
			// break;
		}
	}

	// The function isn't virtual

	__int64 functionAddy = 0;

	// std::cout << " not virtual!\n";

	if (RetAddr)
	{
		// LOG_INFO(LogDev, "RetAddr 0x{:x}", RetAddr - __int64(GetModuleHandleW(0)));

		int i = 0;

		for (__int64 CurrentAddy = RetAddr; CurrentAddy != NativeAddr && i < 2000; CurrentAddy -= 1) // Find last call
		{
			// LOG_INFO(LogDev, "[{}] 0x{:x}", i, *(uint8_t*)CurrentAddy);

			if (*(uint8_t*)CurrentAddy == 0xE8)
			{
				// LOG_INFO(LogDev, "CurrentAddy 0x{:x}", CurrentAddy - __int64(GetModuleHandleW(0)));
				functionAddy = (CurrentAddy + 1 + 4) + *(int*)(CurrentAddy + 1);
				break;
			}

			i++;
		}
	}

	return !functionAddy ? -1 : functionAddy;
}

inline bool IsBadReadPtr(void* p)
{
	MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (::VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		// check the page is not a guard page
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

		return b;
	}
	return true;
}

inline void HookCall(uint8_t* instrAddr, uint8_t* targetAddr)
{
	int64_t delta = targetAddr - (instrAddr + 5);
	*(int32_t*)(instrAddr + 1) = static_cast<int32_t>(delta);
}

inline void UnhookFunction(UObject* DefaultClass, UFunction* Function, void* CurrentHooked, void* OldFunc, bool bHookExec = false, __int64 HardcodedOffset = -1, IAmADumbass REAL = IAmADumbass::NO)
{
	auto Thing = HardcodedOffset == -1 ? GetFunctionIdxOrPtr(Function, bHookExec, REAL) : HardcodedOffset;

	if (Thing != -1)
	{
		if (IsBadReadPtr((void*)Thing)) // Index
		{
			int Idx = Thing / 8;

			// UObject* ClassOfFunction = Function->OuterPrivate;
			UObject* DefaultObject = DefaultClass; // ClassOfFunction->CreateDefaultObject();

			// LOG_INFO(LogDev, "DefaultObject: {}", DefaultObject->GetPathName());

			if (DefaultObject)
			{
				auto og = DefaultObject->VFT[Idx];

				// LOG_INFO(LogDev, "OG: 0x{:x}", __int64(__int64(og) - __int64(GetModuleHandleW(0))));

				DWORD dwProtection;
				VirtualProtect(DefaultObject->VFT, (Thing + 8), PAGE_EXECUTE_READWRITE, &dwProtection);

				DefaultObject->VFT[Idx] = OldFunc;

				DWORD dwTemp;
				VirtualProtect(DefaultObject->VFT, (Thing + 8), dwProtection, &dwTemp);
			}
		}
		else // Address
		{
			// LOG_INFO(LogDev, "Thing: 0x{:x}", Thing - __int64(GetModuleHandleW(0)));

			void* aa = nullptr;

			// std::cout << std::format("{} 0x{:x}\n", Function->GetFullName(), Thing - __int64(GetModuleHandleW(0)));

			REMOVE_HOOK(CurrentHooked, OldFunc);
		}
	}
}

inline void HookFunction(UObject* DefaultClass, UFunction* Function, void* NewFunc, void** OG = nullptr, bool bHookExec = false, __int64 HardcodedOffset = -1, IAmADumbass REAL = IAmADumbass::NO, bool bHookUsingNew = false)
{
	// return;

	auto Thing = HardcodedOffset == -1 ? (bHookUsingNew ? GetFunctionIdxOrPtr2(Function, bHookExec) : GetFunctionIdxOrPtr(Function, bHookExec, REAL)) : HardcodedOffset;

	if (Thing != -1)
	{
		if (IsBadReadPtr((void*)Thing)) // Index
		{
			int Idx = Thing / 8;

			// UObject* ClassOfFunction = Function->OuterPrivate;
			UObject* DefaultObject = DefaultClass; // ClassOfFunction->CreateDefaultObject();

			// LOG_INFO(LogDev, "DefaultObject: {}", DefaultObject->GetPathName());

			if (DefaultObject)
			{
				auto og = DefaultObject->VFT[Idx];

				// LOG_INFO(LogDev, "OG: 0x{:x}", __int64(__int64(og) - __int64(GetModuleHandleW(0))));

				if (OG)
					*OG = og;

				DWORD dwProtection;
				VirtualProtect(DefaultObject->VFT, (Thing + 8), PAGE_EXECUTE_READWRITE, &dwProtection);

				DefaultObject->VFT[Idx] = NewFunc;

				DWORD dwTemp;
				VirtualProtect(DefaultObject->VFT, (Thing + 8), dwProtection, &dwTemp);
			}
		}
		else // Address
		{
			// LOG_INFO(LogDev, "Thing: 0x{:x}", Thing - __int64(GetModuleHandleW(0)));

			void* aa = nullptr;

			if (!OG)
			{
				OG = &aa;
			}

			*OG = (void*)Thing;

			// std::cout << std::format("{} 0x{:x}\n", Function->GetFullName(), Thing - __int64(GetModuleHandleW(0)));

			CREATE_HOOK(NewFunc, *OG);
		}
	}
}

inline void HookFunction2(UObject* DefaultClass, UFunction* Function, void* NewFunc, void** OG = nullptr, bool bHookExec = false, __int64 HardcodedOffset = -1)
{
	return HookFunction(DefaultClass, Function, NewFunc, OG, bHookExec, HardcodedOffset, IAmADumbass::NO, true);
}

#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)
#define PI 					(3.1415926535897932f)

static FORCEINLINE void SinCos(float* ScalarSin, float* ScalarCos, float  Value)
{
	// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
	float quotient = (INV_PI * 0.5f) * Value;
	if (Value >= 0.0f)
	{
		quotient = (float)((int)(quotient + 0.5f));
	}
	else
	{
		quotient = (float)((int)(quotient - 0.5f));
	}
	float y = Value - (2.0f * PI) * quotient;

	// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
	float sign;
	if (y > HALF_PI)
	{
		y = PI - y;
		sign = -1.0f;
	}
	else if (y < -HALF_PI)
	{
		y = -PI - y;
		sign = -1.0f;
	}
	else
	{
		sign = +1.0f;
	}

	float y2 = y * y;

	// 11-degree minimax approximation
	*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

	// 10-degree minimax approximation
	float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
	*ScalarCos = sign * p;
}

template<class T>
static FORCEINLINE auto DegreesToRadians(T const& DegVal) -> decltype(DegVal* (PI / 180.f))
{
	return DegVal * (PI / 180.f);
}

static FVector Vector(const FRotator& Rotator)
{
	float CP, SP, CY, SY;
	SinCos(&SP, &CP, DegreesToRadians(Rotator.Pitch));
	SinCos(&SY, &CY, DegreesToRadians(Rotator.Yaw));
	FVector V = FVector(CP * CY, CP * SY, SP);

	return V;
}

static std::vector<AFortPlayerStateAthena*> GetAlivePlayers()
{
	std::vector<AFortPlayerStateAthena*> AlivePlayers;

	if (!GetWorld()->NetDriver)
		return AlivePlayers;

	for (int i = 0; i < GetWorld()->NetDriver->ClientConnections.Num(); i++)
	{
		auto Connection = GetWorld()->NetDriver->ClientConnections[i];
		auto PlayerController = Cast<AFortPlayerControllerAthena>(Connection->PlayerController);

		if (!PlayerController)
			continue;

		auto PlayerState = Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);

		if (!PlayerState)
			continue;

		if (PlayerController->bMarkedAlive)
			AlivePlayers.push_back(PlayerState);
	}

	return AlivePlayers;
}

#define PLATFORM_ENABLE_VECTORINTRINSICS 0

typedef __m128	VectorRegister;
typedef __m128i VectorRegisterInt;
typedef __m128d VectorRegisterDouble;

#define SHUFFLEMASK(A0,A1,B2,B3) ( (A0) | ((A1)<<2) | ((B2)<<4) | ((B3)<<6) )

#define VectorShuffle( Vec1, Vec2, X, Y, Z, W )	_mm_shuffle_ps( Vec1, Vec2, SHUFFLEMASK(X,Y,Z,W) )

FORCEINLINE VectorRegister VectorMultiply(const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	return _mm_mul_ps(Vec1, Vec2);
}

FORCEINLINE VectorRegister VectorSubtract(const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	return _mm_sub_ps(Vec1, Vec2);
}

FORCEINLINE VectorRegister MakeVectorRegister(float X, float Y, float Z, float W)
{
	return _mm_setr_ps(X, Y, Z, W);
}

static const VectorRegister FloatOne = MakeVectorRegister(1.0f, 1.0f, 1.0f, 1.0f);
static const VectorRegister FloatZero = MakeVectorRegister(0.0f, 0.0f, 0.0f, 0.0f);
static const VectorRegister FloatMinusOne = MakeVectorRegister(-1.0f, -1.0f, -1.0f, -1.0f);
static const VectorRegister Float0001 = MakeVectorRegister(0.0f, 0.0f, 0.0f, 1.0f);
static const VectorRegister SmallLengthThreshold = MakeVectorRegister(1.e-8f, 1.e-8f, 1.e-8f, 1.e-8f);
static const VectorRegister FloatOneHundredth = MakeVectorRegister(0.01f, 0.01f, 0.01f, 0.01f);
static const VectorRegister Float111_Minus1 = MakeVectorRegister(1.f, 1.f, 1.f, -1.f);
static const VectorRegister FloatMinus1_111 = MakeVectorRegister(-1.f, 1.f, 1.f, 1.f);
static const VectorRegister FloatOneHalf = MakeVectorRegister(0.5f, 0.5f, 0.5f, 0.5f);
static const VectorRegister FloatMinusOneHalf = MakeVectorRegister(-0.5f, -0.5f, -0.5f, -0.5f);

#define SIGN_BIT ((1 << 31))
static const VectorRegister SignBit = MakeVectorRegister((uint32)SIGN_BIT, (uint32)SIGN_BIT, (uint32)SIGN_BIT, (uint32)SIGN_BIT);
static const VectorRegister SignMask = MakeVectorRegister((uint32)(~SIGN_BIT), (uint32)(~SIGN_BIT), (uint32)(~SIGN_BIT), (uint32)(~SIGN_BIT));
#undef SIGN_BIT

static const VectorRegister Pi = MakeVectorRegister(PI, PI, PI, PI);
static const VectorRegister TwoPi = MakeVectorRegister(2.0f * PI, 2.0f * PI, 2.0f * PI, 2.0f * PI);
static const VectorRegister PiByTwo = MakeVectorRegister(0.5f * PI, 0.5f * PI, 0.5f * PI, 0.5f * PI);
static const VectorRegister PiByFour = MakeVectorRegister(0.25f * PI, 0.25f * PI, 0.25f * PI, 0.25f * PI);
static const VectorRegister OneOverPi = MakeVectorRegister(1.0f / PI, 1.0f / PI, 1.0f / PI, 1.0f / PI);
static const VectorRegister OneOverTwoPi = MakeVectorRegister(1.0f / (2.0f * PI), 1.0f / (2.0f * PI), 1.0f / (2.0f * PI), 1.0f / (2.0f * PI));

static const VectorRegister Float255 = MakeVectorRegister(255.0f, 255.0f, 255.0f, 255.0f);
static const VectorRegister Float127 = MakeVectorRegister(127.0f, 127.0f, 127.0f, 127.0f);
static const VectorRegister FloatNeg127 = MakeVectorRegister(-127.0f, -127.0f, -127.0f, -127.0f);
static const VectorRegister Float360 = MakeVectorRegister(360.f, 360.f, 360.f, 360.f);
static const VectorRegister Float180 = MakeVectorRegister(180.f, 180.f, 180.f, 180.f);

static const VectorRegister FloatTwo = MakeVectorRegister(2.0f, 2.0f, 2.0f, 2.0f);
static const uint32 AlmostTwoBits = 0x3fffffff;
static const VectorRegister FloatAlmostTwo = MakeVectorRegister(*(float*)&AlmostTwoBits, *(float*)&AlmostTwoBits, *(float*)&AlmostTwoBits, *(float*)&AlmostTwoBits);

static const VectorRegister DEG_TO_RAD_HALF = MakeVectorRegister((PI / 180.f) * 0.5f, (PI / 180.f) * 0.5f, (PI / 180.f) * 0.5f, (PI / 180.f) * 0.5f);

#define VectorReplicate( Vec, ElementIndex )	_mm_shuffle_ps( Vec, Vec, SHUFFLEMASK(ElementIndex,ElementIndex,ElementIndex,ElementIndex) )

#define VectorMultiplyAdd( Vec1, Vec2, Vec3 )	_mm_add_ps( _mm_mul_ps(Vec1, Vec2), Vec3 )

FORCEINLINE VectorRegister VectorSelect(const VectorRegister& Mask, const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	return _mm_xor_ps(Vec2, _mm_and_ps(Mask, _mm_xor_ps(Vec1, Vec2)));
}

#define VectorBitwiseOr(Vec1, Vec2)	_mm_or_ps(Vec1, Vec2)
#define VectorBitwiseAnd(Vec1, Vec2) _mm_and_ps(Vec1, Vec2)
#define VectorCompareGT( Vec1, Vec2 )			_mm_cmpgt_ps( Vec1, Vec2 )
#define VectorAbs( Vec )				_mm_and_ps(Vec, SignMask)

FORCEINLINE void VectorSinCos(VectorRegister* __restrict VSinAngles, VectorRegister* __restrict VCosAngles, const VectorRegister* __restrict VAngles)
{
	// Map to [-pi, pi]
	// X = A - 2pi * round(A/2pi)
	// Note the round(), not truncate(). In this case round() can round halfway cases using round-to-nearest-even OR round-to-nearest.

	// Quotient = round(A/2pi)
	VectorRegister Quotient = VectorMultiply(*VAngles, OneOverTwoPi);
	Quotient = _mm_cvtepi32_ps(_mm_cvtps_epi32(Quotient)); // round to nearest even is the default rounding mode but that's fine here.
	// X = A - 2pi * Quotient
	VectorRegister X = VectorSubtract(*VAngles, VectorMultiply(TwoPi, Quotient));

	// Map in [-pi/2,pi/2]
	VectorRegister sign = VectorBitwiseAnd(X, SignBit);
	VectorRegister c = VectorBitwiseOr(Pi, sign);  // pi when x >= 0, -pi when x < 0
	VectorRegister absx = VectorAbs(X);
	VectorRegister rflx = VectorSubtract(c, X);
	VectorRegister comp = VectorCompareGT(absx, PiByTwo);
	X = VectorSelect(comp, rflx, X);
	sign = VectorSelect(comp, FloatMinusOne, FloatOne);

	const VectorRegister XSquared = VectorMultiply(X, X);

	// 11-degree minimax approximation
	//*ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;
	const VectorRegister SinCoeff0 = MakeVectorRegister(1.0f, -0.16666667f, 0.0083333310f, -0.00019840874f);
	const VectorRegister SinCoeff1 = MakeVectorRegister(2.7525562e-06f, -2.3889859e-08f, /*unused*/ 0.f, /*unused*/ 0.f);

	VectorRegister S;
	S = VectorReplicate(SinCoeff1, 1);
	S = VectorMultiplyAdd(XSquared, S, VectorReplicate(SinCoeff1, 0));
	S = VectorMultiplyAdd(XSquared, S, VectorReplicate(SinCoeff0, 3));
	S = VectorMultiplyAdd(XSquared, S, VectorReplicate(SinCoeff0, 2));
	S = VectorMultiplyAdd(XSquared, S, VectorReplicate(SinCoeff0, 1));
	S = VectorMultiplyAdd(XSquared, S, VectorReplicate(SinCoeff0, 0));
	*VSinAngles = VectorMultiply(S, X);

	// 10-degree minimax approximation
	//*ScalarCos = sign * (((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f);
	const VectorRegister CosCoeff0 = MakeVectorRegister(1.0f, -0.5f, 0.041666638f, -0.0013888378f);
	const VectorRegister CosCoeff1 = MakeVectorRegister(2.4760495e-05f, -2.6051615e-07f, /*unused*/ 0.f, /*unused*/ 0.f);

	VectorRegister C;
	C = VectorReplicate(CosCoeff1, 1);
	C = VectorMultiplyAdd(XSquared, C, VectorReplicate(CosCoeff1, 0));
	C = VectorMultiplyAdd(XSquared, C, VectorReplicate(CosCoeff0, 3));
	C = VectorMultiplyAdd(XSquared, C, VectorReplicate(CosCoeff0, 2));
	C = VectorMultiplyAdd(XSquared, C, VectorReplicate(CosCoeff0, 1));
	C = VectorMultiplyAdd(XSquared, C, VectorReplicate(CosCoeff0, 0));
	*VCosAngles = VectorMultiply(C, sign);
}

#define VectorBitwiseXor(Vec1, Vec2) _mm_xor_ps(Vec1, Vec2)

FORCEINLINE VectorRegister VectorAdd(const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	return _mm_add_ps(Vec1, Vec2);
}

#define VectorStoreAligned( Vec, Ptr )	_mm_store_ps( (float*)(Ptr), Vec )

static FQuat Quaternion(const FRotator& Rotator)
{
	//SCOPE_CYCLE_COUNTER(STAT_MathConvertRotatorToQuat);

#if PLATFORM_ENABLE_VECTORINTRINSICS
	const VectorRegister Angles = MakeVectorRegister(Rotator.Pitch, Rotator.Yaw, Rotator.Roll, 0.0f);
	const VectorRegister HalfAngles = VectorMultiply(Angles, DEG_TO_RAD_HALF);

	VectorRegister SinAngles, CosAngles;
	VectorSinCos(&SinAngles, &CosAngles, &HalfAngles);

	// Vectorized conversion, measured 20% faster than using scalar version after VectorSinCos.
	// Indices within VectorRegister (for shuffles): P=0, Y=1, R=2
	const VectorRegister SR = VectorReplicate(SinAngles, 2);
	const VectorRegister CR = VectorReplicate(CosAngles, 2);

	const VectorRegister SY_SY_CY_CY_Temp = VectorShuffle(SinAngles, CosAngles, 1, 1, 1, 1);

	const VectorRegister SP_SP_CP_CP = VectorShuffle(SinAngles, CosAngles, 0, 0, 0, 0);
	const VectorRegister SY_CY_SY_CY = VectorShuffle(SY_SY_CY_CY_Temp, SY_SY_CY_CY_Temp, 0, 2, 0, 2);

	const VectorRegister CP_CP_SP_SP = VectorShuffle(CosAngles, SinAngles, 0, 0, 0, 0);
	const VectorRegister CY_SY_CY_SY = VectorShuffle(SY_SY_CY_CY_Temp, SY_SY_CY_CY_Temp, 2, 0, 2, 0);

	const uint32 Neg = uint32(1 << 31);
	const uint32 Pos = uint32(0);
	const VectorRegister SignBitsLeft = MakeVectorRegister(Pos, Neg, Pos, Pos);
	const VectorRegister SignBitsRight = MakeVectorRegister(Neg, Neg, Neg, Pos);
	const VectorRegister LeftTerm = VectorBitwiseXor(SignBitsLeft, VectorMultiply(CR, VectorMultiply(SP_SP_CP_CP, SY_CY_SY_CY)));
	const VectorRegister RightTerm = VectorBitwiseXor(SignBitsRight, VectorMultiply(SR, VectorMultiply(CP_CP_SP_SP, CY_SY_CY_SY)));

	FQuat RotationQuat;
	const VectorRegister Result = VectorAdd(LeftTerm, RightTerm);
	VectorStoreAligned(Result, &RotationQuat);
#else
	const float DEG_TO_RAD = PI / (180.f);
	const float DIVIDE_BY_2 = DEG_TO_RAD / 2.f;
	float SP, SY, SR;
	float CP, CY, CR;

	SinCos(&SP, &CP, Rotator.Pitch * DIVIDE_BY_2);
	SinCos(&SY, &CY, Rotator.Yaw * DIVIDE_BY_2);
	SinCos(&SR, &CR, Rotator.Roll * DIVIDE_BY_2);

	FQuat RotationQuat{};
	RotationQuat.X = CR * SP * SY - SR * CP * CY;
	RotationQuat.Y = -CR * SP * CY - SR * CP * SY;
	RotationQuat.Z = CR * CP * SY - SR * SP * CY;
	RotationQuat.W = CR * CP * CY + SR * SP * SY;
#endif // PLATFORM_ENABLE_VECTORINTRINSICS

#if ENABLE_NAN_DIAGNOSTIC || DO_CHECK
	// Very large inputs can cause NaN's. Want to catch this here
	ensureMsgf(!RotationQuat.ContainsNaN(), TEXT("Invalid input to FRotator::Quaternion - generated NaN output: %s"), *RotationQuat.ToString());
#endif

	return RotationQuat;
}

static FORCEINLINE float InvSqrt(float F)
{
	// Performs two passes of Newton-Raphson iteration on the hardware estimate
	//    v^-0.5 = x
	// => x^2 = v^-1
	// => 1/(x^2) = v
	// => F(x) = x^-2 - v
	//    F'(x) = -2x^-3

	//    x1 = x0 - F(x0)/F'(x0)
	// => x1 = x0 + 0.5 * (x0^-2 - Vec) * x0^3
	// => x1 = x0 + 0.5 * (x0 - Vec * x0^3)
	// => x1 = x0 + x0 * (0.5 - 0.5 * Vec * x0^2)
	//
	// This final form has one more operation than the legacy factorization (X1 = 0.5*X0*(3-(Y*X0)*X0)
	// but retains better accuracy (namely InvSqrt(1) = 1 exactly).

	const __m128 fOneHalf = _mm_set_ss(0.5f);
	__m128 Y0, X0, X1, X2, FOver2;
	float temp;

	Y0 = _mm_set_ss(F);
	X0 = _mm_rsqrt_ss(Y0);	// 1/sqrt estimate (12 bits)
	FOver2 = _mm_mul_ss(Y0, fOneHalf);

	// 1st Newton-Raphson iteration
	X1 = _mm_mul_ss(X0, X0);
	X1 = _mm_sub_ss(fOneHalf, _mm_mul_ss(FOver2, X1));
	X1 = _mm_add_ss(X0, _mm_mul_ss(X0, X1));

	// 2nd Newton-Raphson iteration
	X2 = _mm_mul_ss(X1, X1);
	X2 = _mm_sub_ss(fOneHalf, _mm_mul_ss(FOver2, X2));
	X2 = _mm_add_ss(X1, _mm_mul_ss(X1, X2));

	_mm_store_ss(&temp, X2);
	return temp;
}

#define VectorLoadAligned( Ptr )		_mm_load_ps( (float*)(Ptr) )
#define VectorCompareNE( Vec1, Vec2 )			_mm_cmpneq_ps( Vec1, Vec2 )
#define VectorMaskBits( VecMask )			_mm_movemask_ps( VecMask )
#define VectorCompareEQ( Vec1, Vec2 )			_mm_cmpeq_ps( Vec1, Vec2 )

FORCEINLINE bool QuatEqual(const FQuat& other, const FQuat& Q)
{
#if PLATFORM_ENABLE_VECTORINTRINSICS
	const VectorRegister A = VectorLoadAligned(&other);
	const VectorRegister B = VectorLoadAligned(&Q);
	return VectorMaskBits(VectorCompareEQ(A, B)) == 0x0F;
#else
	return other.X == Q.X && other.Y == Q.Y && other.Z == Q.Z && other.W == Q.W;
#endif // PLATFORM_ENABLE_VECTORINTRINSICS
}


FORCEINLINE bool QuatNotEqual(const FQuat& other, const FQuat& Q)
{
#if PLATFORM_ENABLE_VECTORINTRINSICS
	const VectorRegister A = VectorLoadAligned(&other);
	const VectorRegister B = VectorLoadAligned(&Q);
	return VectorMaskBits(VectorCompareNE(A, B)) != 0x00;
#else
	return other.X != Q.X || other.Y != Q.Y || other.Z != Q.Z || other.W != Q.W;
#endif // PLATFORM_ENABLE_VECTORINTRINSICS
}

#define SMALL_NUMBER		(1.e-8f)

FORCEINLINE VectorRegister VectorDot4(const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	VectorRegister Temp1, Temp2;
	Temp1 = VectorMultiply(Vec1, Vec2);
	Temp2 = _mm_shuffle_ps(Temp1, Temp1, SHUFFLEMASK(2, 3, 0, 1));	// (Z,W,X,Y).
	Temp1 = VectorAdd(Temp1, Temp2);								// (X*X + Z*Z, Y*Y + W*W, Z*Z + X*X, W*W + Y*Y)
	Temp2 = _mm_shuffle_ps(Temp1, Temp1, SHUFFLEMASK(1, 2, 3, 0));	// Rotate left 4 bytes (Y,Z,W,X).
	return VectorAdd(Temp1, Temp2);								// (X*X + Z*Z + Y*Y + W*W, Y*Y + W*W + Z*Z + X*X, Z*Z + X*X + W*W + Y*Y, W*W + Y*Y + X*X + Z*Z)
}

#define VectorCompareGE( Vec1, Vec2 )			_mm_cmpge_ps( Vec1, Vec2 )
#define VectorLoadFloat1( Ptr )			_mm_load1_ps( (float*)(Ptr) )

#define VectorReciprocalSqrt(Vec)		_mm_rsqrt_ps( Vec )

FORCEINLINE VectorRegister VectorReciprocalSqrtAccurate(const VectorRegister& Vec)
{
	// Perform two passes of Newton-Raphson iteration on the hardware estimate
	//    v^-0.5 = x
	// => x^2 = v^-1
	// => 1/(x^2) = v
	// => F(x) = x^-2 - v
	//    F'(x) = -2x^-3

	//    x1 = x0 - F(x0)/F'(x0)
	// => x1 = x0 + 0.5 * (x0^-2 - Vec) * x0^3
	// => x1 = x0 + 0.5 * (x0 - Vec * x0^3)
	// => x1 = x0 + x0 * (0.5 - 0.5 * Vec * x0^2)

	const VectorRegister OneHalf = FloatOneHalf;
	const VectorRegister VecDivBy2 = VectorMultiply(Vec, OneHalf);

	// Initial estimate
	const VectorRegister x0 = VectorReciprocalSqrt(Vec);

	// First iteration
	VectorRegister x1 = VectorMultiply(x0, x0);
	x1 = VectorSubtract(OneHalf, VectorMultiply(VecDivBy2, x1));
	x1 = VectorMultiplyAdd(x0, x1, x0);

	// Second iteration
	VectorRegister x2 = VectorMultiply(x1, x1);
	x2 = VectorSubtract(OneHalf, VectorMultiply(VecDivBy2, x2));
	x2 = VectorMultiplyAdd(x1, x2, x1);

	return x2;
}

FORCEINLINE void Normalize(FQuat& Quat, float Tolerance = SMALL_NUMBER)
{
#if PLATFORM_ENABLE_VECTORINTRINSICS
	const VectorRegister Vector = VectorLoadAligned(&Quat);

	const VectorRegister SquareSum = VectorDot4(Vector, Vector);
	const VectorRegister NonZeroMask = VectorCompareGE(SquareSum, VectorLoadFloat1(&Tolerance));
	const VectorRegister InvLength = VectorReciprocalSqrtAccurate(SquareSum);
	const VectorRegister NormalizedVector = VectorMultiply(InvLength, Vector);
	VectorRegister Result = VectorSelect(NonZeroMask, NormalizedVector, Float0001);

	VectorStoreAligned(Result, &Quat);
#else
	const float SquareSum = Quat.X * Quat.X + Quat.Y * Quat.Y + Quat.Z * Quat.Z + Quat.W * Quat.W;

	if (SquareSum >= Tolerance)
	{
		const float Scale = InvSqrt(SquareSum);

		Quat.X *= Scale;
		Quat.Y *= Scale;
		Quat.Z *= Scale;
		Quat.W *= Scale;
	}
	else
	{
		Quat = FQuat(0, 0, 0, 1);
	}
#endif // PLATFORM_ENABLE_VECTORINTRINSICS
}


static FORCEINLINE float Abs(const float A)
{
	return fabsf(A);
}

static FORCEINLINE float Sqrt(float Value) { return sqrtf(Value); }

#define FASTASIN_HALF_PI (1.5707963050f)

static FORCEINLINE float FastAsin(float Value)
{
	// Clamp input to [-1,1].
	bool nonnegative = (Value >= 0.0f);
	float x = Abs(Value);
	float omx = 1.0f - x;
	if (omx < 0.0f)
	{
		omx = 0.0f;
	}
	float root = Sqrt(omx);
	// 7-degree minimax approximation
	float result = ((((((-0.0012624911f * x + 0.0066700901f) * x - 0.0170881256f) * x + 0.0308918810f) * x - 0.0501743046f) * x + 0.0889789874f) * x - 0.2145988016f) * x + FASTASIN_HALF_PI;
	result *= root;  // acos(|x|)
	// acos(x) = pi - acos(-x) when x < 0, asin(x) = pi/2 - acos(x)
	return (nonnegative ? FASTASIN_HALF_PI - result : result - FASTASIN_HALF_PI);
}
#undef FASTASIN_HALF_PI

template< class T >
static FORCEINLINE T Square(const T A)
{
	return A * A;
}

static float Atan2(float Y, float X)
{
	//return atan2f(Y,X);
	// atan2f occasionally returns NaN with perfectly valid input (possibly due to a compiler or library bug).
	// We are replacing it with a minimax approximation with a max relative error of 7.15255737e-007 compared to the C library function.
	// On PC this has been measured to be 2x faster than the std C version.

	const float absX = Abs(X);
	const float absY = Abs(Y);
	const bool yAbsBigger = (absY > absX);
	float t0 = yAbsBigger ? absY : absX; // Max(absY, absX)
	float t1 = yAbsBigger ? absX : absY; // Min(absX, absY)

	if (t0 == 0.f)
		return 0.f;

	float t3 = t1 / t0;
	float t4 = t3 * t3;

	static const float c[7] = {
		+7.2128853633444123e-03f,
		-3.5059680836411644e-02f,
		+8.1675882859940430e-02f,
		-1.3374657325451267e-01f,
		+1.9856563505717162e-01f,
		-3.3324998579202170e-01f,
		+1.0f
	};

	t0 = c[0];
	t0 = t0 * t4 + c[1];
	t0 = t0 * t4 + c[2];
	t0 = t0 * t4 + c[3];
	t0 = t0 * t4 + c[4];
	t0 = t0 * t4 + c[5];
	t0 = t0 * t4 + c[6];
	t3 = t0 * t3;

	t3 = yAbsBigger ? (0.5f * PI) - t3 : t3;
	t3 = (X < 0.0f) ? PI - t3 : t3;
	t3 = (Y < 0.0f) ? -t3 : t3;

	return t3;
}

static constexpr FORCEINLINE int32 TruncToInt(float F)
{
	return (int32)F;
}

static constexpr FORCEINLINE float TruncToFloat(float F)
{
	return (float)TruncToInt(F);
}

static FORCEINLINE float Fmod(float X, float Y)
{
	if (fabsf(Y) <= 1.e-8f)
	{
		// FmodReportError(X, Y);
		return 0.f;
	}
	const float Quotient = TruncToFloat(X / Y);
	float IntPortion = Y * Quotient;

	// Rounding and imprecision could cause IntPortion to exceed X and cause the result to be outside the expected range.
	// For example Fmod(55.8, 9.3) would result in a very small negative value!
	if (fabsf(IntPortion) > fabsf(X))
	{
		IntPortion = X;
	}

	const float Result = X - IntPortion;
	return Result;
}

static FORCEINLINE float ClampAxis(float Angle)
{
	// returns Angle in the range (-360,360)
	Angle = Fmod(Angle, 360.f);

	if (Angle < 0.f)
	{
		// shift to [0,360) range
		Angle += 360.f;
	}

	return Angle;
}

static FORCEINLINE float NormalizeAxis(float Angle)
{
	// returns Angle in the range [0,360)
	Angle = ClampAxis(Angle);

	if (Angle > 180.f)
	{
		// shift to (-180,180]
		Angle -= 360.f;
	}

	return Angle;
}

static FRotator Rotator(const FQuat& Quaternion)
{
	const float SingularityTest = Quaternion.Z * Quaternion.X - Quaternion.W * Quaternion.Y;
	const float YawY = 2.f * (Quaternion.W * Quaternion.Z + Quaternion.X * Quaternion.Y);
	const float YawX = (1.f - 2.f * (Square(Quaternion.Y) + Square(Quaternion.Z)));

	// reference 
	// http://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
	// http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToEuler/

	// this value was found from experience, the above websites recommend different values
	// but that isn't the case for us, so I went through different testing, and finally found the case 
	// where both of world lives happily. 
	const float SINGULARITY_THRESHOLD = 0.4999995f;
	const float RAD_TO_DEG = (180.f) / PI;
	FRotator RotatorFromQuat;

	if (SingularityTest < -SINGULARITY_THRESHOLD)
	{
		RotatorFromQuat.Pitch = -90.f;
		RotatorFromQuat.Yaw = Atan2(YawY, YawX) * RAD_TO_DEG;
		RotatorFromQuat.Roll = NormalizeAxis(-RotatorFromQuat.Yaw - (2.f * Atan2(Quaternion.X, Quaternion.W) * RAD_TO_DEG));
	}
	else if (SingularityTest > SINGULARITY_THRESHOLD)
	{
		RotatorFromQuat.Pitch = 90.f;
		RotatorFromQuat.Yaw = Atan2(YawY, YawX) * RAD_TO_DEG;
		RotatorFromQuat.Roll = NormalizeAxis(RotatorFromQuat.Yaw - (2.f * Atan2(Quaternion.X, Quaternion.W) * RAD_TO_DEG));
	}
	else
	{
		RotatorFromQuat.Pitch = FastAsin(2.f * (SingularityTest)) * RAD_TO_DEG;
		RotatorFromQuat.Yaw = Atan2(YawY, YawX) * RAD_TO_DEG;
		RotatorFromQuat.Roll = Atan2(-2.f * (Quaternion.W * Quaternion.X + Quaternion.Y * Quaternion.Z), (1.f - 2.f * (Square(Quaternion.X) + Square(Quaternion.Y)))) * RAD_TO_DEG;
	}

#if ENABLE_NAN_DIAGNOSTIC
	if (RotatorFromQuat.ContainsNaN())
	{
		logOrEnsureNanError(TEXT("FQuat::Rotator(): Rotator result %s contains NaN! Quat = %s, YawY = %.9f, YawX = %.9f"), *RotatorFromQuat.ToString(), *this->ToString(), YawY, YawX);
		RotatorFromQuat = FRotator::ZeroRotator;
	}
#endif

	return RotatorFromQuat;
}

static std::vector<UFortWorldItem*> GetDroppableItems(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* IgnoreDef = nullptr, bool bCheckOnDeath = false)
{
	std::vector<UFortWorldItem*> DroppableItems;

	if (PlayerController->WorldInventory)
	{
		auto ItemInstances = PlayerController->WorldInventory->Inventory.ItemInstances;

		for (int i = 0; i < ItemInstances.Num(); i++)
		{
			auto ItemInstance = ItemInstances[i];

			if (!ItemInstance)
				continue;

			auto ItemEntry = ItemInstance->ItemEntry;
			auto ItemDefiniton = (UFortWorldItemDefinition*)ItemEntry.ItemDefinition;

			// std::cout << std::format("[{}] {} {}\n", i, (int)ItemDefiniton->bCanBeDropped, (!bCheckOnDeath ? true : ItemDefiniton->bDropOnDeath));

			if (ItemDefiniton->bCanBeDropped && ItemInstance->ItemEntry.ItemDefinition != IgnoreDef /* && (!bCheckOnDeath ? true : ItemDefiniton->bDropOnDeath) */)
				DroppableItems.push_back(ItemInstance);
		}
	}

	return DroppableItems;
}

static bool OnSameTeam(std::vector<AFortPlayerStateAthena*> Players)
{
	for (auto Player : Players)
	{
		if (Player)
		{
			for (auto CurrentPlayer : Players)
			{
				if (CurrentPlayer)
				{
					if (CurrentPlayer->TeamIndex != Player->TeamIndex)
						return false;
				}
			}
		}
	}

	return true;
}

static AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, FVector Location, int Count, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, int LoadedAmmo = -1, AFortPawn* Pawn = nullptr)
{
	auto PlayerState = Pawn ? Cast<AFortPlayerState>(Pawn->PlayerState) : nullptr;

	if (auto Pickup = GetWorld()->SpawnActor<AFortPickupAthena>(Location))
	{
		Pickup->PrimaryPickupItemEntry.Count = Count;
		Pickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;
		Pickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;

		Pickup->OptionalOwnerID = Pawn ? PlayerState->WorldPlayerId : -1;
		Pickup->PawnWhoDroppedPickup = Pawn;
		// Pickup->bCombinePickupsWhenTossCompletes = true;

		bool bToss = true;

		if (bToss)
		{
			PickupSource |= EFortPickupSourceTypeFlag::Tossed;
		}

		Pickup->TossPickup(Location, Pawn, ItemDef->MaxStackSize, bToss, PickupSource, SpawnSource);

		if (PickupSource == EFortPickupSourceTypeFlag::Container)
		{
			Pickup->bTossedFromContainer = true;
			Pickup->OnRep_TossedFromContainer();
		} // crashes if we do this then tosspickup

		return Pickup;
	}

	return nullptr;
}

#define VectorLoadFloat3_W0( Ptr )		MakeVectorRegister( ((const float*)(Ptr))[0], ((const float*)(Ptr))[1], ((const float*)(Ptr))[2], 0.0f )

FORCEINLINE VectorRegister VectorTruncate(const VectorRegister& X)
{
	return _mm_cvtepi32_ps(_mm_cvttps_epi32(X));
}

FORCEINLINE VectorRegister VectorDivide(const VectorRegister& Vec1, const VectorRegister& Vec2)
{
	return _mm_div_ps(Vec1, Vec2);
}

FORCEINLINE VectorRegister VectorMod(const VectorRegister& X, const VectorRegister& Y)
{
	VectorRegister Temp = VectorTruncate(VectorDivide(X, Y));
	return VectorSubtract(X, VectorMultiply(Y, Temp));
}

FORCEINLINE VectorRegister VectorZero(void)
{
	return _mm_setzero_ps();
}

FORCEINLINE void VectorStoreFloat3(const VectorRegister& Vec, void* Ptr)
{
	union { VectorRegister v; float f[4]; } Tmp;
	Tmp.v = Vec;
	float* FloatPtr = (float*)(Ptr);
	FloatPtr[0] = Tmp.f[0];
	FloatPtr[1] = Tmp.f[1];
	FloatPtr[2] = Tmp.f[2];
}

FORCEINLINE VectorRegister VectorNormalizeRotator(const VectorRegister& UnnormalizedRotator)
{
	// shift in the range [-360,360]
	VectorRegister V0 = VectorMod(UnnormalizedRotator, Float360);
	VectorRegister V1 = VectorAdd(V0, Float360);
	VectorRegister V2 = VectorSelect(VectorCompareGE(V0, VectorZero()), V0, V1);

	// shift to [-180,180]
	VectorRegister V3 = VectorSubtract(V2, Float360);
	VectorRegister V4 = VectorSelect(VectorCompareGT(V2, Float180), V3, V2);

	return  V4;
}

FORCEINLINE void Normalize(FRotator& Rotator)
{
#if PLATFORM_ENABLE_VECTORINTRINSICS
	VectorRegister VRotator = VectorLoadFloat3_W0(&Rotator);
	VRotator = VectorNormalizeRotator(VRotator);
	VectorStoreFloat3(VRotator, &Rotator);
#else
	Rotator.Pitch = NormalizeAxis(Rotator.Pitch);
	Rotator.Yaw = NormalizeAxis(Rotator.Yaw);
	Rotator.Roll = NormalizeAxis(Rotator.Roll);
#endif
}

static FRotator GetNormalized(const FRotator& Rotator)
{
	FRotator rot = Rotator;
	Normalize(rot);
	return rot;
}

static FQuat GetNormalized(const FQuat& Quat)
{
	FQuat quat = Quat;
	Normalize(quat);
	return quat;
}

struct FRotationConversionCache
{
	/** Convert a FRotator to FQuat. Uses the cached conversion if possible, and updates it if there was no match. */
	FORCEINLINE FQuat RotatorToQuat(const FRotator& InRotator) const
	{
		if (CachedRotator != InRotator)
		{
			CachedRotator = GetNormalized(InRotator);
			CachedQuat = Quaternion(CachedRotator);
		}
		return CachedQuat;
	}

	/** Convert a FRotator to FQuat. Uses the cached conversion if possible, but does *NOT* update the cache if there was no match. */
	FORCEINLINE FQuat RotatorToQuat_ReadOnly(const FRotator& InRotator) const
	{
		if (CachedRotator == InRotator)
		{
			return CachedQuat;
		}
		return Quaternion(InRotator);
	}

	/** Convert a FQuat to FRotator. Uses the cached conversion if possible, and updates it if there was no match. */
	FORCEINLINE FRotator QuatToRotator(const FQuat& InQuat) const
	{
		if (QuatNotEqual(CachedQuat, InQuat))
		{
			CachedQuat = GetNormalized(InQuat);
			CachedRotator = Rotator(CachedQuat);
		}
		return CachedRotator;
	}

	/** Convert a FQuat to FRotator. Uses the cached conversion if possible, but does *NOT* update the cache if there was no match. */
	FORCEINLINE FRotator QuatToRotator_ReadOnly(const FQuat& InQuat) const
	{
		if (QuatEqual(CachedQuat, InQuat))
		{
			return CachedRotator;
		}
		return Rotator(InQuat);
	}

	/** Version of QuatToRotator when the Quat is known to already be normalized. */
	FORCEINLINE FRotator NormalizedQuatToRotator(const FQuat& InNormalizedQuat) const
	{
		if (QuatNotEqual(CachedQuat, InNormalizedQuat))
		{
			CachedQuat = InNormalizedQuat;
			CachedRotator = Rotator(InNormalizedQuat);
		}
		return CachedRotator;
	}

	/** Version of QuatToRotator when the Quat is known to already be normalized. Does *NOT* update the cache if there was no match. */
	FORCEINLINE FRotator NormalizedQuatToRotator_ReadOnly(const FQuat& InNormalizedQuat) const
	{
		if (QuatEqual(CachedQuat, InNormalizedQuat))
		{
			return CachedRotator;
		}
		return Rotator(InNormalizedQuat);
	}

	/** Return the cached Quat. */
	FORCEINLINE FQuat GetCachedQuat() const
	{
		return CachedQuat;
	}

	/** Return the cached Rotator. */
	FORCEINLINE FRotator GetCachedRotator() const
	{
		return CachedRotator;
	}

private:
	mutable FQuat		CachedQuat;		// FQuat matching CachedRotator such that CachedQuat.Rotator() == CachedRotator.
	mutable FRotator	CachedRotator;	// FRotator matching CachedQuat such that CachedRotator.Quaternion() == CachedQuat.
};