// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_
#define INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(dsHelper,flat,io,_Float32Flat,Float32Flat_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

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

		static Float readItem( ::lime::utils::ArrayBufferView this1,int k);
		static ::Dynamic readItem_dyn();

		static Float writeItem( ::lime::utils::ArrayBufferView this1,int k,Float v);
		static ::Dynamic writeItem_dyn();

		static  ::lime::utils::ArrayBufferView _new(int len);
		static ::Dynamic _new_dyn();

		static int get_size( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_size_dyn();

		static int set_size( ::lime::utils::ArrayBufferView this1,int id);
		static ::Dynamic set_size_dyn();

		static int get_index( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_index_dyn();

		static int set_index( ::lime::utils::ArrayBufferView this1,int id);
		static ::Dynamic set_index_dyn();

		static Float get_pos( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic get_pos_dyn();

		static Float set_pos( ::lime::utils::ArrayBufferView this1,Float pos_);
		static ::Dynamic set_pos_dyn();

		static void updateLen( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic updateLen_dyn();

		static bool hasNext( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic hasNext_dyn();

		static Float next( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic next_dyn();

		static Float increment( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic increment_dyn();

		static  ::lime::utils::ArrayBufferView toArray( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic toArray_dyn();

		static  ::lime::utils::ArrayBufferView fromArray( ::lime::utils::ArrayBufferView arr);
		static ::Dynamic fromArray_dyn();

		static  ::lime::utils::ArrayBufferView clone( ::lime::utils::ArrayBufferView this1);
		static ::Dynamic clone_dyn();

		static void fill( ::lime::utils::ArrayBufferView this1, ::lime::utils::ArrayBufferView arr);
		static ::Dynamic fill_dyn();

};

} // end namespace dsHelper
} // end namespace flat
} // end namespace io
} // end namespace _Float32Flat

#endif /* INCLUDED_dsHelper_flat_io__Float32Flat_Float32Flat_Impl_ */ 
