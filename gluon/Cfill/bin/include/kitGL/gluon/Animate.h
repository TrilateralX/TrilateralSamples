// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_kitGL_gluon_Animate
#define INCLUDED_kitGL_gluon_Animate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,MainEvent)
HX_DECLARE_CLASS2(kitGL,gluon,Animate)

namespace kitGL{
namespace gluon{


class HXCPP_CLASS_ATTRIBUTES Animate_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Animate_obj OBJ_;
		Animate_obj();

	public:
		enum { _hx_ClassId = 0x0a7fc8e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kitGL.gluon.Animate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kitGL.gluon.Animate"); }
		static ::hx::ObjectPtr< Animate_obj > __new();
		static ::hx::ObjectPtr< Animate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Animate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Animate",81,02,9e,47); }

		 ::Dynamic onEnterFrame;
		Dynamic onEnterFrame_dyn() { return onEnterFrame;}
		 ::Dynamic onStop;
		Dynamic onStop_dyn() { return onStop;}
		 ::Dynamic onStart;
		Dynamic onStart_dyn() { return onStart;}
		Float lastT;
		 ::haxe::MainEvent mainLoopHandle;
		void start();
		::Dynamic start_dyn();

		void mainLoop();
		::Dynamic mainLoop_dyn();

		void stop();
		::Dynamic stop_dyn();

};

} // end namespace kitGL
} // end namespace gluon

#endif /* INCLUDED_kitGL_gluon_Animate */ 
