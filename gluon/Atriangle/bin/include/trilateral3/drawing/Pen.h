// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_trilateral3_drawing_Pen
#define INCLUDED_trilateral3_drawing_Pen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bf2a6fc66f3165af_20_new)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)

namespace trilateral3{
namespace drawing{


class HXCPP_CLASS_ATTRIBUTES Pen_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pen_obj OBJ_;
		Pen_obj();

	public:
		enum { _hx_ClassId = 0x33d0c03e };

		void __construct( ::Dynamic paintType_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="trilateral3.drawing.Pen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"trilateral3.drawing.Pen"); }

		inline static ::hx::ObjectPtr< Pen_obj > __new( ::Dynamic paintType_) {
			::hx::ObjectPtr< Pen_obj > __this = new Pen_obj();
			__this->__construct(paintType_);
			return __this;
		}

		inline static ::hx::ObjectPtr< Pen_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic paintType_) {
			Pen_obj *__this = (Pen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pen_obj), true, "trilateral3.drawing.Pen"));
			*(void **)__this = Pen_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bf2a6fc66f3165af_20_new)
HXLINE(  28)		( ( ::trilateral3::drawing::Pen)(__this) )->currentColor = 16435934;
HXLINE(  23)		( ( ::trilateral3::drawing::Pen)(__this) )->useTexture = false;
HXLINE(  22)		( ( ::trilateral3::drawing::Pen)(__this) )->z2D = ((Float)0.);
HXLINE(  39)		( ( ::trilateral3::drawing::Pen)(__this) )->paintType = paintType_;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pen",b9,0c,3d,00); }

		Float z2D;
		bool useTexture;
		int currentColor;
		 ::Dynamic paintType;
};

} // end namespace trilateral3
} // end namespace drawing

#endif /* INCLUDED_trilateral3_drawing_Pen */ 
