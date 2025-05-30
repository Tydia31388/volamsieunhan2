#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket>
struct TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// TianMa.Tools.ICMPEcho
struct ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4;
// TianMa.Tools.ICMPMessage
struct ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1;
// TianMa.Tools.ICMPPacket
struct ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691;
// TianMa.Tools.ICMPSocket
struct ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2;
// TianMa.Tools.ICMP_CALLBACK
struct ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00;
// TianMa.Tools.ICMP_OVER_CALLBACK
struct ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IOAsyncCallback
struct IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490;
// TianMa.Tools.IPPacket
struct IPPacket_tBE962557829268644870CAC8085C1659D4D7A698;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// Server.Tools.MD5Helper
struct MD5Helper_t5ABBCA1AE545DAC9F5204C2A9A353F11AA9648E9;
// Server.Tools.MD5Managed
struct MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E;
// MUJson
struct MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// Xenocode.Client.Attributes.AssemblyAttributes.ProcessedByXenocode
struct ProcessedByXenocode_t0A5FCDD36133FF29D26E0B9CBEBFD234BE9A85C6;
// Server.Tools.RC4Helper
struct RC4Helper_t6178F53FCE432CC718ABE863D2BA131BBFAA5590;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Server.Tools.SHA1Helper
struct SHA1Helper_tE1F7E40C9B5FADB244FA94EAC3F31E8F47938729;
// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Server.Tools.StringEncrypt
struct StringEncrypt_tB8CC0298E5FC7B1A2C4115BF68493795C478358F;
// Xenocode.Client.Attributes.AssemblyAttributes.SuppressDisassembly
struct SuppressDisassembly_t3E713694B0529A63D0496372556BB04A321FB4A6;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// TianMa.Tools.TraceUtils
struct TraceUtils_tF955F37B5044DF5E615E834F0F70FDB86E584746;
// System.Type
struct Type_t;
// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ProtoBuf.Serializers.x3c771d2672e85789
struct x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E;
// ProtoBuf.Serializers.x41fcadcc0506e331
struct x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C;
// TianMa.Tools.x60c233b7055c6c1c
struct x60c233b7055c6c1c_tC88D533269B78803761FFD155FC68D34A761F925;
// TianMa.Tools.xaa6ff34997724cf5
struct xaa6ff34997724cf5_t7E73AE2F7D4F10E5ABB42BF24C4127672F908437;
// System.Net.Sockets.Socket/CachedEventArgs
struct CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C;
// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs
struct Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9;
// TianMa.Tools.TraceUtils/xfd6b00b29231a30d
struct xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D;
// System.Text.UTF8Encoding/UTF8EncodingSealed
struct UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36;
// TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1
struct x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugTextLog_t129342369A17BA359701B47B551920585B214194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPDestinationUnreachable_t6B2D333CB217E72D6BBA55245EC6DD86446A836A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPPacket_tBE962557829268644870CAC8085C1659D4D7A698_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764;
IL2CPP_EXTERN_C String_t* _stringLiteral18C290909335C542DC12346D61268CA696A0E5EC;
IL2CPP_EXTERN_C String_t* _stringLiteral1E00B13A71364F602D69FB95326D956AF9B98A61;
IL2CPP_EXTERN_C String_t* _stringLiteral1F02E20990DA5581EAF1074AD65C1AC233161BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral2044014B935F7210EBA18B142D25903222811345;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2C4E5CED80B3FD51ACED6272C9512C7800193D73;
IL2CPP_EXTERN_C String_t* _stringLiteral327C67324A12BD3F0315508441419B9E7DE5C65A;
IL2CPP_EXTERN_C String_t* _stringLiteral346ED24326D414356BF1FF32BEC7C54B26119EDF;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral424270DF692E41A7155DA3AA9A9DF9F52A471219;
IL2CPP_EXTERN_C String_t* _stringLiteral450DE32FFBCA6A229CABB90868BF5D78DB7FFF8D;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5410F776AAEE774DDB4343FB7743E2032DBE020F;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral59588493BEB8880A7037DDF0FA738867E4E52D27;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73;
IL2CPP_EXTERN_C String_t* _stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral9247960360EE852BC3FD10B2691B9566710C06D0;
IL2CPP_EXTERN_C String_t* _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9BA302517D2A0DB30D9C30048F167559372A6A2F;
IL2CPP_EXTERN_C String_t* _stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralADD863DC498178238F4696352B9407B2C4F43F71;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC14C08078BF1D1BE6E4BCD3596258B01F7D57A79;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCA29F3B953C3FBD4274021DF51EDA1538D0F44BA;
IL2CPP_EXTERN_C String_t* _stringLiteralCD0568533693A35114795A3922F2758E1DE00896;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8;
IL2CPP_EXTERN_C String_t* _stringLiteralDE1632432BC8234C81171D058EF8BDE98B35585A;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE2285C527CB5719A2FA728CB9EF993314AECC73B;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B;
IL2CPP_EXTERN_C String_t* _stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TraceUtils_x88a1be9885d20851_mFC1E70863D610684CFEF6828A45DEB599661D3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* x60c233b7055c6c1c_x4f6a9a4e1eaa3d50_mF34D271B5D5925C7248534A29FD03F9279AE2D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xaa6ff34997724cf5_x00d0f063c43ff573_m3A7ABAC370D338D4F226F56A92D2F9C4053BB4F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* xaa6ff34997724cf5_x6eeac16015c680d5_mC8D356982EAF97ABC6B15168AF6594EA7BDFD722_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

// TianMa.Tools.ICMPMessage
struct ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1  : public RuntimeObject
{
};

// TianMa.Tools.ICMPPacket
struct ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691  : public RuntimeObject
{
	// System.Byte TianMa.Tools.ICMPPacket::Type
	uint8_t ___Type_0;
	// System.Byte TianMa.Tools.ICMPPacket::Code
	uint8_t ___Code_1;
	// System.UInt16 TianMa.Tools.ICMPPacket::Checksum
	uint16_t ___Checksum_2;
	// System.Byte[] TianMa.Tools.ICMPPacket::PacketData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PacketData_3;
	// TianMa.Tools.ICMPMessage TianMa.Tools.ICMPPacket::Message
	ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* ___Message_4;
};

// TianMa.Tools.ICMPSocket
struct ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2  : public RuntimeObject
{
	// System.Int32 TianMa.Tools.ICMPSocket::SocketTimeout
	int32_t ___SocketTimeout_0;
	// System.Net.Sockets.Socket TianMa.Tools.ICMPSocket::x70087761226fbdf2
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___x70087761226fbdf2_1;
	// System.Net.IPEndPoint TianMa.Tools.ICMPSocket::x1b07d570d2c02338
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___x1b07d570d2c02338_2;
	// System.Net.EndPoint TianMa.Tools.ICMPSocket::EndPoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___EndPoint_3;
	// System.String TianMa.Tools.ICMPSocket::x9396aeed6f94cb4a
	String_t* ___x9396aeed6f94cb4a_4;
	// System.Int32 TianMa.Tools.ICMPSocket::TimeElapsed
	int32_t ___TimeElapsed_5;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.Net.IPHostEntry
struct IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490  : public RuntimeObject
{
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;
};

// TianMa.Tools.IPPacket
struct IPPacket_tBE962557829268644870CAC8085C1659D4D7A698  : public RuntimeObject
{
	// System.Byte TianMa.Tools.IPPacket::Version
	uint8_t ___Version_0;
	// System.Byte TianMa.Tools.IPPacket::HeaderLength
	uint8_t ___HeaderLength_1;
	// System.Byte TianMa.Tools.IPPacket::TypeOfService
	uint8_t ___TypeOfService_2;
	// System.UInt16 TianMa.Tools.IPPacket::TotalLength
	uint16_t ___TotalLength_3;
	// System.UInt16 TianMa.Tools.IPPacket::Identification
	uint16_t ___Identification_4;
	// System.Byte TianMa.Tools.IPPacket::Flags
	uint8_t ___Flags_5;
	// System.UInt16 TianMa.Tools.IPPacket::FragmentOffset
	uint16_t ___FragmentOffset_6;
	// System.Byte TianMa.Tools.IPPacket::TimeToLive
	uint8_t ___TimeToLive_7;
	// System.Byte TianMa.Tools.IPPacket::Protocol
	uint8_t ___Protocol_8;
	// System.UInt16 TianMa.Tools.IPPacket::HeaderChecksum
	uint16_t ___HeaderChecksum_9;
	// System.Net.IPAddress TianMa.Tools.IPPacket::SourceAddress
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___SourceAddress_10;
	// System.Net.IPAddress TianMa.Tools.IPPacket::DestinationAddress
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___DestinationAddress_11;
	// System.Byte[] TianMa.Tools.IPPacket::PacketData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PacketData_12;
	// TianMa.Tools.ICMPPacket TianMa.Tools.IPPacket::ICMP
	ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* ___ICMP_13;
};

// Server.Tools.MD5Helper
struct MD5Helper_t5ABBCA1AE545DAC9F5204C2A9A353F11AA9648E9  : public RuntimeObject
{
};

// MUJson
struct MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Server.Tools.RC4Helper
struct RC4Helper_t6178F53FCE432CC718ABE863D2BA131BBFAA5590  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// Server.Tools.SHA1Helper
struct SHA1Helper_tE1F7E40C9B5FADB244FA94EAC3F31E8F47938729  : public RuntimeObject
{
};

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E  : public RuntimeObject
{
	// System.Net.Sockets.Socket/CachedEventArgs System.Net.Sockets.Socket::_cachedTaskEventArgs
	CachedEventArgs_tF0692E89962FD1A045B17BC985F838C11FB6822C* ____cachedTaskEventArgs_6;
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_17;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_18;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_19;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_20;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_21;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_22;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_23;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5A597D30D951E736B750ED09D5B3AB72F98407EE* ___m_Handle_24;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___seed_endpoint_25;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___ReadSem_26;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___WriteSem_27;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_28;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_29;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_30;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_31;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_32;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_33;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Server.Tools.StringEncrypt
struct StringEncrypt_tB8CC0298E5FC7B1A2C4115BF68493795C478358F  : public RuntimeObject
{
};

// TianMa.Tools.TraceUtils
struct TraceUtils_tF955F37B5044DF5E615E834F0F70FDB86E584746  : public RuntimeObject
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

// ProtoBuf.Serializers.x3c771d2672e85789
struct x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E  : public RuntimeObject
{
};

// ProtoBuf.Serializers.x41fcadcc0506e331
struct x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C  : public RuntimeObject
{
	// System.UInt32 ProtoBuf.Serializers.x41fcadcc0506e331::xa4660e7fe4e71d99
	uint32_t ___xa4660e7fe4e71d99_0;
};

// TianMa.Tools.x60c233b7055c6c1c
struct x60c233b7055c6c1c_tC88D533269B78803761FFD155FC68D34A761F925  : public RuntimeObject
{
};

// TianMa.Tools.xaa6ff34997724cf5
struct xaa6ff34997724cf5_t7E73AE2F7D4F10E5ABB42BF24C4127672F908437  : public RuntimeObject
{
};

// TianMa.Tools.TraceUtils/xfd6b00b29231a30d
struct xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D  : public RuntimeObject
{
	// System.String TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_x64f259306803411c
	String_t* ____x64f259306803411c_0;
	// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_x10f4d88af727adbc
	int32_t ____x10f4d88af727adbc_1;
	// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_xecea0e4ef40edfa5
	int32_t ____xecea0e4ef40edfa5_2;
	// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_xbfb5b0208f9d4d6a
	int32_t ____xbfb5b0208f9d4d6a_3;
	// TianMa.Tools.ICMP_CALLBACK TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_xd2637df501625a82
	ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ____xd2637df501625a82_4;
	// TianMa.Tools.ICMP_OVER_CALLBACK TianMa.Tools.TraceUtils/xfd6b00b29231a30d::_xb501336c6fc7c870
	ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ____xb501336c6fc7c870_5;
};

// TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1
struct x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5  : public RuntimeObject
{
	// TianMa.Tools.ICMP_CALLBACK TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::_xd2637df501625a82
	ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ____xd2637df501625a82_0;
	// TianMa.Tools.ICMP_OVER_CALLBACK TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::_x235b5094753c6b72
	ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ____x235b5094753c6b72_1;
	// System.String TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::_x64f259306803411c
	String_t* ____x64f259306803411c_2;
	// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::_x10f4d88af727adbc
	int32_t ____x10f4d88af727adbc_3;
	// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::_xecea0e4ef40edfa5
	int32_t ____xecea0e4ef40edfa5_4;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// TianMa.Tools.ICMPEcho
struct ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4  : public ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1
{
	// System.UInt16 TianMa.Tools.ICMPEcho::Identifier
	uint16_t ___Identifier_0;
	// System.UInt16 TianMa.Tools.ICMPEcho::SequenceNumber
	uint16_t ___SequenceNumber_1;
	// System.String TianMa.Tools.ICMPEcho::Data
	String_t* ___Data_2;
};

// TianMa.Tools.ICMPIPHeaderReply
struct ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63  : public ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1
{
	// System.Byte[] TianMa.Tools.ICMPIPHeaderReply::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_0;
	// TianMa.Tools.IPPacket TianMa.Tools.ICMPIPHeaderReply::IP
	IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* ___IP_1;
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_4;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// Xenocode.Client.Attributes.AssemblyAttributes.ProcessedByXenocode
struct ProcessedByXenocode_t0A5FCDD36133FF29D26E0B9CBEBFD234BE9A85C6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// Xenocode.Client.Attributes.AssemblyAttributes.SuppressDisassembly
struct SuppressDisassembly_t3E713694B0529A63D0496372556BB04A321FB4A6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE  : public Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095
{
	// System.Boolean System.Text.UTF8Encoding::_emitUTF8Identifier
	bool ____emitUTF8Identifier_18;
	// System.Boolean System.Text.UTF8Encoding::_isThrowException
	bool ____isThrowException_19;
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

// Server.Tools.x1408d8967d2f1af2
struct x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860 
{
	// System.UInt32 Server.Tools.x1408d8967d2f1af2::xda71bf6f7c07c3bc
	uint32_t ___xda71bf6f7c07c3bc_0;
	// System.UInt32 Server.Tools.x1408d8967d2f1af2::x8e8f6cc6a0756b05
	uint32_t ___x8e8f6cc6a0756b05_1;
	// System.UInt32 Server.Tools.x1408d8967d2f1af2::x857912840ffd015f
	uint32_t ___x857912840ffd015f_2;
	// System.UInt32 Server.Tools.x1408d8967d2f1af2::x5d593cee9d844848
	uint32_t ___x5d593cee9d844848_3;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
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

// System.Security.Cryptography.HMAC
struct HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684  : public KeyedHashAlgorithm_t782AD417BF829DAD1267A7AE4F9B553537CCF263
{
	// System.Int32 System.Security.Cryptography.HMAC::blockSizeValue
	int32_t ___blockSizeValue_5;
	// System.String System.Security.Cryptography.HMAC::m_hashName
	String_t* ___m_hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash1
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash1_7;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::m_hash2
	HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* ___m_hash2_8;
	// System.Byte[] System.Security.Cryptography.HMAC::m_inner
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_inner_9;
	// System.Byte[] System.Security.Cryptography.HMAC::m_outer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_outer_10;
	// System.Boolean System.Security.Cryptography.HMAC::m_hashing
	bool ___m_hashing_11;
};

// TianMa.Tools.ICMPDestinationUnreachable
struct ICMPDestinationUnreachable_t6B2D333CB217E72D6BBA55245EC6DD86446A836A  : public ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63
{
};

// TianMa.Tools.ICMPEchoReply
struct ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB  : public ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4
{
};

// TianMa.Tools.ICMPTimeExceeded
struct ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A  : public ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63
{
};

// Server.Tools.MD5Managed
struct MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	// System.Byte[] Server.Tools.MD5Managed::_x4a3f0a05c02f235f
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____x4a3f0a05c02f235f_4;
	// Server.Tools.x1408d8967d2f1af2 Server.Tools.MD5Managed::_xbcc0924abad481fb
	x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860 ____xbcc0924abad481fb_5;
	// System.Int64 Server.Tools.MD5Managed::_x5808173d78349062
	int64_t ____x5808173d78349062_6;
	// System.Int32 Server.Tools.MD5Managed::_xff884decc91dea16
	int32_t ____xff884decc91dea16_7;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Security.Cryptography.SHA1Managed
struct SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478  : public SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE
{
	// System.Byte[] System.Security.Cryptography.SHA1Managed::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int64 System.Security.Cryptography.SHA1Managed::_count
	int64_t ____count_5;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_stateSHA1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____stateSHA1_6;
	// System.UInt32[] System.Security.Cryptography.SHA1Managed::_expandedBuffer
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____expandedBuffer_7;
};

// System.Security.Cryptography.HMACSHA1
struct HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030  : public HMAC_tD2DDF5CB02E7064020823E8EE01DA127E46E1684
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// TianMa.Tools.ICMP_CALLBACK
struct ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00  : public MulticastDelegate_t
{
};

// TianMa.Tools.ICMP_OVER_CALLBACK
struct ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15  : public MulticastDelegate_t
{
};

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.ArrayList

// System.Collections.ArrayList

// System.Attribute

// System.Attribute

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.EndPoint

// System.Net.EndPoint

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.Hashtable

// TianMa.Tools.ICMPMessage

// TianMa.Tools.ICMPMessage

// TianMa.Tools.ICMPPacket

// TianMa.Tools.ICMPPacket

// TianMa.Tools.ICMPSocket

// TianMa.Tools.ICMPSocket

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.Net.IPHostEntry

// System.Net.IPHostEntry

// TianMa.Tools.IPPacket

// TianMa.Tools.IPPacket

// Server.Tools.MD5Helper

// Server.Tools.MD5Helper

// MUJson
struct MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields
{
	// System.Int32 MUJson::lastErrorIndex
	int32_t ___lastErrorIndex_13;
	// System.String MUJson::lastDecode
	String_t* ___lastDecode_14;
};

// MUJson

// Server.Tools.RC4Helper

// Server.Tools.RC4Helper

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Server.Tools.SHA1Helper

// Server.Tools.SHA1Helper

// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_StaticFields
{
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::AcceptCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___AcceptCompletedHandler_0;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::ReceiveCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___ReceiveCompletedHandler_1;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.Socket::SendCompletedHandler
	EventHandler_1_t5D3FC4609BD8133ED1226D6D49A1D8076B16A9ED* ___SendCompletedHandler_2;
	// System.Net.Sockets.Socket/TaskSocketAsyncEventArgs`1<System.Net.Sockets.Socket> System.Net.Sockets.Socket::s_rentedSocketSentinel
	TaskSocketAsyncEventArgs_1_tEB937620E5B15D91E5BFEFFA707CF800930F8401* ___s_rentedSocketSentinel_3;
	// System.Net.Sockets.Socket/Int32TaskSocketAsyncEventArgs System.Net.Sockets.Socket::s_rentedInt32Sentinel
	Int32TaskSocketAsyncEventArgs_t36C5FC82499ED9DAFE7F05C38EF92D77A0B248E9* ___s_rentedInt32Sentinel_4;
	// System.Threading.Tasks.Task`1<System.Int32> System.Net.Sockets.Socket::s_zeroTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_zeroTask_5;
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_10;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_PerfCountersEnabled
	bool ___s_PerfCountersEnabled_13;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___AcceptAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginAcceptReceiveCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ConnectAsyncCallback_37;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginConnectCallback_38;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___DisconnectAsyncCallback_39;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginDisconnectCallback_40;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveAsyncCallback_41;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveCallback_42;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveGenericCallback_43;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___ReceiveFromAsyncCallback_44;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginReceiveFromCallback_45;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendAsyncCallback_46;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tDBBA8BBDA6B203613680E77BD4AD6320A1268388* ___BeginSendGenericCallback_47;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___SendToAsyncCallback_48;
};

// System.Net.Sockets.Socket

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Server.Tools.StringEncrypt

// Server.Tools.StringEncrypt

// TianMa.Tools.TraceUtils

// TianMa.Tools.TraceUtils

// ProtoBuf.Serializers.x3c771d2672e85789
struct x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields
{
	// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::xf52c112c1b49bf7b
	int32_t ___xf52c112c1b49bf7b_13;
	// System.String ProtoBuf.Serializers.x3c771d2672e85789::x7df73acf28d072a1
	String_t* ___x7df73acf28d072a1_14;
};

// ProtoBuf.Serializers.x3c771d2672e85789

// ProtoBuf.Serializers.x41fcadcc0506e331
struct x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_StaticFields
{
	// System.UInt32[] ProtoBuf.Serializers.x41fcadcc0506e331::xe6d5d55071bc950f
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___xe6d5d55071bc950f_1;
};

// ProtoBuf.Serializers.x41fcadcc0506e331

// TianMa.Tools.x60c233b7055c6c1c

// TianMa.Tools.x60c233b7055c6c1c

// TianMa.Tools.xaa6ff34997724cf5

// TianMa.Tools.xaa6ff34997724cf5

// TianMa.Tools.TraceUtils/xfd6b00b29231a30d

// TianMa.Tools.TraceUtils/xfd6b00b29231a30d

// TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1

// TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// TianMa.Tools.ICMPEcho

// TianMa.Tools.ICMPEcho

// TianMa.Tools.ICMPIPHeaderReply

// TianMa.Tools.ICMPIPHeaderReply

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Net.IPEndPoint

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Security.Cryptography.MD5

// System.Security.Cryptography.MD5

// Xenocode.Client.Attributes.AssemblyAttributes.ProcessedByXenocode

// Xenocode.Client.Attributes.AssemblyAttributes.ProcessedByXenocode

// System.Security.Cryptography.SHA1

// System.Security.Cryptography.SHA1

// Xenocode.Client.Attributes.AssemblyAttributes.SuppressDisassembly

// Xenocode.Client.Attributes.AssemblyAttributes.SuppressDisassembly

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

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.Text.UTF8Encoding
struct UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_StaticFields
{
	// System.Text.UTF8Encoding/UTF8EncodingSealed System.Text.UTF8Encoding::s_default
	UTF8EncodingSealed_tF97A34F40CABE9CE1C168967D60396F51C43DD36* ___s_default_16;
	// System.Byte[] System.Text.UTF8Encoding::s_preamble
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_preamble_17;
};

// System.Text.UTF8Encoding

// System.Void

// System.Void

// Server.Tools.x1408d8967d2f1af2

// Server.Tools.x1408d8967d2f1af2

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// TianMa.Tools.ICMPDestinationUnreachable

// TianMa.Tools.ICMPDestinationUnreachable

// TianMa.Tools.ICMPEchoReply

// TianMa.Tools.ICMPEchoReply

// TianMa.Tools.ICMPTimeExceeded

// TianMa.Tools.ICMPTimeExceeded

// Server.Tools.MD5Managed

// Server.Tools.MD5Managed

// System.Security.Cryptography.SHA1Managed

// System.Security.Cryptography.SHA1Managed

// System.Security.Cryptography.HMACSHA1

// System.Security.Cryptography.HMACSHA1

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

// System.AsyncCallback

// System.AsyncCallback

// TianMa.Tools.ICMP_CALLBACK

// TianMa.Tools.ICMP_CALLBACK

// TianMa.Tools.ICMP_OVER_CALLBACK

// TianMa.Tools.ICMP_OVER_CALLBACK

// System.Threading.ParameterizedThreadStart

// System.Threading.ParameterizedThreadStart
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D  : public RuntimeArray
{
	ALIGN_FIELD (8) IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* m_Items[1];

	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;

// System.Byte[] Server.Tools.MD5Core::GetHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Core_GetHash_m525D89B8BF67FD200B98DE6722F7EAEB5D52EF52 (String_t* ___0_input, const RuntimeMethod* method) ;
// System.String Server.Tools.DataHelper::Bytes2HexString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.MD5Core::GetHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Core_GetHash_m965664E9F7937540FDF2F1A0395F94ACC51F1541 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.MD5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5__ctor_m2ADB9C1AC9A8A73EC6E896B4EFCD451192B166F3 (MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void Server.Tools.MD5Core::x27a41f9a819cf224(System.Byte[],Server.Tools.x1408d8967d2f1af2&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Core_x27a41f9a819cf224_m98F1B394B3B136B5BDB87AB78EADF874AE792A90 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_xcdaeea7afaf570ff, x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* ___1_xe2fa3b79f67f775c, int32_t ___2_x424caea8cd0993e9, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.MD5Core::x8259195df2f3ddaa(System.Byte[],System.Int32,System.Int32,Server.Tools.x1408d8967d2f1af2,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Core_x8259195df2f3ddaa_m3B33651CEB15A6C25C1C87364A07915EA56072B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_xcdaeea7afaf570ff, int32_t ___1_x424caea8cd0993e9, int32_t ___2_x2e94540690ec6f24, x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860 ___3_xe6a177a77b62dafb, int64_t ___4_xb5964a891b6cf7c3, const RuntimeMethod* method) ;
// System.Object MUJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MUJson_parseValue_m0CB405C51AC2594199648A4A2C919CE5DCEF9942 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, bool* ___2_success, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Boolean MUJson::serializeValue(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeValue_m2E10E2227E04BB189A2FE555C72F3C036BD15F81 (RuntimeObject* ___0_value, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Int32 MUJson::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.String MUJson::parseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MUJson_parseString_m75E9CE799D638CC2B6034D1EE9F5A9234F44F274 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.Int32 MUJson::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_lookAhead_mE089ABFF848D88F8CFBA1CE55FBDF2854F62FC90 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Double MUJson::parseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MUJson_parseNumber_mD4A9E65F874D3748E227DB9CD84ECB5C001A6B49 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.Collections.Hashtable MUJson::parseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* MUJson_parseObject_mC981252A3D5B8D079C73DECFEAE1A98E3A369447 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.Collections.ArrayList MUJson::parseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* MUJson_parseArray_mB3EEA1CD2DAD866590989B9DF42B4C92BE1A8CBD (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void MUJson::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_eatWhitespace_m6B1EC39F53CE9DE5EB0EA39A43A051E5F0D83FA0 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) ;
// System.Int32 MUJson::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_getLastIndexOfNumber_mBE3701E0A235C19CF281A8C13512F53B58CBABB8 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean MUJson::serializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeObject_m096C40D5AFB724C008083826EDDD6BEC3AEADDDE (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_anObject, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.Boolean MUJson::serializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeArray_m0CCEC5D4879F212EB62D53D9FE22A6558CB74144 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_anArray, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void MUJson::serializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352 (String_t* ___0_aString, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void MUJson::serializeNumber(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_serializeNumber_m5E948E0BBDDBCB5D862C6F5D9A4F95E0AE57E847 (double ___0_number, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.Boolean MUJson::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeDictionary_m24397DF626041066367CAA8936F45309645A1A25 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_dict, StringBuilder_t* ___1_builder, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, RuntimeObject* ___0_c, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mA5896BBF6FFE5A37B531E8E2F5258AE6F0C38580 (double ___0_value, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_mA1D050730221E6407E0F800CFF92A8654B29D0CC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, int32_t ___1_offset, int32_t ___2_count, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_key, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_m22CF4C8504B274211AC689D5766FCBD466D884A6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.SHA1Helper::get_sha1_bytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_sha1_bytes_m1E7FFB0EBD6FB9BECE03E08A7E87B7877DB7DC2A (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.SHA1Helper::get_sha1_bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_sha1_bytes_mDE99DC143A6F91E7421B58886673D7B4F3FEECDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.SHA1Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* __this, const RuntimeMethod* method) ;
// System.Void System.Text.UTF8Encoding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00 (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.SHA1Helper::get_macsha1_bytes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_macsha1_bytes_m850EF299894440F0181656B306CD9C71179BD4FB (String_t* ___0_str, String_t* ___1_key, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.SHA1Helper::get_macsha1_bytes(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_macsha1_bytes_m905D846480107CC9829119F438AFACC8797453B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_key, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.HMACSHA1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMACSHA1__ctor_mC50ADF9333EE40240D96377069CD32E0D373ECCE (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void DebugTextLog::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugTextLog_LogException_mD731F6515ED1400A0E43DBDC64FA3C1F55470999 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.AesHelper::AesEncryptBytes(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AesHelper_AesEncryptBytes_mB73BBD77AABEAD2D69DA226FD3996F547105790A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_passwd, String_t* ___2_saltValue, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.DataHelper::HexString2Bytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DataHelper_HexString2Bytes_m3D011E057EEF1083C21805261290B8F75A65A64C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Byte[] Server.Tools.AesHelper::AesDecryptBytes(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AesHelper_AesDecryptBytes_m6675B1F2B573215FA29D25EC5B60C00C968D8623 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encryptData, String_t* ___1_passwd, String_t* ___2_saltValue, const RuntimeMethod* method) ;
// System.UInt32[] ProtoBuf.Serializers.x41fcadcc0506e331::x40d0ed9be6b42277()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* x41fcadcc0506e331_x40d0ed9be6b42277_m44645014BA35B81FFAEE6C796808D3CA130E6BF5 (const RuntimeMethod* method) ;
// System.Object ProtoBuf.Serializers.x3c771d2672e85789::xe464bdcf3db42586(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x3c771d2672e85789_xe464bdcf3db42586_mC5E1F08BD5FCC4952E0C2AB5E620B26CBFD02BE9 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, bool* ___2_xd938fd32778a1c95, const RuntimeMethod* method) ;
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x18017ffcd5c7e2ae(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x18017ffcd5c7e2ae_m43A62F555E0D1D8C8DAC07F4222AD6D0FB36F80C (RuntimeObject* ___0_xbcea506a33cf9111, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::xab05c62a2a183f47(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.String ProtoBuf.Serializers.x3c771d2672e85789::x95db5d235451d5fa(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* x3c771d2672e85789_x95db5d235451d5fa_m8CC7A3267CF5130A4EC416F8D437B4026A59ECC3 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::x92b1f39635dc2e69(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_x92b1f39635dc2e69_m78AFFC139B2347732C7DD8103F94CC925B27818A (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Collections.Hashtable ProtoBuf.Serializers.x3c771d2672e85789::x30f085f1ccc05ade(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* x3c771d2672e85789_x30f085f1ccc05ade_m2B99401E5B500F9F37BF6A944B98FB3775AAA4C6 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Collections.ArrayList ProtoBuf.Serializers.x3c771d2672e85789::x9e224c41c42ca8ee(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* x3c771d2672e85789_x9e224c41c42ca8ee_m8E61869E93A8CD02D0D9587BCA3F1D84B31B95C2 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Double ProtoBuf.Serializers.x3c771d2672e85789::xe903d4e242ac5b50(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double x3c771d2672e85789_xe903d4e242ac5b50_m115A5BEF81A7FFFC5D016B47FB25079E82AB5333 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x6503e8821f6023fa(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x6503e8821f6023fa_mC14DAB755ED878FC9D203667BBAE5D194B3B7E03 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::xdb23184c8634c3aa(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_xdb23184c8634c3aa_m5DE95C276796D8947A547973C0874D71E0A81054 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) ;
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x988d678ef128ed4f(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x988d678ef128ed4f_mFB8775336F8CDFD5BA66E51A0DB5FA647F08B52A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_xa5c6726892f9f63d, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x327a6c5b340675b5(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x327a6c5b340675b5_mB5E59B73F1D2100D735CF5FDE09FFE2A412B89CE (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_xfce3f26cf248085d, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x8acd328265e1a735(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E (String_t* ___0_x0c0ec4acfbf729d1, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x27357a604dab004b(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x27357a604dab004b_m04F5B2D1CE8D9465627D9AC4A3471AA2BCD02BB8 (double ___0_x78b0a0bc28459535, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x7174baaa60fba55a(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x7174baaa60fba55a_m3A482142AA0F5AC550907D8F6DD124DDE41450AF (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_x273c212ea6c4689b, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMPSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPSocket_Close_m9A08FD90F69CC02E2769B7889FF349C1B7119F32 (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Net.IPAddress System.Net.IPEndPoint::get_Address()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.IPPacket::.ctor(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPPacket__ctor_mD4B0631476591A0CD0C5506DCB86CBAAA68D2F91 (IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_Packet, const RuntimeMethod* method) ;
// System.Byte[] TianMa.Tools.ICMPPacket::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ICMPPacket_GetBytes_m4E3E2C6FE918FF29B6A7538BE2B1150FC628D42A (ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* __this, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::SendTo(System.Byte[],System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* ___1_remoteEP, const RuntimeMethod* method) ;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom(System.Byte[],System.Net.EndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_ReceiveFrom_m0E841C82B5F0DB9CAF3A7C0E72E64C3C22A1A09D (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** ___1_remoteEP, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___0_optionLevel, int32_t ___1_optionName, int32_t ___2_optionValue, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595 (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* __this, int32_t ___0_addressFamily, int32_t ___1_socketType, int32_t ___2_protocolType, const RuntimeMethod* method) ;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212 (String_t* ___0_hostNameOrAddress, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void System.Console::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_Write_m35A29437F5E32122EC36215ADE5EBD668FE7BD85 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMP_CALLBACK::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_CALLBACK__ctor_mD131382E3FF369C67400545CF06D310D77622A4D (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMP_OVER_CALLBACK::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK__ctor_mEB3D784C3ECFFBE374CC75C71D64D01CB578064C (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.TraceUtils::TraceRoute(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceUtils_TraceRoute_m23CCB6FD6F82AEB947547C9E4AB6FC2C8CD06E7C (String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_maxTTL, int32_t ___4_count, int32_t ___5_interval, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.TraceUtils/xfd6b00b29231a30d::.ctor(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xfd6b00b29231a30d__ctor_m7DAFBAFC6194062D87C25C2ECCE5E213742C4B34 (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_maxTTL, int32_t ___4_count, int32_t ___5_interval, const RuntimeMethod* method) ;
// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718 (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, RuntimeObject* ___0_parameter, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMP_OVER_CALLBACK::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_inline (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMP_CALLBACK::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.String::PadRight(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543 (String_t* __this, int32_t ___0_totalWidth, Il2CppChar ___1_paddingChar, const RuntimeMethod* method) ;
// TianMa.Tools.IPPacket TianMa.Tools.ICMPSocket::Send(System.String,TianMa.Tools.ICMPPacket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* ICMPSocket_Send_m2C6F8F4360F7FCDDD30CE55F5992537C58E84806 (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, String_t* ___0_Host, ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* ___1_ICMP, int32_t ___2_TTL, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::PadLeft(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_PadLeft_m7D2B2AFB4B4A47AEE660533BA1510EF35A27E94D (String_t* __this, int32_t ___0_totalWidth, const RuntimeMethod* method) ;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53 (String_t* ___0_hostNameOrAddress, const RuntimeMethod* method) ;
// System.String System.Net.IPHostEntry::get_HostName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPHostEntry_get_HostName_m04050E3890C11BC5CB02BF48FBDD8AB4938FC390_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMPPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPPacket__ctor_m6303509EA3C98A272C3B904724695E22160B34B3 (ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* __this, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMPEcho::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPEcho__ctor_m80DEA99DD5CF94CF154D1F84E37703629E2D2E80 (ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.ICMPSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPSocket__ctor_m80761A1A68FF276E7E7D5B91FABBBE2F5A071A3D (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, const RuntimeMethod* method) ;
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_x10f4d88af727adbc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_x10f4d88af727adbc_mFD3B50E125BC475C0EECBF02D88D3C843C1EF303_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) ;
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_xecea0e4ef40edfa5()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xecea0e4ef40edfa5_mB10ECF76EF298C03C643E22CD57F4EE33A3D7500_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) ;
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_xbfb5b0208f9d4d6a()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xbfb5b0208f9d4d6a_m4527899399C3B3B9A7184652FAEFC83F096E853A_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) ;
// System.String TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_x64f259306803411c()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* xfd6b00b29231a30d_get_x64f259306803411c_mCD391FCC98C5F44BBD396100AA139A05DD9D7A0C_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) ;
// System.Void TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::.ctor(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3f0eed751b012ca1__ctor_mD79AE77E9E7719A26756418A3C80F838FB91C036 (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_count, int32_t ___4_interval, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_x10f4d88af727adbc()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_x10f4d88af727adbc_m605AFA9BA776BDE6A2EA513EE3E470E3B14374E4_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) ;
// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_xecea0e4ef40edfa5()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_xecea0e4ef40edfa5_mD18046EFECAEA3880BE0F9D2588FCEBA8A1D7A47_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) ;
// System.String TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_x64f259306803411c()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* x3f0eed751b012ca1_get_x64f259306803411c_m9C075EDAA855E89176E1DB922EBD42A5FE2930C8_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Server.Tools.MD5Helper::get_md5_string(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5Helper_get_md5_string_m92354D1DE4D2A6E3DBE760A2997E0D11432F5879 (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = MD5Core_GetHash_m525D89B8BF67FD200B98DE6722F7EAEB5D52EF52(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_2, NULL);
		return L_3;
	}
}
// System.String Server.Tools.MD5Helper::get_md5_string(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5Helper_get_md5_string_m618506D7D43F42862CF0D9A8BBADBF4E03590A34 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = MD5Core_GetHash_m965664E9F7937540FDF2F1A0395F94ACC51F1541(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Server.Tools.MD5Helper::get_md5_bytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Helper_get_md5_bytes_mCA446D7106C4439E31CA8F5999F9B2AB3A6F2631 (String_t* ___0_str, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = MD5Core_GetHash_m525D89B8BF67FD200B98DE6722F7EAEB5D52EF52(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] Server.Tools.MD5Helper::get_md5_bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Helper_get_md5_bytes_m57B6AE392CFDCCFEC61B729F64B506F30FBC297A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = MD5Core_GetHash_m965664E9F7937540FDF2F1A0395F94ACC51F1541(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.Void Server.Tools.MD5Helper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Helper__ctor_m3571FF467224EA555AB173C4D9E160B3AE32933D (MD5Helper_t5ABBCA1AE545DAC9F5204C2A9A353F11AA9648E9* __this, const RuntimeMethod* method) 
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
// System.Void Server.Tools.MD5Managed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Managed__ctor_mA785FCAF6FA39DF11B97A9E370B1271C31AE9FC4 (MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E* __this, const RuntimeMethod* method) 
{
	{
		MD5__ctor_m2ADB9C1AC9A8A73EC6E896B4EFCD451192B166F3(__this, NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashSizeValue_1 = ((int32_t)128);
		VirtualActionInvoker0::Invoke(18 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, __this);
		return;
	}
}
// System.Void Server.Tools.MD5Managed::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Managed_Initialize_m2D10435B569ED5A0D094C3C75F1E021F2F0EE9D4 (MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____x4a3f0a05c02f235f_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____x4a3f0a05c02f235f_4), (void*)L_0);
		if (((int32_t)-1))
		{
			goto IL_0067;
		}
	}

IL_0014:
	{
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_1 = (&__this->____xbcc0924abad481fb_5);
		il2cpp_codegen_initobj(L_1, sizeof(x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860));
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_2 = (&__this->____xbcc0924abad481fb_5);
		L_2->___xda71bf6f7c07c3bc_0 = ((int32_t)1732584193);
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_3 = (&__this->____xbcc0924abad481fb_5);
		L_3->___x8e8f6cc6a0756b05_1 = ((int32_t)-271733879);
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_4 = (&__this->____xbcc0924abad481fb_5);
		L_4->___x857912840ffd015f_2 = ((int32_t)-1732584194);
	}

IL_0050:
	{
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_5 = (&__this->____xbcc0924abad481fb_5);
		L_5->___x5d593cee9d844848_3 = ((int32_t)271733878);
		if (((int32_t)-2147483648LL))
		{
			goto IL_007b;
		}
	}

IL_0067:
	{
		__this->____xff884decc91dea16_7 = 0;
		if (0)
		{
			goto IL_0050;
		}
	}
	{
		__this->____x5808173d78349062_6 = ((int64_t)0);
		goto IL_0014;
	}

IL_007b:
	{
		return;
	}
}
// System.Void Server.Tools.MD5Managed::HashCore(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Managed_HashCore_mB9E856AE7521B656C7E92CB7285F217A15340840 (MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_ibStart, int32_t ___2_cbSize, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = ___1_ibStart;
		V_0 = L_0;
		goto IL_013d;
	}

IL_0007:
	{
		goto IL_0011;
	}

IL_0009:
	{
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)64))))
		{
			goto IL_010b;
		}
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____x4a3f0a05c02f235f_4;
		int32_t L_5 = __this->____xff884decc91dea16_7;
		int32_t L_6 = ___2_cbSize;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, L_5, L_6, NULL);
		int32_t L_7 = V_1;
		__this->____xff884decc91dea16_7 = L_7;
	}

IL_002c:
	{
		int64_t L_8 = __this->____x5808173d78349062_6;
		int32_t L_9 = ___2_cbSize;
		__this->____x5808173d78349062_6 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)L_9)));
		goto IL_0168;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____x4a3f0a05c02f235f_4;
		int32_t L_13 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, L_13, NULL);
		goto IL_002c;
	}

IL_0051:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		V_2 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_14), ((int32_t)(uint32_t)L_15)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_002c;
		}
	}

IL_0069:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)64))))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_18 = ___1_ibStart;
		int32_t L_19 = V_1;
		V_2 = (bool)(false? 1 : 0);
		bool L_20 = V_2;
		if (L_20)
		{
			goto IL_013d;
		}
	}
	{
		int32_t L_21 = V_1;
		__this->____xff884decc91dea16_7 = L_21;
		if (!0)
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_22 = V_1;
		int32_t L_23 = ___2_cbSize;
		V_2 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_22), ((int32_t)(uint32_t)L_23)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_00f1;
		}
	}

