// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_6a37b2496ecd24d2
#define INCLUDED_6a37b2496ecd24d2
#include "/usr/local/lib/haxeLibrary/gluon/git/gluon/webgl/native/ES2Context.h"
#endif
#ifndef INCLUDED_gluon_webgl__GLContext_GLContext_Impl_
#include <gluon/webgl/_GLContext/GLContext_Impl_.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLBuffer
#include <gluon/webgl/native/GLBuffer.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kitGL_gluon_Ply
#include <kitGL/gluon/Ply.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_Float32ArrayImpl
#include <typedarray/Float32ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray__BufferSource_BufferSourceType
#include <typedarray/_BufferSource/BufferSourceType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f4e43f864c9570d_23_new,"kitGL.gluon.Ply","new",0x678cabbd,"kitGL.gluon.Ply.new","kitGL/gluon/Ply.hx",23,0x6fccce95)
HX_LOCAL_STACK_FRAME(_hx_pos_4f4e43f864c9570d_43_render,"kitGL.gluon.Ply","render",0xf0244819,"kitGL.gluon.Ply.render","kitGL/gluon/Ply.hx",43,0x6fccce95)
HX_LOCAL_STACK_FRAME(_hx_pos_4f4e43f864c9570d_58_renderDraw,"kitGL.gluon.Ply","renderDraw",0x3e3620bd,"kitGL.gluon.Ply.renderDraw","kitGL/gluon/Ply.hx",58,0x6fccce95)
namespace kitGL{
namespace gluon{

void Ply_obj::__construct( ::gluon::webgl::native::GLContext gl){
            	HX_STACKFRAME(&_hx_pos_4f4e43f864c9570d_23_new)
HXDLIN(  23)		this->gl = gl;
            	}

Dynamic Ply_obj::__CreateEmpty() { return new Ply_obj; }

void *Ply_obj::_hx_vtable = 0;

Dynamic Ply_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ply_obj > _hx_result = new Ply_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Ply_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a013729;
}

void Ply_obj::render(int width,int height){
            	HX_STACKFRAME(&_hx_pos_4f4e43f864c9570d_43_render)
HXLINE(  45)		int dim;
HXDLIN(  45)		if ((width < height)) {
HXLINE(  45)			dim = width;
            		}
            		else {
HXLINE(  45)			dim = height;
            		}
HXLINE(  46)		{
HXLINE(  46)			 ::gluon::webgl::native::GLContext gl = this->gl;
HXDLIN(  46)			{
HXLINE(  46)				glViewport(0,0,dim,dim);
HXDLIN(  46)				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("viewport",66,4c,a5,9c));
            			}
HXDLIN(  46)			{
HXLINE(  46)				glClearColor(( (float)(((Float)0.0)) ),( (float)(((Float)0.0)) ),( (float)(((Float)0.0)) ),( (float)(((Float)1.0)) ));
HXDLIN(  46)				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("clearColor",96,b0,66,1f));
            			}
HXDLIN(  46)			{
HXLINE(  46)				glClear(( (unsigned int)(16384) ));
HXDLIN(  46)				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("clear",8d,71,5b,48));
            			}
            		}
HXLINE(  47)		this->renderDraw();
HXLINE(  48)		{
HXLINE(  48)			 ::gluon::webgl::native::GLContext this1 = this->gl;
HXDLIN(  48)			 ::gluon::webgl::native::GLBuffer buffer = this->buf;
HXDLIN(  48)			{
HXLINE(  48)				unsigned int ref;
HXDLIN(  48)				if (::hx::IsNotNull( buffer )) {
HXLINE(  48)					ref = buffer->handle;
            				}
            				else {
HXLINE(  48)					ref = ( (unsigned int)(0) );
            				}
HXDLIN(  48)				glBindBuffer(( (unsigned int)(34962) ),ref);
            			}
HXDLIN(  48)			::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this1,HX_("bindBuffer",9d,92,be,f8));
            		}
HXLINE(  52)		{
HXLINE(  52)			 ::gluon::webgl::native::GLContext this2 = this->gl;
HXDLIN(  52)			 ::typedarray::_BufferSource::BufferSourceType data = ::typedarray::_BufferSource::BufferSourceType_obj::BufferView(this->dataGL->__Field(HX_("get_data",b3,11,1e,c2),::hx::paccDynamic)());
HXDLIN(  52)			int _hx_tmp;
HXDLIN(  52)			switch((int)(data->_hx_getIndex())){
            				case (int)0: {
HXLINE(  52)					 ::haxe::io::Bytes buffer = data->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN(  52)					_hx_tmp = buffer->length;
            				}
            				break;
            				case (int)1: {
HXLINE(  52)					::Dynamic bufferView = data->_hx_getObject(0);
HXDLIN(  52)					_hx_tmp = ( (int)(bufferView->__Field(HX_("byteLength",0e,1e,0c,77),::hx::paccDynamic)) );
            				}
            				break;
            			}
HXDLIN(  52)			unsigned char * _hx_tmp1;
HXDLIN(  52)			switch((int)(data->_hx_getIndex())){
            				case (int)0: {
HXLINE(  52)					 ::haxe::io::Bytes buffer = data->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN(  52)					::cpp::Pointer< unsigned char > _hx_tmp = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(buffer->b,0)) );
HXDLIN(  52)					_hx_tmp1 = ( (unsigned char *)(_hx_tmp->get_raw()) );
            				}
            				break;
            				case (int)1: {
HXLINE(  52)					::Dynamic bufferView = data->_hx_getObject(0);
HXDLIN(  52)					_hx_tmp1 = ::typedarray::ArrayBufferView_obj::toCPointer(bufferView);
            				}
            				break;
            			}
