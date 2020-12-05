// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_TrilateralLimeRotateMove
#include <TrilateralLimeRotateMove.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_kitGL_glLime_InterleaveAlterGL
#include <kitGL/glLime/InterleaveAlterGL.h>
#endif
#ifndef INCLUDED_kitGL_glLime_setup_IAppGL
#include <kitGL/glLime/setup/IAppGL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_trilateral3_Trilateral
#include <trilateral3/Trilateral.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Pen
#include <trilateral3/drawing/Pen.h>
#endif
#ifndef INCLUDED_trilateral3_matrix_MatrixDozen
#include <trilateral3/matrix/MatrixDozen.h>
#endif
#ifndef INCLUDED_trilateral3_nodule_PenNodule
#include <trilateral3/nodule/PenNodule.h>
#endif
#ifndef INCLUDED_trilateral3_structure_StartEnd
#include <trilateral3/structure/StartEnd.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a6cc8687a01abda8_37_new,"TrilateralLimeRotateMove","new",0x01e42fdf,"TrilateralLimeRotateMove.new","TrilateralLimeRotateMove.hx",37,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_51_draw,"TrilateralLimeRotateMove","draw",0x9f335ba5,"TrilateralLimeRotateMove.draw","TrilateralLimeRotateMove.hx",51,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_86_renderDraw,"TrilateralLimeRotateMove","renderDraw",0x484a44db,"TrilateralLimeRotateMove.renderDraw","TrilateralLimeRotateMove.hx",86,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_112_rotateCentre,"TrilateralLimeRotateMove","rotateCentre",0x1806da77,"TrilateralLimeRotateMove.rotateCentre","TrilateralLimeRotateMove.hx",112,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_116_get_x,"TrilateralLimeRotateMove","get_x",0x5f67228e,"TrilateralLimeRotateMove.get_x","TrilateralLimeRotateMove.hx",116,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_118_set_x,"TrilateralLimeRotateMove","set_x",0x4836189a,"TrilateralLimeRotateMove.set_x","TrilateralLimeRotateMove.hx",118,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_125_get_y,"TrilateralLimeRotateMove","get_y",0x5f67228f,"TrilateralLimeRotateMove.get_y","TrilateralLimeRotateMove.hx",125,0x497ab071)
HX_LOCAL_STACK_FRAME(_hx_pos_a6cc8687a01abda8_127_set_y,"TrilateralLimeRotateMove","set_y",0x4836189b,"TrilateralLimeRotateMove.set_y","TrilateralLimeRotateMove.hx",127,0x497ab071)

void TrilateralLimeRotateMove_obj::__construct(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_a6cc8687a01abda8_37_new)
HXLINE(  45)		this->penNodule =  ::trilateral3::nodule::PenNodule_obj::__alloc( HX_CTX ,null());
HXLINE(  43)		this->dy = ::Array_obj< Float >::__new(0);
HXLINE(  42)		this->dx = ::Array_obj< Float >::__new(0);
HXLINE(  41)		this->theta = ((Float)0.);
HXLINE(  47)		super::__construct(width,height);
HXLINE(  48)		::haxe::Log_obj::trace(HX_("TrilateralLimeRotateMove",6d,54,41,43),::hx::SourceInfo(HX_("TrilateralLimeRotateMove.hx",71,b0,7a,49),48,HX_("TrilateralLimeRotateMove",6d,54,41,43),HX_("new",60,d0,53,00)));
            	}

Dynamic TrilateralLimeRotateMove_obj::__CreateEmpty() { return new TrilateralLimeRotateMove_obj; }

void *TrilateralLimeRotateMove_obj::_hx_vtable = 0;

Dynamic TrilateralLimeRotateMove_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrilateralLimeRotateMove_obj > _hx_result = new TrilateralLimeRotateMove_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TrilateralLimeRotateMove_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01c3d3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2c01c3d3;
	} else {
		return inClassId==(int)0x7233c72d;
	}
}