IL_00ab:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_25, ((int32_t)64)));
		goto IL_0069;
	}

IL_00b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_array;
		int32_t L_27 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->____x4a3f0a05c02f235f_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, L_27, (RuntimeArray*)L_28, 0, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_array;
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_30 = (&__this->____xbcc0924abad481fb_5);
		int32_t L_31 = V_0;
		MD5Core_x27a41f9a819cf224_m98F1B394B3B136B5BDB87AB78EADF874AE792A90(L_29, L_30, L_31, NULL);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)64)));
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)64)));
		int32_t L_34 = ___2_cbSize;
		int32_t L_35 = ___2_cbSize;
		V_2 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_34), ((int32_t)(uint32_t)L_35)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_36 = V_2;
		if (!L_36)
		{
			goto IL_00ff;
		}
	}

IL_00f1:
	{
		int32_t L_37 = V_0;
		int32_t L_38 = __this->____xff884decc91dea16_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_37, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_38))));
		goto IL_00ab;
	}

IL_00ff:
	{
		goto IL_0051;
	}

IL_0104:
	{
		goto IL_013b;
	}

IL_0106:
	{
		goto IL_0009;
	}

IL_010b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___0_array;
		int32_t L_40 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->____x4a3f0a05c02f235f_4;
		int32_t L_42 = __this->____xff884decc91dea16_7;
		int32_t L_43 = __this->____xff884decc91dea16_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, L_40, (RuntimeArray*)L_41, L_42, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_43)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->____x4a3f0a05c02f235f_4;
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860* L_45 = (&__this->____xbcc0924abad481fb_5);
		MD5Core_x27a41f9a819cf224_m98F1B394B3B136B5BDB87AB78EADF874AE792A90(L_44, L_45, 0, NULL);
		goto IL_00f1;
	}

IL_013b:
	{
		goto IL_0148;
	}

IL_013d:
	{
		int32_t L_46 = __this->____xff884decc91dea16_7;
		int32_t L_47 = ___2_cbSize;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		goto IL_0106;
	}

IL_0148:
	{
		int32_t L_48 = ___1_ibStart;
		V_2 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_48)|((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_0007;
	}

IL_0168:
	{
		return;
	}
}
// System.Byte[] Server.Tools.MD5Managed::HashFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MD5Managed_HashFinal_m074169FEA84B9462AD7F8165CFB0B78D68D12BF1 (MD5Managed_t8C5B90D6F2BDD3EB1564D599962C0F9AA105204E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____x4a3f0a05c02f235f_4;
		int32_t L_1 = __this->____xff884decc91dea16_7;
		x1408d8967d2f1af2_t1756D50C6E9A5C3F0F96D22B2015C36755910860 L_2 = __this->____xbcc0924abad481fb_5;
		int64_t L_3 = __this->____x5808173d78349062_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = MD5Core_x8259195df2f3ddaa_m3B33651CEB15A6C25C1C87364A07915EA56072B7(L_0, 0, L_1, L_2, ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)8))), NULL);
		((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue_2), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D*)__this)->___HashValue_2;
		return L_5;
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
// System.Object MUJson::jsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MUJson_jsonDecode_m48AE24FFC7828FEF4575E04E48CA92DF2B2E0BAE (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		String_t* L_0 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14), (void*)L_0);
		goto IL_0081;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13 = (-1);
		goto IL_0019;
	}

IL_0013:
	{
		int32_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13 = L_1;
	}

IL_0019:
	{
		RuntimeObject* L_2 = V_3;
		return L_2;
	}

IL_001b:
	{
		String_t* L_3 = ___0_json;
		if (L_3)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_008b;
	}

IL_0020:
	{
		V_1 = 0;
		V_2 = (bool)1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = MUJson_parseValue_m0CB405C51AC2594199648A4A2C919CE5DCEF9942(L_4, (&V_1), (&V_2), NULL);
		V_3 = L_5;
		bool L_6 = V_2;
		int32_t L_7 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_6), ((int32_t)(uint32_t)L_7)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_0081;
		}
	}
	{
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0013;
		}
	}
	{
		goto IL_006d;
	}

IL_004c:
	{
		String_t* L_10 = ___0_json;
		NullCheck(L_10);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11;
		L_11 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_10, NULL);
		V_0 = L_11;
		bool L_12 = V_2;
		bool L_13 = V_2;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_12), ((int32_t)(uint32_t)L_13)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0020;
	}

IL_006d:
	{
		int32_t L_15 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_15)&0))) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_0086;
		}
	}

IL_0081:
	{
		goto IL_001b;
	}

IL_0086:
	{
		goto IL_000b;
	}

IL_008b:
	{
		return NULL;
	}
}
// System.String MUJson::jsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MUJson_jsonEncode_m88F25A6DB6590528787986F86113DE99628F2BEC (RuntimeObject* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)2000), NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_json;
		StringBuilder_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = MUJson_serializeValue_m2E10E2227E04BB189A2FE555C72F3C036BD15F81(L_1, L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0018:
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		return L_6;
	}
}
// System.Boolean MUJson::lastDecodeSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_lastDecodeSuccessful_m2AE619CB24507336FDFC099B50E337D541934339 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13;
		return (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Int32 MUJson::getLastErrorIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_getLastErrorIndex_m8791C4AD1BA35C6166AB34B4919871BC0699AA31 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13;
		return L_0;
	}
}
// System.String MUJson::getLastErrorSnippet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MUJson_getLastErrorSnippet_m94B98233F6C23E5B51410A8DF055C96AF593DEA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_1 = V_0;
		V_2 = (bool)(false? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0097;
		}
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		String_t* L_3 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		V_2 = (bool)(false? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_8 = V_1;
		V_2 = (bool)(false? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_00a2;
		}
	}
	{
		goto IL_0097;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_10 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)15)));
		goto IL_0068;
	}

IL_0064:
	{
		V_0 = 0;
		goto IL_006c;
	}

IL_0068:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0064;
		}
	}

IL_006c:
	{
		int32_t L_12 = V_1;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		String_t* L_13 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_15 = V_0;
		V_2 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_15)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0095;
		}
	}

IL_008b:
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_17 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_17, 5));
		goto IL_0059;
	}

IL_0095:
	{
		goto IL_009d;
	}

IL_0097:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_009d:
	{
		goto IL_0020;
	}

IL_00a2:
	{
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		String_t* L_18 = ((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		NullCheck(L_18);
		String_t* L_22;
		L_22 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_18, L_19, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_20, L_21)), 1)), NULL);
		return L_22;
	}
}
// System.Collections.Hashtable MUJson::parseObject(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* MUJson_parseObject_mC981252A3D5B8D079C73DECFEAE1A98E3A369447 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		V_0 = L_0;
		bool L_1 = V_4;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_1)&0))) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_6;
		if (L_2)
		{
			goto IL_014d;
		}
	}

IL_001d:
	{
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_4 = V_1;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_4)|((int32_t)2147483647LL)))) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_6;
		if (L_5)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_017a;
	}

IL_0043:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0045:
	{
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		goto IL_004b;
	}

IL_004b:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7 = V_0;
		String_t* L_8 = V_3;
		RuntimeObject* L_9 = V_5;
		NullCheck(L_7);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, L_8, L_9);
		if (!0)
		{
			goto IL_0067;
		}
	}

IL_0057:
	{
		V_4 = (bool)1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___0_json;
		int32_t* L_11 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = MUJson_parseValue_m0CB405C51AC2594199648A4A2C919CE5DCEF9942(L_10, L_11, (&V_4), NULL);
		V_5 = L_12;
		goto IL_0045;
	}

IL_0067:
	{
		goto IL_00c3;
	}

IL_0069:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___0_json;
		int32_t* L_14 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_15;
		L_15 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_13, L_14, NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_0057;
		}
	}
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0077:
	{
		bool L_17 = V_2;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_17)|((int32_t)3)))) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_19 = V_1;
		V_6 = (bool)(false? 1 : 0);
		bool L_20 = V_6;
		if (L_20)
		{
			goto IL_00c8;
		}
	}

IL_00a1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___0_json;
		int32_t* L_22 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = MUJson_parseString_m75E9CE799D638CC2B6034D1EE9F5A9234F44F274(L_21, L_22, NULL);
		V_3 = L_23;
		bool L_24 = V_4;
		V_6 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_24)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_25 = V_6;
		if (L_25)
		{
			goto IL_0142;
		}
	}

IL_00be:
	{
		String_t* L_26 = V_3;
		if (L_26)
		{
			goto IL_0069;
		}
	}

IL_00c1:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_00c3:
	{
		goto IL_0175;
	}

IL_00c8:
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_00fa;
		}
	}
	{
		bool L_28 = V_4;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_28)&0))) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_00a1;
		}
	}
	{
		bool L_30 = V_2;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_30)|((int32_t)4)))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_0104;
		}
	}

IL_00f8:
	{
		goto IL_00c8;
	}

IL_00fa:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = ___0_json;
		int32_t* L_33 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_32, L_33, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_35 = V_0;
		return L_35;
	}

IL_0104:
	{
		if (!0)
		{
			goto IL_016f;
		}
	}
	{
		goto IL_014d;
	}

IL_010c:
	{
		int32_t L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)6)))
		{
			goto IL_011b;
		}
	}
	{
		goto IL_0140;
	}

IL_0112:
	{
		if (!((int32_t)2147483647LL))
		{
			goto IL_0146;
		}
	}
	{
		goto IL_010c;
	}

IL_011b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___0_json;
		int32_t* L_38 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_37, L_38, NULL);
		bool L_40 = V_4;
		bool L_41 = V_2;
		V_6 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_40), ((int32_t)(uint32_t)L_41)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_42 = V_6;
		if (L_42)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_001d;
	}

IL_0140:
	{
		goto IL_014b;
	}

IL_0142:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0144:
	{
		goto IL_0112;
	}

IL_0146:
	{
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_010c;
	}

IL_014b:
	{
		goto IL_016a;
	}

IL_014d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = ___0_json;
		int32_t* L_45 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_46;
		L_46 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_44, L_45, NULL);
		if (0)
		{
			goto IL_011b;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_001d;
	}

IL_015f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = ___0_json;
		int32_t* L_48 = ___1_index;
		int32_t L_49 = *((int32_t*)L_48);
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_50;
		L_50 = MUJson_lookAhead_mE089ABFF848D88F8CFBA1CE55FBDF2854F62FC90(L_47, L_49, NULL);
		V_1 = L_50;
		goto IL_0146;
	}

IL_016a:
	{
		goto IL_00f8;
	}

IL_016f:
	{
		if (!0)
		{
			goto IL_0077;
		}
	}

IL_0175:
	{
		goto IL_001d;
	}

IL_017a:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_51 = V_0;
		return L_51;
	}
}
// System.Collections.ArrayList MUJson::parseArray(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* MUJson_parseArray_mB3EEA1CD2DAD866590989B9DF42B4C92BE1A8CBD (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		V_0 = L_0;
		goto IL_007c;
	}

IL_000b:
	{
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_0010:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		RuntimeObject* L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
	}

IL_0019:
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_003d;
	}

IL_001e:
	{
		bool L_6 = V_1;
		V_5 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_6)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_7 = V_5;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_json;
		int32_t* L_9 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = MUJson_parseValue_m0CB405C51AC2594199648A4A2C919CE5DCEF9942(L_8, L_9, (&V_3), NULL);
		V_4 = L_10;
		goto IL_000b;
	}

IL_003d:
	{
		goto IL_00be;
	}

IL_0042:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___0_json;
		int32_t* L_12 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_11, L_12, NULL);
		goto IL_00be;
	}

IL_004f:
	{
		V_3 = (bool)1;
		goto IL_00b9;
	}

IL_0056:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___0_json;
		int32_t* L_15 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_14, L_15, NULL);
		goto IL_0019;
	}

IL_0060:
	{
		int32_t L_17 = V_2;
		if ((!(((uint32_t)L_17) == ((uint32_t)4))))
		{
			goto IL_004f;
		}
	}
	{
		goto IL_00b4;
	}

IL_0066:
	{
		goto IL_0019;
	}

IL_0068:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___0_json;
		int32_t* L_19 = ___1_index;
		int32_t L_20 = *((int32_t*)L_19);
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = MUJson_lookAhead_mE089ABFF848D88F8CFBA1CE55FBDF2854F62FC90(L_18, L_20, NULL);
		V_2 = L_21;
		int32_t L_22 = V_2;
		if (L_22)
		{
			goto IL_0076;
		}
	}
	{
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_0076:
	{
		int32_t L_23 = V_2;
		if ((!(((uint32_t)L_23) == ((uint32_t)6))))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_00b2;
	}

IL_007c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = ___0_json;
		int32_t* L_25 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_24, L_25, NULL);
		V_1 = (bool)0;
		bool L_27 = V_3;
		int32_t L_28 = V_2;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_27), ((int32_t)(uint32_t)L_28)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_30 = V_2;
		V_5 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_30)&0))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_0066;
		}
	}

IL_00b2:
	{
		goto IL_0056;
	}

IL_00b4:
	{
		goto IL_0042;
	}

IL_00b9:
	{
		goto IL_001e;
	}

IL_00be:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_32 = V_0;
		return L_32;
	}
}
// System.Object MUJson::parseValue(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MUJson_parseValue_m0CB405C51AC2594199648A4A2C919CE5DCEF9942 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, bool* ___2_success, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_json;
		int32_t* L_1 = ___1_index;
		int32_t L_2 = *((int32_t*)L_1);
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = MUJson_lookAhead_mE089ABFF848D88F8CFBA1CE55FBDF2854F62FC90(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_007f;
	}

IL_000b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_json;
		int32_t* L_5 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A, NULL);
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0023:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___0_json;
		int32_t* L_11 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_10, L_11, NULL);
		return NULL;
	}

IL_002d:
	{
		bool* L_13 = ___2_success;
		*((int8_t*)L_13) = (int8_t)0;
		goto IL_0067;
	}

IL_0032:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___0_json;
		int32_t* L_15 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		double L_16;
		L_16 = MUJson_parseNumber_mD4A9E65F874D3748E227DB9CD84ECB5C001A6B49(L_14, L_15, NULL);
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		return L_18;
	}

IL_003f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = ___0_json;
		int32_t* L_20 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_21;
		L_21 = MUJson_parseObject_mC981252A3D5B8D079C73DECFEAE1A98E3A369447(L_19, L_20, NULL);
		return L_21;
	}

IL_0047:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___0_json;
		int32_t* L_23 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_24;
		L_24 = MUJson_parseArray_mB3EEA1CD2DAD866590989B9DF42B4C92BE1A8CBD(L_22, L_23, NULL);
		return L_24;
	}

IL_004f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___0_json;
		int32_t* L_26 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_25, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8, NULL);
		bool L_29 = L_28;
		RuntimeObject* L_30 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_29);
		return L_30;
	}

IL_0067:
	{
		int32_t L_31 = V_0;
		V_1 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_31)|((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_1;
		if (!L_32)
		{
			goto IL_00da;
		}
	}

IL_007f:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = V_0;
		V_1 = (bool)(false? 1 : 0);
		bool L_35 = V_1;
		if (L_35)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_36 = V_0;
		switch (L_36)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_002d;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_002d;
			}
			case 7:
			{
				goto IL_00d2;
			}
			case 8:
			{
				goto IL_0032;
			}
			case 9:
			{
				goto IL_004f;
			}
			case 10:
			{
				goto IL_000b;
			}
			case 11:
			{
				goto IL_0023;
			}
		}
	}
	{
		goto IL_002d;
	}

IL_00d2:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___0_json;
		int32_t* L_38 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = MUJson_parseString_m75E9CE799D638CC2B6034D1EE9F5A9234F44F274(L_37, L_38, NULL);
		return L_39;
	}

IL_00da:
	{
		return NULL;
	}
}
// System.String MUJson::parseString(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MUJson_parseString_m75E9CE799D638CC2B6034D1EE9F5A9234F44F274 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		if (((int32_t)2147483647LL))
		{
			goto IL_02fa;
		}
	}
	{
		goto IL_011e;
	}

IL_0015:
	{
		if (!((int32_t)-2))
		{
			goto IL_02fa;
		}
	}

IL_001f:
	{
		return (String_t*)NULL;
	}

IL_0021:
	{
		goto IL_031b;
	}

IL_0026:
	{
		bool L_0 = V_2;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0162;
	}

IL_002e:
	{
		int32_t L_1 = V_3;
		if ((((int32_t)L_1) >= ((int32_t)4)))
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0026;
	}

IL_0037:
	{
		bool L_2 = V_2;
		if (L_2)
		{
			goto IL_0052;
		}
	}
	{
		int32_t* L_3 = ___1_index;
		int32_t L_4 = *((int32_t*)L_3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_json;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_02d6;
		}
	}
	{
		goto IL_0026;
	}

IL_0046:
	{
		goto IL_0037;
	}

IL_0048:
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_0037;
	}

IL_0052:
	{
		goto IL_0026;
	}

IL_0054:
	{
		if (!((int32_t)2))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_7 = V_0;
		Il2CppChar L_8 = V_1;
		Il2CppChar L_9 = L_8;
		RuntimeObject* L_10 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_7, L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_3;
		bool L_13 = V_2;
		V_8 = (bool)(false? 1 : 0);
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_00b1;
	}

IL_0084:
	{
		String_t* L_15 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_4;
		String_t* L_17;
		L_17 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_15, _stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F, L_17, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
		V_0 = L_18;
		int32_t* L_19 = ___1_index;
		int32_t* L_20 = L_19;
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 4));
		goto IL_0037;
	}

IL_00a7:
	{
		Il2CppChar L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)92))))
		{
			goto IL_02ca;
		}
	}
	{
		goto IL_0054;
	}

IL_00b1:
	{
		goto IL_015d;
	}

IL_00b6:
	{
		int32_t L_23 = V_7;
		bool L_24 = V_2;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_23), ((int32_t)(uint32_t)L_24)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_0142;
	}

IL_00d6:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___0_json;
		NullCheck(L_26);
		int32_t* L_27 = ___1_index;
		int32_t L_28 = *((int32_t*)L_27);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), L_28));
		goto IL_002e;
	}

IL_00e2:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_29;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ___0_json;
		int32_t* L_31 = ___1_index;
		int32_t L_32 = *((int32_t*)L_31);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_30, L_32, (RuntimeArray*)L_33, 0, 4, NULL);
		goto IL_011c;
	}

IL_00f8:
	{
		int32_t L_34 = V_6;
		V_8 = (bool)(false? 1 : 0);
		bool L_35 = V_8;
		if (L_35)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0037;
	}

IL_0112:
	{
		Il2CppChar L_36 = V_1;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)116))))
		{
			goto IL_012c;
		}
	}
	{
		goto IL_0048;
	}

IL_011c:
	{
		goto IL_013d;
	}

IL_011e:
	{
		if (((int32_t)15))
		{
			goto IL_0112;
		}
	}

IL_0125:
	{
		Il2CppChar L_37 = V_1;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)114))))
		{
			goto IL_0167;
		}
	}
	{
		goto IL_0112;
	}

IL_012c:
	{
		String_t* L_38 = V_0;
		Il2CppChar L_39 = ((Il2CppChar)((int32_t)9));
		RuntimeObject* L_40 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_39);
		String_t* L_41;
		L_41 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_38, L_40, NULL);
		V_0 = L_41;
		if (!0)
		{
			goto IL_00f8;
		}
	}

IL_013d:
	{
		goto IL_00b6;
	}

IL_0142:
	{
		int32_t L_42 = V_5;
		bool L_43 = V_2;
		V_8 = (bool)(false? 1 : 0);
		bool L_44 = V_8;
		if (!L_44)
		{
			goto IL_0084;
		}
	}

IL_015d:
	{
		goto IL_0015;
	}

IL_0162:
	{
		goto IL_031b;
	}

IL_0167:
	{
		String_t* L_45 = V_0;
		Il2CppChar L_46 = ((Il2CppChar)((int32_t)13));
		RuntimeObject* L_47 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48;
		L_48 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_45, L_47, NULL);
		V_0 = L_48;
		goto IL_0037;
	}

IL_017a:
	{
		Il2CppChar L_49 = V_1;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)110))))
		{
			goto IL_01a4;
		}
	}
	{
		goto IL_0125;
	}

IL_0181:
	{
		goto IL_0037;
	}

IL_0186:
	{
		goto IL_0037;
	}

IL_018b:
	{
		Il2CppChar L_50 = V_1;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)102))))
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_51 = V_7;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_51)&0))) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_8;
		if (L_52)
		{
			goto IL_017a;
		}
	}

IL_01a4:
	{
		String_t* L_53 = V_0;
		Il2CppChar L_54 = ((Il2CppChar)((int32_t)10));
		RuntimeObject* L_55 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_54);
		String_t* L_56;
		L_56 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_53, L_55, NULL);
		V_0 = L_56;
		int32_t L_57 = V_3;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_57)&0))) == ((int32_t)0))? 1 : 0);
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_0112;
		}
	}
	{
		goto IL_01eb;
	}

IL_01cb:
	{
		String_t* L_59 = V_0;
		Il2CppChar L_60 = ((Il2CppChar)((int32_t)12));
		RuntimeObject* L_61 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_60);
		String_t* L_62;
		L_62 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_59, L_61, NULL);
		V_0 = L_62;
		bool L_63 = V_2;
		V_8 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_63)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_64 = V_8;
		if (!L_64)
		{
			goto IL_0186;
		}
	}

IL_01eb:
	{
		int32_t L_65 = V_6;
		int32_t L_66 = V_5;
		V_8 = (bool)(false? 1 : 0);
		bool L_67 = V_8;
		if (!L_67)
		{
			goto IL_0181;
		}
	}
	{
		goto IL_0316;
	}

IL_020b:
	{
		Il2CppChar L_68 = V_1;
		if ((!(((uint32_t)L_68) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_69 = V_0;
		Il2CppChar L_70 = ((Il2CppChar)8);
		RuntimeObject* L_71 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_70);
		String_t* L_72;
		L_72 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_69, L_71, NULL);
		V_0 = L_72;
		goto IL_0037;
	}

IL_0225:
	{
		Il2CppChar L_73 = V_1;
		if ((((int32_t)L_73) == ((int32_t)((int32_t)47))))
		{
			goto IL_0238;
		}
	}
	{
		goto IL_020b;
	}

IL_022c:
	{
		goto IL_0037;
	}

IL_0231:
	{
		Il2CppChar L_74 = V_1;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)92))))
		{
			goto IL_0257;
		}
	}
	{
		goto IL_0225;
	}

IL_0238:
	{
		String_t* L_75 = V_0;
		Il2CppChar L_76 = ((Il2CppChar)((int32_t)47));
		RuntimeObject* L_77 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_76);
		String_t* L_78;
		L_78 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_75, L_77, NULL);
		V_0 = L_78;
		goto IL_0037;
	}

IL_024b:
	{
		goto IL_0037;
	}

IL_0250:
	{
		Il2CppChar L_79 = V_1;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)34))))
		{
			goto IL_0269;
		}
	}
	{
		goto IL_0231;
	}

IL_0257:
	{
		String_t* L_80 = V_0;
		Il2CppChar L_81 = ((Il2CppChar)((int32_t)92));
		RuntimeObject* L_82 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_81);
		String_t* L_83;
		L_83 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_80, L_82, NULL);
		V_0 = L_83;
		goto IL_0279;
	}

IL_0267:
	{
		goto IL_0250;
	}

IL_0269:
	{
		String_t* L_84 = V_0;
		Il2CppChar L_85 = ((Il2CppChar)((int32_t)34));
		RuntimeObject* L_86 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_85);
		String_t* L_87;
		L_87 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_84, L_86, NULL);
		V_0 = L_87;
		goto IL_024b;
	}

IL_0279:
	{
		goto IL_022c;
	}

