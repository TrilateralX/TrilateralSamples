// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_justPath__EllipseArc_ConverterArc_Impl_
#include <justPath/_EllipseArc/ConverterArc_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ccee667d273d3238_67__new,"justPath._EllipseArc.ConverterArc_Impl_","_new",0xfa3a46e5,"justPath._EllipseArc.ConverterArc_Impl_._new","justPath/EllipseArc.hx",67,0x3416572c)
HX_LOCAL_STACK_FRAME(_hx_pos_ccee667d273d3238_140_zeroto2pi,"justPath._EllipseArc.ConverterArc_Impl_","zeroto2pi",0x78ee1be4,"justPath._EllipseArc.ConverterArc_Impl_.zeroto2pi","justPath/EllipseArc.hx",140,0x3416572c)
namespace justPath{
namespace _EllipseArc{

void ConverterArc_Impl__obj::__construct() { }

Dynamic ConverterArc_Impl__obj::__CreateEmpty() { return new ConverterArc_Impl__obj; }

void *ConverterArc_Impl__obj::_hx_vtable = 0;

Dynamic ConverterArc_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConverterArc_Impl__obj > _hx_result = new ConverterArc_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConverterArc_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c93f870;
}

 ::Dynamic ConverterArc_Impl__obj::_new(Float sx,Float sy,Float xr,Float yr,Float phi,int large,int sweep,Float ex,Float ey){
            	HX_STACKFRAME(&_hx_pos_ccee667d273d3238_67__new)
HXLINE(  69)		Float mx = ((sx - ex) / ( (Float)(2) ));
HXLINE(  70)		Float my = ((sy - ey) / ( (Float)(2) ));
HXLINE(  72)		Float ax = ((sx + ex) / ( (Float)(2) ));
HXLINE(  73)		Float ay = ((sy + ey) / ( (Float)(2) ));
HXLINE(  76)		phi = ::hx::Mod(phi,360);
HXLINE(  77)		phi = ((phi * ::Math_obj::PI) / ( (Float)(180) ));
HXLINE(  78)		Float sin = ::Math_obj::sin(phi);
HXLINE(  79)		Float cos = ::Math_obj::cos(phi);
HXLINE(  81)		Float x1 = ((mx * cos) + (my * sin));
HXLINE(  82)		Float y1 = ((-(mx) * sin) + (my * cos));
HXLINE(  84)		Float rx = ::Math_obj::abs(xr);
HXLINE(  85)		Float ry = ::Math_obj::abs(yr);
HXLINE(  86)		Float rxx = (rx * rx);
HXLINE(  87)		Float ryy = (ry * ry);
HXLINE(  88)		Float xx1 = (x1 * x1);
HXLINE(  89)		Float yy1 = (y1 * y1);
HXLINE(  90)		Float check = ((xx1 / rxx) + (yy1 / ryy));
HXLINE(  91)		if ((check > 1)) {
HXLINE(  92)			rx = (rx * ::Math_obj::sqrt(check));
HXLINE(  93)			ry = (ry * ::Math_obj::sqrt(check));
HXLINE(  94)			rxx = (rx * rx);
HXLINE(  95)			ryy = (ry * ry);
            		}
HXLINE(  98)		int sign;
HXDLIN(  98)		if ((large == sweep)) {
HXLINE(  98)			sign = -1;
            		}
            		else {
HXLINE(  98)			sign = 1;
            		}
HXLINE(  99)		Float sq = ((((rxx * ryy) - (rxx * yy1)) - (ryy * xx1)) / ((rxx * yy1) + (ryy * xx1)));
HXLINE( 100)		if ((sq < 0)) {
HXLINE( 100)			sq = ( (Float)(0) );
            		}
HXLINE( 101)		Float coef = (( (Float)(sign) ) * ::Math_obj::sqrt(sq));
HXLINE( 102)		Float cx1 = (((coef * rx) * y1) / ry);
HXLINE( 103)		Float cy1 = (((-(coef) * ry) * x1) / rx);
HXLINE( 104)		Float cx = ((ax + (cx1 * cos)) - (cy1 * sin));
HXLINE( 105)		Float cy = ((ay + (cx1 * sin)) + (cy1 * cos));
HXLINE( 107)		Float phiSin = ::Math_obj::sin(-(phi));
HXLINE( 108)		Float phiCos = ::Math_obj::cos(-(phi));
HXLINE( 109)		sx = (sx - cx);
HXLINE( 110)		sy = (sy - cy);
HXLINE( 111)		Float dx = sx;
HXLINE( 112)		Float dy = sy;
HXLINE( 113)		sx = ((dx * phiCos) - (dy * phiSin));
HXLINE( 114)		sy = ((dx * phiSin) + (dy * phiCos));
HXLINE( 115)		sx = (sx + cx);
HXLINE( 116)		sy = (sy + cy);
HXLINE( 117)		ex = (ex - cx);
HXLINE( 118)		ey = (ey - cy);
HXLINE( 119)		Float dx1 = ex;
HXLINE( 120)		Float dy1 = ey;
HXLINE( 121)		ex = ((dx1 * phiCos) - (dy1 * phiSin));
HXLINE( 122)		ey = ((dx1 * phiSin) + (dy1 * phiCos));
HXLINE( 123)		ex = (ex + cx);
HXLINE( 124)		ey = (ey + cy);
HXLINE( 126)		Float alpha = (::Math_obj::atan2((rx * (cy - sy)),(ry * (cx - sx))) - ::Math_obj::PI);
HXLINE( 127)		Float omega = (::Math_obj::atan2((rx * (cy - ey)),(ry * (cx - ex))) - ::Math_obj::PI);
HXLINE( 128)		Float delta = (alpha - omega);
HXLINE( 130)		bool _hx_tmp;
HXDLIN( 130)		if ((sweep == 1)) {
HXLINE( 130)			_hx_tmp = (delta > 0);
            		}
            		else {
HXLINE( 130)			_hx_tmp = false;
            		}
HXDLIN( 130)		if (_hx_tmp) {
HXLINE( 131)			delta = (delta - (( (Float)(2) ) * ::Math_obj::PI));
            		}
            		else {
HXLINE( 132)			bool _hx_tmp;
HXDLIN( 132)			if ((sweep == 0)) {
HXLINE( 132)				_hx_tmp = (delta < 0);
            			}
            			else {
HXLINE( 132)				_hx_tmp = false;
            			}
HXDLIN( 132)			if (_hx_tmp) {
HXLINE( 133)				delta = (delta + (( (Float)(2) ) * ::Math_obj::PI));
            			}
            		}
HXLINE(  67)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(10)
            			->setFixed(0,HX_("delta",f8,e7,26,d7),-(delta))
            			->setFixed(1,HX_("phiCos",56,5d,3f,ef),::Math_obj::cos(phi))
            			->setFixed(2,HX_("phiSin",27,7c,4b,ef),::Math_obj::sin(phi))
            			->setFixed(3,HX_("cx",b5,56,00,00),cx)
            			->setFixed(4,HX_("cy",b6,56,00,00),cy)
            			->setFixed(5,HX_("rx",c6,63,00,00),rx)
            			->setFixed(6,HX_("ry",c7,63,00,00),ry)
            			->setFixed(7,HX_("phi",71,57,55,00),phi)
            			->setFixed(8,HX_("alpha",5e,a7,96,21),alpha)
            			->setFixed(9,HX_("omega",61,a3,d3,31),omega));
HXDLIN(  67)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ConverterArc_Impl__obj,_new,return )

