// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_TrilateralOpenFLSVG
#include <TrilateralOpenFLSVG.h>
#endif
#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
#ifndef INCLUDED_justPath_SvgPath
#include <justPath/SvgPath.h>
#endif
#ifndef INCLUDED_justPath_transform_TranslationContext
#include <justPath/transform/TranslationContext.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Pen
#include <trilateral3/drawing/Pen.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Sketch
#include <trilateral3/drawing/Sketch.h>
#endif
#ifndef INCLUDED_trilateral3_target_openfl_AppOpenFL
#include <trilateral3/target/openfl/AppOpenFL.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_30_new,"TrilateralOpenFLSVG","new",0x87d9b73a,"TrilateralOpenFLSVG.new","TrilateralOpenFLSVG.hx",30,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_35_draw,"TrilateralOpenFLSVG","draw",0x501443ea,"TrilateralOpenFLSVG.draw","TrilateralOpenFLSVG.hx",35,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_46_cubicSVG,"TrilateralOpenFLSVG","cubicSVG",0x5ab21620,"TrilateralOpenFLSVG.cubicSVG","TrilateralOpenFLSVG.hx",46,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_41_cubicSVG,"TrilateralOpenFLSVG","cubicSVG",0x5ab21620,"TrilateralOpenFLSVG.cubicSVG","TrilateralOpenFLSVG.hx",41,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_57_quadSVG,"TrilateralOpenFLSVG","quadSVG",0x1bbcdfb7,"TrilateralOpenFLSVG.quadSVG","TrilateralOpenFLSVG.hx",57,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_52_quadSVG,"TrilateralOpenFLSVG","quadSVG",0x1bbcdfb7,"TrilateralOpenFLSVG.quadSVG","TrilateralOpenFLSVG.hx",52,0x21e68d76)
HX_LOCAL_STACK_FRAME(_hx_pos_ed5c51408d7b7baa_64_renderDraw,"TrilateralOpenFLSVG","renderDraw",0x8a122ee0,"TrilateralOpenFLSVG.renderDraw","TrilateralOpenFLSVG.hx",64,0x21e68d76)

void TrilateralOpenFLSVG_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_30_new)
HXLINE(  32)		this->cubictest_d = HX_("M100,200 C100,100 250,100 250,200S400,300 400,200",b0,60,65,bc);
HXLINE(  31)		this->quadtest_d = HX_("M200,300 Q400,50 600,300 T1000,300",c7,a8,bf,30);
HXLINE(  30)		super::__construct();
            	}

Dynamic TrilateralOpenFLSVG_obj::__CreateEmpty() { return new TrilateralOpenFLSVG_obj; }

void *TrilateralOpenFLSVG_obj::_hx_vtable = 0;

Dynamic TrilateralOpenFLSVG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrilateralOpenFLSVG_obj > _hx_result = new TrilateralOpenFLSVG_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TrilateralOpenFLSVG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x222f2689) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x222f2689;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
		} else {
			return inClassId==(int)0x76d5d788;
		}
	}
}

void TrilateralOpenFLSVG_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_35_draw)
HXLINE(  36)		this->pen->currentColor = -16776961;
HXLINE(  37)		this->cubicSVG();
HXLINE(  38)		this->pen->currentColor = -16776961;
HXLINE(  39)		this->quadSVG();
            	}


void TrilateralOpenFLSVG_obj::cubicSVG(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
            		int _hx_run(int colour,Float x,Float y,Float x_,Float y_){
            			HX_GC_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_46_cubicSVG)
HXLINE(  46)			return ::Math_obj::round((( (Float)(colour) ) - (x * y)));
            		}
            		HX_END_LOCAL_FUNC5(return)

            	HX_GC_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_41_cubicSVG)
HXLINE(  42)		 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,this->pen,4,3);
HXLINE(  43)		sketch->width = ( (Float)(20) );
HXLINE(  45)		sketch->colourFunction =  ::Dynamic(new _hx_Closure_0());
HXLINE(  48)		 ::justPath::transform::TranslationContext translateContext =  ::justPath::transform::TranslationContext_obj::__alloc( HX_CTX ,sketch,( (Float)(50) ),( (Float)(200) ));
HXLINE(  49)		 ::justPath::SvgPath p =  ::justPath::SvgPath_obj::__alloc( HX_CTX ,translateContext);
HXLINE(  50)		p->parse(this->cubictest_d);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrilateralOpenFLSVG_obj,cubicSVG,(void))

