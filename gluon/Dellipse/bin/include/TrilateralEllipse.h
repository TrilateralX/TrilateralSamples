// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_TrilateralEllipse
#define INCLUDED_TrilateralEllipse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kitGL_gluon_InterleaveAlterGL
#include <kitGL/gluon/InterleaveAlterGL.h>
#endif
HX_DECLARE_CLASS0(TrilateralEllipse)
HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS2(kitGL,gluon,InterleaveAlterGL)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)
HX_DECLARE_CLASS2(trilateral3,nodule,PenNodule)



class HXCPP_CLASS_ATTRIBUTES TrilateralEllipse_obj : public  ::kitGL::gluon::InterleaveAlterGL_obj
{
	public:
		typedef  ::kitGL::gluon::InterleaveAlterGL_obj super;
		typedef TrilateralEllipse_obj OBJ_;
		TrilateralEllipse_obj();

	public:
		enum { _hx_ClassId = 0x7f94e39a };

		void __construct( ::gluon::webgl::native::GLContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrilateralEllipse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TrilateralEllipse"); }
		static ::hx::ObjectPtr< TrilateralEllipse_obj > __new( ::gluon::webgl::native::GLContext gl);
		static ::hx::ObjectPtr< TrilateralEllipse_obj > __alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext gl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrilateralEllipse_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrilateralEllipse",72,2d,f6,80); }

		int crimson;
		int silver;
		int gainsboro;
		int lightGray;
		::String arc0_0;
		::String arc0_1;
		::String arc0_2;
		::String arc0_3;
		::String arc1_0;
		::String arc1_1;
		::String arc1_2;
		::String arc1_3;
		::String arc2_0;
		::String arc2_1;
		::String arc2_2;
		::String arc2_3;
		::String arc3_0;
		::String arc3_1;
		::String arc3_2;
		::String arc3_3;
		::String arc4_0;
		::String arc4_1;
		::String arc4_2;
		::String arc4_3;
		::String arc5_0;
		::String arc5_1;
		::String arc5_2;
		::String arc5_3;
		::String arc6_0;
		::String arc6_1;
		::String arc6_2;
		::String arc6_3;
		::String arc7_0;
		::String arc7_1;
		::String arc7_2;
		::String arc7_3;
		 ::trilateral3::drawing::Pen pen;
		 ::trilateral3::nodule::PenNodule penNodule;
		void draw();
		::Dynamic draw_dyn();

		void drawSet( ::trilateral3::drawing::Pen pen,::Array< ::String > arcs,::Array< int > col,Float x,Float y,Float s);
		::Dynamic drawSet_dyn();

		void draw_d( ::trilateral3::drawing::Pen pen,::String d,Float x,Float y,Float s,Float w,int color);
		::Dynamic draw_d_dyn();

};


#endif /* INCLUDED_TrilateralEllipse */ 
