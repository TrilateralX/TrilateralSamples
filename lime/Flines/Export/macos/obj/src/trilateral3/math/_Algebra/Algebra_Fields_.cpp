// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_trilateral3_math__Algebra_Algebra_Fields_
#include <trilateral3/math/_Algebra/Algebra_Fields_.h>
#endif
#ifndef INCLUDED_trilateral3_structure_Quad2D
#include <trilateral3/structure/Quad2D.h>
#endif
#ifndef INCLUDED_trilateral3_structure_XY
#include <trilateral3/structure/XY.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_7_adjustWinding,"trilateral3.math._Algebra.Algebra_Fields_","adjustWinding",0x6a8fd2a6,"trilateral3.math._Algebra.Algebra_Fields_.adjustWinding","trilateral3/math/Algebra.hx",7,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_14_minusXY,"trilateral3.math._Algebra.Algebra_Fields_","minusXY",0x9e45318c,"trilateral3.math._Algebra.Algebra_Fields_.minusXY","trilateral3/math/Algebra.hx",14,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_20_sign,"trilateral3.math._Algebra.Algebra_Fields_","sign",0x960dd942,"trilateral3.math._Algebra.Algebra_Fields_.sign","trilateral3/math/Algebra.hx",20,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_25_quadCurve,"trilateral3.math._Algebra.Algebra_Fields_","quadCurve",0x209b3743,"trilateral3.math._Algebra.Algebra_Fields_.quadCurve","trilateral3/math/Algebra.hx",25,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_44_cubicCurve,"trilateral3.math._Algebra.Algebra_Fields_","cubicCurve",0xef9b8dca,"trilateral3.math._Algebra.Algebra_Fields_.cubicCurve","trilateral3/math/Algebra.hx",44,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_60_calculateQuadStep,"trilateral3.math._Algebra.Algebra_Fields_","calculateQuadStep",0xa0109b14,"trilateral3.math._Algebra.Algebra_Fields_.calculateQuadStep","trilateral3/math/Algebra.hx",60,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_66_calculateCubicStep,"trilateral3.math._Algebra.Algebra_Fields_","calculateCubicStep",0x2f463335,"trilateral3.math._Algebra.Algebra_Fields_.calculateCubicStep","trilateral3/math/Algebra.hx",66,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_73_lineAB,"trilateral3.math._Algebra.Algebra_Fields_","lineAB",0xd0428a1a,"trilateral3.math._Algebra.Algebra_Fields_.lineAB","trilateral3/math/Algebra.hx",73,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_83_lineABCoord,"trilateral3.math._Algebra.Algebra_Fields_","lineABCoord",0x831cc23b,"trilateral3.math._Algebra.Algebra_Fields_.lineABCoord","trilateral3/math/Algebra.hx",83,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_92_rotateVectorLine,"trilateral3.math._Algebra.Algebra_Fields_","rotateVectorLine",0xcd203917,"trilateral3.math._Algebra.Algebra_Fields_.rotateVectorLine","trilateral3/math/Algebra.hx",92,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_114_pivotCheap,"trilateral3.math._Algebra.Algebra_Fields_","pivotCheap",0x04f3d7b2,"trilateral3.math._Algebra.Algebra_Fields_.pivotCheap","trilateral3/math/Algebra.hx",114,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_122_pivot,"trilateral3.math._Algebra.Algebra_Fields_","pivot",0xfbe7e61d,"trilateral3.math._Algebra.Algebra_Fields_.pivot","trilateral3/math/Algebra.hx",122,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_131_thetaCheap,"trilateral3.math._Algebra.Algebra_Fields_","thetaCheap",0x9df630d6,"trilateral3.math._Algebra.Algebra_Fields_.thetaCheap","trilateral3/math/Algebra.hx",131,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_135_distCheap,"trilateral3.math._Algebra.Algebra_Fields_","distCheap",0x0591f2a4,"trilateral3.math._Algebra.Algebra_Fields_.distCheap","trilateral3/math/Algebra.hx",135,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_138_distance,"trilateral3.math._Algebra.Algebra_Fields_","distance",0x3c0d42ba,"trilateral3.math._Algebra.Algebra_Fields_.distance","trilateral3/math/Algebra.hx",138,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_144_quadraticThru,"trilateral3.math._Algebra.Algebra_Fields_","quadraticThru",0x1bcc3f8a,"trilateral3.math._Algebra.Algebra_Fields_.quadraticThru","trilateral3/math/Algebra.hx",144,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_149_quadratic,"trilateral3.math._Algebra.Algebra_Fields_","quadratic",0x2339afb3,"trilateral3.math._Algebra.Algebra_Fields_.quadratic","trilateral3/math/Algebra.hx",149,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_154_quadSegment,"trilateral3.math._Algebra.Algebra_Fields_","quadSegment",0xbf908747,"trilateral3.math._Algebra.Algebra_Fields_.quadSegment","trilateral3/math/Algebra.hx",154,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_159_cubic,"trilateral3.math._Algebra.Algebra_Fields_","cubic",0x8791b8a5,"trilateral3.math._Algebra.Algebra_Fields_.cubic","trilateral3/math/Algebra.hx",159,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_165_perp,"trilateral3.math._Algebra.Algebra_Fields_","perp",0x940f35f8,"trilateral3.math._Algebra.Algebra_Fields_.perp","trilateral3/math/Algebra.hx",165,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_22_boot,"trilateral3.math._Algebra.Algebra_Fields_","boot",0x8ad5cd37,"trilateral3.math._Algebra.Algebra_Fields_.boot","trilateral3/math/Algebra.hx",22,0xf5b0e055)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e831e268814039_41_boot,"trilateral3.math._Algebra.Algebra_Fields_","boot",0x8ad5cd37,"trilateral3.math._Algebra.Algebra_Fields_.boot","trilateral3/math/Algebra.hx",41,0xf5b0e055)
namespace trilateral3{
namespace math{
namespace _Algebra{

void Algebra_Fields__obj::__construct() { }

Dynamic Algebra_Fields__obj::__CreateEmpty() { return new Algebra_Fields__obj; }

void *Algebra_Fields__obj::_hx_vtable = 0;

Dynamic Algebra_Fields__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Algebra_Fields__obj > _hx_result = new Algebra_Fields__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Algebra_Fields__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7459f04b;
}

bool Algebra_Fields__obj::adjustWinding( ::trilateral3::structure::XY A_, ::trilateral3::structure::XY B_, ::trilateral3::structure::XY C_){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_7_adjustWinding)
HXLINE(   8)		 ::trilateral3::structure::XY xy =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(B_->x - A_->x),(B_->y - A_->y));
HXDLIN(   8)		 ::trilateral3::structure::XY ba = xy;
HXLINE(   9)		 ::trilateral3::structure::XY xy1 =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(C_->x - A_->x),(C_->y - A_->y));
HXDLIN(   9)		 ::trilateral3::structure::XY ca = xy1;
HXLINE(  10)		bool val = !((((ba->x * ca->y) - (ba->y * ca->x)) < 0));
HXLINE(  11)		return val;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Algebra_Fields__obj,adjustWinding,return )

 ::trilateral3::structure::XY Algebra_Fields__obj::minusXY( ::trilateral3::structure::XY a, ::trilateral3::structure::XY b){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_14_minusXY)
