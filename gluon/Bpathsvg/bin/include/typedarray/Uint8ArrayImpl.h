// Generated by Haxe 4.2.0-rc.1+3ef20749a
#ifndef INCLUDED_typedarray_Uint8ArrayImpl
#define INCLUDED_typedarray_Uint8ArrayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(typedarray,ArrayBufferView)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewBase)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8)
HX_DECLARE_CLASS1(typedarray,Uint8ArrayImpl)

namespace typedarray{


class HXCPP_CLASS_ATTRIBUTES Uint8ArrayImpl_obj : public  ::typedarray::ArrayBufferViewBase_obj
{
	public:
		typedef  ::typedarray::ArrayBufferViewBase_obj super;
		typedef Uint8ArrayImpl_obj OBJ_;
		Uint8ArrayImpl_obj();

	public:
		enum { _hx_ClassId = 0x5e3ebe6a };

		void __construct( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="typedarray.Uint8ArrayImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"typedarray.Uint8ArrayImpl"); }
		static ::hx::ObjectPtr< Uint8ArrayImpl_obj > __new( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		static ::hx::ObjectPtr< Uint8ArrayImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Uint8ArrayImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Uint8ArrayImpl",fb,4d,d3,25); }

		unsigned char _get(int i);
		::Dynamic _get_dyn();

		unsigned char _set(int i,unsigned char v);
		::Dynamic _set_dyn();

		 ::typedarray::ArrayBufferViewImplIterator_typedarray__Uint8Array_UInt8 iterator();
		::Dynamic iterator_dyn();

};

} // end namespace typedarray

#endif /* INCLUDED_typedarray_Uint8ArrayImpl */ 
