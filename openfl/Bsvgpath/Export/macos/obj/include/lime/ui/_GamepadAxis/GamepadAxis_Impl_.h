// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#define INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_GamepadAxis,GamepadAxis_Impl_)

namespace lime{
namespace ui{
namespace _GamepadAxis{


class HXCPP_CLASS_ATTRIBUTES GamepadAxis_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GamepadAxis_Impl__obj OBJ_;
		GamepadAxis_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3d90a2f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui._GamepadAxis.GamepadAxis_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.ui._GamepadAxis.GamepadAxis_Impl_"); }

		inline static ::hx::ObjectPtr< GamepadAxis_Impl__obj > __new() {
			::hx::ObjectPtr< GamepadAxis_Impl__obj > __this = new GamepadAxis_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GamepadAxis_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GamepadAxis_Impl__obj *__this = (GamepadAxis_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GamepadAxis_Impl__obj), false, "lime.ui._GamepadAxis.GamepadAxis_Impl_"));
			*(void **)__this = GamepadAxis_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GamepadAxis_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GamepadAxis_Impl_",e2,1f,75,f1); }

		static void __boot();
		static int LEFT_X;
		static int LEFT_Y;
		static int RIGHT_X;
		static int RIGHT_Y;
		static int TRIGGER_LEFT;
		static int TRIGGER_RIGHT;
		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis

#endif /* INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_ */ 