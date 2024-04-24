#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "vm/CachedCCWBase.h"
#include "utils/New.h"


struct IEqualityComparer_1_t4C406F82823FF96EEFA77E78C84DE151AFA91A85;
struct IEqualityComparer_1_tEFAB779335C4A007E1AD53A1C338A19269F0F08E;
struct IEqualityComparer_1_tA12FC187A10D7FDB4477118192479E5679FDC3C7;
struct IEqualityComparer_1_t26B9D43A1160E9B82F28F2A5BE82F3C08B38824F;
struct KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290;
struct KeyCollection_t0F33DA652F8B432E6F8153BDB537E51535E11A91;
struct KeyCollection_t4D7DA787A93DDAF0BABFB925A669246A4158151B;
struct KeyCollection_t6F228C81F0C47026DC4434CB12934149188D65C4;
struct KeyCollection_t1918D5A854F712143047F012554DE65FD3B37477;
struct KeyCollection_tAF80F7158C97547884E15A24F288844654A0328D;
struct KeyCollection_t0472AE61E0B8102CB51ECD13EACB277197E72A78;
struct ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90;
struct ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6;
struct ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D;
struct ValueCollection_t263BBC48687151858E16DDC639E2C5C70EAE5547;
struct ValueCollection_t8E5B377B625BA8506BADFD93EB64BA9E8266DF0A;
struct ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68;
struct ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E;
struct EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9;
struct EntryU5BU5D_t19601E3558AB474BDA76229018717BED0B9D0D32;
struct EntryU5BU5D_tE8C0C185230F4E3DBD06313A3DB98257D2195B6E;
struct EntryU5BU5D_tC97DC65182252029BC5947944F67DED9DF4C1E56;
struct EntryU5BU5D_t4A0524CF4EC55E079AA0A775BD5980479D07A4C5;
struct EntryU5BU5D_tF09D1A2FFA9FA25911D01E06B27396CC45F3DC52;
struct EntryU5BU5D_t0BFDDD96F8F2836EDF45B18AC25426FA7537E1B4;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

struct IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F;
struct IIterator_1_tFC7D69611FEFC36C67C6BC29825E2F55A5E99B43;
struct IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct NOVTABLE IIterable_1_t45689C59B10B092D24B794941AC9BB65AA51A10F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m973D44AD912D0EA386B0C26660A546F1FD7E49C4(IIterator_1_tFC7D69611FEFC36C67C6BC29825E2F55A5E99B43** comReturnValue) = 0;
};
struct NOVTABLE IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m35240B43B3921DF69927F5C50447436C809B046A(uint8_t ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEF9B8CF31D31694EE3E18FA69975EFB3FFE531E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3086B34549F938BF4A58BB45549F2D308C2487F2(uint8_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3360D4E48F083533B521CFFBDA688B700463472B(IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___0_first, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___1_second) = 0;
};
struct NOVTABLE IMap_2_tE29A2C8F9B13B759E6FD4F7825F43BB07B156DEC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m0D3457EB2A5C4E581DE9D14368BCCEDD9425E629(uint8_t ___0_key, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mDF42578DA0E77453F6329DABA328F294DB1B472C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mEFC3CBDA062FA882482D9761CB4660DEAFA53B19(uint8_t ___0_key, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m4EE0905B4CD26D4DE72E953C07C0AB0EBE188CEC(IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1B600C8ED497D7BACA91D915047AB46FB50530CA(uint8_t ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m782029021718E7C3AE19FB52F2DB0DB7A0FA1DE6(uint8_t ___0_key) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3B8C725EAC384B1C501E8C9A298505F22F81FE67() = 0;
};
struct NOVTABLE IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) = 0;
};
struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tDE2B36AFEA00094492436D270CE88DAE0B7734D9* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t7C2313E730A03F07BE03813C37C1A61C1A122290* ____keys;
	ValueCollection_tCD7C3CAD640E1398503437CB36691105DA9ECA90* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t19601E3558AB474BDA76229018717BED0B9D0D32* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0F33DA652F8B432E6F8153BDB537E51535E11A91* ____keys;
	ValueCollection_tBA9724C276B67936EA074F6F541B33BB160349F6* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tE8C0C185230F4E3DBD06313A3DB98257D2195B6E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t4D7DA787A93DDAF0BABFB925A669246A4158151B* ____keys;
	ValueCollection_t0A32B130E7BA8E0748C6F71DE26B5C28750C8A7D* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tC97DC65182252029BC5947944F67DED9DF4C1E56* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t6F228C81F0C47026DC4434CB12934149188D65C4* ____keys;
	ValueCollection_t263BBC48687151858E16DDC639E2C5C70EAE5547* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4A0524CF4EC55E079AA0A775BD5980479D07A4C5* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t1918D5A854F712143047F012554DE65FD3B37477* ____keys;
	ValueCollection_t8E5B377B625BA8506BADFD93EB64BA9E8266DF0A* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF09D1A2FFA9FA25911D01E06B27396CC45F3DC52* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tAF80F7158C97547884E15A24F288844654A0328D* ____keys;
	ValueCollection_tA51EF5D88F9067304C0BC4DB6890B3B3EA93DC68* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0BFDDD96F8F2836EDF45B18AC25426FA7537E1B4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t0472AE61E0B8102CB51ECD13EACB277197E72A78* ____keys;
	ValueCollection_tFF82A450CF5CC9A097F2D3EA72EDA28519C8C20E* ____values;
	RuntimeObject* ____syncRoot;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IMap_2_Lookup_m0D3457EB2A5C4E581DE9D14368BCCEDD9425E629_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_mDF42578DA0E77453F6329DABA328F294DB1B472C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_mEFC3CBDA062FA882482D9761CB4660DEAFA53B19_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_m4EE0905B4CD26D4DE72E953C07C0AB0EBE188CEC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m1B600C8ED497D7BACA91D915047AB46FB50530CA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_m782029021718E7C3AE19FB52F2DB0DB7A0FA1DE6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key);
il2cpp_hresult_t IMap_2_Clear_m3B8C725EAC384B1C501E8C9A298505F22F81FE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m973D44AD912D0EA386B0C26660A546F1FD7E49C4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFC7D69611FEFC36C67C6BC29825E2F55A5E99B43** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_m35240B43B3921DF69927F5C50447436C809B046A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mDEF9B8CF31D31694EE3E18FA69975EFB3FFE531E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_m3086B34549F938BF4A58BB45549F2D308C2487F2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint8_t ___0_key, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_m3360D4E48F083533B521CFFBDA688B700463472B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___0_first, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___1_second);



struct Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper>, IMap_2_tE29A2C8F9B13B759E6FD4F7825F43BB07B156DEC, IIterable_1_t45689C59B10B092D24B794941AC9BB65AA51A10F, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625
{
	inline Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tE29A2C8F9B13B759E6FD4F7825F43BB07B156DEC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tE29A2C8F9B13B759E6FD4F7825F43BB07B156DEC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t45689C59B10B092D24B794941AC9BB65AA51A10F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t45689C59B10B092D24B794941AC9BB65AA51A10F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625*>(this);
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
		interfaceIds[0] = IMap_2_tE29A2C8F9B13B759E6FD4F7825F43BB07B156DEC::IID;
		interfaceIds[1] = IIterable_1_t45689C59B10B092D24B794941AC9BB65AA51A10F::IID;
		interfaceIds[2] = IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C::IID;
		interfaceIds[3] = IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625::IID;

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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m0D3457EB2A5C4E581DE9D14368BCCEDD9425E629(uint8_t ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m0D3457EB2A5C4E581DE9D14368BCCEDD9425E629_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mDF42578DA0E77453F6329DABA328F294DB1B472C(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_mDF42578DA0E77453F6329DABA328F294DB1B472C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mEFC3CBDA062FA882482D9761CB4660DEAFA53B19(uint8_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_mEFC3CBDA062FA882482D9761CB4660DEAFA53B19_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m4EE0905B4CD26D4DE72E953C07C0AB0EBE188CEC(IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_m4EE0905B4CD26D4DE72E953C07C0AB0EBE188CEC_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1B600C8ED497D7BACA91D915047AB46FB50530CA(uint8_t ___0_key, Il2CppIInspectable* ___1_value, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m1B600C8ED497D7BACA91D915047AB46FB50530CA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, ___1_value, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m782029021718E7C3AE19FB52F2DB0DB7A0FA1DE6(uint8_t ___0_key) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_m782029021718E7C3AE19FB52F2DB0DB7A0FA1DE6_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3B8C725EAC384B1C501E8C9A298505F22F81FE67() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_m3B8C725EAC384B1C501E8C9A298505F22F81FE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m973D44AD912D0EA386B0C26660A546F1FD7E49C4(IIterator_1_tFC7D69611FEFC36C67C6BC29825E2F55A5E99B43** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m973D44AD912D0EA386B0C26660A546F1FD7E49C4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97(IBindableIterator_t63CCD2268CEE8AFAB68518869D47C5BDAF72962F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_mE23AC28EC9ADCDD2688247217CF40C800E780B97_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m35240B43B3921DF69927F5C50447436C809B046A(uint8_t ___0_key, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_m35240B43B3921DF69927F5C50447436C809B046A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mDEF9B8CF31D31694EE3E18FA69975EFB3FFE531E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mDEF9B8CF31D31694EE3E18FA69975EFB3FFE531E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3086B34549F938BF4A58BB45549F2D308C2487F2(uint8_t ___0_key, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_m3086B34549F938BF4A58BB45549F2D308C2487F2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_key, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3360D4E48F083533B521CFFBDA688B700463472B(IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___0_first, IMapView_2_tE8D6D0F8E7485C0D700EAB91EFB53823DDA09625** ___1_second) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_m3360D4E48F083533B521CFFBDA688B700463472B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___0_first, ___1_second);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t39C787A3AB4A7621A98CFE1FB232D65CBD0880C1_ComCallableWrapper(obj));
}

struct Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t0F4E9A8903059D78A96A25DA0346FEAEE007BD12_ComCallableWrapper(obj));
}

struct Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tEE7FC6BA6AB04543D3D194562A8EF7670F76FAA5_ComCallableWrapper(obj));
}

struct Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t48322284CA591AB43E05451412BA2E60170EE0FF_ComCallableWrapper(obj));
}

struct Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_t1C6F670EE6B3EEEEFF2CBA243476B8AC9C173D11_ComCallableWrapper(obj));
}

struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80_ComCallableWrapper(obj));
}

struct Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper>, IBindableIterable_t257967EF5CDA5DFD63615802571892212B01796C
{
	inline Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Dictionary_2_tAD182111317FFA6F3D46F2A5D89115A1E112F989_ComCallableWrapper(obj));
}
