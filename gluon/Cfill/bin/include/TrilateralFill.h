// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_TrilateralFill
#define INCLUDED_TrilateralFill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kitGL_gluon_InterleaveAlterGL
#include <kitGL/gluon/InterleaveAlterGL.h>
#endif
HX_DECLARE_CLASS0(TrilateralFill)
HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS2(kitGL,gluon,InterleaveAlterGL)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)
HX_DECLARE_CLASS2(trilateral3,nodule,PenNodule)



class HXCPP_CLASS_ATTRIBUTES TrilateralFill_obj : public  ::kitGL::gluon::InterleaveAlterGL_obj
{
	public:
		typedef  ::kitGL::gluon::InterleaveAlterGL_obj super;
		typedef TrilateralFill_obj OBJ_;
		TrilateralFill_obj();

	public:
		enum { _hx_ClassId = 0x23e290f7 };

		void __construct( ::gluon::webgl::native::GLContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrilateralFill")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TrilateralFill"); }
		static ::hx::ObjectPtr< TrilateralFill_obj > __new( ::gluon::webgl::native::GLContext gl);
		static ::hx::ObjectPtr< TrilateralFill_obj > __alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext gl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrilateralFill_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrilateralFill",6f,fd,7a,f3); }

		::String bird_d;
		 ::trilateral3::drawing::Pen pen;
		 ::trilateral3::nodule::PenNodule penNodule;
		void draw();
		::Dynamic draw_dyn();

};


#endif /* INCLUDED_TrilateralFill */ 