HXLINE(  15)		 ::trilateral3::structure::XY xy =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(a->x - b->x),(a->y - b->y));
HXLINE(  16)		return xy;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Algebra_Fields__obj,minusXY,return )

int Algebra_Fields__obj::sign(Float n){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_20_sign)
HXDLIN(  20)		return ::Std_obj::_hx_int((::Math_obj::abs(n) / n));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Algebra_Fields__obj,sign,return )

Float Algebra_Fields__obj::quadStep;

::Array< Float > Algebra_Fields__obj::quadCurve(::Array< Float > p,Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_25_quadCurve)
HXLINE(  26)		Float x = (ax - bx);
HXDLIN(  26)		Float y = (ay - by);
HXDLIN(  26)		Float x1 = (bx - cx);
HXDLIN(  26)		Float y1 = (by - cy);
HXDLIN(  26)		Float approxDistance = (::Math_obj::sqrt(((x * x) + (y * y))) + ::Math_obj::sqrt(((x1 * x1) + (y1 * y1))));
HXDLIN(  26)		if ((approxDistance == 0)) {
HXLINE(  26)			approxDistance = ((Float)0.000001);
            		}
HXDLIN(  26)		Float step = ::Math_obj::min((( (Float)(1) ) / (approxDistance * ((Float)0.707))),::trilateral3::math::_Algebra::Algebra_Fields__obj::quadStep);
HXLINE(  27)		int l = p->length;
HXLINE(  28)		l = (l + 1);
HXDLIN(  28)		p[(l - 1)] = ax;
HXLINE(  29)		l = (l + 1);
HXDLIN(  29)		p[(l - 1)] = ay;
HXLINE(  30)		Float t = step;
HXLINE(  31)		while((t < ((Float)1.))){
HXLINE(  32)			l = (l + 1);
HXDLIN(  32)			Float u = (( (Float)(1) ) - t);
HXDLIN(  32)			p[(l - 1)] = (((::Math_obj::pow(u,( (Float)(2) )) * ax) + (((( (Float)(2) ) * u) * t) * bx)) + (::Math_obj::pow(t,( (Float)(2) )) * cx));
HXLINE(  33)			l = (l + 1);
HXDLIN(  33)			Float u1 = (( (Float)(1) ) - t);
HXDLIN(  33)			p[(l - 1)] = (((::Math_obj::pow(u1,( (Float)(2) )) * ay) + (((( (Float)(2) ) * u1) * t) * by)) + (::Math_obj::pow(t,( (Float)(2) )) * cy));
HXLINE(  34)			t = (t + step);
            		}
