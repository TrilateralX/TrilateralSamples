// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_glfw_GLFWMouseWheelHandler
#include <glfw/GLFWMouseWheelHandler.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

namespace glfw{

void GLFWMouseWheelHandler_obj::__construct() { }

Dynamic GLFWMouseWheelHandler_obj::__CreateEmpty() { return new GLFWMouseWheelHandler_obj; }

void *GLFWMouseWheelHandler_obj::_hx_vtable = 0;

Dynamic GLFWMouseWheelHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLFWMouseWheelHandler_obj > _hx_result = new GLFWMouseWheelHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFWMouseWheelHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11380c7c;
}

 ::haxe::ds::StringMap GLFWMouseWheelHandler_obj::listeners;

void GLFWMouseWheelHandler_obj::nativeCallack( GLFWwindow * win,Float x,Float y){
	::String ptr = (::Std_obj::string(( ( ::Dynamic)(( (::cpp::Pointer<  GLFWwindow >)(win) )) )) + HX_("",00,00,00,00));
	if (::glfw::GLFWMouseWheelHandler_obj::listeners->exists(ptr)) {
		::glfw::GLFWMouseWheelHandler_obj::listeners->get(ptr)(x,y);
	}
}


static ::Dynamic _hx_wrapGLFWMouseWheelHandler_obj_nativeCallack(  const Dynamic &a0,const Dynamic &a1,const Dynamic &a2) {
	GLFWMouseWheelHandler_obj::nativeCallack((cpp::Pointer< GLFWwindow >) a0,a1,a2);
	return null();
}
::Dynamic GLFWMouseWheelHandler_obj::nativeCallack_dyn() {
	return ::hx::CreateStaticFunction3("nativeCallack",_hx_wrapGLFWMouseWheelHandler_obj_nativeCallack);}
void GLFWMouseWheelHandler_obj::setCallback( GLFWwindow * win, ::Dynamic func){
	::Dynamic this1 = ::glfw::GLFWMouseWheelHandler_obj::listeners;
	( ( ::haxe::ds::StringMap)(this1) )->set((::Std_obj::string(( ( ::Dynamic)(( (::cpp::Pointer<  GLFWwindow >)(win) )) )) + HX_("",00,00,00,00)),func);
}


static ::Dynamic _hx_wrapGLFWMouseWheelHandler_obj_setCallback(  const Dynamic &a0,const Dynamic &a1) {
	GLFWMouseWheelHandler_obj::setCallback((cpp::Pointer< GLFWwindow >) a0,a1);
	return null();
}
::Dynamic GLFWMouseWheelHandler_obj::setCallback_dyn() {
	return ::hx::CreateStaticFunction2("setCallback",_hx_wrapGLFWMouseWheelHandler_obj_setCallback);}

GLFWMouseWheelHandler_obj::GLFWMouseWheelHandler_obj()
{
}

bool GLFWMouseWheelHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { outValue = ( listeners ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setCallback") ) { outValue = setCallback_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nativeCallack") ) { outValue = nativeCallack_dyn(); return true; }
	}
	return false;
}

bool GLFWMouseWheelHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLFWMouseWheelHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GLFWMouseWheelHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &GLFWMouseWheelHandler_obj::listeners,HX_("listeners",7f,65,8e,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GLFWMouseWheelHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFWMouseWheelHandler_obj::listeners,"listeners");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFWMouseWheelHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFWMouseWheelHandler_obj::listeners,"listeners");
};

#endif

::hx::Class GLFWMouseWheelHandler_obj::__mClass;

static ::String GLFWMouseWheelHandler_obj_sStaticFields[] = {
	HX_("listeners",7f,65,8e,f3),
	HX_("nativeCallack",94,5e,6f,13),
	HX_("setCallback",87,63,67,af),
	::String(null())
};

void GLFWMouseWheelHandler_obj::__register()
{
	GLFWMouseWheelHandler_obj _hx_dummy;
	GLFWMouseWheelHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("glfw.GLFWMouseWheelHandler",e6,62,2a,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFWMouseWheelHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &GLFWMouseWheelHandler_obj::__SetStatic;
	__mClass->mMarkFunc = GLFWMouseWheelHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLFWMouseWheelHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLFWMouseWheelHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFWMouseWheelHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFWMouseWheelHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFWMouseWheelHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLFWMouseWheelHandler_obj::__boot()
{
{
	HX_JUST_GC_STACKFRAME
	listeners =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
}
}

} // end namespace glfw