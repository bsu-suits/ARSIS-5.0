﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`2<System.Net.IPAddress,System.String>
struct Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t5AB6E9D20BDB8A993042228A58C871DF8C3BCE87;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE;
// ExitGames.Client.Photon.NonAllocDictionary`2/Node<System.Byte,System.Object>[]
struct NodeU5BU5D_t69D94558BCC9ACD5274661CA6351701CE7D129EB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// ExitGames.Client.Photon.EventData
struct EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_tEFDFF4B51F81FE18E3248284A0C9804EA5D8128B;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.String
struct String_t;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_tE24712E2C7A7860DA95F0BB13F6E929A8F30D3C3;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF;
// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415;
// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0
struct U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5;
// ExitGames.Client.Photon.SocketNative/LogCallbackDelegate
struct LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5;
// ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
struct ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912;
// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01;
// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604;
// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990;

IL2CPP_EXTERN_C RuntimeClass* AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_freeHead
	int32_t ____freeHead_1;
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_freeCount
	int32_t ____freeCount_2;
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2::_usedCount
	int32_t ____usedCount_3;
	// System.UInt32 ExitGames.Client.Photon.NonAllocDictionary`2::_capacity
	uint32_t ____capacity_4;
	// System.Int32[] ExitGames.Client.Photon.NonAllocDictionary`2::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_5;
	// ExitGames.Client.Photon.NonAllocDictionary`2/Node<K,V>[] ExitGames.Client.Photon.NonAllocDictionary`2::_nodes
	NodeU5BU5D_t69D94558BCC9ACD5274661CA6351701CE7D129EB* ____nodes_6;
	// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2::isReadOnly
	bool ___isReadOnly_7;
	// System.Collections.Generic.ICollection`1<K> ExitGames.Client.Photon.NonAllocDictionary`2::keys
	RuntimeObject* ___keys_8;
	// System.Collections.Generic.ICollection`1<V> ExitGames.Client.Photon.NonAllocDictionary`2::values
	RuntimeObject* ___values_9;

public:
	inline static int32_t get_offset_of__freeHead_1() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____freeHead_1)); }
	inline int32_t get__freeHead_1() const { return ____freeHead_1; }
	inline int32_t* get_address_of__freeHead_1() { return &____freeHead_1; }
	inline void set__freeHead_1(int32_t value)
	{
		____freeHead_1 = value;
	}

	inline static int32_t get_offset_of__freeCount_2() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____freeCount_2)); }
	inline int32_t get__freeCount_2() const { return ____freeCount_2; }
	inline int32_t* get_address_of__freeCount_2() { return &____freeCount_2; }
	inline void set__freeCount_2(int32_t value)
	{
		____freeCount_2 = value;
	}

	inline static int32_t get_offset_of__usedCount_3() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____usedCount_3)); }
	inline int32_t get__usedCount_3() const { return ____usedCount_3; }
	inline int32_t* get_address_of__usedCount_3() { return &____usedCount_3; }
	inline void set__usedCount_3(int32_t value)
	{
		____usedCount_3 = value;
	}

	inline static int32_t get_offset_of__capacity_4() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____capacity_4)); }
	inline uint32_t get__capacity_4() const { return ____capacity_4; }
	inline uint32_t* get_address_of__capacity_4() { return &____capacity_4; }
	inline void set__capacity_4(uint32_t value)
	{
		____capacity_4 = value;
	}

	inline static int32_t get_offset_of__buckets_5() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____buckets_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_5() const { return ____buckets_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_5() { return &____buckets_5; }
	inline void set__buckets_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_5), (void*)value);
	}

	inline static int32_t get_offset_of__nodes_6() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ____nodes_6)); }
	inline NodeU5BU5D_t69D94558BCC9ACD5274661CA6351701CE7D129EB* get__nodes_6() const { return ____nodes_6; }
	inline NodeU5BU5D_t69D94558BCC9ACD5274661CA6351701CE7D129EB** get_address_of__nodes_6() { return &____nodes_6; }
	inline void set__nodes_6(NodeU5BU5D_t69D94558BCC9ACD5274661CA6351701CE7D129EB* value)
	{
		____nodes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nodes_6), (void*)value);
	}

	inline static int32_t get_offset_of_isReadOnly_7() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ___isReadOnly_7)); }
	inline bool get_isReadOnly_7() const { return ___isReadOnly_7; }
	inline bool* get_address_of_isReadOnly_7() { return &___isReadOnly_7; }
	inline void set_isReadOnly_7(bool value)
	{
		___isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_keys_8() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ___keys_8)); }
	inline RuntimeObject* get_keys_8() const { return ___keys_8; }
	inline RuntimeObject** get_address_of_keys_8() { return &___keys_8; }
	inline void set_keys_8(RuntimeObject* value)
	{
		___keys_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_8), (void*)value);
	}

	inline static int32_t get_offset_of_values_9() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5, ___values_9)); }
	inline RuntimeObject* get_values_9() const { return ___values_9; }
	inline RuntimeObject** get_address_of_values_9() { return &___values_9; }
	inline void set_values_9(RuntimeObject* value)
	{
		___values_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_9), (void*)value);
	}
};

struct NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5_StaticFields
{
public:
	// System.UInt32[] ExitGames.Client.Photon.NonAllocDictionary`2::_primeTableUInt
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____primeTableUInt_0;

public:
	inline static int32_t get_offset_of__primeTableUInt_0() { return static_cast<int32_t>(offsetof(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5_StaticFields, ____primeTableUInt_0)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__primeTableUInt_0() const { return ____primeTableUInt_0; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__primeTableUInt_0() { return &____primeTableUInt_0; }
	inline void set__primeTableUInt_0(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____primeTableUInt_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____primeTableUInt_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_tE24712E2C7A7860DA95F0BB13F6E929A8F30D3C3 * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6, ___paramDict_0)); }
	inline NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6, ___wrapperPools_1)); }
	inline StructWrapperPools_tE24712E2C7A7860DA95F0BB13F6E929A8F30D3C3 * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_tE24712E2C7A7860DA95F0BB13F6E929A8F30D3C3 ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_tE24712E2C7A7860DA95F0BB13F6E929A8F30D3C3 * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ExitGames.Client.Photon.IPhotonSocket/<>c