IL_027b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_88 = ___0_json;
		int32_t* L_89 = ___1_index;
		int32_t* L_90 = L_89;
		int32_t L_91 = *((int32_t*)L_90);
		int32_t L_92 = L_91;
		V_7 = L_92;
		*((int32_t*)L_90) = (int32_t)((int32_t)il2cpp_codegen_add(L_92, 1));
		int32_t L_93 = V_7;
		NullCheck(L_88);
		int32_t L_94 = L_93;
		uint16_t L_95 = (uint16_t)(L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_1 = L_95;
		int32_t L_96 = V_6;
		int32_t L_97 = V_7;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_96), ((int32_t)(uint32_t)L_97)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_98 = V_8;
		if (L_98)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_99 = V_6;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_99)|((int32_t)-1)))) == ((int32_t)0))? 1 : 0);
		bool L_100 = V_8;
		if (L_100)
		{
			goto IL_0125;
		}
	}
	{
		goto IL_0267;
	}

IL_02c1:
	{
		if (!((int32_t)15))
		{
			goto IL_027b;
		}
	}
	{
		goto IL_02f5;
	}

IL_02ca:
	{
		int32_t* L_101 = ___1_index;
		int32_t L_102 = *((int32_t*)L_101);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_103 = ___0_json;
		NullCheck(L_103);
		if ((((int32_t)L_102) == ((int32_t)((int32_t)(((RuntimeArray*)L_103)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_02f3;
	}

IL_02d6:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_104 = ___0_json;
		int32_t* L_105 = ___1_index;
		int32_t* L_106 = L_105;
		int32_t L_107 = *((int32_t*)L_106);
		int32_t L_108 = L_107;
		V_6 = L_108;
		*((int32_t*)L_106) = (int32_t)((int32_t)il2cpp_codegen_add(L_108, 1));
		int32_t L_109 = V_6;
		NullCheck(L_104);
		int32_t L_110 = L_109;
		uint16_t L_111 = (uint16_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_1 = L_111;
		Il2CppChar L_112 = V_1;
		if ((!(((uint32_t)L_112) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_00a7;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0026;
	}

IL_02f3:
	{
		goto IL_02c1;
	}

IL_02f5:
	{
		goto IL_027b;
	}

IL_02fa:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_113 = ___0_json;
		int32_t* L_114 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_eatWhitespace_m6B1EC39F53CE9DE5EB0EA39A43A051E5F0D83FA0(L_113, L_114, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_115 = ___0_json;
		int32_t* L_116 = ___1_index;
		int32_t* L_117 = L_116;
		int32_t L_118 = *((int32_t*)L_117);
		int32_t L_119 = L_118;
		V_5 = L_119;
		*((int32_t*)L_117) = (int32_t)((int32_t)il2cpp_codegen_add(L_119, 1));
		int32_t L_120 = V_5;
		NullCheck(L_115);
		int32_t L_121 = L_120;
		uint16_t L_122 = (uint16_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_1 = L_122;
		V_2 = (bool)0;
		goto IL_0037;
	}

IL_0316:
	{
		goto IL_011e;
	}

IL_031b:
	{
		String_t* L_123 = V_0;
		return L_123;
	}
}
// System.Double MUJson::parseNumber(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double MUJson_parseNumber_mD4A9E65F874D3748E227DB9CD84ECB5C001A6B49 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_json;
		int32_t* L_1 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_eatWhitespace_m6B1EC39F53CE9DE5EB0EA39A43A051E5F0D83FA0(L_0, L_1, NULL);
		if (!((int32_t)-2147483648LL))
		{
			goto IL_001e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_json;
		int32_t* L_3 = ___1_index;
		int32_t L_4 = *((int32_t*)L_3);
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = MUJson_getLastIndexOfNumber_mBE3701E0A235C19CF281A8C13512F53B58CBABB8(L_2, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		int32_t* L_7 = ___1_index;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, L_8)), 1));
	}

IL_001e:
	{
		int32_t L_9 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_2 = L_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___0_json;
		int32_t* L_12 = ___1_index;
		int32_t L_13 = *((int32_t*)L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_2;
		int32_t L_15 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, L_13, (RuntimeArray*)L_14, 0, L_15, NULL);
		int32_t* L_16 = ___1_index;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = V_2;
		String_t* L_19;
		L_19 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_18, NULL);
		double L_20;
		L_20 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_19, NULL);
		return L_20;
	}
}
// System.Int32 MUJson::getLastIndexOfNumber(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_getLastIndexOfNumber_mBE3701E0A235C19CF281A8C13512F53B58CBABB8 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		goto IL_0032;
	}

IL_0004:
	{
		goto IL_0008;
	}

IL_0006:
	{
		goto IL_003a;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_json;
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___0_json;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_6, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		V_1 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_8)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0008;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		goto IL_0008;
	}

IL_0034:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		goto IL_0004;
	}

IL_003a:
	{
		int32_t L_11 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}
}
// System.Void MUJson::eatWhitespace(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_eatWhitespace_m6B1EC39F53CE9DE5EB0EA39A43A051E5F0D83FA0 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001a;
	}

IL_0002:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_json;
		int32_t* L_1 = ___1_index;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t* L_6 = ___1_index;
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001a:
	{
		int32_t* L_9 = ___1_index;
		int32_t L_10 = *((int32_t*)L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___0_json;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Int32 MUJson::lookAhead(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_lookAhead_mE089ABFF848D88F8CFBA1CE55FBDF2854F62FC90 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_json;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF(L_1, (&V_0), NULL);
		return L_2;
	}
}
// System.Int32 MUJson::nextToken(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MUJson_nextToken_mABB24A8878FA34BF6DE5FABC8EB6707291C4FDEF (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_json, int32_t* ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_json;
		int32_t* L_1 = ___1_index;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_eatWhitespace_m6B1EC39F53CE9DE5EB0EA39A43A051E5F0D83FA0(L_0, L_1, NULL);
		goto IL_0312;
	}

IL_000c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_json;
		int32_t* L_3 = ___1_index;
		int32_t L_4 = *((int32_t*)L_3);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 3));
		uint16_t L_6 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_020f;
	}

IL_001e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_json;
		int32_t* L_8 = ___1_index;
		int32_t L_9 = *((int32_t*)L_8);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint16_t L_11 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_002f;
	}

IL_002a:
	{
		goto IL_033a;
	}

IL_002f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ___0_json;
		int32_t* L_13 = ___1_index;
		int32_t L_14 = *((int32_t*)L_13);
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 2));
		uint16_t L_16 = (uint16_t)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_005a;
		}
	}

IL_0051:
	{
		if (((int32_t)-2))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_001e;
	}

IL_005a:
	{
		goto IL_0153;
	}

IL_005f:
	{
		goto IL_001e;
	}

IL_0061:
	{
		goto IL_033a;
	}

IL_0066:
	{
		goto IL_033a;
	}

IL_006b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ___0_json;
		int32_t* L_21 = ___1_index;
		int32_t L_22 = *((int32_t*)L_21);
		NullCheck(L_20);
		int32_t L_23 = L_22;
		uint16_t L_24 = (uint16_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_0092;
	}

IL_0075:
	{
		goto IL_033a;
	}

IL_007a:
	{
		int32_t L_25 = V_1;
		if ((((int32_t)L_25) < ((int32_t)4)))
		{
			goto IL_0075;
		}
	}
	{
		if (!0)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0086;
	}

IL_0083:
	{
		return ((int32_t)11);
	}

IL_0086:
	{
		goto IL_0090;
	}

IL_0088:
	{
		int32_t* L_26 = ___1_index;
		int32_t* L_27 = L_26;
		int32_t L_28 = *((int32_t*)L_27);
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_28, 4));
		goto IL_0083;
	}

IL_0090:
	{
		goto IL_0066;
	}

IL_0092:
	{
		int32_t L_29 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_29)&0))) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_0117;
	}

IL_00ae:
	{
		int32_t L_31 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_31)|((int32_t)255)))) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_3;
		if (L_32)
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_007a;
	}

IL_00c8:
	{
		goto IL_00ae;
	}

IL_00ca:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___0_json;
		int32_t* L_34 = ___1_index;
		int32_t L_35 = *((int32_t*)L_34);
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		uint16_t L_37 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_37) == ((int32_t)((int32_t)117))))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_007a;
	}

IL_00d6:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_38), ((int32_t)(uint32_t)L_39)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_40 = V_3;
		if (L_40)
		{
			goto IL_0242;
		}
	}
	{
		goto IL_0115;
	}

IL_00f3:
	{
		goto IL_00ca;
	}

IL_00f5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___0_json;
		int32_t* L_42 = ___1_index;
		int32_t L_43 = *((int32_t*)L_42);
		NullCheck(L_41);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 3));
		uint16_t L_45 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_46 = ___1_index;
		int32_t* L_47 = L_46;
		int32_t L_48 = *((int32_t*)L_47);
		*((int32_t*)L_47) = (int32_t)((int32_t)il2cpp_codegen_add(L_48, 4));
		return ((int32_t)9);
	}

IL_010b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = ___0_json;
		int32_t* L_50 = ___1_index;
		int32_t L_51 = *((int32_t*)L_50);
		NullCheck(L_49);
		int32_t L_52 = L_51;
		uint16_t L_53 = (uint16_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) == ((int32_t)((int32_t)116))))
		{
			goto IL_0120;
		}
	}
	{
		goto IL_00c8;
	}

IL_0115:
	{
		goto IL_013f;
	}

IL_0117:
	{
		int32_t L_54 = V_1;
		if ((((int32_t)L_54) < ((int32_t)4)))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_010b;
	}

IL_0120:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = ___0_json;
		int32_t* L_56 = ___1_index;
		int32_t L_57 = *((int32_t*)L_56);
		NullCheck(L_55);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 1));
		uint16_t L_59 = (uint16_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_60 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_60)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_61 = V_3;
		if (!L_61)
		{
			goto IL_00f3;
		}
	}

IL_013f:
	{
		goto IL_00ae;
	}

IL_0144:
	{
		if (((int32_t)2))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0051;
	}

IL_0153:
	{
		goto IL_01d0;
	}

IL_0158:
	{
		goto IL_0117;
	}

IL_015a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = ___0_json;
		int32_t* L_63 = ___1_index;
		int32_t L_64 = *((int32_t*)L_63);
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 3));
		uint16_t L_66 = (uint16_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		if ((((int32_t)L_66) == ((int32_t)((int32_t)115))))
		{
			goto IL_01b5;
		}
	}
	{
		goto IL_0188;
	}

IL_0166:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = ___0_json;
		int32_t* L_68 = ___1_index;
		int32_t L_69 = *((int32_t*)L_68);
		NullCheck(L_67);
		int32_t L_70 = L_69;
		uint16_t L_71 = (uint16_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((((int32_t)L_71) == ((int32_t)((int32_t)102))))
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_72 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_73 = V_3;
		if (L_73)
		{
			goto IL_00d6;
		}
	}
	{
		if (0)
		{
			goto IL_01c2;
		}
	}
	{
		goto IL_0158;
	}

IL_0188:
	{
		if (!0)
		{
			goto IL_01cb;
		}
	}

IL_018b:
	{
		int32_t L_74 = V_1;
		int32_t L_75 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_76 = V_3;
		if (L_76)
		{
			goto IL_001e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = ___0_json;
		int32_t* L_78 = ___1_index;
		int32_t L_79 = *((int32_t*)L_78);
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 2));
		uint16_t L_81 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_015a;
	}

IL_01b5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = ___0_json;
		int32_t* L_83 = ___1_index;
		int32_t L_84 = *((int32_t*)L_83);
		NullCheck(L_82);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 4));
		uint16_t L_86 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0117;
		}
	}

IL_01c2:
	{
		int32_t* L_87 = ___1_index;
		int32_t* L_88 = L_87;
		int32_t L_89 = *((int32_t*)L_88);
		*((int32_t*)L_88) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, 5));
	}

IL_01c8:
	{
		return ((int32_t)10);
	}

IL_01cb:
	{
		goto IL_0117;
	}

IL_01d0:
	{
		if (!0)
		{
			goto IL_020a;
		}
	}
	{
		goto IL_0203;
	}

IL_01d5:
	{
		goto IL_0166;
	}

IL_01da:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = ___0_json;
		int32_t* L_91 = ___1_index;
		int32_t L_92 = *((int32_t*)L_91);
		NullCheck(L_90);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		uint16_t L_94 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_0201;
	}

IL_01e9:
	{
		return 5;
	}

IL_01eb:
	{
		int32_t* L_95 = ___1_index;
		int32_t* L_96 = L_95;
		int32_t L_97 = *((int32_t*)L_96);
		*((int32_t*)L_96) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_97, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98 = ___0_json;
		NullCheck(L_98);
		int32_t* L_99 = ___1_index;
		int32_t L_100 = *((int32_t*)L_99);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_98)->max_length)), L_100));
		int32_t L_101 = V_1;
		if ((((int32_t)L_101) < ((int32_t)5)))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d5;
	}

IL_0201:
	{
		goto IL_0205;
	}

IL_0203:
	{
		return 8;
	}

IL_0205:
	{
		goto IL_018b;
	}

IL_020a:
	{
		goto IL_000c;
	}

IL_020f:
	{
		int32_t L_102 = V_1;
		int32_t L_103 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_102), ((int32_t)(uint32_t)L_103)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_104 = V_3;
		if (!L_104)
		{
			goto IL_033a;
		}
	}
	{
		if (((int32_t)-1))
		{
			goto IL_0312;
		}
	}
	{
		goto IL_0242;
	}

IL_0236:
	{
		return 6;
	}

IL_0238:
	{
		return 7;
	}

IL_023a:
	{
		return 1;
	}

IL_023c:
	{
		return 2;
	}

IL_023e:
	{
		return 3;
	}

IL_0240:
	{
		return 4;
	}

IL_0242:
	{
		Il2CppChar L_105 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_105, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_023e;
			}
			case 1:
			{
				goto IL_01eb;
			}
			case 2:
			{
				goto IL_0240;
			}
		}
	}
	{
		Il2CppChar L_106 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_106, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_023a;
			}
			case 1:
			{
				goto IL_01eb;
			}
			case 2:
			{
				goto IL_023c;
			}
		}
	}
	{
		goto IL_01eb;
	}

IL_0271:
	{
		int32_t L_107 = V_1;
		int32_t L_108 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_109 = V_3;
		if (L_109)
		{
			goto IL_023a;
		}
	}
	{
		Il2CppChar L_110 = V_0;
		V_2 = L_110;
		int32_t L_111 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_111)&0))) == ((int32_t)0))? 1 : 0);
		bool L_112 = V_3;
		if (!L_112)
		{
			goto IL_01c8;
		}
	}
	{
		Il2CppChar L_113 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_113, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_0238;
			}
			case 1:
			{
				goto IL_01eb;
			}
			case 2:
			{
				goto IL_01eb;
			}
			case 3:
			{
				goto IL_01eb;
			}
			case 4:
			{
				goto IL_01eb;
			}
			case 5:
			{
				goto IL_01eb;
			}
			case 6:
			{
				goto IL_01eb;
			}
			case 7:
			{
				goto IL_01eb;
			}
			case 8:
			{
				goto IL_01eb;
			}
			case 9:
			{
				goto IL_01eb;
			}
			case 10:
			{
				goto IL_0236;
			}
			case 11:
			{
				goto IL_0203;
			}
			case 12:
			{
				goto IL_01eb;
			}
			case 13:
			{
				goto IL_01eb;
			}
			case 14:
			{
				goto IL_0203;
			}
			case 15:
			{
				goto IL_0203;
			}
			case 16:
			{
				goto IL_0203;
			}
			case 17:
			{
				goto IL_0203;
			}
			case 18:
			{
				goto IL_0203;
			}
			case 19:
			{
				goto IL_0203;
			}
			case 20:
			{
				goto IL_0203;
			}
			case 21:
			{
				goto IL_0203;
			}
			case 22:
			{
				goto IL_0203;
			}
			case 23:
			{
				goto IL_0203;
			}
			case 24:
			{
				goto IL_01e9;
			}
		}
	}
	{
		if (!0)
		{
			goto IL_0335;
		}
	}

IL_0312:
	{
		int32_t* L_114 = ___1_index;
		int32_t L_115 = *((int32_t*)L_114);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_116 = ___0_json;
		NullCheck(L_116);
		if ((!(((uint32_t)L_115) == ((uint32_t)((int32_t)(((RuntimeArray*)L_116)->max_length))))))
		{
			goto IL_031b;
		}
	}
	{
		return 0;
	}

IL_031b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_117 = ___0_json;
		int32_t* L_118 = ___1_index;
		int32_t L_119 = *((int32_t*)L_118);
		NullCheck(L_117);
		int32_t L_120 = L_119;
		uint16_t L_121 = (uint16_t)(L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_0 = L_121;
		if (!((int32_t)255))
		{
			goto IL_0066;
		}
	}
	{
		int32_t* L_122 = ___1_index;
		int32_t* L_123 = L_122;
		int32_t L_124 = *((int32_t*)L_123);
		*((int32_t*)L_123) = (int32_t)((int32_t)il2cpp_codegen_add(L_124, 1));
		goto IL_0271;
	}

IL_0335:
	{
		goto IL_0242;
	}

IL_033a:
	{
		return 0;
	}
}
// System.Boolean MUJson::serializeObjectOrArray(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeObjectOrArray_mA43433D7242C41FAE7717AC2584387D35447CAC1 (RuntimeObject* ___0_objectOrArray, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_objectOrArray;
		if (!((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_objectOrArray;
		StringBuilder_t* L_2 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = MUJson_serializeObject_m096C40D5AFB724C008083826EDDD6BEC3AEADDDE(((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___0_objectOrArray;
		StringBuilder_t* L_5 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = MUJson_serializeArray_m0CCEC5D4879F212EB62D53D9FE22A6558CB74144(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_4, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		RuntimeObject* L_7 = ___0_objectOrArray;
		if (((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_7, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean MUJson::serializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeObject_m096C40D5AFB724C008083826EDDD6BEC3AEADDDE (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_anObject, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		StringBuilder_t* L_0 = ___1_builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		if (!0)
		{
			goto IL_00d4;
		}
	}

IL_0012:
	{
		RuntimeObject* L_2 = V_3;
		StringBuilder_t* L_3 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = MUJson_serializeValue_m2E10E2227E04BB189A2FE555C72F3C036BD15F81(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}

IL_001b:
	{
		V_1 = (bool)0;
	}

IL_001d:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		StringBuilder_t* L_7 = ___1_builder;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		goto IL_00ff;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003b:
	{
		return (bool)0;
	}

IL_003d:
	{
		goto IL_001b;
	}

IL_003f:
	{
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_008a;
		}
	}

IL_0042:
	{
		String_t* L_10 = V_2;
		StringBuilder_t* L_11 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352(L_10, L_11, NULL);
	}

IL_0049:
	{
		StringBuilder_t* L_12 = ___1_builder;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		goto IL_0098;
	}

IL_0057:
	{
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
		bool L_16 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_16)&0))) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0049;
		}
	}
	{
		bool L_18 = V_1;
		bool L_19 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_003f;
		}
	}

IL_008a:
	{
		StringBuilder_t* L_21 = ___1_builder;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		goto IL_0042;
	}

IL_0098:
	{
		goto IL_00ad;
	}

IL_009a:
	{
		goto IL_001d;
	}

IL_009f:
	{
		RuntimeObject* L_23 = V_0;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		V_2 = L_25;
		goto IL_0057;
	}

IL_00ad:
	{
		bool L_26 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0039;
		}
	}
	{
		bool L_28 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}

IL_00d4:
	{
		bool L_30 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_30)|((int32_t)2)))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_003d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_32 = ___0_anObject;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_32);
		V_0 = L_33;
		V_1 = (bool)1;
		goto IL_009a;
	}

IL_00fa:
	{
		goto IL_0012;
	}

IL_00ff:
	{
		return (bool)1;
	}
}
// System.Boolean MUJson::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeDictionary_m24397DF626041066367CAA8936F45309645A1A25 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_dict, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		StringBuilder_t* L_0 = ___1_builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		V_0 = (bool)1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___0_dict;
		NullCheck(L_2);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_3;
		L_3 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_2, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				String_t* L_4;
				L_4 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				StringBuilder_t* L_5 = ___1_builder;
				il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
				MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352(L_4, L_5, NULL);
			}

IL_0024_1:
			{
				V_0 = (bool)0;
			}

IL_0026_1:
			{
				bool L_6;
				L_6 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_007b_1;
			}

IL_0031_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_7;
				L_7 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_7;
				bool L_8 = V_0;
				if (L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				StringBuilder_t* L_9 = ___1_builder;
				NullCheck(L_9);
				StringBuilder_t* L_10;
				L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
			}

IL_0048_1:
			{
				String_t* L_11;
				L_11 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				StringBuilder_t* L_12 = ___1_builder;
				il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
				MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352(L_11, L_12, NULL);
				bool L_13 = V_0;
				bool L_14 = V_0;
				V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_13), ((int32_t)(uint32_t)L_14)))) <= ((uint32_t)(-1))))? 1 : 0);
				bool L_15 = V_3;
				if (L_15)
				{
					goto IL_0024_1;
				}
			}
			{
				StringBuilder_t* L_16 = ___1_builder;
				NullCheck(L_16);
				StringBuilder_t* L_17;
				L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
				goto IL_0017_1;
			}

IL_007b_1:
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		StringBuilder_t* L_18 = ___1_builder;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		return (bool)1;
	}
}
// System.Boolean MUJson::serializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeArray_m0CCEC5D4879F212EB62D53D9FE22A6558CB74144 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_anArray, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		StringBuilder_t* L_0 = ___1_builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		bool L_2 = V_0;
		bool L_3 = V_0;
		V_3 = (bool)(false? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00a9;
		}
	}

IL_0027:
	{
		int32_t L_5 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = ___0_anArray;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_6);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t* L_8 = ___1_builder;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_00ea;
	}

IL_0041:
	{
		if (!((int32_t)4))
		{
			goto IL_0072;
		}
	}

IL_0048:
	{
		RuntimeObject* L_10 = V_2;
		StringBuilder_t* L_11 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = MUJson_serializeValue_m2E10E2227E04BB189A2FE555C72F3C036BD15F81(L_10, L_11, NULL);
		if (L_12)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)0;
	}

IL_0053:
	{
		V_0 = (bool)0;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_00e5;
	}

IL_005e:
	{
		bool L_14 = V_0;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_14)&0))) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0041;
		}
	}

IL_0072:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_0048;
	}

IL_0077:
	{
		goto IL_0027;
	}

IL_0079:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_17 = ___0_anArray;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_17, L_18);
		V_2 = L_19;
		goto IL_0072;
	}

IL_0083:
	{
		StringBuilder_t* L_20 = ___1_builder;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_24 = V_3;
		if (!L_24)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_00ca;
	}

IL_00a9:
	{
		if (0)
		{
			goto IL_0048;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_00ae:
	{
		V_1 = 0;
		bool L_25 = V_0;
		int32_t L_26 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_25), ((int32_t)(uint32_t)L_26)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_00ae;
		}
	}
	{
		goto IL_0077;
	}

IL_00ca:
	{
		bool L_28 = V_0;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_28)|((int32_t)-2)))) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0041;
		}
	}

IL_00e5:
	{
		goto IL_0027;
	}

IL_00ea:
	{
		return (bool)1;
	}
}
// System.Boolean MUJson::serializeValue(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MUJson_serializeValue_m2E10E2227E04BB189A2FE555C72F3C036BD15F81 (RuntimeObject* ___0_value, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0120;
		}
	}
	{
		goto IL_014e;
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		if (((int32_t)255))
		{
			goto IL_001c;
		}
	}

IL_0014:
	{
		RuntimeObject* L_1 = ___0_value;
		if (!((*(bool*)((bool*)(bool*)UnBox(L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_0040;
		}
	}

IL_001c:
	{
		RuntimeObject* L_2 = ___0_value;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_3, NULL);
		if (!L_4)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_5 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_5, NULL);
		StringBuilder_t* L_7 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_serializeNumber_m5E948E0BBDDBCB5D862C6F5D9A4F95E0AE57E847(L_6, L_7, NULL);
		if (0)
		{
			goto IL_0161;
		}
	}
	{
		goto IL_0161;
	}

IL_0040:
	{
		StringBuilder_t* L_8 = ___1_builder;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		goto IL_0161;
	}

IL_0051:
	{
		RuntimeObject* L_10 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000d;
	}

IL_005b:
	{
		goto IL_0051;
	}

IL_005d:
	{
		RuntimeObject* L_11 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		if (((*(bool*)((bool*)(bool*)UnBox(L_12, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0051;
	}

IL_006f:
	{
		StringBuilder_t* L_13 = ___1_builder;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
	}

IL_007b:
	{
		goto IL_0161;
	}

IL_0080:
	{
		RuntimeObject* L_15 = ___0_value;
		if (((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_15, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		if (!((int32_t)8))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_005d;
	}

IL_0091:
	{
		RuntimeObject* L_16 = ___0_value;
		StringBuilder_t* L_17 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = MUJson_serializeDictionary_m24397DF626041066367CAA8936F45309645A1A25(((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)CastclassClass((RuntimeObject*)L_16, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var)), L_17, NULL);
		goto IL_0161;
	}

IL_00a3:
	{
		RuntimeObject* L_19 = ___0_value;
		StringBuilder_t* L_20 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = MUJson_serializeArray_m0CCEC5D4879F212EB62D53D9FE22A6558CB74144(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_19, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_20, NULL);
		goto IL_0161;
	}

IL_00b5:
	{
		RuntimeObject* L_22 = ___0_value;
		if (!((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)IsInstClass((RuntimeObject*)L_22, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_0091;
	}

IL_00bf:
	{
		RuntimeObject* L_23 = ___0_value;
		StringBuilder_t* L_24 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = MUJson_serializeObject_m096C40D5AFB724C008083826EDDD6BEC3AEADDDE(((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_23, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_24, NULL);
		goto IL_0161;
	}

IL_00d1:
	{
		RuntimeObject* L_26 = ___0_value;
		if (((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_26, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_00f1;
	}

IL_00db:
	{
		RuntimeObject* L_27 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_28;
		L_28 = Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_27, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		StringBuilder_t* L_29 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352(L_28, L_29, NULL);
		goto IL_0161;
	}

IL_00f1:
	{
		goto IL_00fe;
	}

IL_00f3:
	{
		RuntimeObject* L_30 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_30, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_00d1;
		}
	}
	{
		if (!0)
		{
			goto IL_00db;
		}
	}

IL_00fe:
	{
		goto IL_0149;
	}

IL_0100:
	{
		goto IL_0161;
	}

IL_0102:
	{
		RuntimeObject* L_31 = ___0_value;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_31, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_012f;
		}
	}
	{
		goto IL_0142;
	}

IL_010c:
	{
		RuntimeObject* L_32 = ___0_value;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_33 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11(L_33, ((RuntimeObject*)Castclass((RuntimeObject*)L_32, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)), NULL);
		StringBuilder_t* L_34 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = MUJson_serializeArray_m0CCEC5D4879F212EB62D53D9FE22A6558CB74144(L_33, L_34, NULL);
		goto IL_0161;
	}

IL_0120:
	{
		RuntimeObject* L_36 = ___0_value;
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_36, NULL);
		NullCheck(L_37);
		bool L_38;
		L_38 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_37, NULL);
		if (L_38)
		{
			goto IL_010c;
		}
	}
	{
		goto IL_0102;
	}

IL_012f:
	{
		RuntimeObject* L_39 = ___0_value;
		StringBuilder_t* L_40 = ___1_builder;
		il2cpp_codegen_runtime_class_init_inline(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352(((String_t*)CastclassSealed((RuntimeObject*)L_39, String_t_il2cpp_TypeInfo_var)), L_40, NULL);
		if (((int32_t)-1))
		{
			goto IL_0100;
		}
	}

IL_0142:
	{
		if (((int32_t)3))
		{
			goto IL_00f3;
		}
	}

IL_0149:
	{
		goto IL_014b;
	}

IL_014b:
	{
		if (!0)
		{
			goto IL_015c;
		}
	}

IL_014e:
	{
		StringBuilder_t* L_41 = ___1_builder;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		goto IL_0161;
	}

IL_015c:
	{
		goto IL_00b5;
	}

IL_0161:
	{
		return (bool)1;
	}
}
// System.Void MUJson::serializeString(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_serializeString_m41337FE2679CD459E9A9564C53F229E972518352 (String_t* ___0_aString, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		StringBuilder_t* L_0 = ___1_builder;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		goto IL_01cc;
	}

IL_0011:
	{
		StringBuilder_t* L_2 = ___1_builder;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		goto IL_0066;
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		NullCheck(L_6);
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_0064;
	}

IL_002e:
	{
		StringBuilder_t* L_7 = ___1_builder;
		int32_t L_8 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_8, ((int32_t)16), NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_9, 4, ((int32_t)48), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_10, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_11, NULL);
		goto IL_0062;
	}

IL_0051:
	{
		StringBuilder_t* L_13 = ___1_builder;
		Il2CppChar L_14 = V_2;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, L_14, NULL);
	}

IL_0059:
	{
		goto IL_001f;
	}

IL_005b:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)126))))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_002e;
	}

IL_0062:
	{
		goto IL_001f;
	}

IL_0064:
	{
		goto IL_0011;
	}

IL_0066:
	{
		goto IL_0076;
	}

IL_0068:
	{
		Il2CppChar L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_17, NULL);
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_002e;
		}
	}

IL_0074:
	{
		goto IL_005b;
	}

IL_0076:
	{
		goto IL_012b;
	}

IL_007b:
	{
		StringBuilder_t* L_20 = ___1_builder;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_24 = V_4;
		if (L_24)
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_25 = V_1;
		int32_t L_26 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_0074;
		}
	}
	{
		goto IL_001f;
	}

IL_00bc:
	{
		Il2CppChar L_28 = V_2;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)9))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_00ca;
	}

IL_00c3:
	{
		Il2CppChar L_29 = V_2;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)13))))
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_00bc;
	}

IL_00ca:
	{
		goto IL_0110;
	}

IL_00cc:
	{
		int32_t L_30 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_30)|((int32_t)255)))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_4;
		if (L_31)
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_32 = V_1;
		int32_t L_33 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_32), ((int32_t)(uint32_t)L_33)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_34 = V_4;
		if (L_34)
		{
			goto IL_0180;
		}
	}

IL_00ff:
	{
		StringBuilder_t* L_35 = ___1_builder;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
	}

IL_010b:
	{
		goto IL_001f;
	}

IL_0110:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_37), ((int32_t)(uint32_t)L_38)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_39 = V_4;
		if (!L_39)
		{
			goto IL_0068;
		}
	}

IL_012b:
	{
		goto IL_01ca;
	}

IL_0130:
	{
		goto IL_001f;
	}

IL_0135:
	{
		Il2CppChar L_40 = V_2;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)10))))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_41 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_41)|((int32_t)3)))) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_4;
		if (L_42)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_00c3;
	}

IL_015a:
	{
		Il2CppChar L_43 = V_2;
		if ((((int32_t)L_43) == ((int32_t)((int32_t)12))))
		{
			goto IL_016f;
		}
	}
	{
		goto IL_0135;
	}

IL_0161:
	{
		StringBuilder_t* L_44 = ___1_builder;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_0130;
	}

IL_016f:
	{
		StringBuilder_t* L_46 = ___1_builder;
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_001f;
	}

IL_0180:
	{
		goto IL_001f;
	}

IL_0185:
	{
		Il2CppChar L_48 = V_2;
		if ((((int32_t)L_48) == ((int32_t)8)))
		{
			goto IL_018b;
		}
	}
	{
		goto IL_015a;
	}

IL_018b:
	{
		StringBuilder_t* L_49 = ___1_builder;
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		if (!0)
		{
			goto IL_0180;
		}
	}
	{
		goto IL_015a;
	}

IL_019c:
	{
		Il2CppChar L_51 = V_2;
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0185;
		}
	}
	{
		StringBuilder_t* L_52 = ___1_builder;
		NullCheck(L_52);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_52, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_001f;
	}

IL_01b2:
	{
		StringBuilder_t* L_54 = ___1_builder;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
	}

IL_01be:
	{
		goto IL_001f;
	}

IL_01c3:
	{
		Il2CppChar L_56 = V_2;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)34))))
		{
			goto IL_01b2;
		}
	}
	{
		goto IL_019c;
	}

IL_01ca:
	{
		goto IL_01e7;
	}

IL_01cc:
	{
		String_t* L_57 = ___0_aString;
		NullCheck(L_57);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58;
		L_58 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_57, NULL);
		V_0 = L_58;
		if (!((int32_t)3))
		{
			goto IL_01be;
		}
	}
	{
		V_1 = 0;
		goto IL_0023;
	}

IL_01e1:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = V_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint16_t L_62 = (uint16_t)(L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_2 = L_62;
		goto IL_01c3;
	}