void TrilateralLimeRotateMove_obj::draw(){
            	HX_GC_STACKFRAME(&_hx_pos_a6cc8687a01abda8_51_draw)
HXLINE(  52)		this->interleaveDataGL =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("get_data",b3,11,1e,c2),this->penNodule->get_data_dyn())
            			->setFixed(1,HX_("get_size",4a,5c,0e,cc),this->penNodule->get_size_dyn()));
HXLINE(  53)		this->pen = this->penNodule->pen;
HXLINE(  54)		this->curr = this->pen->drawType->__Field(HX_("triangleCurrent",51,ee,2b,9e),::hx::paccDynamic);
HXLINE(  55)		Float start = ( (Float)(this->pen->drawType->__Field(HX_("get_pos",2b,26,ca,26),::hx::paccDynamic)()) );
HXLINE(  56)		 ::Dynamic drawType = this->pen->drawType;
HXDLIN(  56)		drawType->__Field(HX_("triangle",c8,be,c5,8d),::hx::paccDynamic)(300,100,0,100,300,0,500,300,0);
HXDLIN(  56)		 ::trilateral3::matrix::MatrixDozen m = ::trilateral3::Trilateral_obj::transformMatrix;
HXDLIN(  56)		if (::hx::IsNotNull( m )) {
HXLINE(  56)			drawType->__Field(HX_("transform",6c,2d,93,45),::hx::paccDynamic)(m);
            		}
HXDLIN(  56)		drawType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  56)		int len = 1;
HXLINE(  57)		Float end = ((start + len) - ( (Float)(1) ));
HXLINE(  58)		 ::Dynamic drawType1 = this->pen->drawType;
HXDLIN(  58)		drawType1->__Field(HX_("triangle",c8,be,c5,8d),::hx::paccDynamic)(300,100,0,100,300,0,500,300,0);
HXDLIN(  58)		 ::trilateral3::matrix::MatrixDozen m1 = ::trilateral3::Trilateral_obj::transformMatrix;
HXDLIN(  58)		if (::hx::IsNotNull( m1 )) {
HXLINE(  58)			drawType1->__Field(HX_("transform",6c,2d,93,45),::hx::paccDynamic)(m1);
            		}
HXDLIN(  58)		drawType1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  58)		int len1 = 1;
HXLINE(  59)		end = (end + len1);
HXLINE(  60)		int _g = ::Std_obj::_hx_int(start);
HXDLIN(  60)		this->triangle =  ::trilateral3::structure::StartEnd_obj::__alloc( HX_CTX ,_g,::Std_obj::_hx_int(end));
HXLINE(  61)		int red = -65536;
HXLINE(  62)		{
HXLINE(  62)			 ::trilateral3::drawing::Pen _this = this->pen;
HXDLIN(  62)			_this->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(start);
HXDLIN(  62)			_this->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(start);
            		}
HXLINE(  63)		{
HXLINE(  63)			 ::trilateral3::drawing::Pen _this1 = this->pen;
HXDLIN(  63)			int color = red;
HXDLIN(  63)			 ::trilateral3::structure::StartEnd this1 = this->triangle;
HXDLIN(  63)			if ((color == -1)) {
HXLINE(  63)				color = _this1->currentColor;
            			}
HXDLIN(  63)			_this1->colorType->__Field(HX_("colorTriangles",c8,da,ed,e6),::hx::paccDynamic)(color,((this1->end - this1->start) + 1));
            		}