struct U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_StaticFields
{
public:
	// ExitGames.Client.Photon.IPhotonSocket/<>c ExitGames.Client.Photon.IPhotonSocket/<>c::<>9
	U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * ___U3CU3E9_0;
	// System.Func`2<System.Net.IPAddress,System.String> ExitGames.Client.Photon.IPhotonSocket/<>c::<>9__55_0
	Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * ___U3CU3E9__55_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__55_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_StaticFields, ___U3CU3E9__55_0_1)); }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * get_U3CU3E9__55_0_1() const { return ___U3CU3E9__55_0_1; }
	inline Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 ** get_address_of_U3CU3E9__55_0_1() { return &___U3CU3E9__55_0_1; }
	inline void set_U3CU3E9__55_0_1(Func_2_t07AA32ABA3AA42B99EB1A0D449B0292901F35822 * value)
	{
		___U3CU3E9__55_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__55_0_1), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/GpBinaryV3Parameters
struct GpBinaryV3Parameters_t29F3BBEF3C8F896DE0BAEACA943C2A2C9D553F4D  : public RuntimeObject
{
public:

public:
};


// ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext
struct ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::workSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___workSocket_0;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ReceivedHeaderBytes
	int32_t ___ReceivedHeaderBytes_1;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::HeaderBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___HeaderBuffer_2;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ExpectedMessageBytes
	int32_t ___ExpectedMessageBytes_3;
	// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::ReceivedMessageBytes
	int32_t ___ReceivedMessageBytes_4;
	// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::MessageBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___MessageBuffer_5;

public:
	inline static int32_t get_offset_of_workSocket_0() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___workSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_workSocket_0() const { return ___workSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_workSocket_0() { return &___workSocket_0; }
	inline void set_workSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___workSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___workSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_ReceivedHeaderBytes_1() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___ReceivedHeaderBytes_1)); }
	inline int32_t get_ReceivedHeaderBytes_1() const { return ___ReceivedHeaderBytes_1; }
	inline int32_t* get_address_of_ReceivedHeaderBytes_1() { return &___ReceivedHeaderBytes_1; }
	inline void set_ReceivedHeaderBytes_1(int32_t value)
	{
		___ReceivedHeaderBytes_1 = value;
	}

	inline static int32_t get_offset_of_HeaderBuffer_2() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___HeaderBuffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_HeaderBuffer_2() const { return ___HeaderBuffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_HeaderBuffer_2() { return &___HeaderBuffer_2; }
	inline void set_HeaderBuffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___HeaderBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HeaderBuffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_ExpectedMessageBytes_3() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___ExpectedMessageBytes_3)); }
	inline int32_t get_ExpectedMessageBytes_3() const { return ___ExpectedMessageBytes_3; }
	inline int32_t* get_address_of_ExpectedMessageBytes_3() { return &___ExpectedMessageBytes_3; }
	inline void set_ExpectedMessageBytes_3(int32_t value)
	{
		___ExpectedMessageBytes_3 = value;
	}

	inline static int32_t get_offset_of_ReceivedMessageBytes_4() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___ReceivedMessageBytes_4)); }
	inline int32_t get_ReceivedMessageBytes_4() const { return ___ReceivedMessageBytes_4; }
	inline int32_t* get_address_of_ReceivedMessageBytes_4() { return &___ReceivedMessageBytes_4; }
	inline void set_ReceivedMessageBytes_4(int32_t value)
	{
		___ReceivedMessageBytes_4 = value;
	}

	inline static int32_t get_offset_of_MessageBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912, ___MessageBuffer_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_MessageBuffer_5() const { return ___MessageBuffer_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_MessageBuffer_5() { return &___MessageBuffer_5; }
	inline void set_MessageBuffer_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___MessageBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBuffer_5), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c
struct U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_StaticFields
{
public:
	// ExitGames.Client.Photon.SupportClass/<>c ExitGames.Client.Photon.SupportClass/<>c::<>9
	U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::millisecondsInterval
	int32_t ___millisecondsInterval_0;
	// System.Func`1<System.Boolean> ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::myThread
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___myThread_1;

public:
	inline static int32_t get_offset_of_millisecondsInterval_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30, ___millisecondsInterval_0)); }
	inline int32_t get_millisecondsInterval_0() const { return ___millisecondsInterval_0; }
	inline int32_t* get_address_of_millisecondsInterval_0() { return &___millisecondsInterval_0; }
	inline void set_millisecondsInterval_0(int32_t value)
	{
		___millisecondsInterval_0 = value;
	}

	inline static int32_t get_offset_of_myThread_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30, ___myThread_1)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_myThread_1() const { return ___myThread_1; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_myThread_1() { return &___myThread_1; }
	inline void set_myThread_1(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___myThread_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myThread_1), (void*)value);
	}
};


// ExitGames.Client.Photon.SupportClass/ThreadSafeRandom
struct ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990  : public RuntimeObject
{
public:

public:
};

