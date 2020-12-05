// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_dsHelper_flatInterleave__FloatColorTriangles_FloatColorTriangles_Impl_
#define INCLUDED_dsHelper_flatInterleave__FloatColorTriangles_FloatColorTriangles_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(dsHelper,flatInterleave,_FloatColorTriangles,FloatColorTriangles_Impl_)
HX_DECLARE_CLASS1(typedarray,ArrayBufferView)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewBase)
HX_DECLARE_CLASS1(typedarray,Float32ArrayImpl)

namespace dsHelper{
namespace flatInterleave{
namespace _FloatColorTriangles{


class HXCPP_CLASS_ATTRIBUTES FloatColorTriangles_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FloatColorTriangles_Impl__obj OBJ_;
		FloatColorTriangles_Impl__obj();

	public:
		enum { _hx_ClassId = 0x76c05f06 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dsHelper.flatInterleave._FloatColorTriangles.FloatColorTriangles_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"dsHelper.flatInterleave._FloatColorTriangles.FloatColorTriangles_Impl_"); }

		inline static ::hx::ObjectPtr< FloatColorTriangles_Impl__obj > __new() {
			::hx::ObjectPtr< FloatColorTriangles_Impl__obj > __this = new FloatColorTriangles_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FloatColorTriangles_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FloatColorTriangles_Impl__obj *__this = (FloatColorTriangles_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FloatColorTriangles_Impl__obj), false, "dsHelper.flatInterleave._FloatColorTriangles.FloatColorTriangles_Impl_"));
			*(void **)__this = FloatColorTriangles_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FloatColorTriangles_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FloatColorTriangles_Impl_",04,25,89,b5); }

		static Float get_ax( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_ax_dyn();

		static Float set_ax( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_ax_dyn();

		static Float get_ay( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_ay_dyn();

		static Float set_ay( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_ay_dyn();

		static Float get_az( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_az_dyn();

		static Float set_az( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_az_dyn();

		static Float get_redA( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_redA_dyn();

		static Float set_redA( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_redA_dyn();

		static Float get_bx( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_bx_dyn();

		static Float set_bx( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_bx_dyn();

		static Float get_by( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_by_dyn();

		static Float set_by( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_by_dyn();

		static Float get_bz( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_bz_dyn();

		static Float set_bz( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_bz_dyn();

		static Float get_redB( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_redB_dyn();

		static Float set_redB( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_redB_dyn();

		static Float get_cx( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_cx_dyn();

		static Float set_cx( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_cx_dyn();

		static Float get_cy( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_cy_dyn();

		static Float set_cy( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_cy_dyn();

		static Float get_cz( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_cz_dyn();

		static Float set_cz( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_cz_dyn();

		static Float get_redC( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic get_redC_dyn();

		static Float set_redC( ::typedarray::Float32ArrayImpl this1,Float v);
		static ::Dynamic set_redC_dyn();

		static bool triangle( ::typedarray::Float32ArrayImpl this1,Float ax_,Float ay_,Float az_,Float bx_,Float by_,Float bz_,Float cx_,Float cy_,Float cz_);
		static ::Dynamic triangle_dyn();

		static bool adjustWinding( ::typedarray::Float32ArrayImpl this1);
		static ::Dynamic adjustWinding_dyn();

		static void moveDelta( ::typedarray::Float32ArrayImpl this1,Float dx,Float dy);
		static ::Dynamic moveDelta_dyn();

		static bool fullHit( ::typedarray::Float32ArrayImpl this1,Float px,Float py);
		static ::Dynamic fullHit_dyn();

};

} // end namespace dsHelper
} // end namespace flatInterleave
} // end namespace _FloatColorTriangles

#endif /* INCLUDED_dsHelper_flatInterleave__FloatColorTriangles_FloatColorTriangles_Impl_ */ 