// Generated by Haxe 4.3.0-rc.1+88ebbd0
#include <hxcpp.h>

#ifndef INCLUDED_6a37b2496ecd24d2
#define INCLUDED_6a37b2496ecd24d2
#include "/usr/local/lib/haxeLibrary/gluon/git/gluon/webgl/native/ES2Context.h"
#endif
#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLObject
#include <gluon/webgl/native/GLObject.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLProgram
#include <gluon/webgl/native/GLProgram.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b2ad4abb9335bbcb_4_new,"gluon.webgl.native.GLProgram","new",0xb773b14e,"gluon.webgl.native.GLProgram.new","gluon/webgl/native/GLProgram.hx",4,0x77e5f9e1)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ad4abb9335bbcb_7_finalize,"gluon.webgl.native.GLProgram","finalize",0x277e45f0,"gluon.webgl.native.GLProgram.finalize","gluon/webgl/native/GLProgram.hx",7,0x77e5f9e1)
namespace gluon{
namespace webgl{
namespace native{

void GLProgram_obj::__construct( ::gluon::webgl::native::GLContext context,unsigned int handle){
            	HX_STACKFRAME(&_hx_pos_b2ad4abb9335bbcb_4_new)
HXDLIN(   4)		super::__construct(context,handle);
            	}

Dynamic GLProgram_obj::__CreateEmpty() { return new GLProgram_obj; }

void *GLProgram_obj::_hx_vtable = 0;

Dynamic GLProgram_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLProgram_obj > _hx_result = new GLProgram_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLProgram_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x045110f2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x045110f2;
	} else {
		return inClassId==(int)0x6d90cfad;
	}
}

void GLProgram_obj::finalize(){
            	HX_STACKFRAME(&_hx_pos_b2ad4abb9335bbcb_7_finalize)
HXLINE(   8)		{
HXLINE(   8)			 ::gluon::webgl::native::GLContext _this = this->context;
HXDLIN(   8)			{
HXLINE(   8)				if ((this->handle != 0)) {
HXLINE(   8)					glDeleteProgram(this->handle);
            				}
HXDLIN(   8)				this->handle = ( (unsigned int)(0) );
            			}
            		}
HXLINE(   9)		this->handle = ( (unsigned int)(0) );
            	}



::hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__new( ::gluon::webgl::native::GLContext context,unsigned int handle) {
	::hx::ObjectPtr< GLProgram_obj > __this = new GLProgram_obj();
	__this->__construct(context,handle);
	return __this;
}

::hx::ObjectPtr< GLProgram_obj > GLProgram_obj::__alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext context,unsigned int handle) {
	GLProgram_obj *__this = (GLProgram_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLProgram_obj), true, "gluon.webgl.native.GLProgram"));
	*(void **)__this = GLProgram_obj::_hx_vtable;
	__this->__construct(context,handle);
	return __this;
}

GLProgram_obj::GLProgram_obj()
{
}

::hx::Val GLProgram_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { return ::hx::Val( finalize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLProgram_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLProgram_obj_sStaticStorageInfo = 0;
#endif

static ::String GLProgram_obj_sMemberFields[] = {
	HX_("finalize",9e,45,3a,f5),
	::String(null()) };

::hx::Class GLProgram_obj::__mClass;

void GLProgram_obj::__register()
{
	GLProgram_obj _hx_dummy;
	GLProgram_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gluon.webgl.native.GLProgram",5c,b2,19,cc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLProgram_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLProgram_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gluon
} // end namespace webgl
} // end namespace native
