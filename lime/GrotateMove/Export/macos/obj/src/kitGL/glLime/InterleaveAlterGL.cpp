// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kitGL_glLime_InterleaveAlterGL
#include <kitGL/glLime/InterleaveAlterGL.h>
#endif
#ifndef INCLUDED_kitGL_glLime_setup_IAppGL
#include <kitGL/glLime/setup/IAppGL.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGL2RenderContext_WebGL2RenderContext_Impl_
#include <lime/graphics/_WebGL2RenderContext/WebGL2RenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics__WebGLRenderContext_WebGLRenderContext_Impl_
#include <lime/graphics/_WebGLRenderContext/WebGLRenderContext_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c7a2e3978442257e_25_new,"kitGL.glLime.InterleaveAlterGL","new",0x60ed0931,"kitGL.glLime.InterleaveAlterGL.new","kitGL/glLime/InterleaveAlterGL.hx",25,0x9006297f)
HX_LOCAL_STACK_FRAME(_hx_pos_c7a2e3978442257e_31_update,"kitGL.glLime.InterleaveAlterGL","update",0x5a24e5d8,"kitGL.glLime.InterleaveAlterGL.update","kitGL/glLime/InterleaveAlterGL.hx",31,0x9006297f)
HX_LOCAL_STACK_FRAME(_hx_pos_c7a2e3978442257e_33_setup,"kitGL.glLime.InterleaveAlterGL","setup",0x1e257d8e,"kitGL.glLime.InterleaveAlterGL.setup","kitGL/glLime/InterleaveAlterGL.hx",33,0x9006297f)
HX_LOCAL_STACK_FRAME(_hx_pos_c7a2e3978442257e_43_draw,"kitGL.glLime.InterleaveAlterGL","draw",0x67e8aa13,"kitGL.glLime.InterleaveAlterGL.draw","kitGL/glLime/InterleaveAlterGL.hx",43,0x9006297f)
HX_LOCAL_STACK_FRAME(_hx_pos_c7a2e3978442257e_46_render,"kitGL.glLime.InterleaveAlterGL","render",0xd848cb25,"kitGL.glLime.InterleaveAlterGL.render","kitGL/glLime/InterleaveAlterGL.hx",46,0x9006297f)
HX_LOCAL_STACK_FRAME(_hx_pos_c7a2e3978442257e_56_renderDraw,"kitGL.glLime.InterleaveAlterGL","renderDraw",0x6f2719c9,"kitGL.glLime.InterleaveAlterGL.renderDraw","kitGL/glLime/InterleaveAlterGL.hx",56,0x9006297f)
namespace kitGL{
namespace glLime{

void InterleaveAlterGL_obj::__construct(int width_,int height_){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_25_new)
HXLINE(  26)		this->width = width_;
HXLINE(  27)		this->height = height_;
            	}

Dynamic InterleaveAlterGL_obj::__CreateEmpty() { return new InterleaveAlterGL_obj; }

void *InterleaveAlterGL_obj::_hx_vtable = 0;

Dynamic InterleaveAlterGL_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InterleaveAlterGL_obj > _hx_result = new InterleaveAlterGL_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InterleaveAlterGL_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c01c3d3;
}

static ::kitGL::glLime::setup::IAppGL_obj _hx_kitGL_glLime_InterleaveAlterGL__hx_kitGL_glLime_setup_IAppGL= {
	( void (::hx::Object::*)())&::kitGL::glLime::InterleaveAlterGL_obj::update,
	( void (::hx::Object::*)( ::lime::_internal::backend::native::NativeOpenGLRenderContext))&::kitGL::glLime::InterleaveAlterGL_obj::setup,
	( void (::hx::Object::*)())&::kitGL::glLime::InterleaveAlterGL_obj::draw,
	( void (::hx::Object::*)( ::lime::_internal::backend::native::NativeOpenGLRenderContext))&::kitGL::glLime::InterleaveAlterGL_obj::render,
	( void (::hx::Object::*)())&::kitGL::glLime::InterleaveAlterGL_obj::renderDraw,
};

