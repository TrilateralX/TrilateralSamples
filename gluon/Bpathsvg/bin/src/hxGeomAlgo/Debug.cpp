// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_hxGeomAlgo_Debug
#include <hxGeomAlgo/Debug.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_973d5b15b33ee313_17_assert,"hxGeomAlgo.Debug","assert",0x919ac590,"hxGeomAlgo.Debug.assert","hxGeomAlgo/Debug.hx",17,0xe1db95db)
namespace hxGeomAlgo{

void Debug_obj::__construct() { }

Dynamic Debug_obj::__CreateEmpty() { return new Debug_obj; }

void *Debug_obj::_hx_vtable = 0;

Dynamic Debug_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Debug_obj > _hx_result = new Debug_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Debug_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fb05c68;
}

void Debug_obj::_hx_assert(bool cond,::String message, ::Dynamic pos){
            	HX_STACKFRAME(&_hx_pos_973d5b15b33ee313_17_assert)
HXDLIN(  17)		if (!(cond)) {
HXLINE(  18)			::String _hx_tmp;
HXDLIN(  18)			if (::hx::IsNotNull( message )) {
HXLINE(  18)				_hx_tmp = message;
            			}
            			else {
HXLINE(  18)				_hx_tmp = HX_("",00,00,00,00);
            			}
HXDLIN(  18)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::Dynamic(((((pos->__Field(HX_("fileName",e7,5a,43,62),::hx::paccDynamic) + HX_(":",3a,00,00,00)) + pos->__Field(HX_("lineNumber",dd,81,22,76),::hx::paccDynamic)) + HX_(": ASSERT FAILED! ",90,94,43,ea)) + _hx_tmp))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Debug_obj,_hx_assert,(void))


Debug_obj::Debug_obj()
{
}

bool Debug_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"assert") ) { outValue = _hx_assert_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Debug_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Debug_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Debug_obj::__mClass;

static ::String Debug_obj_sStaticFields[] = {
	HX_("assert",c6,46,03,4c),
	::String(null())
};

void Debug_obj::__register()
{
	Debug_obj _hx_dummy;
	Debug_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxGeomAlgo.Debug",64,ec,cd,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Debug_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Debug_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Debug_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Debug_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Debug_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxGeomAlgo