// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_TrilateralLimeLines
#include <TrilateralLimeLines.h>
#endif
#ifndef INCLUDED__TrilateralLimeLines_TrilateralLimeLines_Fields_
#include <_TrilateralLimeLines/TrilateralLimeLines_Fields_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
#ifndef INCLUDED_kitGL_glLime_InterleaveAlterGL
#include <kitGL/glLime/InterleaveAlterGL.h>
#endif
#ifndef INCLUDED_kitGL_glLime_setup_IAppGL
#include <kitGL/glLime/setup/IAppGL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2785c93c713d4abc_26_new,"TrilateralLimeLines","new",0x52d03c30,"TrilateralLimeLines.new","TrilateralLimeLines.hx",26,0x07425940)
HX_LOCAL_STACK_FRAME(_hx_pos_2785c93c713d4abc_40_draw,"TrilateralLimeLines","draw",0x1cd21634,"TrilateralLimeLines.draw","TrilateralLimeLines.hx",40,0x07425940)

void TrilateralLimeLines_obj::__construct(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_2785c93c713d4abc_26_new)
HXLINE(  38)		this->scaleY = ((Float)2.5);
HXLINE(  37)		this->scaleX = ((Float)2.5);
HXLINE(  36)		this->h = 550;
HXLINE(  35)		this->w = 400;
HXLINE(  34)		this->dy = 100;
HXLINE(  33)		this->dx = 200;
HXLINE(  28)		this->penNodule =  ::trilateral3::nodule::PenNodule_obj::__alloc( HX_CTX ,null());
HXLINE(  30)		super::__construct(width,height);
HXLINE(  31)		::haxe::Log_obj::trace(HX_("TrilateralLimeRotateMove",6d,54,41,43),::hx::SourceInfo(HX_("TrilateralLimeLines.hx",40,59,42,07),31,HX_("TrilateralLimeLines",3e,a4,1a,35),HX_("new",60,d0,53,00)));
            	}

Dynamic TrilateralLimeLines_obj::__CreateEmpty() { return new TrilateralLimeLines_obj; }

void *TrilateralLimeLines_obj::_hx_vtable = 0;

Dynamic TrilateralLimeLines_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrilateralLimeLines_obj > _hx_result = new TrilateralLimeLines_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TrilateralLimeLines_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01c3d3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c01c3d3;
	} else {
		return inClassId==(int)0x5752369a;
	}
}

void TrilateralLimeLines_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_2785c93c713d4abc_40_draw)
HXLINE(  41)		this->interleaveDataGL =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("get_data",b3,11,1e,c2),this->penNodule->get_data_dyn())
            			->setFixed(1,HX_("get_size",4a,5c,0e,cc),this->penNodule->get_size_dyn()));
HXLINE(  42)		this->pen = this->penNodule->pen;
HXLINE(  43)		 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,this->pen,2,0);
HXLINE(  44)		sketch->width = ((Float)1.7);
HXLINE(  45)		::Array< ::Dynamic> shapes = ::Array_obj< ::Dynamic>::__new(22)->init(0,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape1)->init(1,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape2)->init(2,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape3)->init(3,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape4)->init(4,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape5)->init(5,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape6)->init(6,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape7)->init(7,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape8)->init(8,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape9)->init(9,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape10)->init(10,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape11)->init(11,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape12)->init(12,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape13)->init(13,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape14)->init(14,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape15)->init(15,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape16)->init(16,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape17)->init(17,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape18)->init(18,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape19)->init(19,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape20)->init(20,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape21)->init(21,::_TrilateralLimeLines::TrilateralLimeLines_Fields__obj::shape22);
HXLINE(  67)		this->pen->currentColor = -65536;
HXLINE(  68)		{
HXLINE(  68)			int _g = 0;
HXDLIN(  68)			while((_g < shapes->length)){
HXLINE(  68)				::Array< Float > si = shapes->__get(_g).StaticCast< ::Array< Float > >();
HXDLIN(  68)				_g = (_g + 1);
HXLINE(  69)				sketch->moveTo((this->dx + (si->__get(0) * this->scaleX)),((this->dy + (( (Float)(500) ) * this->scaleY)) - (si->__get(1) * this->scaleY)));
HXLINE(  71)				{
HXLINE(  71)					int _g1 = 1;
HXDLIN(  71)					int _g2 = ::Math_obj::round((( (Float)(si->length) ) / ( (Float)(2) )));
HXDLIN(  71)					while((_g1 < _g2)){
HXLINE(  71)						_g1 = (_g1 + 1);
HXDLIN(  71)						int i = (_g1 - 1);
HXLINE(  72)						{
HXLINE(  72)							Float x_ = (this->dx + (si->__get((i * 2)) * this->scaleX));
HXDLIN(  72)							Float y_ = ((this->dy + (( (Float)(500) ) * this->scaleY)) - (si->__get(((i * 2) + 1)) * this->scaleY));
HXDLIN(  72)							bool repeat;
HXDLIN(  72)							if ((sketch->x == x_)) {
HXLINE(  72)								repeat = (sketch->y == y_);
            							}
            							else {
HXLINE(  72)								repeat = false;
            							}
HXDLIN(  72)							if (!(repeat)) {
HXLINE(  72)								if (::hx::IsNotNull( sketch->widthFunction )) {
HXLINE(  72)									sketch->width = ( (Float)(sketch->widthFunction(sketch->width,sketch->x,sketch->y,x_,y_)) );
            								}
HXDLIN(  72)								if (::hx::IsNotNull( sketch->colourFunction )) {
HXLINE(  72)									sketch->pen->currentColor = ( (int)(sketch->colourFunction(sketch->pen->currentColor,sketch->x,sketch->y,x_,y_)) );
            								}
HXDLIN(  72)								sketch->line(x_,y_);
HXDLIN(  72)								int l = sketch->points->length;
HXDLIN(  72)								::Array< Float > p = sketch->points->__get((l - 1)).StaticCast< ::Array< Float > >();
HXDLIN(  72)								int l2 = p->length;
HXDLIN(  72)								p[l2] = x_;
HXDLIN(  72)								p[(l2 + 1)] = y_;
HXDLIN(  72)								{
HXLINE(  72)									 ::Dynamic d = sketch->dim->__get((sketch->dim->length - 1));
HXDLIN(  72)									if (::hx::IsLess( x_,d->__Field(HX_("minX",86,4e,5c,48),::hx::paccDynamic) )) {
HXLINE(  72)										d->__SetField(HX_("minX",86,4e,5c,48),x_,::hx::paccDynamic);
            									}
HXDLIN(  72)									if (::hx::IsGreater( x_,d->__Field(HX_("maxX",34,45,56,48),::hx::paccDynamic) )) {
HXLINE(  72)										d->__SetField(HX_("maxX",34,45,56,48),x_,::hx::paccDynamic);
            									}
HXDLIN(  72)									if (::hx::IsLess( y_,d->__Field(HX_("minY",87,4e,5c,48),::hx::paccDynamic) )) {
HXLINE(  72)										d->__SetField(HX_("minY",87,4e,5c,48),y_,::hx::paccDynamic);
            									}
HXDLIN(  72)									if (::hx::IsGreater( y_,d->__Field(HX_("maxY",35,45,56,48),::hx::paccDynamic) )) {
HXLINE(  72)										d->__SetField(HX_("maxY",35,45,56,48),y_,::hx::paccDynamic);
            									}
            								}
HXDLIN(  72)								sketch->x = x_;
HXDLIN(  72)								sketch->y = y_;
            							}
            						}
            					}
            				}
            			}
            		}
            	}



