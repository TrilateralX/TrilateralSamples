// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8
#define INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_40a32167e16cfa44_106_new)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8)

namespace typedarray{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj OBJ_;
		ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj();

	public:
		enum { _hx_ClassId = 0x4830cb13 };

		void __construct( ::Dynamic array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="typedarray.ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"typedarray.ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8"); }

		inline static ::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj > __new( ::Dynamic array) {
			::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj > __this = new ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj();
			__this->__construct(array);
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic array) {
			ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj *__this = (ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj), true, "typedarray.ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8"));
			*(void **)__this = ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_40a32167e16cfa44_106_new)
HXLINE( 113)		( ( ::typedarray::ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8)(__this) )->i = 0;
HXLINE( 116)		( ( ::typedarray::ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8)(__this) )->a = array;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8",1c,b7,1c,ba); }

		 ::Dynamic a;
		int i;
		bool hasNext();
		::Dynamic hasNext_dyn();

		unsigned char next();
		::Dynamic next_dyn();

};

} // end namespace typedarray

#endif /* INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8 */ 