IL_01e7:
	{
		return;
	}
}
// System.Void MUJson::serializeNumber(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson_serializeNumber_m5E948E0BBDDBCB5D862C6F5D9A4F95E0AE57E847 (double ___0_number, StringBuilder_t* ___1_builder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___1_builder;
		double L_1 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mA5896BBF6FFE5A37B531E8E2F5258AE6F0C38580(L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		return;
	}
}
// System.Void MUJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson__ctor_m8799A40A2F09A994C11E337496A62D4C375C1F1D (MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MUJson::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MUJson__cctor_m16F8C142D2242E95FF62BC69605853220856D0FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastErrorIndex_13 = (-1);
		((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_StaticFields*)il2cpp_codegen_static_fields_for(MUJson_tA4BE6C11EE5DD93D6C787DBE5D98E12FD43F454F_il2cpp_TypeInfo_var))->___lastDecode_14), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_m908F1BC34FB2DB9D04A64D7CF420CF455A0AEDAB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, int32_t ___1_offset, int32_t ___2_count, String_t* ___3_key, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___3_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bytesData;
		int32_t L_4 = ___1_offset;
		int32_t L_5 = ___2_count;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		RC4Helper_RC4_mA1D050730221E6407E0F800CFF92A8654B29D0CC(L_3, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_mA1D050730221E6407E0F800CFF92A8654B29D0CC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, int32_t ___1_offset, int32_t ___2_count, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		int32_t L_1 = V_5;
		V_7 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_1)&0))) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (L_2)
		{
			goto IL_0189;
		}
	}
	{
		goto IL_0153;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_4;
		uint8_t L_5 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = V_4;
		V_7 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_6)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_7 = V_7;
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15))%((int32_t)256)));
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_bytesData;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		uint8_t* L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)));
		uint8_t L_19 = (*(uint8_t*)L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		*(uint8_t*)L_18 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_19^(int32_t)L_23)));
		int32_t L_24 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_006d:
	{
		int32_t L_25 = V_5;
		int32_t L_26 = ___1_offset;
		int32_t L_27 = ___2_count;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27)))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_0187;
	}

IL_0079:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_0;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_2 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		int32_t L_33 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)L_37);
		goto IL_012f;
	}

IL_0089:
	{
		int32_t L_38 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_38, (int32_t)L_42))%((int32_t)256)));
		goto IL_012a;
	}

IL_009c:
	{
		int32_t L_43 = V_3;
		int32_t L_44 = V_3;
		V_7 = (bool)(false? 1 : 0);
		bool L_45 = V_7;
		if (L_45)
		{
			goto IL_0189;
		}
	}
	{
		int32_t L_46 = ___1_offset;
		V_5 = L_46;
		goto IL_006d;
	}

IL_00bc:
	{
		int32_t L_47 = V_3;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_47, 1))%((int32_t)256)));
		goto IL_0104;
	}

IL_00c8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_0;
		int32_t L_51 = V_4;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)L_53);
	}

IL_00cf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_0;
		int32_t L_55 = V_4;
		uint8_t L_56 = V_2;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (uint8_t)L_56);
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00d8:
	{
		int32_t L_58 = V_3;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)256))))
		{
			goto IL_010d;
		}
	}
	{
		int32_t L_59 = 0;
		V_4 = L_59;
		V_3 = L_59;
		uint8_t L_60 = V_2;
		int32_t L_61 = V_5;
		V_7 = (bool)(false? 1 : 0);
		bool L_62 = V_7;
		if (L_62)
		{
			goto IL_00bc;
		}
	}
	{
		if (((int32_t)-2))
		{
			goto IL_009c;
		}
	}

IL_0104:
	{
		goto IL_0125;
	}

IL_0106:
	{
		V_4 = 0;
		V_3 = 0;
		goto IL_00d8;
	}

IL_010d:
	{
		int32_t L_63 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_0;
		int32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		int32_t L_69 = V_3;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint8_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, (int32_t)L_67)), (int32_t)L_71))%((int32_t)256)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_0;
		int32_t L_73 = V_3;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_2 = L_75;
		goto IL_00c8;
	}

IL_0125:
	{
		goto IL_0089;
	}

IL_012a:
	{
		goto IL_0079;
	}

IL_012f:
	{
		uint8_t L_76 = V_2;
		int32_t L_77 = V_3;
		V_7 = (bool)(false? 1 : 0);
		bool L_78 = V_7;
		if (!L_78)
		{
			goto IL_0151;
		}
	}

IL_0147:
	{
		int32_t L_79 = V_3;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)256))))
		{
			goto IL_0198;
		}
	}
	{
		goto IL_0106;
	}

IL_0151:
	{
		goto IL_0182;
	}

IL_0153:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_1;
		int32_t L_81 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___3_key;
		int32_t L_83 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ___3_key;
		NullCheck((RuntimeArray*)L_84);
		int32_t L_85;
		L_85 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_84, 0, NULL);
		NullCheck(L_82);
		int32_t L_86 = ((int32_t)(L_83%L_85));
		uint8_t L_87 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)L_87);
		int32_t L_88 = ___1_offset;
		int32_t L_89 = V_5;
		V_7 = (bool)(false? 1 : 0);
		bool L_90 = V_7;
		if (L_90)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_91 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		goto IL_0147;
	}

IL_0182:
	{
		goto IL_0027;
	}

IL_0187:
	{
		goto IL_019f;
	}

IL_0189:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_1 = L_92;
		V_3 = 0;
		goto IL_0147;
	}

IL_0198:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_0;
		int32_t L_94 = V_3;
		int32_t L_95 = V_3;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (uint8_t)((int32_t)(uint8_t)L_95));
		goto IL_0153;
	}

IL_019f:
	{
		return;
	}
}
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_m22CF4C8504B274211AC689D5766FCBD466D884A6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_key, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bytesData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytesData;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_key;
		RC4Helper_RC4_mA1D050730221E6407E0F800CFF92A8654B29D0CC(L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2, NULL);
		return;
	}
}
// System.Void Server.Tools.RC4Helper::RC4(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper_RC4_mE126D9B53C9207D12D30D125E39EC06CE45849EF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytesData, String_t* ___1_key, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___1_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bytesData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		RC4Helper_RC4_m22CF4C8504B274211AC689D5766FCBD466D884A6(L_3, L_4, NULL);
		return;
	}
}
// System.Void Server.Tools.RC4Helper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RC4Helper__ctor_m5ECD0C24D00987742EEA87BD59A483AC8809ABDE (RC4Helper_t6178F53FCE432CC718ABE863D2BA131BBFAA5590* __this, const RuntimeMethod* method) 
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
// System.String Server.Tools.SHA1Helper::get_sha1_string(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SHA1Helper_get_sha1_string_m239BE6351F9DE3D3D1190EFC018E40DDBD2AEEED (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SHA1Helper_get_sha1_bytes_m1E7FFB0EBD6FB9BECE03E08A7E87B7877DB7DC2A(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_2, NULL);
		return L_3;
	}
}
// System.String Server.Tools.SHA1Helper::get_sha1_string(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SHA1Helper_get_sha1_string_m937697E7543DCFFE4660091E1D3F7F41A071D63A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = SHA1Helper_get_sha1_bytes_mDE99DC143A6F91E7421B58886673D7B4F3FEECDA(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_2, NULL);
		return L_3;
	}
}
// System.Byte[] Server.Tools.SHA1Helper::get_sha1_bytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_sha1_bytes_m1E7FFB0EBD6FB9BECE03E08A7E87B7877DB7DC2A (String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* L_0 = (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478*)il2cpp_codegen_object_new(SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE(L_0, NULL);
		V_0 = L_0;
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_1 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_1, NULL);
		String_t* L_2 = ___0_str;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_1 = L_3;
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_4, L_5, NULL);
		V_2 = L_6;
		V_0 = (SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		return L_7;
	}
}
// System.Byte[] Server.Tools.SHA1Helper::get_sha1_bytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_sha1_bytes_mDE99DC143A6F91E7421B58886673D7B4F3FEECDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478* L_0 = (SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478*)il2cpp_codegen_object_new(SHA1Managed_t0BFAB012F0F70D6BF95BD98D86449A97A8468478_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SHA1Managed__ctor_m121A32E272AF588A533354D0D2558A1A6A0BBDEE(L_0, NULL);
		V_0 = L_0;
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_1, L_2, NULL);
		V_1 = L_3;
		V_0 = (SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		return L_4;
	}
}
// System.String Server.Tools.SHA1Helper::get_macksha1_string(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SHA1Helper_get_macksha1_string_m6650A45F60FAB1E762C9AA8996266E1A9207AAAE (String_t* ___0_str, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		String_t* L_0 = ___0_str;
		String_t* L_1 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = SHA1Helper_get_macsha1_bytes_m850EF299894440F0181656B306CD9C71179BD4FB(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_3, NULL);
		return L_4;
	}
}
// System.String Server.Tools.SHA1Helper::get_macsha1_string(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SHA1Helper_get_macsha1_string_m6F4F70CF8BA256467735934996AD860599F09D6B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = SHA1Helper_get_macsha1_bytes_m905D846480107CC9829119F438AFACC8797453B2(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_3, NULL);
		return L_4;
	}
}
// System.Byte[] Server.Tools.SHA1Helper::get_macsha1_bytes(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_macsha1_bytes_m850EF299894440F0181656B306CD9C71179BD4FB (String_t* ___0_str, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_0, NULL);
		String_t* L_1 = ___1_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_4 = (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030*)il2cpp_codegen_object_new(HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HMACSHA1__ctor_mC50ADF9333EE40240D96377069CD32E0D373ECCE(L_4, L_3, NULL);
		V_1 = L_4;
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_5 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_5, NULL);
		String_t* L_6 = ___0_str;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		V_2 = L_7;
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_8, L_9, NULL);
		V_3 = L_10;
		V_1 = (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_3;
		return L_11;
	}
}
// System.Byte[] Server.Tools.SHA1Helper::get_macsha1_bytes(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SHA1Helper_get_macsha1_bytes_m905D846480107CC9829119F438AFACC8797453B2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_0 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_0, NULL);
		String_t* L_1 = ___1_key;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_4 = (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030*)il2cpp_codegen_object_new(HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		HMACSHA1__ctor_mC50ADF9333EE40240D96377069CD32E0D373ECCE(L_4, L_3, NULL);
		V_1 = L_4;
		HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030* L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_data;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_5, L_6, NULL);
		V_2 = L_7;
		V_1 = (HMACSHA1_t40AB10160C7F8F11EA26E038FD7A335383987030*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		return L_8;
	}
}
// System.Void Server.Tools.SHA1Helper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SHA1Helper__ctor_m00A342C31902BB0C4353C96E9E6B5D36A1C8529F (SHA1Helper_tE1F7E40C9B5FADB244FA94EAC3F31E8F47938729* __this, const RuntimeMethod* method) 
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
// System.String Server.Tools.StringEncrypt::Encrypt(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringEncrypt_Encrypt_m84734737CBD6FAD02F164E6C7DDE020E023D7D88 (String_t* ___0_plainText, String_t* ___1_passwd, String_t* ___2_saltValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Exception_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Exception_t* V_3 = NULL;
	String_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_plainText;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	try
	{// begin try (depth: 1)
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_2 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_2, NULL);
		String_t* L_3 = ___0_plainText;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebugTextLog_t129342369A17BA359701B47B551920585B214194_il2cpp_TypeInfo_var)));
		DebugTextLog_LogException_mD731F6515ED1400A0E43DBDC64FA3C1F55470999(L_5, NULL);
		V_4 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_0026:
	{
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		String_t* L_7 = ___1_passwd;
		String_t* L_8 = ___2_saltValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = AesHelper_AesEncryptBytes_mB73BBD77AABEAD2D69DA226FD3996F547105790A(L_6, L_7, L_8, NULL);
		V_2 = L_9;
		goto IL_003f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebugTextLog_t129342369A17BA359701B47B551920585B214194_il2cpp_TypeInfo_var)));
		DebugTextLog_LogException_mD731F6515ED1400A0E43DBDC64FA3C1F55470999(L_10, NULL);
		V_4 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = DataHelper_Bytes2HexString_m6F12F319395C7FB95AFF2C0FE6F938DCD9D44017(L_11, NULL);
		return L_12;
	}

IL_0046:
	{
		String_t* L_13 = V_4;
		return L_13;
	}
}
// System.String Server.Tools.StringEncrypt::Decrypt(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringEncrypt_Decrypt_mBFA0C82446F4163A44B2AA59734394A8B100F833 (String_t* ___0_encryptText, String_t* ___1_passwd, String_t* ___2_saltValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	Exception_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	String_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_encryptText;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		if (!0)
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0031;
	}

IL_000d:
	{
		V_3 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE* L_2 = (UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE*)il2cpp_codegen_object_new(UTF8Encoding_t90B56215A1B0B7ED5CDEA772E695F0DDAFBCD3BE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UTF8Encoding__ctor_m221CD37E0DBDC63D175FE38646E28CA801D08C00(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		NullCheck(L_2);
		String_t* L_5;
		L_5 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(38 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
		V_3 = L_5;
		goto IL_002f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0021;
		}
		throw e;
	}

CATCH_0021:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_6 = V_4;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebugTextLog_t129342369A17BA359701B47B551920585B214194_il2cpp_TypeInfo_var)));
		DebugTextLog_LogException_mD731F6515ED1400A0E43DBDC64FA3C1F55470999(L_6, NULL);
		V_5 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_002f:
	{
		String_t* L_7 = V_3;
		return L_7;
	}

IL_0031:
	{
		String_t* L_8 = ___0_encryptText;
		il2cpp_codegen_runtime_class_init_inline(DataHelper_t4E45429E1A13DBE27F9A7E7D9B7E7072FF89CFF0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = DataHelper_HexString2Bytes_m3D011E057EEF1083C21805261290B8F75A65A64C(L_8, NULL);
		V_0 = L_9;
		if (!((int32_t)3))
		{
			goto IL_003f;
		}
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		if (L_10)
		{
			goto IL_0044;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0044:
	{
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		String_t* L_12 = ___1_passwd;
		String_t* L_13 = ___2_saltValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = AesHelper_AesDecryptBytes_m6675B1F2B573215FA29D25EC5B60C00C968D8623(L_11, L_12, L_13, NULL);
		V_1 = L_14;
		goto IL_000d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0051;
		}
		throw e;
	}

CATCH_0051:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DebugTextLog_t129342369A17BA359701B47B551920585B214194_il2cpp_TypeInfo_var)));
		DebugTextLog_LogException_mD731F6515ED1400A0E43DBDC64FA3C1F55470999(L_15, NULL);
		V_5 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)
	// Dead block : IL_005d: br.s IL_000d

IL_005f:
	{
		return (String_t*)NULL;
	}

IL_0061:
	{
		String_t* L_16 = V_5;
		return L_16;
	}
}
// System.Void Server.Tools.StringEncrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEncrypt__ctor_m76F204323FEAE5047BC452B0158526CF461C818A (StringEncrypt_tB8CC0298E5FC7B1A2C4115BF68493795C478358F* __this, const RuntimeMethod* method) 
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
// System.UInt32[] ProtoBuf.Serializers.x41fcadcc0506e331::x40d0ed9be6b42277()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* x41fcadcc0506e331_x40d0ed9be6b42277_m44645014BA35B81FFAEE6C796808D3CA130E6BF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		goto IL_00b0;
	}

IL_0010:
	{
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_1), ((int32_t)(uint32_t)L_2)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_3 = V_4;
		if (L_3)
		{
			goto IL_00b6;
		}
	}
	{
		uint32_t L_4 = V_2;
		int32_t L_5 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_008a;
		}
	}

IL_0042:
	{
		int32_t L_7 = V_3;
		int32_t L_8 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_7), ((int32_t)(uint32_t)L_8)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_9 = V_4;
		if (L_9)
		{
			goto IL_0096;
		}
	}

IL_005a:
	{
		int32_t L_10 = V_3;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_3 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		int32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_16 = V_2;
		V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_16&0))) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00a0;
		}
	}

IL_007d:
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)256))))
		{
			goto IL_00b4;
		}
	}
	{
		goto IL_0010;
	}

IL_008a:
	{
		if (((int32_t)2147483647LL))
		{
			goto IL_009e;
		}
	}

IL_0091:
	{
		uint32_t L_19 = V_2;
		if (((int32_t)((int32_t)L_19&1)))
		{
			goto IL_00a2;
		}
	}

IL_0096:
	{
		goto IL_0098;
	}

IL_0098:
	{
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)((uint32_t)L_20>>1));
		goto IL_0042;
	}

IL_009e:
	{
		goto IL_00ae;
	}

IL_00a0:
	{
		goto IL_005a;
	}

IL_00a2:
	{
		uint32_t L_21 = V_2;
		V_2 = ((int32_t)(((int32_t)-306674912)^((int32_t)((uint32_t)L_21>>1))));
		goto IL_005a;
	}

IL_00ae:
	{
		goto IL_00ba;
	}

IL_00b0:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_00b4:
	{
		int32_t L_22 = V_1;
		V_2 = L_22;
	}

IL_00b6:
	{
		V_3 = 8;
		goto IL_00a0;
	}

IL_00ba:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		return L_23;
	}
}
// System.UInt32 ProtoBuf.Serializers.x41fcadcc0506e331::xe60c75844bdac817()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t x41fcadcc0506e331_xe60c75844bdac817_m399391F40760A7C48EB3EF97B65E93BA3A08C60B (x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___xa4660e7fe4e71d99_0;
		return ((int32_t)((int32_t)L_0&(-1)));
	}
}
// System.Void ProtoBuf.Serializers.x41fcadcc0506e331::x765375830e9fa890()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x41fcadcc0506e331_x765375830e9fa890_mD28F6ACCCD6448DBCCD7A9A8A6E95F6367E3EF14 (x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C* __this, const RuntimeMethod* method) 
{
	{
		__this->___xa4660e7fe4e71d99_0 = 0;
		return;
	}
}
// System.Void ProtoBuf.Serializers.x41fcadcc0506e331::xa12b4f15548ce49a(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x41fcadcc0506e331_xa12b4f15548ce49a_m927B0514B698171A928C4E6B657C534FDBEDDE72 (x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x1ef26dbdd5d13d24, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		uint32_t L_0 = V_2;
		__this->___xa4660e7fe4e71d99_0 = ((~L_0));
		uint32_t L_1 = V_0;
		uint32_t L_2 = V_0;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_006d;
		}
	}

IL_0022:
	{
		uint32_t L_4 = V_0;
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_4|((int32_t)1)))) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_x1ef26dbdd5d13d24;
		NullCheck(L_6);
		V_1 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
	}

IL_003d:
	{
		uint32_t L_7 = __this->___xa4660e7fe4e71d99_0;
		V_2 = ((~L_7));
		goto IL_0063;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_StaticFields*)il2cpp_codegen_static_fields_for(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var))->___xe6d5d55071bc950f_1;
		uint32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_x1ef26dbdd5d13d24;
		uint32_t L_11 = V_0;
		uint32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, 1));
		NullCheck(L_10);
		uintptr_t L_13 = ((uintptr_t)L_12);
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_8);
		uintptr_t L_15 = ((uintptr_t)((int32_t)(((int32_t)((int32_t)L_9^(int32_t)L_14))&((int32_t)255))));
		uint32_t L_16 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		uint32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_16^((int32_t)((uint32_t)L_17>>8))));
	}

IL_0063:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		V_1 = L_19;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0004;
	}

IL_006d:
	{
		return;
	}
}
// System.Void ProtoBuf.Serializers.x41fcadcc0506e331::xa12b4f15548ce49a(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x41fcadcc0506e331_xa12b4f15548ce49a_m5E6FAD89B0388B04B4F365D40802C09365058847 (x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x1ef26dbdd5d13d24, int32_t ___1_xf2ebf5458da93d3b, int32_t ___2_xb5964a891b6cf7c3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___xa4660e7fe4e71d99_0;
		V_0 = ((~L_0));
		goto IL_0026;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ((x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_StaticFields*)il2cpp_codegen_static_fields_for(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var))->___xe6d5d55071bc950f_1;
		uint32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_x1ef26dbdd5d13d24;
		int32_t L_4 = ___1_xf2ebf5458da93d3b;
		int32_t L_5 = L_4;
		___1_xf2ebf5458da93d3b = ((int32_t)il2cpp_codegen_add(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_1);
		uintptr_t L_8 = ((uintptr_t)((int32_t)(((int32_t)((int32_t)L_2^(int32_t)L_7))&((int32_t)255))));
		uint32_t L_9 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_9^((int32_t)((uint32_t)L_10>>8))));
	}

IL_0026:
	{
		int32_t L_11 = ___2_xb5964a891b6cf7c3;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		___2_xb5964a891b6cf7c3 = L_12;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		uint32_t L_13 = V_0;
		__this->___xa4660e7fe4e71d99_0 = ((~L_13));
		return;
	}
}
// System.Void ProtoBuf.Serializers.x41fcadcc0506e331::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x41fcadcc0506e331__ctor_mA1C79608D5D9A651DE382BD03BFC775F194E982B (x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ProtoBuf.Serializers.x41fcadcc0506e331::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x41fcadcc0506e331__cctor_mE086EAB0843A51FD7917D3D11785527909DC7C9A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = x41fcadcc0506e331_x40d0ed9be6b42277_m44645014BA35B81FFAEE6C796808D3CA130E6BF5(NULL);
		((x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_StaticFields*)il2cpp_codegen_static_fields_for(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var))->___xe6d5d55071bc950f_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_StaticFields*)il2cpp_codegen_static_fields_for(x41fcadcc0506e331_tF685CF7BFEDD86F2040094E50876E857E3C1043C_il2cpp_TypeInfo_var))->___xe6d5d55071bc950f_1), (void*)L_0);
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
// System.Object ProtoBuf.Serializers.x3c771d2672e85789::xc0d16742a0a2ab91(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x3c771d2672e85789_xc0d16742a0a2ab91_m1C0717D6131C752C1696F33FCBE983B3CE5E2CF4 (String_t* ___0_x11e2b209aab110d3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		String_t* L_0 = ___0_x11e2b209aab110d3;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14), (void*)L_0);
		goto IL_008c;
	}

IL_000b:
	{
		String_t* L_1 = ___0_x11e2b209aab110d3;
		if (L_1)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_003c;
	}

IL_0013:
	{
		if (!((int32_t)3))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0034;
	}

IL_001c:
	{
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_4 = V_4;
		if (L_4)
		{
			goto IL_0056;
		}
	}

IL_0034:
	{
		int32_t L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13 = L_5;
	}

IL_003a:
	{
		RuntimeObject* L_6 = V_3;
		return L_6;
	}

IL_003c:
	{
		bool L_7 = V_2;
		bool L_8 = V_2;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_7), ((int32_t)(uint32_t)L_8)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_001c;
	}

IL_0056:
	{
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_0013;
	}

IL_005b:
	{
		bool L_11 = V_2;
		int32_t L_12 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_11), ((int32_t)(uint32_t)L_12)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_008c;
	}

IL_0075:
	{
		V_2 = (bool)1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = x3c771d2672e85789_xe464bdcf3db42586_mC5E1F08BD5FCC4952E0C2AB5E620B26CBFD02BE9(L_14, (&V_1), (&V_2), NULL);
		V_3 = L_15;
		goto IL_0056;
	}

IL_0084:
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13 = (-1);
		goto IL_003a;
	}

IL_008c:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_000b;
		}
	}

IL_00a7:
	{
		String_t* L_19 = ___0_x11e2b209aab110d3;
		NullCheck(L_19);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20;
		L_20 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_19, NULL);
		V_0 = L_20;
		V_1 = 0;
		goto IL_0075;
	}

IL_00b2:
	{
		return NULL;
	}
}
// System.String ProtoBuf.Serializers.x3c771d2672e85789::x7603f80ae89ed7d1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* x3c771d2672e85789_x7603f80ae89ed7d1_m63E49516A8EA649C540EE357DAB6B0BF87D04C13 (RuntimeObject* ___0_x11e2b209aab110d3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)2000), NULL);
		V_0 = L_0;
		bool L_1 = V_1;
		bool L_2 = V_1;
		V_2 = (bool)(false? 1 : 0);
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_4 = ___0_x11e2b209aab110d3;
		StringBuilder_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = x3c771d2672e85789_x18017ffcd5c7e2ae_m43A62F555E0D1D8C8DAC07F4222AD6D0FB36F80C(L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0031;
	}

IL_002d:
	{
		return (String_t*)NULL;
	}

IL_002f:
	{
		goto IL_0034;
	}

IL_0031:
	{
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002d;
		}
	}

IL_0034:
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		return L_9;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x28884227c6ce27dd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x28884227c6ce27dd_m47BDAE09E543244C403CA06196C667FEE9A631A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13;
		return (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::x54411b2a6aec4bdf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_x54411b2a6aec4bdf_mFDDE0340E110BF4CB32304F697CFA65906DDBD7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13;
		return L_0;
	}
}
// System.String ProtoBuf.Serializers.x3c771d2672e85789::x4797ac62a173c6c6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* x3c771d2672e85789_x4797ac62a173c6c6_mC0126DB02C60AA090B66C26C4B21DF2B1CD00102 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_1 = V_1;
		V_2 = (bool)(false? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_0048;
	}

IL_001f:
	{
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		String_t* L_4 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0046;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		if (0)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_001f;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		String_t* L_7 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_008f;
	}

IL_0046:
	{
		goto IL_0075;
	}

IL_0048:
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_9 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 5));
	}

IL_0050:
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_10 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)15)));
		int32_t L_11 = V_1;
		int32_t L_12 = V_1;
		V_2 = (bool)(false? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_002e;
		}
	}

IL_0071:
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0075:
	{
		int32_t L_14 = V_1;
		V_2 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_14)&0))) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (L_15)
		{
			goto IL_008f;
		}
	}

IL_0089:
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_008f:
	{
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		String_t* L_16 = ((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14;
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		NullCheck(L_16);
		String_t* L_20;
		L_20 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_16, L_17, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1)), NULL);
		return L_20;
	}
}
// System.Collections.Hashtable ProtoBuf.Serializers.x3c771d2672e85789::x30f085f1ccc05ade(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* x3c771d2672e85789_x30f085f1ccc05ade_m2B99401E5B500F9F37BF6A944B98FB3775AAA4C6 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		V_0 = L_0;
		goto IL_017e;
	}

IL_000b:
	{
		goto IL_0011;
	}

IL_000d:
	{
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0069;
		}
	}

IL_0011:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = V_0;
		String_t* L_3 = V_3;
		RuntimeObject* L_4 = V_5;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
	}

IL_001a:
	{
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_018d;
		}
	}
	{
		if (!((int32_t)255))
		{
			goto IL_0113;
		}
	}
	{
		bool L_6 = V_4;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_6)|((int32_t)-1)))) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		bool L_8 = V_4;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_8)|((int32_t)-1)))) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (L_9)
		{
			goto IL_012d;
		}
	}
	{
		if (0)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_000b;
	}

IL_0065:
	{
		goto IL_006b;
	}

IL_0067:
	{
		goto IL_000d;
	}

IL_0069:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_006b:
	{
		goto IL_0098;
	}

IL_006d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)5)))
		{
			goto IL_0073;
		}
	}
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_0073:
	{
		V_4 = (bool)1;
		int32_t L_11 = V_1;
		V_6 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_11)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_000d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___0_x11e2b209aab110d3;
		int32_t* L_14 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = x3c771d2672e85789_xe464bdcf3db42586_mC5E1F08BD5FCC4952E0C2AB5E620B26CBFD02BE9(L_13, L_14, (&V_4), NULL);
		V_5 = L_15;
		goto IL_0067;
	}

IL_0098:
	{
		goto IL_019d;
	}

IL_009d:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_009f:
	{
		String_t* L_16 = V_3;
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_x11e2b209aab110d3;
		int32_t* L_18 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_17, L_18, NULL);
		V_1 = L_19;
		bool L_20 = V_4;
		bool L_21 = V_2;
		V_6 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_20), ((int32_t)(uint32_t)L_21)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_00c7;
		}
	}
	{
		if (!0)
		{
			goto IL_00d5;
		}
	}
	{
		goto IL_00cb;
	}

IL_00c7:
	{
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_0119;
		}
	}

IL_00cb:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = ___0_x11e2b209aab110d3;
		int32_t* L_25 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		String_t* L_26;
		L_26 = x3c771d2672e85789_x95db5d235451d5fa_m8CC7A3267CF5130A4EC416F8D437B4026A59ECC3(L_24, L_25, NULL);
		V_3 = L_26;
		goto IL_009f;
	}

IL_00d5:
	{
		if (((int32_t)8))
		{
			goto IL_00de;
		}
	}

IL_00dc:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27 = V_0;
		return L_27;
	}

IL_00de:
	{
		bool L_28 = V_4;
		int32_t L_29 = V_1;
		V_6 = (bool)(false? 1 : 0);
		bool L_30 = V_6;
		if (!L_30)
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32 = V_1;
		V_6 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_31), ((int32_t)(uint32_t)L_32)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_0153;
		}
	}
	{
		goto IL_0139;
	}

IL_0113:
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) == ((int32_t)6)))
		{
			goto IL_012d;
		}
	}
	{
		goto IL_00c7;
	}

IL_0119:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_35 = ___0_x11e2b209aab110d3;
		int32_t* L_36 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_37;
		L_37 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_35, L_36, NULL);
		goto IL_0137;
	}

IL_0123:
	{
		goto IL_001a;
	}

IL_0128:
	{
		int32_t L_38 = V_1;
		if (!L_38)
		{
			goto IL_0139;
		}
	}
	{
		goto IL_0113;
	}

IL_012d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = ___0_x11e2b209aab110d3;
		int32_t* L_40 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_39, L_40, NULL);
		goto IL_0123;
	}

IL_0137:
	{
		goto IL_013b;
	}

IL_0139:
	{
		return (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)NULL;
	}

IL_013b:
	{
		int32_t L_42 = V_1;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_42)|((int32_t)-1)))) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_0172;
		}
	}

IL_0153:
	{
		if (((int32_t)2))
		{
			goto IL_0128;
		}
	}
	{
		bool L_44 = V_4;
		V_6 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_44)|((int32_t)-2)))) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_6;
		if (!L_45)
		{
			goto IL_0139;
		}
	}

IL_0172:
	{
		goto IL_00dc;
	}

IL_0177:
	{
		if (((int32_t)2))
		{
			goto IL_0198;
		}
	}

IL_017e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = ___0_x11e2b209aab110d3;
		int32_t* L_47 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_48;
		L_48 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_46, L_47, NULL);
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_018d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = ___0_x11e2b209aab110d3;
		int32_t* L_50 = ___1_xc0c4c459c6ccbd00;
		int32_t L_51 = *((int32_t*)L_50);
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_52;
		L_52 = x3c771d2672e85789_x92b1f39635dc2e69_m78AFFC139B2347732C7DD8103F94CC925B27818A(L_49, L_51, NULL);
		V_1 = L_52;
		goto IL_0153;
	}

IL_0198:
	{
		goto IL_006d;
	}

IL_019d:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_53 = V_0;
		return L_53;
	}
}
// System.Collections.ArrayList ProtoBuf.Serializers.x3c771d2672e85789::x9e224c41c42ca8ee(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* x3c771d2672e85789_x9e224c41c42ca8ee_m8E61869E93A8CD02D0D9587BCA3F1D84B31B95C2 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		V_0 = L_0;
		if (((int32_t)15))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_004f;
	}

IL_0012:
	{
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		RuntimeObject* L_3 = V_4;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(27 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
	}

IL_001e:
	{
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0088;
	}

IL_0026:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_x11e2b209aab110d3;
		int32_t* L_7 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = x3c771d2672e85789_xe464bdcf3db42586_mC5E1F08BD5FCC4952E0C2AB5E620B26CBFD02BE9(L_6, L_7, (&V_3), NULL);
		V_4 = L_8;
		goto IL_0012;
	}

IL_0033:
	{
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_0035:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)4)))
		{
			goto IL_007c;
		}
	}
	{
		V_3 = (bool)1;
		bool L_10 = V_1;
		V_5 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_10)&0))) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_0086;
		}
	}

IL_004f:
	{
		bool L_12 = V_3;
		int32_t L_13 = V_2;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_12), ((int32_t)(uint32_t)L_13)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_14 = V_5;
		if (L_14)
		{
			goto IL_008f;
		}
	}
	{
		bool L_15 = V_1;
		V_5 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_15)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_008a;
		}
	}
	{
		if (!0)
		{
			goto IL_0035;
		}
	}

IL_007c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_x11e2b209aab110d3;
		int32_t* L_18 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_17, L_18, NULL);
		goto IL_00f2;
	}

IL_0086:
	{
		goto IL_0026;
	}

IL_0088:
	{
		goto IL_00f2;
	}

IL_008a:
	{
		goto IL_001e;
	}

IL_008f:
	{
		goto IL_001e;
	}