void *InterleaveAlterGL_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x091f18c5: return &_hx_kitGL_glLime_InterleaveAlterGL__hx_kitGL_glLime_setup_IAppGL;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void InterleaveAlterGL_obj::update(){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_31_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(InterleaveAlterGL_obj,update,(void))

void InterleaveAlterGL_obj::setup( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_33_setup)
HXLINE(  34)		 ::lime::graphics::opengl::GLObject program = gl->createProgram();
HXDLIN(  34)		{
HXLINE(  34)			 ::lime::graphics::opengl::GLObject shader = gl->createShader(gl->VERTEX_SHADER);
HXDLIN(  34)			gl->shaderSource(shader,((((((HX_("attribute vec3 vertexPosition;",31,27,01,79) + HX_("attribute vec4 vertexColor;",b8,a7,4a,43)) + HX_("varying vec4 vcol;",61,c8,5b,03)) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_Position = vec4(vertexPosition, 1.0);",1c,0c,87,98)) + HX_(" vcol = vertexColor;",75,ef,b6,2e)) + HX_("}",7d,00,00,00)));
HXDLIN(  34)			gl->compileShader(shader);
HXDLIN(  34)			 ::lime::graphics::opengl::GLObject shader1;
HXDLIN(  34)			if (!(( (bool)(gl->getShaderParameter(shader,gl->COMPILE_STATUS)) ))) {
HXLINE(  34)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error compiling shader. ",bf,50,4d,23) + gl->getShaderInfoLog(shader))));
            			}
            			else {
HXLINE(  34)				shader1 = shader;
            			}
HXDLIN(  34)			gl->attachShader(program,shader1);
            		}
HXDLIN(  34)		{
HXLINE(  34)			 ::lime::graphics::opengl::GLObject shader2 = gl->createShader(gl->FRAGMENT_SHADER);
HXDLIN(  34)			gl->shaderSource(shader2,(((HX_("varying vec4 vcol;",61,c8,5b,03) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_FragColor = vcol;",25,af,1c,24)) + HX_("}",7d,00,00,00)));
HXDLIN(  34)			gl->compileShader(shader2);
HXDLIN(  34)			 ::lime::graphics::opengl::GLObject shader3;
HXDLIN(  34)			if (!(( (bool)(gl->getShaderParameter(shader2,gl->COMPILE_STATUS)) ))) {
HXLINE(  34)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error compiling shader. ",bf,50,4d,23) + gl->getShaderInfoLog(shader2))));
            			}
            			else {
HXLINE(  34)				shader3 = shader2;
            			}
HXDLIN(  34)			gl->attachShader(program,shader3);
            		}
HXDLIN(  34)		gl->linkProgram(program);
HXDLIN(  34)		 ::lime::graphics::opengl::GLObject _hx_tmp;
HXDLIN(  34)		if (!(( (bool)(gl->getProgramParameter(program,gl->LINK_STATUS)) ))) {
HXLINE(  34)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error linking program. ",46,e8,c7,f8) + gl->getProgramInfoLog(program))));
            		}
            		else {
HXLINE(  34)			gl->validateProgram(program);
HXDLIN(  34)			if (!(( (bool)(gl->getProgramParameter(program,gl->VALIDATE_STATUS)) ))) {
HXLINE(  34)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error validating program. ",21,2c,33,3d) + gl->getProgramInfoLog(program))));
            			}
            			else {
HXLINE(  34)				gl->useProgram(program);
HXDLIN(  34)				_hx_tmp = program;
            			}
            		}
HXDLIN(  34)		this->program = _hx_tmp;
HXLINE(  35)		this->draw();
HXLINE(  36)		 ::lime::graphics::opengl::GLObject program1 = this->program;
HXDLIN(  36)		 ::lime::utils::ArrayBufferView data = ( ( ::lime::utils::ArrayBufferView)(this->interleaveDataGL->__Field(HX_("get_data",b3,11,1e,c2),::hx::paccDynamic)()) );
HXDLIN(  36)		 ::Dynamic isDynamic = false;
HXDLIN(  36)		if (::hx::IsNull( isDynamic )) {
HXLINE(  36)			isDynamic = false;
            		}
HXDLIN(  36)		 ::lime::graphics::opengl::GLObject buf = gl->createBuffer();
HXDLIN(  36)		gl->bindBuffer(gl->ARRAY_BUFFER,buf);
HXDLIN(  36)		if (( (bool)(isDynamic) )) {
HXLINE(  36)			::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,data,gl->DYNAMIC_DRAW);
            		}
            		else {
HXLINE(  36)			::lime::graphics::_WebGLRenderContext::WebGLRenderContext_Impl__obj::bufferData(gl,gl->ARRAY_BUFFER,data,gl->STATIC_DRAW);
            		}
HXDLIN(  36)		 ::lime::graphics::opengl::GLObject vbo = buf;
HXDLIN(  36)		int posLoc = gl->getAttribLocation(program1,HX_("vertexPosition",2d,3c,14,50));
HXDLIN(  36)		int colorLoc = gl->getAttribLocation(program1,HX_("vertexColor",5f,3b,98,5e));
HXDLIN(  36)		{
HXLINE(  36)			int type = gl->FLOAT;
HXDLIN(  36)			gl->vertexAttribPointer(posLoc,3,type,false,28,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(0));
            		}
HXDLIN(  36)		{
HXLINE(  36)			int type1 = gl->FLOAT;
HXDLIN(  36)			gl->vertexAttribPointer(colorLoc,4,type1,false,28,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt(12));
            		}
HXDLIN(  36)		gl->enableVertexAttribArray(posLoc);
HXDLIN(  36)		gl->enableVertexAttribArray(colorLoc);
HXDLIN(  36)		this->buf = vbo;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InterleaveAlterGL_obj,setup,(void))

void InterleaveAlterGL_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_43_draw)
            	}


HX_DEFINE_DYNAMIC_FUNC0(InterleaveAlterGL_obj,draw,(void))

void InterleaveAlterGL_obj::render( ::lime::_internal::backend::native::NativeOpenGLRenderContext gl){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_46_render)
HXLINE(  47)		{
HXLINE(  47)			gl->viewport(0,0,this->width,this->height);
HXDLIN(  47)			gl->clearColor(((Float)0.0),((Float)0.0),((Float)0.0),((Float)1.0));
HXDLIN(  47)			gl->clear(gl->COLOR_BUFFER_BIT);
            		}
HXLINE(  48)		this->renderDraw();
HXLINE(  49)		gl->bindBuffer(gl->ARRAY_BUFFER,this->buf);
HXLINE(  50)		{
HXLINE(  50)			int target = gl->ARRAY_BUFFER;
HXDLIN(  50)			 ::lime::utils::ArrayBufferView srcData = ( ( ::lime::utils::ArrayBufferView)(this->interleaveDataGL->__Field(HX_("get_data",b3,11,1e,c2),::hx::paccDynamic)()) );
HXDLIN(  50)			{
HXLINE(  50)				 ::Dynamic length = null();
HXDLIN(  50)				 ::Dynamic size;
HXDLIN(  50)				if (::hx::IsNotNull( length )) {
HXLINE(  50)					size = length;
            				}
            				else {
HXLINE(  50)					if (::hx::IsNotNull( srcData )) {
HXLINE(  50)						size = srcData->byteLength;
            					}
            					else {
HXLINE(  50)						size = 0;
            					}
            				}
HXDLIN(  50)				::lime::utils::_BytePointer::BytePointer_Impl__obj::set(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer,null(),srcData,null(),0);
HXDLIN(  50)				gl->bufferSubData(target,0,( (int)(size) ),::lime::utils::_DataPointer::DataPointer_Impl__obj::fromBytesPointer(::lime::graphics::_WebGL2RenderContext::WebGL2RenderContext_Impl__obj::_hx___tempPointer));
            			}
            		}
HXLINE(  51)		gl->useProgram(this->program);
HXLINE(  52)		{
HXLINE(  52)			int mode = gl->TRIANGLES;
HXDLIN(  52)			gl->drawArrays(mode,0,( (int)(this->interleaveDataGL->__Field(HX_("get_size",4a,5c,0e,cc),::hx::paccDynamic)()) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(InterleaveAlterGL_obj,render,(void))

void InterleaveAlterGL_obj::renderDraw(){
            	HX_STACKFRAME(&_hx_pos_c7a2e3978442257e_56_renderDraw)
            	}


HX_DEFINE_DYNAMIC_FUNC0(InterleaveAlterGL_obj,renderDraw,(void))


::hx::ObjectPtr< InterleaveAlterGL_obj > InterleaveAlterGL_obj::__new(int width_,int height_) {
	::hx::ObjectPtr< InterleaveAlterGL_obj > __this = new InterleaveAlterGL_obj();
	__this->__construct(width_,height_);
	return __this;
}

::hx::ObjectPtr< InterleaveAlterGL_obj > InterleaveAlterGL_obj::__alloc(::hx::Ctx *_hx_ctx,int width_,int height_) {
	InterleaveAlterGL_obj *__this = (InterleaveAlterGL_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InterleaveAlterGL_obj), true, "kitGL.glLime.InterleaveAlterGL"));
	*(void **)__this = InterleaveAlterGL_obj::_hx_vtable;
	__this->__construct(width_,height_);
	return __this;
}

InterleaveAlterGL_obj::InterleaveAlterGL_obj()
{
}

void InterleaveAlterGL_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InterleaveAlterGL);
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(interleaveDataGL,"interleaveDataGL");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_END_CLASS();
}

void InterleaveAlterGL_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(interleaveDataGL,"interleaveDataGL");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(buf,"buf");
}

::hx::Val InterleaveAlterGL_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"setup") ) { return ::hx::Val( setup_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderDraw") ) { return ::hx::Val( renderDraw_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"interleaveDataGL") ) { return ::hx::Val( interleaveDataGL ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InterleaveAlterGL_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"interleaveDataGL") ) { interleaveDataGL=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InterleaveAlterGL_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("interleaveDataGL",8a,cd,9a,fe));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("buf",33,c3,4a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InterleaveAlterGL_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(InterleaveAlterGL_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(InterleaveAlterGL_obj,interleaveDataGL),HX_("interleaveDataGL",8a,cd,9a,fe)},
	{::hx::fsInt,(int)offsetof(InterleaveAlterGL_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(InterleaveAlterGL_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(InterleaveAlterGL_obj,buf),HX_("buf",33,c3,4a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InterleaveAlterGL_obj_sStaticStorageInfo = 0;
#endif

static ::String InterleaveAlterGL_obj_sMemberFields[] = {
	HX_("program",84,4a,f9,f3),
	HX_("interleaveDataGL",8a,cd,9a,fe),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("buf",33,c3,4a,00),
	HX_("update",09,86,05,87),
	HX_("setup",7d,ae,2f,7a),
	HX_("draw",04,2c,70,42),
	HX_("render",56,6b,29,05),
	HX_("renderDraw",7a,26,7a,df),
	::String(null()) };

::hx::Class InterleaveAlterGL_obj::__mClass;

void InterleaveAlterGL_obj::__register()
{
	InterleaveAlterGL_obj _hx_dummy;
	InterleaveAlterGL_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.glLime.InterleaveAlterGL",bf,9c,2a,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InterleaveAlterGL_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InterleaveAlterGL_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InterleaveAlterGL_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InterleaveAlterGL_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace glLime
