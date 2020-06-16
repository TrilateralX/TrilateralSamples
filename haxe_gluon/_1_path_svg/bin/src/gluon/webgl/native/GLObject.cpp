// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLObject
#include <gluon/webgl/native/GLObject.h>
#endif

namespace gluon{
namespace webgl{
namespace native{

void GLObject_obj::__construct( ::gluon::webgl::native::GLContext context,unsigned int handle){
	this->context = context;
	this->handle = handle;
	_hx_add_finalizable(::hx::ObjectPtr<OBJ_>(this),false);
}

Dynamic GLObject_obj::__CreateEmpty() { return new GLObject_obj; }

void *GLObject_obj::_hx_vtable = 0;

Dynamic GLObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLObject_obj > _hx_result = new GLObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6d90cfad;
}

void GLObject_obj::finalize(){
	this->handle = ( (unsigned int)(0) );
}


HX_DEFINE_DYNAMIC_FUNC0(GLObject_obj,finalize,(void))


::hx::ObjectPtr< GLObject_obj > GLObject_obj::__new( ::gluon::webgl::native::GLContext context,unsigned int handle) {
	::hx::ObjectPtr< GLObject_obj > __this = new GLObject_obj();
	__this->__construct(context,handle);
	return __this;
}

::hx::ObjectPtr< GLObject_obj > GLObject_obj::__alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext context,unsigned int handle) {
	GLObject_obj *__this = (GLObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLObject_obj), true, "gluon.webgl.native.GLObject"));
	*(void **)__this = GLObject_obj::_hx_vtable;
	__this->__construct(context,handle);
	return __this;
}

GLObject_obj::GLObject_obj()
{
}

void GLObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLObject);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void GLObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

::hx::Val GLObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return ::hx::Val( context ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finalize") ) { return ::hx::Val( finalize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GLObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< unsigned int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::gluon::webgl::native::GLContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("context",ef,95,77,19));
	outFields->push(HX_("handle",a8,83,fd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GLObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::gluon::webgl::native::GLContext */ ,(int)offsetof(GLObject_obj,context),HX_("context",ef,95,77,19)},
	{::hx::fsUnknown /* unsigned int */ ,(int)offsetof(GLObject_obj,handle),HX_("handle",a8,83,fd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GLObject_obj_sStaticStorageInfo = 0;
#endif

static ::String GLObject_obj_sMemberFields[] = {
	HX_("context",ef,95,77,19),
	HX_("handle",a8,83,fd,b7),
	HX_("finalize",9e,45,3a,f5),
	::String(null()) };

::hx::Class GLObject_obj::__mClass;

void GLObject_obj::__register()
{
	GLObject_obj _hx_dummy;
	GLObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gluon.webgl.native.GLObject",e7,d9,8e,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gluon
} // end namespace webgl
} // end namespace native
