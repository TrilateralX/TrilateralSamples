// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_trilateral3_math__Algebra_Algebra_Fields_
#include <trilateral3/math/_Algebra/Algebra_Fields_.h>
#endif

namespace trilateral3{
namespace math{
namespace _Algebra{

void Algebra_Fields__obj::__construct() { }

Dynamic Algebra_Fields__obj::__CreateEmpty() { return new Algebra_Fields__obj; }

void *Algebra_Fields__obj::_hx_vtable = 0;

Dynamic Algebra_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Algebra_Fields__obj > _hx_result = new Algebra_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Algebra_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7459f04b;
}

Float Algebra_Fields__obj::quadStep;


Algebra_Fields__obj::Algebra_Fields__obj()
{
}

bool Algebra_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { outValue = ( quadStep ); return true; }
	}
	return false;
}

bool Algebra_Fields__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { quadStep=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Algebra_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Algebra_Fields__obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Algebra_Fields__obj::quadStep,HX_("quadStep",b3,bb,78,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Algebra_Fields__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Algebra_Fields__obj::quadStep,"quadStep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Algebra_Fields__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Algebra_Fields__obj::quadStep,"quadStep");
};

#endif

::hx::Class Algebra_Fields__obj::__mClass;

static ::String Algebra_Fields__obj_sStaticFields[] = {
	HX_("quadStep",b3,bb,78,d4),
	::String(null())
};

void Algebra_Fields__obj::__register()
{
	Algebra_Fields__obj _hx_dummy;
	Algebra_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.math._Algebra.Algebra_Fields_",89,b5,e8,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Algebra_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &Algebra_Fields__obj::__SetStatic;
	__mClass->mMarkFunc = Algebra_Fields__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Algebra_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Algebra_Fields__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Algebra_Fields__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Algebra_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Algebra_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Algebra_Fields__obj::__boot()
{
{
	quadStep = ((Float)0.03);
}
}

} // end namespace trilateral3
} // end namespace math
} // end namespace _Algebra
