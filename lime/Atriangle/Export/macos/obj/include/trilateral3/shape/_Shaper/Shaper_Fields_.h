// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_trilateral3_shape__Shaper_Shaper_Fields_
#define INCLUDED_trilateral3_shape__Shaper_Shaper_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(fracs,DifferencePreference)
HX_DECLARE_CLASS3(trilateral3,shape,_Shaper,Shaper_Fields_)
HX_DECLARE_CLASS2(trilateral3,structure,Quad2D)
HX_DECLARE_CLASS2(trilateral3,structure,XY)

namespace trilateral3{
namespace shape{
namespace _Shaper{


class HXCPP_CLASS_ATTRIBUTES Shaper_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Shaper_Fields__obj OBJ_;
		Shaper_Fields__obj();

	public:
		enum { _hx_ClassId = 0x168b9d2e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.shape._Shaper.Shaper_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.shape._Shaper.Shaper_Fields_"); }

		inline static ::hx::ObjectPtr< Shaper_Fields__obj > __new() {
			::hx::ObjectPtr< Shaper_Fields__obj > __this = new Shaper_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Shaper_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Shaper_Fields__obj *__this = (Shaper_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Shaper_Fields__obj), false, "trilateral3.shape._Shaper.Shaper_Fields_"));
			*(void **)__this = Shaper_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Shaper_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Shaper_Fields_",78,24,56,8f); }

		static int add2DTriangle( ::Dynamic drawType,Float ax,Float ay,Float bx,Float by,Float cx,Float cy);
		static ::Dynamic add2DTriangle_dyn();

		static int add2DQuad( ::Dynamic drawType,Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy);
		static ::Dynamic add2DQuad_dyn();

		static int quad( ::Dynamic drawType, ::trilateral3::structure::Quad2D q);
		static ::Dynamic quad_dyn();

		static int lineAB( ::Dynamic drawType, ::trilateral3::structure::XY A, ::trilateral3::structure::XY B,Float width);
		static ::Dynamic lineAB_dyn();

		static int lineXY( ::Dynamic drawType,Float ax,Float ay,Float bx,Float by,Float width);
		static ::Dynamic lineXY_dyn();

		static int rectangle( ::Dynamic drawType,Float x,Float y,Float w,Float h);
		static ::Dynamic rectangle_dyn();

		static int squareOutline( ::Dynamic drawType,Float px,Float py,Float radius,Float thick, ::Dynamic theta);
		static ::Dynamic squareOutline_dyn();

		static int square( ::Dynamic drawType,Float px,Float py,Float radius, ::Dynamic theta);
		static ::Dynamic square_dyn();

		static int diamond( ::Dynamic drawType,Float x,Float y,Float radius, ::Dynamic theta);
		static ::Dynamic diamond_dyn();

		static int diamondOutline( ::Dynamic drawType,Float x,Float y,Float thick,Float radius, ::Dynamic theta);
		static ::Dynamic diamondOutline_dyn();

		static int overlapStar( ::Dynamic drawType,Float px,Float py,Float radius, ::Dynamic theta);
		static ::Dynamic overlapStar_dyn();

		static int circle( ::Dynamic drawType,Float ax,Float ay,Float radius, ::Dynamic sides, ::Dynamic omega);
		static ::Dynamic circle_dyn();

		static int circleRadial( ::Dynamic drawType,Float ax,Float ay,Float rx,Float ry,Float radius, ::Dynamic sides, ::Dynamic omega);
		static ::Dynamic circleRadial_dyn();

		static int circleRadialOnSide( ::Dynamic drawType,Float ax,Float ay,Float rx,Float ry,Float radius, ::Dynamic sides, ::Dynamic omega);
		static ::Dynamic circleRadialOnSide_dyn();

		static int ellipse( ::Dynamic drawType,Float ax,Float ay,Float rx,Float ry,::hx::Null< int >  sides);
		static ::Dynamic ellipse_dyn();

		static int pie( ::Dynamic drawType,Float ax,Float ay,Float radius,Float beta,Float gamma, ::fracs::DifferencePreference prefer, ::Dynamic sides);
		static ::Dynamic pie_dyn();

		static int pieX( ::Dynamic drawType,Float ax,Float ay,Float radius,Float beta,Float gamma, ::fracs::DifferencePreference prefer,::Array< Float > edgePoly, ::Dynamic sides);
		static ::Dynamic pieX_dyn();

		static int pieDifX( ::Dynamic drawType,Float ax,Float ay,Float radius,Float beta,Float dif,::Array< Float > edgePoly, ::Dynamic sides);
		static ::Dynamic pieDifX_dyn();

		static int ellipsePie( ::Dynamic drawType,Float ax,Float ay,Float rx,Float ry,Float beta,Float gamma, ::fracs::DifferencePreference prefer, ::Dynamic sides);
		static ::Dynamic ellipsePie_dyn();

		static int pieDif( ::Dynamic drawType,Float ax,Float ay,Float radius,Float beta,Float dif, ::Dynamic sides);
		static ::Dynamic pieDif_dyn();

		static int arc( ::Dynamic drawType,Float ax,Float ay,Float radius,Float width,Float beta,Float gamma, ::fracs::DifferencePreference prefer, ::Dynamic sides);
		static ::Dynamic arc_dyn();

		static int circleOnSide( ::Dynamic drawType,Float ax,Float ay,Float radius, ::Dynamic sides, ::Dynamic omega);
		static ::Dynamic circleOnSide_dyn();

		static int ellipseOnSide( ::Dynamic drawType,Float ax,Float ay,Float rx,Float ry,::hx::Null< int >  sides);
		static ::Dynamic ellipseOnSide_dyn();

		static int shape( ::Dynamic drawType,Float x,Float y,Float radius,int p, ::Dynamic omega);
		static ::Dynamic shape_dyn();

		static int shapeRadial( ::Dynamic drawType,Float x,Float y,Float rx,Float ry,Float radius,int p, ::Dynamic omega);
		static ::Dynamic shapeRadial_dyn();

		static int roundedRectangle( ::Dynamic drawType,Float x,Float y,Float width,Float height,Float radius);
		static ::Dynamic roundedRectangle_dyn();

		static int roundedRectangleOutline( ::Dynamic drawType,Float x,Float y,Float width,Float height,Float thick,Float radius);
		static ::Dynamic roundedRectangleOutline_dyn();

		static int spiralLines( ::Dynamic drawType,Float x,Float y,Float radius,int nolines,Float startWid,Float stepWid);
		static ::Dynamic spiralLines_dyn();

};

} // end namespace trilateral3
} // end namespace shape
} // end namespace _Shaper

#endif /* INCLUDED_trilateral3_shape__Shaper_Shaper_Fields_ */ 
