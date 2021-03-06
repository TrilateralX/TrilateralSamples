// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_justPath_transform_TranslationContext
#define INCLUDED_justPath_transform_TranslationContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
HX_DECLARE_CLASS1(justPath,IPathContext)
HX_DECLARE_CLASS2(justPath,transform,TranslationContext)

namespace justPath{
namespace transform{


class HXCPP_CLASS_ATTRIBUTES TranslationContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TranslationContext_obj OBJ_;
		TranslationContext_obj();

	public:
		enum { _hx_ClassId = 0x1757f015 };

		void __construct(::Dynamic pathContext_,Float dx_,Float dy_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="justPath.transform.TranslationContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"justPath.transform.TranslationContext"); }
		static ::hx::ObjectPtr< TranslationContext_obj > __new(::Dynamic pathContext_,Float dx_,Float dy_);
		static ::hx::ObjectPtr< TranslationContext_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic pathContext_,Float dx_,Float dy_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TranslationContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("TranslationContext",1e,21,cc,d5); }

		::Dynamic pathContext;
		Float dx;
		Float dy;
		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void quadTo(Float x1,Float y1,Float x2,Float y2);
		::Dynamic quadTo_dyn();

		void curveTo(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		::Dynamic curveTo_dyn();

};

} // end namespace justPath
} // end namespace transform

#endif /* INCLUDED_justPath_transform_TranslationContext */ 