HXLINE(  36)		l = (l + 1);
HXDLIN(  36)		p[(l - 1)] = cx;
HXLINE(  37)		l = (l + 1);
HXDLIN(  37)		p[(l - 1)] = cy;
HXLINE(  38)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Algebra_Fields__obj,quadCurve,return )

Float Algebra_Fields__obj::cubicStep;

::Array< Float > Algebra_Fields__obj::cubicCurve(::Array< Float > p,Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_44_cubicCurve)
HXLINE(  45)		Float x = (ax - bx);
HXDLIN(  45)		Float y = (ay - by);
HXDLIN(  45)		Float x1 = (bx - cx);
HXDLIN(  45)		Float y1 = (by - cy);
HXDLIN(  45)		Float x2 = (cx - dx);
HXDLIN(  45)		Float y2 = (cy - dy);
HXDLIN(  45)		Float approxDistance = ((::Math_obj::sqrt(((x * x) + (y * y))) + ::Math_obj::sqrt(((x1 * x1) + (y1 * y1)))) + ::Math_obj::sqrt(((x2 * x2) + (y2 * y2))));
HXDLIN(  45)		if ((approxDistance == 0)) {
HXLINE(  45)			approxDistance = ((Float)0.000001);
            		}
HXDLIN(  45)		Float step = ::Math_obj::min((( (Float)(1) ) / (approxDistance * ((Float)0.707))),((Float)0.03));
HXLINE(  46)		int l = p->length;
HXLINE(  47)		l = (l + 1);
HXDLIN(  47)		p[(l - 1)] = ax;
HXLINE(  48)		l = (l + 1);
HXDLIN(  48)		p[(l - 1)] = ay;
HXLINE(  49)		Float t = step;
HXLINE(  50)		while((t < ((Float)1.))){
HXLINE(  51)			l = (l + 1);
HXDLIN(  51)			Float u = (( (Float)(1) ) - t);
HXDLIN(  51)			p[(l - 1)] = ((((::Math_obj::pow(u,( (Float)(3) )) * ax) + (((( (Float)(3) ) * ::Math_obj::pow(u,( (Float)(2) ))) * t) * bx)) + (((( (Float)(3) ) * u) * ::Math_obj::pow(t,( (Float)(2) ))) * cx)) + (::Math_obj::pow(t,( (Float)(3) )) * dx));
HXLINE(  52)			l = (l + 1);
HXDLIN(  52)			Float u1 = (( (Float)(1) ) - t);
HXDLIN(  52)			p[(l - 1)] = ((((::Math_obj::pow(u1,( (Float)(3) )) * ay) + (((( (Float)(3) ) * ::Math_obj::pow(u1,( (Float)(2) ))) * t) * by)) + (((( (Float)(3) ) * u1) * ::Math_obj::pow(t,( (Float)(2) ))) * cy)) + (::Math_obj::pow(t,( (Float)(3) )) * dy));
HXLINE(  53)			t = (t + step);
            		}
