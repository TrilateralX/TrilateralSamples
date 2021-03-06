// Generated by Haxe 4.3.0-rc.1+88ebbd0
#include <hxcpp.h>

#ifndef INCLUDED_hxGeomAlgo_HomogCoord
#include <hxGeomAlgo/HomogCoord.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb1251ebd74a6879_25_new,"hxGeomAlgo.HomogCoord","new",0x75c207f8,"hxGeomAlgo.HomogCoord.new","hxGeomAlgo/HomogCoord.hx",25,0x126a71d7)
namespace hxGeomAlgo{

void HomogCoord_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_w){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            		Float w = __o_w.Default(1);
            	HX_STACKFRAME(&_hx_pos_eb1251ebd74a6879_25_new)
HXLINE(  26)		this->x = x;
HXLINE(  27)		this->y = y;
HXLINE(  28)		this->w = w;
            	}

Dynamic HomogCoord_obj::__CreateEmpty() { return new HomogCoord_obj; }

void *HomogCoord_obj::_hx_vtable = 0;

Dynamic HomogCoord_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HomogCoord_obj > _hx_result = new HomogCoord_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HomogCoord_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a37bfb6;
}


HomogCoord_obj::HomogCoord_obj()
{
}

::hx::Val HomogCoord_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HomogCoord_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HomogCoord_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HomogCoord_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HomogCoord_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HomogCoord_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(HomogCoord_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HomogCoord_obj_sStaticStorageInfo = 0;
#endif

static ::String HomogCoord_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("w",77,00,00,00),
	::String(null()) };

::hx::Class HomogCoord_obj::__mClass;

void HomogCoord_obj::__register()
{
	HomogCoord_obj _hx_dummy;
	HomogCoord_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxGeomAlgo.HomogCoord",06,ec,b8,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HomogCoord_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HomogCoord_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HomogCoord_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HomogCoord_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxGeomAlgo
