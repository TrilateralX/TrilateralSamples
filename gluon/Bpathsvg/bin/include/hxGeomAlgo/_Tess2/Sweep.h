// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_hxGeomAlgo__Tess2_Sweep
#define INCLUDED_hxGeomAlgo__Tess2_Sweep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxGeomAlgo,Tesselator)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,ActiveRegion)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,Sweep)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessHalfEdge)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessMesh)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessVertex)

namespace hxGeomAlgo{
namespace _Tess2{


class HXCPP_CLASS_ATTRIBUTES Sweep_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Sweep_obj OBJ_;
		Sweep_obj();

	public:
		enum { _hx_ClassId = 0x371362eb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxGeomAlgo._Tess2.Sweep")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxGeomAlgo._Tess2.Sweep"); }

		inline static ::hx::ObjectPtr< Sweep_obj > __new() {
			::hx::ObjectPtr< Sweep_obj > __this = new Sweep_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Sweep_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Sweep_obj *__this = (Sweep_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sweep_obj), false, "hxGeomAlgo._Tess2.Sweep"));
			*(void **)__this = Sweep_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sweep_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sweep",cc,85,37,19); }

		static  ::hxGeomAlgo::_Tess2::ActiveRegion regionBelow( ::hxGeomAlgo::_Tess2::ActiveRegion r);
		static ::Dynamic regionBelow_dyn();

		static  ::hxGeomAlgo::_Tess2::ActiveRegion regionAbove( ::hxGeomAlgo::_Tess2::ActiveRegion r);
		static ::Dynamic regionAbove_dyn();

		static void debugEvent( ::hxGeomAlgo::Tesselator tess);
		static ::Dynamic debugEvent_dyn();

		static void addWinding( ::hxGeomAlgo::_Tess2::TessHalfEdge eDst, ::hxGeomAlgo::_Tess2::TessHalfEdge eSrc);
		static ::Dynamic addWinding_dyn();

		static bool edgeLeq( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg1, ::hxGeomAlgo::_Tess2::ActiveRegion reg2);
		static ::Dynamic edgeLeq_dyn();

		static void deleteRegion( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg);
		static ::Dynamic deleteRegion_dyn();

		static void fixUpperEdge( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg, ::hxGeomAlgo::_Tess2::TessHalfEdge newEdge);
		static ::Dynamic fixUpperEdge_dyn();

		static  ::hxGeomAlgo::_Tess2::ActiveRegion topLeftRegion( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg);
		static ::Dynamic topLeftRegion_dyn();

		static  ::hxGeomAlgo::_Tess2::ActiveRegion topRightRegion( ::hxGeomAlgo::_Tess2::ActiveRegion reg);
		static ::Dynamic topRightRegion_dyn();

		static  ::hxGeomAlgo::_Tess2::ActiveRegion addRegionBelow( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regAbove, ::hxGeomAlgo::_Tess2::TessHalfEdge eNewUp);
		static ::Dynamic addRegionBelow_dyn();

		static bool isWindingInside( ::hxGeomAlgo::Tesselator tess,int n);
		static ::Dynamic isWindingInside_dyn();

		static void computeWinding( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg);
		static ::Dynamic computeWinding_dyn();

		static void finishRegion( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion reg);
		static ::Dynamic finishRegion_dyn();

		static  ::hxGeomAlgo::_Tess2::TessHalfEdge finishLeftRegions( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regFirst, ::hxGeomAlgo::_Tess2::ActiveRegion regLast);
		static ::Dynamic finishLeftRegions_dyn();

		static void addRightEdges( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp, ::hxGeomAlgo::_Tess2::TessHalfEdge eFirst, ::hxGeomAlgo::_Tess2::TessHalfEdge eLast, ::hxGeomAlgo::_Tess2::TessHalfEdge eTopLeft,bool cleanUp);
		static ::Dynamic addRightEdges_dyn();

		static void spliceMergeVertices( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::TessHalfEdge e1, ::hxGeomAlgo::_Tess2::TessHalfEdge e2);
		static ::Dynamic spliceMergeVertices_dyn();

		static void vertexWeights( ::hxGeomAlgo::_Tess2::TessVertex isect, ::hxGeomAlgo::_Tess2::TessVertex org, ::hxGeomAlgo::_Tess2::TessVertex dst);
		static ::Dynamic vertexWeights_dyn();

		static void getIntersectData( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::TessVertex isect, ::hxGeomAlgo::_Tess2::TessVertex orgUp, ::hxGeomAlgo::_Tess2::TessVertex dstUp, ::hxGeomAlgo::_Tess2::TessVertex orgLo, ::hxGeomAlgo::_Tess2::TessVertex dstLo);
		static ::Dynamic getIntersectData_dyn();

		static bool checkForRightSplice( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp);
		static ::Dynamic checkForRightSplice_dyn();

		static bool checkForLeftSplice( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp);
		static ::Dynamic checkForLeftSplice_dyn();

		static bool checkForIntersect( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp);
		static ::Dynamic checkForIntersect_dyn();

		static void walkDirtyRegions( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp);
		static ::Dynamic walkDirtyRegions_dyn();

		static void connectRightVertex( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp, ::hxGeomAlgo::_Tess2::TessHalfEdge eBottomLeft);
		static ::Dynamic connectRightVertex_dyn();

		static void connectLeftDegenerate( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::ActiveRegion regUp, ::hxGeomAlgo::_Tess2::TessVertex vEvent);
		static ::Dynamic connectLeftDegenerate_dyn();

		static void connectLeftVertex( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::TessVertex vEvent);
		static ::Dynamic connectLeftVertex_dyn();

		static void sweepEvent( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::TessVertex vEvent);
		static ::Dynamic sweepEvent_dyn();

		static void addSentinel( ::hxGeomAlgo::Tesselator tess,Float smin,Float smax,Float t);
		static ::Dynamic addSentinel_dyn();

		static void initEdgeDict( ::hxGeomAlgo::Tesselator tess);
		static ::Dynamic initEdgeDict_dyn();

		static void doneEdgeDict( ::hxGeomAlgo::Tesselator tess);
		static ::Dynamic doneEdgeDict_dyn();

		static void removeDegenerateEdges( ::hxGeomAlgo::Tesselator tess);
		static ::Dynamic removeDegenerateEdges_dyn();

		static bool initPriorityQ( ::Dynamic tess);
		static ::Dynamic initPriorityQ_dyn();

		static void donePriorityQ( ::Dynamic tess);
		static ::Dynamic donePriorityQ_dyn();

		static bool removeDegenerateFaces( ::hxGeomAlgo::Tesselator tess, ::hxGeomAlgo::_Tess2::TessMesh mesh);
		static ::Dynamic removeDegenerateFaces_dyn();

		static bool computeInterior( ::hxGeomAlgo::Tesselator tess);
		static ::Dynamic computeInterior_dyn();

};

} // end namespace hxGeomAlgo
} // end namespace _Tess2

#endif /* INCLUDED_hxGeomAlgo__Tess2_Sweep */ 