IL_0094:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = ___0_x11e2b209aab110d3;
		int32_t* L_21 = ___1_xc0c4c459c6ccbd00;
		int32_t L_22 = *((int32_t*)L_21);
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = x3c771d2672e85789_x92b1f39635dc2e69_m78AFFC139B2347732C7DD8103F94CC925B27818A(L_20, L_22, NULL);
		V_2 = L_23;
		int32_t L_24 = V_2;
		if (L_24)
		{
			goto IL_00a2;
		}
	}
	{
		return (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)NULL;
	}

IL_00a2:
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)6))))
		{
			goto IL_0035;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___0_x11e2b209aab110d3;
		int32_t* L_27 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_28;
		L_28 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_26, L_27, NULL);
		bool L_29 = V_3;
		bool L_30 = V_3;
		V_5 = (bool)(false? 1 : 0);
		bool L_31 = V_5;
		if (!L_31)
		{
			goto IL_008a;
		}
	}
	{
		goto IL_00ed;
	}

IL_00cb:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_32 = ___0_x11e2b209aab110d3;
		int32_t* L_33 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_32, L_33, NULL);
		V_1 = (bool)0;
		bool L_35 = V_3;
		bool L_36 = V_1;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_35), ((int32_t)(uint32_t)L_36)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_008f;
		}
	}

IL_00ed:
	{
		goto IL_004f;
	}

IL_00f2:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_38 = V_0;
		return L_38;
	}
}
// System.Object ProtoBuf.Serializers.x3c771d2672e85789::xe464bdcf3db42586(System.Char[],System.Int32&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* x3c771d2672e85789_xe464bdcf3db42586_mC5E1F08BD5FCC4952E0C2AB5E620B26CBFD02BE9 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, bool* ___2_xd938fd32778a1c95, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_x11e2b209aab110d3;
		int32_t* L_1 = ___1_xc0c4c459c6ccbd00;
		int32_t L_2 = *((int32_t*)L_1);
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = x3c771d2672e85789_x92b1f39635dc2e69_m78AFFC139B2347732C7DD8103F94CC925B27818A(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0069;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(_stringLiteralA539038315AABE91ABF55F3F1AEE619EEBFC183A, NULL);
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_001b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_x11e2b209aab110d3;
		int32_t* L_8 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_7, L_8, NULL);
		return NULL;
	}

IL_0025:
	{
		bool* L_10 = ___2_xd938fd32778a1c95;
		*((int8_t*)L_10) = (int8_t)0;
		if (!((int32_t)3))
		{
			goto IL_005f;
		}
	}
	{
		if (!0)
		{
			goto IL_00be;
		}
	}
	{
		goto IL_0069;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = ___0_x11e2b209aab110d3;
		int32_t* L_12 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_13;
		L_13 = x3c771d2672e85789_x30f085f1ccc05ade_m2B99401E5B500F9F37BF6A944B98FB3775AAA4C6(L_11, L_12, NULL);
		return L_13;
	}

IL_003f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___0_x11e2b209aab110d3;
		int32_t* L_15 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16;
		L_16 = x3c771d2672e85789_x9e224c41c42ca8ee_m8E61869E93A8CD02D0D9587BCA3F1D84B31B95C2(L_14, L_15, NULL);
		return L_16;
	}

IL_0047:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___0_x11e2b209aab110d3;
		int32_t* L_18 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_17, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(_stringLiteralDA88A2D964F57B37C63183F5236085B715F076B8, NULL);
		bool L_21 = L_20;
		RuntimeObject* L_22 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_005f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = ___0_x11e2b209aab110d3;
		int32_t* L_24 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_25;
		L_25 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_23, L_24, NULL);
		goto IL_00b9;
	}

IL_0069:
	{
		int32_t L_26 = V_0;
		switch (L_26)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0025;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0025;
			}
			case 5:
			{
				goto IL_0025;
			}
			case 6:
			{
				goto IL_0025;
			}
			case 7:
			{
				goto IL_00a4;
			}
			case 8:
			{
				goto IL_00ac;
			}
			case 9:
			{
				goto IL_0047;
			}
			case 10:
			{
				goto IL_005f;
			}
			case 11:
			{
				goto IL_001b;
			}
		}
	}
	{
		goto IL_0025;
	}

IL_00a4:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = ___0_x11e2b209aab110d3;
		int32_t* L_28 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = x3c771d2672e85789_x95db5d235451d5fa_m8CC7A3267CF5130A4EC416F8D437B4026A59ECC3(L_27, L_28, NULL);
		return L_29;
	}

IL_00ac:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ___0_x11e2b209aab110d3;
		int32_t* L_31 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		double L_32;
		L_32 = x3c771d2672e85789_xe903d4e242ac5b50_m115A5BEF81A7FFFC5D016B47FB25079E82AB5333(L_30, L_31, NULL);
		double L_33 = L_32;
		RuntimeObject* L_34 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_00b9:
	{
		goto IL_000b;
	}

IL_00be:
	{
		return NULL;
	}
}
// System.String ProtoBuf.Serializers.x3c771d2672e85789::x95db5d235451d5fa(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* x3c771d2672e85789_x95db5d235451d5fa_m8CC7A3267CF5130A4EC416F8D437B4026A59ECC3 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		int32_t L_0 = V_6;
		int32_t L_1 = V_3;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_0), ((int32_t)(uint32_t)L_1)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_2 = V_8;
		if (!L_2)
		{
			goto IL_0375;
		}
	}

IL_0021:
	{
		bool L_3 = V_2;
		if (L_3)
		{
			goto IL_039a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0029:
	{
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0327;
		}
	}
	{
		goto IL_0021;
	}

IL_0031:
	{
		int32_t* L_5 = ___1_xc0c4c459c6ccbd00;
		int32_t L_6 = *((int32_t*)L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_x11e2b209aab110d3;
		NullCheck(L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_02a3;
		}
	}
	{
		goto IL_0086;
	}

IL_003d:
	{
		goto IL_0029;
	}

IL_003f:
	{
		String_t* L_8 = V_0;
		Il2CppChar L_9 = V_1;
		Il2CppChar L_10 = L_9;
		RuntimeObject* L_11 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_8, L_11, NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_004e:
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)117))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0084;
	}

IL_0058:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___0_x11e2b209aab110d3;
		int32_t* L_15 = ___1_xc0c4c459c6ccbd00;
		int32_t L_16 = *((int32_t*)L_15);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_16, (RuntimeArray*)L_17, 0, 4, NULL);
		String_t* L_18 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_4;
		String_t* L_20;
		L_20 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_18, _stringLiteralCEB6890FC169A5D98961042EBCAD0677F2F0656F, L_20, _stringLiteral951CCB49640C8F9E81FB4E0D82730321F4E15BB3, NULL);
		V_0 = L_21;
	}

IL_007c:
	{
		int32_t* L_22 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_23 = L_22;
		int32_t L_24 = *((int32_t*)L_23);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, 4));
		goto IL_003d;
	}

IL_0084:
	{
		goto IL_0029;
	}

IL_0086:
	{
		goto IL_0092;
	}

IL_0088:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_25;
		goto IL_0058;
	}

IL_0092:
	{
		goto IL_0373;
	}

IL_0097:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) < ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_00db;
	}

IL_00a0:
	{
		bool L_27 = V_2;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_27)&0))) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_019d;
		}
	}
	{
		Il2CppChar L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_30 = V_0;
		Il2CppChar L_31 = ((Il2CppChar)((int32_t)9));
		RuntimeObject* L_32 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_30, L_32, NULL);
		V_0 = L_33;
		goto IL_0029;
	}

IL_00d2:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = ___0_x11e2b209aab110d3;
		NullCheck(L_34);
		int32_t* L_35 = ___1_xc0c4c459c6ccbd00;
		int32_t L_36 = *((int32_t*)L_35);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), L_36));
		goto IL_0097;
	}

IL_00db:
	{
		int32_t L_37 = V_5;
		V_8 = (bool)(false? 1 : 0);
		bool L_38 = V_8;
		if (!L_38)
		{
			goto IL_036e;
		}
	}
	{
		goto IL_030b;
	}

IL_00f5:
	{
		goto IL_0029;
	}

IL_00fa:
	{
		Il2CppChar L_39 = V_1;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)114))))
		{
			goto IL_0116;
		}
	}
	{
		bool L_40 = V_2;
		V_8 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_40)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_41 = V_8;
		if (L_41)
		{
			goto IL_01c4;
		}
	}
	{
		goto IL_0126;
	}

IL_0116:
	{
		String_t* L_42 = V_0;
		Il2CppChar L_43 = ((Il2CppChar)((int32_t)13));
		RuntimeObject* L_44 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_42, L_44, NULL);
		V_0 = L_45;
		goto IL_00f5;
	}

IL_0126:
	{
		goto IL_0142;
	}

IL_0128:
	{
		int32_t L_46 = V_3;
		int32_t L_47 = V_7;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_46), ((int32_t)(uint32_t)L_47)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_48 = V_8;
		if (!L_48)
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0116;
	}

IL_0142:
	{
		int32_t L_49 = V_5;
		int32_t L_50 = V_7;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_49), ((int32_t)(uint32_t)L_50)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_51 = V_8;
		if (!L_51)
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_52 = V_6;
		V_8 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_52)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_53 = V_8;
		if (!L_53)
		{
			goto IL_030b;
		}
	}

IL_0172:
	{
		goto IL_0029;
	}

IL_0177:
	{
		Il2CppChar L_54 = V_1;
		if ((((int32_t)L_54) == ((int32_t)((int32_t)110))))
		{
			goto IL_0181;
		}
	}
	{
		goto IL_034e;
	}

IL_0181:
	{
		String_t* L_55 = V_0;
		Il2CppChar L_56 = ((Il2CppChar)((int32_t)10));
		RuntimeObject* L_57 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_56);
		String_t* L_58;
		L_58 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_55, L_57, NULL);
		V_0 = L_58;
		goto IL_01b5;
	}

IL_0191:
	{
		Il2CppChar L_59 = V_1;
		if ((((int32_t)L_59) == ((int32_t)((int32_t)98))))
		{
			goto IL_01b7;
		}
	}
	{
		if (!((int32_t)4))
		{
			goto IL_0177;
		}
	}

IL_019d:
	{
		Il2CppChar L_60 = V_1;
		if ((!(((uint32_t)L_60) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0177;
		}
	}
	{
		String_t* L_61 = V_0;
		Il2CppChar L_62 = ((Il2CppChar)((int32_t)12));
		RuntimeObject* L_63 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_62);
		String_t* L_64;
		L_64 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_61, L_63, NULL);
		V_0 = L_64;
		goto IL_0029;
	}

IL_01b5:
	{
		goto IL_0218;
	}

IL_01b7:
	{
		String_t* L_65 = V_0;
		Il2CppChar L_66 = ((Il2CppChar)8);
		RuntimeObject* L_67 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68;
		L_68 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_65, L_67, NULL);
		V_0 = L_68;
	}

IL_01c4:
	{
		goto IL_0029;
	}

IL_01c9:
	{
		Il2CppChar L_69 = V_1;
		if ((((int32_t)L_69) == ((int32_t)((int32_t)47))))
		{
			goto IL_0205;
		}
	}
	{
		bool L_70 = V_2;
		V_8 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_70)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_71 = V_8;
		if (L_71)
		{
			goto IL_02f6;
		}
	}
	{
		goto IL_0191;
	}

IL_01e5:
	{
		bool L_72 = V_2;
		int32_t L_73 = V_7;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_72), ((int32_t)(uint32_t)L_73)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_74 = V_8;
		if (L_74)
		{
			goto IL_0172;
		}
	}
	{
		goto IL_0029;
	}

IL_0205:
	{
		String_t* L_75 = V_0;
		Il2CppChar L_76 = ((Il2CppChar)((int32_t)47));
		RuntimeObject* L_77 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_76);
		String_t* L_78;
		L_78 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_75, L_77, NULL);
		V_0 = L_78;
		goto IL_0029;
	}

IL_0218:
	{
		goto IL_027b;
	}

IL_021a:
	{
		Il2CppChar L_79 = V_1;
		if ((((int32_t)L_79) == ((int32_t)((int32_t)34))))
		{
			goto IL_0263;
		}
	}
	{
		Il2CppChar L_80 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_81 = V_0;
		Il2CppChar L_82 = ((Il2CppChar)((int32_t)92));
		RuntimeObject* L_83 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_82);
		String_t* L_84;
		L_84 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_81, L_83, NULL);
		V_0 = L_84;
		int32_t L_85 = V_7;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_85)&0))) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_8;
		if (!L_86)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0276;
	}

IL_024b:
	{
		int32_t L_87 = V_5;
		int32_t L_88 = V_6;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_87), ((int32_t)(uint32_t)L_88)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_89 = V_8;
		if (!L_89)
		{
			goto IL_021a;
		}
	}

IL_0263:
	{
		String_t* L_90 = V_0;
		Il2CppChar L_91 = ((Il2CppChar)((int32_t)34));
		RuntimeObject* L_92 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_91);
		String_t* L_93;
		L_93 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(L_90, L_92, NULL);
		V_0 = L_93;
		goto IL_0029;
	}

IL_0276:
	{
		goto IL_01e5;
	}

IL_027b:
	{
		goto IL_0309;
	}

IL_0280:
	{
		Il2CppChar L_94 = V_1;
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_95 = V_7;
		V_8 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_95)|((int32_t)-2147483648LL)))) == ((int32_t)0))? 1 : 0);
		bool L_96 = V_8;
		if (!L_96)
		{
			goto IL_0031;
		}
	}

IL_02a3:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_97 = ___0_x11e2b209aab110d3;
		int32_t* L_98 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_99 = L_98;
		int32_t L_100 = *((int32_t*)L_99);
		int32_t L_101 = L_100;
		V_7 = L_101;
		*((int32_t*)L_99) = (int32_t)((int32_t)il2cpp_codegen_add(L_101, 1));
		int32_t L_102 = V_7;
		NullCheck(L_97);
		int32_t L_103 = L_102;
		uint16_t L_104 = (uint16_t)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_1 = L_104;
		int32_t L_105 = V_3;
		int32_t L_106 = V_7;
		V_8 = (bool)(false? 1 : 0);
		bool L_107 = V_8;
		if (!L_107)
		{
			goto IL_0304;
		}
	}
	{
		int32_t L_108 = V_7;
		int32_t L_109 = V_5;
		V_8 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_108), ((int32_t)(uint32_t)L_109)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_110 = V_8;
		if (!L_110)
		{
			goto IL_02e8;
		}
	}

IL_02e1:
	{
		Il2CppChar L_111 = V_1;
		if ((((int32_t)L_111) == ((int32_t)((int32_t)34))))
		{
			goto IL_02f8;
		}
	}
	{
		goto IL_02ff;
	}

IL_02e8:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_112 = ___0_x11e2b209aab110d3;
		int32_t* L_113 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_114 = L_113;
		int32_t L_115 = *((int32_t*)L_114);
		int32_t L_116 = L_115;
		V_6 = L_116;
		*((int32_t*)L_114) = (int32_t)((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_117 = V_6;
		NullCheck(L_112);
		int32_t L_118 = L_117;
		uint16_t L_119 = (uint16_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_1 = L_119;
	}

IL_02f6:
	{
		goto IL_02e1;
	}

IL_02f8:
	{
		V_2 = (bool)1;
		goto IL_0021;
	}

IL_02ff:
	{
		goto IL_0280;
	}

IL_0304:
	{
		goto IL_024b;
	}

IL_0309:
	{
		goto IL_0333;
	}

IL_030b:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = ___0_x11e2b209aab110d3;
		int32_t* L_121 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x6503e8821f6023fa_mC14DAB755ED878FC9D203667BBAE5D194B3B7E03(L_120, L_121, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_122 = ___0_x11e2b209aab110d3;
		int32_t* L_123 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_124 = L_123;
		int32_t L_125 = *((int32_t*)L_124);
		int32_t L_126 = L_125;
		V_5 = L_126;
		*((int32_t*)L_124) = (int32_t)((int32_t)il2cpp_codegen_add(L_126, 1));
		int32_t L_127 = V_5;
		NullCheck(L_122);
		int32_t L_128 = L_127;
		uint16_t L_129 = (uint16_t)(L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_1 = L_129;
		V_2 = (bool)0;
		goto IL_0029;
	}

IL_0327:
	{
		int32_t* L_130 = ___1_xc0c4c459c6ccbd00;
		int32_t L_131 = *((int32_t*)L_130);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_132 = ___0_x11e2b209aab110d3;
		NullCheck(L_132);
		if ((((int32_t)L_131) == ((int32_t)((int32_t)(((RuntimeArray*)L_132)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_02e8;
	}

IL_0333:
	{
		int32_t L_133 = V_7;
		int32_t L_134 = V_5;
		V_8 = (bool)(false? 1 : 0);
		bool L_135 = V_8;
		if (!L_135)
		{
			goto IL_0172;
		}
	}

IL_034e:
	{
		int32_t L_136 = V_7;
		int32_t L_137 = V_7;
		V_8 = (bool)(false? 1 : 0);
		bool L_138 = V_8;
		if (!L_138)
		{
			goto IL_0128;
		}
	}

IL_0369:
	{
		goto IL_00a0;
	}

IL_036e:
	{
		goto IL_0088;
	}

IL_0373:
	{
		goto IL_0395;
	}

IL_0375:
	{
		int32_t L_139 = V_3;
		int32_t L_140 = V_5;
		V_8 = (bool)(false? 1 : 0);
		bool L_141 = V_8;
		if (L_141)
		{
			goto IL_01c9;
		}
	}
	{
		goto IL_030b;
	}

IL_0395:
	{
		goto IL_0021;
	}

IL_039a:
	{
		String_t* L_142 = V_0;
		return L_142;
	}
}
// System.Double ProtoBuf.Serializers.x3c771d2672e85789::xe903d4e242ac5b50(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double x3c771d2672e85789_xe903d4e242ac5b50_m115A5BEF81A7FFFC5D016B47FB25079E82AB5333 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	bool V_3 = false;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_x11e2b209aab110d3;
		int32_t* L_1 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x6503e8821f6023fa_mC14DAB755ED878FC9D203667BBAE5D194B3B7E03(L_0, L_1, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_x11e2b209aab110d3;
		int32_t* L_3 = ___1_xc0c4c459c6ccbd00;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = x3c771d2672e85789_xdb23184c8634c3aa_m5DE95C276796D8947A547973C0874D71E0A81054(L_2, L_4, NULL);
		V_0 = L_5;
	}

IL_0010:
	{
		int32_t L_6 = V_0;
		int32_t* L_7 = ___1_xc0c4c459c6ccbd00;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_6, L_8)), 1));
		int32_t L_9 = V_1;
		int32_t L_10 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_12 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_2 = L_13;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___0_x11e2b209aab110d3;
		int32_t* L_15 = ___1_xc0c4c459c6ccbd00;
		int32_t L_16 = *((int32_t*)L_15);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_2;
		int32_t L_18 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_16, (RuntimeArray*)L_17, 0, L_18, NULL);
		int32_t* L_19 = ___1_xc0c4c459c6ccbd00;
		int32_t L_20 = V_0;
		*((int32_t*)L_19) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_2;
		String_t* L_22;
		L_22 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_21, NULL);
		double L_23;
		L_23 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_22, NULL);
		return L_23;
	}
}
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::xdb23184c8634c3aa(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_xdb23184c8634c3aa_m5DE95C276796D8947A547973C0874D71E0A81054 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = ___1_xc0c4c459c6ccbd00;
		V_0 = L_0;
		goto IL_002a;
	}

IL_0004:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_x11e2b209aab110d3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_4, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0038;
	}

IL_0016:
	{
		int32_t L_6 = V_0;
		V_1 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_6)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0004;
		}
	}
	{
		goto IL_0038;
	}

IL_002a:
	{
		goto IL_0030;
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0030:
	{
		int32_t L_9 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___0_x11e2b209aab110d3;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		goto IL_0016;
	}

IL_0038:
	{
		int32_t L_11 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}
}
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x6503e8821f6023fa(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x6503e8821f6023fa_mC14DAB755ED878FC9D203667BBAE5D194B3B7E03 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0002;
	}

IL_0002:
	{
		int32_t* L_0 = ___1_xc0c4c459c6ccbd00;
		int32_t L_1 = *((int32_t*)L_0);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_x11e2b209aab110d3;
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0025;
	}

IL_000b:
	{
		return;
	}

IL_000c:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___0_x11e2b209aab110d3;
		int32_t* L_4 = ___1_xc0c4c459c6ccbd00;
		int32_t L_5 = *((int32_t*)L_4);
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C);
		int32_t L_8;
		L_8 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralEBC658B067B5C785A3F0BB67D73755F6FEE7F70C, L_7, NULL);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t* L_9 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_10 = L_9;
		int32_t L_11 = *((int32_t*)L_10);
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_0002;
	}

IL_0025:
	{
		return;
	}
}
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::x92b1f39635dc2e69(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_x92b1f39635dc2e69_m78AFFC139B2347732C7DD8103F94CC925B27818A (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_xc0c4c459c6ccbd00;
		V_0 = L_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___0_x11e2b209aab110d3;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812(L_1, (&V_0), NULL);
		return L_2;
	}
}
// System.Int32 ProtoBuf.Serializers.x3c771d2672e85789::xab05c62a2a183f47(System.Char[],System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3c771d2672e85789_xab05c62a2a183f47_m3D0E3D72433C26BD1FE1410ECDAD711FB77EB812 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_x11e2b209aab110d3, int32_t* ___1_xc0c4c459c6ccbd00, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	bool V_3 = false;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_x11e2b209aab110d3;
		int32_t* L_1 = ___1_xc0c4c459c6ccbd00;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x6503e8821f6023fa_mC14DAB755ED878FC9D203667BBAE5D194B3B7E03(L_0, L_1, NULL);
		goto IL_0306;
	}

IL_000c:
	{
		goto IL_0018;
	}

IL_000e:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_x11e2b209aab110d3;
		int32_t* L_3 = ___1_xc0c4c459c6ccbd00;
		int32_t L_4 = *((int32_t*)L_3);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		uint16_t L_6 = (uint16_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_003c;
		}
	}

IL_0018:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_x11e2b209aab110d3;
		int32_t* L_8 = ___1_xc0c4c459c6ccbd00;
		int32_t L_9 = *((int32_t*)L_8);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint16_t L_11 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_11) == ((int32_t)((int32_t)108))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_12)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_022e;
		}
	}

IL_0037:
	{
		goto IL_031b;
	}

IL_003c:
	{
		if (0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_004a;
	}

IL_0041:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)4)))
		{
			goto IL_005a;
		}
	}
	{
		goto IL_031b;
	}

IL_004a:
	{
		goto IL_0055;
	}

IL_004c:
	{
		int32_t* L_15 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_16 = L_15;
		int32_t L_17 = *((int32_t*)L_16);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_17, 4));
	}

IL_0052:
	{
		return ((int32_t)11);
	}

IL_0055:
	{
		goto IL_031b;
	}

IL_005a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___0_x11e2b209aab110d3;
		int32_t* L_19 = ___1_xc0c4c459c6ccbd00;
		int32_t L_20 = *((int32_t*)L_19);
		NullCheck(L_18);
		int32_t L_21 = L_20;
		uint16_t L_22 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_031b;
		}
	}
	{
		goto IL_000e;
	}

IL_0067:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = ___0_x11e2b209aab110d3;
		int32_t* L_24 = ___1_xc0c4c459c6ccbd00;
		int32_t L_25 = *((int32_t*)L_24);
		NullCheck(L_23);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 3));
		uint16_t L_27 = (uint16_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_031b;
		}
	}
	{
		int32_t L_28 = V_1;
		int32_t L_29 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_28), ((int32_t)(uint32_t)L_29)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_30 = V_3;
		if (L_30)
		{
			goto IL_031b;
		}
	}
	{
		int32_t L_31 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_31)|((int32_t)1)))) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_3;
		if (!L_32)
		{
			goto IL_00b6;
		}
	}

IL_00a7:
	{
		if (!((int32_t)15))
		{
			goto IL_01f7;
		}
	}
	{
		goto IL_0041;
	}

IL_00b6:
	{
		goto IL_01cc;
	}

IL_00bb:
	{
		return ((int32_t)9);
	}

IL_00be:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___0_x11e2b209aab110d3;
		int32_t* L_34 = ___1_xc0c4c459c6ccbd00;
		int32_t L_35 = *((int32_t*)L_34);
		NullCheck(L_33);
		int32_t L_36 = ((int32_t)il2cpp_codegen_add(L_35, 2));
		uint16_t L_37 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_37) == ((int32_t)((int32_t)117))))
		{
			goto IL_00e5;
		}
	}
	{
		if (!0)
		{
			goto IL_00fb;
		}
	}

IL_00cb:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = ___0_x11e2b209aab110d3;
		int32_t* L_39 = ___1_xc0c4c459c6ccbd00;
		int32_t L_40 = *((int32_t*)L_39);
		NullCheck(L_38);
		int32_t L_41 = L_40;
		uint16_t L_42 = (uint16_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0041;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = ___0_x11e2b209aab110d3;
		int32_t* L_44 = ___1_xc0c4c459c6ccbd00;
		int32_t L_45 = *((int32_t*)L_44);
		NullCheck(L_43);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		uint16_t L_47 = (uint16_t)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00be;
	}

IL_00e5:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = ___0_x11e2b209aab110d3;
		int32_t* L_49 = ___1_xc0c4c459c6ccbd00;
		int32_t L_50 = *((int32_t*)L_49);
		NullCheck(L_48);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint16_t L_52 = (uint16_t)(L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t* L_53 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_54 = L_53;
		int32_t L_55 = *((int32_t*)L_54);
		*((int32_t*)L_54) = (int32_t)((int32_t)il2cpp_codegen_add(L_55, 4));
		if (!0)
		{
			goto IL_00bb;
		}
	}

IL_00fb:
	{
		if (!0)
		{
			goto IL_010a;
		}
	}

IL_00fe:
	{
		if (0)
		{
			goto IL_0115;
		}
	}

IL_0101:
	{
		int32_t L_56 = V_1;
		if ((((int32_t)L_56) < ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_00cb;
	}

IL_010a:
	{
		goto IL_010e;
	}

IL_010c:
	{
		goto IL_0101;
	}

IL_010e:
	{
		if (((int32_t)255))
		{
			goto IL_0143;
		}
	}

IL_0115:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57 = ___0_x11e2b209aab110d3;
		int32_t* L_58 = ___1_xc0c4c459c6ccbd00;
		int32_t L_59 = *((int32_t*)L_58);
		NullCheck(L_57);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint16_t L_61 = (uint16_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_61) == ((int32_t)((int32_t)101))))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_62 = V_1;
		int32_t L_63 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_62), ((int32_t)(uint32_t)L_63)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_64 = V_3;
		if (!L_64)
		{
			goto IL_0101;
		}
	}
	{
		if (!((int32_t)2147483647LL))
		{
			goto IL_0181;
		}
	}
	{
		goto IL_010c;
	}

IL_0143:
	{
		int32_t L_65 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_65)|((int32_t)3)))) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_3;
		if (!L_66)
		{
			goto IL_01c7;
		}
	}
	{
		goto IL_017c;
	}

IL_015d:
	{
		if (!((int32_t)3))
		{
			goto IL_0052;
		}
	}
	{
		if (0)
		{
			goto IL_0037;
		}
	}

IL_016d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = ___0_x11e2b209aab110d3;
		int32_t* L_68 = ___1_xc0c4c459c6ccbd00;
		int32_t L_69 = *((int32_t*)L_68);
		NullCheck(L_67);
		int32_t L_70 = ((int32_t)il2cpp_codegen_add(L_69, 3));
		uint16_t L_71 = (uint16_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((((int32_t)L_71) == ((int32_t)((int32_t)115))))
		{
			goto IL_0115;
		}
	}
	{
		goto IL_00fe;
	}

IL_017c:
	{
		goto IL_0101;
	}

IL_0181:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_72 = ___0_x11e2b209aab110d3;
		int32_t* L_73 = ___1_xc0c4c459c6ccbd00;
		int32_t L_74 = *((int32_t*)L_73);
		NullCheck(L_72);
		int32_t L_75 = L_74;
		uint16_t L_76 = (uint16_t)(L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_017c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = ___0_x11e2b209aab110d3;
		int32_t* L_78 = ___1_xc0c4c459c6ccbd00;
		int32_t L_79 = *((int32_t*)L_78);
		NullCheck(L_77);
		int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
		uint16_t L_81 = (uint16_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((((int32_t)L_81) == ((int32_t)((int32_t)97))))
		{
			goto IL_01d6;
		}
	}
	{
		int32_t L_82 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_82)&0))) == ((int32_t)0))? 1 : 0);
		bool L_83 = V_3;
		if (L_83)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_84 = V_1;
		int32_t L_85 = V_1;
		V_3 = (bool)(false? 1 : 0);
		bool L_86 = V_3;
		if (!L_86)
		{
			goto IL_015d;
		}
	}
	{
		goto IL_0115;
	}

IL_01c7:
	{
		goto IL_00a7;
	}

IL_01cc:
	{
		goto IL_0316;
	}

IL_01d1:
	{
		return ((int32_t)10);
	}

IL_01d4:
	{
		goto IL_0181;
	}

IL_01d6:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_87 = ___0_x11e2b209aab110d3;
		int32_t* L_88 = ___1_xc0c4c459c6ccbd00;
		int32_t L_89 = *((int32_t*)L_88);
		NullCheck(L_87);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 2));
		uint16_t L_91 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		if ((!(((uint32_t)L_91) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0101;
		}
	}
	{
		goto IL_016d;
	}

IL_01e8:
	{
		int32_t* L_92 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_93 = L_92;
		int32_t L_94 = *((int32_t*)L_93);
		*((int32_t*)L_93) = (int32_t)((int32_t)il2cpp_codegen_add(L_94, 5));
		goto IL_022a;
	}

IL_01f0:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_95 = ___0_x11e2b209aab110d3;
		NullCheck(L_95);
		int32_t* L_96 = ___1_xc0c4c459c6ccbd00;
		int32_t L_97 = *((int32_t*)L_96);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), L_97));
	}

IL_01f7:
	{
		int32_t L_98 = V_1;
		if ((((int32_t)L_98) < ((int32_t)5)))
		{
			goto IL_0101;
		}
	}
	{
		if (!((int32_t)8))
		{
			goto IL_0286;
		}
	}
	{
		goto IL_0228;
	}

IL_020a:
	{
		return 5;
	}

IL_020c:
	{
		int32_t* L_99 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_100 = L_99;
		int32_t L_101 = *((int32_t*)L_100);
		*((int32_t*)L_100) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_101, 1));
		if (!((int32_t)-1))
		{
			goto IL_01f0;
		}
	}
	{
		if (0)
		{
			goto IL_01d6;
		}
	}
	{
		if (!((int32_t)4))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_01f0;
	}

IL_0228:
	{
		goto IL_01d4;
	}

IL_022a:
	{
		goto IL_01d1;
	}

IL_022c:
	{
		return 4;
	}

IL_022e:
	{
		return 6;
	}

IL_0230:
	{
		return 7;
	}

IL_0232:
	{
		return 8;
	}

IL_0234:
	{
		Il2CppChar L_102 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_102, ((int32_t)91))))
		{
			case 0:
			{
				goto IL_0264;
			}
			case 1:
			{
				goto IL_020c;
			}
			case 2:
			{
				goto IL_022c;
			}
		}
	}
	{
		Il2CppChar L_103 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_103, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_0260;
			}
			case 1:
			{
				goto IL_020c;
			}
			case 2:
			{
				goto IL_0262;
			}
		}
	}
	{
		goto IL_020c;
	}

IL_0260:
	{
		return 1;
	}

IL_0262:
	{
		return 2;
	}

IL_0264:
	{
		return 3;
	}

IL_0266:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_104 = ___0_x11e2b209aab110d3;
		int32_t* L_105 = ___1_xc0c4c459c6ccbd00;
		int32_t L_106 = *((int32_t*)L_105);
		NullCheck(L_104);
		int32_t L_107 = L_106;
		uint16_t L_108 = (uint16_t)(L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = L_108;
		int32_t L_109 = V_1;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_109)|((int32_t)255)))) == ((int32_t)0))? 1 : 0);
		bool L_110 = V_3;
		if (L_110)
		{
			goto IL_004c;
		}
	}