struct ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_StaticFields
{
public:
	// System.Random ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::_r
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ____r_0;

public:
	inline static int32_t get_offset_of__r_0() { return static_cast<int32_t>(offsetof(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_StaticFields, ____r_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get__r_0() const { return ____r_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of__r_0() { return &____r_0; }
	inline void set__r_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		____r_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____r_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
struct KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint8_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___key_0)); }
	inline uint8_t get_key_0() const { return ___key_0; }
	inline uint8_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint8_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>
struct PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 
{
public:
	// System.Int32 ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator::_index
	int32_t ____index_0;
	// ExitGames.Client.Photon.NonAllocDictionary`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator::_dict
	NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * ____dict_1;

public:
	inline static int32_t get_offset_of__index_0() { return static_cast<int32_t>(offsetof(PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25, ____index_0)); }
	inline int32_t get__index_0() const { return ____index_0; }
	inline int32_t* get_address_of__index_0() { return &____index_0; }
	inline void set__index_0(int32_t value)
	{
		____index_0 = value;
	}

	inline static int32_t get_offset_of__dict_1() { return static_cast<int32_t>(offsetof(PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25, ____dict_1)); }
	inline NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * get__dict_1() const { return ____dict_1; }
	inline NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 ** get_address_of__dict_1() { return &____dict_1; }
	inline void set__dict_1(NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * value)
	{
		____dict_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dict_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
struct __StaticArrayInitTypeSizeU3D120_tFA94CF92D4300CAB1C629098AE5A8CD452BA2CD5 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tFA94CF92D4300CAB1C629098AE5A8CD452BA2CD5__padding[120];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1212
struct __StaticArrayInitTypeSizeU3D1212_t3E9A2A7C11AC57B0D294D8832A065DBD317B3900 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1212_t3E9A2A7C11AC57B0D294D8832A065DBD317B3900__padding[1212];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCF2D663C4BBD965E07058986FC7657D982F43668 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCF2D663C4BBD965E07058986FC7657D982F43668__padding[128];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=192
struct __StaticArrayInitTypeSizeU3D192_t5581AEC5357E7178C4BCDEECEF16310821B7E3A7 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D192_t5581AEC5357E7178C4BCDEECEF16310821B7E3A7__padding[192];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t01AF40E6EAF0F630F7800C762771996099BCADDA 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t01AF40E6EAF0F630F7800C762771996099BCADDA__padding[9];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tC7F7C42E3C5851C38A694D99011A39C7E4A1AC47 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tC7F7C42E3C5851C38A694D99011A39C7E4A1AC47__padding[96];
	};

public:
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionProtocol
struct ConnectionProtocol_tB0C6C96382705184FB5427580FC70DFF5EA9BEE5 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tB0C6C96382705184FB5427580FC70DFF5EA9BEE5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct ConnectionStateValue_t26B5E83525C4042191CC38CECB35933264AF81BD 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_t26B5E83525C4042191CC38CECB35933264AF81BD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct DebugLevel_tF04CCD1C9AE361410F1825F2E1C8F877C6C788AB 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tF04CCD1C9AE361410F1825F2E1C8F877C6C788AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct StatusCode_tC1CD6C8A8D2B5A39AF725D37B8FFADFB877B4B87 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tC1CD6C8A8D2B5A39AF725D37B8FFADFB877B4B87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StructWrapping.WrappedType
struct WrappedType_t004F51220BCF179B4870057BDA3B8EECE2604542 
{
public:
	// System.Int32 ExitGames.Client.Photon.StructWrapping.WrappedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrappedType_t004F51220BCF179B4870057BDA3B8EECE2604542, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode
struct ChainingMode_tF1B76E2940F43ECBAD43A62CBCEEF5F29F0B8595 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/ChainingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChainingMode_tF1B76E2940F43ECBAD43A62CBCEEF5F29F0B8595, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel
struct egDebugLevel_t125F7216EF2124044E8F4E694877C60CBFC90FDC 
{
public:
	// System.Int32 ExitGames.Client.Photon.Encryption.EncryptorNative/egDebugLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(egDebugLevel_t125F7216EF2124044E8F4E694877C60CBFC90FDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.IProtocol/DeserializationFlags
struct DeserializationFlags_tB8955DB7469B1013DF5AFB435B287F4271BE3C1E 
{
public:
	// System.Int32 ExitGames.Client.Photon.IProtocol/DeserializationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeserializationFlags_tB8955DB7469B1013DF5AFB435B287F4271BE3C1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::_interator
	PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  ____interator_0;

public:
	inline static int32_t get_offset_of__interator_0() { return static_cast<int32_t>(offsetof(KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323, ____interator_0)); }
	inline PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  get__interator_0() const { return ____interator_0; }
	inline PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * get_address_of__interator_0() { return &____interator_0; }
	inline void set__interator_0(PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  value)
	{
		____interator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____interator_0))->____dict_1), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_pinvoke
{
	PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  ____interator_0;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
struct KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_com
{
	PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  ____interator_0;
};

// ExitGames.Client.Photon.Protocol16/GpType
struct GpType_tE3605231BF739C493BE5670566BA06117E16D17C 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol16/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_tE3605231BF739C493BE5670566BA06117E16D17C, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.Protocol18/GpType
struct GpType_t9060B39D6A55ACE1DA99033967EE066D48C66BA3 
{
public:
	// System.Byte ExitGames.Client.Photon.Protocol18/GpType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GpType_t9060B39D6A55ACE1DA99033967EE066D48C66BA3, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SocketNative/NativeDebugLevel
struct NativeDebugLevel_t5556B7043571D7AE6880925D44B4EF1D4AF8AF82 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative/NativeDebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeDebugLevel_t5556B7043571D7AE6880925D44B4EF1D4AF8AF82, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SocketNative/NativeSocketState
struct NativeSocketState_t6EC8323068C7F064CD10EE032B1B52744CEC5C5F 
{
public:
	// System.Byte ExitGames.Client.Photon.SocketNative/NativeSocketState::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeSocketState_t6EC8323068C7F064CD10EE032B1B52744CEC5C5F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject * ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * ___reusableEventData_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___photonPeer_0)); }
	inline PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t94D16843BF6E424C887E7BE7C21271CEE8827A82 * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___SerializationProtocol_1)); }
	inline IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_t8882289FA70BEECDEB7920306D4523807C0BF105 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_2() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___usedTransportProtocol_2)); }
	inline uint8_t get_usedTransportProtocol_2() const { return ___usedTransportProtocol_2; }
	inline uint8_t* get_address_of_usedTransportProtocol_2() { return &___usedTransportProtocol_2; }
	inline void set_usedTransportProtocol_2(uint8_t value)
	{
		___usedTransportProtocol_2 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_3() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___PhotonSocket_3)); }
	inline IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * get_PhotonSocket_3() const { return ___PhotonSocket_3; }
	inline IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 ** get_address_of_PhotonSocket_3() { return &___PhotonSocket_3; }
	inline void set_PhotonSocket_3(IPhotonSocket_t8C4CC725BD3399028AEECE28EE0009F06EBFCB96 * value)
	{
		___PhotonSocket_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___U3CServerAddressU3Ek__BackingField_4)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_4() const { return ___U3CServerAddressU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_4() { return &___U3CServerAddressU3Ek__BackingField_4; }
	inline void set_U3CServerAddressU3Ek__BackingField_4(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___U3CProxyServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_5() const { return ___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_5() { return &___U3CProxyServerAddressU3Ek__BackingField_5; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_6() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___peerConnectionState_6)); }
	inline uint8_t get_peerConnectionState_6() const { return ___peerConnectionState_6; }
	inline uint8_t* get_address_of_peerConnectionState_6() { return &___peerConnectionState_6; }
	inline void set_peerConnectionState_6(uint8_t value)
	{
		___peerConnectionState_6 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_7() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ByteCountLastOperation_7)); }
	inline int32_t get_ByteCountLastOperation_7() const { return ___ByteCountLastOperation_7; }
	inline int32_t* get_address_of_ByteCountLastOperation_7() { return &___ByteCountLastOperation_7; }
	inline void set_ByteCountLastOperation_7(int32_t value)
	{
		___ByteCountLastOperation_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_8() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ByteCountCurrentDispatch_8)); }
	inline int32_t get_ByteCountCurrentDispatch_8() const { return ___ByteCountCurrentDispatch_8; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_8() { return &___ByteCountCurrentDispatch_8; }
	inline void set_ByteCountCurrentDispatch_8(int32_t value)
	{
		___ByteCountCurrentDispatch_8 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CommandInCurrentDispatch_9)); }
	inline NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * get_CommandInCurrentDispatch_9() const { return ___CommandInCurrentDispatch_9; }
	inline NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 ** get_address_of_CommandInCurrentDispatch_9() { return &___CommandInCurrentDispatch_9; }
	inline void set_CommandInCurrentDispatch_9(NCommand_tF1814C9180D477B081C452EB107C8E6CBC836158 * value)
	{
		___CommandInCurrentDispatch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_9), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_10() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___packetLossByCrc_10)); }
	inline int32_t get_packetLossByCrc_10() const { return ___packetLossByCrc_10; }
	inline int32_t* get_address_of_packetLossByCrc_10() { return &___packetLossByCrc_10; }
	inline void set_packetLossByCrc_10(int32_t value)
	{
		___packetLossByCrc_10 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_11() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___packetLossByChallenge_11)); }
	inline int32_t get_packetLossByChallenge_11() const { return ___packetLossByChallenge_11; }
	inline int32_t* get_address_of_packetLossByChallenge_11() { return &___packetLossByChallenge_11; }
	inline void set_packetLossByChallenge_11(int32_t value)
	{
		___packetLossByChallenge_11 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_12() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ActionQueue_12)); }
	inline Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * get_ActionQueue_12() const { return ___ActionQueue_12; }
	inline Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE ** get_address_of_ActionQueue_12() { return &___ActionQueue_12; }
	inline void set_ActionQueue_12(Queue_1_t525971E57FAD29C14166A79B3B28E0CB7AD9C9AE * value)
	{
		___ActionQueue_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_12), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_13() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___peerID_13)); }
	inline int16_t get_peerID_13() const { return ___peerID_13; }
	inline int16_t* get_address_of_peerID_13() { return &___peerID_13; }
	inline void set_peerID_13(int16_t value)
	{
		___peerID_13 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_14() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___serverTimeOffset_14)); }
	inline int32_t get_serverTimeOffset_14() const { return ___serverTimeOffset_14; }
	inline int32_t* get_address_of_serverTimeOffset_14() { return &___serverTimeOffset_14; }
	inline void set_serverTimeOffset_14(int32_t value)
	{
		___serverTimeOffset_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_15() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___serverTimeOffsetIsAvailable_15)); }
	inline bool get_serverTimeOffsetIsAvailable_15() const { return ___serverTimeOffsetIsAvailable_15; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_15() { return &___serverTimeOffsetIsAvailable_15; }
	inline void set_serverTimeOffsetIsAvailable_15(bool value)
	{
		___serverTimeOffsetIsAvailable_15 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_16() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___roundTripTime_16)); }
	inline int32_t get_roundTripTime_16() const { return ___roundTripTime_16; }
	inline int32_t* get_address_of_roundTripTime_16() { return &___roundTripTime_16; }
	inline void set_roundTripTime_16(int32_t value)
	{
		___roundTripTime_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_17() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___roundTripTimeVariance_17)); }
	inline int32_t get_roundTripTimeVariance_17() const { return ___roundTripTimeVariance_17; }
	inline int32_t* get_address_of_roundTripTimeVariance_17() { return &___roundTripTimeVariance_17; }
	inline void set_roundTripTimeVariance_17(int32_t value)
	{
		___roundTripTimeVariance_17 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_18() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lastRoundTripTime_18)); }
	inline int32_t get_lastRoundTripTime_18() const { return ___lastRoundTripTime_18; }
	inline int32_t* get_address_of_lastRoundTripTime_18() { return &___lastRoundTripTime_18; }
	inline void set_lastRoundTripTime_18(int32_t value)
	{
		___lastRoundTripTime_18 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lowestRoundTripTime_19)); }
	inline int32_t get_lowestRoundTripTime_19() const { return ___lowestRoundTripTime_19; }
	inline int32_t* get_address_of_lowestRoundTripTime_19() { return &___lowestRoundTripTime_19; }
	inline void set_lowestRoundTripTime_19(int32_t value)
	{
		___lowestRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_20() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___highestRoundTripTimeVariance_20)); }
	inline int32_t get_highestRoundTripTimeVariance_20() const { return ___highestRoundTripTimeVariance_20; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_20() { return &___highestRoundTripTimeVariance_20; }
	inline void set_highestRoundTripTimeVariance_20(int32_t value)
	{
		___highestRoundTripTimeVariance_20 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_21() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timestampOfLastReceive_21)); }
	inline int32_t get_timestampOfLastReceive_21() const { return ___timestampOfLastReceive_21; }
	inline int32_t* get_address_of_timestampOfLastReceive_21() { return &___timestampOfLastReceive_21; }
	inline void set_timestampOfLastReceive_21(int32_t value)
	{
		___timestampOfLastReceive_21 = value;
	}

	inline static int32_t get_offset_of_bytesOut_23() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___bytesOut_23)); }
	inline int64_t get_bytesOut_23() const { return ___bytesOut_23; }
	inline int64_t* get_address_of_bytesOut_23() { return &___bytesOut_23; }
	inline void set_bytesOut_23(int64_t value)
	{
		___bytesOut_23 = value;
	}

	inline static int32_t get_offset_of_bytesIn_24() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___bytesIn_24)); }
	inline int64_t get_bytesIn_24() const { return ___bytesIn_24; }
	inline int64_t* get_address_of_bytesIn_24() { return &___bytesIn_24; }
	inline void set_bytesIn_24(int64_t value)
	{
		___bytesIn_24 = value;
	}

	inline static int32_t get_offset_of_PhotonToken_25() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___PhotonToken_25)); }
	inline RuntimeObject * get_PhotonToken_25() const { return ___PhotonToken_25; }
	inline RuntimeObject ** get_address_of_PhotonToken_25() { return &___PhotonToken_25; }
	inline void set_PhotonToken_25(RuntimeObject * value)
	{
		___PhotonToken_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonToken_25), (void*)value);
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___reusableEventData_28)); }
	inline EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_t0DA8B0128826527C92CBD7B77100F8875E732EAB * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_29() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeBase_29)); }
	inline int32_t get_timeBase_29() const { return ___timeBase_29; }
	inline int32_t* get_address_of_timeBase_29() { return &___timeBase_29; }
	inline void set_timeBase_29(int32_t value)
	{
		___timeBase_29 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_messageHeader_39() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___messageHeader_39)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_messageHeader_39() const { return ___messageHeader_39; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_messageHeader_39() { return &___messageHeader_39; }
	inline void set_messageHeader_39(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___messageHeader_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___messageHeader_39), (void*)value);
	}

	inline static int32_t get_offset_of_CryptoProvider_40() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___CryptoProvider_40)); }
	inline RuntimeObject* get_CryptoProvider_40() const { return ___CryptoProvider_40; }
	inline RuntimeObject** get_address_of_CryptoProvider_40() { return &___CryptoProvider_40; }
	inline void set_CryptoProvider_40(RuntimeObject* value)
	{
		___CryptoProvider_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_40), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_41() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___lagRandomizer_41)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_lagRandomizer_41() const { return ___lagRandomizer_41; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_lagRandomizer_41() { return &___lagRandomizer_41; }
	inline void set_lagRandomizer_41(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___lagRandomizer_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_42() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___NetSimListOutgoing_42)); }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * get_NetSimListOutgoing_42() const { return ___NetSimListOutgoing_42; }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 ** get_address_of_NetSimListOutgoing_42() { return &___NetSimListOutgoing_42; }
	inline void set_NetSimListOutgoing_42(LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * value)
	{
		___NetSimListOutgoing_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_42), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_43() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___NetSimListIncoming_43)); }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * get_NetSimListIncoming_43() const { return ___NetSimListIncoming_43; }
	inline LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 ** get_address_of_NetSimListIncoming_43() { return &___NetSimListIncoming_43; }
	inline void set_NetSimListIncoming_43(LinkedList_1_t90B1134086379590BB3286E68F55880DF6F0E585 * value)
	{
		___NetSimListIncoming_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_43), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_44() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___networkSimulationSettings_44)); }
	inline NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * get_networkSimulationSettings_44() const { return ___networkSimulationSettings_44; }
	inline NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 ** get_address_of_networkSimulationSettings_44() { return &___networkSimulationSettings_44; }
	inline void set_networkSimulationSettings_44(NetworkSimulationSet_t69D6A7D8DAC22E7D53C247701AA48FDB28FBD656 * value)
	{
		___networkSimulationSettings_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_44), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_45() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557, ___TrafficPackageHeaderSize_45)); }
	inline int32_t get_TrafficPackageHeaderSize_45() const { return ___TrafficPackageHeaderSize_45; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_45() { return &___TrafficPackageHeaderSize_45; }
	inline void set_TrafficPackageHeaderSize_45(int32_t value)
	{
		___TrafficPackageHeaderSize_45 = value;
	}
};

