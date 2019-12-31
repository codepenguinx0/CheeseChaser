#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SHOWRESULT_T4124213322_H
#define SHOWRESULT_T4124213322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Monetization.ShowResult
struct  ShowResult_t4124213322 
{
public:
	// System.Int32 UnityEngine.Monetization.ShowResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ShowResult_t4124213322, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWRESULT_T4124213322_H



extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_m846550198(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m2188567040(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_m187990427(char* ___subject0, char* ___payload1, char* ___receipt2, char* ___transactionId3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerDidShow_m3488127022(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerDidHide_m3610827271(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerClick_m2956835117(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerDidError_m2807920277(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerDidUnload_m2066912621(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Banner_UnityAdsBannerDidLoad_m1757721840(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsReady_m1487611528(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidError_m2802114104(int64_t ___rawError0, char* ___message1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidStart_m2533573874(char* ___placementId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m3955608050(char* ___placementId0, int64_t ___rawShowResult1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m1171815636(char* ___eventString0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m547090823();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m1819280376();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m481546042();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosAnalytics_TriggerAddExtras_m4215104965(char* ___extras0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdFinishedCallback_m2396905852(int32_t ___result0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosShowAdOperations_OnAdStartedCallback_m2737555369();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentReady_m505498020(char* ___placementId0, intptr_t ___placementContent1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentChanged_m1392829880(char* ___placementId0, intptr_t ___placementContent1, int32_t ___previousState2, int32_t ___newState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlatformCallbacksWrapper_OnError_m4212506122(int64_t ___error0, char* ___message1);
extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[23] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AppleStoreImpl_MessageCallback_m846550198),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FacebookStoreImpl_MessageCallback_m2188567040),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TizenStoreImpl_MessageCallback_m187990427),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerDidShow_m3488127022),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerDidHide_m3610827271),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerClick_m2956835117),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerDidError_m2807920277),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerDidUnload_m2066912621),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Banner_UnityAdsBannerDidLoad_m1757721840),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Platform_UnityAdsReady_m1487611528),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Platform_UnityAdsDidError_m2802114104),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Platform_UnityAdsDidStart_m2533573874),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_Platform_UnityAdsDidFinish_m3955608050),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsDidInitiatePurchasingCommand_m1171815636),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetProductCatalog_m547090823),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingGetPurchasingVersion_m1819280376),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PurchasingPlatform_UnityAdsPurchasingInitialize_m481546042),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosAnalytics_TriggerAddExtras_m4215104965),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosShowAdOperations_OnAdFinishedCallback_m2396905852),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IosShowAdOperations_OnAdStartedCallback_m2737555369),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentReady_m505498020),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnPlacementContentChanged_m1392829880),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PlatformCallbacksWrapper_OnError_m4212506122),
};