HXLINE(  55)		l = (l + 1);
HXDLIN(  55)		p[(l - 1)] = dx;
HXLINE(  56)		l = (l + 1);
HXDLIN(  56)		p[(l - 1)] = dy;
HXLINE(  57)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Algebra_Fields__obj,cubicCurve,return )

Float Algebra_Fields__obj::calculateQuadStep(Float ax,Float ay,Float bx,Float by,Float cx,Float cy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_60_calculateQuadStep)
HXLINE(  61)		Float x = (ax - bx);
HXDLIN(  61)		Float y = (ay - by);
HXDLIN(  61)		Float x1 = (bx - cx);
HXDLIN(  61)		Float y1 = (by - cy);
HXDLIN(  61)		Float approxDistance = (::Math_obj::sqrt(((x * x) + (y * y))) + ::Math_obj::sqrt(((x1 * x1) + (y1 * y1))));
HXLINE(  62)		if ((approxDistance == 0)) {
HXLINE(  62)			approxDistance = ((Float)0.000001);
            		}
HXLINE(  63)		return ::Math_obj::min((( (Float)(1) ) / (approxDistance * ((Float)0.707))),::trilateral3::math::_Algebra::Algebra_Fields__obj::quadStep);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Algebra_Fields__obj,calculateQuadStep,return )

Float Algebra_Fields__obj::calculateCubicStep(Float ax,Float ay,Float bx,Float by,Float cx,Float cy,Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_66_calculateCubicStep)
HXLINE(  67)		Float x = (ax - bx);
HXDLIN(  67)		Float y = (ay - by);
HXDLIN(  67)		Float x1 = (bx - cx);
HXDLIN(  67)		Float y1 = (by - cy);
HXDLIN(  67)		Float x2 = (cx - dx);
HXDLIN(  67)		Float y2 = (cy - dy);
HXDLIN(  67)		Float approxDistance = ((::Math_obj::sqrt(((x * x) + (y * y))) + ::Math_obj::sqrt(((x1 * x1) + (y1 * y1)))) + ::Math_obj::sqrt(((x2 * x2) + (y2 * y2))));
HXLINE(  68)		if ((approxDistance == 0)) {
HXLINE(  68)			approxDistance = ((Float)0.000001);
            		}
HXLINE(  69)		return ::Math_obj::min((( (Float)(1) ) / (approxDistance * ((Float)0.707))),((Float)0.03));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Algebra_Fields__obj,calculateCubicStep,return )

 ::trilateral3::structure::Quad2D Algebra_Fields__obj::lineAB( ::trilateral3::structure::XY A, ::trilateral3::structure::XY B,Float width){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_73_lineAB)
