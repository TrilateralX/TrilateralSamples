// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_kitGL_glLime__InterleaveDataGL_InterleaveDataGL_Impl_
#define INCLUDED_kitGL_glLime__InterleaveDataGL_InterleaveDataGL_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kitGL,glLime,_InterleaveDataGL,InterleaveDataGL_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace kitGL{
namespace glLime{
namespace _InterleaveDataGL{


class HXCPP_CLASS_ATTRIBUTES InterleaveDataGL_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InterleaveDataGL_Impl__obj OBJ_;
		InterleaveDataGL_Impl__obj();

	public:
		enum { _hx_ClassId = 0x62ed435e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kitGL.glLime._InterleaveDataGL.InterleaveDataGL_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"kitGL.glLime._InterleaveDataGL.InterleaveDataGL_Impl_"); }

		inline static ::hx::ObjectPtr< InterleaveDataGL_Impl__obj > __new() {
			::hx::ObjectPtr< InterleaveDataGL_Impl__obj > __this = new InterleaveDataGL_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< InterleaveDataGL_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			InterleaveDataGL_Impl__obj *__this = (InterleaveDataGL_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InterleaveDataGL_Impl__obj), false, "kitGL.glLime._InterleaveDataGL.InterleaveDataGL_Impl_"));
			*(void **)__this = InterleaveDataGL_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InterleaveDataGL_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InterleaveDataGL_Impl_",ca,81,84,cb); }

		static  ::Dynamic _new( ::Dynamic tInterleaveDataGL);
		static ::Dynamic _new_dyn();

		static  ::lime::utils::ArrayBufferView get_data( ::Dynamic this1);
		static ::Dynamic get_data_dyn();

		static int get_size( ::Dynamic this1);
		static ::Dynamic get_size_dyn();

};

} // end namespace kitGL
} // end namespace glLime
} // end namespace _InterleaveDataGL

#endif /* INCLUDED_kitGL_glLime__InterleaveDataGL_InterleaveDataGL_Impl_ */ 