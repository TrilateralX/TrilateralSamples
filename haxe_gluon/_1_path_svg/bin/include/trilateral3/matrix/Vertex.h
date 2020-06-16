// Generated by Haxe 4.2.0-rc.1+cb30bd580
#ifndef INCLUDED_trilateral3_matrix_Vertex
#define INCLUDED_trilateral3_matrix_Vertex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(trilateral3,matrix,Vertex)

namespace trilateral3{
namespace matrix{


class HXCPP_CLASS_ATTRIBUTES Vertex_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Vertex_obj OBJ_;
		Vertex_obj();

	public:
		enum { _hx_ClassId = 0x4e1fe58c };

		void __construct(Float x,Float y,Float z,::hx::Null< Float >  __o_w);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.matrix.Vertex")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.matrix.Vertex"); }

		inline static ::hx::ObjectPtr< Vertex_obj > __new(Float x,Float y,Float z,::hx::Null< Float >  __o_w) {
			::hx::ObjectPtr< Vertex_obj > __this = new Vertex_obj();
			__this->__construct(x,y,z,__o_w);
			return __this;
		}

		inline static ::hx::ObjectPtr< Vertex_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float z,::hx::Null< Float >  __o_w) {
			Vertex_obj *__this = (Vertex_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Vertex_obj), false, "trilateral3.matrix.Vertex"));
			*(void **)__this = Vertex_obj::_hx_vtable;
{
	Float w = __o_w.Default(((Float)1.));
	( ( ::trilateral3::matrix::Vertex)(__this) )->w = ((Float)1.);
	( ( ::trilateral3::matrix::Vertex)(__this) )->z = ((Float)0.);
	( ( ::trilateral3::matrix::Vertex)(__this) )->y = ((Float)0.);
	( ( ::trilateral3::matrix::Vertex)(__this) )->x = ((Float)0.);
	( ( ::trilateral3::matrix::Vertex)(__this) )->x = x;
	( ( ::trilateral3::matrix::Vertex)(__this) )->y = y;
	( ( ::trilateral3::matrix::Vertex)(__this) )->z = z;
	( ( ::trilateral3::matrix::Vertex)(__this) )->w = w;
}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Vertex_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Vertex",84,4f,dc,d5); }

		Float x;
		Float y;
		Float z;
		Float w;
};

} // end namespace trilateral3
} // end namespace matrix

#endif /* INCLUDED_trilateral3_matrix_Vertex */ 
