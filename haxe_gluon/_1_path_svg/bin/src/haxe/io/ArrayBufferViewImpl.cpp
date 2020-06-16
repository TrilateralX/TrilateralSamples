// Generated by Haxe 4.2.0-rc.1+cb30bd580
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif

namespace haxe{
namespace io{

void ArrayBufferViewImpl_obj::__construct( ::haxe::io::Bytes bytes,int pos,int length){
	this->bytes = bytes;
	this->byteOffset = pos;
	this->byteLength = length;
}

Dynamic ArrayBufferViewImpl_obj::__CreateEmpty() { return new ArrayBufferViewImpl_obj; }

void *ArrayBufferViewImpl_obj::_hx_vtable = 0;

Dynamic ArrayBufferViewImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferViewImpl_obj > _hx_result = new ArrayBufferViewImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ArrayBufferViewImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa4dcf6;
}

 ::haxe::io::ArrayBufferViewImpl ArrayBufferViewImpl_obj::sub(int begin, ::Dynamic length){
            	HX_JUST_GC_STACKFRAME
	if (::hx::IsNull( length )) {
		length = (this->byteLength - begin);
	}
	bool _hx_tmp;
	bool _hx_tmp1;
	if ((begin >= 0)) {
		_hx_tmp1 = ::hx::IsLess( length,0 );
	}
	else {
		_hx_tmp1 = true;
	}
	if (!(_hx_tmp1)) {
		_hx_tmp = ((begin + length) > this->byteLength);
	}
	else {
		_hx_tmp = true;
	}
	if (_hx_tmp) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
	}
	return  ::haxe::io::ArrayBufferViewImpl_obj::__alloc( HX_CTX ,this->bytes,(this->byteOffset + begin),( (int)(length) ));
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferViewImpl_obj,sub,return )

 ::haxe::io::ArrayBufferViewImpl ArrayBufferViewImpl_obj::subarray( ::Dynamic begin, ::Dynamic end){
	if (::hx::IsNull( begin )) {
		begin = 0;
	}
	if (::hx::IsNull( end )) {
		end = (this->byteLength - ( (int)(begin) ));
	}
	return this->sub(( (int)(begin) ),(( (int)(end) ) - ( (int)(begin) )));
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferViewImpl_obj,subarray,return )


::hx::ObjectPtr< ArrayBufferViewImpl_obj > ArrayBufferViewImpl_obj::__new( ::haxe::io::Bytes bytes,int pos,int length) {
	::hx::ObjectPtr< ArrayBufferViewImpl_obj > __this = new ArrayBufferViewImpl_obj();
	__this->__construct(bytes,pos,length);
	return __this;
}

::hx::ObjectPtr< ArrayBufferViewImpl_obj > ArrayBufferViewImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes,int pos,int length) {
	ArrayBufferViewImpl_obj *__this = (ArrayBufferViewImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewImpl_obj), true, "haxe.io.ArrayBufferViewImpl"));
	*(void **)__this = ArrayBufferViewImpl_obj::_hx_vtable;
	__this->__construct(bytes,pos,length);
	return __this;
}

ArrayBufferViewImpl_obj::ArrayBufferViewImpl_obj()
{
}

void ArrayBufferViewImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferViewImpl);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_END_CLASS();
}

void ArrayBufferViewImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
}

::hx::Val ArrayBufferViewImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return ::hx::Val( sub_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { return ::hx::Val( subarray_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return ::hx::Val( byteOffset ); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return ::hx::Val( byteLength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayBufferViewImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferViewImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("byteOffset",bb,20,44,38));
	outFields->push(HX_("byteLength",0e,1e,0c,77));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayBufferViewImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ArrayBufferViewImpl_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteOffset),HX_("byteOffset",bb,20,44,38)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewImpl_obj,byteLength),HX_("byteLength",0e,1e,0c,77)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayBufferViewImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayBufferViewImpl_obj_sMemberFields[] = {
	HX_("bytes",6b,08,98,bd),
	HX_("byteOffset",bb,20,44,38),
	HX_("byteLength",0e,1e,0c,77),
	HX_("sub",80,a9,57,00),
	HX_("subarray",19,54,81,07),
	::String(null()) };

::hx::Class ArrayBufferViewImpl_obj::__mClass;

void ArrayBufferViewImpl_obj::__register()
{
	ArrayBufferViewImpl_obj _hx_dummy;
	ArrayBufferViewImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.ArrayBufferViewImpl",1e,cb,bc,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayBufferViewImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferViewImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferViewImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferViewImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
