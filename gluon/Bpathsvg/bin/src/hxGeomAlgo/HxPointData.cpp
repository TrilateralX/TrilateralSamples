// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_hxGeomAlgo_HxPointData
#include <hxGeomAlgo/HxPointData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8698f2598d366615_77_new,"hxGeomAlgo.HxPointData","new",0x2cbd18ad,"hxGeomAlgo.HxPointData.new","hxGeomAlgo/HxPoint.hx",77,0x186b7b2e)
namespace hxGeomAlgo{

void HxPointData_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_8698f2598d366615_77_new)
HXLINE(  78)		this->x = x;
HXLINE(  79)		this->y = y;
            	}

Dynamic HxPointData_obj::__CreateEmpty() { return new HxPointData_obj; }

void *HxPointData_obj::_hx_vtable = 0;

Dynamic HxPointData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HxPointData_obj > _hx_result = new HxPointData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HxPointData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3eb86fa7;
}


HxPointData_obj::HxPointData_obj()
{
}

::hx::Val HxPointData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HxPointData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HxPointData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HxPointData_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HxPointData_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HxPointData_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HxPointData_obj_sStaticStorageInfo = 0;
#endif

static ::String HxPointData_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class HxPointData_obj::__mClass;

void HxPointData_obj::__register()
{
	HxPointData_obj _hx_dummy;
	HxPointData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxGeomAlgo.HxPointData",3b,3e,66,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HxPointData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HxPointData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HxPointData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HxPointData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxGeomAlgo
