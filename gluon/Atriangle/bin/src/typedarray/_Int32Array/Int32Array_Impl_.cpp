// Generated by Haxe 4.3.0-rc.1+88ebbd0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_Int32ArrayImpl
#include <typedarray/Int32ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray__Int32Array_Int32Array_Impl_
#include <typedarray/_Int32Array/Int32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b43ebb213b9170d4_46__new,"typedarray._Int32Array.Int32Array_Impl_","_new",0x7ce20641,"typedarray._Int32Array.Int32Array_Impl_._new","typedarray/macro/BuildArrayBufferView.hx",46,0xd8a3130b)
namespace typedarray{
namespace _Int32Array{

void Int32Array_Impl__obj::__construct() { }

Dynamic Int32Array_Impl__obj::__CreateEmpty() { return new Int32Array_Impl__obj; }

void *Int32Array_Impl__obj::_hx_vtable = 0;

Dynamic Int32Array_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Int32Array_Impl__obj > _hx_result = new Int32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x314574c6;
}

 ::typedarray::Int32ArrayImpl Int32Array_Impl__obj::_new( ::Dynamic length, ::Dynamic copyFromArray, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength){
            	HX_GC_STACKFRAME(&_hx_pos_b43ebb213b9170d4_46__new)
HXDLIN(  46)		 ::typedarray::Int32ArrayImpl this1;
HXLINE(  55)		if (::hx::IsNotNull( copyFromArray )) {
HXLINE(  56)			 ::Dynamic mapFn = null();
HXDLIN(  56)			 ::typedarray::Int32ArrayImpl view = ::typedarray::_Int32Array::Int32Array_Impl__obj::_new(copyFromArray->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),null(),null(),null(),null());
HXDLIN(  56)			int i = 0;
HXDLIN(  56)			{
HXLINE(  56)				 ::Dynamic v = copyFromArray->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  56)				while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  56)					int v1 = ( (int)(v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  56)					{
HXLINE(  56)						int v2;
HXDLIN(  56)						if (::hx::IsNotNull( mapFn )) {
HXLINE(  56)							v2 = ( (int)(mapFn(v1,i)) );
            						}
            						else {
HXLINE(  56)							v2 = v1;
            						}
HXDLIN(  56)						{
HXLINE(  56)							bool this1;
HXDLIN(  56)							if ((i >= 0)) {
HXLINE(  56)								this1 = (i >= view->length);
            							}
            							else {
HXLINE(  56)								this1 = true;
            							}
HXDLIN(  56)							if (this1) {
HXLINE(  56)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            							}
HXDLIN(  56)							int p = ((i * 4) + view->byteOffset);
HXDLIN(  56)							 ::__hxcpp_memory_set_i32(view->buffer->b,p,v2);
            						}
            					}
HXDLIN(  56)					i = (i + 1);
            				}
            			}
HXDLIN(  56)			this1 = view;
            		}
            		else {
HXLINE(  58)			this1 =  ::typedarray::Int32ArrayImpl_obj::__alloc( HX_CTX ,length,buffer,byteOffset,byteLength);
            		}
HXLINE(  46)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Int32Array_Impl__obj,_new,return )


Int32Array_Impl__obj::Int32Array_Impl__obj()
{
}

bool Int32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Int32Array_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Int32Array_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Int32Array_Impl__obj::__mClass;

static ::String Int32Array_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void Int32Array_Impl__obj::__register()
{
	Int32Array_Impl__obj _hx_dummy;
	Int32Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("typedarray._Int32Array.Int32Array_Impl_",8e,1b,b7,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Int32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Int32Array_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int32Array_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace typedarray
} // end namespace _Int32Array
