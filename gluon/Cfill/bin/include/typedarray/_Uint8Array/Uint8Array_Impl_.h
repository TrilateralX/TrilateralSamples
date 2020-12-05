// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_typedarray__Uint8Array_Uint8Array_Impl_
#define INCLUDED_typedarray__Uint8Array_Uint8Array_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(typedarray,ArrayBufferView)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewBase)
HX_DECLARE_CLASS1(typedarray,Uint8ArrayImpl)
HX_DECLARE_CLASS2(typedarray,_Uint8Array,Uint8Array_Impl_)

namespace typedarray{
namespace _Uint8Array{


class HXCPP_CLASS_ATTRIBUTES Uint8Array_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Uint8Array_Impl__obj OBJ_;
		Uint8Array_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3ae1f2c2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="typedarray._Uint8Array.Uint8Array_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"typedarray._Uint8Array.Uint8Array_Impl_"); }

		inline static ::hx::ObjectPtr< Uint8Array_Impl__obj > __new() {
			::hx::ObjectPtr< Uint8Array_Impl__obj > __this = new Uint8Array_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Uint8Array_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Uint8Array_Impl__obj *__this = (Uint8Array_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Uint8Array_Impl__obj), false, "typedarray._Uint8Array.Uint8Array_Impl_"));
			*(void **)__this = Uint8Array_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Uint8Array_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Uint8Array_Impl_",5b,d4,33,cb); }

		static  ::typedarray::Uint8ArrayImpl _new( ::Dynamic length, ::Dynamic copyFromArray, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		static ::Dynamic _new_dyn();

};

} // end namespace typedarray
} // end namespace _Uint8Array

#endif /* INCLUDED_typedarray__Uint8Array_Uint8Array_Impl_ */ 