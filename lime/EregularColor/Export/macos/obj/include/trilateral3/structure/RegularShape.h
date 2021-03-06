// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_trilateral3_structure_RegularShape
#define INCLUDED_trilateral3_structure_RegularShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fb83b890896e3f0e_8_new)
HX_DECLARE_CLASS2(trilateral3,structure,RegularShape)

namespace trilateral3{
namespace structure{


class HXCPP_CLASS_ATTRIBUTES RegularShape_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RegularShape_obj OBJ_;
		RegularShape_obj();

	public:
		enum { _hx_ClassId = 0x5be2fff5 };

		void __construct(Float x,Float y,Float radius,int color);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.structure.RegularShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.structure.RegularShape"); }

		inline static ::hx::ObjectPtr< RegularShape_obj > __new(Float x,Float y,Float radius,int color) {
			::hx::ObjectPtr< RegularShape_obj > __this = new RegularShape_obj();
			__this->__construct(x,y,radius,color);
			return __this;
		}

		inline static ::hx::ObjectPtr< RegularShape_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float radius,int color) {
			RegularShape_obj *__this = (RegularShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RegularShape_obj), false, "trilateral3.structure.RegularShape"));
			*(void **)__this = RegularShape_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fb83b890896e3f0e_8_new)
HXLINE(   9)		( ( ::trilateral3::structure::RegularShape)(__this) )->x = x;
HXLINE(  10)		( ( ::trilateral3::structure::RegularShape)(__this) )->y = y;
HXLINE(  11)		( ( ::trilateral3::structure::RegularShape)(__this) )->radius = radius;
HXLINE(  12)		( ( ::trilateral3::structure::RegularShape)(__this) )->color = color;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RegularShape_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RegularShape",45,3f,40,34); }

		Float x;
		Float y;
		Float radius;
		int color;
		 ::trilateral3::structure::RegularShape clone();
		::Dynamic clone_dyn();

};

} // end namespace trilateral3
} // end namespace structure

#endif /* INCLUDED_trilateral3_structure_RegularShape */ 