IL_0286:
	{
		int32_t* L_111 = ___1_xc0c4c459c6ccbd00;
		int32_t* L_112 = L_111;
		int32_t L_113 = *((int32_t*)L_112);
		*((int32_t*)L_112) = (int32_t)((int32_t)il2cpp_codegen_add(L_113, 1));
		Il2CppChar L_114 = V_0;
		V_2 = L_114;
		Il2CppChar L_115 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_115, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_0230;
			}
			case 1:
			{
				goto IL_020c;
			}
			case 2:
			{
				goto IL_020c;
			}
			case 3:
			{
				goto IL_020c;
			}
			case 4:
			{
				goto IL_020c;
			}
			case 5:
			{
				goto IL_020c;
			}
			case 6:
			{
				goto IL_020c;
			}
			case 7:
			{
				goto IL_020c;
			}
			case 8:
			{
				goto IL_020c;
			}
			case 9:
			{
				goto IL_020c;
			}
			case 10:
			{
				goto IL_022e;
			}
			case 11:
			{
				goto IL_0232;
			}
			case 12:
			{
				goto IL_020c;
			}
			case 13:
			{
				goto IL_020c;
			}
			case 14:
			{
				goto IL_0232;
			}
			case 15:
			{
				goto IL_0232;
			}
			case 16:
			{
				goto IL_0232;
			}
			case 17:
			{
				goto IL_0232;
			}
			case 18:
			{
				goto IL_0232;
			}
			case 19:
			{
				goto IL_0232;
			}
			case 20:
			{
				goto IL_0232;
			}
			case 21:
			{
				goto IL_0232;
			}
			case 22:
			{
				goto IL_0232;
			}
			case 23:
			{
				goto IL_0232;
			}
			case 24:
			{
				goto IL_020a;
			}
		}
	}
	{
		if (!0)
		{
			goto IL_0234;
		}
	}
	{
		goto IL_022c;
	}

IL_0306:
	{
		goto IL_030a;
	}

IL_0308:
	{
		return 0;
	}

IL_030a:
	{
		int32_t* L_116 = ___1_xc0c4c459c6ccbd00;
		int32_t L_117 = *((int32_t*)L_116);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = ___0_x11e2b209aab110d3;
		NullCheck(L_118);
		if ((((int32_t)L_117) == ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_0308;
		}
	}
	{
		goto IL_0266;
	}

IL_0316:
	{
		goto IL_004c;
	}

IL_031b:
	{
		return 0;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::xca1f06ca5a1f26ac(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_xca1f06ca5a1f26ac_mC1B16CFD65E14F5A66C84775C5A8ACC8F709E907 (RuntimeObject* ___0_x50a87f60bf5d15ae, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_x50a87f60bf5d15ae;
		if (!((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_0, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = ___0_x50a87f60bf5d15ae;
		StringBuilder_t* L_2 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = x3c771d2672e85789_x988d678ef128ed4f_mFB8775336F8CDFD5BA66E51A0DB5FA647F08B52A(((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_1, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___0_x50a87f60bf5d15ae;
		StringBuilder_t* L_5 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = x3c771d2672e85789_x327a6c5b340675b5_mB5E59B73F1D2100D735CF5FDE09FFE2A412B89CE(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_4, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		RuntimeObject* L_7 = ___0_x50a87f60bf5d15ae;
		if (((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_7, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		if (0)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x988d678ef128ed4f(System.Collections.Hashtable,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x988d678ef128ed4f_mFB8775336F8CDFD5BA66E51A0DB5FA647F08B52A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___0_xa5c6726892f9f63d, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	{
		StringBuilder_t* L_0 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		bool L_2 = V_1;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_2)|((int32_t)2147483647LL)))) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_006a;
	}

IL_0029:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_007a;
		}
	}
	{
		StringBuilder_t* L_6 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		if (!0)
		{
			goto IL_0068;
		}
	}

IL_0040:
	{
		String_t* L_8 = V_2;
		StringBuilder_t* L_9 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E(L_8, L_9, NULL);
		StringBuilder_t* L_10 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		if (0)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject* L_12 = V_3;
		StringBuilder_t* L_13 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = x3c771d2672e85789_x18017ffcd5c7e2ae_m43A62F555E0D1D8C8DAC07F4222AD6D0FB36F80C(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0064:
	{
		V_1 = (bool)0;
		goto IL_0029;
	}

IL_0068:
	{
		goto IL_0071;
	}

IL_006a:
	{
		goto IL_0040;
	}

IL_006c:
	{
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00a5;
		}
	}
	{
		goto IL_0040;
	}

IL_0071:
	{
		if (((int32_t)2147483647LL))
		{
			goto IL_00c6;
		}
	}
	{
		goto IL_00b6;
	}

IL_007a:
	{
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_16);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		V_2 = L_18;
		RuntimeObject* L_19 = V_0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_19);
		V_3 = L_20;
	}

IL_008d:
	{
		bool L_21 = V_1;
		bool L_22 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_21), ((int32_t)(uint32_t)L_22)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_006c;
		}
	}

IL_00a5:
	{
		StringBuilder_t* L_24 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		if (0)
		{
			goto IL_008d;
		}
	}
	{
		goto IL_00c4;
	}

IL_00b6:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_26 = ___0_xa5c6726892f9f63d;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_26);
		V_0 = L_27;
	}

IL_00bd:
	{
		V_1 = (bool)1;
		goto IL_0029;
	}

IL_00c4:
	{
		goto IL_006a;
	}

IL_00c6:
	{
		return (bool)1;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x7174baaa60fba55a(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x7174baaa60fba55a_m3A482142AA0F5AC550907D8F6DD124DDE41450AF (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_x273c212ea6c4689b, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		StringBuilder_t* L_0 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		V_0 = (bool)1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___0_x273c212ea6c4689b;
		NullCheck(L_2);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_3;
		L_3 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_2, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_2), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0017_1:
			{
				if (!((int32_t)15))
				{
					goto IL_0039_1;
				}
			}
			{
				goto IL_0072_1;
			}

IL_0020_1:
			{
				StringBuilder_t* L_4 = ___1_xd07ce4b74c5774a7;
				NullCheck(L_4);
				StringBuilder_t* L_5;
				L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				StringBuilder_t* L_7 = ___1_xd07ce4b74c5774a7;
				il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
				x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E(L_6, L_7, NULL);
			}

IL_0039_1:
			{
				V_0 = (bool)0;
			}

IL_003b_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_2), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_0070_1;
			}

IL_0046_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_9;
				L_9 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_2), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_9;
				goto IL_005e_1;
			}

IL_0050_1:
			{
				StringBuilder_t* L_10 = ___1_xd07ce4b74c5774a7;
				NullCheck(L_10);
				StringBuilder_t* L_11;
				L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				goto IL_0061_1;
			}

IL_005e_1:
			{
				bool L_12 = V_0;
				if (!L_12)
				{
					goto IL_0050_1;
				}
			}

IL_0061_1:
			{
				String_t* L_13;
				L_13 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				StringBuilder_t* L_14 = ___1_xd07ce4b74c5774a7;
				il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
				x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E(L_13, L_14, NULL);
				goto IL_0020_1;
			}

IL_0070_1:
			{
				goto IL_0017_1;
			}

IL_0072_1:
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		StringBuilder_t* L_15 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		return (bool)1;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x327a6c5b340675b5(System.Collections.ArrayList,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x327a6c5b340675b5_mB5E59B73F1D2100D735CF5FDE09FFE2A412B89CE (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_xfce3f26cf248085d, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		StringBuilder_t* L_0 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		goto IL_00c4;
	}

IL_0011:
	{
		StringBuilder_t* L_2 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		goto IL_009a;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5 = ___0_xfce3f26cf248085d;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_00cd;
		}
	}
	{
		bool L_7 = V_0;
		int32_t L_8 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_7), ((int32_t)(uint32_t)L_8)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0095;
		}
	}
	{
		goto IL_0077;
	}

IL_0048:
	{
		if (!0)
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		RuntimeObject* L_10 = V_2;
		StringBuilder_t* L_11 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = x3c771d2672e85789_x18017ffcd5c7e2ae_m43A62F555E0D1D8C8DAC07F4222AD6D0FB36F80C(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		V_0 = (bool)0;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		bool L_14 = V_0;
		V_3 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_14)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0075;
		}
	}

IL_006e:
	{
		goto IL_004d;
	}

IL_0070:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_0048;
	}

IL_0075:
	{
		goto IL_0090;
	}

IL_0077:
	{
		if (!((int32_t)255))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_17 = V_1;
		V_3 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_17)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006e;
		}
	}

IL_0090:
	{
		goto IL_0022;
	}

IL_0095:
	{
		goto IL_0011;
	}

IL_009a:
	{
		goto IL_00d9;
	}

IL_009c:
	{
		goto IL_0070;
	}

IL_009e:
	{
		StringBuilder_t* L_19 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		bool L_21 = V_0;
		V_3 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_21)|((int32_t)3)))) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00d7;
	}

IL_00c4:
	{
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_0022;
	}

IL_00cd:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_23 = ___0_xfce3f26cf248085d;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(25 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_23, L_24);
		V_2 = L_25;
		goto IL_009c;
	}

IL_00d7:
	{
		goto IL_0077;
	}

IL_00d9:
	{
		return (bool)1;
	}
}
// System.Boolean ProtoBuf.Serializers.x3c771d2672e85789::x18017ffcd5c7e2ae(System.Object,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool x3c771d2672e85789_x18017ffcd5c7e2ae_m43A62F555E0D1D8C8DAC07F4222AD6D0FB36F80C (RuntimeObject* ___0_xbcea506a33cf9111, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_xbcea506a33cf9111;
		if (L_0)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0135;
	}

IL_000b:
	{
		RuntimeObject* L_1 = ___0_xbcea506a33cf9111;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_1, NULL);
		StringBuilder_t* L_3 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x27357a604dab004b_m04F5B2D1CE8D9465627D9AC4A3471AA2BCD02BB8(L_2, L_3, NULL);
		goto IL_015c;
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_xbcea506a33cf9111;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_5, NULL);
		if (L_6)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		goto IL_015c;
	}

IL_0030:
	{
		RuntimeObject* L_7 = ___0_xbcea506a33cf9111;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_001c;
	}

IL_003a:
	{
		RuntimeObject* L_8 = ___0_xbcea506a33cf9111;
		if (((*(bool*)((bool*)(bool*)UnBox(L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_9 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		goto IL_005f;
	}

IL_0050:
	{
		goto IL_015c;
	}

IL_0055:
	{
		RuntimeObject* L_11 = ___0_xbcea506a33cf9111;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0030;
	}

IL_005f:
	{
		goto IL_007c;
	}

IL_0061:
	{
		RuntimeObject* L_12 = ___0_xbcea506a33cf9111;
		if (!((*(bool*)((bool*)(bool*)UnBox(L_12, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t* L_13 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		if (((int32_t)8))
		{
			goto IL_0050;
		}
	}

IL_007c:
	{
		if (((int32_t)1))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0055;
	}

IL_0085:
	{
		goto IL_002b;
	}

IL_0087:
	{
		RuntimeObject* L_15 = ___0_xbcea506a33cf9111;
		StringBuilder_t* L_16 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = x3c771d2672e85789_x327a6c5b340675b5_mB5E59B73F1D2100D735CF5FDE09FFE2A412B89CE(((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)CastclassClass((RuntimeObject*)L_15, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)), L_16, NULL);
		goto IL_015c;
	}

IL_0099:
	{
		RuntimeObject* L_18 = ___0_xbcea506a33cf9111;
		StringBuilder_t* L_19 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = x3c771d2672e85789_x7174baaa60fba55a_m3A482142AA0F5AC550907D8F6DD124DDE41450AF(((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)CastclassClass((RuntimeObject*)L_18, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var)), L_19, NULL);
		goto IL_015c;
	}

IL_00ab:
	{
		RuntimeObject* L_21 = ___0_xbcea506a33cf9111;
		if (((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)IsInstClass((RuntimeObject*)L_21, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var)))
		{
			goto IL_0099;
		}
	}
	{
		RuntimeObject* L_22 = ___0_xbcea506a33cf9111;
		if (!((ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)IsInstClass((RuntimeObject*)L_22, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var)))
		{
			goto IL_0055;
		}
	}
	{
		goto IL_0087;
	}

IL_00c0:
	{
		RuntimeObject* L_23 = ___0_xbcea506a33cf9111;
		StringBuilder_t* L_24 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = x3c771d2672e85789_x988d678ef128ed4f_mFB8775336F8CDFD5BA66E51A0DB5FA647F08B52A(((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)CastclassClass((RuntimeObject*)L_23, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)), L_24, NULL);
		goto IL_015c;
	}

IL_00d2:
	{
		RuntimeObject* L_26 = ___0_xbcea506a33cf9111;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = Convert_ToString_m8270C8361D2796C5C4659D441829CAFEEFBAC91C(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_26, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		StringBuilder_t* L_28 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E(L_27, L_28, NULL);
		goto IL_015c;
	}

IL_00e8:
	{
		RuntimeObject* L_29 = ___0_xbcea506a33cf9111;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_29, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject* L_30 = ___0_xbcea506a33cf9111;
		if (!((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)IsInstClass((RuntimeObject*)L_30, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_0109;
	}

IL_00fa:
	{
		goto IL_00e8;
	}

IL_00fc:
	{
		RuntimeObject* L_31 = ___0_xbcea506a33cf9111;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_31, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_011e;
		}
	}
	{
		if (0)
		{
			goto IL_0141;
		}
	}
	{
		goto IL_00e8;
	}

IL_0109:
	{
		goto IL_0133;
	}

IL_010b:
	{
		goto IL_015c;
	}

IL_010d:
	{
		goto IL_015c;
	}

IL_010f:
	{
		RuntimeObject* L_32 = ___0_xbcea506a33cf9111;
		NullCheck(L_32);
		Type_t* L_33;
		L_33 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_32, NULL);
		NullCheck(L_33);
		bool L_34;
		L_34 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_33, NULL);
		if (L_34)
		{
			goto IL_0143;
		}
	}
	{
		goto IL_00fc;
	}

IL_011e:
	{
		RuntimeObject* L_35 = ___0_xbcea506a33cf9111;
		StringBuilder_t* L_36 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E(((String_t*)CastclassSealed((RuntimeObject*)L_35, String_t_il2cpp_TypeInfo_var)), L_36, NULL);
		if (((int32_t)4))
		{
			goto IL_010b;
		}
	}
	{
		goto IL_00fa;
	}

IL_0133:
	{
		goto IL_0157;
	}

IL_0135:
	{
		StringBuilder_t* L_37 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
	}

IL_0141:
	{
		goto IL_015c;
	}

IL_0143:
	{
		RuntimeObject* L_39 = ___0_xbcea506a33cf9111;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_40 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ArrayList__ctor_mCE5AABB7EF7F41F9170791E2C5145E49684DCE11(L_40, ((RuntimeObject*)Castclass((RuntimeObject*)L_39, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var)), NULL);
		StringBuilder_t* L_41 = ___1_xd07ce4b74c5774a7;
		il2cpp_codegen_runtime_class_init_inline(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = x3c771d2672e85789_x327a6c5b340675b5_mB5E59B73F1D2100D735CF5FDE09FFE2A412B89CE(L_40, L_41, NULL);
		goto IL_010d;
	}

IL_0157:
	{
		goto IL_00c0;
	}

IL_015c:
	{
		return (bool)1;
	}
}
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x8acd328265e1a735(System.String,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x8acd328265e1a735_mA2A819CB2DC383E5623149590CF83DA4D9E1E75E (String_t* ___0_x0c0ec4acfbf729d1, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		StringBuilder_t* L_0 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		goto IL_021e;
	}

IL_0011:
	{
		goto IL_0034;
	}

IL_0013:
	{
		StringBuilder_t* L_2 = ___1_xd07ce4b74c5774a7;
		int32_t L_3 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_3, ((int32_t)16), NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_PadLeft_m99DDD242908E78B71E9631EE66331E8A130EB31F(L_4, 4, ((int32_t)48), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_5, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_6, NULL);
	}

IL_0034:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0038:
	{
		int32_t L_9 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_01fb;
		}
	}
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0215;
		}
	}
	{
		StringBuilder_t* L_14 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		goto IL_0247;
	}

IL_006d:
	{
		Il2CppChar L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)9))))
		{
			goto IL_008f;
		}
	}
	{
		Il2CppChar L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_17, NULL);
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0013;
		}
	}
	{
		StringBuilder_t* L_21 = ___1_xd07ce4b74c5774a7;
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, L_22, NULL);
		goto IL_009d;
	}

IL_008d:
	{
		goto IL_006d;
	}

IL_008f:
	{
		StringBuilder_t* L_24 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_0034;
	}

IL_009d:
	{
		goto IL_00ba;
	}

IL_009f:
	{
		goto IL_006d;
	}

IL_00a1:
	{
		Il2CppChar L_26 = V_2;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)13))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_27 = V_3;
		V_4 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_27)&0))) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_4;
		if (L_28)
		{
			goto IL_008d;
		}
	}

IL_00ba:
	{
		goto IL_01eb;
	}

IL_00bf:
	{
		StringBuilder_t* L_29 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		int32_t L_31 = V_1;
		int32_t L_32 = V_3;
		V_4 = (bool)(false? 1 : 0);
		bool L_33 = V_4;
		if (L_33)
		{
			goto IL_008f;
		}
	}
	{
		goto IL_0034;
	}

IL_00e8:
	{
		Il2CppChar L_34 = V_2;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)10))))
		{
			goto IL_0108;
		}
	}
	{
		goto IL_00a1;
	}

IL_00ef:
	{
		goto IL_00a1;
	}

IL_00f1:
	{
		goto IL_0034;
	}

IL_00f6:
	{
		int32_t L_35 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_35)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00e8;
		}
	}

IL_0108:
	{
		StringBuilder_t* L_37 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_019f;
	}

IL_0119:
	{
		int32_t L_39 = V_3;
		V_4 = (bool)(false? 1 : 0);
		bool L_40 = V_4;
		if (L_40)
		{
			goto IL_008d;
		}
	}
	{
		if (!0)
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_41 = V_1;
		int32_t L_42 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_0164;
		}
	}

IL_0149:
	{
		if (!0)
		{
			goto IL_015d;
		}
	}

IL_014c:
	{
		StringBuilder_t* L_44 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_0034;
	}

IL_015d:
	{
		Il2CppChar L_46 = V_2;
		if ((((int32_t)L_46) == ((int32_t)((int32_t)12))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_016a;
	}

IL_0164:
	{
		Il2CppChar L_47 = V_2;
		if ((((int32_t)L_47) == ((int32_t)8)))
		{
			goto IL_0189;
		}
	}
	{
		goto IL_0149;
	}

IL_016a:
	{
		int32_t L_48 = V_1;
		int32_t L_49 = V_1;
		V_4 = (bool)(false? 1 : 0);
		bool L_50 = V_4;
		if (!L_50)
		{
			goto IL_0119;
		}
	}

IL_0185:
	{
		goto IL_019a;
	}

IL_0187:
	{
		goto IL_0164;
	}

IL_0189:
	{
		StringBuilder_t* L_51 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_0034;
	}

IL_019a:
	{
		goto IL_00f6;
	}

IL_019f:
	{
		if (((int32_t)3))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_00e8;
	}

IL_01ae:
	{
		goto IL_0034;
	}

IL_01b3:
	{
		Il2CppChar L_53 = V_2;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)92))))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_54 = V_1;
		int32_t L_55 = V_1;
		V_4 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_54), ((int32_t)(uint32_t)L_55)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_56 = V_4;
		if (!L_56)
		{
			goto IL_0187;
		}
	}
	{
		if (!0)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_57 = V_3;
		V_4 = (bool)(false? 1 : 0);
		bool L_58 = V_4;
		if (!L_58)
		{
			goto IL_009f;
		}
	}

IL_01eb:
	{
		goto IL_0232;
	}

IL_01ed:
	{
		StringBuilder_t* L_59 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_59);
		StringBuilder_t* L_60;
		L_60 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_59, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_022d;
	}

IL_01fb:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_61 = V_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint16_t L_64 = (uint16_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_2 = L_64;
		Il2CppChar L_65 = V_2;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_01b3;
		}
	}
	{
		StringBuilder_t* L_66 = ___1_xd07ce4b74c5774a7;
		NullCheck(L_66);
		StringBuilder_t* L_67;
		L_67 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_66, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_0034;
	}

IL_0215:
	{
		goto IL_01b3;
	}

IL_0217:
	{
		V_1 = 0;
		goto IL_0038;
	}

IL_021e:
	{
		String_t* L_68 = ___0_x0c0ec4acfbf729d1;
		NullCheck(L_68);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_69;
		L_69 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_68, NULL);
		V_0 = L_69;
		if (0)
		{
			goto IL_00ef;
		}
	}
	{
		goto IL_0217;
	}

IL_022d:
	{
		goto IL_01ae;
	}

IL_0232:
	{
		int32_t L_70 = V_3;
		V_4 = (bool)(false? 1 : 0);
		bool L_71 = V_4;
		if (!L_71)
		{
			goto IL_0011;
		}
	}

IL_0247:
	{
		return;
	}
}
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::x27357a604dab004b(System.Double,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789_x27357a604dab004b_m04F5B2D1CE8D9465627D9AC4A3471AA2BCD02BB8 (double ___0_x78b0a0bc28459535, StringBuilder_t* ___1_xd07ce4b74c5774a7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___1_xd07ce4b74c5774a7;
		double L_1 = ___0_x78b0a0bc28459535;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mA5896BBF6FFE5A37B531E8E2F5258AE6F0C38580(L_1, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_2, NULL);
		return;
	}
}
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789__ctor_m84FE850E0F1B404F0E889868F76A1FEE40E4C838 (x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ProtoBuf.Serializers.x3c771d2672e85789::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3c771d2672e85789__cctor_m316DB85CEA548EBBC96AD364A27A7650D45235BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___xf52c112c1b49bf7b_13 = (-1);
		((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&((x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_StaticFields*)il2cpp_codegen_static_fields_for(x3c771d2672e85789_t7CD13B922360673F91DF038C5AE403DFE7605D5E_il2cpp_TypeInfo_var))->___x7df73acf28d072a1_14), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
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
// System.Void TianMa.Tools.ICMPSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPSocket_Finalize_mC30CDA74C7DA70E0EF18B1344777257B4DED66B0 (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ICMPSocket_Close_m9A08FD90F69CC02E2769B7889FF349C1B7119F32(__this, NULL);
			goto IL_000f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// System.Void TianMa.Tools.ICMPSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPSocket_Close_m9A08FD90F69CC02E2769B7889FF349C1B7119F32 (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_0 = __this->___x70087761226fbdf2_1;
			if (!L_0)
			{
				goto IL_0013_1;
			}
		}
		{
			Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_1 = __this->___x70087761226fbdf2_1;
			NullCheck(L_1);
			Socket_Close_m5EBF3D8BE2C42EF8037BC9372CE7760B1717EEE4(L_1, NULL);
		}

IL_0013_1:
		{
			goto IL_0018;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	}// end catch (depth: 1)

IL_0018:
	{
		__this->___x70087761226fbdf2_1 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x70087761226fbdf2_1), (void*)(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)NULL);
		return;
	}
}
// TianMa.Tools.IPPacket TianMa.Tools.ICMPSocket::Send(System.String,TianMa.Tools.ICMPPacket,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* ICMPSocket_Send_m2C6F8F4360F7FCDDD30CE55F5992537C58E84806 (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, String_t* ___0_Host, ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* ___1_ICMP, int32_t ___2_TTL, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPPacket_tBE962557829268644870CAC8085C1659D4D7A698_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* V_0 = NULL;
	IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* V_3 = NULL;
	ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB* V_4 = NULL;
	bool V_5 = false;
	{
		String_t* L_0 = __this->___x9396aeed6f94cb4a_4;
		String_t* L_1 = ___0_Host;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0228;
		}
	}
	{
		goto IL_02cf;
	}

IL_0016:
	{
		int32_t L_3 = ___2_TTL;
		V_5 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_3)&0))) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = ___2_TTL;
		V_5 = (bool)(false? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_005a;
		}
	}

IL_003c:
	{
		int32_t L_7 = ___2_TTL;
		V_5 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_7)&0))) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_01c7;
		}
	}

IL_0053:
	{
		if (!((int32_t)8))
		{
			goto IL_0073;
		}
	}

IL_005a:
	{
		int32_t L_9;
		L_9 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		int32_t L_10 = __this->___TimeElapsed_5;
		__this->___TimeElapsed_5 = ((int32_t)il2cpp_codegen_subtract(L_9, L_10));
		goto IL_0113;
	}

IL_0071:
	{
		goto IL_0053;
	}

IL_0073:
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_11 = V_3;
		NullCheck(L_11);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_12 = L_11->___ICMP_13;
		NullCheck(L_12);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_13 = L_12->___Message_4;
		if (!((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)IsInstClass((RuntimeObject*)L_13, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)))
		{
			goto IL_0143;
		}
	}
	{
		goto IL_00f7;
	}

IL_008a:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_14 = __this->___x1b07d570d2c02338_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_16 = __this->___EndPoint_3;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_01ef;
		}
	}
	{
		if (!((int32_t)3))
		{
			goto IL_0228;
		}
	}
	{
		ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB* L_19 = V_4;
		NullCheck(L_19);
		uint16_t L_20 = ((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)L_19)->___Identifier_0;
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_21 = ___1_ICMP;
		NullCheck(L_21);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_22 = L_21->___Message_4;
		NullCheck(((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)CastclassClass((RuntimeObject*)L_22, ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var)));
		uint16_t L_23 = ((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)CastclassClass((RuntimeObject*)L_22, ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var))->___Identifier_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_01ef;
		}
	}
	{
		ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB* L_24 = V_4;
		NullCheck(L_24);
		uint16_t L_25 = ((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)L_24)->___SequenceNumber_1;
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_26 = ___1_ICMP;
		NullCheck(L_26);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_27 = L_26->___Message_4;
		NullCheck(((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)CastclassClass((RuntimeObject*)L_27, ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var)));
		uint16_t L_28 = ((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)CastclassClass((RuntimeObject*)L_27, ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var))->___SequenceNumber_1;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_01ef;
		}
	}
	{
		if (0)
		{
			goto IL_02cf;
		}
	}
	{
		goto IL_0071;
	}

IL_00f7:
	{
		goto IL_010e;
	}

IL_00f9:
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_29 = V_1;
		NullCheck(L_29);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_30 = L_29->___ICMP_13;
		NullCheck(L_30);
		uint8_t L_31 = L_30->___Code_1;
		if (L_31)
		{
			goto IL_01ef;
		}
	}
	{
		goto IL_008a;
	}

IL_010e:
	{
		goto IL_0016;
	}

IL_0113:
	{
		if (((int32_t)8))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_0143;
	}

IL_011c:
	{
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_32 = __this->___x1b07d570d2c02338_2;
		NullCheck(L_32);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_33;
		L_33 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(L_32, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_35 = V_3;
		NullCheck(L_35);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_36 = L_35->___DestinationAddress_11;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, L_37, NULL);
		if (L_38)
		{
			goto IL_0073;
		}
	}
	{
		goto IL_015b;
	}

IL_0143:
	{
		int32_t L_39 = ___2_TTL;
		int32_t L_40 = ___2_TTL;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_39), ((int32_t)(uint32_t)L_40)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_41 = V_5;
		if (L_41)
		{
			goto IL_011c;
		}
	}

IL_015b:
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_42 = V_1;
		NullCheck(L_42);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_43 = L_42->___ICMP_13;
		NullCheck(L_43);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_44 = L_43->___Message_4;
		if (!((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)IsInstClass((RuntimeObject*)L_44, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)))
		{
			goto IL_01ef;
		}
	}
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_45 = V_1;
		NullCheck(L_45);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_46 = L_45->___ICMP_13;
		NullCheck(L_46);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_47 = L_46->___Message_4;
		V_4 = ((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)CastclassClass((RuntimeObject*)L_47, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var));
		if (((int32_t)2))
		{
			goto IL_00f9;
		}
	}

IL_018c:
	{
		goto IL_0190;
	}

IL_018e:
	{
		goto IL_011c;
	}

IL_0190:
	{
		goto IL_0237;
	}

IL_0195:
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_48 = (IPPacket_tBE962557829268644870CAC8085C1659D4D7A698*)il2cpp_codegen_object_new(IPPacket_tBE962557829268644870CAC8085C1659D4D7A698_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		IPPacket__ctor_mD4B0631476591A0CD0C5506DCB86CBAAA68D2F91(L_48, (&V_2), NULL);
		V_1 = L_48;
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_49 = V_1;
		NullCheck(L_49);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_50 = L_49->___ICMP_13;
		NullCheck(L_50);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_51 = L_50->___Message_4;
		if (!((ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63*)IsInstClass((RuntimeObject*)L_51, ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var)))
		{
			goto IL_015b;
		}
	}
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_52 = V_1;
		NullCheck(L_52);
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_53 = L_52->___ICMP_13;
		NullCheck(L_53);
		ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_54 = L_53->___Message_4;
		NullCheck(((ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63*)CastclassClass((RuntimeObject*)L_54, ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var)));
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_55 = ((ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63*)CastclassClass((RuntimeObject*)L_54, ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var))->___IP_1;
		V_3 = L_55;
		goto IL_0212;
	}

IL_01c7:
	{
		int32_t L_56;
		L_56 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->___TimeElapsed_5 = L_56;
	}

IL_01d2:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_57 = __this->___x70087761226fbdf2_1;
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_58 = ___1_ICMP;
		NullCheck(L_58);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
		L_59 = ICMPPacket_GetBytes_m4E3E2C6FE918FF29B6A7538BE2B1150FC628D42A(L_58, NULL);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_60 = __this->___x1b07d570d2c02338_2;
		NullCheck(L_57);
		int32_t L_61;
		L_61 = Socket_SendTo_m1CB5F145162DBEB1F602BCC375C6217B7E754081(L_57, L_59, L_60, NULL);
		V_1 = (IPPacket_tBE962557829268644870CAC8085C1659D4D7A698*)NULL;
		if (0)
		{
			goto IL_01fa;
		}
	}

IL_01ef:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_2 = L_62;
	}

IL_01fa:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_63 = __this->___x70087761226fbdf2_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_2;
		EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564** L_65 = (&__this->___EndPoint_3);
		NullCheck(L_63);
		int32_t L_66;
		L_66 = Socket_ReceiveFrom_m0E841C82B5F0DB9CAF3A7C0E72E64C3C22A1A09D(L_63, L_64, L_65, NULL);
		goto IL_0195;
	}

IL_0212:
	{
		goto IL_0224;
	}

IL_0214:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_67 = __this->___x70087761226fbdf2_1;
		int32_t L_68 = ___2_TTL;
		NullCheck(L_67);
		Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58(L_67, 0, 4, L_68, NULL);
		goto IL_01c7;
	}

IL_0224:
	{
		goto IL_0232;
	}

IL_0226:
	{
		goto IL_0214;
	}

IL_0228:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_69 = __this->___x70087761226fbdf2_1;
		if (!L_69)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_0214;
	}

IL_0232:
	{
		goto IL_018e;
	}

IL_0237:
	{
		goto IL_02f2;
	}

IL_023c:
	{
		int32_t L_70 = ___2_TTL;
		int32_t L_71 = ___2_TTL;
		V_5 = (bool)(false? 1 : 0);
		bool L_72 = V_5;
		if (!L_72)
		{
			goto IL_0228;
		}
	}

IL_0254:
	{
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_73 = (Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E*)il2cpp_codegen_object_new(Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Socket__ctor_m35F1F4B4872E251867DA16460F06E903A30E4595(L_73, 2, 3, 1, NULL);
		__this->___x70087761226fbdf2_1 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x70087761226fbdf2_1), (void*)L_73);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_74 = __this->___x70087761226fbdf2_1;
		int32_t L_75 = __this->___SocketTimeout_0;
		NullCheck(L_74);
		Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58(L_74, ((int32_t)65535), ((int32_t)4101), L_75, NULL);
		Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* L_76 = __this->___x70087761226fbdf2_1;
		int32_t L_77 = __this->___SocketTimeout_0;
		NullCheck(L_76);
		Socket_SetSocketOption_m19085C1856DE21260294680B7725610D71D66A58(L_76, ((int32_t)65535), ((int32_t)4102), L_77, NULL);
		goto IL_02c8;
	}

IL_029a:
	{
		String_t* L_78 = ___0_Host;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_79;
		L_79 = Dns_GetHostAddresses_mB44EA8DE1F3C53F533578949FED6BB98B0F1F212(L_78, NULL);
		V_0 = L_79;
		IPAddressU5BU5D_t3AEDF3B94746C9023A4549F878AA47F702C9CD0D* L_80 = V_0;
		NullCheck(L_80);
		int32_t L_81 = 0;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_83 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_83, L_82, 0, NULL);
		__this->___x1b07d570d2c02338_2 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x1b07d570d2c02338_2), (void*)L_83);
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_84 = __this->___x1b07d570d2c02338_2;
		__this->___EndPoint_3 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EndPoint_3), (void*)L_84);
		String_t* L_85 = ___0_Host;
		__this->___x9396aeed6f94cb4a_4 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x9396aeed6f94cb4a_4), (void*)L_85);
		goto IL_023c;
	}

IL_02c8:
	{
		if (((int32_t)8))
		{
			goto IL_02ec;
		}
	}