HXLINE(  66)		int green = -16711936;
HXLINE(  67)		len1 = 0;
HXLINE(  68)		start = ( (Float)(this->pen->drawType->__Field(HX_("get_pos",2b,26,ca,26),::hx::paccDynamic)()) );
HXLINE(  69)		{
HXLINE(  69)			int _g1 = 0;
HXDLIN(  69)			while((_g1 < 1000)){
HXLINE(  69)				_g1 = (_g1 + 1);
HXDLIN(  69)				int i = (_g1 - 1);
HXLINE(  70)				 ::Dynamic drawType = this->pen->drawType;
HXDLIN(  70)				drawType->__Field(HX_("triangle",c8,be,c5,8d),::hx::paccDynamic)(30,10,0,10,30,0,50,30,0);
HXDLIN(  70)				 ::trilateral3::matrix::MatrixDozen m = ::trilateral3::Trilateral_obj::transformMatrix;
HXDLIN(  70)				if (::hx::IsNotNull( m )) {
HXLINE(  70)					drawType->__Field(HX_("transform",6c,2d,93,45),::hx::paccDynamic)(m);
            				}
HXDLIN(  70)				drawType->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXDLIN(  70)				len1 = (len1 + 1);
HXLINE(  71)				{
HXLINE(  71)					 ::trilateral3::drawing::Pen _g = this->pen;
HXDLIN(  71)					{
HXLINE(  71)						Float v = (( (Float)(_g->drawType->__Field(HX_("get_pos",2b,26,ca,26),::hx::paccDynamic)()) ) - ( (Float)(1) ));
HXDLIN(  71)						_g->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v);
HXDLIN(  71)						_g->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v);
            					}
            				}
HXLINE(  72)				this->set_x((::Math_obj::random() * ( (Float)(1000) )));
HXLINE(  73)				this->set_y((::Math_obj::random() * ( (Float)(1000) )));
HXLINE(  74)				this->dx->push((( (Float)(3) ) * (::Math_obj::random() - ((Float)0.5))));
HXLINE(  75)				this->dy->push((( (Float)(3) ) * (::Math_obj::random() - ((Float)0.5))));
HXLINE(  76)				{
HXLINE(  76)					 ::Dynamic this1 = this->pen->colorType->__Field(HX_("color3current",c9,64,01,5a),::hx::paccDynamic);
HXDLIN(  76)					this1->__Field(HX_("set_argbA",d8,5d,81,4c),::hx::paccDynamic)(::Std_obj::_hx_int((((Float)4294967295) * ::Math_obj::random())));
            				}
HXLINE(  77)				{
HXLINE(  77)					 ::Dynamic this2 = this->pen->colorType->__Field(HX_("color3current",c9,64,01,5a),::hx::paccDynamic);
HXDLIN(  77)					this2->__Field(HX_("set_argbB",d9,5d,81,4c),::hx::paccDynamic)(::Std_obj::_hx_int((((Float)4294967295) * ::Math_obj::random())));
            				}
HXLINE(  78)				{
HXLINE(  78)					 ::Dynamic this3 = this->pen->colorType->__Field(HX_("color3current",c9,64,01,5a),::hx::paccDynamic);
HXDLIN(  78)					this3->__Field(HX_("set_argbC",da,5d,81,4c),::hx::paccDynamic)(::Std_obj::_hx_int((((Float)4294967295) * ::Math_obj::random())));
            				}
HXLINE(  79)				Float _hx_tmp = (this->get_x() + 30);
HXDLIN(  79)				Float _hx_tmp1 = (this->get_y() + 30);
HXDLIN(  79)				this->rotateCentre(_hx_tmp,_hx_tmp1,((::Math_obj::random() * ::Math_obj::PI) * ( (Float)(2) )));
HXLINE(  80)				{
HXLINE(  80)					 ::trilateral3::drawing::Pen _g2 = this->pen;
HXDLIN(  80)					{
HXLINE(  80)						Float v1 = (_g2->drawType->__Field(HX_("get_pos",2b,26,ca,26),::hx::paccDynamic)() + 1);
HXDLIN(  80)						_g2->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v1);
HXDLIN(  80)						_g2->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v1);
            					}
            				}
            			}
            		}
HXLINE(  82)		int _g2 = ::Std_obj::_hx_int(start);
HXDLIN(  82)		this->all =  ::trilateral3::structure::StartEnd_obj::__alloc( HX_CTX ,_g2,::Std_obj::_hx_int((( (Float)(this->pen->drawType->__Field(HX_("get_pos",2b,26,ca,26),::hx::paccDynamic)()) ) - ( (Float)(1) ))));
HXLINE(  83)		{
HXLINE(  83)			 ::trilateral3::drawing::Pen _this2 = this->pen;
HXDLIN(  83)			int color1 = green;
HXDLIN(  83)			 ::trilateral3::structure::StartEnd this2 = this->triangle;
HXDLIN(  83)			if ((color1 == -1)) {
HXLINE(  83)				color1 = _this2->currentColor;
            			}
HXDLIN(  83)			_this2->colorType->__Field(HX_("colorTriangles",c8,da,ed,e6),::hx::paccDynamic)(color1,((this2->end - this2->start) + 1));
            		}
            	}


