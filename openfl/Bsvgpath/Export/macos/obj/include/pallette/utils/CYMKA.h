// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_pallette_utils_CYMKA
#define INCLUDED_pallette_utils_CYMKA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bbc907302984f44d_6_new)
HX_DECLARE_CLASS2(pallette,utils,CYMKA)

namespace pallette{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES CYMKA_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CYMKA_obj OBJ_;
		CYMKA_obj();

	public:
		enum { _hx_ClassId = 0x0e24d16d };

		void __construct(Float c,Float y,Float m,Float k, ::Dynamic a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="pallette.utils.CYMKA")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"pallette.utils.CYMKA"); }

		inline static ::hx::ObjectPtr< CYMKA_obj > __new(Float c,Float y,Float m,Float k, ::Dynamic a) {
			::hx::ObjectPtr< CYMKA_obj > __this = new CYMKA_obj();
			__this->__construct(c,y,m,k,a);
			return __this;
		}

		inline static ::hx::ObjectPtr< CYMKA_obj > __alloc(::hx::Ctx *_hx_ctx,Float c,Float y,Float m,Float k, ::Dynamic a) {
			CYMKA_obj *__this = (CYMKA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CYMKA_obj), false, "pallette.utils.CYMKA"));
			*(void **)__this = CYMKA_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bbc907302984f44d_6_new)
HXLINE(  11)		( ( ::pallette::utils::CYMKA)(__this) )->a = ((Float)1.);
HXLINE(  10)		( ( ::pallette::utils::CYMKA)(__this) )->k = ((Float)0.);
HXLINE(   9)		( ( ::pallette::utils::CYMKA)(__this) )->m = ((Float)0.);
HXLINE(   8)		( ( ::pallette::utils::CYMKA)(__this) )->y = ((Float)0.);
HXLINE(   7)		( ( ::pallette::utils::CYMKA)(__this) )->c = ((Float)0.);
HXLINE(  13)		( ( ::pallette::utils::CYMKA)(__this) )->c = c;
HXLINE(  14)		( ( ::pallette::utils::CYMKA)(__this) )->y = y;
HXLINE(  15)		( ( ::pallette::utils::CYMKA)(__this) )->m = m;
HXLINE(  16)		( ( ::pallette::utils::CYMKA)(__this) )->k = k;
HXLINE(  17)		if (::hx::IsNotNull( a )) {
HXLINE(  17)			( ( ::pallette::utils::CYMKA)(__this) )->a = ( (Float)(a) );
            		}
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CYMKA_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CYMKA",2d,8a,e7,ce); }

		Float c;
		Float y;
		Float m;
		Float k;
		Float a;
};

} // end namespace pallette
} // end namespace utils

#endif /* INCLUDED_pallette_utils_CYMKA */ 
