// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_hxGeomAlgo_Debug
#define INCLUDED_hxGeomAlgo_Debug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxGeomAlgo,Debug)

namespace hxGeomAlgo{


class HXCPP_CLASS_ATTRIBUTES Debug_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Debug_obj OBJ_;
		Debug_obj();

	public:
		enum { _hx_ClassId = 0x7fb05c68 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxGeomAlgo.Debug")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hxGeomAlgo.Debug"); }

		inline static ::hx::ObjectPtr< Debug_obj > __new() {
			::hx::ObjectPtr< Debug_obj > __this = new Debug_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Debug_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Debug_obj *__this = (Debug_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Debug_obj), false, "hxGeomAlgo.Debug"));
			*(void **)__this = Debug_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Debug_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Debug",33,c2,4c,6a); }

		static void _hx_assert(bool cond,::String message, ::Dynamic pos);
		static ::Dynamic _hx_assert_dyn();

};

} // end namespace hxGeomAlgo

#endif /* INCLUDED_hxGeomAlgo_Debug */ 
