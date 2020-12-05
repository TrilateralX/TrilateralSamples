// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_kitGL_glLime_Shader
#include <kitGL/glLime/Shader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c2b4fb6979ef7923_102_new,"kitGL.glLime.Shader","new",0xff963a58,"kitGL.glLime.Shader.new","kitGL/glLime/Shaders.hx",102,0xc043bfb1)
namespace kitGL{
namespace glLime{

void Shader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c2b4fb6979ef7923_102_new)
HXLINE( 110)		this->fragmentTexture_ = ((((HX_("varying vec2 vTexCoord;",a9,1f,fd,58) + HX_("uniform sampler2D uImage0;",a3,6f,63,d1)) + HX_("void main (void) {",c3,89,11,26)) + HX_("gl_FragColor = texture2D( uImage0, vTexCoord );",93,60,c7,5c)) + HX_("}",7d,00,00,00));
HXLINE( 109)		this->vertexTexture_ = (((((((HX_("attribute vec2 aVertexPosition;",0b,a8,4b,46) + HX_("attribute vec2 aTexCoord;",0a,16,fd,45)) + HX_("uniform mat4 uMatrix;",05,7f,15,4c)) + HX_("varying vec2 vTexCoord;",a9,1f,fd,58)) + HX_("void main (void) {",c3,89,11,26)) + HX_("vTexCoord = aTexCoord;",4b,57,a5,83)) + HX_("gl_Position = uMatrix * vec4 (aVertexPosition, 0.0, 1.0);",d9,20,33,7c)) + HX_("}",7d,00,00,00));
HXLINE( 108)		this->fragmentColor_ = (((HX_("varying vec4 vcol;",61,c8,5b,03) + HX_("void main(void) {",4d,18,fb,21)) + HX_("gl_FragColor = vcol;",05,df,af,ee)) + HX_("}",7d,00,00,00));
HXLINE( 107)		this->vertexColor_ = (((((((HX_("attribute vec3 vertexPosition;",31,27,01,79) + HX_("attribute vec4 vertexColor;",b8,a7,4a,43)) + HX_("varying vec4 vcol;",61,c8,5b,03)) + HX_("uniform mat4 modelViewProjection;",de,e0,6d,6f)) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_Position = modelViewProjection * vec4(vertexPosition, 1.);",ff,9f,7d,12)) + HX_(" vcol = vertexColor;",75,ef,b6,2e)) + HX_("}",7d,00,00,00));
HXLINE( 106)		this->fragmentString0_ = (((HX_("varying vec4 vcol;",61,c8,5b,03) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_FragColor = vcol;",25,af,1c,24)) + HX_("}",7d,00,00,00));
HXLINE( 105)		this->vertexString0_ = ((((((HX_("attribute vec3 vertexPosition;",31,27,01,79) + HX_("attribute vec4 vertexColor;",b8,a7,4a,43)) + HX_("varying vec4 vcol;",61,c8,5b,03)) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_Position = vec4(vertexPosition, 1.0);",1c,0c,87,98)) + HX_(" vcol = vertexColor;",75,ef,b6,2e)) + HX_("}",7d,00,00,00));
HXLINE( 104)		this->fragmentSimpleColor_ = (((HX_("varying vec3 vColor;",7d,46,f2,c9) + HX_("void main() {",a1,5c,71,87)) + HX_("gl_FragColor = vec4( vColor, 1.0 );",04,06,e8,8c)) + HX_("}",7d,00,00,00));
HXLINE( 103)		this->vertexSimpleColor_ = ((((((HX_("attribute vec2 vertexPosition;",30,55,0d,f6) + HX_("attribute vec3 vertexColor;",59,54,9d,80)) + HX_("varying vec3 vColor;",7d,46,f2,c9)) + HX_("void main() {",a1,5c,71,87)) + HX_("gl_Position = vec4(vertexPosition, 0.0, 1.0);",48,9e,07,fd)) + HX_("vColor = vertexColor;",72,7f,c3,40)) + HX_("}",7d,00,00,00));
            	}

Dynamic Shader_obj::__CreateEmpty() { return new Shader_obj; }

void *Shader_obj::_hx_vtable = 0;

Dynamic Shader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Shader_obj > _hx_result = new Shader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Shader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5a0f6e9a;
}


Shader_obj::Shader_obj()
{
}

void Shader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shader);
	HX_MARK_MEMBER_NAME(vertexSimpleColor_,"vertexSimpleColor_");
	HX_MARK_MEMBER_NAME(fragmentSimpleColor_,"fragmentSimpleColor_");
	HX_MARK_MEMBER_NAME(vertexString0_,"vertexString0_");
	HX_MARK_MEMBER_NAME(fragmentString0_,"fragmentString0_");
	HX_MARK_MEMBER_NAME(vertexColor_,"vertexColor_");
	HX_MARK_MEMBER_NAME(fragmentColor_,"fragmentColor_");
	HX_MARK_MEMBER_NAME(vertexTexture_,"vertexTexture_");
	HX_MARK_MEMBER_NAME(fragmentTexture_,"fragmentTexture_");
	HX_MARK_END_CLASS();
}

void Shader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertexSimpleColor_,"vertexSimpleColor_");
	HX_VISIT_MEMBER_NAME(fragmentSimpleColor_,"fragmentSimpleColor_");
	HX_VISIT_MEMBER_NAME(vertexString0_,"vertexString0_");
	HX_VISIT_MEMBER_NAME(fragmentString0_,"fragmentString0_");
	HX_VISIT_MEMBER_NAME(vertexColor_,"vertexColor_");
	HX_VISIT_MEMBER_NAME(fragmentColor_,"fragmentColor_");
	HX_VISIT_MEMBER_NAME(vertexTexture_,"vertexTexture_");
	HX_VISIT_MEMBER_NAME(fragmentTexture_,"fragmentTexture_");
}

::hx::Val Shader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"vertexColor_") ) { return ::hx::Val( vertexColor_ ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertexString0_") ) { return ::hx::Val( vertexString0_ ); }
		if (HX_FIELD_EQ(inName,"fragmentColor_") ) { return ::hx::Val( fragmentColor_ ); }
		if (HX_FIELD_EQ(inName,"vertexTexture_") ) { return ::hx::Val( vertexTexture_ ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fragmentString0_") ) { return ::hx::Val( fragmentString0_ ); }
		if (HX_FIELD_EQ(inName,"fragmentTexture_") ) { return ::hx::Val( fragmentTexture_ ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexSimpleColor_") ) { return ::hx::Val( vertexSimpleColor_ ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fragmentSimpleColor_") ) { return ::hx::Val( fragmentSimpleColor_ ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Shader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"vertexColor_") ) { vertexColor_=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"vertexString0_") ) { vertexString0_=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentColor_") ) { fragmentColor_=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vertexTexture_") ) { vertexTexture_=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fragmentString0_") ) { fragmentString0_=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fragmentTexture_") ) { fragmentTexture_=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"vertexSimpleColor_") ) { vertexSimpleColor_=inValue.Cast< ::String >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fragmentSimpleColor_") ) { fragmentSimpleColor_=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertexSimpleColor_",f2,1c,4e,b4));
	outFields->push(HX_("fragmentSimpleColor_",5e,93,56,66));
	outFields->push(HX_("vertexString0_",c4,84,42,61));
	outFields->push(HX_("fragmentString0_",30,55,dc,4a));
	outFields->push(HX_("vertexColor_",20,b8,9b,66));
	outFields->push(HX_("fragmentColor_",8c,55,42,e3));
	outFields->push(HX_("vertexTexture_",a8,92,e8,ea));
	outFields->push(HX_("fragmentTexture_",14,63,82,d4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Shader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Shader_obj,vertexSimpleColor_),HX_("vertexSimpleColor_",f2,1c,4e,b4)},
	{::hx::fsString,(int)offsetof(Shader_obj,fragmentSimpleColor_),HX_("fragmentSimpleColor_",5e,93,56,66)},
	{::hx::fsString,(int)offsetof(Shader_obj,vertexString0_),HX_("vertexString0_",c4,84,42,61)},
	{::hx::fsString,(int)offsetof(Shader_obj,fragmentString0_),HX_("fragmentString0_",30,55,dc,4a)},
	{::hx::fsString,(int)offsetof(Shader_obj,vertexColor_),HX_("vertexColor_",20,b8,9b,66)},
	{::hx::fsString,(int)offsetof(Shader_obj,fragmentColor_),HX_("fragmentColor_",8c,55,42,e3)},
	{::hx::fsString,(int)offsetof(Shader_obj,vertexTexture_),HX_("vertexTexture_",a8,92,e8,ea)},
	{::hx::fsString,(int)offsetof(Shader_obj,fragmentTexture_),HX_("fragmentTexture_",14,63,82,d4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Shader_obj_sStaticStorageInfo = 0;
#endif

static ::String Shader_obj_sMemberFields[] = {
	HX_("vertexSimpleColor_",f2,1c,4e,b4),
	HX_("fragmentSimpleColor_",5e,93,56,66),
	HX_("vertexString0_",c4,84,42,61),
	HX_("fragmentString0_",30,55,dc,4a),
	HX_("vertexColor_",20,b8,9b,66),
	HX_("fragmentColor_",8c,55,42,e3),
	HX_("vertexTexture_",a8,92,e8,ea),
	HX_("fragmentTexture_",14,63,82,d4),
	::String(null()) };

::hx::Class Shader_obj::__mClass;

void Shader_obj::__register()
{
	Shader_obj _hx_dummy;
	Shader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.glLime.Shader",66,6e,2c,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Shader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Shader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Shader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Shader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace glLime