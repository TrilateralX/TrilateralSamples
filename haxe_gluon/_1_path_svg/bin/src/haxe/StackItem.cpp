// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
namespace haxe{

::haxe::StackItem StackItem_obj::CFunction;

::haxe::StackItem StackItem_obj::FilePos( ::haxe::StackItem s,::String file,int line, ::Dynamic column)
{
	return ::hx::CreateEnum< StackItem_obj >(HX_("FilePos",58,a4,9d,cc),2,4)->_hx_init(0,s)->_hx_init(1,file)->_hx_init(2,line)->_hx_init(3,column);
}

::haxe::StackItem StackItem_obj::LocalFunction( ::Dynamic v)
{
	return ::hx::CreateEnum< StackItem_obj >(HX_("LocalFunction",83,63,3d,d5),4,1)->_hx_init(0,v);
}

::haxe::StackItem StackItem_obj::Method(::String classname,::String method)
{
	return ::hx::CreateEnum< StackItem_obj >(HX_("Method",01,6b,ef,3d),3,2)->_hx_init(0,classname)->_hx_init(1,method);
}

::haxe::StackItem StackItem_obj::Module(::String m)
{
	return ::hx::CreateEnum< StackItem_obj >(HX_("Module",cc,a8,67,f5),1,1)->_hx_init(0,m);
}

bool StackItem_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFunction",7b,e2,32,23)) { outValue = StackItem_obj::CFunction; return true; }
	if (inName==HX_("FilePos",58,a4,9d,cc)) { outValue = StackItem_obj::FilePos_dyn(); return true; }
	if (inName==HX_("LocalFunction",83,63,3d,d5)) { outValue = StackItem_obj::LocalFunction_dyn(); return true; }
	if (inName==HX_("Method",01,6b,ef,3d)) { outValue = StackItem_obj::Method_dyn(); return true; }
	if (inName==HX_("Module",cc,a8,67,f5)) { outValue = StackItem_obj::Module_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StackItem_obj)

int StackItem_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CFunction",7b,e2,32,23)) return 0;
	if (inName==HX_("FilePos",58,a4,9d,cc)) return 2;
	if (inName==HX_("LocalFunction",83,63,3d,d5)) return 4;
	if (inName==HX_("Method",01,6b,ef,3d)) return 3;
	if (inName==HX_("Module",cc,a8,67,f5)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(StackItem_obj,FilePos,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(StackItem_obj,LocalFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(StackItem_obj,Method,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(StackItem_obj,Module,return)

int StackItem_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CFunction",7b,e2,32,23)) return 0;
	if (inName==HX_("FilePos",58,a4,9d,cc)) return 4;
	if (inName==HX_("LocalFunction",83,63,3d,d5)) return 1;
	if (inName==HX_("Method",01,6b,ef,3d)) return 2;
	if (inName==HX_("Module",cc,a8,67,f5)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val StackItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CFunction",7b,e2,32,23)) return CFunction;
	if (inName==HX_("FilePos",58,a4,9d,cc)) return FilePos_dyn();
	if (inName==HX_("LocalFunction",83,63,3d,d5)) return LocalFunction_dyn();
	if (inName==HX_("Method",01,6b,ef,3d)) return Method_dyn();
	if (inName==HX_("Module",cc,a8,67,f5)) return Module_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String StackItem_obj_sStaticFields[] = {
	HX_("CFunction",7b,e2,32,23),
	HX_("Module",cc,a8,67,f5),
	HX_("FilePos",58,a4,9d,cc),
	HX_("Method",01,6b,ef,3d),
	HX_("LocalFunction",83,63,3d,d5),
	::String(null())
};

::hx::Class StackItem_obj::__mClass;

Dynamic __Create_StackItem_obj() { return new StackItem_obj; }

void StackItem_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.StackItem",13,26,c7,2d), ::hx::TCanCast< StackItem_obj >,StackItem_obj_sStaticFields,0,
	&__Create_StackItem_obj, &__Create,
	&super::__SGetClass(), &CreateStackItem_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StackItem_obj::__GetStatic;
}

void StackItem_obj::__boot()
{
CFunction = ::hx::CreateConstEnum< StackItem_obj >(HX_("CFunction",7b,e2,32,23),0);
}


} // end namespace haxe
