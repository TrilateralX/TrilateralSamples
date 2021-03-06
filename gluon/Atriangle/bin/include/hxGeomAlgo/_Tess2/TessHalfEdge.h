// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_hxGeomAlgo__Tess2_TessHalfEdge
#define INCLUDED_hxGeomAlgo__Tess2_TessHalfEdge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,ActiveRegion)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessFace)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessHalfEdge)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessVertex)

namespace hxGeomAlgo{
namespace _Tess2{


class HXCPP_CLASS_ATTRIBUTES TessHalfEdge_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TessHalfEdge_obj OBJ_;
		TessHalfEdge_obj();

	public:
		enum { _hx_ClassId = 0x1ac011e2 };

		void __construct(int side);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxGeomAlgo._Tess2.TessHalfEdge")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxGeomAlgo._Tess2.TessHalfEdge"); }
		static ::hx::ObjectPtr< TessHalfEdge_obj > __new(int side);
		static ::hx::ObjectPtr< TessHalfEdge_obj > __alloc(::hx::Ctx *_hx_ctx,int side);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TessHalfEdge_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TessHalfEdge",21,7d,9a,7d); }

		 ::hxGeomAlgo::_Tess2::TessHalfEdge next;
		 ::hxGeomAlgo::_Tess2::TessHalfEdge Sym;
		 ::hxGeomAlgo::_Tess2::TessHalfEdge Onext;
		 ::hxGeomAlgo::_Tess2::TessHalfEdge Lnext;
		 ::hxGeomAlgo::_Tess2::TessVertex Org;
		 ::hxGeomAlgo::_Tess2::TessFace Lface;
		 ::hxGeomAlgo::_Tess2::ActiveRegion activeRegion;
		int winding;
		int side;
		bool mark;
		 ::hxGeomAlgo::_Tess2::TessFace get_Rface();
		::Dynamic get_Rface_dyn();

		 ::hxGeomAlgo::_Tess2::TessFace set_Rface( ::hxGeomAlgo::_Tess2::TessFace v);
		::Dynamic set_Rface_dyn();

		 ::hxGeomAlgo::_Tess2::TessVertex get_Dst();
		::Dynamic get_Dst_dyn();

		 ::hxGeomAlgo::_Tess2::TessVertex set_Dst( ::hxGeomAlgo::_Tess2::TessVertex v);
		::Dynamic set_Dst_dyn();

		 ::hxGeomAlgo::_Tess2::TessHalfEdge get_Oprev();
		::Dynamic get_Oprev_dyn();

		 ::hxGeomAlgo::_Tess2::TessHalfEdge get_Lprev();
		::Dynamic get_Lprev_dyn();

		 ::hxGeomAlgo::_Tess2::TessHalfEdge get_Rprev();
		::Dynamic get_Rprev_dyn();

		 ::hxGeomAlgo::_Tess2::TessHalfEdge get_Dnext();
		::Dynamic get_Dnext_dyn();

};

} // end namespace hxGeomAlgo
} // end namespace _Tess2

#endif /* INCLUDED_hxGeomAlgo__Tess2_TessHalfEdge */ 