struct PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_22() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields, ___peerCount_22)); }
	inline int16_t get_peerCount_22() const { return ___peerCount_22; }
	inline int16_t* get_address_of_peerCount_22() { return &___peerCount_22; }
	inline void set_peerCount_22(int16_t value)
	{
		___peerCount_22 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_t238184E28E78549BBC5200A6D817DAE58F1D0928 * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0
struct U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0::<>4__this
	PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0::level
	uint8_t ___level_1;
	// System.String ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0::debugReturn
	String_t* ___debugReturn_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415, ___U3CU3E4__this_0)); }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415, ___level_1)); }
	inline uint8_t get_level_1() const { return ___level_1; }
	inline uint8_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(uint8_t value)
	{
		___level_1 = value;
	}

	inline static int32_t get_offset_of_debugReturn_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415, ___debugReturn_2)); }
	inline String_t* get_debugReturn_2() const { return ___debugReturn_2; }
	inline String_t** get_address_of_debugReturn_2() { return &___debugReturn_2; }
	inline void set_debugReturn_2(String_t* value)
	{
		___debugReturn_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugReturn_2), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0
struct U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0::<>4__this
	PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * ___U3CU3E4__this_0;
	// ExitGames.Client.Photon.StatusCode ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0::statusValue
	int32_t ___statusValue_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB, ___U3CU3E4__this_0)); }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_statusValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB, ___statusValue_1)); }
	inline int32_t get_statusValue_1() const { return ___statusValue_1; }
	inline int32_t* get_address_of_statusValue_1() { return &___statusValue_1; }
	inline void set_statusValue_1(int32_t value)
	{
		___statusValue_1 = value;
	}
};


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.ThreadAbortException
struct ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate
struct LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SocketNative/LogCallbackDelegate
struct LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5  : public MulticastDelegate_t
{
public:

public:
};


// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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


// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<K,V> ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3_gshared (NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B_gshared (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248_gshared (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB248A1B23AF875E58DA2E8E032A325AB572FEC77 (U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<K,V> ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>::GetEnumerator()
inline PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3 (NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * __this, const RuntimeMethod* method)
{
	return ((  PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  (*) (NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 *, const RuntimeMethod*))NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::.ctor(ExitGames.Client.Photon.ParameterDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair__ctor_m90B3B963F85C0A4B40016F05E3B34DCC2027144F (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6 * ___pd0, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<K,V> ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::get_Current()
inline KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  (*) (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 *, const RuntimeMethod*))PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mC64B6DB56C3C22CF0D9C0CDBF395B0718309FD96 (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.NonAllocDictionary`2/PairIterator<System.Byte,System.Object>::MoveNext()
inline bool PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248 (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 *, const RuntimeMethod*))PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248_gshared)(__this, method);
}
// System.Boolean ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValuePair_MoveNext_mB2B79E46E80C84F442AF857A6C63E57F06E50D0C (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PeerBase_get_Listener_m5DBBE8A399AA04444FB1CBDF629E5F46C52EF09E (PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_m7CFBC075835B36D9F11FCEC1C643DF5B9DAE73C3 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m898E946F998E61C55BC3CA02772F51748247838E (U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E (const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC (int32_t ___millisecondsTimeout0, const RuntimeMethod* method);
// !0 System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, const RuntimeMethod*))Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF (LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m4CC7E1D1C8B99B97B533F2622F4101CC7C425686 (LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m7CF025D901AA00295112124FD0B2147B674A1394 (LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___userData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___level1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m9E6927DA77746309B83897A400A02CF8C6EB725C (LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF * __this, intptr_t ___userData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ExitGames.Client.Photon.Encryption.EncryptorNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_m0D26B8E5572270F9B5959CFD7A81B757E5B70F6F (LogCallbackDelegate_t82C97073E21A0A97D71208FB0FC056346B1066AF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2286F756163749048079C35F448A5C1F02D036E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * L_0 = (U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 *)il2cpp_codegen_object_new(U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB248A1B23AF875E58DA2E8E032A325AB572FEC77(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.IPhotonSocket/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB248A1B23AF875E58DA2E8E032A325AB572FEC77 (U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String ExitGames.Client.Photon.IPhotonSocket/<>c::<GetIpAddresses>b__55_0(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetIpAddressesU3Eb__55_0_m28B7AC0F0419BBBCB1C28F4D532A50AE6B0DC51F (U3CU3Ec_tDFB093BCB61F159F7BB84F259A25C8F9F0F84FE0 * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ___x0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = Box(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_0 = *(int32_t*)UnBox(L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_5;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_12 = ___x0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0534DA20888B35E2203B7A82A0DB23B602CA0406);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		return L_16;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_pinvoke(const KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323& unmarshaled, KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_pinvoke& marshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_pinvoke_back(const KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_pinvoke& marshaled, KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323& unmarshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_pinvoke_cleanup(KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_com(const KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323& unmarshaled, KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_com& marshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_com_back(const KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_com& marshaled, KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323& unmarshaled)
{
	Exception_t* ____interator_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_interator' of type 'KeyValuePair'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____interator_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ExitGames.Client.Photon.ParameterDictionary/KeyValuePair
IL2CPP_EXTERN_C void KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshal_com_cleanup(KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323_marshaled_com& marshaled)
{
}
// System.Void ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::.ctor(ExitGames.Client.Photon.ParameterDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair__ctor_m90B3B963F85C0A4B40016F05E3B34DCC2027144F (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6 * ___pd0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6 * L_0 = ___pd0;
		NullCheck(L_0);
		NonAllocDictionary_2_tDE6B65F92058C1C797CED8058AB2FD4E26E63BB5 * L_1 = L_0->get_paramDict_0();
		NullCheck(L_1);
		PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25  L_2;
		L_2 = NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3(L_1, /*hidden argument*/NonAllocDictionary_2_GetEnumerator_mFCC33DB53D449A72B1504700787012CF50C89DA3_RuntimeMethod_var);
		__this->set__interator_0(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void KeyValuePair__ctor_m90B3B963F85C0A4B40016F05E3B34DCC2027144F_AdjustorThunk (RuntimeObject * __this, ParameterDictionary_t8CA850C2DBCB6C8EA40A87CD78F5EFD0AD6148F6 * ___pd0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * _thisAdjusted = reinterpret_cast<KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 *>(__this + _offset);
	KeyValuePair__ctor_m90B3B963F85C0A4B40016F05E3B34DCC2027144F(_thisAdjusted, ___pd0, method);
}
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mC64B6DB56C3C22CF0D9C0CDBF395B0718309FD96 (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * L_0 = __this->get_address_of__interator_0();
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_1;
		L_1 = PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B((PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 *)L_0, /*hidden argument*/PairIterator_get_Current_m106D76A2A1D6767AB0ECB41DE18594D355CB8A6B_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  KeyValuePair_get_Current_mC64B6DB56C3C22CF0D9C0CDBF395B0718309FD96_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * _thisAdjusted = reinterpret_cast<KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 *>(__this + _offset);
	KeyValuePair_2_t174DCFB8AAA63D8A6758035BD4B81EDA4A4A7957  _returnValue;
	_returnValue = KeyValuePair_get_Current_mC64B6DB56C3C22CF0D9C0CDBF395B0718309FD96(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean ExitGames.Client.Photon.ParameterDictionary/KeyValuePair::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValuePair_MoveNext_mB2B79E46E80C84F442AF857A6C63E57F06E50D0C (KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 * L_0 = __this->get_address_of__interator_0();
		bool L_1;
		L_1 = PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248((PairIterator_t07D8A54F2310C046D9C1772D35744977F1033F25 *)L_0, /*hidden argument*/PairIterator_MoveNext_m844122B653A6547971C7CEA91E5D1E8CA6A6F248_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool KeyValuePair_MoveNext_mB2B79E46E80C84F442AF857A6C63E57F06E50D0C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 * _thisAdjusted = reinterpret_cast<KeyValuePair_tC8C7BCEC4EB57F505AC4D89462DC7C703F518323 *>(__this + _offset);
	bool _returnValue;
	_returnValue = KeyValuePair_MoveNext_mB2B79E46E80C84F442AF857A6C63E57F06E50D0C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0__ctor_m09090D7AC1BD95AC90E4FAC7102F42CE894AF05B (U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass110_0::<EnqueueDebugReturn>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass110_0_U3CEnqueueDebugReturnU3Eb__0_m77F85A7B7D4BDACB5980F9DD50A441E1756D3F0D (U3CU3Ec__DisplayClass110_0_tA2C90838EB52540EEAB03D33A7AE595EC4255415 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m5DBBE8A399AA04444FB1CBDF629E5F46C52EF09E(L_0, /*hidden argument*/NULL);
		uint8_t L_2 = __this->get_level_1();
		String_t* L_3 = __this->get_debugReturn_2();
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_1, L_2, L_3);
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
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass111_0__ctor_mAB7C8BCAED82EF8A938EE79FADF723807E0C6C4E (U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.PeerBase/<>c__DisplayClass111_0::<EnqueueStatusCallback>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass111_0_U3CEnqueueStatusCallbackU3Eb__0_mDB3069C4CFD51F67FDDF9199E53A060EA5358697 (U3CU3Ec__DisplayClass111_0_tB8C4FB40A10F35E1E5154FE4A0D528F9430655EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerBase_t427DCE6A6E0E432C6BE76CDF6374A1911BB19557 * L_0 = __this->get_U3CU3E4__this_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PeerBase_get_Listener_m5DBBE8A399AA04444FB1CBDF629E5F46C52EF09E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_statusValue_1();
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::OnStatusChanged(ExitGames.Client.Photon.StatusCode) */, IPhotonPeerListener_t99D8FDF2CD930F08F8812D8FA805187D04874892_il2cpp_TypeInfo_var, L_1, L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 (MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction__ctor_m369D117B0023778C548FAE53F38C687741FE6D5A (MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_Invoke_m48B0D386233018564A9B4097C281A334302E5FF4 (MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.PeerBase/MyAction::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MyAction_BeginInvoke_m1D8DD37A7C0F451AF4397045C06E54177CEA103A (MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ExitGames.Client.Photon.PeerBase/MyAction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyAction_EndInvoke_m58457B8DB09417A697C3CD1EBFE887F29F9599A1 (MyAction_t9F3B3489B5DE91C0012B06A5BE4E7011260FFCD5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 (LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___pUserData0, ___level1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate__ctor_m5D6CC06E9C8EFF661A29613032F85326DD8B78B8 (LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::Invoke(System.IntPtr,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_Invoke_m98ABB9ED91E8968E3F87BB159AA40D2114B745EC (LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pUserData0, ___level1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
					else
						GenericVirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___pUserData0, ___level1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
					else
						VirtActionInvoker3< intptr_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pUserData0, ___level1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pUserData0, ___level1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::BeginInvoke(System.IntPtr,System.Int32,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogCallbackDelegate_BeginInvoke_m394D8E022A0F5DCB4C1EC65A3A1B3371A924A246 (LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 * __this, intptr_t ___pUserData0, int32_t ___level1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pUserData0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___level1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void ExitGames.Client.Photon.SocketNative/LogCallbackDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallbackDelegate_EndInvoke_mF8525798348BADA55EB25046F10F637F5D5EF639 (LogCallbackDelegate_t5DE5618DC132F703EF5998F1BACEBF95B36217F5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::.ctor(System.Net.Sockets.Socket,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext__ctor_m33412EEC1D05FD2975984DED49BD903AB93C2F0D (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___socket0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___headerBuffer1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___messageBuffer2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___headerBuffer1;
		__this->set_HeaderBuffer_2(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___messageBuffer2;
		__this->set_MessageBuffer_5(L_1);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2 = ___socket0;
		__this->set_workSocket_0(L_2);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingHeader_m7CFBC075835B36D9F11FCEC1C643DF5B9DAE73C3 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_ReadingMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReceiveContext_get_ReadingMessage_m03773B2225459821B0184561ADE7AED203213015 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_ExpectedMessageBytes_3();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ReceiveContext_get_CurrentBuffer_m4BD3BFEFB910F3B967B1503FD2F9AA81CE30B5A3 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B3_0 = NULL;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m7CFBC075835B36D9F11FCEC1C643DF5B9DAE73C3(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = __this->get_MessageBuffer_5();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_HeaderBuffer_2();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentOffset_m9C19C74FBA5DE8888C68105C820076BB0C9CE174 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m7CFBC075835B36D9F11FCEC1C643DF5B9DAE73C3(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ReceivedMessageBytes_4();
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		int32_t L_2 = __this->get_ReceivedHeaderBytes_1();
		G_B3_0 = L_2;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::get_CurrentExpected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReceiveContext_get_CurrentExpected_m7AE8DEFE72F2C50764EDCE9A7ECB204F4A096A46 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = ReceiveContext_get_ReadingHeader_m7CFBC075835B36D9F11FCEC1C643DF5B9DAE73C3(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_ExpectedMessageBytes_3();
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_0011:
	{
		G_B3_0 = ((int32_t)9);
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.SocketTcpAsync/ReceiveContext::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReceiveContext_Reset_mDAD154E952F57C536D91470ED9D472E86A2FE396 (ReceiveContext_tBA88CA340709600E4D7B487FE8775F513A17A912 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ReceivedHeaderBytes_1(0);
		__this->set_ExpectedMessageBytes_3(0);
		__this->set_ReceivedMessageBytes_4(0);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m032F91509E877CBB001E1722BC76A779FD94D96D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * L_0 = (U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 *)il2cpp_codegen_object_new(U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m898E946F998E61C55BC3CA02772F51748247838E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m898E946F998E61C55BC3CA02772F51748247838E (U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.SupportClass/<>c::<.cctor>b__20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_cctorU3Eb__20_0_m7C8E8F43380CE7A1949DA3D023731DE11ACA06A4 (U3CU3Ec_t2659810E284B246A5DFCB117CE19B1B222F0BA01 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = Environment_get_TickCount_mBA4279B1C0BC197BF2121166E7C1F6A46D2B5D4E(/*hidden argument*/NULL);
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
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m5829F11AE653BC7686FADA25E433E9A62EF80F46 (U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/<>c__DisplayClass6_0::<StartBackgroundCalls>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CStartBackgroundCallsU3Eb__0_m24580CE6567D0A4F637FC53A11F5920CF24A02EB (U3CU3Ec__DisplayClass6_0_tFF8934B41450B38DD1455F242F9E29DD605EDE30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0012;
		}

IL_0004:
		{
			int32_t L_0 = __this->get_millisecondsInterval_0();
			Thread_Sleep_m8E61FC80BD38981CB18CA549909710790283DDCC(L_0, /*hidden argument*/NULL);
		}

IL_0012:
		{
			Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_1 = __this->get_myThread_1();
			NullCheck(L_1);
			bool L_2;
			L_2 = Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4(L_1, /*hidden argument*/Func_1_Invoke_mD0192F3F912E371387CD7B196DF85569553486B4_RuntimeMethod_var);
			V_0 = L_2;
			bool L_3 = V_0;
			if (L_3)
			{
				goto IL_0004;
			}
		}

IL_0021:
		{
			goto IL_0029;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Threading.ThreadAbortException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 (IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 * __this, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMillisecondsDelegate__ctor_m466E0F82761922915BC813EC08F1EBE9C6D6D685 (IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_Invoke_m7D73AB04E91F364D0FC8831B490FDB89E69AE4B9 (IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 * __this, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef int32_t (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< int32_t >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegerMillisecondsDelegate_BeginInvoke_m126440D3D8FEC9F878E26ED05378FFAA51ECAFD2 (IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Int32 ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntegerMillisecondsDelegate_EndInvoke_m84DC6C9DF04CC68DE99E54AB3BD481DCA349213D (IntegerMillisecondsDelegate_tC6BC225D1C0D32B98D2436B377E91E0260DD2604 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ThreadSafeRandom_Next_m6126ED8317F00EA85E2D102DC447FD81B3851B90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = ((ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var))->get__r_0();
		V_0 = L_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = ((ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var))->get__r_0();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Random::Next() */, L_2);
		V_1 = L_3;
		IL2CPP_LEAVE(0x24, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__ctor_m4F0C8321746A5A94E2EACDF9E9A6DB31D56BA46C (ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SupportClass/ThreadSafeRandom::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeRandom__cctor_m0797342B2622D2F8379F5D80F2E18CDC6A2D1D79 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		((ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_StaticFields*)il2cpp_codegen_static_fields_for(ThreadSafeRandom_t51042C0FB2BC99A87E5B34F24375B68E63D3E990_il2cpp_TypeInfo_var))->set__r_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m0554FC6CF1296D4C1456F3D73CB110E38634B24D_inline (IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Family_10();
		return L_0;
	}
}
