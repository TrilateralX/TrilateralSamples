// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_gluon_webgl__GLContext_GLContext_Impl_
#define INCLUDED_gluon_webgl__GLContext_GLContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(gluon,webgl,_GLContext,GLContext_Impl_)
HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)

namespace gluon{
namespace webgl{
namespace _GLContext{


class HXCPP_CLASS_ATTRIBUTES GLContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLContext_Impl__obj OBJ_;
		GLContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2c4cd4ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="gluon.webgl._GLContext.GLContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"gluon.webgl._GLContext.GLContext_Impl_"); }

		inline static ::hx::ObjectPtr< GLContext_Impl__obj > __new() {
			::hx::ObjectPtr< GLContext_Impl__obj > __this = new GLContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLContext_Impl__obj *__this = (GLContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLContext_Impl__obj), false, "gluon.webgl._GLContext.GLContext_Impl_"));
			*(void **)__this = GLContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLContext_Impl_",6a,ce,16,8f); }

		static void reportErrors( ::gluon::webgl::native::GLContext this1,::String fnName);
		static ::Dynamic reportErrors_dyn();

};

} // end namespace gluon
} // end namespace webgl
} // end namespace _GLContext

#endif /* INCLUDED_gluon_webgl__GLContext_GLContext_Impl_ */ 
