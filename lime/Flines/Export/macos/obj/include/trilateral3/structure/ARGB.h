// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_trilateral3_structure_ARGB
#define INCLUDED_trilateral3_structure_ARGB

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_87bed562f2274cd6_6_new)
HX_DECLARE_CLASS2(trilateral3,structure,ARGB)

namespace trilateral3{
namespace structure{


class HXCPP_CLASS_ATTRIBUTES ARGB_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ARGB_obj OBJ_;
		ARGB_obj();

	public:
		enum { _hx_ClassId = 0x30c97698 };

		void __construct(Float a,Float r,Float g,Float b);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.structure.ARGB")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.structure.ARGB"); }

		inline static ::hx::ObjectPtr< ARGB_obj > __new(Float a,Float r,Float g,Float b) {
			::hx::ObjectPtr< ARGB_obj > __this = new ARGB_obj();
			__this->__construct(a,r,g,b);
			return __this;
		}

		inline static ::hx::ObjectPtr< ARGB_obj > __alloc(::hx::Ctx *_hx_ctx,Float a,Float r,Float g,Float b) {
			ARGB_obj *__this = (ARGB_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ARGB_obj), false, "trilateral3.structure.ARGB"));
			*(void **)__this = ARGB_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_87bed562f2274cd6_6_new)
HXLINE(  10)		( ( ::trilateral3::structure::ARGB)(__this) )->b = ((Float)0.);
HXLINE(   9)		( ( ::trilateral3::structure::ARGB)(__this) )->g = ((Float)0.);
HXLINE(   8)		( ( ::trilateral3::structure::ARGB)(__this) )->r = ((Float)0.);
HXLINE(   7)		( ( ::trilateral3::structure::ARGB)(__this) )->a = ((Float)0.);
HXLINE(  12)		( ( ::trilateral3::structure::ARGB)(__this) )->a = a;
HXLINE(  13)		( ( ::trilateral3::structure::ARGB)(__this) )->r = r;
HXLINE(  14)		( ( ::trilateral3::structure::ARGB)(__this) )->g = g;
HXLINE(  15)		( ( ::trilateral3::structure::ARGB)(__this) )->b = b;
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

} // end namespace trilateral3
} // end namespace structure

#endif /* INCLUDED_trilateral3_structure_ARGB */ 