void TrilateralLimeRotateMove_obj::renderDraw(){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_86_renderDraw)
HXLINE(  87)		{
HXLINE(  87)			 ::trilateral3::drawing::Pen _this = this->pen;
HXDLIN(  87)			Float v = ( (Float)(this->triangle->start) );
HXDLIN(  87)			_this->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v);
HXDLIN(  87)			_this->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v);
            		}
HXLINE(  88)		this->set_x((( (Float)(500) ) - (( (Float)(100) ) * ::Math_obj::sin(this->theta))));
HXLINE(  89)		this->set_y((500 + (( (Float)(100) ) * ::Math_obj::cos(this->theta))));
HXLINE(  90)		{
HXLINE(  90)			 ::trilateral3::drawing::Pen _this1 = this->pen;
HXDLIN(  90)			Float v1 = ( (Float)((this->triangle->start + 1)) );
HXDLIN(  90)			_this1->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v1);
HXDLIN(  90)			_this1->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(v1);
            		}
HXLINE(  91)		this->rotateCentre(( (Float)(300) ),( (Float)(300) ),(::Math_obj::PI / ( (Float)(100) )));
HXLINE(  92)		 ::TrilateralLimeRotateMove _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  92)		_hx_tmp->theta = (_hx_tmp->theta + (::Math_obj::PI / ( (Float)(100) )));
HXLINE(  94)		int count = 0;
HXLINE(  95)		{
HXLINE(  95)			int _g = this->all->start;
HXDLIN(  95)			int _g1 = this->all->end;
HXDLIN(  95)			while((_g < _g1)){
HXLINE(  95)				_g = (_g + 1);
HXDLIN(  95)				int i = (_g - 1);
HXLINE(  96)				{
HXLINE(  96)					 ::trilateral3::drawing::Pen _this = this->pen;
HXDLIN(  96)					_this->drawType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(i);
HXDLIN(  96)					_this->colorType->__Field(HX_("set_pos",37,b7,cb,19),::hx::paccDynamic)(i);
            				}
HXLINE(  97)				{
HXLINE(  97)					 ::TrilateralLimeRotateMove _g1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  97)					Float _hx_tmp = _g1->get_x();
HXDLIN(  97)					_g1->set_x((_hx_tmp + this->dx->__get(count)));
            				}
HXLINE(  98)				{
HXLINE(  98)					 ::TrilateralLimeRotateMove _g2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)					Float _hx_tmp1 = _g2->get_y();
HXDLIN(  98)					_g2->set_y((_hx_tmp1 + this->dy->__get(count)));
            				}
HXLINE(  99)				bool _hx_tmp2;
HXDLIN(  99)				if (!((this->get_x() > 1000))) {
HXLINE(  99)					_hx_tmp2 = (this->get_x() < 0);
            				}
            				else {
HXLINE(  99)					_hx_tmp2 = true;
            				}
HXDLIN(  99)				if (_hx_tmp2) {
HXLINE( 100)					this->dx[count] = -(this->dx->__get(count));
HXLINE( 101)					{
HXLINE( 101)						 ::TrilateralLimeRotateMove _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)						Float _hx_tmp = _g->get_x();
HXDLIN( 101)						_g->set_x((_hx_tmp + this->dx->__get(count)));
            					}
            				}
HXLINE( 103)				bool _hx_tmp3;
HXDLIN( 103)				if (!((this->get_y() > 1000))) {
HXLINE( 103)					_hx_tmp3 = (this->get_y() < 0);
            				}
            				else {
HXLINE( 103)					_hx_tmp3 = true;
            				}