::hx::ObjectPtr< TrilateralLimeLines_obj > TrilateralLimeLines_obj::__new(int width,int height) {
	::hx::ObjectPtr< TrilateralLimeLines_obj > __this = new TrilateralLimeLines_obj();
	__this->__construct(width,height);
	return __this;
}

::hx::ObjectPtr< TrilateralLimeLines_obj > TrilateralLimeLines_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height) {
	TrilateralLimeLines_obj *__this = (TrilateralLimeLines_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralLimeLines_obj), true, "TrilateralLimeLines"));
	*(void **)__this = TrilateralLimeLines_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

TrilateralLimeLines_obj::TrilateralLimeLines_obj()
{
}

void TrilateralLimeLines_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrilateralLimeLines);
	HX_MARK_MEMBER_NAME(pen,"pen");
	HX_MARK_MEMBER_NAME(penNodule,"penNodule");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	 ::kitGL::glLime::InterleaveAlterGL_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrilateralLimeLines_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pen,"pen");
	HX_VISIT_MEMBER_NAME(penNodule,"penNodule");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	 ::kitGL::glLime::InterleaveAlterGL_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrilateralLimeLines_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		break;
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

::hx::Val TrilateralLimeLines_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		break;
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

void TrilateralLimeLines_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pen",d9,54,55,00));
	outFields->push(HX_("penNodule",c4,02,81,14));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("w",77,00,00,00));
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrilateralLimeLines_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::trilateral3::drawing::Pen */ ,(int)offsetof(TrilateralLimeLines_obj,pen),HX_("pen",d9,54,55,00)},
	{::hx::fsObject /*  ::trilateral3::nodule::PenNodule */ ,(int)offsetof(TrilateralLimeLines_obj,penNodule),HX_("penNodule",c4,02,81,14)},
	{::hx::fsInt,(int)offsetof(TrilateralLimeLines_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsInt,(int)offsetof(TrilateralLimeLines_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsInt,(int)offsetof(TrilateralLimeLines_obj,w),HX_("w",77,00,00,00)},
	{::hx::fsInt,(int)offsetof(TrilateralLimeLines_obj,h),HX_("h",68,00,00,00)},
	{::hx::fsFloat,(int)offsetof(TrilateralLimeLines_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(TrilateralLimeLines_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrilateralLimeLines_obj_sStaticStorageInfo = 0;
#endif

static ::String TrilateralLimeLines_obj_sMemberFields[] = {
	HX_("pen",d9,54,55,00),
	HX_("penNodule",c4,02,81,14),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("w",77,00,00,00),
	HX_("h",68,00,00,00),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class TrilateralLimeLines_obj::__mClass;

void TrilateralLimeLines_obj::__register()
{
	TrilateralLimeLines_obj _hx_dummy;
	TrilateralLimeLines_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrilateralLimeLines",3e,a4,1a,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrilateralLimeLines_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrilateralLimeLines_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrilateralLimeLines_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrilateralLimeLines_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
