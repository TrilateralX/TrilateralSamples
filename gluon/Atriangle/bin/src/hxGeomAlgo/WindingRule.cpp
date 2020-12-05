// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_hxGeomAlgo_WindingRule
#include <hxGeomAlgo/WindingRule.h>
#endif
namespace hxGeomAlgo{

::hxGeomAlgo::WindingRule WindingRule_obj::ABS_GEQ_TWO;

::hxGeomAlgo::WindingRule WindingRule_obj::NEGATIVE;

::hxGeomAlgo::WindingRule WindingRule_obj::NON_ZERO;

::hxGeomAlgo::WindingRule WindingRule_obj::ODD;

::hxGeomAlgo::WindingRule WindingRule_obj::POSITIVE;

bool WindingRule_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ABS_GEQ_TWO",33,a8,3d,eb)) { outValue = WindingRule_obj::ABS_GEQ_TWO; return true; }
	if (inName==HX_("NEGATIVE",75,b6,c7,aa)) { outValue = WindingRule_obj::NEGATIVE; return true; }
	if (inName==HX_("NON_ZERO",fa,82,17,61)) { outValue = WindingRule_obj::NON_ZERO; return true; }
	if (inName==HX_("ODD",8f,2d,3c,00)) { outValue = WindingRule_obj::ODD; return true; }
	if (inName==HX_("POSITIVE",b9,36,80,24)) { outValue = WindingRule_obj::POSITIVE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(WindingRule_obj)

int WindingRule_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ABS_GEQ_TWO",33,a8,3d,eb)) return 4;
	if (inName==HX_("NEGATIVE",75,b6,c7,aa)) return 3;
	if (inName==HX_("NON_ZERO",fa,82,17,61)) return 1;
	if (inName==HX_("ODD",8f,2d,3c,00)) return 0;
	if (inName==HX_("POSITIVE",b9,36,80,24)) return 2;
	return super::__FindIndex(inName);
}

int WindingRule_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ABS_GEQ_TWO",33,a8,3d,eb)) return 0;
	if (inName==HX_("NEGATIVE",75,b6,c7,aa)) return 0;
	if (inName==HX_("NON_ZERO",fa,82,17,61)) return 0;
	if (inName==HX_("ODD",8f,2d,3c,00)) return 0;
	if (inName==HX_("POSITIVE",b9,36,80,24)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val WindingRule_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ABS_GEQ_TWO",33,a8,3d,eb)) return ABS_GEQ_TWO;
	if (inName==HX_("NEGATIVE",75,b6,c7,aa)) return NEGATIVE;
	if (inName==HX_("NON_ZERO",fa,82,17,61)) return NON_ZERO;
	if (inName==HX_("ODD",8f,2d,3c,00)) return ODD;
	if (inName==HX_("POSITIVE",b9,36,80,24)) return POSITIVE;
	return super::__Field(inName,inCallProp);
}

static ::String WindingRule_obj_sStaticFields[] = {
	HX_("ODD",8f,2d,3c,00),
	HX_("NON_ZERO",fa,82,17,61),
	HX_("POSITIVE",b9,36,80,24),
	HX_("NEGATIVE",75,b6,c7,aa),
	HX_("ABS_GEQ_TWO",33,a8,3d,eb),
	::String(null())
};

::hx::Class WindingRule_obj::__mClass;

Dynamic __Create_WindingRule_obj() { return new WindingRule_obj; }

void WindingRule_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("hxGeomAlgo.WindingRule",07,80,4b,2b), ::hx::TCanCast< WindingRule_obj >,WindingRule_obj_sStaticFields,0,
	&__Create_WindingRule_obj, &__Create,
	&super::__SGetClass(), &CreateWindingRule_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &WindingRule_obj::__GetStatic;
}

void WindingRule_obj::__boot()
{
ABS_GEQ_TWO = ::hx::CreateConstEnum< WindingRule_obj >(HX_("ABS_GEQ_TWO",33,a8,3d,eb),4);
NEGATIVE = ::hx::CreateConstEnum< WindingRule_obj >(HX_("NEGATIVE",75,b6,c7,aa),3);
NON_ZERO = ::hx::CreateConstEnum< WindingRule_obj >(HX_("NON_ZERO",fa,82,17,61),1);
ODD = ::hx::CreateConstEnum< WindingRule_obj >(HX_("ODD",8f,2d,3c,00),0);
POSITIVE = ::hx::CreateConstEnum< WindingRule_obj >(HX_("POSITIVE",b9,36,80,24),2);
}


} // end namespace hxGeomAlgo