HXLINE(  74)		Float dx = (A->x - B->x);
HXLINE(  75)		Float dy = (A->y - B->y);
HXLINE(  76)		 ::trilateral3::structure::XY P =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(A->x - (width / ( (Float)(2) ))),A->y);
HXLINE(  77)		Float omega = ::Math_obj::atan2(dy,dx);
HXLINE(  78)		 ::trilateral3::structure::XY dim =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,width,((dx * dx) + (dy * dy)));
HXLINE(  79)		Float pivotX = (A->x + (width / ( (Float)(2) )));
HXDLIN(  79)		Float pivotY = A->y;
HXDLIN(  79)		Float px = P->x;
HXDLIN(  79)		Float py = P->y;
HXDLIN(  79)		Float dx1 = dim->x;
HXDLIN(  79)		Float dy1 = dim->y;
HXDLIN(  79)		 ::trilateral3::structure::XY A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,py);
HXDLIN(  79)		 ::trilateral3::structure::XY B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx1),py);
HXDLIN(  79)		 ::trilateral3::structure::XY C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx1),(py + dy1));
HXDLIN(  79)		 ::trilateral3::structure::XY D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,(py + dy1));
HXDLIN(  79)		if ((omega != ((Float)0.))) {
HXLINE(  79)			Float sin = ::Math_obj::sin(omega);
HXDLIN(  79)			Float cos = ::Math_obj::cos(omega);
HXDLIN(  79)			Float px = (A_->x - pivotX);
HXDLIN(  79)			Float py = (A_->y - pivotY);
HXDLIN(  79)			Float px2 = ((px * cos) - (py * sin));
HXDLIN(  79)			py = ((py * cos) + (px * sin));
HXDLIN(  79)			A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px2 + pivotX),(py + pivotY));
HXDLIN(  79)			Float px1 = (B_->x - pivotX);
HXDLIN(  79)			Float py1 = (B_->y - pivotY);
HXDLIN(  79)			Float px21 = ((px1 * cos) - (py1 * sin));
HXDLIN(  79)			py1 = ((py1 * cos) + (px1 * sin));
HXDLIN(  79)			B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px21 + pivotX),(py1 + pivotY));
HXDLIN(  79)			Float px3 = (C_->x - pivotX);
HXDLIN(  79)			Float py2 = (C_->y - pivotY);
HXDLIN(  79)			Float px22 = ((px3 * cos) - (py2 * sin));
HXDLIN(  79)			py2 = ((py2 * cos) + (px3 * sin));
HXDLIN(  79)			C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px22 + pivotX),(py2 + pivotY));
HXDLIN(  79)			Float px4 = (D_->x - pivotX);
HXDLIN(  79)			Float py3 = (D_->y - pivotY);
HXDLIN(  79)			Float px23 = ((px4 * cos) - (py3 * sin));
HXDLIN(  79)			py3 = ((py3 * cos) + (px4 * sin));
HXDLIN(  79)			D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px23 + pivotX),(py3 + pivotY));
            		}
HXDLIN(  79)		return  ::trilateral3::structure::Quad2D_obj::__alloc( HX_CTX ,A_,B_,C_,D_);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Algebra_Fields__obj,lineAB,return )

 ::trilateral3::structure::Quad2D Algebra_Fields__obj::lineABCoord(Float ax,Float ay,Float bx,Float by,Float width){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_83_lineABCoord)
HXLINE(  84)		Float dx = (ax - bx);
HXLINE(  85)		Float dy = (ay - by);
HXLINE(  86)		 ::trilateral3::structure::XY P =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(ax - (width / ( (Float)(2) ))),ay);
HXLINE(  87)		Float omega = ::Math_obj::atan2(dy,dx);
HXLINE(  88)		 ::trilateral3::structure::XY dim =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,width,((dx * dx) + (dy * dy)));
HXLINE(  89)		Float pivotX = (ax + (width / ( (Float)(2) )));
HXDLIN(  89)		Float px = P->x;
HXDLIN(  89)		Float py = P->y;
HXDLIN(  89)		Float dx1 = dim->x;
HXDLIN(  89)		Float dy1 = dim->y;
HXDLIN(  89)		 ::trilateral3::structure::XY A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,py);
HXDLIN(  89)		 ::trilateral3::structure::XY B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx1),py);
HXDLIN(  89)		 ::trilateral3::structure::XY C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx1),(py + dy1));
HXDLIN(  89)		 ::trilateral3::structure::XY D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,(py + dy1));
HXDLIN(  89)		if ((omega != ((Float)0.))) {
HXLINE(  89)			Float sin = ::Math_obj::sin(omega);
HXDLIN(  89)			Float cos = ::Math_obj::cos(omega);
HXDLIN(  89)			Float px = (A_->x - pivotX);
HXDLIN(  89)			Float py = (A_->y - ay);
HXDLIN(  89)			Float px2 = ((px * cos) - (py * sin));
HXDLIN(  89)			py = ((py * cos) + (px * sin));
HXDLIN(  89)			A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px2 + pivotX),(py + ay));
HXDLIN(  89)			Float px1 = (B_->x - pivotX);
HXDLIN(  89)			Float py1 = (B_->y - ay);
HXDLIN(  89)			Float px21 = ((px1 * cos) - (py1 * sin));
HXDLIN(  89)			py1 = ((py1 * cos) + (px1 * sin));
HXDLIN(  89)			B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px21 + pivotX),(py1 + ay));
HXDLIN(  89)			Float px3 = (C_->x - pivotX);
HXDLIN(  89)			Float py2 = (C_->y - ay);
HXDLIN(  89)			Float px22 = ((px3 * cos) - (py2 * sin));
HXDLIN(  89)			py2 = ((py2 * cos) + (px3 * sin));
HXDLIN(  89)			C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px22 + pivotX),(py2 + ay));
HXDLIN(  89)			Float px4 = (D_->x - pivotX);
HXDLIN(  89)			Float py3 = (D_->y - ay);
HXDLIN(  89)			Float px23 = ((px4 * cos) - (py3 * sin));
HXDLIN(  89)			py3 = ((py3 * cos) + (px4 * sin));
HXDLIN(  89)			D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px23 + pivotX),(py3 + ay));
            		}
