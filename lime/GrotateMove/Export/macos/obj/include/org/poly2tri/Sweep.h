// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_org_poly2tri_Sweep
#define INCLUDED_org_poly2tri_Sweep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(org,poly2tri,Edge)
HX_DECLARE_CLASS2(org,poly2tri,Node)
HX_DECLARE_CLASS2(org,poly2tri,Point)
HX_DECLARE_CLASS2(org,poly2tri,Sweep)
HX_DECLARE_CLASS2(org,poly2tri,SweepContext)
HX_DECLARE_CLASS2(org,poly2tri,Triangle)

namespace org{
namespace poly2tri{


class HXCPP_CLASS_ATTRIBUTES Sweep_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sweep_obj OBJ_;
		Sweep_obj();

	public:
		enum { _hx_ClassId = 0x127976c3 };

		void __construct( ::org::poly2tri::SweepContext context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="org.poly2tri.Sweep")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"org.poly2tri.Sweep"); }
		static ::hx::ObjectPtr< Sweep_obj > __new( ::org::poly2tri::SweepContext context);
		static ::hx::ObjectPtr< Sweep_obj > __alloc(::hx::Ctx *_hx_ctx, ::org::poly2tri::SweepContext context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sweep_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sweep",cc,85,37,19); }

		static  ::org::poly2tri::Point nextFlipPoint( ::org::poly2tri::Point ep, ::org::poly2tri::Point eq, ::org::poly2tri::Triangle ot, ::org::poly2tri::Point op);
		static ::Dynamic nextFlipPoint_dyn();

		 ::org::poly2tri::SweepContext context;
		void triangulate();
		::Dynamic triangulate_dyn();

		void sweepPoints();
		::Dynamic sweepPoints_dyn();

		void finalizationPolygon();
		::Dynamic finalizationPolygon_dyn();

		 ::org::poly2tri::Node pointEvent( ::org::poly2tri::Point point);
		::Dynamic pointEvent_dyn();

		void edgeEventByEdge( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic edgeEventByEdge_dyn();

		void edgeEventByPoints( ::org::poly2tri::Point ep, ::org::poly2tri::Point eq, ::org::poly2tri::Triangle triangle, ::org::poly2tri::Point point);
		::Dynamic edgeEventByPoints_dyn();

		 ::org::poly2tri::Node newFrontTriangle( ::org::poly2tri::Point point, ::org::poly2tri::Node node);
		::Dynamic newFrontTriangle_dyn();

		void fill( ::org::poly2tri::Node node);
		::Dynamic fill_dyn();

		void fillAdvancingFront( ::org::poly2tri::Node n);
		::Dynamic fillAdvancingFront_dyn();

		bool legalize( ::org::poly2tri::Triangle t);
		::Dynamic legalize_dyn();

		void fillBasin( ::org::poly2tri::Node node);
		::Dynamic fillBasin_dyn();

		void fillBasinReq( ::org::poly2tri::Node node);
		::Dynamic fillBasinReq_dyn();

		bool isShallow( ::org::poly2tri::Node node);
		::Dynamic isShallow_dyn();

		void fillEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillEdgeEvent_dyn();

		void fillRightAboveEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillRightAboveEdgeEvent_dyn();

		void fillRightBelowEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillRightBelowEdgeEvent_dyn();

		void fillRightConcaveEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillRightConcaveEdgeEvent_dyn();

		void fillRightConvexEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillRightConvexEdgeEvent_dyn();

		void fillLeftAboveEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillLeftAboveEdgeEvent_dyn();

		void fillLeftBelowEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillLeftBelowEdgeEvent_dyn();

		void fillLeftConvexEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillLeftConvexEdgeEvent_dyn();

		void fillLeftConcaveEdgeEvent( ::org::poly2tri::Edge edge, ::org::poly2tri::Node node);
		::Dynamic fillLeftConcaveEdgeEvent_dyn();

		void flipEdgeEvent( ::org::poly2tri::Point ep, ::org::poly2tri::Point eq, ::org::poly2tri::Triangle t, ::org::poly2tri::Point p);
		::Dynamic flipEdgeEvent_dyn();

		 ::org::poly2tri::Triangle nextFlipTriangle(int o, ::org::poly2tri::Triangle t, ::org::poly2tri::Triangle ot, ::org::poly2tri::Point p, ::org::poly2tri::Point op);
		::Dynamic nextFlipTriangle_dyn();

		void flipScanEdgeEvent( ::org::poly2tri::Point ep, ::org::poly2tri::Point eq, ::org::poly2tri::Triangle flip_triangle, ::org::poly2tri::Triangle t, ::org::poly2tri::Point p);
		::Dynamic flipScanEdgeEvent_dyn();

};

} // end namespace org
} // end namespace poly2tri

#endif /* INCLUDED_org_poly2tri_Sweep */ 