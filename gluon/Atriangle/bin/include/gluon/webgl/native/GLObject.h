// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_gluon_webgl_native_GLObject
#define INCLUDED_gluon_webgl_native_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS3(gluon,webgl,native,GLObject)

namespace gluon{
namespace webgl{
namespace native{


class HXCPP_CLASS_ATTRIBUTES GLObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();

	public:
		enum { _hx_ClassId = 0x6d90cfad };

		void __construct( ::gluon::webgl::native::GLContext context,unsigned int handle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gluon.webgl.native.GLObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gluon.webgl.native.GLObject"); }
		static ::hx::ObjectPtr< GLObject_obj > __new( ::gluon::webgl::native::GLContext context,unsigned int handle);
		static ::hx::ObjectPtr< GLObject_obj > __alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext context,unsigned int handle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLObject",c4,da,30,7f); }

		 ::gluon::webgl::native::GLContext context;
		unsigned int handle;
		virtual void finalize();
		::Dynamic finalize_dyn();

};

} // end namespace gluon
} // end namespace webgl
} // end namespace native

#endif /* INCLUDED_gluon_webgl_native_GLObject */ 
