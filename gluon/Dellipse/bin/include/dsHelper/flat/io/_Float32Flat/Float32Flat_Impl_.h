// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_
#define INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(dsHelper,flat,io,_Float32Flat,Float32Flat_Impl_)
HX_DECLARE_CLASS1(typedarray,ArrayBufferView)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewBase)
HX_DECLARE_CLASS1(typedarray,Float32ArrayImpl)

namespace dsHelper{
namespace flat{
namespace io{
namespace _Float32Flat{


class HXCPP_CLASS_ATTRIBUTES Float32Flat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Float32Flat_Impl__obj OBJ_;
		Float32Flat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x767b5cc3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dsHelper.flat.io._Float32Flat.Float32Flat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"dsHelper.flat.io._Float32Flat.Float32Flat_Impl_"); }

		inline static ::hx::ObjectPtr< Float32Flat_Impl__obj > __new() {
			::hx::ObjectPtr< Float32Flat_Impl__obj > __this = new Float32Flat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Float32Flat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Float32Flat_Impl__obj *__this = (Float32Flat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Float32Flat_Impl__obj), false, "dsHelper.flat.io._Float32Flat.Float32Flat_Impl_"));
			*(void **)__this = Float32Flat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Float32Flat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Float32Flat_Impl_",14,a6,25,76); }

		static int get_size( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_size_dyn();

		static int set_size( ::typedarray::Float32ArrayImpl this1,int id);
		static ::Dynamic set_size_dyn();

};

} // end namespace dsHelper
} // end namespace flat
} // end namespace io
} // end namespace _Float32Flat

#endif /* INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_ */ 