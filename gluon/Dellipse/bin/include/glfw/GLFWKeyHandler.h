// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_glfw_GLFWKeyHandler
#define INCLUDED_glfw_GLFWKeyHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
HX_DECLARE_CLASS1(glfw,GLFWKeyHandler)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace glfw{


class HXCPP_CLASS_ATTRIBUTES GLFWKeyHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLFWKeyHandler_obj OBJ_;
		GLFWKeyHandler_obj();

	public:
		enum { _hx_ClassId = 0x47dc4a77 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="glfw.GLFWKeyHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"glfw.GLFWKeyHandler"); }

		inline static ::hx::ObjectPtr< GLFWKeyHandler_obj > __new() {
			::hx::ObjectPtr< GLFWKeyHandler_obj > __this = new GLFWKeyHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLFWKeyHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLFWKeyHandler_obj *__this = (GLFWKeyHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLFWKeyHandler_obj), false, "glfw.GLFWKeyHandler"));
			*(void **)__this = GLFWKeyHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLFWKeyHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLFWKeyHandler",41,22,34,24); }

		static void __boot();
		static  ::haxe::ds::StringMap listeners;
		static void nativeCallack( GLFWwindow * win,int key,int scancode,int action,int mods);
		static ::Dynamic nativeCallack_dyn();

		static void setCallback( GLFWwindow * win, ::Dynamic func);
		static ::Dynamic setCallback_dyn();

};

} // end namespace glfw

#endif /* INCLUDED_glfw_GLFWKeyHandler */ 