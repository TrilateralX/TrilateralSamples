// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_kitGL_gluon_Ply
#define INCLUDED_kitGL_gluon_Ply

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(gluon,webgl,native,GLBuffer)
HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS3(gluon,webgl,native,GLObject)
HX_DECLARE_CLASS3(gluon,webgl,native,GLProgram)
HX_DECLARE_CLASS2(kitGL,gluon,Ply)

namespace kitGL{
namespace gluon{


class HXCPP_CLASS_ATTRIBUTES Ply_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Ply_obj OBJ_;
		Ply_obj();

	public:
		enum { _hx_ClassId = 0x1a013729 };

		void __construct( ::gluon::webgl::native::GLContext gl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kitGL.gluon.Ply")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"kitGL.gluon.Ply"); }
		static ::hx::ObjectPtr< Ply_obj > __new( ::gluon::webgl::native::GLContext gl);
		static ::hx::ObjectPtr< Ply_obj > __alloc(::hx::Ctx *_hx_ctx, ::gluon::webgl::native::GLContext gl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Ply_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Ply",dd,12,3d,00); }

		 ::Dynamic dataGL;
		int posLoc;
		int colorLoc;
		 ::gluon::webgl::native::GLContext gl;
		 ::gluon::webgl::native::GLProgram program;
		 ::gluon::webgl::native::GLBuffer buf;
		void render(int width,int height);
		::Dynamic render_dyn();

		void renderDraw();
		::Dynamic renderDraw_dyn();

};

} // end namespace kitGL
} // end namespace gluon

#endif /* INCLUDED_kitGL_gluon_Ply */ 
