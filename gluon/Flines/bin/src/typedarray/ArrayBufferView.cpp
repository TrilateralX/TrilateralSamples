// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif

namespace typedarray{


static ::String ArrayBufferView_obj_sMemberFields[] = {
	HX_("byteLength",0e,1e,0c,77),
	HX_("toCPointer",35,9f,11,af),
	::String(null()) };

::hx::Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("typedarray.ArrayBufferView",df,1c,27,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayBufferView_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x159199cf >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace typedarray