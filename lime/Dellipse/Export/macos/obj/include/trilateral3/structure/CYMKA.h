// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_trilateral3_structure_CYMKA
#define INCLUDED_trilateral3_structure_CYMKA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_00f1b866daa03499_6_new)
HX_DECLARE_CLASS2(trilateral3,structure,CYMKA)

namespace trilateral3{
namespace structure{


class HXCPP_CLASS_ATTRIBUTES CYMKA_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CYMKA_obj OBJ_;
		CYMKA_obj();

	public:
		enum { _hx_ClassId = 0x7fb686c5 };

		void __construct(Float c,Float y,Float m,Float k, ::Dynamic a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.structure.CYMKA")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.structure.CYMKA"); }

		inline static ::hx::ObjectPtr< CYMKA_obj > __new(Float c,Float y,Float m,Float k, ::Dynamic a) {
			::hx::ObjectPtr< CYMKA_obj > __this = new CYMKA_obj();
			__this->__construct(c,y,m,k,a);
			return __this;
		}

		inline static ::hx::ObjectPtr< CYMKA_obj > __alloc(::hx::Ctx *_hx_ctx,Float c,Float y,Float m,Float k, ::Dynamic a) {
			CYMKA_obj *__this = (CYMKA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CYMKA_obj), false, "trilateral3.structure.CYMKA"));
			*(void **)__this = CYMKA_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_00f1b866daa03499_6_new)
HXLINE(  11)		( ( ::trilateral3::structure::CYMKA)(__this) )->a = ((Float)1.);
HXLINE(  10)		( ( ::trilateral3::structure::CYMKA)(__this) )->k = ((Float)0.);
HXLINE(   9)		( ( ::trilateral3::structure::CYMKA)(__this) )->m = ((Float)0.);
HXLINE(   8)		( ( ::trilateral3::structure::CYMKA)(__this) )->y = ((Float)0.);
HXLINE(   7)		( ( ::trilateral3::structure::CYMKA)(__this) )->c = ((Float)0.);
HXLINE(  13)		( ( ::trilateral3::structure::CYMKA)(__this) )->c = c;
HXLINE(  14)		( ( ::trilateral3::structure::CYMKA)(__this) )->y = y;
HXLINE(  15)		( ( ::trilateral3::structure::CYMKA)(__this) )->m = m;
HXLINE(  16)		( ( ::trilateral3::structure::CYMKA)(__this) )->k = k;
HXLINE(  17)		if (::hx::IsNotNull( a )) {
HXLINE(  17)			( ( ::trilateral3::structure::CYMKA)(__this) )->a = ( (Float)(a) );
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

} // end namespace trilateral3
} // end namespace structure

#endif /* INCLUDED_trilateral3_structure_CYMKA */ 
