// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_trilateral3_structure_TriInt
#include <trilateral3/structure/TriInt.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d0d3138687c187a_7_new,"trilateral3.structure.TriInt","new",0xc64e6db8,"trilateral3.structure.TriInt.new","trilateral3/structure/TriInt.hx",7,0xa6ffcd36)
namespace trilateral3{
namespace structure{

void TriInt_obj::__construct(int a,int b,int c){
            	HX_STACKFRAME(&_hx_pos_8d0d3138687c187a_7_new)
HXLINE(   8)		this->a = a;
HXLINE(   9)		this->b = b;
HXLINE(  10)		this->c = c;
            	}

Dynamic TriInt_obj::__CreateEmpty() { return new TriInt_obj; }

void *TriInt_obj::_hx_vtable = 0;

Dynamic TriInt_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TriInt_obj > _hx_result = new TriInt_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TriInt_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b1fa8f0;
}


TriInt_obj::TriInt_obj()
{
}

::hx::Val TriInt_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"c") ) { return ::hx::Val( c ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TriInt_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TriInt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("c",63,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TriInt_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TriInt_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsInt,(int)offsetof(TriInt_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(TriInt_obj,c),HX_("c",63,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TriInt_obj_sStaticStorageInfo = 0;
#endif

static ::String TriInt_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("b",62,00,00,00),
	HX_("c",63,00,00,00),
	::String(null()) };

::hx::Class TriInt_obj::__mClass;

void TriInt_obj::__register()
{
	TriInt_obj _hx_dummy;
	TriInt_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.structure.TriInt",c6,71,2f,9b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TriInt_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TriInt_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TriInt_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TriInt_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace trilateral3
} // end namespace structure