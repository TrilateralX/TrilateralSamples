// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_TrilateralLines
#include <TrilateralLines.h>
#endif
#ifndef INCLUDED__TrilateralLines_TrilateralLines_Fields_
#include <_TrilateralLines/TrilateralLines_Fields_.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
#endif
#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
#ifndef INCLUDED_kitGL_gluon_InterleaveAlterGL
#include <kitGL/gluon/InterleaveAlterGL.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Pen
#include <trilateral3/drawing/Pen.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Sketch
#include <trilateral3/drawing/Sketch.h>
#endif
#ifndef INCLUDED_trilateral3_nodule_PenNodule
#include <trilateral3/nodule/PenNodule.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_9d58eadfa7d376cf_23_new,"TrilateralLines","new",0xac512405,"TrilateralLines.new","TrilateralLines.hx",23,0xeaf6030b)
HX_LOCAL_STACK_FRAME(_hx_pos_9d58eadfa7d376cf_36_draw,"TrilateralLines","draw",0x141c08bf,"TrilateralLines.draw","TrilateralLines.hx",36,0xeaf6030b)

void TrilateralLines_obj::__construct( ::gluon::webgl::native::GLContext gl){
            	HX_GC_STACKFRAME(&_hx_pos_9d58eadfa7d376cf_23_new)
HXLINE(  34)		this->scaleY = ((Float)2.5);
HXLINE(  33)		this->scaleX = ((Float)2.5);
HXLINE(  30)		this->dy = 100;
HXLINE(  29)		this->dx = 200;
HXLINE(  25)		this->penNodule =  ::trilateral3::nodule::PenNodule_obj::__alloc( HX_CTX ,null());
HXLINE(  27)		super::__construct(gl);
            	}

Dynamic TrilateralLines_obj::__CreateEmpty() { return new TrilateralLines_obj; }

void *TrilateralLines_obj::_hx_vtable = 0;

Dynamic TrilateralLines_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrilateralLines_obj > _hx_result = new TrilateralLines_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TrilateralLines_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1c3f678c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1c3f678c;
	} else {
		return inClassId==(int)0x58b2a2d3;
	}
}

void TrilateralLines_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_9d58eadfa7d376cf_36_draw)
HXLINE(  37)		this->interleaveDataGL =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("get_data",b3,11,1e,c2),this->penNodule->get_data_dyn())
            			->setFixed(1,HX_("get_size",4a,5c,0e,cc),this->penNodule->get_size_dyn()));