HXDLIN( 103)				if (_hx_tmp3) {
HXLINE( 104)					this->dy[count] = -(this->dy->__get(count));
HXLINE( 105)					{
HXLINE( 105)						 ::TrilateralLimeRotateMove _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 105)						Float _hx_tmp = _g->get_y();
HXDLIN( 105)						_g->set_y((_hx_tmp + this->dy->__get(count)));
            					}
            				}
HXLINE( 107)				count = (count + 1);
            			}
            		}
            	}


void TrilateralLimeRotateMove_obj::rotateCentre(Float vx,Float vy,Float v){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_112_rotateCentre)
HXDLIN( 112)		this->curr->__Field(HX_("rotate",5b,46,20,cb),::hx::paccDynamic)(((vx - ( (Float)(1000) )) / ( (Float)(1000) )),(-((vy - ( (Float)(1000) ))) / ( (Float)(1000) )),v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TrilateralLimeRotateMove_obj,rotateCentre,(void))

Float TrilateralLimeRotateMove_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_116_get_x)
HXDLIN( 116)		return ((( (Float)(this->curr->__Field(HX_("get_x",4f,a5,60,91),::hx::paccDynamic)()) ) * ( (Float)(1000) )) + 1000);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrilateralLimeRotateMove_obj,get_x,return )

Float TrilateralLimeRotateMove_obj::set_x(Float v){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_118_set_x)
HXLINE( 119)		v = ((v - ( (Float)(1000) )) / ( (Float)(1000) ));
HXLINE( 120)		this->curr->__Field(HX_("set_x",5b,9b,2f,7a),::hx::paccDynamic)(v);
HXLINE( 121)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TrilateralLimeRotateMove_obj,set_x,return )

Float TrilateralLimeRotateMove_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_125_get_y)
HXDLIN( 125)		return -(((( (Float)(this->curr->__Field(HX_("get_y",50,a5,60,91),::hx::paccDynamic)()) ) * ( (Float)(1000) )) - ( (Float)(1000) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TrilateralLimeRotateMove_obj,get_y,return )

Float TrilateralLimeRotateMove_obj::set_y(Float v){
            	HX_STACKFRAME(&_hx_pos_a6cc8687a01abda8_127_set_y)
HXLINE( 128)		v = (-((v - ( (Float)(1000) ))) / ( (Float)(1000) ));
HXLINE( 129)		this->curr->__Field(HX_("set_y",5c,9b,2f,7a),::hx::paccDynamic)(v);
HXLINE( 130)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TrilateralLimeRotateMove_obj,set_y,return )


::hx::ObjectPtr< TrilateralLimeRotateMove_obj > TrilateralLimeRotateMove_obj::__new(int width,int height) {
	::hx::ObjectPtr< TrilateralLimeRotateMove_obj > __this = new TrilateralLimeRotateMove_obj();
	__this->__construct(width,height);
	return __this;
}

::hx::ObjectPtr< TrilateralLimeRotateMove_obj > TrilateralLimeRotateMove_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height) {
	TrilateralLimeRotateMove_obj *__this = (TrilateralLimeRotateMove_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralLimeRotateMove_obj), true, "TrilateralLimeRotateMove"));
	*(void **)__this = TrilateralLimeRotateMove_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

TrilateralLimeRotateMove_obj::TrilateralLimeRotateMove_obj()
{
}