HXDLIN(  89)		return  ::trilateral3::structure::Quad2D_obj::__alloc( HX_CTX ,A_,B_,C_,D_);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Algebra_Fields__obj,lineABCoord,return )

 ::trilateral3::structure::Quad2D Algebra_Fields__obj::rotateVectorLine( ::trilateral3::structure::XY pos, ::trilateral3::structure::XY dim,Float omega,Float pivotX,Float pivotY){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_92_rotateVectorLine)
HXLINE(  95)		Float px = pos->x;
HXLINE(  96)		Float py = pos->y;
HXLINE(  97)		Float dx = dim->x;
HXLINE(  98)		Float dy = dim->y;
HXLINE(  99)		 ::trilateral3::structure::XY A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,py);
HXLINE( 100)		 ::trilateral3::structure::XY B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx),py);
HXLINE( 101)		 ::trilateral3::structure::XY C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px + dx),(py + dy));
HXLINE( 102)		 ::trilateral3::structure::XY D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,px,(py + dy));
HXLINE( 103)		if ((omega != ((Float)0.))) {
HXLINE( 104)			Float sin = ::Math_obj::sin(omega);
HXLINE( 105)			Float cos = ::Math_obj::cos(omega);
HXLINE( 106)			Float px = (A_->x - pivotX);
HXDLIN( 106)			Float py = (A_->y - pivotY);
HXDLIN( 106)			Float px2 = ((px * cos) - (py * sin));
HXDLIN( 106)			py = ((py * cos) + (px * sin));
HXDLIN( 106)			A_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px2 + pivotX),(py + pivotY));
HXLINE( 107)			Float px1 = (B_->x - pivotX);
HXDLIN( 107)			Float py1 = (B_->y - pivotY);
HXDLIN( 107)			Float px21 = ((px1 * cos) - (py1 * sin));
HXDLIN( 107)			py1 = ((py1 * cos) + (px1 * sin));
HXDLIN( 107)			B_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px21 + pivotX),(py1 + pivotY));
HXLINE( 108)			Float px3 = (C_->x - pivotX);
HXDLIN( 108)			Float py2 = (C_->y - pivotY);
HXDLIN( 108)			Float px22 = ((px3 * cos) - (py2 * sin));
HXDLIN( 108)			py2 = ((py2 * cos) + (px3 * sin));
HXDLIN( 108)			C_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px22 + pivotX),(py2 + pivotY));
HXLINE( 109)			Float px4 = (D_->x - pivotX);
HXDLIN( 109)			Float py3 = (D_->y - pivotY);
HXDLIN( 109)			Float px23 = ((px4 * cos) - (py3 * sin));
HXDLIN( 109)			py3 = ((py3 * cos) + (px4 * sin));
HXDLIN( 109)			D_ =  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px23 + pivotX),(py3 + pivotY));
            		}
HXLINE( 111)		return  ::trilateral3::structure::Quad2D_obj::__alloc( HX_CTX ,A_,B_,C_,D_);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Algebra_Fields__obj,rotateVectorLine,return )

 ::trilateral3::structure::XY Algebra_Fields__obj::pivotCheap( ::trilateral3::structure::XY p,Float sin,Float cos,Float pivotX,Float pivotY){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_114_pivotCheap)
