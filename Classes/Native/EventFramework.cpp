#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>
struct Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>
struct ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
// System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>
struct Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE;
// System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>
struct Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct KeyCollection_tB30F3CF82F99AC55A92D8EA4BE1C64CF01DC7D29;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>
struct KeyCollection_tA64D441EF105838C447587E2A47FEF899F380F07;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>
struct KeyCollection_t4051E0F897ECB03976AA2E2FBB815B234172717D;
// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct List_1_tBED585315C32640645F42B743956B7E2D1186EEF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>
struct MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC;
// DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<System.Object,System.Object>
struct MonoSingleton_2_t75C30A6296E9CB223A00DB81FFA0A2F71C17FDAC;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>
struct Segment_tD574AA2485AB2903CD1E4538DB7796282219E7F8;
// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>
struct Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A;
// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>
struct Singleton_2_t3C14282F5CCDD89E0B34DFF0FE8A056CB5963255;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct ValueCollection_tCB4554B876C93C32AC1CA501D9213B11E4D68314;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>
struct ValueCollection_tB2DC983AC1D82AC1BF7FAAA117D1DF9C7E8AB293;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>
struct ValueCollection_t7B9FD29F70DC616FEBA234445D76AC9186899D9B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>[]
struct EntryU5BU5D_t56A41DDEEDBE8BAC740611DE7AE5902F2E071E66;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>[]
struct EntryU5BU5D_t7B72D91224BE1423839D2AA8C58805134195B49B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>[]
struct EntryU5BU5D_t77C744FEC1D920AA714C60E55C9ACEEBD5A1844A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber[]
struct EventSubscriberU5BU5D_t7E27A9CA4FB68E3139C7CFC2C55403F4FD7E614E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask
struct DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E;
// DevsDaddy.Shared.EventFramework.EventMessenger
struct EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8;
// DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber
struct EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger
struct IEventMessenger_tDA301316A9FF8C2038AF9756F6CC7CED2DFFB59D;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher
struct IThreadDispatcher_t9F9029BC1E34E167A56C5F775713775009A0F842;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher
struct MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// DevsDaddy.Shared.EventFramework.Test
struct Test_t31EE4FCAA9BD3817E64252E3A39E2FECF0478CE6;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate
struct WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC;
// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper
struct WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// DevsDaddy.Shared.EventFramework.Test/<>c
struct U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914;
// DevsDaddy.Shared.EventFramework.Test/TestPayload
struct TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IThreadDispatcher_t9F9029BC1E34E167A56C5F775713775009A0F842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBED585315C32640645F42B743956B7E2D1186EEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3B6EF39A27B032889F87165C3598AC617F4C6DCD;
IL2CPP_EXTERN_C String_t* _stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21;
IL2CPP_EXTERN_C String_t* _stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59;
IL2CPP_EXTERN_C String_t* _stringLiteral903FB7839DE717ABA41CBA1AD48AB0F7341E9457;
IL2CPP_EXTERN_C String_t* _stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralE9489C15AA4F196323930F5B6159572433A6D4F6;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m2A3BDAACFE811710D1B9BE32248E84373FB03941_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_m5C822399FDD8B346580209CBBE68FE699B98EAA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_m1ECCCC4FF164059D072813A8E7DBB2050EB6327A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m2056B4F4CFEC119FE433C70FD7C60AA48DB8F471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB69B7E56DA9DB213C5B1A3C3A464CF98ECB3591B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5F7B01FE23435F918CCE0FD9E966BF15539CBADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m02D575B8C16DB96F2E4A4005739C5B5761383D3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m6FA6D7DE64D51399F893520E5D57EB7BFA3D931B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2A3020C11F6C0B814328A83C223A97C972B6C994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D069385733CD5C9B0E63CDAF1CD124CD6926211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m19187022E4F6F7C1F88164343A55AB9BD308C005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD7FEF7D96FDA4AB3CB55B7BEB8713002F48180E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mEB7A4996443794B97A7E8CBF6E74197B3E806930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3F473D626116F5DC0C92C7DC0520267416F35BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF57C192F4B97A34DA86E68E5DDC1A20067CA0724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE593D1CA638B838061ADE5F83EB7FC9CA0024D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1D0428491CFDD1BF1041ED65EF792A3B90FD7C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventSubscriber__ctor_m83C84B6970AB7DDD8C56647FA7810A924C6583A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventMessengerPublish_GetState_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_mAF2DDD35B8CFE4852896F11FB8EC4285EE47F2A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventMessengerPublish_Publish_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m9D8A89DAA5C9D23A57B4E25A5799749676416853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventMessengerSubscribe_Subscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m870D8A298222B9D41A96A227908A4D7B9B8EDE5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IEventMessengerUnsubscribe_Unsubscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m89852F074582093B92ACCF6C565BAE3854540763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m206DD30E9D662B4D7B9EFD7D9EB7751A76FF43E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m589D7EBEDE951FA27DF6BA2015B8384BCD9CAA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mBF089C40A4FD7F0418EE1A1D58629D96C769E987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE9E06F7961F719716A73D7C5E4D82EDC56A0AB79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m0F2EBCFC12745B3EE27C97B9693FC2BB31568EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m96035DED84941BC087DB9EF92EB64586EE7D49E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m30F065E9EE09D3F7B368492A96FB561056EC7630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mACDE3CD6914DC5703FBDBC70A99980BCB95AB312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_2__ctor_m8742CEA2DBFED3E5274D56567F04AB34F16C865B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonoSingleton_2_get_Main_mF8D2AB9C737F2CAD84D7C2E5C76A35CDEA2A220E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_2__ctor_m2D5B676A9675A13849FC1899140376F8E237BD99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Test_OnPayloadTested_m8C6EEA0E47A65EC38C021E906BEB118B2F4CB689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CTestMeU3Eb__1_0_m0F567980208F9381E1E73EE620EE6D677D4274E0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t365D844146C58048235CDD9448441069284E899E 
{
};

// System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>
struct ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_tD574AA2485AB2903CD1E4538DB7796282219E7F8* ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_tD574AA2485AB2903CD1E4538DB7796282219E7F8* ____head_4;
};

// System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t56A41DDEEDBE8BAC740611DE7AE5902F2E071E66* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB30F3CF82F99AC55A92D8EA4BE1C64CF01DC7D29* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCB4554B876C93C32AC1CA501D9213B11E4D68314* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>
struct Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7B72D91224BE1423839D2AA8C58805134195B49B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA64D441EF105838C447587E2A47FEF899F380F07* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB2DC983AC1D82AC1BF7FAAA117D1DF9C7E8AB293* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>
struct Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t77C744FEC1D920AA714C60E55C9ACEEBD5A1844A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4051E0F897ECB03976AA2E2FBB815B234172717D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7B9FD29F70DC616FEBA234445D76AC9186899D9B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct List_1_tBED585315C32640645F42B743956B7E2D1186EEF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EventSubscriberU5BU5D_t7E27A9CA4FB68E3139C7CFC2C55403F4FD7E614E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>
struct Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A  : public RuntimeObject
{
};

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>
struct Singleton_2_t3C14282F5CCDD89E0B34DFF0FE8A056CB5963255  : public RuntimeObject
{
};

// DevsDaddy.Shared.EventFramework.Core.Extensions.CollectionExtensions
struct CollectionExtensions_t325F6096B4CE18B60F522DDC26D7BFDCBA7F9650  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask
struct DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E  : public RuntimeObject
{
	// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::<Action>k__BackingField
	WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* ___U3CActionU3Ek__BackingField_0;
	// System.Object[] DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::<Payload>k__BackingField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___U3CPayloadU3Ek__BackingField_1;
};

// DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber
struct EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E  : public RuntimeObject
{
	// System.WeakReference DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::_callbackTarget
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____callbackTarget_0;
	// System.Reflection.MethodInfo DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::_callbackMethod
	MethodInfo_t* ____callbackMethod_1;
	// System.WeakReference DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::_predicateTarget
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____predicateTarget_2;
	// System.Reflection.MethodInfo DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::_predicateMethod
	MethodInfo_t* ____predicateMethod_3;
	// System.Type DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::<PayloadType>k__BackingField
	Type_t* ___U3CPayloadTypeU3Ek__BackingField_4;
	// System.Int32 DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// DevsDaddy.Shared.EventFramework.Test
struct Test_t31EE4FCAA9BD3817E64252E3A39E2FECF0478CE6  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper
struct WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3  : public RuntimeObject
{
	// System.WeakReference DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::_ref
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ____ref_0;
	// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::IsDisposed
	bool ___IsDisposed_1;
};

// DevsDaddy.Shared.EventFramework.Test/<>c
struct U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914  : public RuntimeObject
{
};

// DevsDaddy.Shared.EventFramework.Test/TestPayload
struct TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBED585315C32640645F42B743956B7E2D1186EEF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// DevsDaddy.Shared.EventFramework.EventMessenger
struct EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8  : public Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>> DevsDaddy.Shared.EventFramework.EventMessenger::_subscribersSet
	Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* ____subscribersSet_1;
	// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber> DevsDaddy.Shared.EventFramework.EventMessenger::_subscribers
	List_1_tBED585315C32640645F42B743956B7E2D1186EEF* ____subscribers_2;
	// System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload> DevsDaddy.Shared.EventFramework.EventMessenger::_payloadStates
	Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C* ____payloadStates_3;
	// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber> DevsDaddy.Shared.EventFramework.EventMessenger::_add
	List_1_tBED585315C32640645F42B743956B7E2D1186EEF* ____add_4;
	// System.Boolean DevsDaddy.Shared.EventFramework.EventMessenger::_isPublishing
	bool ____isPublishing_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate
struct WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC  : public WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3
{
	// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_2;
	// System.Reflection.MethodInfo DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>
struct Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067  : public MulticastDelegate_t
{
};

// System.Predicate`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>
struct Predicate_1_t45709AC117C2CA0AEF8BEB9FC904A6CA679CECD9  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>
struct MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher
struct MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E  : public MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC
{
	// System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask> DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::_tasks
	ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* ____tasks_5;
	// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::<ThreadId>k__BackingField
	int32_t ___U3CThreadIdU3Ek__BackingField_6;
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>

// System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>

// System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>

// System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>

// System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>

// System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>

// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>
struct List_1_tBED585315C32640645F42B743956B7E2D1186EEF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EventSubscriberU5BU5D_t7E27A9CA4FB68E3139C7CFC2C55403F4FD7E614E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>
struct Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_StaticFields
{
	// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2::<Main>k__BackingField
	RuntimeObject* ___U3CMainU3Ek__BackingField_0;
};

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>
struct Singleton_2_t3C14282F5CCDD89E0B34DFF0FE8A056CB5963255_StaticFields
{
	// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2::<Main>k__BackingField
	RuntimeObject* ___U3CMainU3Ek__BackingField_0;
};

// DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>

// DevsDaddy.Shared.EventFramework.Core.Extensions.CollectionExtensions

// DevsDaddy.Shared.EventFramework.Core.Extensions.CollectionExtensions

// DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask

// DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask

// DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber

// DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DevsDaddy.Shared.EventFramework.Test

// DevsDaddy.Shared.EventFramework.Test

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper

// DevsDaddy.Shared.EventFramework.Test/<>c
struct U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields
{
	// DevsDaddy.Shared.EventFramework.Test/<>c DevsDaddy.Shared.EventFramework.Test/<>c::<>9
	U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* ___U3CU3E9_0;
	// System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload> DevsDaddy.Shared.EventFramework.Test/<>c::<>9__1_0
	Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* ___U3CU3E9__1_0_1;
};

// DevsDaddy.Shared.EventFramework.Test/<>c

// DevsDaddy.Shared.EventFramework.Test/TestPayload

// DevsDaddy.Shared.EventFramework.Test/TestPayload

// System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>

// System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// DevsDaddy.Shared.EventFramework.EventMessenger

// DevsDaddy.Shared.EventFramework.EventMessenger

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.Void

// System.Void

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate

// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate

// System.Delegate

// System.Delegate

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.WeakReference

// System.WeakReference

// System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>

// System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>

// System.Predicate`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>

// System.Predicate`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>

// System.ArgumentNullException

// System.ArgumentNullException

// DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>
struct MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC_StaticFields
{
	// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2::_main
	RuntimeObject* ____main_4;
};

// DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>

// DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher

// DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<System.Object,System.Object>::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonoSingleton_2_get_Main_m8D4E49CAA601D612BFFA20B87D96ADA2250EB340_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_2__ctor_m9F2888B5ABDB3E9A7D99B20EC628B77B526CA67C_gshared (Singleton_2_t3C14282F5CCDD89E0B34DFF0FE8A056CB5963255* __this, const RuntimeMethod* method) ;
// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<System.Object,System.Object>::get_Main()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Main_mF60F1D62993804D481207E30C61E79F57809EE60_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoSingleton_2__ctor_m8491B0ABBE467D140DF2E88E4D63419DDF73879E_gshared (MonoSingleton_2_t75C30A6296E9CB223A00DB81FFA0A2F71C17FDAC* __this, const RuntimeMethod* method) ;

// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>::get_Main()
inline RuntimeObject* MonoSingleton_2_get_Main_mF8D2AB9C737F2CAD84D7C2E5C76A35CDEA2A220E (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))MonoSingleton_2_get_Main_m8D4E49CAA601D612BFFA20B87D96ADA2250EB340_gshared)(method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSubscriber_get_IsAlive_m773291AEEA8542250FD19015242EAFDF49C45587 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Type DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_PayloadType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56 (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m2A3020C11F6C0B814328A83C223A97C972B6C994 (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, Type_t* ___0_key, Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, Type_t*, Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::.ctor()
inline void Dictionary_2__ctor_m0D069385733CD5C9B0E63CDAF1CD124CD6926211 (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m2056B4F4CFEC119FE433C70FD7C60AA48DB8F471 (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, Type_t* ___0_key, Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, Type_t*, Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m5F7B01FE23435F918CCE0FD9E966BF15539CBADD (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB69B7E56DA9DB213C5B1A3C3A464CF98ECB3591B (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* __this, int32_t ___0_key, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, int32_t, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Contains(T)
inline bool List_1_Contains_mBF089C40A4FD7F0418EE1A1D58629D96C769E987 (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Add(T)
inline void List_1_Add_m206DD30E9D662B4D7B9EFD7D9EB7751A76FF43E4_inline (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::get_Item(System.Int32)
inline EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* List_1_get_Item_mACDE3CD6914DC5703FBDBC70A99980BCB95AB312 (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m0F2EBCFC12745B3EE27C97B9693FC2BB31568EAD (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Boolean System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Remove(T)
inline bool List_1_Remove_m96035DED84941BC087DB9EF92EB64586EE7D49E9 (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::get_Item(TKey)
inline Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* Dictionary_2_get_Item_m3F473D626116F5DC0C92C7DC0520267416F35BD6 (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, Type_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Remove(TKey)
inline bool Dictionary_2_Remove_m02D575B8C16DB96F2E4A4005739C5B5761383D3B (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::get_Count()
inline int32_t Dictionary_2_get_Count_mEB7A4996443794B97A7E8CBF6E74197B3E806930 (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*, const RuntimeMethod*))Dictionary_2_get_Count_mB1687BC0FFB3D5E49E5129641D4FB9EA23743F91_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::Remove(TKey)
inline bool Dictionary_2_Remove_m6FA6D7DE64D51399F893520E5D57EB7BFA3D931B (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Int32 System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::get_Count()
inline int32_t List_1_get_Count_m30F065E9EE09D3F7B368492A96FB561056EC7630_inline (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::GetEnumerator()
inline Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE List_1_GetEnumerator_mE9E06F7961F719716A73D7C5E4D82EDC56A0AB79 (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Dispose()
inline void Enumerator_Dispose_mF57C192F4B97A34DA86E68E5DDC1A20067CA0724 (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::get_Current()
inline EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* Enumerator_get_Current_m1D0428491CFDD1BF1041ED65EF792A3B90FD7C9A_inline (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE* __this, const RuntimeMethod* method)
{
	return ((  EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* (*) (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void DevsDaddy.Shared.EventFramework.EventMessenger::SubscribeInternal(DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessenger_SubscribeInternal_m66AE194677AD9037B2A185E6CB274F270862BCD6 (EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8* __this, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___0_subscriber, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::MoveNext()
inline bool Enumerator_MoveNext_mE593D1CA638B838061ADE5F83EB7FC9CA0024D9D (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::Clear()
inline void List_1_Clear_m589D7EBEDE951FA27DF6BA2015B8384BCD9CAA0A_inline (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.Int32,DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>>::.ctor()
inline void Dictionary_2__ctor_mD7FEF7D96FDA4AB3CB55B7BEB8713002F48180E3 (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber>::.ctor()
inline void List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870 (List_1_tBED585315C32640645F42B743956B7E2D1186EEF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,DevsDaddy.Shared.EventFramework.Core.Payloads.IPayload>::.ctor()
inline void Dictionary_2__ctor_m19187022E4F6F7C1F88164343A55AB9BD308C005 (Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>::.ctor()
inline void Singleton_2__ctor_m2D5B676A9675A13849FC1899140376F8E237BD99 (Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A*, const RuntimeMethod*))Singleton_2__ctor_m9F2888B5ABDB3E9A7D99B20EC628B77B526CA67C_gshared)(__this, method);
}
// TInterface DevsDaddy.Shared.EventFramework.Core.Objects.Singleton`2<DevsDaddy.Shared.EventFramework.Core.Messenger.IEventMessenger,DevsDaddy.Shared.EventFramework.EventMessenger>::get_Main()
inline RuntimeObject* Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Singleton_2_get_Main_mF60F1D62993804D481207E30C61E79F57809EE60_gshared_inline)(method);
}
// System.Void System.Action`1<DevsDaddy.Shared.EventFramework.Test/TestPayload>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9D766C1FFC21CE44D403B0210E332E678DA893F0 (Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void DevsDaddy.Shared.EventFramework.Test/TestPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestPayload__ctor_m149BF715535F8F7FB793EA817D009CE028D99210 (TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Test/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE5F1E7B7E2ACD87B86EBCD26D1C4557833A7960 (U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::.ctor(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate__ctor_mC044BF8A97D502A98C860DF1EB6F4821DCF62BD2 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, Delegate_t* ___0_method, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::set_Action(DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_m42D6648F323316BD340516707FAB0C2708E5FCC1_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* ___0_value, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::set_Payload(System.Object[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m063DAABEBCEAC4BF36230211D72CA2BA2BE0D590_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) ;
// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::get_Action()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) ;
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) ;
// System.Object[] DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::get_Payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mD4DD70DBBF0810A9673A1879A62B5B81D00711D4_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) ;
// System.Object DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefDelegate_Invoke_m8639BD6F5037BAFC105C2B926ABA14B8515EDABF (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m33B84FDABA3FEBEE8E9AAAE022C6EC25BB642812 (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5 (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532*, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared)(__this, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::set_ThreadId(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m1D2068F32CE8E4F4184C90E9F0D21F57D2160952_inline (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::.ctor(System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask__ctor_m05D7F84B09D3C857C0F551E03A8327EB73E534EB (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_m2A3BDAACFE811710D1B9BE32248E84373FB03941 (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* __this, DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532*, DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_m5C822399FDD8B346580209CBBE68FE699B98EAA7 (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* __this, DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532*, DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___0_result, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Invoke_m6362C078ADE7D560F19E283D06517D52923528EE (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Dispose_m6EE6BC65BDDADD0E56AB03BC4C153A26A1B8852F (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask>::.ctor()
inline void ConcurrentQueue_1__ctor_m1ECCCC4FF164059D072813A8E7DBB2050EB6327A (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Objects.MonoSingleton`2<DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher,DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher>::.ctor()
inline void MonoSingleton_2__ctor_m8742CEA2DBFED3E5274D56567F04AB34F16C865B (MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC* __this, const RuntimeMethod* method)
{
	((  void (*) (MonoSingleton_2_tE900EAC0E2BE3F6453925135C54376D9489CA2CC*, const RuntimeMethod*))MonoSingleton_2__ctor_m8491B0ABBE467D140DF2E88E4D63419DDF73879E_gshared)(__this, method);
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) ;
// System.Object System.Delegate::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper__ctor_m07CBE71FD10FB907F0AA6DFD1E0B1B7A30A66DA0 (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::set_Method(System.Reflection.MethodInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_m3BEF2CC25657D75DE51E454E6E8170FD62433A3C_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) ;
// System.Object DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefWrapper_get_Target_m80AA5DB4D63D8D45E5B16493750EDC4D59247AAC (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m9EBEA71FFC12EDDCACDC627A4F739BE62875EEDA (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Equals(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Equals_m1EF33FBA85CF9EFA57ECEC52F547D8BAEC012DE6 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, Delegate_t* ___0_other, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m8085B7DB432EB4B11F2FFDB543B3F1D05D4A8D99 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevsDaddy.Shared.EventFramework.EventMessenger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessenger__cctor_m479B4B6FAFF426A2FDBC0D330B3E7091A035EC9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IThreadDispatcher_t9F9029BC1E34E167A56C5F775713775009A0F842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_2_get_Main_mF8D2AB9C737F2CAD84D7C2E5C76A35CDEA2A220E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Main Thread ID: {MainThreadDispatcher.Main.ThreadId}");
		RuntimeObject* L_0;
		L_0 = MonoSingleton_2_get_Main_mF8D2AB9C737F2CAD84D7C2E5C76A35CDEA2A220E(MonoSingleton_2_get_Main_mF8D2AB9C737F2CAD84D7C2E5C76A35CDEA2A220E_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.IThreadDispatcher::get_ThreadId() */, IThreadDispatcher_t9F9029BC1E34E167A56C5F775713775009A0F842_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral42978315D472AD03D77D9F28425D2452EDCB4B21, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.EventMessenger::SubscribeInternal(DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessenger_SubscribeInternal_m66AE194677AD9037B2A185E6CB274F270862BCD6 (EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8* __this, EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* ___0_subscriber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m2056B4F4CFEC119FE433C70FD7C60AA48DB8F471_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB69B7E56DA9DB213C5B1A3C3A464CF98ECB3591B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5F7B01FE23435F918CCE0FD9E966BF15539CBADD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2A3020C11F6C0B814328A83C223A97C972B6C994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0D069385733CD5C9B0E63CDAF1CD124CD6926211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m206DD30E9D662B4D7B9EFD7D9EB7751A76FF43E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mBF089C40A4FD7F0418EE1A1D58629D96C769E987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B6EF39A27B032889F87165C3598AC617F4C6DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral903FB7839DE717ABA41CBA1AD48AB0F7341E9457);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* V_1 = NULL;
	{
		// if(!(subscriber is {IsAlive: true}))
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_0 = ___0_subscriber;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_1 = ___0_subscriber;
		NullCheck(L_1);
		bool L_2;
		L_2 = EventSubscriber_get_IsAlive_m773291AEEA8542250FD19015242EAFDF49C45587(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_000b:
	{
		// Debug.LogError($"The {nameof(subscriber)} is null or not alive.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3B6EF39A27B032889F87165C3598AC617F4C6DCD, NULL);
		// return;
		return;
	}

IL_0016:
	{
		// var key = subscriber.PayloadType;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_3 = ___0_subscriber;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline(L_3, NULL);
		V_0 = L_4;
		// if (_subscribersSet.ContainsKey(key))
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_5 = __this->____subscribersSet_1;
		Type_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56(L_5, L_6, Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		// _subscribersSet.TryGetValue(key, out callbacks);
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_8 = __this->____subscribersSet_1;
		Type_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_m2A3020C11F6C0B814328A83C223A97C972B6C994(L_8, L_9, (&V_1), Dictionary_2_TryGetValue_m2A3020C11F6C0B814328A83C223A97C972B6C994_RuntimeMethod_var);
		goto IL_004f;
	}

IL_003c:
	{
		// callbacks = new Dictionary<int, EventSubscriber>();
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_11 = (Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270*)il2cpp_codegen_object_new(Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m0D069385733CD5C9B0E63CDAF1CD124CD6926211(L_11, Dictionary_2__ctor_m0D069385733CD5C9B0E63CDAF1CD124CD6926211_RuntimeMethod_var);
		V_1 = L_11;
		// _subscribersSet.Add(key, callbacks);
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_12 = __this->____subscribersSet_1;
		Type_t* L_13 = V_0;
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_14 = V_1;
		NullCheck(L_12);
		Dictionary_2_Add_m2056B4F4CFEC119FE433C70FD7C60AA48DB8F471(L_12, L_13, L_14, Dictionary_2_Add_m2056B4F4CFEC119FE433C70FD7C60AA48DB8F471_RuntimeMethod_var);
	}

IL_004f:
	{
		// if (callbacks == null)
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_15 = V_1;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		// Debug.LogError("Callbacks container is null!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral903FB7839DE717ABA41CBA1AD48AB0F7341E9457, NULL);
		// return;
		return;
	}

IL_005d:
	{
		// if(callbacks.ContainsKey(subscriber.Id))
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_16 = V_1;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_17 = ___0_subscriber;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline(L_17, NULL);
		NullCheck(L_16);
		bool L_19;
		L_19 = Dictionary_2_ContainsKey_m5F7B01FE23435F918CCE0FD9E966BF15539CBADD(L_16, L_18, Dictionary_2_ContainsKey_m5F7B01FE23435F918CCE0FD9E966BF15539CBADD_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		// return;
		return;
	}

IL_006c:
	{
		// callbacks.Add(subscriber.Id, subscriber);
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_20 = V_1;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_21 = ___0_subscriber;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline(L_21, NULL);
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_23 = ___0_subscriber;
		NullCheck(L_20);
		Dictionary_2_Add_mB69B7E56DA9DB213C5B1A3C3A464CF98ECB3591B(L_20, L_22, L_23, Dictionary_2_Add_mB69B7E56DA9DB213C5B1A3C3A464CF98ECB3591B_RuntimeMethod_var);
		// if (!_subscribers.Contains(subscriber))
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_24 = __this->____subscribers_2;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_25 = ___0_subscriber;
		NullCheck(L_24);
		bool L_26;
		L_26 = List_1_Contains_mBF089C40A4FD7F0418EE1A1D58629D96C769E987(L_24, L_25, List_1_Contains_mBF089C40A4FD7F0418EE1A1D58629D96C769E987_RuntimeMethod_var);
		if (L_26)
		{
			goto IL_0093;
		}
	}
	{
		// _subscribers.Add(subscriber);
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_27 = __this->____subscribers_2;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_28 = ___0_subscriber;
		NullCheck(L_27);
		List_1_Add_m206DD30E9D662B4D7B9EFD7D9EB7751A76FF43E4_inline(L_27, L_28, List_1_Add_m206DD30E9D662B4D7B9EFD7D9EB7751A76FF43E4_RuntimeMethod_var);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.EventMessenger::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessenger_Process_m8B913AF169B06C3F75E5C722312AD4F833BA6E6D (EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m02D575B8C16DB96F2E4A4005739C5B5761383D3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m6FA6D7DE64D51399F893520E5D57EB7BFA3D931B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mEB7A4996443794B97A7E8CBF6E74197B3E806930_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3F473D626116F5DC0C92C7DC0520267416F35BD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF57C192F4B97A34DA86E68E5DDC1A20067CA0724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE593D1CA638B838061ADE5F83EB7FC9CA0024D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1D0428491CFDD1BF1041ED65EF792A3B90FD7C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m589D7EBEDE951FA27DF6BA2015B8384BCD9CAA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE9E06F7961F719716A73D7C5E4D82EDC56A0AB79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m0F2EBCFC12745B3EE27C97B9693FC2BB31568EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m96035DED84941BC087DB9EF92EB64586EE7D49E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m30F065E9EE09D3F7B368492A96FB561056EC7630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mACDE3CD6914DC5703FBDBC70A99980BCB95AB312_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* V_1 = NULL;
	Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* V_3 = NULL;
	{
		// for(var i = 0; i < _subscribers.Count; i++)
		V_0 = 0;
		goto IL_0091;
	}

IL_0007:
	{
		// var subscriber = _subscribers[i];
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_0 = __this->____subscribers_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_2;
		L_2 = List_1_get_Item_mACDE3CD6914DC5703FBDBC70A99980BCB95AB312(L_0, L_1, List_1_get_Item_mACDE3CD6914DC5703FBDBC70A99980BCB95AB312_RuntimeMethod_var);
		V_1 = L_2;
		// if(subscriber == null)
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_3 = V_1;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		// _subscribers.RemoveAt(i);
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_4 = __this->____subscribers_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		List_1_RemoveAt_m0F2EBCFC12745B3EE27C97B9693FC2BB31568EAD(L_4, L_5, List_1_RemoveAt_m0F2EBCFC12745B3EE27C97B9693FC2BB31568EAD_RuntimeMethod_var);
		// i--;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		// continue;
		goto IL_008d;
	}

IL_0029:
	{
		// if(subscriber.IsAlive)
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = EventSubscriber_get_IsAlive_m773291AEEA8542250FD19015242EAFDF49C45587(L_7, NULL);
		if (L_8)
		{
			goto IL_008d;
		}
	}
	{
		// _subscribers.Remove(subscriber);
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_9 = __this->____subscribers_2;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_m96035DED84941BC087DB9EF92EB64586EE7D49E9(L_9, L_10, List_1_Remove_m96035DED84941BC087DB9EF92EB64586EE7D49E9_RuntimeMethod_var);
		// i--;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		// if(!_subscribersSet.ContainsKey(subscriber.PayloadType))
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_13 = __this->____subscribersSet_1;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_14 = V_1;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline(L_14, NULL);
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56(L_13, L_15, Dictionary_2_ContainsKey_m5E4B0E9AC806AA8E70938EAF73F1E845C34CCA56_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_008d;
		}
	}
	{
		// var callbacks = _subscribersSet[subscriber.PayloadType];
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_17 = __this->____subscribersSet_1;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_18 = V_1;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline(L_18, NULL);
		NullCheck(L_17);
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_20;
		L_20 = Dictionary_2_get_Item_m3F473D626116F5DC0C92C7DC0520267416F35BD6(L_17, L_19, Dictionary_2_get_Item_m3F473D626116F5DC0C92C7DC0520267416F35BD6_RuntimeMethod_var);
		// callbacks.Remove(subscriber.Id);
		Dictionary_2_t84F33894F92BFA5B5876A2177958FDAFE3A36270* L_21 = L_20;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline(L_22, NULL);
		NullCheck(L_21);
		bool L_24;
		L_24 = Dictionary_2_Remove_m02D575B8C16DB96F2E4A4005739C5B5761383D3B(L_21, L_23, Dictionary_2_Remove_m02D575B8C16DB96F2E4A4005739C5B5761383D3B_RuntimeMethod_var);
		// if(callbacks.Count > 0)
		NullCheck(L_21);
		int32_t L_25;
		L_25 = Dictionary_2_get_Count_mEB7A4996443794B97A7E8CBF6E74197B3E806930(L_21, Dictionary_2_get_Count_mEB7A4996443794B97A7E8CBF6E74197B3E806930_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		// _subscribersSet.Remove(subscriber.PayloadType);
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_26 = __this->____subscribersSet_1;
		EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_27 = V_1;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline(L_27, NULL);
		NullCheck(L_26);
		bool L_29;
		L_29 = Dictionary_2_Remove_m6FA6D7DE64D51399F893520E5D57EB7BFA3D931B(L_26, L_28, Dictionary_2_Remove_m6FA6D7DE64D51399F893520E5D57EB7BFA3D931B_RuntimeMethod_var);
	}

IL_008d:
	{
		// for(var i = 0; i < _subscribers.Count; i++)
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0091:
	{
		// for(var i = 0; i < _subscribers.Count; i++)
		int32_t L_31 = V_0;
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_32 = __this->____subscribers_2;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m30F065E9EE09D3F7B368492A96FB561056EC7630_inline(L_32, List_1_get_Count_m30F065E9EE09D3F7B368492A96FB561056EC7630_RuntimeMethod_var);
		if ((((int32_t)L_31) < ((int32_t)L_33)))
		{
			goto IL_0007;
		}
	}
	{
		// foreach (var subscriber in _add)
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_34 = __this->____add_4;
		NullCheck(L_34);
		Enumerator_tB796EC780D216622D186701FCF9EDAB3EBB453BE L_35;
		L_35 = List_1_GetEnumerator_mE9E06F7961F719716A73D7C5E4D82EDC56A0AB79(L_34, List_1_GetEnumerator_mE9E06F7961F719716A73D7C5E4D82EDC56A0AB79_RuntimeMethod_var);
		V_2 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF57C192F4B97A34DA86E68E5DDC1A20067CA0724((&V_2), Enumerator_Dispose_mF57C192F4B97A34DA86E68E5DDC1A20067CA0724_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00bf_1;
			}

IL_00b0_1:
			{
				// foreach (var subscriber in _add)
				EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_36;
				L_36 = Enumerator_get_Current_m1D0428491CFDD1BF1041ED65EF792A3B90FD7C9A_inline((&V_2), Enumerator_get_Current_m1D0428491CFDD1BF1041ED65EF792A3B90FD7C9A_RuntimeMethod_var);
				V_3 = L_36;
				// SubscribeInternal(subscriber);
				EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* L_37 = V_3;
				EventMessenger_SubscribeInternal_m66AE194677AD9037B2A185E6CB274F270862BCD6(__this, L_37, NULL);
			}

IL_00bf_1:
			{
				// foreach (var subscriber in _add)
				bool L_38;
				L_38 = Enumerator_MoveNext_mE593D1CA638B838061ADE5F83EB7FC9CA0024D9D((&V_2), Enumerator_MoveNext_mE593D1CA638B838061ADE5F83EB7FC9CA0024D9D_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_00b0_1;
				}
			}
			{
				goto IL_00d8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d8:
	{
		// _add.Clear();
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_39 = __this->____add_4;
		NullCheck(L_39);
		List_1_Clear_m589D7EBEDE951FA27DF6BA2015B8384BCD9CAA0A_inline(L_39, List_1_Clear_m589D7EBEDE951FA27DF6BA2015B8384BCD9CAA0A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.EventMessenger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventMessenger__ctor_m2BF7A27BEFA9581C61F4768B24933796B6307584 (EventMessenger_t9738DE507F85C9012E4E7FE7DB30CAFA71A114C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m19187022E4F6F7C1F88164343A55AB9BD308C005_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD7FEF7D96FDA4AB3CB55B7BEB8713002F48180E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBED585315C32640645F42B743956B7E2D1186EEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2__ctor_m2D5B676A9675A13849FC1899140376F8E237BD99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<Type, Dictionary<int, EventSubscriber>> _subscribersSet =
		//     new Dictionary<Type, Dictionary<int, EventSubscriber>>();
		Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE* L_0 = (Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE*)il2cpp_codegen_object_new(Dictionary_2_t02EB61D930D0348F07A726A02254E71D959D4DEE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD7FEF7D96FDA4AB3CB55B7BEB8713002F48180E3(L_0, Dictionary_2__ctor_mD7FEF7D96FDA4AB3CB55B7BEB8713002F48180E3_RuntimeMethod_var);
		__this->____subscribersSet_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subscribersSet_1), (void*)L_0);
		// private readonly List<EventSubscriber> _subscribers = new List<EventSubscriber>();
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_1 = (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*)il2cpp_codegen_object_new(List_1_tBED585315C32640645F42B743956B7E2D1186EEF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870(L_1, List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870_RuntimeMethod_var);
		__this->____subscribers_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subscribers_2), (void*)L_1);
		// private readonly Dictionary<Type, IPayload> _payloadStates = new Dictionary<Type, IPayload>();
		Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C* L_2 = (Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C*)il2cpp_codegen_object_new(Dictionary_2_tBC8948A705D7F5B289428027C339E785CB14297C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m19187022E4F6F7C1F88164343A55AB9BD308C005(L_2, Dictionary_2__ctor_m19187022E4F6F7C1F88164343A55AB9BD308C005_RuntimeMethod_var);
		__this->____payloadStates_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____payloadStates_3), (void*)L_2);
		// private readonly List<EventSubscriber> _add = new List<EventSubscriber>();
		List_1_tBED585315C32640645F42B743956B7E2D1186EEF* L_3 = (List_1_tBED585315C32640645F42B743956B7E2D1186EEF*)il2cpp_codegen_object_new(List_1_tBED585315C32640645F42B743956B7E2D1186EEF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870(L_3, List_1__ctor_m5E56F0E208B2F300ACAAECE1D70B0FE36D7A6870_RuntimeMethod_var);
		__this->____add_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____add_4), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var);
		Singleton_2__ctor_m2D5B676A9675A13849FC1899140376F8E237BD99(__this, Singleton_2__ctor_m2D5B676A9675A13849FC1899140376F8E237BD99_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevsDaddy.Shared.EventFramework.Test::TestMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_TestMe_mD995CC0C57033FC3075B12130086315D94FE1766 (Test_t31EE4FCAA9BD3817E64252E3A39E2FECF0478CE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMessengerPublish_GetState_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_mAF2DDD35B8CFE4852896F11FB8EC4285EE47F2A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMessengerPublish_Publish_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m9D8A89DAA5C9D23A57B4E25A5799749676416853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMessengerSubscribe_Subscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m870D8A298222B9D41A96A227908A4D7B9B8EDE5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEventMessengerUnsubscribe_Unsubscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m89852F074582093B92ACCF6C565BAE3854540763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_OnPayloadTested_m8C6EEA0E47A65EC38C021E906BEB118B2F4CB689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CTestMeU3Eb__1_0_m0F567980208F9381E1E73EE620EE6D677D4274E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		// EventMessenger.Main.Subscribe<TestPayload>(payload => {
		// 
		// });
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_inline(Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var);
		Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* L_1 = ((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var);
		U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* L_3 = ((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* L_4 = (Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067*)il2cpp_codegen_object_new(Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9D766C1FFC21CE44D403B0210E332E678DA893F0(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CTestMeU3Eb__1_0_m0F567980208F9381E1E73EE620EE6D677D4274E0_RuntimeMethod_var), NULL);
		Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* L_5 = L_4;
		((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		RuntimeObject* L_6;
		L_6 = GenericInterfaceFuncInvoker2< RuntimeObject*, Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067*, Predicate_1_t45709AC117C2CA0AEF8BEB9FC904A6CA679CECD9* >::Invoke(IEventMessengerSubscribe_Subscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m870D8A298222B9D41A96A227908A4D7B9B8EDE5F_RuntimeMethod_var, G_B2_1, G_B2_0, (Predicate_1_t45709AC117C2CA0AEF8BEB9FC904A6CA679CECD9*)NULL);
		// EventMessenger.Main.Publish(new TestPayload());
		il2cpp_codegen_runtime_class_init_inline(Singleton_2_tF1476556BBFE8D709E8C92F9CAF4FAEDD439010A_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_inline(Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var);
		TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* L_8 = (TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3*)il2cpp_codegen_object_new(TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TestPayload__ctor_m149BF715535F8F7FB793EA817D009CE028D99210(L_8, NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = GenericInterfaceFuncInvoker1< RuntimeObject*, TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* >::Invoke(IEventMessengerPublish_Publish_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m9D8A89DAA5C9D23A57B4E25A5799749676416853_RuntimeMethod_var, L_7, L_8);
		// EventMessenger.Main.Unsubscribe<TestPayload>(OnPayloadTested);
		RuntimeObject* L_10;
		L_10 = Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_inline(Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var);
		Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* L_11 = (Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067*)il2cpp_codegen_object_new(Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m9D766C1FFC21CE44D403B0210E332E678DA893F0(L_11, __this, (intptr_t)((void*)Test_OnPayloadTested_m8C6EEA0E47A65EC38C021E906BEB118B2F4CB689_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = GenericInterfaceFuncInvoker1< RuntimeObject*, Action_1_tC9C89AC41A109A430F2E99EB21E358285FBCE067* >::Invoke(IEventMessengerUnsubscribe_Unsubscribe_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_m89852F074582093B92ACCF6C565BAE3854540763_RuntimeMethod_var, L_10, L_11);
		// TestPayload currentPayload = EventMessenger.Main.GetState<TestPayload>();
		RuntimeObject* L_13;
		L_13 = Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_inline(Singleton_2_get_Main_m9C020BE9B5414F530E29CE3D6DC68AB166E9616C_RuntimeMethod_var);
		NullCheck(L_13);
		TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* L_14;
		L_14 = GenericInterfaceFuncInvoker0< TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* >::Invoke(IEventMessengerPublish_GetState_TisTestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3_mAF2DDD35B8CFE4852896F11FB8EC4285EE47F2A2_RuntimeMethod_var, L_13);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Test::OnPayloadTested(DevsDaddy.Shared.EventFramework.Test/TestPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnPayloadTested_m8C6EEA0E47A65EC38C021E906BEB118B2F4CB689 (Test_t31EE4FCAA9BD3817E64252E3A39E2FECF0478CE6* __this, TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* ___0_payload, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_mC66CA82F95D60E32161FA2967476D53AF181D3D2 (Test_t31EE4FCAA9BD3817E64252E3A39E2FECF0478CE6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevsDaddy.Shared.EventFramework.Test/TestPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestPayload__ctor_m149BF715535F8F7FB793EA817D009CE028D99210 (TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DevsDaddy.Shared.EventFramework.Test/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF91BDE84FC038860E7497BCF7F49C1F2099ACB16 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* L_0 = (U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914*)il2cpp_codegen_object_new(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEE5F1E7B7E2ACD87B86EBCD26D1C4557833A7960(L_0, NULL);
		((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Test/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEE5F1E7B7E2ACD87B86EBCD26D1C4557833A7960 (U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Test/<>c::<TestMe>b__1_0(DevsDaddy.Shared.EventFramework.Test/TestPayload)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CTestMeU3Eb__1_0_m0F567980208F9381E1E73EE620EE6D677D4274E0 (U3CU3Ec_t16E14D6739C97486D2FEC37C39579D50CCFD2914* __this, TestPayload_tCCF0A4459DB0FB3F2599703FFD271021AFEAD3D3* ___0_payload, const RuntimeMethod* method) 
{
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::get_Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73 (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0 = __this->___U3CActionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::set_Action(DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_m42D6648F323316BD340516707FAB0C2708E5FCC1 (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* ___0_value, const RuntimeMethod* method) 
{
	{
		// get; private set;
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0 = ___0_value;
		__this->___U3CActionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Object[] DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mD4DD70DBBF0810A9673A1879A62B5B81D00711D4 (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CPayloadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::set_Payload(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m063DAABEBCEAC4BF36230211D72CA2BA2BE0D590 (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) 
{
	{
		// set;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		__this->___U3CPayloadU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::.ctor(System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask__ctor_m05D7F84B09D3C857C0F551E03A8327EB73E534EB (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DispatcherTask(Delegate action, object[] payload)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Action = new WeakRefDelegate(action);
		Delegate_t* L_0 = ___0_action;
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_1 = (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC*)il2cpp_codegen_object_new(WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WeakRefDelegate__ctor_mC044BF8A97D502A98C860DF1EB6F4821DCF62BD2(L_1, L_0, NULL);
		DispatcherTask_set_Action_m42D6648F323316BD340516707FAB0C2708E5FCC1_inline(__this, L_1, NULL);
		// Payload = payload;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_payload;
		DispatcherTask_set_Payload_m063DAABEBCEAC4BF36230211D72CA2BA2BE0D590_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Invoke_m6362C078ADE7D560F19E283D06517D52923528EE (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// if(Action == null || !Action.IsAlive)
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0;
		L_0 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_1;
		L_1 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// Action.Invoke(Payload);
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_3;
		L_3 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = DispatcherTask_get_Payload_mD4DD70DBBF0810A9673A1879A62B5B81D00711D4_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = WeakRefDelegate_Invoke_m8639BD6F5037BAFC105C2B926ABA14B8515EDABF(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.DispatcherTask::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DispatcherTask_Dispose_m6EE6BC65BDDADD0E56AB03BC4C153A26A1B8852F (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// if(Action != null)
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0;
		L_0 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Action.Dispose();
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_1;
		L_1 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(__this, NULL);
		NullCheck(L_1);
		WeakRefWrapper_Dispose_m33B84FDABA3FEBEE8E9AAAE022C6EC25BB642812(L_1, NULL);
		// Action = null;
		DispatcherTask_set_Action_m42D6648F323316BD340516707FAB0C2708E5FCC1_inline(__this, (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC*)NULL, NULL);
	}

IL_001a:
	{
		// Payload = null;
		DispatcherTask_set_Payload_m063DAABEBCEAC4BF36230211D72CA2BA2BE0D590_inline(__this, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::get_ThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainThreadDispatcher_get_ThreadId_mA67B30638C97743CFA5754B134E5F137F0A0F869 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CThreadIdU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::set_ThreadId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m1D2068F32CE8E4F4184C90E9F0D21F57D2160952 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CThreadIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::get_TasksCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainThreadDispatcher_get_TasksCount_mE93214289B760BC9D2337341F3F9EBB77C2B158A (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int TasksCount => _tasks.Count;
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_0 = __this->____tasks_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5(L_0, ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Awake_mCCE142E359F4C58B962559441C8EC5E9E7478452 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, const RuntimeMethod* method) 
{
	{
		// ThreadId = Thread.CurrentThread.ManagedThreadId;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		MainThreadDispatcher_set_ThreadId_m1D2068F32CE8E4F4184C90E9F0D21F57D2160952_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::Dispatch(System.Delegate,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Dispatch_mE2D0FED86EFBD7240B08A99839266AD03F4E2996 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, Delegate_t* ___0_action, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_payload, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m2A3BDAACFE811710D1B9BE32248E84373FB03941_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tasks.Enqueue(new DispatcherTask(action, payload));
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_0 = __this->____tasks_5;
		Delegate_t* L_1 = ___0_action;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_payload;
		DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* L_3 = (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E*)il2cpp_codegen_object_new(DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DispatcherTask__ctor_m05D7F84B09D3C857C0F551E03A8327EB73E534EB(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m2A3BDAACFE811710D1B9BE32248E84373FB03941(L_0, L_3, ConcurrentQueue_1_Enqueue_m2A3BDAACFE811710D1B9BE32248E84373FB03941_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Update_m42FE01ADF0AE11FC8DB63A61F920D3A6173ECA29 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_m5C822399FDD8B346580209CBBE68FE699B98EAA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59);
		s_Il2CppMethodInitialized = true;
	}
	DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* V_0 = NULL;
	{
		goto IL_0042;
	}

IL_0002:
	{
		// if (!_tasks.TryDequeue(out var task))
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_0 = __this->____tasks_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_m5C822399FDD8B346580209CBBE68FE699B98EAA7(L_0, (&V_0), ConcurrentQueue_1_TryDequeue_m5C822399FDD8B346580209CBBE68FE699B98EAA7_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.Log($"(Queue.Count: {_tasks.Count}) Dispatching task {task.Action}");
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_2 = __this->____tasks_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5(L_2, ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* L_6 = V_0;
		NullCheck(L_6);
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_7;
		L_7 = DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral55315F802CF39E863FFE02A657BB40D7FB043F59, L_5, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// task.Invoke();
		DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* L_9 = V_0;
		NullCheck(L_9);
		DispatcherTask_Invoke_m6362C078ADE7D560F19E283D06517D52923528EE(L_9, NULL);
		// task.Dispose();
		DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* L_10 = V_0;
		NullCheck(L_10);
		DispatcherTask_Dispose_m6EE6BC65BDDADD0E56AB03BC4C153A26A1B8852F(L_10, NULL);
	}

IL_0042:
	{
		// while(_tasks.Count > 0)
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_11 = __this->____tasks_5;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5(L_11, ConcurrentQueue_1_get_Count_m7B892F666A97CFF60CBA24A1E1D7B041B41555B5_RuntimeMethod_var);
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.MainThreadDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher__ctor_mEBFA67A72833DA1300F392753891547F3E88A370 (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_m1ECCCC4FF164059D072813A8E7DBB2050EB6327A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoSingleton_2__ctor_m8742CEA2DBFED3E5274D56567F04AB34F16C865B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ConcurrentQueue<DispatcherTask> _tasks = new ConcurrentQueue<DispatcherTask>();
		ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532* L_0 = (ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532*)il2cpp_codegen_object_new(ConcurrentQueue_1_tD68BC555B7E23410B964F0644E2BC517FED42532_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_m1ECCCC4FF164059D072813A8E7DBB2050EB6327A(L_0, ConcurrentQueue_1__ctor_m1ECCCC4FF164059D072813A8E7DBB2050EB6327A_RuntimeMethod_var);
		__this->____tasks_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tasks_5), (void*)L_0);
		MonoSingleton_2__ctor_m8742CEA2DBFED3E5274D56567F04AB34F16C865B(__this, MonoSingleton_2__ctor_m8742CEA2DBFED3E5274D56567F04AB34F16C865B_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	{
		// private int Id { get; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Reflection.MethodInfo DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	{
		// private MethodInfo Method { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::set_Method(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_m3BEF2CC25657D75DE51E454E6E8170FD62433A3C (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private MethodInfo Method { get; set; }
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_GetHashCode_m6B9F68B42C1C52B945080A4038F2F6449CE33406 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	{
		// return Id;
		int32_t L_0;
		L_0 = WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A_inline(__this, NULL);
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::.ctor(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate__ctor_mC044BF8A97D502A98C860DF1EB6F4821DCF62BD2 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, Delegate_t* ___0_method, const RuntimeMethod* method) 
{
	{
		// public WeakRefDelegate(Delegate method) : base(method.Target)
		Delegate_t* L_0 = ___0_method;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_0, NULL);
		WeakRefWrapper__ctor_m07CBE71FD10FB907F0AA6DFD1E0B1B7A30A66DA0(__this, L_1, NULL);
		// Method = method.Method;
		Delegate_t* L_2 = ___0_method;
		NullCheck(L_2);
		MethodInfo_t* L_3;
		L_3 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_2, NULL);
		WeakRefDelegate_set_Method_m3BEF2CC25657D75DE51E454E6E8170FD62433A3C_inline(__this, L_3, NULL);
		// Id = method.GetHashCode();
		Delegate_t* L_4 = ___0_method;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		__this->___U3CIdU3Ek__BackingField_2 = L_5;
		// }
		return;
	}
}
// System.Object DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefDelegate_Invoke_m8639BD6F5037BAFC105C2B926ABA14B8515EDABF (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	{
		// if (IsDisposed || !IsAlive)
		bool L_0 = ((WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3*)__this)->___IsDisposed_1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE(__this, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}

IL_0010:
	{
		// return null;
		return NULL;
	}

IL_0012:
	{
		// var result = Method.Invoke(Target, args);
		MethodInfo_t* L_2;
		L_2 = WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB_inline(__this, NULL);
		RuntimeObject* L_3;
		L_3 = WeakRefWrapper_get_Target_m80AA5DB4D63D8D45E5B16493750EDC4D59247AAC(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_args;
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_2, L_3, L_4, NULL);
		// return result;
		return L_5;
	}
}
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Contains(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Contains_mAF6C23CD55CA95B71C7F4A5A468F74A35B06CCAF (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, Delegate_t* ___0_method, const RuntimeMethod* method) 
{
	{
		// if(method == null || !IsAlive)
		Delegate_t* L_0 = ___0_method;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		bool L_1;
		L_1 = WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE(__this, NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// var contains = Equals(Target, method.Target) && Equals(Method, method.Method);
		RuntimeObject* L_2;
		L_2 = WeakRefWrapper_get_Target_m80AA5DB4D63D8D45E5B16493750EDC4D59247AAC(__this, NULL);
		Delegate_t* L_3 = ___0_method;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_3, NULL);
		bool L_5;
		L_5 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		MethodInfo_t* L_6;
		L_6 = WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB_inline(__this, NULL);
		Delegate_t* L_7 = ___0_method;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_7, NULL);
		bool L_9;
		L_9 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_6, L_8, NULL);
		return L_9;
	}

IL_0032:
	{
		// return contains;
		return (bool)0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefDelegate_Dispose_m18D6968818A9045F8427CC12AFE656B9AE096702 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		// base.Dispose(disposing);
		bool L_0 = ___0_disposing;
		WeakRefWrapper_Dispose_m9EBEA71FFC12EDDCACDC627A4F739BE62875EEDA(__this, L_0, NULL);
		// if (disposing)
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// Method = null;
		WeakRefDelegate_set_Method_m3BEF2CC25657D75DE51E454E6E8170FD62433A3C_inline(__this, (MethodInfo_t*)NULL, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::Equals(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefDelegate_Equals_m1EF33FBA85CF9EFA57ECEC52F547D8BAEC012DE6 (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, Delegate_t* ___0_other, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if(other == null) return false;
		Delegate_t* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// if(other == null) return false;
		return (bool)0;
	}

IL_0005:
	{
		// var otherId = other.GetHashCode();
		Delegate_t* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = L_2;
		// var equals = Id == otherId;
		int32_t L_3;
		L_3 = WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A_inline(__this, NULL);
		int32_t L_4 = V_0;
		// return equals;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_CompareTo_m122C743BF80DD7A4A699ABA1E3AF298290105D5D (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	{
		// if (!(obj is Delegate @delegate))
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var));
		Delegate_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000c:
	{
		// if (Equals(@delegate))
		Delegate_t* L_2 = V_0;
		bool L_3;
		L_3 = WeakRefDelegate_Equals_m1EF33FBA85CF9EFA57ECEC52F547D8BAEC012DE6(__this, L_2, NULL);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0017:
	{
		// return -1;
		return (-1);
	}
}
// System.String DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefDelegate::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WeakRefDelegate_ToString_m3FD3CCD08E1D7C14852FBF0522032BA52F6DCCDA (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{GetType().Name}: {Id}, {Method}, {IsAlive}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		int32_t L_5;
		L_5 = WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A_inline(__this, NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		MethodInfo_t* L_9;
		L_9 = WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB_inline(__this, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		bool L_11;
		L_11 = WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE(__this, NULL);
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		String_t* L_14;
		L_14 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral98BDF7FE5F62EB70EE236FC1C4E73E0AC6D02F78, L_10, NULL);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakRefWrapper_get_Target_m80AA5DB4D63D8D45E5B16493750EDC4D59247AAC (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) 
{
	{
		// var target = IsAlive ? _ref.Target : null;
		bool L_0;
		L_0 = WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____ref_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_1);
		// return target;
		return L_2;
	}
}
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakRefWrapper_get_IsAlive_m7078820E3043E1F1F3C71F3994FCD1B51A96EEFE (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) 
{
	{
		// var isAlive = _ref == null || (_ref.IsAlive && _ref.Target != null);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->____ref_0;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____ref_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____ref_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_3);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		// return isAlive;
		return (bool)1;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper__ctor_m07CBE71FD10FB907F0AA6DFD1E0B1B7A30A66DA0 (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected WeakRefWrapper(object target)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _ref = new WeakReference(target, false);
		RuntimeObject* L_0 = ___0_target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WeakReference__ctor_m8085B7DB432EB4B11F2FFDB543B3F1D05D4A8D99(L_1, L_0, (bool)0, NULL);
		__this->____ref_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ref_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m9EBEA71FFC12EDDCACDC627A4F739BE62875EEDA (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		// if (IsDisposed) return;
		bool L_0 = __this->___IsDisposed_1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsDisposed) return;
		return;
	}

IL_0009:
	{
		// if (disposing)
		bool L_1 = ___0_disposing;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// if(_ref != null)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = __this->____ref_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _ref.Target = null;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____ref_0;
		NullCheck(L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_3, NULL);
		// _ref = null;
		__this->____ref_0 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ref_0), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0027:
	{
		// IsDisposed = true;
		__this->___IsDisposed_1 = (bool)1;
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakRefWrapper_Dispose_m33B84FDABA3FEBEE8E9AAAE022C6EC25BB642812 (WeakRefWrapper_t075AD4653DA5DE24D373D1183C9ED5A2548EF6B3* __this, const RuntimeMethod* method) 
{
	{
		// Dispose(true);
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void DevsDaddy.Shared.EventFramework.Core.Threading.WeakRefWrapper::Dispose(System.Boolean) */, __this, (bool)1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSubscriber_get_IsAlive_m773291AEEA8542250FD19015242EAFDF49C45587 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// if(_callbackMethod == null)
		MethodInfo_t* L_0 = __this->____callbackMethod_1;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// if(_callbackMethod.IsStatic)
		MethodInfo_t* L_2 = __this->____callbackMethod_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// if(_callbackTarget == null ||
		//    !_callbackTarget.IsAlive ||
		//    _callbackTarget.Target == null)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_4 = __this->____callbackTarget_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = __this->____callbackTarget_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_5);
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = __this->____callbackTarget_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_7);
		if (L_8)
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// return true;
		return (bool)1;
	}
}
// System.Type DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_PayloadType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CPayloadTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Int32 DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventSubscriber_GetHashCode_m4B9ACA4208E818F2F56C3B10844F31C8B492E21B (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// return Id;
		int32_t L_0;
		L_0 = EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline(__this, NULL);
		return L_0;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::.ctor(System.Type,System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber__ctor_m83C84B6970AB7DDD8C56647FA7810A924C6583A7 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, Type_t* ___0_payloadType, Delegate_t* ___1_callback, Delegate_t* ___2_predicate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EventSubscriber(Type payloadType, Delegate callback, Delegate predicate = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if(payloadType == null)
		Type_t* L_0 = ___0_payloadType;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, (Type_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// throw new ArgumentNullException(nameof(payloadType));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9489C15AA4F196323930F5B6159572433A6D4F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventSubscriber__ctor_m83C84B6970AB7DDD8C56647FA7810A924C6583A7_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if(callback == null)
		Delegate_t* L_3 = ___1_callback;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException(nameof(callback));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventSubscriber__ctor_m83C84B6970AB7DDD8C56647FA7810A924C6583A7_RuntimeMethod_var)));
	}

IL_0028:
	{
		// PayloadType = payloadType;
		Type_t* L_5 = ___0_payloadType;
		__this->___U3CPayloadTypeU3Ek__BackingField_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadTypeU3Ek__BackingField_4), (void*)L_5);
		// Id = callback.GetHashCode();
		Delegate_t* L_6 = ___1_callback;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		__this->___U3CIdU3Ek__BackingField_5 = L_7;
		// _callbackMethod = callback.Method;
		Delegate_t* L_8 = ___1_callback;
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_8, NULL);
		__this->____callbackMethod_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackMethod_1), (void*)L_9);
		// if(!_callbackMethod.IsStatic &&
		//    callback.Target != null)
		MethodInfo_t* L_10 = __this->____callbackMethod_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_10, NULL);
		if (L_11)
		{
			goto IL_006d;
		}
	}
	{
		Delegate_t* L_12 = ___1_callback;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_006d;
		}
	}
	{
		// _callbackTarget = new WeakReference(callback.Target);
		Delegate_t* L_14 = ___1_callback;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_14, NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_16 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_16, L_15, NULL);
		__this->____callbackTarget_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackTarget_0), (void*)L_16);
	}

IL_006d:
	{
		// if(predicate == null)
		Delegate_t* L_17 = ___2_predicate;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		// return;
		return;
	}

IL_0071:
	{
		// _predicateMethod = predicate.Method;
		Delegate_t* L_18 = ___2_predicate;
		NullCheck(L_18);
		MethodInfo_t* L_19;
		L_19 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_18, NULL);
		__this->____predicateMethod_3 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateMethod_3), (void*)L_19);
		// if(!_predicateMethod.IsStatic &&
		//    !Equals(predicate.Target, callback.Target))
		MethodInfo_t* L_20 = __this->____predicateMethod_3;
		NullCheck(L_20);
		bool L_21;
		L_21 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_20, NULL);
		if (L_21)
		{
			goto IL_00ae;
		}
	}
	{
		Delegate_t* L_22 = ___2_predicate;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_22, NULL);
		Delegate_t* L_24 = ___1_callback;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_24, NULL);
		bool L_26;
		L_26 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_23, L_25, NULL);
		if (L_26)
		{
			goto IL_00ae;
		}
	}
	{
		// _predicateTarget = new WeakReference(predicate.Target);
		Delegate_t* L_27 = ___2_predicate;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline(L_27, NULL);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_29 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_29, L_28, NULL);
		__this->____predicateTarget_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateTarget_2), (void*)L_29);
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void DevsDaddy.Shared.EventFramework.Core.Messenger.EventSubscriber::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSubscriber_Dispose_mBAEE5423CA83C7AF770F665156F0AE4C7FD740C7 (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// _callbackMethod = null;
		__this->____callbackMethod_1 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackMethod_1), (void*)(MethodInfo_t*)NULL);
		// if(_callbackTarget != null)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_0 = __this->____callbackTarget_0;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// _callbackTarget.Target = null;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = __this->____callbackTarget_0;
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_1, NULL);
		// _callbackTarget = null;
		__this->____callbackTarget_0 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____callbackTarget_0), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0022:
	{
		// _predicateMethod = null;
		__this->____predicateMethod_3 = (MethodInfo_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateMethod_3), (void*)(MethodInfo_t*)NULL);
		// if(_predicateTarget != null)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = __this->____predicateTarget_2;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// _predicateTarget.Target = null;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->____predicateTarget_2;
		NullCheck(L_3);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_3, NULL);
		// _predicateTarget = null;
		__this->____predicateTarget_2 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____predicateTarget_2), (void*)(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DevsDaddy.Shared.EventFramework.Core.Extensions.CollectionExtensions::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionExtensions_IsNullOrEmpty_m11B519B87927C78B5BB97C31FA06438211606B1D (String_t* ___0_source, const RuntimeMethod* method) 
{
	{
		// var isEmpty = string.IsNullOrEmpty(source);
		String_t* L_0 = ___0_source;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		// return isEmpty;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* EventSubscriber_get_PayloadType_m0D088D4AA4C71CE5022AD5FBF9C83BAB0E675116_inline (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CPayloadTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventSubscriber_get_Id_m3A8FB0D934FB5CC320ED055B5C05C51F61609B31_inline (EventSubscriber_tDE253BFF45F134B6E871E588F55A21B98210600E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Action_m42D6648F323316BD340516707FAB0C2708E5FCC1_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* ___0_value, const RuntimeMethod* method) 
{
	{
		// get; private set;
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0 = ___0_value;
		__this->___U3CActionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CActionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DispatcherTask_set_Payload_m063DAABEBCEAC4BF36230211D72CA2BA2BE0D590_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_value, const RuntimeMethod* method) 
{
	{
		// set;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_value;
		__this->___U3CPayloadU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPayloadU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* DispatcherTask_get_Action_m8145C36613C78DB816BF6E264FEC43416017CE73_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// get; private set;
		WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* L_0 = __this->___U3CActionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* DispatcherTask_get_Payload_mD4DD70DBBF0810A9673A1879A62B5B81D00711D4_inline (DispatcherTask_t7998B7C31CA538E11AF3FF7788E1DCBB50789D4E* __this, const RuntimeMethod* method) 
{
	{
		// get;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___U3CPayloadU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadDispatcher_set_ThreadId_m1D2068F32CE8E4F4184C90E9F0D21F57D2160952_inline (MainThreadDispatcher_tBB540DA4E6C7ED729E512F4E7A187EEDF882AD2E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CThreadIdU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WeakRefDelegate_get_Id_mC80C25C7263D11D956707795DE7FCBB9FE12AE2A_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	{
		// private int Id { get; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Delegate_get_Target_m6E203F111C1548193A5AB7E616BD5834CD269753_inline (Delegate_t* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_target_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeakRefDelegate_set_Method_m3BEF2CC25657D75DE51E454E6E8170FD62433A3C_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, MethodInfo_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private MethodInfo Method { get; set; }
		MethodInfo_t* L_0 = ___0_value;
		__this->___U3CMethodU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMethodU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* WeakRefDelegate_get_Method_mD20F6F0A3A9ABC7C129273BD175293B2787C6BAB_inline (WeakRefDelegate_t429EE7C75C1BF1A0F7C021646F5945F41672FDEC* __this, const RuntimeMethod* method) 
{
	{
		// private MethodInfo Method { get; set; }
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_2_get_Main_mF60F1D62993804D481207E30C61E79F57809EE60_gshared_inline (const RuntimeMethod* method) 
{
	{
		// public static TInterface Main { get; } = new TImplementation();
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		RuntimeObject* L_0 = ((Singleton_2_t3C14282F5CCDD89E0B34DFF0FE8A056CB5963255_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CMainU3Ek__BackingField_0;
		return L_0;
	}
}
