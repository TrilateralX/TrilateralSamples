// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_hxGeomAlgo__Tess2_PQHandleElem
#define INCLUDED_hxGeomAlgo__Tess2_PQHandleElem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,PQHandleElem)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,TessVertex)

namespace hxGeomAlgo{
namespace _Tess2{


class HXCPP_CLASS_ATTRIBUTES PQHandleElem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PQHandleElem_obj OBJ_;
		PQHandleElem_obj();

	public:
		enum { _hx_ClassId = 0x47c34679 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxGeomAlgo._Tess2.PQHandleElem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxGeomAlgo._Tess2.PQHandleElem"); }
		static ::hx::ObjectPtr< PQHandleElem_obj > __new();
		static ::hx::ObjectPtr< PQHandleElem_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PQHandleElem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PQHandleElem",b8,b1,9d,aa); }

		 ::hxGeomAlgo::_Tess2::TessVertex key;
		int node;
};

} // end namespace hxGeomAlgo
} // end namespace _Tess2

#endif /* INCLUDED_hxGeomAlgo__Tess2_PQHandleElem */ 
