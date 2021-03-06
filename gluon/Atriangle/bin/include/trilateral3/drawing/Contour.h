// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_trilateral3_drawing_Contour
#define INCLUDED_trilateral3_drawing_Contour

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(trilateral3,drawing,Contour)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)

namespace trilateral3{
namespace drawing{


class HXCPP_CLASS_ATTRIBUTES Contour_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Contour_obj OBJ_;
		Contour_obj();

	public:
		enum { _hx_ClassId = 0x2f69a3a3 };

		void __construct( ::trilateral3::drawing::Pen pen_,::hx::Null< int >  __o_endLine_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="trilateral3.drawing.Contour")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"trilateral3.drawing.Contour"); }
		static ::hx::ObjectPtr< Contour_obj > __new( ::trilateral3::drawing::Pen pen_,::hx::Null< int >  __o_endLine_);
		static ::hx::ObjectPtr< Contour_obj > __alloc(::hx::Ctx *_hx_ctx, ::trilateral3::drawing::Pen pen_,::hx::Null< int >  __o_endLine_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Contour_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Contour",ba,51,d0,e6); }

		::Array< Float > pointsClock;
		::Array< Float > pointsAnti;
		Float penultimateCX;
		Float penultimateCY;
		Float lastClockX;
		Float lastClockY;
		Float penultimateAX;
		Float penultimateAY;
		Float lastAntiX;
		Float lastAntiY;
		 ::trilateral3::drawing::Pen pen;
		int endLine;
		Float ax;
		Float ay;
		Float bx;
		Float by;
		Float cx;
		Float cy;
		 ::Dynamic dx;
		 ::Dynamic dy;
		 ::Dynamic ex;
		 ::Dynamic ey;
		 ::Dynamic dxPrev;
		 ::Dynamic dyPrev;
		 ::Dynamic exPrev;
		 ::Dynamic eyPrev;
		 ::Dynamic dxOld;
		 ::Dynamic dyOld;
		 ::Dynamic exOld;
		 ::Dynamic eyOld;
		Float jx;
		Float jy;
		bool lastClock;
		Float jxOld;
		Float jyOld;
		Float kax;
		Float kay;
		Float kbx;
		Float kby;
		Float kcx;
		Float kcy;
		Float ncx;
		Float ncy;
		Float quadIndex;
		Float angleA;
		Float halfA;
		Float beta;
		Float r;
		Float theta;
		 ::Dynamic angle1;
		Float angle2;
		void reset();
		::Dynamic reset_dyn();

		int count;
		void endEdges();
		::Dynamic endEdges_dyn();

		void addQuads(bool clockWise,Float width_);
		::Dynamic addQuads_dyn();

};

} // end namespace trilateral3
} // end namespace drawing

#endif /* INCLUDED_trilateral3_drawing_Contour */ 
