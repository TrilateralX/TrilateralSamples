// Generated by Haxe 4.2.0-rc.1+3ef20749a
#ifndef INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType
#define INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(typedarray,ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType)

namespace typedarray{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj OBJ_;
		ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj();

	public:
		enum { _hx_ClassId = 0x792b6543 };

		void __construct( ::Dynamic array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="typedarray.ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"typedarray.ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType"); }

		inline static ::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj > __new( ::Dynamic array) {
			::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj > __this = new ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj();
			__this->__construct(array);
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic array) {
			ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj *__this = (ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj), true, "typedarray.ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType"));
			*(void **)__this = ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::_hx_vtable;
{
	( ( ::typedarray::ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType)(__this) )->i = 0;
	( ( ::typedarray::ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType)(__this) )->a = array;
}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType",d4,ca,83,cb); }

		 ::Dynamic a;
		int i;
		bool hasNext();
		::Dynamic hasNext_dyn();

		float next();
		::Dynamic next_dyn();

};

} // end namespace typedarray

#endif /* INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType */ 