void TrilateralLimeRotateMove_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrilateralLimeRotateMove);
	HX_MARK_MEMBER_NAME(triangle,"triangle");
	HX_MARK_MEMBER_NAME(all,"all");
	HX_MARK_MEMBER_NAME(curr,"curr");
	HX_MARK_MEMBER_NAME(theta,"theta");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(pen,"pen");
	HX_MARK_MEMBER_NAME(penNodule,"penNodule");
	 ::kitGL::glLime::InterleaveAlterGL_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrilateralLimeRotateMove_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(triangle,"triangle");
	HX_VISIT_MEMBER_NAME(all,"all");
	HX_VISIT_MEMBER_NAME(curr,"curr");
	HX_VISIT_MEMBER_NAME(theta,"theta");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(pen,"pen");
	HX_VISIT_MEMBER_NAME(penNodule,"penNodule");
	 ::kitGL::glLime::InterleaveAlterGL_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrilateralLimeRotateMove_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_y() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { return ::hx::Val( all ); }
		if (HX_FIELD_EQ(inName,"pen") ) { return ::hx::Val( pen ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curr") ) { return ::hx::Val( curr ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theta") ) { return ::hx::Val( theta ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return ::hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return ::hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { return ::hx::Val( triangle ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"penNodule") ) { return ::hx::Val( penNodule ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderDraw") ) { return ::hx::Val( renderDraw_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rotateCentre") ) { return ::hx::Val( rotateCentre_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TrilateralLimeRotateMove_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_y(inValue.Cast< Float >()) ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=inValue.Cast<  ::trilateral3::structure::StartEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pen") ) { pen=inValue.Cast<  ::trilateral3::drawing::Pen >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"curr") ) { curr=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theta") ) { theta=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"triangle") ) { triangle=inValue.Cast<  ::trilateral3::structure::StartEnd >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"penNodule") ) { penNodule=inValue.Cast<  ::trilateral3::nodule::PenNodule >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrilateralLimeRotateMove_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("triangle",c8,be,c5,8d));
	outFields->push(HX_("all",21,f9,49,00));
	outFields->push(HX_("curr",f2,4a,c9,41));
	outFields->push(HX_("theta",1e,84,86,0f));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	outFields->push(HX_("pen",d9,54,55,00));
	outFields->push(HX_("penNodule",c4,02,81,14));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrilateralLimeRotateMove_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::trilateral3::structure::StartEnd */ ,(int)offsetof(TrilateralLimeRotateMove_obj,triangle),HX_("triangle",c8,be,c5,8d)},
	{::hx::fsObject /*  ::trilateral3::structure::StartEnd */ ,(int)offsetof(TrilateralLimeRotateMove_obj,all),HX_("all",21,f9,49,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TrilateralLimeRotateMove_obj,curr),HX_("curr",f2,4a,c9,41)},
	{::hx::fsFloat,(int)offsetof(TrilateralLimeRotateMove_obj,theta),HX_("theta",1e,84,86,0f)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TrilateralLimeRotateMove_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TrilateralLimeRotateMove_obj,dy),HX_("dy",95,57,00,00)},
	{::hx::fsObject /*  ::trilateral3::drawing::Pen */ ,(int)offsetof(TrilateralLimeRotateMove_obj,pen),HX_("pen",d9,54,55,00)},
	{::hx::fsObject /*  ::trilateral3::nodule::PenNodule */ ,(int)offsetof(TrilateralLimeRotateMove_obj,penNodule),HX_("penNodule",c4,02,81,14)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrilateralLimeRotateMove_obj_sStaticStorageInfo = 0;
#endif

static ::String TrilateralLimeRotateMove_obj_sMemberFields[] = {
	HX_("triangle",c8,be,c5,8d),
	HX_("all",21,f9,49,00),
	HX_("curr",f2,4a,c9,41),
	HX_("theta",1e,84,86,0f),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("pen",d9,54,55,00),
	HX_("penNodule",c4,02,81,14),
	HX_("draw",04,2c,70,42),
	HX_("renderDraw",7a,26,7a,df),
	HX_("rotateCentre",d6,a1,29,c4),
	HX_("get_x",4f,a5,60,91),
	HX_("set_x",5b,9b,2f,7a),
	HX_("get_y",50,a5,60,91),
	HX_("set_y",5c,9b,2f,7a),
	::String(null()) };

::hx::Class TrilateralLimeRotateMove_obj::__mClass;

void TrilateralLimeRotateMove_obj::__register()
{
	TrilateralLimeRotateMove_obj _hx_dummy;
	TrilateralLimeRotateMove_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrilateralLimeRotateMove",6d,54,41,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrilateralLimeRotateMove_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrilateralLimeRotateMove_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrilateralLimeRotateMove_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrilateralLimeRotateMove_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