void TrilateralOpenFLSVG_obj::quadSVG(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
            		Float _hx_run(Float width,Float x,Float y,Float x_,Float y_){
            			HX_GC_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_57_quadSVG)
HXLINE(  57)			return (width + ((Float)0.016));
            		}
            		HX_END_LOCAL_FUNC5(return)

            	HX_GC_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_52_quadSVG)
HXLINE(  53)		 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,this->pen,4,3);
HXLINE(  54)		sketch->width = ( (Float)(5) );
HXLINE(  56)		sketch->widthFunction =  ::Dynamic(new _hx_Closure_0());
HXLINE(  59)		 ::justPath::transform::TranslationContext translateContext =  ::justPath::transform::TranslationContext_obj::__alloc( HX_CTX ,sketch,( (Float)(-100) ),( (Float)(300) ));
HXLINE(  60)		 ::justPath::SvgPath p =  ::justPath::SvgPath_obj::__alloc( HX_CTX ,translateContext);
HXLINE(  61)		p->parse(this->quadtest_d);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrilateralOpenFLSVG_obj,quadSVG,(void))

void TrilateralOpenFLSVG_obj::renderDraw(){
            	HX_STACKFRAME(&_hx_pos_ed5c51408d7b7baa_64_renderDraw)
            	}



::hx::ObjectPtr< TrilateralOpenFLSVG_obj > TrilateralOpenFLSVG_obj::__new() {
	::hx::ObjectPtr< TrilateralOpenFLSVG_obj > __this = new TrilateralOpenFLSVG_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TrilateralOpenFLSVG_obj > TrilateralOpenFLSVG_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TrilateralOpenFLSVG_obj *__this = (TrilateralOpenFLSVG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralOpenFLSVG_obj), true, "TrilateralOpenFLSVG"));
	*(void **)__this = TrilateralOpenFLSVG_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TrilateralOpenFLSVG_obj::TrilateralOpenFLSVG_obj()
{
}

void TrilateralOpenFLSVG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrilateralOpenFLSVG);
	HX_MARK_MEMBER_NAME(quadtest_d,"quadtest_d");
	HX_MARK_MEMBER_NAME(cubictest_d,"cubictest_d");
	 ::trilateral3::target::openfl::AppOpenFL_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrilateralOpenFLSVG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quadtest_d,"quadtest_d");
	HX_VISIT_MEMBER_NAME(cubictest_d,"cubictest_d");
	 ::trilateral3::target::openfl::AppOpenFL_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrilateralOpenFLSVG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadSVG") ) { return ::hx::Val( quadSVG_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cubicSVG") ) { return ::hx::Val( cubicSVG_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadtest_d") ) { return ::hx::Val( quadtest_d ); }
		if (HX_FIELD_EQ(inName,"renderDraw") ) { return ::hx::Val( renderDraw_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubictest_d") ) { return ::hx::Val( cubictest_d ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TrilateralOpenFLSVG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"quadtest_d") ) { quadtest_d=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubictest_d") ) { cubictest_d=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrilateralOpenFLSVG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("quadtest_d",fe,db,ed,08));
	outFields->push(HX_("cubictest_d",c1,84,2e,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrilateralOpenFLSVG_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TrilateralOpenFLSVG_obj,quadtest_d),HX_("quadtest_d",fe,db,ed,08)},
	{::hx::fsString,(int)offsetof(TrilateralOpenFLSVG_obj,cubictest_d),HX_("cubictest_d",c1,84,2e,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrilateralOpenFLSVG_obj_sStaticStorageInfo = 0;
#endif

static ::String TrilateralOpenFLSVG_obj_sMemberFields[] = {
	HX_("quadtest_d",fe,db,ed,08),
	HX_("cubictest_d",c1,84,2e,d8),
	HX_("draw",04,2c,70,42),
	HX_("cubicSVG",3a,13,8d,05),
	HX_("quadSVG",dd,83,f1,3e),
	HX_("renderDraw",7a,26,7a,df),
	::String(null()) };

::hx::Class TrilateralOpenFLSVG_obj::__mClass;

void TrilateralOpenFLSVG_obj::__register()
{
	TrilateralOpenFLSVG_obj _hx_dummy;
	TrilateralOpenFLSVG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrilateralOpenFLSVG",48,52,33,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrilateralOpenFLSVG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrilateralOpenFLSVG_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrilateralOpenFLSVG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrilateralOpenFLSVG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

