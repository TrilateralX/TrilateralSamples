// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_pallette_utils_ARGB
#define INCLUDED_pallette_utils_ARGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4e5fe218f29cef28_6_new)
HX_DECLARE_CLASS2(pallette,utils,ARGB)

namespace pallette{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ARGB_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ARGB_obj OBJ_;
		ARGB_obj();

	public:
		enum { _hx_ClassId = 0x44344228 };

		void __construct(Float a,Float r,Float g,Float b);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="pallette.utils.ARGB")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"pallette.utils.ARGB"); }

		inline static ::hx::ObjectPtr< ARGB_obj > __new(Float a,Float r,Float g,Float b) {
			::hx::ObjectPtr< ARGB_obj > __this = new ARGB_obj();
			__this->__construct(a,r,g,b);
			return __this;
		}

		inline static ::hx::ObjectPtr< ARGB_obj > __alloc(::hx::Ctx *_hx_ctx,Float a,Float r,Float g,Float b) {
			ARGB_obj *__this = (ARGB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ARGB_obj), false, "pallette.utils.ARGB"));
			*(void **)__this = ARGB_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_4e5fe218f29cef28_6_new)
HXLINE(  10)		( ( ::pallette::utils::ARGB)(__this) )->b = ((Float)0.);
HXLINE(   9)		( ( ::pallette::utils::ARGB)(__this) )->g = ((Float)0.);
HXLINE(   8)		( ( ::pallette::utils::ARGB)(__this) )->r = ((Float)0.);
HXLINE(   7)		( ( ::pallette::utils::ARGB)(__this) )->a = ((Float)0.);
HXLINE(  12)		( ( ::pallette::utils::ARGB)(__this) )->a = a;
HXLINE(  13)		( ( ::pallette::utils::ARGB)(__this) )->r = r;
HXLINE(  14)		( ( ::pallette::utils::ARGB)(__this) )->g = g;
HXLINE(  15)		( ( ::pallette::utils::ARGB)(__this) )->b = b;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ARGB_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ARGB",4c,55,35,2b); }

		Float a;
		Float r;
		Float g;
		Float b;
};

} // end namespace pallette
} // end namespace utils

#endif /* INCLUDED_pallette_utils_ARGB */ 