HXLINE( 115)		Float px = (p->x - pivotX);
HXLINE( 116)		Float py = (p->y - pivotY);
HXLINE( 117)		Float px2 = ((px * cos) - (py * sin));
HXLINE( 118)		py = ((py * cos) + (px * sin));
HXLINE( 119)		return  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px2 + pivotX),(py + pivotY));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Algebra_Fields__obj,pivotCheap,return )

 ::trilateral3::structure::XY Algebra_Fields__obj::pivot( ::trilateral3::structure::XY p,Float omega,Float pivotX,Float pivotY){
            	HX_GC_STACKFRAME(&_hx_pos_e7e831e268814039_122_pivot)
HXLINE( 123)		Float px = (p->x - pivotX);
HXLINE( 124)		Float py = (p->y - pivotY);
HXLINE( 125)		Float px2 = ((px * ::Math_obj::cos(omega)) - (py * ::Math_obj::sin(omega)));
HXLINE( 126)		py = ((py * ::Math_obj::cos(omega)) + (px * ::Math_obj::sin(omega)));
HXLINE( 127)		return  ::trilateral3::structure::XY_obj::__alloc( HX_CTX ,(px2 + pivotX),(py + pivotY));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Algebra_Fields__obj,pivot,return )

Float Algebra_Fields__obj::thetaCheap(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_131_thetaCheap)
HXDLIN( 131)		return ::Math_obj::atan2(dy,dx);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Algebra_Fields__obj,thetaCheap,return )

Float Algebra_Fields__obj::distCheap(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_135_distCheap)
HXDLIN( 135)		return ((dx * dx) + (dy * dy));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Algebra_Fields__obj,distCheap,return )

Float Algebra_Fields__obj::distance(Float px,Float py,Float qx,Float qy){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_138_distance)
HXLINE( 139)		Float x = (px - qx);
HXLINE( 140)		Float y = (py - qy);
HXLINE( 141)		return ::Math_obj::sqrt(((x * x) + (y * y)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Algebra_Fields__obj,distance,return )

Float Algebra_Fields__obj::quadraticThru(Float t,Float s,Float c,Float e){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_144_quadraticThru)
HXLINE( 145)		c = ((( (Float)(2) ) * c) - (((Float)0.5) * (s + e)));
HXLINE( 146)		Float u = (( (Float)(1) ) - t);
HXDLIN( 146)		return (((::Math_obj::pow(u,( (Float)(2) )) * s) + (((( (Float)(2) ) * u) * t) * c)) + (::Math_obj::pow(t,( (Float)(2) )) * e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Algebra_Fields__obj,quadraticThru,return )

Float Algebra_Fields__obj::quadratic(Float t,Float s,Float c,Float e){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_149_quadratic)
HXLINE( 150)		Float u = (( (Float)(1) ) - t);
HXLINE( 151)		return (((::Math_obj::pow(u,( (Float)(2) )) * s) + (((( (Float)(2) ) * u) * t) * c)) + (::Math_obj::pow(t,( (Float)(2) )) * e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Algebra_Fields__obj,quadratic,return )

Float Algebra_Fields__obj::quadSegment(Float t0,Float t1,Float s,Float c,Float e){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_154_quadSegment)
HXLINE( 155)		Float u = (t1 - t0);
HXLINE( 156)		return (s + (((c - s) + (t0 * ((e - (( (Float)(2) ) * c)) + s))) * u));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Algebra_Fields__obj,quadSegment,return )

Float Algebra_Fields__obj::cubic(Float t,Float s,Float c1,Float c2,Float e){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_159_cubic)
HXLINE( 160)		Float u = (( (Float)(1) ) - t);
HXLINE( 161)		return ((((::Math_obj::pow(u,( (Float)(3) )) * s) + (((( (Float)(3) ) * ::Math_obj::pow(u,( (Float)(2) ))) * t) * c1)) + (((( (Float)(3) ) * u) * ::Math_obj::pow(t,( (Float)(2) ))) * c2)) + (::Math_obj::pow(t,( (Float)(3) )) * e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Algebra_Fields__obj,cubic,return )

Float Algebra_Fields__obj::perp( ::trilateral3::structure::XY a, ::trilateral3::structure::XY b){
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_165_perp)
HXDLIN( 165)		return ((a->x * b->y) - (a->y * b->x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Algebra_Fields__obj,perp,return )


Algebra_Fields__obj::Algebra_Fields__obj()
{
}

bool Algebra_Fields__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sign") ) { outValue = sign_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perp") ) { outValue = perp_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pivot") ) { outValue = pivot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cubic") ) { outValue = cubic_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineAB") ) { outValue = lineAB_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"minusXY") ) { outValue = minusXY_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { outValue = ( quadStep ); return true; }
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quadCurve") ) { outValue = quadCurve_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"distCheap") ) { outValue = distCheap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quadratic") ) { outValue = quadratic_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cubicCurve") ) { outValue = cubicCurve_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pivotCheap") ) { outValue = pivotCheap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"thetaCheap") ) { outValue = thetaCheap_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lineABCoord") ) { outValue = lineABCoord_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quadSegment") ) { outValue = quadSegment_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"adjustWinding") ) { outValue = adjustWinding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"quadraticThru") ) { outValue = quadraticThru_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rotateVectorLine") ) { outValue = rotateVectorLine_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateQuadStep") ) { outValue = calculateQuadStep_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"calculateCubicStep") ) { outValue = calculateCubicStep_dyn(); return true; }
	}
	return false;
}

