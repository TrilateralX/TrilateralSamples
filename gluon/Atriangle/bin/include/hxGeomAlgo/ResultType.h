// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_hxGeomAlgo_ResultType
#define INCLUDED_hxGeomAlgo_ResultType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxGeomAlgo,ResultType)
namespace hxGeomAlgo{


class ResultType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ResultType_obj OBJ_;

	public:
		ResultType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hxGeomAlgo.ResultType",86,02,7d,d0); }
		::String __ToString() const { return HX_("ResultType.",f7,cd,8c,a5) + _hx_tag; }

		static ::hxGeomAlgo::ResultType BOUNDARY_CONTOURS;
		static inline ::hxGeomAlgo::ResultType BOUNDARY_CONTOURS_dyn() { return BOUNDARY_CONTOURS; }
		static ::hxGeomAlgo::ResultType CONNECTED_POLYGONS;
		static inline ::hxGeomAlgo::ResultType CONNECTED_POLYGONS_dyn() { return CONNECTED_POLYGONS; }
		static ::hxGeomAlgo::ResultType EXPERIMENTAL_DELAUNAY;
		static inline ::hxGeomAlgo::ResultType EXPERIMENTAL_DELAUNAY_dyn() { return EXPERIMENTAL_DELAUNAY; }
		static ::hxGeomAlgo::ResultType POLYGONS;
		static inline ::hxGeomAlgo::ResultType POLYGONS_dyn() { return POLYGONS; }
};

} // end namespace hxGeomAlgo

#endif /* INCLUDED_hxGeomAlgo_ResultType */ 
