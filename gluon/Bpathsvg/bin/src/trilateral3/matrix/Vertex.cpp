// Generated by Haxe 4.2.0-rc.1+3ef20749a
#include <hxcpp.h>

#ifndef INCLUDED_trilateral3_matrix_Vertex
#include <trilateral3/matrix/Vertex.h>
#endif

namespace trilateral3{
namespace matrix{

void Vertex_obj::__construct(Float x,Float y,Float z,::hx::Null< Float >  __o_w){
	Float w = __o_w.Default(((Float)1.));
	this->w = ((Float)1.);
	this->z = ((Float)0.);
	this->y = ((Float)0.);
	this->x = ((Float)0.);
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Dynamic Vertex_obj::__CreateEmpty() { return new Vertex_obj; }

void *Vertex_obj::_hx_vtable = 0;

Dynamic Vertex_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Vertex_obj > _hx_result = new Vertex_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Vertex_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e1fe58c;
}


Vertex_obj::Vertex_obj()
{
}

::hx::Val Vertex_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return ::hx::Val( z ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Vertex_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vertex_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Vertex_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Vertex_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vertex_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vertex_obj,z),HX_("z",7a,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Vertex_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Vertex_obj_sStaticStorageInfo = 0;
#endif

static ::String Vertex_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("w",77,00,00,00),
	::String(null()) };

::hx::Class Vertex_obj::__mClass;

void Vertex_obj::__register()
{
	Vertex_obj _hx_dummy;
	Vertex_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.matrix.Vertex",6a,f1,3e,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Vertex_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Vertex_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vertex_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vertex_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace trilateral3
} // end namespace matrix
