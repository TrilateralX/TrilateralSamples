// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_trilateral3_math__Algebra_Algebra_Fields_
#define INCLUDED_trilateral3_math__Algebra_Algebra_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(trilateral3,math,_Algebra,Algebra_Fields_)

namespace trilateral3{
namespace math{
namespace _Algebra{


class HXCPP_CLASS_ATTRIBUTES Algebra_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Algebra_Fields__obj OBJ_;
		Algebra_Fields__obj();

	public:
		enum { _hx_ClassId = 0x7459f04b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.math._Algebra.Algebra_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.math._Algebra.Algebra_Fields_"); }

		inline static ::hx::ObjectPtr< Algebra_Fields__obj > __new() {
			::hx::ObjectPtr< Algebra_Fields__obj > __this = new Algebra_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Algebra_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Algebra_Fields__obj *__this = (Algebra_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Algebra_Fields__obj), false, "trilateral3.math._Algebra.Algebra_Fields_"));
			*(void **)__this = Algebra_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Algebra_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Algebra_Fields_",6f,51,fa,dc); }

		static void __boot();
		static Float quadStep;
};

} // end namespace trilateral3
} // end namespace math
} // end namespace _Algebra

#endif /* INCLUDED_trilateral3_math__Algebra_Algebra_Fields_ */ 
