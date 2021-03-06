// Generated by Haxe 4.2.0-rc.1+7dc565e63
#ifndef INCLUDED_openfl_filters_ConvolutionFilter
#define INCLUDED_openfl_filters_ConvolutionFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilterShader)
HX_DECLARE_CLASS2(openfl,filters,ConvolutionFilter)
HX_DECLARE_CLASS3(openfl,filters,_ConvolutionFilter,ConvolutionShader)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES ConvolutionFilter_obj : public  ::openfl::filters::BitmapFilter_obj
{
	public:
		typedef  ::openfl::filters::BitmapFilter_obj super;
		typedef ConvolutionFilter_obj OBJ_;
		ConvolutionFilter_obj();

	public:
		enum { _hx_ClassId = 0x161fbf0d };

		void __construct(::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.ConvolutionFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.ConvolutionFilter"); }
		static ::hx::ObjectPtr< ConvolutionFilter_obj > __new(::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		static ::hx::ObjectPtr< ConvolutionFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_matrixX,::hx::Null< int >  __o_matrixY,::Array< Float > matrix,::hx::Null< Float >  __o_divisor,::hx::Null< Float >  __o_bias,::hx::Null< bool >  __o_preserveAlpha,::hx::Null< bool >  __o_clamp,::hx::Null< int >  __o_color,::hx::Null< Float >  __o_alpha);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ConvolutionFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ConvolutionFilter",d0,04,39,50); }

		static void __boot();
		static  ::openfl::filters::_ConvolutionFilter::ConvolutionShader _hx___convolutionShader;
		Float alpha;
		Float bias;
		bool clamp;
		int color;
		Float divisor;
		int matrixX;
		int matrixY;
		bool preserveAlpha;
		::Array< Float > _hx___matrix;
		 ::openfl::filters::BitmapFilter clone();

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);

		::Array< Float > get_matrix();
		::Dynamic get_matrix_dyn();

		::Array< Float > set_matrix(::Array< Float > v);
		::Dynamic set_matrix_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_ConvolutionFilter */ 
