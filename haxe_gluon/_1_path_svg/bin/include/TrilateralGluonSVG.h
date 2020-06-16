// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_TrilateralGluonSVG
#define INCLUDED_TrilateralGluonSVG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_AppGL
#include <AppGL.h>
#endif
HX_DECLARE_CLASS0(AppGL)
HX_DECLARE_CLASS0(TrilateralGluonSVG)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)



class HXCPP_CLASS_ATTRIBUTES TrilateralGluonSVG_obj : public  ::AppGL_obj
{
	public:
		typedef  ::AppGL_obj super;
		typedef TrilateralGluonSVG_obj OBJ_;
		TrilateralGluonSVG_obj();

	public:
		enum { _hx_ClassId = 0x2ccd5581 };

		void __construct(int width,int height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrilateralGluonSVG")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TrilateralGluonSVG"); }
		static ::hx::ObjectPtr< TrilateralGluonSVG_obj > __new(int width,int height);
		static ::hx::ObjectPtr< TrilateralGluonSVG_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrilateralGluonSVG_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrilateralGluonSVG",c1,72,09,d5); }

		static void main();
		static ::Dynamic main_dyn();

		::String quadtest_d;
		::String cubictest_d;
		void draw( ::trilateral3::drawing::Pen pen);
		::Dynamic draw_dyn();

		void cubicSVG( ::trilateral3::drawing::Pen pen);
		::Dynamic cubicSVG_dyn();

		void quadSVG( ::trilateral3::drawing::Pen pen);
		::Dynamic quadSVG_dyn();

};


#endif /* INCLUDED_TrilateralGluonSVG */ 
