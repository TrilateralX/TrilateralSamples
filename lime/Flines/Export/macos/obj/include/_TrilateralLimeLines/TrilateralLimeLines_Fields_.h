// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED__TrilateralLimeLines_TrilateralLimeLines_Fields_
#define INCLUDED__TrilateralLimeLines_TrilateralLimeLines_Fields_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_TrilateralLimeLines,TrilateralLimeLines_Fields_)

namespace _TrilateralLimeLines{


class HXCPP_CLASS_ATTRIBUTES TrilateralLimeLines_Fields__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TrilateralLimeLines_Fields__obj OBJ_;
		TrilateralLimeLines_Fields__obj();

	public:
		enum { _hx_ClassId = 0x6bcea546 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_TrilateralLimeLines.TrilateralLimeLines_Fields_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"_TrilateralLimeLines.TrilateralLimeLines_Fields_"); }

		inline static ::hx::ObjectPtr< TrilateralLimeLines_Fields__obj > __new() {
			::hx::ObjectPtr< TrilateralLimeLines_Fields__obj > __this = new TrilateralLimeLines_Fields__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TrilateralLimeLines_Fields__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TrilateralLimeLines_Fields__obj *__this = (TrilateralLimeLines_Fields__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralLimeLines_Fields__obj), false, "_TrilateralLimeLines.TrilateralLimeLines_Fields_"));
			*(void **)__this = TrilateralLimeLines_Fields__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TrilateralLimeLines_Fields__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TrilateralLimeLines_Fields_",65,af,0d,a0); }

		static void __boot();
		static ::Array< Float > shape1;
		static ::Array< Float > shape2;
		static ::Array< Float > shape3;
		static ::Array< Float > shape4;
		static ::Array< Float > shape5;
		static ::Array< Float > shape6;
		static ::Array< Float > shape7;
		static ::Array< Float > shape8;
		static ::Array< Float > shape9;
		static ::Array< Float > shape10;
		static ::Array< Float > shape11;
		static ::Array< Float > shape12;
		static ::Array< Float > shape13;
		static ::Array< Float > shape14;
		static ::Array< Float > shape15;
		static ::Array< Float > shape16;
		static ::Array< Float > shape17;
		static ::Array< Float > shape18;
		static ::Array< Float > shape19;
		static ::Array< Float > shape20;
		static ::Array< Float > shape21;
		static ::Array< Float > shape22;
};

} // end namespace _TrilateralLimeLines

#endif /* INCLUDED__TrilateralLimeLines_TrilateralLimeLines_Fields_ */ 