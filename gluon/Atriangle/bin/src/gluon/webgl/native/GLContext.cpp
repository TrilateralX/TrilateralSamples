// Generated by Haxe 4.3.0-rc.1+88ebbd0
#include <hxcpp.h>

#ifndef INCLUDED_6a37b2496ecd24d2
#define INCLUDED_6a37b2496ecd24d2
#include "/usr/local/lib/haxeLibrary/gluon/git/gluon/webgl/native/ES2Context.h"
#endif
#ifndef INCLUDED_2710e462964f946c
#define INCLUDED_2710e462964f946c
#include "stdlib.h"
#endif
#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLFramebuffer
#include <gluon/webgl/native/GLFramebuffer.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLObject
#include <gluon/webgl/native/GLObject.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLShader
#include <gluon/webgl/native/GLShader.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_Int32ArrayImpl
#include <typedarray/Int32ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray_Uint8ArrayImpl
#include <typedarray/Uint8ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray__Int32Array_Int32Array_Impl_
#include <typedarray/_Int32Array/Int32Array_Impl_.h>
#endif
#ifndef INCLUDED_typedarray__Uint8Array_Uint8Array_Impl_
#include <typedarray/_Uint8Array/Uint8Array_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c39712e1739c994e_41_new,"gluon.webgl.native.GLContext","new",0x1d538e39,"gluon.webgl.native.GLContext.new","gluon/webgl/native/GLContext.hx",41,0x2ee26356)
HX_LOCAL_STACK_FRAME(_hx_pos_c39712e1739c994e_567_getShaderParameter,"gluon.webgl.native.GLContext","getShaderParameter",0xf66b2815,"gluon.webgl.native.GLContext.getShaderParameter","gluon/webgl/native/GLContext.hx",567,0x2ee26356)
HX_LOCAL_STACK_FRAME(_hx_pos_c39712e1739c994e_590_getShaderInfoLog,"gluon.webgl.native.GLContext","getShaderInfoLog",0x5ee28c22,"gluon.webgl.native.GLContext.getShaderInfoLog","gluon/webgl/native/GLContext.hx",590,0x2ee26356)
HX_LOCAL_STACK_FRAME(_hx_pos_c39712e1739c994e_802_shaderSource,"gluon.webgl.native.GLContext","shaderSource",0x66da8ce7,"gluon.webgl.native.GLContext.shaderSource","gluon/webgl/native/GLContext.hx",802,0x2ee26356)
namespace gluon{
namespace webgl{
namespace native{

void GLContext_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_c39712e1739c994e_41_new)
HXLINE(  46)		 ::typedarray::Int32ArrayImpl temp = ::typedarray::_Int32Array::Int32Array_Impl__obj::_new(1,null(),null(),null(),null());
HXLINE(  47)		::cpp::Pointer< unsigned char > address = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(temp->buffer->b,temp->byteOffset)) );
HXDLIN(  47)		unsigned char* address1 = address->get_raw();
HXDLIN(  47)		glGetIntegerv(( (unsigned int)(36006) ),( (int *)(address1) ));
HXLINE(  48)		int initialFramebufferRef = temp->_get(0);
HXLINE(  49)		this->defaultFramebuffer =  ::gluon::webgl::native::GLFramebuffer_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),( (unsigned int)(initialFramebufferRef) ));
            	}

Dynamic GLContext_obj::__CreateEmpty() { return new GLContext_obj; }

void *GLContext_obj::_hx_vtable = 0;

Dynamic GLContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLContext_obj > _hx_result = new GLContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x084d1541;
}

 ::Dynamic GLContext_obj::getShaderParameter( ::gluon::webgl::native::GLShader shader,unsigned int pname){
            	HX_STACKFRAME(&_hx_pos_c39712e1739c994e_567_getShaderParameter)
HXLINE( 568)		int result = 0;
HXLINE( 569)		unsigned int _hx_switch_0 = pname;
            		if (  (_hx_switch_0==( (unsigned int)(35663) )) ){
HXLINE( 574)			unsigned int shader1 = shader->handle;
HXDLIN( 574)			glGetShaderiv(shader1,pname,&(result));
HXLINE( 575)			return result;
HXLINE( 573)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==( (unsigned int)(35712) )) ||  (_hx_switch_0==( (unsigned int)(35713) )) ){
HXLINE( 571)			unsigned int shader1 = shader->handle;
HXDLIN( 571)			glGetShaderiv(shader1,pname,&(result));
HXLINE( 572)			return (result != 0);
HXLINE( 570)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE( 569)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLContext_obj,getShaderParameter,return )

