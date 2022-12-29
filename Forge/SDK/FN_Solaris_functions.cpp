// Fortnite (11.00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Solaris.SolarisArrayLibrary.Num
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisArrayLibrary::Num(TArray<int> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Num");

	USolarisArrayLibrary_Num_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisArrayLibrary.Add
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int                            new_item                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisArrayLibrary::Add(TArray<int> Array, int new_item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisArrayLibrary.Add");

	USolarisArrayLibrary_Add_Params params;
	params.Array = Array;
	params.new_item = new_item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Bool.logical_xor
// (Final, Native, Static, Public)
// Parameters:
// bool                           LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::logical_xor(bool LHS, bool RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Bool.logical_xor");

	USolarisMathLibrary_Bool_logical_xor_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Bool.logical_not
// (Final, Native, Static, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::logical_not(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Bool.logical_not");

	USolarisMathLibrary_Bool_logical_not_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Bool.assign
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// bool                           LHS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::assign(bool RHS, bool* LHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Bool.assign");

	USolarisMathLibrary_Bool_assign_Params params;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LHS != nullptr)
		*LHS = params.LHS;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::Subtract(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Subtract");

	USolarisMathLibrary_Int_Subtract_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.not_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::not_equal(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.not_equal");

	USolarisMathLibrary_Int_not_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.negate
// (Final, Native, Static, Public)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::negate(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.negate");

	USolarisMathLibrary_Int_negate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::Multiply(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Multiply");

	USolarisMathLibrary_Int_Multiply_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.min
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::min(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.min");

	USolarisMathLibrary_Int_min_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.max
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::max(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.max");

	USolarisMathLibrary_Int_max_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.less_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::less_equal(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.less_equal");

	USolarisMathLibrary_Int_less_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.less
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::less(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.less");

	USolarisMathLibrary_Int_less_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::greater_equal(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.greater_equal");

	USolarisMathLibrary_Int_greater_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.greater
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::greater(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.greater");

	USolarisMathLibrary_Int_greater_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.equal
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::equal(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.equal");

	USolarisMathLibrary_Int_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::Divide(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Divide");

	USolarisMathLibrary_Int_Divide_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.assign
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// int                            LHS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::assign(int RHS, int* LHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.assign");

	USolarisMathLibrary_Int_assign_Params params;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LHS != nullptr)
		*LHS = params.LHS;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int                            LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::Add(int LHS, int RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.Add");

	USolarisMathLibrary_Int_Add_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int USolarisMathLibrary_Int::abs(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Int.abs");

	USolarisMathLibrary_Int_abs_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.Subtract
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Subtract(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.Subtract");

	USolarisMathLibrary_Real_Subtract_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.not_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::not_equal(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.not_equal");

	USolarisMathLibrary_Real_not_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.negate
// (Final, Native, Static, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::negate(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.negate");

	USolarisMathLibrary_Real_negate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.Multiply
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Multiply(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.Multiply");

	USolarisMathLibrary_Real_Multiply_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.min
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::min(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.min");

	USolarisMathLibrary_Real_min_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.max
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::max(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.max");

	USolarisMathLibrary_Real_max_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.less_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::less_equal(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.less_equal");

	USolarisMathLibrary_Real_less_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.less
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::less(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.less");

	USolarisMathLibrary_Real_less_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::greater_equal(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.greater_equal");

	USolarisMathLibrary_Real_greater_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.greater
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::greater(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.greater");

	USolarisMathLibrary_Real_greater_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.equal
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::equal(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.equal");

	USolarisMathLibrary_Real_equal_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.Divide
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Divide(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.Divide");

	USolarisMathLibrary_Real_Divide_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.assign
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// float                          LHS                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::assign(float RHS, float* LHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.assign");

	USolarisMathLibrary_Real_assign_Params params;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LHS != nullptr)
		*LHS = params.LHS;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.Add
// (Final, Native, Static, Public)
// Parameters:
// float                          LHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          RHS                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Add(float LHS, float RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.Add");

	USolarisMathLibrary_Real_Add_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Solaris.SolarisMathLibrary_Real.abs
// (Final, Native, Static, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::abs(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Solaris.SolarisMathLibrary_Real.abs");

	USolarisMathLibrary_Real_abs_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
