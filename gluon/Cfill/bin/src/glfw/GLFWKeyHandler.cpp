// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_glfw_GLFWKeyHandler
#include <glfw/GLFWKeyHandler.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_db126fa83880647f_67_nativeCallack,"glfw.GLFWKeyHandler","nativeCallack",0x534f485f,"glfw.GLFWKeyHandler.nativeCallack","glfw/GLFW.hx",67,0x7145aa2f)
HX_LOCAL_STACK_FRAME(_hx_pos_db126fa83880647f_75_setCallback,"glfw.GLFWKeyHandler","setCallback",0xa788b492,"glfw.GLFWKeyHandler.setCallback","glfw/GLFW.hx",75,0x7145aa2f)
HX_LOCAL_STACK_FRAME(_hx_pos_db126fa83880647f_65_boot,"glfw.GLFWKeyHandler","boot",0x122bffc7,"glfw.GLFWKeyHandler.boot","glfw/GLFW.hx",65,0x7145aa2f)
namespace glfw{

void GLFWKeyHandler_obj::__construct() { }

Dynamic GLFWKeyHandler_obj::__CreateEmpty() { return new GLFWKeyHandler_obj; }

void *GLFWKeyHandler_obj::_hx_vtable = 0;

Dynamic GLFWKeyHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLFWKeyHandler_obj > _hx_result = new GLFWKeyHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFWKeyHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x47dc4a77;
}

 ::haxe::ds::StringMap GLFWKeyHandler_obj::listeners;

void GLFWKeyHandler_obj::nativeCallack( GLFWwindow * win,int key,int scancode,int action,int mods){
            	HX_STACKFRAME(&_hx_pos_db126fa83880647f_67_nativeCallack)
HXLINE(  68)		::String ptr = (::Std_obj::string(( ( ::Dynamic)(( (::cpp::Pointer<  GLFWwindow >)(win) )) )) + HX_("",00,00,00,00));
HXLINE(  69)		if (::glfw::GLFWKeyHandler_obj::listeners->exists(ptr)) {
HXLINE(  70)			::glfw::GLFWKeyHandler_obj::listeners->get(ptr)(key,scancode,action,mods);
            		}
            	}


static ::Dynamic _hx_wrapGLFWKeyHandler_obj_nativeCallack(  const Dynamic &a0,const Dynamic &a1,const Dynamic &a2,const Dynamic &a3,const Dynamic &a4) {
	GLFWKeyHandler_obj::nativeCallack((cpp::Pointer< GLFWwindow >) a0,a1,a2,a3,a4);
	return null();
}
::Dynamic GLFWKeyHandler_obj::nativeCallack_dyn() {
	return ::hx::CreateStaticFunction5("nativeCallack",_hx_wrapGLFWKeyHandler_obj_nativeCallack);}
void GLFWKeyHandler_obj::setCallback( GLFWwindow * win, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_db126fa83880647f_75_setCallback)
HXDLIN(  75)		::Dynamic this1 = ::glfw::GLFWKeyHandler_obj::listeners;
HXDLIN(  75)		( ( ::haxe::ds::StringMap)(this1) )->set((::Std_obj::string(( ( ::Dynamic)(( (::cpp::Pointer<  GLFWwindow >)(win) )) )) + HX_("",00,00,00,00)),func);
            	}


static ::Dynamic _hx_wrapGLFWKeyHandler_obj_setCallback(  const Dynamic &a0,const Dynamic &a1) {
	GLFWKeyHandler_obj::setCallback((cpp::Pointer< GLFWwindow >) a0,a1);
	return null();
}
::Dynamic GLFWKeyHandler_obj::setCallback_dyn() {
	return ::hx::CreateStaticFunction2("setCallback",_hx_wrapGLFWKeyHandler_obj_setCallback);}

GLFWKeyHandler_obj::GLFWKeyHandler_obj()
{
}

bool GLFWKeyHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

bool GLFWKeyHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"listeners") ) { listeners=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLFWKeyHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GLFWKeyHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &GLFWKeyHandler_obj::listeners,HX_("listeners",7f,65,8e,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GLFWKeyHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFWKeyHandler_obj::listeners,"listeners");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFWKeyHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFWKeyHandler_obj::listeners,"listeners");
};

#endif

::hx::Class GLFWKeyHandler_obj::__mClass;

static ::String GLFWKeyHandler_obj_sStaticFields[] = {
	HX_("listeners",7f,65,8e,f3),
	HX_("nativeCallack",94,5e,6f,13),
	HX_("setCallback",87,63,67,af),
	::String(null())
};

void GLFWKeyHandler_obj::__register()
{
	GLFWKeyHandler_obj _hx_dummy;
	GLFWKeyHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("glfw.GLFWKeyHandler",f9,8c,5f,78);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFWKeyHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &GLFWKeyHandler_obj::__SetStatic;
	__mClass->mMarkFunc = GLFWKeyHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLFWKeyHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLFWKeyHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFWKeyHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFWKeyHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFWKeyHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GLFWKeyHandler_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_db126fa83880647f_65_boot)
HXDLIN(  65)		listeners =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace glfw