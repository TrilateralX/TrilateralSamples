// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif

namespace haxe{
namespace _CallStack{

void CallStack_Impl__obj::__construct() { }

Dynamic CallStack_Impl__obj::__CreateEmpty() { return new CallStack_Impl__obj; }

void *CallStack_Impl__obj::_hx_vtable = 0;

Dynamic CallStack_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallStack_Impl__obj > _hx_result = new CallStack_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CallStack_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29a173d9;
}

::Array< ::Dynamic> CallStack_Impl__obj::callStack(){
	return ::haxe::NativeStackTrace_obj::toHaxe(::haxe::NativeStackTrace_obj::callStack(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStack_Impl__obj,callStack,return )


CallStack_Impl__obj::CallStack_Impl__obj()
{
}

bool CallStack_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"callStack") ) { outValue = callStack_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallStack_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallStack_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallStack_Impl__obj::__mClass;

static ::String CallStack_Impl__obj_sStaticFields[] = {
	HX_("callStack",ca,c1,4a,10),
	::String(null())
};

void CallStack_Impl__obj::__register()
{
	CallStack_Impl__obj _hx_dummy;
	CallStack_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe._CallStack.CallStack_Impl_",0f,a8,ff,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStack_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CallStack_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallStack_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStack_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStack_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace _CallStack
