// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_TrilateralOpenFLTriangle
#define INCLUDED_TrilateralOpenFLTriangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_trilateral3_target_openfl_AppOpenFL
#include <trilateral3/target/openfl/AppOpenFL.h>
#endif
HX_DECLARE_CLASS0(TrilateralOpenFLTriangle)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS3(trilateral3,target,openfl,AppOpenFL)



class HXCPP_CLASS_ATTRIBUTES TrilateralOpenFLTriangle_obj : public  ::trilateral3::target::openfl::AppOpenFL_obj
{
	public:
		typedef  ::trilateral3::target::openfl::AppOpenFL_obj super;
		typedef TrilateralOpenFLTriangle_obj OBJ_;
		TrilateralOpenFLTriangle_obj();

	public:
		enum { _hx_ClassId = 0x40b7d324 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TrilateralOpenFLTriangle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TrilateralOpenFLTriangle"); }
		static ::hx::ObjectPtr< TrilateralOpenFLTriangle_obj > __new();
		static ::hx::ObjectPtr< TrilateralOpenFLTriangle_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrilateralOpenFLTriangle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrilateralOpenFLTriangle",64,60,c5,11); }

		void draw();

		void renderDraw();

};


#endif /* INCLUDED_TrilateralOpenFLTriangle */ 
