// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_pallette_utils_CYMKA
#include <pallette/utils/CYMKA.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bbc907302984f44d_6_new,"pallette.utils.CYMKA","new",0x66bdd985,"pallette.utils.CYMKA.new","pallette/utils/CYMKA.hx",6,0x4f21864d)
namespace pallette{
namespace utils{

void CYMKA_obj::__construct(Float c,Float y,Float m,Float k, ::Dynamic a){
            	HX_STACKFRAME(&_hx_pos_bbc907302984f44d_6_new)
HXLINE(  11)		this->a = ((Float)1.);
HXLINE(  10)		this->k = ((Float)0.);
HXLINE(   9)		this->m = ((Float)0.);
HXLINE(   8)		this->y = ((Float)0.);
HXLINE(   7)		this->c = ((Float)0.);
HXLINE(  13)		this->c = c;
HXLINE(  14)		this->y = y;
HXLINE(  15)		this->m = m;
HXLINE(  16)		this->k = k;
HXLINE(  17)		if (::hx::IsNotNull( a )) {
HXLINE(  17)			this->a = ( (Float)(a) );
            		}
            	}

Dynamic CYMKA_obj::__CreateEmpty() { return new CYMKA_obj; }

void *CYMKA_obj::_hx_vtable = 0;

Dynamic CYMKA_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CYMKA_obj > _hx_result = new CYMKA_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CYMKA_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e24d16d;
}


CYMKA_obj::CYMKA_obj()
{
}

::hx::Val CYMKA_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"m") ) { return ::hx::Val( m ); }
		if (HX_FIELD_EQ(inName,"k") ) { return ::hx::Val( k ); }
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CYMKA_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"k") ) { k=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CYMKA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("c",63,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("m",6d,00,00,00));
	outFields->push(HX_("k",6b,00,00,00));
	outFields->push(HX_("a",61,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CYMKA_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(CYMKA_obj,c),HX_("c",63,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CYMKA_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CYMKA_obj,m),HX_("m",6d,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CYMKA_obj,k),HX_("k",6b,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CYMKA_obj,a),HX_("a",61,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CYMKA_obj_sStaticStorageInfo = 0;
#endif

static ::String CYMKA_obj_sMemberFields[] = {
	HX_("c",63,00,00,00),
	HX_("y",79,00,00,00),
	HX_("m",6d,00,00,00),
	HX_("k",6b,00,00,00),
	HX_("a",61,00,00,00),
	::String(null()) };

::hx::Class CYMKA_obj::__mClass;

void CYMKA_obj::__register()
{
	CYMKA_obj _hx_dummy;
	CYMKA_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pallette.utils.CYMKA",13,b3,0f,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CYMKA_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CYMKA_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CYMKA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CYMKA_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pallette
} // end namespace utils