IL_02cf:
	{
		int32_t L_86 = ___2_TTL;
		int32_t L_87 = ___2_TTL;
		V_5 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_86), ((int32_t)(uint32_t)L_87)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_88 = V_5;
		if (L_88)
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_029a;
	}

IL_02ec:
	{
		if (!0)
		{
			goto IL_0226;
		}
	}

IL_02f2:
	{
		IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_89 = V_1;
		return L_89;
	}
}
// System.Void TianMa.Tools.ICMPSocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMPSocket__ctor_m80761A1A68FF276E7E7D5B91FABBBE2F5A071A3D (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* __this, const RuntimeMethod* method) 
{
	{
		__this->___SocketTimeout_0 = ((int32_t)3000);
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
// System.Void TianMa.Tools.xaa6ff34997724cf5::x00d0f063c43ff573(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xaa6ff34997724cf5_x00d0f063c43ff573_m3A7ABAC370D338D4F226F56A92D2F9C4053BB4F6 (String_t* ___0_xd1d55a56253db2df, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_xd1d55a56253db2df;
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m35A29437F5E32122EC36215ADE5EBD668FE7BD85(L_0, NULL);
		return;
	}
}
// System.Void TianMa.Tools.xaa6ff34997724cf5::x6eeac16015c680d5(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xaa6ff34997724cf5_x6eeac16015c680d5_mC8D356982EAF97ABC6B15168AF6594EA7BDFD722 (bool ___0_x84d59c000a491827, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral346ED24326D414356BF1FF32BEC7C54B26119EDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral450DE32FFBCA6A229CABB90868BF5D78DB7FFF8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD0568533693A35114795A3922F2758E1DE00896);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_x84d59c000a491827;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m35A29437F5E32122EC36215ADE5EBD668FE7BD85(_stringLiteral450DE32FFBCA6A229CABB90868BF5D78DB7FFF8D, NULL);
		goto IL_0019;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_Write_m35A29437F5E32122EC36215ADE5EBD668FE7BD85(_stringLiteralCD0568533693A35114795A3922F2758E1DE00896, NULL);
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(_stringLiteral346ED24326D414356BF1FF32BEC7C54B26119EDF, NULL);
		return;
	}
}
// System.Void TianMa.Tools.xaa6ff34997724cf5::xc447809891322395(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xaa6ff34997724cf5_xc447809891322395_m634FCBE911FD0731B8D2861CC9F24157829F4F14 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_xce8d8c7e3c2c2426, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2044014B935F7210EBA18B142D25903222811345);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xaa6ff34997724cf5_x00d0f063c43ff573_m3A7ABAC370D338D4F226F56A92D2F9C4053BB4F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xaa6ff34997724cf5_x6eeac16015c680d5_mC8D356982EAF97ABC6B15168AF6594EA7BDFD722_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_0 = (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00*)il2cpp_codegen_object_new(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ICMP_CALLBACK__ctor_mD131382E3FF369C67400545CF06D310D77622A4D(L_0, NULL, (intptr_t)((void*)xaa6ff34997724cf5_x00d0f063c43ff573_m3A7ABAC370D338D4F226F56A92D2F9C4053BB4F6_RuntimeMethod_var), NULL);
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_1 = (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15*)il2cpp_codegen_object_new(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ICMP_OVER_CALLBACK__ctor_mEB3D784C3ECFFBE374CC75C71D64D01CB578064C(L_1, NULL, (intptr_t)((void*)xaa6ff34997724cf5_x6eeac16015c680d5_mC8D356982EAF97ABC6B15168AF6594EA7BDFD722_RuntimeMethod_var), NULL);
		TraceUtils_TraceRoute_m23CCB6FD6F82AEB947547C9E4AB6FC2C8CD06E7C(_stringLiteral2044014B935F7210EBA18B142D25903222811345, L_0, L_1, ((int32_t)30), 3, ((int32_t)200), NULL);
		return;
	}
}
// System.Void TianMa.Tools.xaa6ff34997724cf5::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xaa6ff34997724cf5__ctor_m65E79C40F0177F2586DC391AF9ABE7B0D54641EB (xaa6ff34997724cf5_t7E73AE2F7D4F10E5ABB42BF24C4127672F908437* __this, const RuntimeMethod* method) 
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
void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_Multicast(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* currentDelegate = reinterpret_cast<ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_content, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenInst(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	NullCheck(___0_content);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_content, method);
}
void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenStatic(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_content, method);
}
void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenStaticInvoker(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_content);
}
void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_ClosedStaticInvoker(ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_content);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00 (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_content' to native representation
	char* ____0_content_marshaled = NULL;
	____0_content_marshaled = il2cpp_codegen_marshal_string(___0_content);

	// Native function invocation
	il2cppPInvokeFunc(____0_content_marshaled);

	// Marshaling cleanup of parameter '___0_content' native representation
	il2cpp_codegen_marshal_free(____0_content_marshaled);
	____0_content_marshaled = NULL;

}
// System.Void TianMa.Tools.ICMP_CALLBACK::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_CALLBACK__ctor_mD131382E3FF369C67400545CF06D310D77622A4D (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_Multicast;
}
// System.Void TianMa.Tools.ICMP_CALLBACK::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2 (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_content, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TianMa.Tools.ICMP_CALLBACK::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ICMP_CALLBACK_BeginInvoke_mCE244B73C43BF42BDEAFB5C71451D0D7BCBC6B6B (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_content;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TianMa.Tools.ICMP_CALLBACK::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_CALLBACK_EndInvoke_m9253C2EEFDDCF20E1ED9D7D4E1AA78F4A22CC608 (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_Multicast(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* currentDelegate = reinterpret_cast<ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ok, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_OpenInst(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ok, method);
}
void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_OpenStatic(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ok, method);
}
void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_OpenStaticInvoker(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ok);
}
void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_ClosedStaticInvoker(ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ok);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15 (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___0_ok));

}
// System.Void TianMa.Tools.ICMP_OVER_CALLBACK::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK__ctor_mEB3D784C3ECFFBE374CC75C71D64D01CB578064C (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_Multicast;
}
// System.Void TianMa.Tools.ICMP_OVER_CALLBACK::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ok, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TianMa.Tools.ICMP_OVER_CALLBACK::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ICMP_OVER_CALLBACK_BeginInvoke_mA59E90ED0574219EE9346998D8193D83587CCC77 (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___0_ok);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TianMa.Tools.ICMP_OVER_CALLBACK::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK_EndInvoke_m52C6A230B0B8EA6A94EAADCFBB3CDBE9415B5862 (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TianMa.Tools.TraceUtils::TraceRoute(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceUtils_TraceRoute_m23CCB6FD6F82AEB947547C9E4AB6FC2C8CD06E7C (String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_maxTTL, int32_t ___4_count, int32_t ___5_interval, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TraceUtils_x88a1be9885d20851_mFC1E70863D610684CFEF6828A45DEB599661D3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* V_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_1 = NULL;
	{
		String_t* L_0 = ___0_host;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_1 = ___1_cb;
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_2 = ___2_ocb;
		int32_t L_3 = ___3_maxTTL;
		int32_t L_4 = ___4_count;
		int32_t L_5 = ___5_interval;
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_6 = (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D*)il2cpp_codegen_object_new(xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		xfd6b00b29231a30d__ctor_m7DAFBAFC6194062D87C25C2ECCE5E213742C4B34(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		V_0 = L_6;
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_7 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_7, NULL, (intptr_t)((void*)TraceUtils_x88a1be9885d20851_mFC1E70863D610684CFEF6828A45DEB599661D3D4_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_8, L_7, NULL);
		V_1 = L_8;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9 = V_1;
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_10 = V_0;
		NullCheck(L_9);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_9, L_10, NULL);
		return;
	}
}
// System.Void TianMa.Tools.TraceUtils::x88a1be9885d20851(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceUtils_x88a1be9885d20851_mFC1E70863D610684CFEF6828A45DEB599661D3D4 (RuntimeObject* ___0_x92ef85a2aa705592, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18C290909335C542DC12346D61268CA696A0E5EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F02E20990DA5581EAF1074AD65C1AC233161BDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5410F776AAEE774DDB4343FB7743E2032DBE020F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59588493BEB8880A7037DDF0FA738867E4E52D27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9247960360EE852BC3FD10B2691B9566710C06D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BA302517D2A0DB30D9C30048F167559372A6A2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE95A453653E06120FE9E373182096BDCF774C95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* V_5 = NULL;
	ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* V_6 = NULL;
	int32_t V_7 = 0;
	ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* V_8 = NULL;
	ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* V_9 = NULL;
	ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* V_10 = NULL;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	uint16_t V_16 = 0;
	IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* V_17 = NULL;
	String_t* V_18 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_19 = NULL;
	bool V_20 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_x92ef85a2aa705592;
		if (L_0)
		{
			goto IL_0608;
		}
	}
	{
		goto IL_065b;
	}

IL_000b:
	{
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_1 = V_6;
		bool L_2 = V_11;
		NullCheck(L_1);
		ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_inline(L_1, L_2, NULL);
		goto IL_0059;
	}

IL_0016:
	{
		bool L_3 = V_11;
		if (!L_3)
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_4 = V_13;
		int32_t L_5 = V_3;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_4), ((int32_t)(uint32_t)L_5)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_6 = V_20;
		if (L_6)
		{
			goto IL_000b;
		}
	}

IL_0032:
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_7 = V_5;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_8 = V_5;
		NullCheck(L_8);
		ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_8, _stringLiteral59588493BEB8880A7037DDF0FA738867E4E52D27, NULL);
	}

IL_0042:
	{
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_9 = V_6;
		if (!L_9)
		{
			goto IL_0682;
		}
	}
	{
		goto IL_0057;
	}

IL_004b:
	{
		int32_t L_10 = V_13;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 1)))))
		{
			goto IL_0458;
		}
	}
	{
		goto IL_0032;
	}

IL_0057:
	{
		goto IL_000b;
	}

IL_0059:
	{
		uint16_t L_12 = V_16;
		int32_t L_13 = V_2;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_12), ((int32_t)(uint32_t)L_13)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_14 = V_20;
		if (!L_14)
		{
			goto IL_04a3;
		}
	}
	{
		goto IL_0458;
	}

IL_0079:
	{
		goto IL_0016;
	}

IL_007b:
	{
		int32_t L_15 = V_12;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)20))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_16 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		goto IL_0488;
	}

IL_008c:
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_17 = V_5;
		String_t* L_18 = V_14;
		String_t* L_19 = V_15;
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_18, L_19, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		NullCheck(L_17);
		ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_17, L_20, NULL);
		goto IL_0016;
	}

IL_00a6:
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_21 = V_5;
		if (L_21)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0483;
	}

IL_00af:
	{
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_22 = V_10;
		uint16_t L_23 = V_16;
		NullCheck(L_22);
		L_22->___SequenceNumber_1 = L_23;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_24 = V_10;
		int32_t L_25 = V_7;
		NullCheck(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_26;
		L_26 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_25, ((int32_t)42), NULL);
		NullCheck(L_24);
		L_24->___Data_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___Data_2), (void*)L_26);
	}
	try
	{// begin try (depth: 1)
		{
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_27 = V_8;
			String_t* L_28 = V_1;
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_29 = V_9;
			int32_t L_30 = V_13;
			NullCheck(L_27);
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_31;
			L_31 = ICMPSocket_Send_m2C6F8F4360F7FCDDD30CE55F5992537C58E84806(L_27, L_28, L_29, L_30, NULL);
			V_17 = L_31;
			goto IL_02cc_1;
		}

IL_00e0_1:
		{
			goto IL_00a6;
		}

IL_00e2_1:
		{
			V_12 = 0;
			int32_t L_32 = V_12;
			V_20 = (bool)(false? 1 : 0);
			bool L_33 = V_20;
			if (!L_33)
			{
				goto IL_015a_1;
			}
		}
		{
			goto IL_010f_1;
		}

IL_00f9_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_34 = V_17;
			NullCheck(L_34);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_35 = L_34->___ICMP_13;
			NullCheck(L_35);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_36 = L_35->___Message_4;
			if (((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)IsInstClass((RuntimeObject*)L_36, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)))
			{
				goto IL_019f_1;
			}
		}

IL_010f_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_37 = V_17;
			NullCheck(L_37);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_38 = L_37->___ICMP_13;
			NullCheck(L_38);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_39 = L_38->___Message_4;
			if (!((ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63*)IsInstClass((RuntimeObject*)L_39, ICMPIPHeaderReply_t6C42B488BDB46E4A2BA488DBE3EF1407E2DC5C63_il2cpp_TypeInfo_var)))
			{
				goto IL_00e2_1;
			}
		}

IL_0122_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_40 = V_17;
			NullCheck(L_40);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_41 = L_40->___ICMP_13;
			NullCheck(L_41);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_42 = L_41->___Message_4;
			String_t* L_43;
			L_43 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(_stringLiteral9247960360EE852BC3FD10B2691B9566710C06D0, L_42, NULL);
			V_15 = L_43;
			V_11 = (bool)1;
		}

IL_013d_1:
		{
			int32_t L_44 = V_7;
			int32_t L_45 = V_13;
			V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_44), ((int32_t)(uint32_t)L_45)))) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_46 = V_20;
			if (L_46)
			{
				goto IL_01c5_1;
			}
		}
		{
			goto IL_00e0_1;
		}

IL_015a_1:
		{
			int32_t L_47 = V_7;
			int32_t L_48 = V_3;
			V_20 = (bool)(false? 1 : 0);
			bool L_49 = V_20;
			if (!L_49)
			{
				goto IL_02ca_1;
			}
		}
		{
			goto IL_0252_1;
		}

IL_017a_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_50 = V_5;
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_51 = V_8;
			NullCheck(L_51);
			int32_t* L_52 = (&L_51->___TimeElapsed_5);
			String_t* L_53;
			L_53 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_52, NULL);
			NullCheck(L_53);
			String_t* L_54;
			L_54 = String_PadLeft_m7D2B2AFB4B4A47AEE660533BA1510EF35A27E94D(L_53, 5, NULL);
			String_t* L_55;
			L_55 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_54, _stringLiteral18C290909335C542DC12346D61268CA696A0E5EC, NULL);
			NullCheck(L_50);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_50, L_55, NULL);
			goto IL_01a3_1;
		}

IL_019f_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_56 = V_5;
			if (L_56)
			{
				goto IL_017a_1;
			}
		}

IL_01a3_1:
		{
			V_11 = (bool)1;
			goto IL_00e2_1;
		}

IL_01ab_1:
		{
			goto IL_00e2_1;
		}

IL_01b0_1:
		{
			int32_t L_57 = V_7;
			V_20 = (bool)(false? 1 : 0);
			bool L_58 = V_20;
			if (L_58)
			{
				goto IL_013d_1;
			}
		}

IL_01c5_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_59 = V_5;
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_60 = V_8;
			NullCheck(L_60);
			int32_t* L_61 = (&L_60->___TimeElapsed_5);
			String_t* L_62;
			L_62 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_61, NULL);
			NullCheck(L_62);
			String_t* L_63;
			L_63 = String_PadLeft_m7D2B2AFB4B4A47AEE660533BA1510EF35A27E94D(L_62, 5, NULL);
			String_t* L_64;
			L_64 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_63, _stringLiteral5410F776AAEE774DDB4343FB7743E2032DBE020F, NULL);
			NullCheck(L_59);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_59, L_64, NULL);
			goto IL_02c5_1;
		}

IL_01ed_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_65 = V_17;
			NullCheck(L_65);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_66 = L_65->___ICMP_13;
			NullCheck(L_66);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_67 = L_66->___Message_4;
			if (!((ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A*)IsInstClass((RuntimeObject*)L_67, ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A_il2cpp_TypeInfo_var)))
			{
				goto IL_00f9_1;
			}
		}
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_68 = V_5;
			if (!L_68)
			{
				goto IL_00e2_1;
			}
		}
		{
			goto IL_02c0_1;
		}

IL_020f_1:
		{
			int32_t L_69 = V_3;
			V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_69)|((int32_t)255)))) == ((int32_t)0))? 1 : 0);
			bool L_70 = V_20;
			if (L_70)
			{
				goto IL_02d1_1;
			}
		}
		{
			String_t* L_71 = V_14;
			String_t* L_72 = V_18;
			String_t* L_73;
			L_73 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_71, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, L_72, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
			V_14 = L_73;
			goto IL_01ed_1;
		}

IL_0241_1:
		{
			String_t* L_74 = V_14;
			bool L_75;
			L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			if (L_75)
			{
				goto IL_0252_1;
			}
		}
		{
			if (!0)
			{
				goto IL_02bb_1;
			}
		}

IL_0252_1:
		{
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_76 = V_8;
			NullCheck(L_76);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_77 = L_76->___EndPoint_3;
			NullCheck(((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_77, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)));
			IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_78;
			L_78 = IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline(((IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)CastclassClass((RuntimeObject*)L_77, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var)), NULL);
			NullCheck(L_78);
			String_t* L_79;
			L_79 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_78);
			V_18 = L_79;
		}
		try
		{// begin try (depth: 2)
			String_t* L_80 = V_18;
			IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* L_81;
			L_81 = Dns_GetHostEntry_m08417F96132B4230D46BE63C6B36CD984362ED53(L_80, NULL);
			NullCheck(L_81);
			String_t* L_82;
			L_82 = IPHostEntry_get_HostName_m04050E3890C11BC5CB02BF48FBDD8AB4938FC390_inline(L_81, NULL);
			V_14 = L_82;
			goto IL_0298_1;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_027a_1;
			}
			throw e;
		}

CATCH_027a_1:
		{// begin catch(System.Object)
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0298_1;
		}// end catch (depth: 2)
		{
			int32_t L_83 = V_2;
			V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_83)|((int32_t)15)))) == ((int32_t)0))? 1 : 0);
			bool L_84 = V_20;
			if (L_84)
			{
				goto IL_0122_1;
			}
		}

IL_0298_1:
		{
			String_t* L_85 = V_14;
			String_t* L_86 = V_18;
			bool L_87;
			L_87 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_85, L_86, NULL);
			if (!L_87)
			{
				goto IL_01ed_1;
			}
		}
		{
			int32_t L_88 = V_3;
			V_20 = (bool)(false? 1 : 0);
			bool L_89 = V_20;
			if (!L_89)
			{
				goto IL_020f_1;
			}
		}

IL_02bb_1:
		{
			goto IL_01ed_1;
		}

IL_02c0_1:
		{
			goto IL_01b0_1;
		}

IL_02c5_1:
		{
			goto IL_01ab_1;
		}

IL_02ca_1:
		{
			goto IL_02d1_1;
		}

IL_02cc_1:
		{
			goto IL_0241_1;
		}

IL_02d1_1:
		{
			goto IL_02fc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d3;
		}
		throw e;
	}

CATCH_02d3:
	{// begin catch(System.Object)
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_90 = V_5;
			if (!L_90)
			{
				goto IL_02f4;
			}
		}
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_91 = V_5;
			NullCheck(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7)));
			String_t* L_92;
			L_92 = String_PadLeft_m7D2B2AFB4B4A47AEE660533BA1510EF35A27E94D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7)), 5, NULL);
			String_t* L_93;
			L_93 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_92, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17F69BD9415AEEFF5AF120DF2D45F20433804764)), NULL);
			NullCheck(L_91);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_91, L_93, NULL);
		}

IL_02f4:
		{
			int32_t L_94 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add(L_94, 1));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_02fc;
		}
	}// end catch (depth: 1)

IL_02fc:
	{
		uint16_t L_95 = V_16;
		V_16 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_95, 1)));
	}

IL_0303:
	{
		uint16_t L_96 = V_16;
		int32_t L_97 = V_3;
		if ((((int32_t)L_96) < ((int32_t)((int32_t)il2cpp_codegen_add(L_97, 1)))))
		{
			goto IL_037d;
		}
	}
	{
		int32_t L_98 = V_12;
		uint16_t L_99 = V_16;
		V_20 = (bool)(false? 1 : 0);
		bool L_100 = V_20;
		if (L_100)
		{
			goto IL_0598;
		}
	}
	{
		bool L_101 = V_11;
		V_20 = (bool)(false? 1 : 0);
		bool L_102 = V_20;
		if (!L_102)
		{
			goto IL_00a6;
		}
	}
	{
		uint16_t L_103 = V_16;
		V_20 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_103)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_104 = V_20;
		if (!L_104)
		{
			goto IL_036f;
		}
	}

IL_034c:
	{
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_105 = V_10;
		NullCheck(L_105);
		L_105->___Identifier_0 = (uint16_t)1;
		int32_t L_106 = V_4;
		int32_t L_107 = V_12;
		V_20 = (bool)(false? 1 : 0);
		bool L_108 = V_20;
		if (!L_108)
		{
			goto IL_00af;
		}
	}

IL_036f:
	{
		goto IL_0424;
	}

IL_0374:
	{
		int32_t L_109 = V_4;
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_109, NULL);
		goto IL_034c;
	}

IL_037d:
	{
		uint16_t L_110 = V_16;
		if ((((int32_t)L_110) > ((int32_t)0)))
		{
			goto IL_03a4;
		}
	}
	{
		goto IL_03c1;
	}

IL_0384:
	{
		int32_t L_111 = V_13;
		int32_t L_112 = V_7;
		V_20 = (bool)(false? 1 : 0);
		bool L_113 = V_20;
		if (L_113)
		{
			goto IL_03d2;
		}
	}

IL_039c:
	{
		V_16 = (uint16_t)1;
		goto IL_0303;
	}

IL_03a4:
	{
		int32_t L_114 = V_4;
		if ((((int32_t)L_114) <= ((int32_t)0)))
		{
			goto IL_034c;
		}
	}
	{
		int32_t L_115 = V_3;
		bool L_116 = V_11;
		V_20 = (bool)(false? 1 : 0);
		bool L_117 = V_20;
		if (!L_117)
		{
			goto IL_0374;
		}
	}

IL_03c1:
	{
		goto IL_041f;
	}

IL_03c3:
	{
		goto IL_039c;
	}

IL_03c5:
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_118 = V_5;
		if (L_118)
		{
			goto IL_03fa;
		}
	}
	{
		goto IL_041a;
	}

IL_03cb:
	{
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_119 = (ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691*)il2cpp_codegen_object_new(ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var);
		NullCheck(L_119);
		ICMPPacket__ctor_m6303509EA3C98A272C3B904724695E22160B34B3(L_119, NULL);
		V_9 = L_119;
	}

IL_03d2:
	{
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_120 = (ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)il2cpp_codegen_object_new(ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		NullCheck(L_120);
		ICMPEcho__ctor_m80DEA99DD5CF94CF154D1F84E37703629E2D2E80(L_120, NULL);
		V_10 = L_120;
	}

IL_03d9:
	{
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_121 = V_9;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_122 = V_10;
		NullCheck(L_121);
		L_121->___Message_4 = L_122;
		Il2CppCodeGenWriteBarrier((void**)(&L_121->___Message_4), (void*)L_122);
		int32_t L_123 = V_2;
		int32_t L_124 = V_4;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_123), ((int32_t)(uint32_t)L_124)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_125 = V_20;
		if (!L_125)
		{
			goto IL_03c5;
		}
	}

IL_03fa:
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_126 = V_5;
		String_t* L_127;
		L_127 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_13), NULL);
		NullCheck(L_127);
		String_t* L_128;
		L_128 = String_PadLeft_m7D2B2AFB4B4A47AEE660533BA1510EF35A27E94D(L_127, 3, NULL);
		String_t* L_129;
		L_129 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_128, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_126);
		ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_126, L_129, NULL);
		goto IL_03c3;
	}

IL_041a:
	{
		goto IL_0384;
	}

IL_041f:
	{
		goto IL_034c;
	}

IL_0424:
	{
		goto IL_0446;
	}

IL_0426:
	{
		int32_t L_130 = V_2;
		uint16_t L_131 = V_16;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_130), ((int32_t)(uint32_t)L_131)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_132 = V_20;
		if (L_132)
		{
			goto IL_05fe;
		}
	}
	{
		goto IL_03cb;
	}

IL_0446:
	{
		int32_t L_133 = V_12;
		V_20 = (bool)(false? 1 : 0);
		bool L_134 = V_20;
		if (!L_134)
		{
			goto IL_0468;
		}
	}

IL_0458:
	{
		V_14 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_15 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0426;
	}

IL_0468:
	{
		int32_t L_135 = V_12;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_135)|((int32_t)2)))) == ((int32_t)0))? 1 : 0);
		bool L_136 = V_20;
		if (!L_136)
		{
			goto IL_008c;
		}
	}

IL_0483:
	{
		goto IL_0079;
	}

IL_0488:
	{
		int32_t L_137 = V_3;
		int32_t L_138 = V_12;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_137), ((int32_t)(uint32_t)L_138)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_139 = V_20;
		if (!L_139)
		{
			goto IL_004b;
		}
	}

IL_04a3:
	{
		goto IL_0532;
	}

IL_04a8:
	{
		V_13 = 1;
		if (!((int32_t)255))
		{
			goto IL_03d9;
		}
	}
	{
		goto IL_004b;
	}

IL_04ba:
	{
		V_12 = 0;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_140 = V_5;
		if (!L_140)
		{
			goto IL_04a8;
		}
	}
	{
		int32_t L_141 = V_12;
		V_20 = (bool)(false? 1 : 0);
		bool L_142 = V_20;
		if (L_142)
		{
			goto IL_03d9;
		}
	}
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_143 = V_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_144 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_19 = L_144;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_145 = V_19;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, _stringLiteral9BA302517D2A0DB30D9C30048F167559372A6A2F);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral9BA302517D2A0DB30D9C30048F167559372A6A2F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_146 = V_19;
		String_t* L_147 = V_1;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, L_147);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_147);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_148 = V_19;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, _stringLiteral1F02E20990DA5581EAF1074AD65C1AC233161BDD);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral1F02E20990DA5581EAF1074AD65C1AC233161BDD);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_149 = V_19;
		int32_t L_150 = V_2;
		int32_t L_151 = L_150;
		RuntimeObject* L_152 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_151);
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, L_152);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_152);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_153 = V_19;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralE95A453653E06120FE9E373182096BDCF774C95B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_154 = V_19;
		String_t* L_155;
		L_155 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_154, NULL);
		NullCheck(L_143);
		ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_143, L_155, NULL);
		int32_t L_156 = V_7;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_156)&0))) == ((int32_t)0))? 1 : 0);
		bool L_157 = V_20;
		if (L_157)
		{
			goto IL_04a8;
		}
	}
	{
		goto IL_0458;
	}

IL_0532:
	{
		int32_t L_158 = V_13;
		uint16_t L_159 = V_16;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_158), ((int32_t)(uint32_t)L_159)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_160 = V_20;
		if (!L_160)
		{
			goto IL_0682;
		}
	}
	{
		goto IL_065b;
	}

IL_0552:
	{
		V_11 = (bool)0;
		goto IL_05ee;
	}

IL_055a:
	{
		V_7 = ((int32_t)32);
	}

IL_055e:
	{
		ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_161 = (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2*)il2cpp_codegen_object_new(ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2_il2cpp_TypeInfo_var);
		NullCheck(L_161);
		ICMPSocket__ctor_m80761A1A68FF276E7E7D5B91FABBBE2F5A071A3D(L_161, NULL);
		V_8 = L_161;
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_162 = (ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691*)il2cpp_codegen_object_new(ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var);
		NullCheck(L_162);
		ICMPPacket__ctor_m6303509EA3C98A272C3B904724695E22160B34B3(L_162, NULL);
		V_9 = L_162;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_163 = (ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)il2cpp_codegen_object_new(ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		NullCheck(L_163);
		ICMPEcho__ctor_m80DEA99DD5CF94CF154D1F84E37703629E2D2E80(L_163, NULL);
		V_10 = L_163;
		uint16_t L_164 = V_16;
		int32_t L_165 = V_12;
		V_20 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_164), ((int32_t)(uint32_t)L_165)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_166 = V_20;
		if (L_166)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_05a2;
	}

IL_0590:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_167 = V_0;
		NullCheck(L_167);
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_168 = L_167->____xd2637df501625a82_4;
		V_5 = L_168;
	}

IL_0598:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_169 = V_0;
		NullCheck(L_169);
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_170 = L_169->____xb501336c6fc7c870_5;
		V_6 = L_170;
		goto IL_055a;
	}

IL_05a2:
	{
		int32_t L_171 = V_7;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_171)&0))) == ((int32_t)0))? 1 : 0);
		bool L_172 = V_20;
		if (L_172)
		{
			goto IL_05cc;
		}
	}

IL_05b6:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_173 = V_0;
		NullCheck(L_173);
		int32_t L_174;
		L_174 = xfd6b00b29231a30d_get_x10f4d88af727adbc_mFD3B50E125BC475C0EECBF02D88D3C843C1EF303_inline(L_173, NULL);
		V_3 = L_174;
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_175 = V_0;
		NullCheck(L_175);
		int32_t L_176;
		L_176 = xfd6b00b29231a30d_get_xecea0e4ef40edfa5_mB10ECF76EF298C03C643E22CD57F4EE33A3D7500_inline(L_175, NULL);
		V_4 = L_176;
		if (((int32_t)2))
		{
			goto IL_0590;
		}
	}

IL_05cc:
	{
		goto IL_05d7;
	}

IL_05ce:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_177 = V_0;
		NullCheck(L_177);
		int32_t L_178;
		L_178 = xfd6b00b29231a30d_get_xbfb5b0208f9d4d6a_m4527899399C3B3B9A7184652FAEFC83F096E853A_inline(L_177, NULL);
		V_2 = L_178;
		goto IL_05b6;
	}

IL_05d7:
	{
		uint16_t L_179 = V_16;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_179)&0))) == ((int32_t)0))? 1 : 0);
		bool L_180 = V_20;
		if (L_180)
		{
			goto IL_0552;
		}
	}

IL_05ee:
	{
		goto IL_067d;
	}

IL_05f3:
	{
		RuntimeObject* L_181 = ___0_x92ef85a2aa705592;
		if (((xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D*)IsInstClass((RuntimeObject*)L_181, xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var)))
		{
			goto IL_0637;
		}
	}

IL_05fb:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_182 = V_0;
		if (L_182)
		{
			goto IL_05ff;
		}
	}

IL_05fe:
	{
		return;
	}

IL_05ff:
	{
		xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* L_183 = V_0;
		NullCheck(L_183);
		String_t* L_184;
		L_184 = xfd6b00b29231a30d_get_x64f259306803411c_mCD391FCC98C5F44BBD396100AA139A05DD9D7A0C_inline(L_183, NULL);
		V_1 = L_184;
		goto IL_0640;
	}

IL_0608:
	{
		V_0 = (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D*)NULL;
		int32_t L_185 = V_4;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_185)|((int32_t)1)))) == ((int32_t)0))? 1 : 0);
		bool L_186 = V_20;
		if (L_186)
		{
			goto IL_055e;
		}
	}
	{
		uint16_t L_187 = V_16;
		V_20 = (bool)(false? 1 : 0);
		bool L_188 = V_20;
		if (!L_188)
		{
			goto IL_05f3;
		}
	}

IL_0637:
	{
		RuntimeObject* L_189 = ___0_x92ef85a2aa705592;
		V_0 = ((xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D*)IsInstClass((RuntimeObject*)L_189, xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D_il2cpp_TypeInfo_var));
		goto IL_05fb;
	}

IL_0640:
	{
		goto IL_0643;
	}

IL_0642:
	{
		return;
	}

IL_0643:
	{
		uint16_t L_190 = V_16;
		int32_t L_191 = V_12;
		V_20 = (bool)(false? 1 : 0);
		bool L_192 = V_20;
		if (!L_192)
		{
			goto IL_0678;
		}
	}

IL_065b:
	{
		int32_t L_193 = V_2;
		int32_t L_194 = V_12;
		V_20 = (bool)(false? 1 : 0);
		bool L_195 = V_20;
		if (L_195)
		{
			goto IL_00a6;
		}
	}
	{
		goto IL_0642;
	}

IL_0678:
	{
		goto IL_05ce;
	}

IL_067d:
	{
		goto IL_04ba;
	}

IL_0682:
	{
		return;
	}
}
// System.Void TianMa.Tools.TraceUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceUtils__ctor_mCF0A9C140AFE69127E9AB4EABF980581381DC0EE (TraceUtils_tF955F37B5044DF5E615E834F0F70FDB86E584746* __this, const RuntimeMethod* method) 
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
// System.Void TianMa.Tools.TraceUtils/xfd6b00b29231a30d::.ctor(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xfd6b00b29231a30d__ctor_m7DAFBAFC6194062D87C25C2ECCE5E213742C4B34 (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_maxTTL, int32_t ___4_count, int32_t ___5_interval, const RuntimeMethod* method) 
{
	{
		__this->____x10f4d88af727adbc_1 = 3;
		__this->____xecea0e4ef40edfa5_2 = ((int32_t)200);
		__this->____xbfb5b0208f9d4d6a_3 = ((int32_t)25);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		goto IL_004d;
	}

IL_0022:
	{
		int32_t L_0 = ___3_maxTTL;
		__this->____xbfb5b0208f9d4d6a_3 = L_0;
	}

IL_002a:
	{
		int32_t L_1 = ___4_count;
		__this->____x10f4d88af727adbc_1 = L_1;
		int32_t L_2 = ___5_interval;
		__this->____xecea0e4ef40edfa5_2 = L_2;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_3 = ___1_cb;
		__this->____xd2637df501625a82_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xd2637df501625a82_4), (void*)L_3);
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_4 = ___2_ocb;
		__this->____xb501336c6fc7c870_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xb501336c6fc7c870_5), (void*)L_4);
		if (0)
		{
			goto IL_002a;
		}
	}
	{
		goto IL_0056;
	}

IL_004d:
	{
		String_t* L_5 = ___0_host;
		__this->____x64f259306803411c_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____x64f259306803411c_0), (void*)L_5);
		goto IL_0022;
	}

IL_0056:
	{
		return;
	}
}
// System.String TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_x64f259306803411c()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* xfd6b00b29231a30d_get_x64f259306803411c_mCD391FCC98C5F44BBD396100AA139A05DD9D7A0C (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____x64f259306803411c_0;
		return L_0;
	}
}
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_xbfb5b0208f9d4d6a()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xbfb5b0208f9d4d6a_m4527899399C3B3B9A7184652FAEFC83F096E853A (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xbfb5b0208f9d4d6a_3;
		return L_0;
	}
}
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_x10f4d88af727adbc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_x10f4d88af727adbc_mFD3B50E125BC475C0EECBF02D88D3C843C1EF303 (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____x10f4d88af727adbc_1;
		return L_0;
	}
}
// System.Int32 TianMa.Tools.TraceUtils/xfd6b00b29231a30d::get_xecea0e4ef40edfa5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xecea0e4ef40edfa5_mB10ECF76EF298C03C643E22CD57F4EE33A3D7500 (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xecea0e4ef40edfa5_2;
		return L_0;
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
// System.Void TianMa.Tools.x60c233b7055c6c1c::x7872652352d9d52c(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x60c233b7055c6c1c_x7872652352d9d52c_mAF7063B885DBF3A3FE25F751910B85E257B9671E (String_t* ___0_x64f259306803411c, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_xd2637df501625a82, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_xb501336c6fc7c870, int32_t ___3_x10f4d88af727adbc, int32_t ___4_xecea0e4ef40edfa5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x60c233b7055c6c1c_x4f6a9a4e1eaa3d50_mF34D271B5D5925C7248534A29FD03F9279AE2D1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* V_0 = NULL;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* V_1 = NULL;
	{
		String_t* L_0 = ___0_x64f259306803411c;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_1 = ___1_xd2637df501625a82;
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_2 = ___2_xb501336c6fc7c870;
		int32_t L_3 = ___3_x10f4d88af727adbc;
		int32_t L_4 = ___4_xecea0e4ef40edfa5;
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_5 = (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5*)il2cpp_codegen_object_new(x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		x3f0eed751b012ca1__ctor_mD79AE77E9E7719A26756418A3C80F838FB91C036(L_5, L_0, L_1, L_2, L_3, L_4, NULL);
		V_0 = L_5;
		ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* L_6 = (ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9*)il2cpp_codegen_object_new(ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ParameterizedThreadStart__ctor_m31EA734851CB478E822BAB7E1B479CA4FDBF2718(L_6, NULL, (intptr_t)((void*)x60c233b7055c6c1c_x4f6a9a4e1eaa3d50_mF34D271B5D5925C7248534A29FD03F9279AE2D1F_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Thread__ctor_m7319B115C7E11770EEEC7F1D4A01A50E29550700(L_7, L_6, NULL);
		V_1 = L_7;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = V_1;
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_9 = V_0;
		NullCheck(L_8);
		Thread_Start_m64E3F27883C3CCCE7209F5D2BD268A33D4C71566(L_8, L_9, NULL);
		return;
	}
}
// System.Void TianMa.Tools.x60c233b7055c6c1c::x4f6a9a4e1eaa3d50(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x60c233b7055c6c1c_x4f6a9a4e1eaa3d50_mF34D271B5D5925C7248534A29FD03F9279AE2D1F (RuntimeObject* ___0_x92ef85a2aa705592, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPDestinationUnreachable_t6B2D333CB217E72D6BBA55245EC6DD86446A836A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E00B13A71364F602D69FB95326D956AF9B98A61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral327C67324A12BD3F0315508441419B9E7DE5C65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424270DF692E41A7155DA3AA9A9DF9F52A471219);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD863DC498178238F4696352B9407B2C4F43F71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC14C08078BF1D1BE6E4BCD3596258B01F7D57A79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA29F3B953C3FBD4274021DF51EDA1538D0F44BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE1632432BC8234C81171D058EF8BDE98B35585A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2285C527CB5719A2FA728CB9EF993314AECC73B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* V_4 = NULL;
	ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* V_5 = NULL;
	int32_t V_6 = 0;
	ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* V_7 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_8 = NULL;
	ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* V_9 = NULL;
	ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* V_10 = NULL;
	bool V_11 = false;
	uint16_t V_12 = 0;
	IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* V_13 = NULL;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	String_t* V_17 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_18 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_19 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_20 = NULL;
	bool V_21 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_x92ef85a2aa705592;
		if (L_0)
		{
			goto IL_057c;
		}
	}
	{
		bool L_1 = V_11;
		V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_1)&0))) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_21;
		if (L_2)
		{
			goto IL_057b;
		}
	}
	{
		goto IL_049f;
	}

IL_0022:
	{
		uint16_t L_3 = V_12;
		int32_t L_4 = V_2;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)il2cpp_codegen_add(L_4, 1)))))
		{
			goto IL_0416;
		}
	}
	{
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_5 = V_5;
		if (!L_5)
		{
			goto IL_05bc;
		}
	}
	{
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_6 = V_5;
		bool L_7 = V_11;
		NullCheck(L_6);
		ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_inline(L_6, L_7, NULL);
		bool L_8 = V_11;
		int32_t L_9 = V_6;
		V_21 = (bool)(false? 1 : 0);
		bool L_10 = V_21;
		if (!L_10)
		{
			goto IL_0538;
		}
	}
	{
		uint16_t L_11 = V_12;
		V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_11)&0))) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_21;
		if (L_12)
		{
			goto IL_049f;
		}
	}

IL_006e:
	{
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_13 = V_10;
		uint16_t L_14 = V_12;
		NullCheck(L_13);
		L_13->___SequenceNumber_1 = L_14;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_15 = V_10;
		int32_t L_16 = V_6;
		NullCheck(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		String_t* L_17;
		L_17 = String_PadRight_m7C573780177B3246D67D860C2A75AEF5832C7543(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_16, ((int32_t)42), NULL);
		NullCheck(L_15);
		L_15->___Data_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___Data_2), (void*)L_17);
	}
	try
	{// begin try (depth: 1)
		{
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_18 = V_7;
			String_t* L_19 = V_1;
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_20 = V_9;
			NullCheck(L_18);
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_21;
			L_21 = ICMPSocket_Send_m2C6F8F4360F7FCDDD30CE55F5992537C58E84806(L_18, L_19, L_20, ((int32_t)128), NULL);
			V_13 = L_21;
			int32_t L_22 = V_2;
			bool L_23 = V_11;
			V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_22), ((int32_t)(uint32_t)L_23)))) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_24 = V_21;
			if (!L_24)
			{
				goto IL_0399_1;
			}
		}
		{
			uint16_t L_25 = V_12;
			int32_t L_26 = V_2;
			V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_25), ((int32_t)(uint32_t)L_26)))) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_27 = V_21;
			if (!L_27)
			{
				goto IL_02db_1;
			}
		}
		{
			goto IL_01ea_1;
		}

IL_00d8_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_28 = V_4;
			if (!L_28)
			{
				goto IL_03ef_1;
			}
		}
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_29 = V_4;
			String_t* L_30 = V_17;
			String_t* L_31;
			L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_30, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
			NullCheck(L_29);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_29, L_31, NULL);
		}

IL_00f2_1:
		{
			goto IL_0100_1;
		}

IL_00f4_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_32 = V_4;
			if (L_32)
			{
				goto IL_028b_1;
			}
		}
		{
			goto IL_03ef_1;
		}

IL_0100_1:
		{
			int32_t L_33 = V_6;
			V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_33)|((int32_t)4)))) == ((int32_t)0))? 1 : 0);
			bool L_34 = V_21;
			if (L_34)
			{
				goto IL_00f4_1;
			}
		}
		{
			goto IL_0135_1;
		}

IL_011a_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = V_20;
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_36 = V_13;
			NullCheck(L_36);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_37 = L_36->___ICMP_13;
			NullCheck(L_37);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_38 = L_37->___Message_4;
			NullCheck(L_35);
			ArrayElementTypeCheck (L_35, L_38);
			(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = V_20;
			String_t* L_40;
			L_40 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_39, NULL);
			V_17 = L_40;
			goto IL_00d8_1;
		}

IL_0135_1:
		{
			uint16_t L_41 = V_12;
			V_21 = (bool)(false? 1 : 0);
			bool L_42 = V_21;
			if (!L_42)
			{
				goto IL_024d_1;
			}
		}
		{
			int32_t L_43 = V_6;
			V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_43)&0))) == ((int32_t)0))? 1 : 0);
			bool L_44 = V_21;
			if (L_44)
			{
				goto IL_01ea_1;
			}
		}

IL_0161_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = V_20;
			NullCheck(L_45);
			ArrayElementTypeCheck (L_45, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
			goto IL_0248_1;
		}

IL_016f_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
			V_20 = L_46;
		}

IL_0177_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = V_20;
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, _stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_20;
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_49 = V_7;
			NullCheck(L_49);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_50 = L_49->___EndPoint_3;
			NullCheck(L_50);
			String_t* L_51;
			L_51 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
			NullCheck(L_48);
			ArrayElementTypeCheck (L_48, L_51);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_51);
			int32_t L_52 = V_6;
			bool L_53 = V_11;
			V_21 = (bool)(false? 1 : 0);
			bool L_54 = V_21;
			if (!L_54)
			{
				goto IL_0243_1;
			}
		}
		{
			int32_t L_55 = V_6;
			V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_55)&0))) == ((int32_t)0))? 1 : 0);
			bool L_56 = V_21;
			if (L_56)
			{
				goto IL_01ea_1;
			}
		}

IL_01bf_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_57 = V_4;
			String_t* L_58 = V_16;
			NullCheck(L_57);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_57, L_58, NULL);
		}

IL_01c8_1:
		{
			goto IL_03ef_1;
		}

IL_01cd_1:
		{
			int32_t L_59 = V_2;
			uint16_t L_60 = V_12;
			V_21 = (bool)(false? 1 : 0);
			bool L_61 = V_21;
			if (L_61)
			{
				goto IL_00f2_1;
			}
		}
		{
			goto IL_023e_1;
		}

IL_01ea_1:
		{
			goto IL_03ef_1;
		}

IL_01ef_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_62 = V_13;
			NullCheck(L_62);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_63 = L_62->___ICMP_13;
			NullCheck(L_63);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_64 = L_63->___Message_4;
			if (((ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A*)IsInstClass((RuntimeObject*)L_64, ICMPTimeExceeded_tB3534C80AF4E38A8781C3E10D4BF0EAA7FBF010A_il2cpp_TypeInfo_var)))
			{
				goto IL_0269_1;
			}
		}
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_65 = V_13;
			NullCheck(L_65);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_66 = L_65->___ICMP_13;
			NullCheck(L_66);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_67 = L_66->___Message_4;
			if (!((ICMPDestinationUnreachable_t6B2D333CB217E72D6BBA55245EC6DD86446A836A*)IsInstClass((RuntimeObject*)L_67, ICMPDestinationUnreachable_t6B2D333CB217E72D6BBA55245EC6DD86446A836A_il2cpp_TypeInfo_var)))
			{
				goto IL_016f_1;
			}
		}
		{
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_68 = V_7;
			NullCheck(L_68);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_69 = L_68->___EndPoint_3;
			NullCheck(L_69);
			String_t* L_70;
			L_70 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_69);
			String_t* L_71;
			L_71 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73, L_70, _stringLiteralC14C08078BF1D1BE6E4BCD3596258B01F7D57A79, NULL);
			V_16 = L_71;
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_72 = V_4;
			if (!L_72)
			{
				goto IL_03ef_1;
			}
		}
		{
			goto IL_01cd_1;
		}

IL_023e_1:
		{
			goto IL_01bf_1;
		}

IL_0243_1:
		{
			goto IL_0161_1;
		}

IL_0248_1:
		{
			goto IL_011a_1;
		}

IL_024d_1:
		{
			bool L_73 = V_11;
			V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_73)&0))) == ((int32_t)0))? 1 : 0);
			bool L_74 = V_21;
			if (L_74)
			{
				goto IL_032b_1;
			}
		}
		{
			goto IL_02db_1;
		}

IL_0269_1:
		{
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_75 = V_7;
			NullCheck(L_75);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_76 = L_75->___EndPoint_3;
			NullCheck(L_76);
			String_t* L_77;
			L_77 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_76);
			String_t* L_78;
			L_78 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73, L_77, _stringLiteral327C67324A12BD3F0315508441419B9E7DE5C65A, NULL);
			V_15 = L_78;
			goto IL_00f4_1;
		}

IL_028b_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_79 = V_4;
			String_t* L_80 = V_15;
			NullCheck(L_79);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_79, L_80, NULL);
			goto IL_02b1_1;
		}

IL_0296_1:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_81 = V_4;
			String_t* L_82 = V_14;
			String_t* L_83;
			L_83 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_82, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
			NullCheck(L_81);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_81, L_83, NULL);
		}

IL_02a9_1:
		{
			V_11 = (bool)1;
			goto IL_03ef_1;
		}

IL_02b1_1:
		{
			goto IL_02d9_1;
		}

IL_02b3_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_84 = V_19;
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_85 = V_13;
			NullCheck(L_85);
			uint8_t L_86 = L_85->___TimeToLive_7;
			uint8_t L_87 = L_86;
			RuntimeObject* L_88 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_87);
			NullCheck(L_84);
			ArrayElementTypeCheck (L_84, L_88);
			(L_84)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_88);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = V_19;
			String_t* L_90;
			L_90 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_89, NULL);
			V_14 = L_90;
			String_t* L_91 = V_14;
			il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
			Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_91, NULL);
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_92 = V_4;
			if (!L_92)
			{
				goto IL_02a9_1;
			}
		}
		{
			goto IL_0296_1;
		}

IL_02d9_1:
		{
			goto IL_0326_1;
		}

IL_02db_1:
		{
			if (0)
			{
				goto IL_0177_1;
			}
		}
		{
			int32_t L_93 = V_6;
			V_21 = (bool)(false? 1 : 0);
			bool L_94 = V_21;
			if (L_94)
			{
				goto IL_01c8_1;
			}
		}
		{
			int32_t L_95 = V_6;
			V_21 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_95)) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_96 = V_21;
			if (L_96)
			{
				goto IL_03ef_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_97 = V_19;
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_98 = V_7;
			NullCheck(L_98);
			int32_t L_99 = L_98->___TimeElapsed_5;
			int32_t L_100 = L_99;
			RuntimeObject* L_101 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_100);
			NullCheck(L_97);
			ArrayElementTypeCheck (L_97, L_101);
			(L_97)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_101);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_102 = V_19;
			NullCheck(L_102);
			ArrayElementTypeCheck (L_102, _stringLiteral424270DF692E41A7155DA3AA9A9DF9F52A471219);
			(L_102)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral424270DF692E41A7155DA3AA9A9DF9F52A471219);
			goto IL_02b3_1;
		}

IL_0326_1:
		{
			goto IL_01ea_1;
		}

IL_032b_1:
		{
			goto IL_03ef_1;
		}

IL_0330_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = V_19;
			NullCheck(L_103);
			ArrayElementTypeCheck (L_103, _stringLiteralADD863DC498178238F4696352B9407B2C4F43F71);
			(L_103)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralADD863DC498178238F4696352B9407B2C4F43F71);
			int32_t L_104 = V_2;
			int32_t L_105 = V_2;
			V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_104), ((int32_t)(uint32_t)L_105)))) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_106 = V_21;
			if (L_106)
			{
				goto IL_00f2_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = V_19;
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_108 = V_13;
			NullCheck(L_108);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_109 = L_108->___ICMP_13;
			NullCheck(L_109);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_110 = L_109->___Message_4;
			NullCheck(((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)CastclassClass((RuntimeObject*)L_110, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)));
			String_t* L_111 = ((ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)CastclassClass((RuntimeObject*)L_110, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)))->___Data_2;
			NullCheck(L_111);
			int32_t L_112;
			L_112 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_111, NULL);
			int32_t L_113 = L_112;
			RuntimeObject* L_114 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_113);
			NullCheck(L_107);
			ArrayElementTypeCheck (L_107, L_114);
			(L_107)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_114);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_115 = V_19;
			NullCheck(L_115);
			ArrayElementTypeCheck (L_115, _stringLiteralCA29F3B953C3FBD4274021DF51EDA1538D0F44BA);
			(L_115)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralCA29F3B953C3FBD4274021DF51EDA1538D0F44BA);
			int32_t L_116 = V_2;
			V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_116)|((int32_t)255)))) == ((int32_t)0))? 1 : 0);
			bool L_117 = V_21;
			if (!L_117)
			{
				goto IL_03ea_1;
			}
		}

IL_0399_1:
		{
			IPPacket_tBE962557829268644870CAC8085C1659D4D7A698* L_118 = V_13;
			NullCheck(L_118);
			ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_119 = L_118->___ICMP_13;
			NullCheck(L_119);
			ICMPMessage_tA155DAFD69E1EFAF0F024C978E6F59EB8C1736B1* L_120 = L_119->___Message_4;
			if (!((ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB*)IsInstClass((RuntimeObject*)L_120, ICMPEchoReply_t0169016D2A6BEC271FF8577634A312E35F571FCB_il2cpp_TypeInfo_var)))
			{
				goto IL_01ef_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_121 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
			V_19 = L_121;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_122 = V_19;
			NullCheck(L_122);
			ArrayElementTypeCheck (L_122, _stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73);
			(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6D95F957A83E9EAE9FFDACCC1163104D2970ED73);
			bool L_123 = V_11;
			V_21 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_123)) <= ((uint32_t)(-1))))? 1 : 0);
			bool L_124 = V_21;
			if (L_124)
			{
				goto IL_0177_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_125 = V_19;
			ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_126 = V_7;
			NullCheck(L_126);
			EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564* L_127 = L_126->___EndPoint_3;
			NullCheck(L_127);
			String_t* L_128;
			L_128 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_127);
			NullCheck(L_125);
			ArrayElementTypeCheck (L_125, L_128);
			(L_125)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_128);
			goto IL_0330_1;
		}

IL_03ea_1:
		{
			goto IL_02db_1;
		}

IL_03ef_1:
		{
			goto IL_0408;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03f1;
		}
		throw e;
	}

CATCH_03f1:
	{// begin catch(System.Object)
		{
			goto IL_0402;
		}

IL_03f4:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_129 = V_4;
			NullCheck(L_129);
			ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_129, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C4E5CED80B3FD51ACED6272C9512C7800193D73)), NULL);
			goto IL_0406;
		}

IL_0402:
		{
			ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_130 = V_4;
			if (L_130)
			{
				goto IL_03f4;
			}
		}

IL_0406:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0408;
		}
	}// end catch (depth: 1)

IL_0408:
	{
		uint16_t L_131 = V_12;
		V_12 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_131, 1)));
		goto IL_0523;
	}

IL_0414:
	{
		goto IL_041b;
	}

IL_0416:
	{
		uint16_t L_132 = V_12;
		if ((((int32_t)L_132) > ((int32_t)0)))
		{
			goto IL_0432;
		}
	}

IL_041b:
	{
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_133 = V_10;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_134 = V_8;
		NullCheck(L_134);
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_134, 0, ((int32_t)65535));
		NullCheck(L_133);
		L_133->___Identifier_0 = (uint16_t)((int32_t)(uint16_t)L_135);
		goto IL_0456;
	}

IL_0432:
	{
		int32_t L_136 = V_3;
		if ((((int32_t)L_136) <= ((int32_t)0)))
		{
			goto IL_041b;
		}
	}
	{
		int32_t L_137 = V_3;
		V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_137)|((int32_t)-1)))) == ((int32_t)0))? 1 : 0);
		bool L_138 = V_21;
		if (L_138)
		{
			goto IL_0479;
		}
	}
	{
		int32_t L_139 = V_3;
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549(L_139, NULL);
		goto IL_0414;
	}

IL_0456:
	{
		goto IL_0481;
	}

IL_0458:
	{
		bool L_140 = V_11;
		int32_t L_141 = V_2;
		V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_140), ((int32_t)(uint32_t)L_141)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_142 = V_21;
		if (L_142)
		{
			goto IL_04b7;
		}
	}
	{
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_143 = V_9;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_144 = V_10;
		NullCheck(L_143);
		L_143->___Message_4 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&L_143->___Message_4), (void*)L_144);
	}

IL_0479:
	{
		V_12 = (uint16_t)1;
		goto IL_0022;
	}

IL_0481:
	{
		goto IL_049d;
	}

IL_0483:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_145 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_145, NULL);
		V_8 = L_145;
		ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691* L_146 = (ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691*)il2cpp_codegen_object_new(ICMPPacket_tA4C5AD7F6BCAA39E49B0BE4F07BD0A3727182691_il2cpp_TypeInfo_var);
		NullCheck(L_146);
		ICMPPacket__ctor_m6303509EA3C98A272C3B904724695E22160B34B3(L_146, NULL);
		V_9 = L_146;
		ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4* L_147 = (ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4*)il2cpp_codegen_object_new(ICMPEcho_t9B07AB4AC2CCA3DBFE46D8E6A3E07BB0132CA7A4_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		ICMPEcho__ctor_m80DEA99DD5CF94CF154D1F84E37703629E2D2E80(L_147, NULL);
		V_10 = L_147;
		V_11 = (bool)0;
		goto IL_0458;
	}

IL_049d:
	{
		goto IL_0508;
	}

IL_049f:
	{
		uint16_t L_148 = V_12;
		V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_148)|((int32_t)3)))) == ((int32_t)0))? 1 : 0);
		bool L_149 = V_21;
		if (L_149)
		{
			goto IL_0479;
		}
	}

IL_04b7:
	{
		ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2* L_150 = (ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2*)il2cpp_codegen_object_new(ICMPSocket_t326F58301E563A82DBC6E2CDC5CA96A990E884C2_il2cpp_TypeInfo_var);
		NullCheck(L_150);
		ICMPSocket__ctor_m80761A1A68FF276E7E7D5B91FABBBE2F5A071A3D(L_150, NULL);
		V_7 = L_150;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_151 = V_4;
		if (!L_151)
		{
			goto IL_0483;
		}
	}
	{
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_152 = V_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_153 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_18 = L_153;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_154 = V_18;
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, _stringLiteral1E00B13A71364F602D69FB95326D956AF9B98A61);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral1E00B13A71364F602D69FB95326D956AF9B98A61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_155 = V_18;
		String_t* L_156 = V_1;
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_156);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_156);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_157 = V_18;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, _stringLiteralDE1632432BC8234C81171D058EF8BDE98B35585A);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralDE1632432BC8234C81171D058EF8BDE98B35585A);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_158 = V_18;
		int32_t L_159 = V_6;
		int32_t L_160 = L_159;
		RuntimeObject* L_161 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_160);
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_161);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_161);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_162 = V_18;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteralE2285C527CB5719A2FA728CB9EF993314AECC73B);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralE2285C527CB5719A2FA728CB9EF993314AECC73B);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_163 = V_18;
		String_t* L_164;
		L_164 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_163, NULL);
		NullCheck(L_152);
		ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline(L_152, L_164, NULL);
		goto IL_0483;
	}

IL_0508:
	{
		uint16_t L_165 = V_12;
		int32_t L_166 = V_2;
		V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(uint32_t)L_165), ((int32_t)(uint32_t)L_166)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_167 = V_21;
		if (!L_167)
		{
			goto IL_006e;
		}
	}

IL_0523:
	{
		int32_t L_168 = V_2;
		V_21 = (bool)((!(((uint32_t)((int32_t)(uint32_t)L_168)) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_169 = V_21;
		if (!L_169)
		{
			goto IL_0022;
		}
	}

IL_0538:
	{
		goto IL_05bc;
	}

IL_053d:
	{
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_170 = V_0;
		NullCheck(L_170);
		int32_t L_171;
		L_171 = x3f0eed751b012ca1_get_x10f4d88af727adbc_m605AFA9BA776BDE6A2EA513EE3E470E3B14374E4_inline(L_170, NULL);
		V_2 = L_171;
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_172 = V_0;
		NullCheck(L_172);
		int32_t L_173;
		L_173 = x3f0eed751b012ca1_get_xecea0e4ef40edfa5_mD18046EFECAEA3880BE0F9D2588FCEBA8A1D7A47_inline(L_172, NULL);
		V_3 = L_173;
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_174 = V_0;
		NullCheck(L_174);
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_175 = L_174->____xd2637df501625a82_0;
		V_4 = L_175;
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_176 = V_0;
		NullCheck(L_176);
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_177 = L_176->____x235b5094753c6b72_1;
		V_5 = L_177;
		V_6 = ((int32_t)32);
		goto IL_056b;
	}

IL_0561:
	{
		return;
	}

IL_0562:
	{
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_178 = V_0;
		NullCheck(L_178);
		String_t* L_179;
		L_179 = x3f0eed751b012ca1_get_x64f259306803411c_m9C075EDAA855E89176E1DB922EBD42A5FE2930C8_inline(L_178, NULL);
		V_1 = L_179;
		goto IL_053d;
	}

IL_056b:
	{
		goto IL_0579;
	}

IL_056d:
	{
		RuntimeObject* L_180 = ___0_x92ef85a2aa705592;
		V_0 = ((x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5*)IsInstClass((RuntimeObject*)L_180, x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var));
	}

IL_0574:
	{
		x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* L_181 = V_0;
		if (L_181)
		{
			goto IL_0562;
		}
	}
	{
		goto IL_0561;
	}

IL_0579:
	{
		goto IL_05b7;
	}

IL_057b:
	{
		return;
	}

IL_057c:
	{
		V_0 = (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5*)NULL;
	}

IL_057e:
	{
		RuntimeObject* L_182 = ___0_x92ef85a2aa705592;
		if (!((x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5*)IsInstClass((RuntimeObject*)L_182, x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5_il2cpp_TypeInfo_var)))
		{
			goto IL_0574;
		}
	}
	{
		bool L_183 = V_11;
		V_21 = (bool)((((int32_t)((int32_t)(((int32_t)(uint32_t)L_183)&0))) == ((int32_t)0))? 1 : 0);
		bool L_184 = V_21;
		if (!L_184)
		{
			goto IL_057e;
		}
	}
	{
		int32_t L_185 = V_6;
		int32_t L_186 = V_6;
		V_21 = (bool)((!(((uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(uint32_t)L_185), ((int32_t)(uint32_t)L_186)))) <= ((uint32_t)(-1))))? 1 : 0);
		bool L_187 = V_21;
		if (L_187)
		{
			goto IL_04b7;
		}
	}
	{
		goto IL_056d;
	}

IL_05b7:
	{
		goto IL_049f;
	}

IL_05bc:
	{
		return;
	}
}
// System.Void TianMa.Tools.x60c233b7055c6c1c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x60c233b7055c6c1c__ctor_m81667DBBCCD27B7DA35C5FC6CFB343BB4006199C (x60c233b7055c6c1c_tC88D533269B78803761FFD155FC68D34A761F925* __this, const RuntimeMethod* method) 
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
// System.Void TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::.ctor(System.String,TianMa.Tools.ICMP_CALLBACK,TianMa.Tools.ICMP_OVER_CALLBACK,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void x3f0eed751b012ca1__ctor_mD79AE77E9E7719A26756418A3C80F838FB91C036 (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, String_t* ___0_host, ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* ___1_cb, ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* ___2_ocb, int32_t ___3_count, int32_t ___4_interval, const RuntimeMethod* method) 
{
	{
		__this->____x10f4d88af727adbc_3 = 5;
		__this->____xecea0e4ef40edfa5_4 = ((int32_t)400);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_host;
		__this->____x64f259306803411c_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____x64f259306803411c_2), (void*)L_0);
		if (0)
		{
			goto IL_0022;
		}
	}

IL_0022:
	{
		int32_t L_1 = ___3_count;
		__this->____x10f4d88af727adbc_3 = L_1;
		int32_t L_2 = ___4_interval;
		__this->____xecea0e4ef40edfa5_4 = L_2;
		ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* L_3 = ___1_cb;
		__this->____xd2637df501625a82_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____xd2637df501625a82_0), (void*)L_3);
		ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* L_4 = ___2_ocb;
		__this->____x235b5094753c6b72_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____x235b5094753c6b72_1), (void*)L_4);
		return;
	}
}
// System.String TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_x64f259306803411c()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* x3f0eed751b012ca1_get_x64f259306803411c_m9C075EDAA855E89176E1DB922EBD42A5FE2930C8 (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____x64f259306803411c_2;
		return L_0;
	}
}
// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_x10f4d88af727adbc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_x10f4d88af727adbc_m605AFA9BA776BDE6A2EA513EE3E470E3B14374E4 (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____x10f4d88af727adbc_3;
		return L_0;
	}
}
// System.Int32 TianMa.Tools.x60c233b7055c6c1c/x3f0eed751b012ca1::get_xecea0e4ef40edfa5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_xecea0e4ef40edfa5_mD18046EFECAEA3880BE0F9D2588FCEBA8A1D7A47 (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xecea0e4ef40edfa5_4;
		return L_0;
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
// System.Void Xenocode.Client.Attributes.AssemblyAttributes.ProcessedByXenocode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessedByXenocode__ctor_m666ED028C703B47D31B168EF864B8F50284B96E2 (ProcessedByXenocode_t0A5FCDD36133FF29D26E0B9CBEBFD234BE9A85C6* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void Xenocode.Client.Attributes.AssemblyAttributes.SuppressDisassembly::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuppressDisassembly__ctor_m2402EEE74C03B8E95C25DC6DFFE074F6AEFB7738 (SuppressDisassembly_t3E713694B0529A63D0496372556BB04A321FB4A6* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* IPEndPoint_get_Address_m72F783CB76E10E9DBDF680CCC1DAAED201BABB1C_inline (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, const RuntimeMethod* method) 
{
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = __this->____address_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ICMP_OVER_CALLBACK_Invoke_m77036C3F916BF8654A7D0BB2F1661CB0B2C5301A_inline (ICMP_OVER_CALLBACK_t94B13FAA65604E735384AD2D4126BD63DBB64F15* __this, bool ___0_ok, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ok, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ICMP_CALLBACK_Invoke_mD1154775EF20E8C172A48F34F0314C7D1631AEA2_inline (ICMP_CALLBACK_tDBA9EB41D135676B62D77977138D42D75BF60C00* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_content, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPHostEntry_get_HostName_m04050E3890C11BC5CB02BF48FBDD8AB4938FC390_inline (IPHostEntry_tAAAEB0F40DB9F28BE601B5FE7DA1D76191C94490* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___hostName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_x10f4d88af727adbc_mFD3B50E125BC475C0EECBF02D88D3C843C1EF303_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____x10f4d88af727adbc_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xecea0e4ef40edfa5_mB10ECF76EF298C03C643E22CD57F4EE33A3D7500_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xecea0e4ef40edfa5_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t xfd6b00b29231a30d_get_xbfb5b0208f9d4d6a_m4527899399C3B3B9A7184652FAEFC83F096E853A_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xbfb5b0208f9d4d6a_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* xfd6b00b29231a30d_get_x64f259306803411c_mCD391FCC98C5F44BBD396100AA139A05DD9D7A0C_inline (xfd6b00b29231a30d_tAFE0C454ACEE8313DB7BA5365F5AA88CA5B3A18D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____x64f259306803411c_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_x10f4d88af727adbc_m605AFA9BA776BDE6A2EA513EE3E470E3B14374E4_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____x10f4d88af727adbc_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t x3f0eed751b012ca1_get_xecea0e4ef40edfa5_mD18046EFECAEA3880BE0F9D2588FCEBA8A1D7A47_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____xecea0e4ef40edfa5_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* x3f0eed751b012ca1_get_x64f259306803411c_m9C075EDAA855E89176E1DB922EBD42A5FE2930C8_inline (x3f0eed751b012ca1_t1E84CCFC8B185294628D29CA5755E6A5F9C16CE5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____x64f259306803411c_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