HXLINE(  38)		this->pen = this->penNodule->pen;
HXLINE(  39)		 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,this->pen,2,0);
HXLINE(  40)		sketch->width = ((Float)1.7);
HXLINE(  41)		::Array< ::Dynamic> shapes = ::Array_obj< ::Dynamic>::__new(22)->init(0,::_TrilateralLines::TrilateralLines_Fields__obj::shape1)->init(1,::_TrilateralLines::TrilateralLines_Fields__obj::shape2)->init(2,::_TrilateralLines::TrilateralLines_Fields__obj::shape3)->init(3,::_TrilateralLines::TrilateralLines_Fields__obj::shape4)->init(4,::_TrilateralLines::TrilateralLines_Fields__obj::shape5)->init(5,::_TrilateralLines::TrilateralLines_Fields__obj::shape6)->init(6,::_TrilateralLines::TrilateralLines_Fields__obj::shape7)->init(7,::_TrilateralLines::TrilateralLines_Fields__obj::shape8)->init(8,::_TrilateralLines::TrilateralLines_Fields__obj::shape9)->init(9,::_TrilateralLines::TrilateralLines_Fields__obj::shape10)->init(10,::_TrilateralLines::TrilateralLines_Fields__obj::shape11)->init(11,::_TrilateralLines::TrilateralLines_Fields__obj::shape12)->init(12,::_TrilateralLines::TrilateralLines_Fields__obj::shape13)->init(13,::_TrilateralLines::TrilateralLines_Fields__obj::shape14)->init(14,::_TrilateralLines::TrilateralLines_Fields__obj::shape15)->init(15,::_TrilateralLines::TrilateralLines_Fields__obj::shape16)->init(16,::_TrilateralLines::TrilateralLines_Fields__obj::shape17)->init(17,::_TrilateralLines::TrilateralLines_Fields__obj::shape18)->init(18,::_TrilateralLines::TrilateralLines_Fields__obj::shape19)->init(19,::_TrilateralLines::TrilateralLines_Fields__obj::shape20)->init(20,::_TrilateralLines::TrilateralLines_Fields__obj::shape21)->init(21,::_TrilateralLines::TrilateralLines_Fields__obj::shape22);
HXLINE(  63)		this->pen->currentColor = -65536;
HXLINE(  64)		{
HXLINE(  64)			int _g = 0;
HXDLIN(  64)			while((_g < shapes->length)){
HXLINE(  64)				::Array< Float > si = shapes->__get(_g).StaticCast< ::Array< Float > >();
HXDLIN(  64)				_g = (_g + 1);
HXLINE(  65)				sketch->moveTo((this->dx + (si->__get(0) * this->scaleX)),((this->dy + (( (Float)(500) ) * this->scaleY)) - (si->__get(1) * this->scaleY)));
HXLINE(  67)				{
HXLINE(  67)					int _g1 = 1;
HXDLIN(  67)					int _g2 = ::Math_obj::round((( (Float)(si->length) ) / ( (Float)(2) )));
HXDLIN(  67)					while((_g1 < _g2)){
HXLINE(  67)						_g1 = (_g1 + 1);
HXDLIN(  67)						int i = (_g1 - 1);
HXLINE(  68)						{
HXLINE(  68)							Float x_ = (this->dx + (si->__get((i * 2)) * this->scaleX));
HXDLIN(  68)							Float y_ = ((this->dy + (( (Float)(500) ) * this->scaleY)) - (si->__get(((i * 2) + 1)) * this->scaleY));
HXDLIN(  68)							bool repeat;
HXDLIN(  68)							if ((sketch->x == x_)) {
HXLINE(  68)								repeat = (sketch->y == y_);
            							}
            							else {
HXLINE(  68)								repeat = false;
            							}
HXDLIN(  68)							if (!(repeat)) {
HXLINE(  68)								if (::hx::IsNotNull( sketch->widthFunction )) {
HXLINE(  68)									sketch->width = ( (Float)(sketch->widthFunction(sketch->width,sketch->x,sketch->y,x_,y_)) );
            								}
HXDLIN(  68)								if (::hx::IsNotNull( sketch->colourFunction )) {
HXLINE(  68)									sketch->pen->currentColor = ( (int)(sketch->colourFunction(sketch->pen->currentColor,sketch->x,sketch->y,x_,y_)) );
            								}
HXDLIN(  68)								sketch->line(x_,y_);
HXDLIN(  68)								int l = sketch->points->length;
HXDLIN(  68)								::Array< Float > p = sketch->points->__get((l - 1)).StaticCast< ::Array< Float > >();
HXDLIN(  68)								int l2 = p->length;
HXDLIN(  68)								p[l2] = x_;
HXDLIN(  68)								p[(l2 + 1)] = y_;
HXDLIN(  68)								{
HXLINE(  68)									 ::Dynamic d = sketch->dim->__get((sketch->dim->length - 1));
HXDLIN(  68)									if (::hx::IsLess( x_,d->__Field(HX_("minX",86,4e,5c,48),::hx::paccDynamic) )) {
HXLINE(  68)										d->__SetField(HX_("minX",86,4e,5c,48),x_,::hx::paccDynamic);
            									}
HXDLIN(  68)									if (::hx::IsGreater( x_,d->__Field(HX_("maxX",34,45,56,48),::hx::paccDynamic) )) {
HXLINE(  68)										d->__SetField(HX_("maxX",34,45,56,48),x_,::hx::paccDynamic);
            									}
HXDLIN(  68)									if (::hx::IsLess( y_,d->__Field(HX_("minY",87,4e,5c,48),::hx::paccDynamic) )) {
HXLINE(  68)										d->__SetField(HX_("minY",87,4e,5c,48),y_,::hx::paccDynamic);
            									}
HXDLIN(  68)									if (::hx::IsGreater( y_,d->__Field(HX_("maxY",35,45,56,48),::hx::paccDynamic) )) {
HXLINE(  68)										d->__SetField(HX_("maxY",35,45,56,48),y_,::hx::paccDynamic);
            									}
            								}
HXDLIN(  68)								sketch->x = x_;
HXDLIN(  68)								sketch->y = y_;
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrilateralLines_obj,draw,(void))


::hx::ObjectPtr< TrilateralLines_obj > TrilateralLines_obj::__new( ::gluon::webgl::native::GLContext gl) {
	::hx::ObjectPtr< TrilateralLines_obj > __this = new TrilateralLines_obj();
	__this->__construct(gl);
	return __this;
}

::hx::ObjectPtr< TrilateralLines_obj > TrilateralLines_obj::__alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext gl) {
	TrilateralLines_obj *__this = (TrilateralLines_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralLines_obj), true, "TrilateralLines"));
	*(void **)__this = TrilateralLines_obj::_hx_vtable;
	__this->__construct(gl);
	return __this;
}

TrilateralLines_obj::TrilateralLines_obj()
{
}

void TrilateralLines_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrilateralLines);
	HX_MARK_MEMBER_NAME(pen,"pen");
	HX_MARK_MEMBER_NAME(penNodule,"penNodule");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	 ::kitGL::gluon::InterleaveAlterGL_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrilateralLines_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pen,"pen");
	HX_VISIT_MEMBER_NAME(penNodule,"penNodule");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	 ::kitGL::gluon::InterleaveAlterGL_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrilateralLines_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { return ::hx::Val( pen ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"penNodule") ) { return ::hx::Val( penNodule ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TrilateralLines_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pen") ) { pen=inValue.Cast<  ::trilateral3::drawing::Pen >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"penNodule") ) { penNodule=inValue.Cast<  ::trilateral3::nodule::PenNodule >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrilateralLines_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pen",d9,54,55,00));
	outFields->push(HX_("penNodule",c4,02,81,14));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrilateralLines_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::trilateral3::drawing::Pen */ ,(int)offsetof(TrilateralLines_obj,pen),HX_("pen",d9,54,55,00)},
	{::hx::fsObject /*  ::trilateral3::nodule::PenNodule */ ,(int)offsetof(TrilateralLines_obj,penNodule),HX_("penNodule",c4,02,81,14)},
	{::hx::fsInt,(int)offsetof(TrilateralLines_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsInt,(int)offsetof(TrilateralLines_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsFloat,(int)offsetof(TrilateralLines_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(TrilateralLines_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrilateralLines_obj_sStaticStorageInfo = 0;
#endif

static ::String TrilateralLines_obj_sMemberFields[] = {
	HX_("pen",d9,54,55,00),
	HX_("penNodule",c4,02,81,14),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class TrilateralLines_obj::__mClass;

void TrilateralLines_obj::__register()
{
	TrilateralLines_obj _hx_dummy;
	TrilateralLines_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrilateralLines",93,bd,8b,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrilateralLines_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrilateralLines_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrilateralLines_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrilateralLines_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

