// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_dsHelper_iterArr__ArrayPairs_ArrayPairs_Impl_
#define INCLUDED_dsHelper_iterArr__ArrayPairs_ArrayPairs_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(dsHelper,iterArr,_ArrayPairs,ArrayPairs_Impl_)

namespace dsHelper{
namespace iterArr{
namespace _ArrayPairs{


class HXCPP_CLASS_ATTRIBUTES ArrayPairs_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayPairs_Impl__obj OBJ_;
		ArrayPairs_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5d406413 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dsHelper.iterArr._ArrayPairs.ArrayPairs_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"dsHelper.iterArr._ArrayPairs.ArrayPairs_Impl_"); }

		inline static ::hx::ObjectPtr< ArrayPairs_Impl__obj > __new() {
			::hx::ObjectPtr< ArrayPairs_Impl__obj > __this = new ArrayPairs_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayPairs_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ArrayPairs_Impl__obj *__this = (ArrayPairs_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayPairs_Impl__obj), false, "dsHelper.iterArr._ArrayPairs.ArrayPairs_Impl_"));
			*(void **)__this = ArrayPairs_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayPairs_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayPairs_Impl_",80,7b,c2,37); }

		static ::cpp::VirtualArray _new(::cpp::VirtualArray arr);
		static ::Dynamic _new_dyn();

		static int get_length(::cpp::VirtualArray this1);
		static ::Dynamic get_length_dyn();

		static  ::Dynamic access(::cpp::VirtualArray this1,int key);
		static ::Dynamic access_dyn();

		static  ::Dynamic getObj(::cpp::VirtualArray this1,int key);
		static ::Dynamic getObj_dyn();

		static ::cpp::VirtualArray reverse(::cpp::VirtualArray this1);
		static ::Dynamic reverse_dyn();

};

} // end namespace dsHelper
} // end namespace iterArr
} // end namespace _ArrayPairs

#endif /* INCLUDED_dsHelper_iterArr__ArrayPairs_ArrayPairs_Impl_ */ 
