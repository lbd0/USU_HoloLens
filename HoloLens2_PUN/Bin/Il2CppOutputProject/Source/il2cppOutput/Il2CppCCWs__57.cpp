#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct KeyCollection_tA02AC0C6D80F6144F89FC1B40A9FA799BAB7EF26;
struct KeyCollection_tCC7ABDD3A5B8B9C7BF9B8EBF9D3A577CC32E019E;
struct KeyCollection_t68127589F81552BC585CDF5FEC5156AF33E7DB1B;
struct KeyCollection_t80EAB93AFD4D66472EBFBAC748B5CC0B5FBA70C7;
struct KeyCollection_tD9B2D8C1325586B685EF1ED42A57C76ACE6CADDE;
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
struct KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4;
struct ValueCollection_t6C41DE450A8C4DD441F35E6082D6AEE283478D11;
struct ValueCollection_t433601B0FA5278557ABA8EE95FF4A52C9DE29CD4;
struct ValueCollection_tD8C3C995DF5059E87AF49FE8EAD65D0CB86A56BE;
struct ValueCollection_t2A473CD3194437E7F0A4E13FFBC391A03D189AF5;
struct ValueCollection_t44600A93DCC0364B62B39CAE4C76052E4F23DEF3;
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
struct ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914;
struct EntryU5BU5D_t5F85C6D04A66CB093E077F6D13313D4ED229E8EF;
struct EntryU5BU5D_tF35440895432F628E8F4E201FB4A3DD88FBE933C;
struct EntryU5BU5D_tD094036BCE1D688B270D708A28FC79F7F647A03F;
struct EntryU5BU5D_tBA354914628CC0E78471BAAF78A84895525CA721;
struct EntryU5BU5D_t953604285FFCCDB242812F6DC0B3405082A42753;
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
struct EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01;
struct IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t5F85C6D04A66CB093E077F6D13313D4ED229E8EF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tA02AC0C6D80F6144F89FC1B40A9FA799BAB7EF26* ____keys;
	ValueCollection_t6C41DE450A8C4DD441F35E6082D6AEE283478D11* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF35440895432F628E8F4E201FB4A3DD88FBE933C* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tCC7ABDD3A5B8B9C7BF9B8EBF9D3A577CC32E019E* ____keys;
	ValueCollection_t433601B0FA5278557ABA8EE95FF4A52C9DE29CD4* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD094036BCE1D688B270D708A28FC79F7F647A03F* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t68127589F81552BC585CDF5FEC5156AF33E7DB1B* ____keys;
	ValueCollection_tD8C3C995DF5059E87AF49FE8EAD65D0CB86A56BE* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tBA354914628CC0E78471BAAF78A84895525CA721* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t80EAB93AFD4D66472EBFBAC748B5CC0B5FBA70C7* ____keys;
	ValueCollection_t2A473CD3194437E7F0A4E13FFBC391A03D189AF5* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t953604285FFCCDB242812F6DC0B3405082A42753* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tD9B2D8C1325586B685EF1ED42A57C76ACE6CADDE* ____keys;
	ValueCollection_t44600A93DCC0364B62B39CAE4C76052E4F23DEF3* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys;
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t756A95E079BB929872956FD3C32190FE718B2B92* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t06BF4E8028DD7CCA572FE96F996862FCB21C8ED4* ____keys;
	ValueCollection_t9EB9C5634AB88E4E9CA993FE202AEE842111C914* ____values;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct NOVTABLE IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) = 0;
};
struct NOVTABLE IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() = 0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key);
il2cpp_hresult_t IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second);



struct Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t7AA034DE4DDAD09A66DC2F8F35FABAA84F54A04E_ComCallableWrapper(obj));
}

struct Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t67849D20452D9B98DB17853BADB3A6477B290ABB_ComCallableWrapper(obj));
}

struct Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t80EAEAC80918BC94BDAB801B66D75ECFFAE29C7E_ComCallableWrapper(obj));
}

struct Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t5770CEAD66F48047B956AAF7E69E48BDABEF1C68_ComCallableWrapper(obj));
}

struct Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCFC8162923392871D3BE0D0CFCDE070A12C1B976_ComCallableWrapper(obj));
}

struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C_ComCallableWrapper(obj));
}

struct Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper>, IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB, IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2
{
	inline Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_t94BB51590ADEF90FD25C7AA7274881AB1B52D6AB::IID;
		interfaceIds[1] = IIterable_1_t2A910923889829F909CCCDAA5B96C72E8DDFBA5B::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m602A6B45737A303FE9629F76372E14A8F387A52E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m56DC04CF24C7FC1145CDB9635EF4F67FE24FF7BA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mD8051E63FB2A02B6AE8320CBC4A5450965440B7A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m3C4E9DB0CEA06B4F46E6DE2CD61985FED639ED91_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m98F7C16DAC9E00D6658D99AE928C5E3F6E3F69C5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE(Il2CppWindowsRuntimeTypeName ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m3DCC81BC7B22D5CA9B37D2493AE719E18E4B8CBE_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m142E687C97B08260910C81DB49861646178B4414_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2(IIterator_1_t1EAD905926D7A8250F1D3FA0DB0CCC04F7CA9A01** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m53DDD6EFCCEB70ED6F36F8A2986853F9B7389AA2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953(Il2CppWindowsRuntimeTypeName ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mA84FC1A8BB6314A7E1C0F5080A969E10BC17B953_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mDEDF0F55E9B27438BF3D0FDDB1A1CE45BF575B92_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A(Il2CppWindowsRuntimeTypeName ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m4ACE6CE4E91FD63D2763EA90943749F5614F4A9A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724(IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___0_first, IMapView_2_t39B008160454143EFF228DFF19D546A07BABF7B2** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mE390A2ACFB459C6528FA5F147F002B5C963DC724_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t954AEC357FE7190582B8255D4ACEF81F5E94A6A5_ComCallableWrapper(obj));
}
