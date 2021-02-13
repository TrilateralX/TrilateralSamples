// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_hxGeomAlgo_PolyTools
#define INCLUDED_hxGeomAlgo_PolyTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxGeomAlgo,HomogCoord)
HX_DECLARE_CLASS1(hxGeomAlgo,HxPointData)
HX_DECLARE_CLASS1(hxGeomAlgo,PolyTools)

namespace hxGeomAlgo{


class HXCPP_CLASS_ATTRIBUTES PolyTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PolyTools_obj OBJ_;
		PolyTools_obj();

	public:
		enum { _hx_ClassId = 0x1785f148 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxGeomAlgo.PolyTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxGeomAlgo.PolyTools"); }

		inline static ::hx::ObjectPtr< PolyTools_obj > __new() {
			::hx::ObjectPtr< PolyTools_obj > __this = new PolyTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PolyTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PolyTools_obj *__this = (PolyTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolyTools_obj), false, "hxGeomAlgo.PolyTools"));
			*(void **)__this = PolyTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PolyTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PolyTools",0f,10,e9,4b); }

		static void __boot();
		static  ::hxGeomAlgo::HxPointData point;
		static  ::hxGeomAlgo::HxPointData zero;
		static Float EPSILON;
		static bool isCCW(::Array< ::Dynamic> poly);
		static ::Dynamic isCCW_dyn();

		static bool isCW(::Array< ::Dynamic> poly);
		static ::Dynamic isCW_dyn();

		static bool makeCCW(::Array< ::Dynamic> poly);
		static ::Dynamic makeCCW_dyn();

		static bool makeCW(::Array< ::Dynamic> poly);
		static ::Dynamic makeCW_dyn();

		static bool isConvex(::Array< ::Dynamic> poly);
		static ::Dynamic isConvex_dyn();

		static bool isSimple(::Array< ::Dynamic> poly);
		static ::Dynamic isSimple_dyn();

		static  ::hxGeomAlgo::HxPointData segmentIntersect( ::hxGeomAlgo::HxPointData p0, ::hxGeomAlgo::HxPointData p1, ::hxGeomAlgo::HxPointData q0, ::hxGeomAlgo::HxPointData q1);
		static ::Dynamic segmentIntersect_dyn();

		static ::Array< int > findDuplicatePoints(::Array< ::Dynamic> poly,::hx::Null< bool >  consecutiveOnly,::hx::Null< bool >  wrapAround);
		static ::Dynamic findDuplicatePoints_dyn();

		static  ::hxGeomAlgo::HxPointData intersection( ::hxGeomAlgo::HxPointData p1, ::hxGeomAlgo::HxPointData p2, ::hxGeomAlgo::HxPointData q1, ::hxGeomAlgo::HxPointData q2);
		static ::Dynamic intersection_dyn();

		static bool isReflex(::Array< ::Dynamic> poly,int idx);
		static ::Dynamic isReflex_dyn();

		static  ::hxGeomAlgo::HxPointData at(::Array< ::Dynamic> poly,int idx);
		static ::Dynamic at_dyn();

		static int wrappedIdx(::Array< ::Dynamic> poly,int idx);
		static ::Dynamic wrappedIdx_dyn();

		static Float side( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic side_dyn();

		static bool isLeft( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic isLeft_dyn();

		static bool isLeftOrOn( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic isLeftOrOn_dyn();

		static bool isRight( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic isRight_dyn();

		static bool isRightOrOn( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic isRightOrOn_dyn();

		static bool isCollinear( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData a, ::hxGeomAlgo::HxPointData b);
		static ::Dynamic isCollinear_dyn();

		static Float distance( ::hxGeomAlgo::HxPointData v, ::hxGeomAlgo::HxPointData w);
		static ::Dynamic distance_dyn();

		static Float distanceToSegment( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData v, ::hxGeomAlgo::HxPointData w);
		static ::Dynamic distanceToSegment_dyn();

		static Float distanceSquared( ::hxGeomAlgo::HxPointData v, ::hxGeomAlgo::HxPointData w);
		static ::Dynamic distanceSquared_dyn();

		static Float distanceToSegmentSquared( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData v, ::hxGeomAlgo::HxPointData w);
		static ::Dynamic distanceToSegmentSquared_dyn();

		static  ::hxGeomAlgo::HxPointData getCentroid(::Array< ::Dynamic> poly);
		static ::Dynamic getCentroid_dyn();

		static Float getArea(::Array< ::Dynamic> poly);
		static ::Dynamic getArea_dyn();

		static  ::hxGeomAlgo::HomogCoord meet( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData q);
		static ::Dynamic meet_dyn();

		static Float dot( ::hxGeomAlgo::HxPointData p, ::hxGeomAlgo::HxPointData q);
		static ::Dynamic dot_dyn();

		static Float sqr(Float x);
		static ::Dynamic sqr_dyn();

		static bool eq(Float a,Float b);
		static ::Dynamic eq_dyn();

		static void clear(::cpp::VirtualArray array);
		static ::Dynamic clear_dyn();

		static ::Array< Float > toFloatArray(::Array< ::Dynamic> poly,::Array< Float > out);
		static ::Dynamic toFloatArray_dyn();

		static ::Array< Float > reverseFloatArray(::Array< Float > poly,::hx::Null< bool >  inPlace);
		static ::Dynamic reverseFloatArray_dyn();

		static ::cpp::VirtualArray flatten(::Array< ::Dynamic> array,::cpp::VirtualArray out);
		static ::Dynamic flatten_dyn();

		static ::Array< ::Dynamic> toPointArray(::Array< Float > poly,::Array< ::Dynamic> out);
		static ::Dynamic toPointArray_dyn();

		static ::Array< ::Dynamic> inflateLine( ::hxGeomAlgo::HxPointData start, ::hxGeomAlgo::HxPointData end,Float thickness);
		static ::Dynamic inflateLine_dyn();

		static ::Array< ::Dynamic> clip(::Array< ::Dynamic> subjPoly,::Array< ::Dynamic> clipPoly);
		static ::Dynamic clip_dyn();

		static void exposeEnum(::hx::Class enumClass,::String as);
		static ::Dynamic exposeEnum_dyn();

};

} // end namespace hxGeomAlgo

#endif /* INCLUDED_hxGeomAlgo_PolyTools */ 