HXDLIN(  52)			glBufferSubData(( (unsigned int)(34962) ),( (::cpp::Int64)(0) ),( (::cpp::Int64)(_hx_tmp) ),( (const void *)(_hx_tmp1) ));
HXDLIN(  52)			::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this2,HX_("bufferSubData",aa,f6,e4,45));
            		}
HXLINE(  53)		{
HXLINE(  53)			 ::gluon::webgl::native::GLContext this3 = this->gl;
HXDLIN(  53)			 ::gluon::webgl::native::GLProgram program = this->program;
HXDLIN(  53)			{
HXLINE(  53)				unsigned int ref1;
HXDLIN(  53)				if (::hx::IsNotNull( program )) {
HXLINE(  53)					ref1 = program->handle;
            				}
            				else {
HXLINE(  53)					ref1 = ( (unsigned int)(0) );
            				}
HXDLIN(  53)				glUseProgram(ref1);
            			}
HXDLIN(  53)			::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this3,HX_("useProgram",fd,6c,ac,f6));
            		}
HXLINE(  54)		{
HXLINE(  54)			 ::gluon::webgl::native::GLContext this4 = this->gl;
HXDLIN(  54)			glDrawArrays(( (unsigned int)(4) ),0,( (int)(this->dataGL->__Field(HX_("get_size",4a,5c,0e,cc),::hx::paccDynamic)()) ));
HXDLIN(  54)			::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this4,HX_("drawArrays",de,f3,b3,f9));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Ply_obj,render,(void))

void Ply_obj::renderDraw(){
            	HX_STACKFRAME(&_hx_pos_4f4e43f864c9570d_58_renderDraw)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Ply_obj,renderDraw,(void))


::hx::ObjectPtr< Ply_obj > Ply_obj::__new( ::gluon::webgl::native::GLContext gl) {
	::hx::ObjectPtr< Ply_obj > __this = new Ply_obj();
	__this->__construct(gl);
	return __this;
}

::hx::ObjectPtr< Ply_obj > Ply_obj::__alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext gl) {
	Ply_obj *__this = (Ply_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ply_obj), true, "kitGL.gluon.Ply"));
	*(void **)__this = Ply_obj::_hx_vtable;
	__this->__construct(gl);
	return __this;
}

Ply_obj::Ply_obj()
{
}

void Ply_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ply);
	HX_MARK_MEMBER_NAME(dataGL,"dataGL");
	HX_MARK_MEMBER_NAME(posLoc,"posLoc");
	HX_MARK_MEMBER_NAME(colorLoc,"colorLoc");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void Ply_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dataGL,"dataGL");
	HX_VISIT_MEMBER_NAME(posLoc,"posLoc");
	HX_VISIT_MEMBER_NAME(colorLoc,"colorLoc");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

::hx::Val Ply_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return ::hx::Val( gl ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dataGL") ) { return ::hx::Val( dataGL ); }
		if (HX_FIELD_EQ(inName,"posLoc") ) { return ::hx::Val( posLoc ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorLoc") ) { return ::hx::Val( colorLoc ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderDraw") ) { return ::hx::Val( renderDraw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Ply_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::gluon::webgl::native::GLContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::gluon::webgl::native::GLBuffer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"dataGL") ) { dataGL=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"posLoc") ) { posLoc=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::gluon::webgl::native::GLProgram >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"colorLoc") ) { colorLoc=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ply_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dataGL",cf,f2,84,22));
	outFields->push(HX_("posLoc",4c,63,b0,fd));
	outFields->push(HX_("colorLoc",dd,5a,ea,89));
	outFields->push(HX_("gl",25,5a,00,00));
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("buf",33,c3,4a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ply_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Ply_obj,dataGL),HX_("dataGL",cf,f2,84,22)},
	{::hx::fsInt,(int)offsetof(Ply_obj,posLoc),HX_("posLoc",4c,63,b0,fd)},
	{::hx::fsInt,(int)offsetof(Ply_obj,colorLoc),HX_("colorLoc",dd,5a,ea,89)},
	{::hx::fsObject /*  ::gluon::webgl::native::GLContext */ ,(int)offsetof(Ply_obj,gl),HX_("gl",25,5a,00,00)},
	{::hx::fsObject /*  ::gluon::webgl::native::GLProgram */ ,(int)offsetof(Ply_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::gluon::webgl::native::GLBuffer */ ,(int)offsetof(Ply_obj,buf),HX_("buf",33,c3,4a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ply_obj_sStaticStorageInfo = 0;
#endif

static ::String Ply_obj_sMemberFields[] = {
	HX_("dataGL",cf,f2,84,22),
	HX_("posLoc",4c,63,b0,fd),
	HX_("colorLoc",dd,5a,ea,89),
	HX_("gl",25,5a,00,00),
	HX_("program",84,4a,f9,f3),
	HX_("buf",33,c3,4a,00),
	HX_("render",56,6b,29,05),
	HX_("renderDraw",7a,26,7a,df),
	::String(null()) };

::hx::Class Ply_obj::__mClass;

void Ply_obj::__register()
{
	Ply_obj _hx_dummy;
	Ply_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.gluon.Ply",4b,09,0b,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ply_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ply_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ply_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ply_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace gluon
