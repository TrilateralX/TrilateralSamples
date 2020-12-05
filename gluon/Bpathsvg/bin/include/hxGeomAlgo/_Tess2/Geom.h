// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_hxGeomAlgo__Tess2_Geom
#define INCLUDED_hxGeomAlgo__Tess2_Geom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,Geom)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessHalfEdge)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessVertex)

namespace hxGeomAlgo{
namespace _Tess2{


class HXCPP_CLASS_ATTRIBUTES Geom_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Geom_obj OBJ_;
		Geom_obj();

	public:
		enum { _hx_ClassId = 0x21717165 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxGeomAlgo._Tess2.Geom")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxGeomAlgo._Tess2.Geom"); }

		inline static ::hx::ObjectPtr< Geom_obj > __new() {
			::hx::ObjectPtr< Geom_obj > __this = new Geom_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Geom_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Geom_obj *__this = (Geom_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Geom_obj), false, "hxGeomAlgo._Tess2.Geom"));
			*(void **)__this = Geom_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Geom_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Geom",dc,2a,3b,2f); }

		static bool vertEq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v);
		static ::Dynamic vertEq_dyn();

		static bool vertLeq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v);
		static ::Dynamic vertLeq_dyn();

		static bool transLeq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v);
		static ::Dynamic transLeq_dyn();

		static bool edgeGoesLeft( ::hxGeomAlgo::_Tess2::TessHalfEdge e);
		static ::Dynamic edgeGoesLeft_dyn();

		static bool edgeGoesRight( ::hxGeomAlgo::_Tess2::TessHalfEdge e);
		static ::Dynamic edgeGoesRight_dyn();

		static bool edgeIsInternal( ::hxGeomAlgo::_Tess2::TessHalfEdge e);
		static ::Dynamic edgeIsInternal_dyn();

		static Float vertL1dist( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v);
		static ::Dynamic vertL1dist_dyn();

		static Float edgeEval( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w);
		static ::Dynamic edgeEval_dyn();

		static Float edgeSign( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w);
		static ::Dynamic edgeSign_dyn();

		static Float transEval( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w);
		static ::Dynamic transEval_dyn();

		static Float transSign( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w);
		static ::Dynamic transSign_dyn();

		static bool vertCCW( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w);
		static ::Dynamic vertCCW_dyn();

		static Float interpolate(Float a,Float x,Float b,Float y);
		static ::Dynamic interpolate_dyn();

		static void intersect( ::hxGeomAlgo::_Tess2::TessVertex o1, ::hxGeomAlgo::_Tess2::TessVertex d1, ::hxGeomAlgo::_Tess2::TessVertex o2, ::hxGeomAlgo::_Tess2::TessVertex d2, ::hxGeomAlgo::_Tess2::TessVertex v);
		static ::Dynamic intersect_dyn();

		static Float calcAngle( ::hxGeomAlgo::_Tess2::TessVertex v0, ::hxGeomAlgo::_Tess2::TessVertex v1, ::hxGeomAlgo::_Tess2::TessVertex v2);
		static ::Dynamic calcAngle_dyn();

		static bool edgeIsLocallyDelaunay( ::hxGeomAlgo::_Tess2::TessHalfEdge e);
		static ::Dynamic edgeIsLocallyDelaunay_dyn();

};

} // end namespace hxGeomAlgo
} // end namespace _Tess2

#endif /* INCLUDED_hxGeomAlgo__Tess2_Geom */ 