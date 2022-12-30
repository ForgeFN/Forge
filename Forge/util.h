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

inline __int64 GetFunctionIdxOrPtr(UFunction* Function, bool bHookExec = false, IAmADumbass Dumbass = IAmADumbass::NO) // This can return address or index
{
	auto NativeAddr = __int64(Function->Func);

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

		if ((*(uint8_t*)(NativeAddr + i) == 0xFF && *(uint8_t*)(NativeAddr + i + 1) == 0x90) ||
			*(uint8_t*)(NativeAddr + i) == 0xFF && *(uint8_t*)(NativeAddr + i + 1) == 0x93)
		{
			if (bFoundValidate)
			{
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

				std::cout << Function->GetName() + " Bytes: " << bytes << '\n';

				auto decidx = HexToDec(bytes);

				std::cout << "decidx: " << decidx << '\n';

				return decidx;
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

inline void HookFunction(UObject* DefaultClass, UFunction* Function, void* NewFunc, void** OG = nullptr, bool bHookExec = false, __int64 HardcodedOffset = -1, IAmADumbass REAL = IAmADumbass::NO)
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

			CREATE_HOOK(NewFunc, *OG);
		}
	}
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

#define PLATFORM_ENABLE_VECTORINTRINSICS 1

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

static std::vector<UFortWorldItem*> GetDroppableItems(AFortPlayerControllerAthena* PlayerController, UFortItemDefinition* IgnoreDef = nullptr)
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

			if (ItemInstance->CanBeDropped() && ItemInstance->ItemEntry.ItemDefinition != IgnoreDef)
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


static AFortPickupAthena* SpawnPickup(UFortItemDefinition* ItemDef, FVector Location, int Count, EFortPickupSourceTypeFlag PickupSource = EFortPickupSourceTypeFlag::Other, EFortPickupSpawnSource SpawnSource = EFortPickupSpawnSource::Unset, int LoadedAmmo = -1)
{
	if (auto Pickup = GetWorld()->SpawnActor<AFortPickupAthena>(Location, {}))
	{
		Pickup->PrimaryPickupItemEntry.Count = Count;
		Pickup->PrimaryPickupItemEntry.ItemDefinition = ItemDef;
		Pickup->PrimaryPickupItemEntry.LoadedAmmo = LoadedAmmo;

		Pickup->OnRep_PrimaryPickupItemEntry();

		Pickup->TossPickup(Location, nullptr, 0, true, PickupSource, SpawnSource);

		if (PickupSource == EFortPickupSourceTypeFlag::Container)
		{
			Pickup->bTossedFromContainer = true;
			Pickup->OnRep_TossedFromContainer();
		}

		Pickup->SetReplicateMovement(true);
		Pickup->MovementComponent = (UProjectileMovementComponent*)UGameplayStatics::SpawnObject(UProjectileMovementComponent::StaticClass(), Pickup);

		return Pickup;
	}

	return nullptr;
}