::String GLContext_obj::getShaderInfoLog( ::gluon::webgl::native::GLShader shader){
            	HX_STACKFRAME(&_hx_pos_c39712e1739c994e_590_getShaderInfoLog)
HXLINE( 591)		int maxInfoLogLength = ( (int)(this->getShaderParameter(shader,( (unsigned int)(35716) ))) );
HXLINE( 592)		int returnedStringLength = 0;
HXLINE( 594)		 ::typedarray::Uint8ArrayImpl infoLogBuffer = ::typedarray::_Uint8Array::Uint8Array_Impl__obj::_new(maxInfoLogLength,null(),null(),null(),null());
HXLINE( 595)		::cpp::Pointer< unsigned char > address = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(infoLogBuffer->buffer->b,infoLogBuffer->byteOffset)) );
HXDLIN( 595)		unsigned char* address1 = address->get_raw();
HXDLIN( 595)		unsigned char * infoLogBufferPtr = ( (unsigned char *)(address1) );
HXLINE( 596)		char* infoLogPointer = reinterpret_cast<char*>(infoLogBufferPtr);
HXLINE( 598)		unsigned int shader1 = shader->handle;
HXDLIN( 598)		glGetShaderInfoLog(shader1,maxInfoLogLength,&(returnedStringLength),infoLogPointer);
HXLINE( 600)		const char* cStr = ( (const char*)(infoLogPointer) );
HXLINE( 601)		return ::String(cStr);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLContext_obj,getShaderInfoLog,return )

void GLContext_obj::shaderSource( ::gluon::webgl::native::GLShader shader,::String source){
            	HX_STACKFRAME(&_hx_pos_c39712e1739c994e_802_shaderSource)
HXLINE( 803)		const char* this1 = source.utf8_str();
HXDLIN( 803)		const char* sourceCharStar = this1;
HXLINE( 805)		unsigned int shader1 = shader->handle;
HXDLIN( 805)		glShaderSource(shader1,1,&(sourceCharStar),0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLContext_obj,shaderSource,(void))


::hx::ObjectPtr< GLContext_obj > GLContext_obj::__new() {
	::hx::ObjectPtr< GLContext_obj > __this = new GLContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GLContext_obj > GLContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GLContext_obj *__this = (GLContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLContext_obj), true, "gluon.webgl.native.GLContext"));
	*(void **)__this = GLContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GLContext_obj::GLContext_obj()
{
}

void GLContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLContext);
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_END_CLASS();
}

void GLContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
}

::hx::Val GLContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return ::hx::Val( shaderSource_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return ::hx::Val( getShaderInfoLog_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return ::hx::Val( defaultFramebuffer ); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return ::hx::Val( getShaderParameter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GLContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast<  ::gluon::webgl::native::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("defaultFramebuffer",ac,79,67,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GLContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::gluon::webgl::native::GLFramebuffer */ ,(int)offsetof(GLContext_obj,defaultFramebuffer),HX_("defaultFramebuffer",ac,79,67,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GLContext_obj_sStaticStorageInfo = 0;
#endif

static ::String GLContext_obj_sMemberFields[] = {
	HX_("defaultFramebuffer",ac,79,67,39),
	HX_("getShaderParameter",ce,69,5b,36),
	HX_("getShaderInfoLog",9b,bd,c8,f3),
	HX_("shaderSource",e0,4d,1a,a2),
	::String(null()) };

::hx::Class GLContext_obj::__mClass;

void GLContext_obj::__register()
{
	GLContext_obj _hx_dummy;
	GLContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gluon.webgl.native.GLContext",c7,fd,97,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gluon
} // end namespace webgl
} // end namespace native
