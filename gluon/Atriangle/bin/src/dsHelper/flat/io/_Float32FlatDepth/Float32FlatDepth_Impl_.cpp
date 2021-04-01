// Generated by Haxe 4.3.0-rc.1+88ebbd0
#include <hxcpp.h>

#ifndef INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_
#include <dsHelper/flat/io/_Float32Flat/Float32Flat_Impl_.h>
#endif
#ifndef INCLUDED_dsHelper_flat_io__Float32FlatDepth_Float32FlatDepth_Impl_
#include <dsHelper/flat/io/_Float32FlatDepth/Float32FlatDepth_Impl_.h>
#endif
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
#ifndef INCLUDED_typedarray_Float32ArrayImpl
#include <typedarray/Float32ArrayImpl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0127d8214534eee7_12_rangeToEnd,"dsHelper.flat.io._Float32FlatDepth.Float32FlatDepth_Impl_","rangeToEnd",0xc1a4d43e,"dsHelper.flat.io._Float32FlatDepth.Float32FlatDepth_Impl_.rangeToEnd","dsHelper/flat/io/Float32FlatDepth.hx",12,0xf3b5652a)
namespace dsHelper{
namespace flat{
namespace io{
namespace _Float32FlatDepth{

void Float32FlatDepth_Impl__obj::__construct() { }

Dynamic Float32FlatDepth_Impl__obj::__CreateEmpty() { return new Float32FlatDepth_Impl__obj; }

void *Float32FlatDepth_Impl__obj::_hx_vtable = 0;

Dynamic Float32FlatDepth_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Float32FlatDepth_Impl__obj > _hx_result = new Float32FlatDepth_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float32FlatDepth_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x796a2b9d;
}

bool Float32FlatDepth_Impl__obj::rangeToEnd( ::typedarray::Float32ArrayImpl this1,int starting,int totalLen,int section){
            	HX_STACKFRAME(&_hx_pos_0127d8214534eee7_12_rangeToEnd)
HXLINE(  13)		int ending = (starting + totalLen);
HXLINE(  14)		::Array< Float > temp = ::Array_obj< Float >::__new(0);
HXLINE(  15)		int count = 0;
HXLINE(  17)		{
HXLINE(  17)			int _g = starting;
HXDLIN(  17)			int _g1 = ending;
HXDLIN(  17)			while((_g < _g1)){
HXLINE(  17)				_g = (_g + 1);
HXDLIN(  17)				int i = (_g - 1);
HXDLIN(  17)				count = (count + 1);
HXDLIN(  17)				int i1 = (i + 2);
HXDLIN(  17)				bool _hx_tmp;
HXDLIN(  17)				if ((i1 >= 0)) {
HXLINE(  17)					_hx_tmp = (i1 >= this1->length);
            				}
            				else {
HXLINE(  17)					_hx_tmp = true;
            				}
HXDLIN(  17)				if (_hx_tmp) {
HXLINE(  17)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            				}
HXDLIN(  17)				int p = ((i1 * 4) + this1->byteOffset);
HXDLIN(  17)				temp[(count - 1)] = ( (Float)( ::__hxcpp_memory_get_float(this1->buffer->b,p)) );
            			}
            		}
HXLINE(  19)		int left = ((section * ::dsHelper::flat::io::_Float32Flat::Float32Flat_Impl__obj::get_size(this1)) - ending);
HXLINE(  20)		{
HXLINE(  20)			int _g2 = 0;
HXDLIN(  20)			int _g3 = left;
HXDLIN(  20)			while((_g2 < _g3)){
HXLINE(  20)				_g2 = (_g2 + 1);
HXDLIN(  20)				int i = (_g2 - 1);
HXDLIN(  20)				{
HXLINE(  20)					int i1 = ((ending + i) + 2);
HXDLIN(  20)					bool v;
HXDLIN(  20)					if ((i1 >= 0)) {
HXLINE(  20)						v = (i1 >= this1->length);
            					}
            					else {
HXLINE(  20)						v = true;
            					}
HXDLIN(  20)					if (v) {
HXLINE(  20)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            					}
HXDLIN(  20)					int p = ((i1 * 4) + this1->byteOffset);
HXDLIN(  20)					Float v1 = ( (Float)( ::__hxcpp_memory_get_float(this1->buffer->b,p)) );
HXDLIN(  20)					{
HXLINE(  20)						int i2 = ((starting + i) + 2);
HXDLIN(  20)						{
HXLINE(  20)							bool _hx_tmp;
HXDLIN(  20)							if ((i2 >= 0)) {
HXLINE(  20)								_hx_tmp = (i2 >= this1->length);
            							}
            							else {
HXLINE(  20)								_hx_tmp = true;
            							}
HXDLIN(  20)							if (_hx_tmp) {
HXLINE(  20)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            							}
HXDLIN(  20)							int p1 = ((i2 * 4) + this1->byteOffset);
HXDLIN(  20)							 ::__hxcpp_memory_set_float(this1->buffer->b,p1,v1);
            						}
            					}
            				}
            			}
            		}
HXLINE(  22)		int last = (section * ::dsHelper::flat::io::_Float32Flat::Float32Flat_Impl__obj::get_size(this1));
HXLINE(  23)		int reserveTop = (last - totalLen);
HXLINE(  24)		count = 0;
HXLINE(  25)		{
HXLINE(  25)			int _g4 = reserveTop;
HXDLIN(  25)			int _g5 = last;
HXDLIN(  25)			while((_g4 < _g5)){
HXLINE(  25)				_g4 = (_g4 + 1);
HXDLIN(  25)				int i = (_g4 - 1);
HXDLIN(  25)				{
HXLINE(  25)					count = (count + 1);
HXDLIN(  25)					Float v = temp->__get((count - 1));
HXDLIN(  25)					{
HXLINE(  25)						int i1 = (i + 2);
HXDLIN(  25)						{
HXLINE(  25)							bool _hx_tmp;
HXDLIN(  25)							if ((i1 >= 0)) {
HXLINE(  25)								_hx_tmp = (i1 >= this1->length);
            							}
            							else {
HXLINE(  25)								_hx_tmp = true;
            							}
HXDLIN(  25)							if (_hx_tmp) {
HXLINE(  25)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            							}
HXDLIN(  25)							int p = ((i1 * 4) + this1->byteOffset);
HXDLIN(  25)							 ::__hxcpp_memory_set_float(this1->buffer->b,p,v);
            						}
            					}
            				}
            			}
            		}
HXLINE(  26)		temp = null();
HXLINE(  27)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Float32FlatDepth_Impl__obj,rangeToEnd,return )


Float32FlatDepth_Impl__obj::Float32FlatDepth_Impl__obj()
{
}

bool Float32FlatDepth_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"rangeToEnd") ) { outValue = rangeToEnd_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Float32FlatDepth_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Float32FlatDepth_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Float32FlatDepth_Impl__obj::__mClass;

static ::String Float32FlatDepth_Impl__obj_sStaticFields[] = {
	HX_("rangeToEnd",23,92,b9,e6),
	::String(null())
};

void Float32FlatDepth_Impl__obj::__register()
{
	Float32FlatDepth_Impl__obj _hx_dummy;
	Float32FlatDepth_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("dsHelper.flat.io._Float32FlatDepth.Float32FlatDepth_Impl_",73,82,d5,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32FlatDepth_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Float32FlatDepth_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Float32FlatDepth_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32FlatDepth_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32FlatDepth_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace dsHelper
} // end namespace flat
} // end namespace io
} // end namespace _Float32FlatDepth