bool Algebra_Fields__obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"quadStep") ) { quadStep=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Algebra_Fields__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Algebra_Fields__obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Algebra_Fields__obj::quadStep,HX_("quadStep",b3,bb,78,d4)},
	{::hx::fsFloat,(void *) &Algebra_Fields__obj::cubicStep,HX_("cubicStep",b6,9d,fa,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Algebra_Fields__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Algebra_Fields__obj::quadStep,"quadStep");
	HX_MARK_MEMBER_NAME(Algebra_Fields__obj::cubicStep,"cubicStep");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Algebra_Fields__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Algebra_Fields__obj::quadStep,"quadStep");
	HX_VISIT_MEMBER_NAME(Algebra_Fields__obj::cubicStep,"cubicStep");
};

#endif

::hx::Class Algebra_Fields__obj::__mClass;

static ::String Algebra_Fields__obj_sStaticFields[] = {
	HX_("adjustWinding",4b,e4,e6,bd),
	HX_("minusXY",71,c9,dd,53),
	HX_("sign",3d,90,53,4c),
	HX_("quadStep",b3,bb,78,d4),
	HX_("quadCurve",68,52,75,df),
	HX_("cubicStep",b6,9d,fa,d5),
	HX_("cubicCurve",05,33,99,2f),
	HX_("calculateQuadStep",39,e3,e1,bb),
	HX_("calculateCubicStep",70,0b,94,6a),
	HX_("lineAB",d5,35,a0,ec),
	HX_("lineABCoord",a0,b0,0f,41),
	HX_("rotateVectorLine",92,fc,d9,93),
	HX_("pivotCheap",ed,7c,f1,44),
	HX_("pivot",c2,4a,a2,c2),
	HX_("thetaCheap",11,d6,f3,dd),
	HX_("distCheap",c9,0d,6c,c4),
	HX_("distance",35,93,f9,6b),
	HX_("quadraticThru",2f,51,23,6f),
	HX_("quadratic",d8,ca,13,e2),
	HX_("quadSegment",ac,75,83,7d),
	HX_("cubic",4a,1d,4c,4e),
	HX_("perp",f3,ec,54,4a),
	::String(null())
};

void Algebra_Fields__obj::__register()
{
	Algebra_Fields__obj _hx_dummy;
	Algebra_Fields__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.math._Algebra.Algebra_Fields_",89,b5,e8,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Algebra_Fields__obj::__GetStatic;
	__mClass->mSetStaticField = &Algebra_Fields__obj::__SetStatic;
	__mClass->mMarkFunc = Algebra_Fields__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Algebra_Fields__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Algebra_Fields__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Algebra_Fields__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Algebra_Fields__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Algebra_Fields__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Algebra_Fields__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_22_boot)
HXDLIN(  22)		quadStep = ((Float)0.03);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e7e831e268814039_41_boot)
HXDLIN(  41)		cubicStep = ((Float)0.03);
            	}
}

} // end namespace trilateral3
} // end namespace math
} // end namespace _Algebra