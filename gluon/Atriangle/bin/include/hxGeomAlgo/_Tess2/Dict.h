// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_hxGeomAlgo__Tess2_Dict
#define INCLUDED_hxGeomAlgo__Tess2_Dict

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxGeomAlgo,Tesselator)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,ActiveRegion)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,Dict)
HX_DECLARE_CLASS2(hxGeomAlgo,_Tess2,DictNode)

namespace hxGeomAlgo{
namespace _Tess2{


class HXCPP_CLASS_ATTRIBUTES Dict_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Dict_obj OBJ_;
		Dict_obj();

	public:
		enum { _hx_ClassId = 0x1f78cc1f };

		void __construct( ::hxGeomAlgo::Tesselator frame, ::Dynamic leq);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hxGeomAlgo._Tess2.Dict")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hxGeomAlgo._Tess2.Dict"); }
		static ::hx::ObjectPtr< Dict_obj > __new( ::hxGeomAlgo::Tesselator frame, ::Dynamic leq);
		static ::hx::ObjectPtr< Dict_obj > __alloc(::hx::Ctx *_hx_ctx, ::hxGeomAlgo::Tesselator frame, ::Dynamic leq);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Dict_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Dict",96,85,42,2d); }

		 ::hxGeomAlgo::_Tess2::DictNode head;
		 ::hxGeomAlgo::Tesselator frame;
		 ::Dynamic leq;
		Dynamic leq_dyn() { return leq;}
		 ::hxGeomAlgo::_Tess2::DictNode min();
		::Dynamic min_dyn();

		 ::hxGeomAlgo::_Tess2::DictNode insert( ::hxGeomAlgo::_Tess2::ActiveRegion k);
		::Dynamic insert_dyn();

		 ::hxGeomAlgo::_Tess2::DictNode search( ::hxGeomAlgo::_Tess2::ActiveRegion key);
		::Dynamic search_dyn();

		 ::hxGeomAlgo::_Tess2::DictNode insertBefore( ::hxGeomAlgo::_Tess2::DictNode node, ::hxGeomAlgo::_Tess2::ActiveRegion key);
		::Dynamic insertBefore_dyn();

		void _hx_delete( ::hxGeomAlgo::_Tess2::DictNode node);
		::Dynamic _hx_delete_dyn();

};

} // end namespace hxGeomAlgo
} // end namespace _Tess2

#endif /* INCLUDED_hxGeomAlgo__Tess2_Dict */ 