Float ConverterArc_Impl__obj::zeroto2pi(Float angle){
            	HX_STACKFRAME(&_hx_pos_ccee667d273d3238_140_zeroto2pi)
HXDLIN( 140)		bool _hx_tmp;
HXDLIN( 140)		if ((angle >= 0)) {
HXDLIN( 140)			_hx_tmp = (angle > ::Math_obj::PI);
            		}
            		else {
HXDLIN( 140)			_hx_tmp = false;
            		}
HXDLIN( 140)		if (_hx_tmp) {
HXLINE( 141)			return angle;
            		}
            		else {
HXLINE( 143)			Float a = ::hx::Mod(angle,(( (Float)(2) ) * ::Math_obj::PI));
HXLINE( 144)			if ((a >= 0)) {
HXLINE( 144)				return a;
            			}
            			else {
HXLINE( 144)				return (a + (( (Float)(2) ) * ::Math_obj::PI));
            			}
            		}
HXLINE( 140)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConverterArc_Impl__obj,zeroto2pi,return )


ConverterArc_Impl__obj::ConverterArc_Impl__obj()
{
}

bool ConverterArc_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zeroto2pi") ) { outValue = zeroto2pi_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ConverterArc_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ConverterArc_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ConverterArc_Impl__obj::__mClass;

static ::String ConverterArc_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("zeroto2pi",e8,4b,1f,12),
	::String(null())
};

void ConverterArc_Impl__obj::__register()
{
	ConverterArc_Impl__obj _hx_dummy;
	ConverterArc_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath._EllipseArc.ConverterArc_Impl_",6a,9d,0e,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ConverterArc_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ConverterArc_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ConverterArc_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConverterArc_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConverterArc_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace justPath
} // end namespace _EllipseArc
