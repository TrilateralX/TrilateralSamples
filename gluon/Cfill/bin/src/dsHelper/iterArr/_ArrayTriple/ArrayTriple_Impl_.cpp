// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_dsHelper_iterArr__ArrayTriple_ArrayTriple_Impl_
#include <dsHelper/iterArr/_ArrayTriple/ArrayTriple_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_3__new,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","_new",0x7053c4b8,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_._new","dsHelper/iterArr/ArrayTriple.hx",3,0xc7e8e93f)
namespace dsHelper{
namespace iterArr{
namespace _ArrayTriple{

void ArrayTriple_Impl__obj::__construct() { }

Dynamic ArrayTriple_Impl__obj::__CreateEmpty() { return new ArrayTriple_Impl__obj; }

void *ArrayTriple_Impl__obj::_hx_vtable = 0;

Dynamic ArrayTriple_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayTriple_Impl__obj > _hx_result = new ArrayTriple_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayTriple_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2be47f97;
}

::cpp::VirtualArray ArrayTriple_Impl__obj::_new(::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_3__new)
HXDLIN(   3)		::cpp::VirtualArray this1 = arr;
HXDLIN(   3)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTriple_Impl__obj,_new,return )


ArrayTriple_Impl__obj::ArrayTriple_Impl__obj()
{
}

bool ArrayTriple_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayTriple_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayTriple_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayTriple_Impl__obj::__mClass;

static ::String ArrayTriple_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void ArrayTriple_Impl__obj::__register()
{
	ArrayTriple_Impl__obj _hx_dummy;
	ArrayTriple_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_",77,f0,6b,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayTriple_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayTriple_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayTriple_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayTriple_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayTriple_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace dsHelper
} // end namespace iterArr
} // end namespace _ArrayTriple