// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_hxGeomAlgo_Debug
#include <hxGeomAlgo/Debug.h>
#endif
#ifndef INCLUDED_hxGeomAlgo__Tess2_Geom
#include <hxGeomAlgo/_Tess2/Geom.h>
#endif
#ifndef INCLUDED_hxGeomAlgo__Tess2_TessFace
#include <hxGeomAlgo/_Tess2/TessFace.h>
#endif
#ifndef INCLUDED_hxGeomAlgo__Tess2_TessHalfEdge
#include <hxGeomAlgo/_Tess2/TessHalfEdge.h>
#endif
#ifndef INCLUDED_hxGeomAlgo__Tess2_TessVertex
#include <hxGeomAlgo/_Tess2/TessVertex.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1190_vertEq,"hxGeomAlgo._Tess2.Geom","vertEq",0x690efd72,"hxGeomAlgo._Tess2.Geom.vertEq","hxGeomAlgo/Tess2.hx",1190,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1195_vertLeq,"hxGeomAlgo._Tess2.Geom","vertLeq",0x84140c12,"hxGeomAlgo._Tess2.Geom.vertLeq","hxGeomAlgo/Tess2.hx",1195,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1200_transLeq,"hxGeomAlgo._Tess2.Geom","transLeq",0x90e459c5,"hxGeomAlgo._Tess2.Geom.transLeq","hxGeomAlgo/Tess2.hx",1200,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1204_edgeGoesLeft,"hxGeomAlgo._Tess2.Geom","edgeGoesLeft",0x4f6ff0cf,"hxGeomAlgo._Tess2.Geom.edgeGoesLeft","hxGeomAlgo/Tess2.hx",1204,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1208_edgeGoesRight,"hxGeomAlgo._Tess2.Geom","edgeGoesRight",0xa98fd214,"hxGeomAlgo._Tess2.Geom.edgeGoesRight","hxGeomAlgo/Tess2.hx",1208,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1212_edgeIsInternal,"hxGeomAlgo._Tess2.Geom","edgeIsInternal",0xc1048ed9,"hxGeomAlgo._Tess2.Geom.edgeIsInternal","hxGeomAlgo/Tess2.hx",1212,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1216_vertL1dist,"hxGeomAlgo._Tess2.Geom","vertL1dist",0x41c36c31,"hxGeomAlgo._Tess2.Geom.vertL1dist","hxGeomAlgo/Tess2.hx",1216,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1220_edgeEval,"hxGeomAlgo._Tess2.Geom","edgeEval",0x0a0427ae,"hxGeomAlgo._Tess2.Geom.edgeEval","hxGeomAlgo/Tess2.hx",1220,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1248_edgeSign,"hxGeomAlgo._Tess2.Geom","edgeSign",0x133b4c4f,"hxGeomAlgo._Tess2.Geom.edgeSign","hxGeomAlgo/Tess2.hx",1248,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1271_transEval,"hxGeomAlgo._Tess2.Geom","transEval",0x32568d0f,"hxGeomAlgo._Tess2.Geom.transEval","hxGeomAlgo/Tess2.hx",1271,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1299_transSign,"hxGeomAlgo._Tess2.Geom","transSign",0x3b8db1b0,"hxGeomAlgo._Tess2.Geom.transSign","hxGeomAlgo/Tess2.hx",1299,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1324_vertCCW,"hxGeomAlgo._Tess2.Geom","vertCCW",0x840d1a11,"hxGeomAlgo._Tess2.Geom.vertCCW","hxGeomAlgo/Tess2.hx",1324,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1335_interpolate,"hxGeomAlgo._Tess2.Geom","interpolate",0x807ddeac,"hxGeomAlgo._Tess2.Geom.interpolate","hxGeomAlgo/Tess2.hx",1335,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1367_intersect,"hxGeomAlgo._Tess2.Geom","intersect",0x45032a0a,"hxGeomAlgo._Tess2.Geom.intersect","hxGeomAlgo/Tess2.hx",1367,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1433_calcAngle,"hxGeomAlgo._Tess2.Geom","calcAngle",0x18798829,"hxGeomAlgo._Tess2.Geom.calcAngle","hxGeomAlgo/Tess2.hx",1433,0xf73e622d)
HX_LOCAL_STACK_FRAME(_hx_pos_45256d98d075467d_1451_edgeIsLocallyDelaunay,"hxGeomAlgo._Tess2.Geom","edgeIsLocallyDelaunay",0x86657f83,"hxGeomAlgo._Tess2.Geom.edgeIsLocallyDelaunay","hxGeomAlgo/Tess2.hx",1451,0xf73e622d)
namespace hxGeomAlgo{
namespace _Tess2{

void Geom_obj::__construct() { }

Dynamic Geom_obj::__CreateEmpty() { return new Geom_obj; }

void *Geom_obj::_hx_vtable = 0;

Dynamic Geom_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Geom_obj > _hx_result = new Geom_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Geom_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21717165;
}

bool Geom_obj::vertEq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1190_vertEq)
HXDLIN(1190)		if ((u->s == v->s)) {
HXDLIN(1190)			return (u->t == v->t);
            		}
            		else {
HXDLIN(1190)			return false;
            		}
HXDLIN(1190)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,vertEq,return )

bool Geom_obj::vertLeq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1195_vertLeq)
HXDLIN(1195)		if (!((u->s < v->s))) {
HXDLIN(1195)			if ((u->s == v->s)) {
HXDLIN(1195)				return (u->t <= v->t);
            			}
            			else {
HXDLIN(1195)				return false;
            			}
            		}
            		else {
HXDLIN(1195)			return true;
            		}
HXDLIN(1195)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,vertLeq,return )

bool Geom_obj::transLeq( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1200_transLeq)
HXDLIN(1200)		if (!((u->t < v->t))) {
HXDLIN(1200)			if ((u->t == v->t)) {
HXDLIN(1200)				return (u->s <= v->s);
            			}
            			else {
HXDLIN(1200)				return false;
            			}
            		}
            		else {
HXDLIN(1200)			return true;
            		}
HXDLIN(1200)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,transLeq,return )

bool Geom_obj::edgeGoesLeft( ::hxGeomAlgo::_Tess2::TessHalfEdge e){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1204_edgeGoesLeft)
HXDLIN(1204)		 ::hxGeomAlgo::_Tess2::TessVertex _hx_tmp = e->get_Dst();
HXDLIN(1204)		return ::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(_hx_tmp,e->Org);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Geom_obj,edgeGoesLeft,return )

bool Geom_obj::edgeGoesRight( ::hxGeomAlgo::_Tess2::TessHalfEdge e){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1208_edgeGoesRight)
HXDLIN(1208)		 ::hxGeomAlgo::_Tess2::TessVertex e1 = e->Org;
HXDLIN(1208)		return ::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(e1,e->get_Dst());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Geom_obj,edgeGoesRight,return )

bool Geom_obj::edgeIsInternal( ::hxGeomAlgo::_Tess2::TessHalfEdge e){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1212_edgeIsInternal)
HXDLIN(1212)		if (::hx::IsNotNull( e->get_Rface() )) {
HXDLIN(1212)			return e->get_Rface()->inside;
            		}
            		else {
HXDLIN(1212)			return false;
            		}
HXDLIN(1212)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Geom_obj,edgeIsInternal,return )

Float Geom_obj::vertL1dist( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1216_vertL1dist)
HXDLIN(1216)		return (::Math_obj::abs((u->s - v->s)) + ::Math_obj::abs((u->t - v->t)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Geom_obj,vertL1dist,return )

Float Geom_obj::edgeEval( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1220_edgeEval)
HXLINE(1231)		bool _hx_tmp;
HXDLIN(1231)		if (::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(u,v)) {
HXLINE(1231)			_hx_tmp = ::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(v,w);
            		}
            		else {
HXLINE(1231)			_hx_tmp = false;
            		}
HXDLIN(1231)		::hxGeomAlgo::Debug_obj::_hx_assert(_hx_tmp,null(),::hx::SourceInfo(HX_("hxGeomAlgo/Tess2.hx",2d,62,3e,f7),1231,HX_("hxGeomAlgo._Tess2.Geom",d9,75,df,24),HX_("edgeEval",79,c2,79,53)));
HXLINE(1233)		Float gapL = (v->s - u->s);
HXLINE(1234)		Float gapR = (w->s - v->s);
HXLINE(1236)		if (((gapL + gapR) > ((Float)0.0))) {
HXLINE(1237)			if ((gapL < gapR)) {
HXLINE(1238)				return ((v->t - u->t) + ((u->t - w->t) * (gapL / (gapL + gapR))));
            			}
            			else {
HXLINE(1240)				return ((v->t - w->t) + ((w->t - u->t) * (gapR / (gapL + gapR))));
            			}
            		}
HXLINE(1244)		return ((Float)0.0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,edgeEval,return )

Float Geom_obj::edgeSign( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1248_edgeSign)
HXLINE(1253)		bool _hx_tmp;
HXDLIN(1253)		if (::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(u,v)) {
HXLINE(1253)			_hx_tmp = ::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(v,w);
            		}
            		else {
HXLINE(1253)			_hx_tmp = false;
            		}
HXDLIN(1253)		::hxGeomAlgo::Debug_obj::_hx_assert(_hx_tmp,null(),::hx::SourceInfo(HX_("hxGeomAlgo/Tess2.hx",2d,62,3e,f7),1253,HX_("hxGeomAlgo._Tess2.Geom",d9,75,df,24),HX_("edgeSign",1a,e7,b0,5c)));
HXLINE(1255)		Float gapL = (v->s - u->s);
HXLINE(1256)		Float gapR = (w->s - v->s);
HXLINE(1258)		if (((gapL + gapR) > ((Float)0.0))) {
HXLINE(1259)			return (((v->t - w->t) * gapL) + ((v->t - u->t) * gapR));
            		}
HXLINE(1262)		return ((Float)0.0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,edgeSign,return )

Float Geom_obj::transEval( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1271_transEval)
HXLINE(1282)		bool _hx_tmp;
HXDLIN(1282)		if (::hxGeomAlgo::_Tess2::Geom_obj::transLeq(u,v)) {
HXLINE(1282)			_hx_tmp = ::hxGeomAlgo::_Tess2::Geom_obj::transLeq(v,w);
            		}
            		else {
HXLINE(1282)			_hx_tmp = false;
            		}
HXDLIN(1282)		::hxGeomAlgo::Debug_obj::_hx_assert(_hx_tmp,null(),::hx::SourceInfo(HX_("hxGeomAlgo/Tess2.hx",2d,62,3e,f7),1282,HX_("hxGeomAlgo._Tess2.Geom",d9,75,df,24),HX_("transEval",e4,63,c8,2f)));
HXLINE(1284)		Float gapL = (v->t - u->t);
HXLINE(1285)		Float gapR = (w->t - v->t);
HXLINE(1287)		if (((gapL + gapR) > ((Float)0.0))) {
HXLINE(1288)			if ((gapL < gapR)) {
HXLINE(1289)				return ((v->s - u->s) + ((u->s - w->s) * (gapL / (gapL + gapR))));
            			}
            			else {
HXLINE(1291)				return ((v->s - w->s) + ((w->s - u->s) * (gapR / (gapL + gapR))));
            			}
            		}
HXLINE(1295)		return ((Float)0.0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,transEval,return )

Float Geom_obj::transSign( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1299_transSign)
HXLINE(1304)		bool _hx_tmp;
HXDLIN(1304)		if (::hxGeomAlgo::_Tess2::Geom_obj::transLeq(u,v)) {
HXLINE(1304)			_hx_tmp = ::hxGeomAlgo::_Tess2::Geom_obj::transLeq(v,w);
            		}
            		else {
HXLINE(1304)			_hx_tmp = false;
            		}
HXDLIN(1304)		::hxGeomAlgo::Debug_obj::_hx_assert(_hx_tmp,null(),::hx::SourceInfo(HX_("hxGeomAlgo/Tess2.hx",2d,62,3e,f7),1304,HX_("hxGeomAlgo._Tess2.Geom",d9,75,df,24),HX_("transSign",85,88,ff,38)));
HXLINE(1306)		Float gapL = (v->t - u->t);
HXLINE(1307)		Float gapR = (w->t - v->t);
HXLINE(1309)		if (((gapL + gapR) > ((Float)0.0))) {
HXLINE(1310)			return (((v->s - w->s) * gapL) + ((v->s - u->s) * gapR));
            		}
HXLINE(1313)		return ((Float)0.0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,transSign,return )

bool Geom_obj::vertCCW( ::hxGeomAlgo::_Tess2::TessVertex u, ::hxGeomAlgo::_Tess2::TessVertex v, ::hxGeomAlgo::_Tess2::TessVertex w){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1324_vertCCW)
HXDLIN(1324)		return ((((u->s * (v->t - w->t)) + (v->s * (w->t - u->t))) + (w->s * (u->t - v->t))) >= ((Float)0.0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,vertCCW,return )

Float Geom_obj::interpolate(Float a,Float x,Float b,Float y){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1335_interpolate)
HXLINE(1336)		if ((a < 0)) {
HXLINE(1336)			a = ( (Float)(0) );
            		}
HXLINE(1337)		if ((b < 0)) {
HXLINE(1337)			b = ( (Float)(0) );
            		}
HXLINE(1339)		if ((a <= b)) {
HXLINE(1340)			if ((b == 0)) {
HXLINE(1340)				return ((x + y) / ( (Float)(2) ));
            			}
            			else {
HXLINE(1341)				return (x + ((y - x) * (a / (a + b))));
            			}
            		}
            		else {
HXLINE(1342)			return (y + ((x - y) * (b / (a + b))));
            		}
HXLINE(1339)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Geom_obj,interpolate,return )

void Geom_obj::intersect( ::hxGeomAlgo::_Tess2::TessVertex o1, ::hxGeomAlgo::_Tess2::TessVertex d1, ::hxGeomAlgo::_Tess2::TessVertex o2, ::hxGeomAlgo::_Tess2::TessVertex d2, ::hxGeomAlgo::_Tess2::TessVertex v){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1367_intersect)
HXLINE(1372)		Float z1;
HXDLIN(1372)		Float z2;
HXLINE(1373)		 ::hxGeomAlgo::_Tess2::TessVertex t;
HXLINE(1383)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(o1,d1))) {
HXLINE(1383)			t = o1;
HXDLIN(1383)			o1 = d1;
HXDLIN(1383)			d1 = t;
            		}
HXLINE(1384)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(o2,d2))) {
HXLINE(1384)			t = o2;
HXDLIN(1384)			o2 = d2;
HXDLIN(1384)			d2 = t;
            		}
HXLINE(1385)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(o1,o2))) {
HXLINE(1385)			t = o1;
HXDLIN(1385)			o1 = o2;
HXDLIN(1385)			o2 = t;
HXDLIN(1385)			t = d1;
HXDLIN(1385)			d1 = d2;
HXDLIN(1385)			d2 = t;
            		}
HXLINE(1387)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(o2,d1))) {
HXLINE(1389)			v->s = ((o2->s + d1->s) / ( (Float)(2) ));
            		}
            		else {
HXLINE(1390)			if (::hxGeomAlgo::_Tess2::Geom_obj::vertLeq(d1,d2)) {
HXLINE(1392)				z1 = ::hxGeomAlgo::_Tess2::Geom_obj::edgeEval(o1,o2,d1);
HXLINE(1393)				z2 = ::hxGeomAlgo::_Tess2::Geom_obj::edgeEval(o2,d1,d2);
HXLINE(1394)				if (((z1 + z2) < 0)) {
HXLINE(1394)					z1 = -(z1);
HXDLIN(1394)					z2 = -(z2);
            				}
HXLINE(1395)				v->s = ::hxGeomAlgo::_Tess2::Geom_obj::interpolate(z1,o2->s,z2,d1->s);
            			}
            			else {
HXLINE(1398)				z1 = ::hxGeomAlgo::_Tess2::Geom_obj::edgeSign(o1,o2,d1);
HXLINE(1399)				z2 = -(::hxGeomAlgo::_Tess2::Geom_obj::edgeSign(o1,d2,d1));
HXLINE(1400)				if (((z1 + z2) < 0)) {
HXLINE(1400)					z1 = -(z1);
HXDLIN(1400)					z2 = -(z2);
            				}
HXLINE(1401)				v->s = ::hxGeomAlgo::_Tess2::Geom_obj::interpolate(z1,o2->s,z2,d2->s);
            			}
            		}
HXLINE(1406)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::transLeq(o1,d1))) {
HXLINE(1406)			t = o1;
HXDLIN(1406)			o1 = d1;
HXDLIN(1406)			d1 = t;
            		}
HXLINE(1407)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::transLeq(o2,d2))) {
HXLINE(1407)			t = o2;
HXDLIN(1407)			o2 = d2;
HXDLIN(1407)			d2 = t;
            		}
HXLINE(1408)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::transLeq(o1,o2))) {
HXLINE(1408)			t = o1;
HXDLIN(1408)			o1 = o2;
HXDLIN(1408)			o2 = t;
HXDLIN(1408)			t = d1;
HXDLIN(1408)			d1 = d2;
HXDLIN(1408)			d2 = t;
            		}
HXLINE(1410)		if (!(::hxGeomAlgo::_Tess2::Geom_obj::transLeq(o2,d1))) {
HXLINE(1412)			v->t = ((o2->t + d1->t) / ( (Float)(2) ));
            		}
            		else {
HXLINE(1413)			if (::hxGeomAlgo::_Tess2::Geom_obj::transLeq(d1,d2)) {
HXLINE(1415)				z1 = ::hxGeomAlgo::_Tess2::Geom_obj::transEval(o1,o2,d1);
HXLINE(1416)				z2 = ::hxGeomAlgo::_Tess2::Geom_obj::transEval(o2,d1,d2);
HXLINE(1417)				if (((z1 + z2) < 0)) {
HXLINE(1417)					z1 = -(z1);
HXDLIN(1417)					z2 = -(z2);
            				}
HXLINE(1418)				v->t = ::hxGeomAlgo::_Tess2::Geom_obj::interpolate(z1,o2->t,z2,d1->t);
            			}
            			else {
HXLINE(1421)				z1 = ::hxGeomAlgo::_Tess2::Geom_obj::transSign(o1,o2,d1);
HXLINE(1422)				z2 = -(::hxGeomAlgo::_Tess2::Geom_obj::transSign(o1,d2,d1));
HXLINE(1423)				if (((z1 + z2) < 0)) {
HXLINE(1423)					z1 = -(z1);
HXDLIN(1423)					z2 = -(z2);
            				}
HXLINE(1424)				v->t = ::hxGeomAlgo::_Tess2::Geom_obj::interpolate(z1,o2->t,z2,d2->t);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Geom_obj,intersect,(void))

Float Geom_obj::calcAngle( ::hxGeomAlgo::_Tess2::TessVertex v0, ::hxGeomAlgo::_Tess2::TessVertex v1, ::hxGeomAlgo::_Tess2::TessVertex v2){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1433_calcAngle)
HXLINE(1435)		Float a_0 = (v2->s - v1->s);
HXDLIN(1435)		Float a_1 = (v2->t - v1->t);
HXLINE(1436)		Float b_0 = (v0->s - v1->s);
HXDLIN(1436)		Float b_1 = (v0->t - v1->t);
HXLINE(1434)		Float num = ((a_0 * b_0) + (a_1 * b_1));
HXDLIN(1434)		Float den = (::Math_obj::sqrt(((a_0 * a_0) + (a_1 * a_1))) * ::Math_obj::sqrt(((b_0 * b_0) + (b_1 * b_1))));
HXLINE(1439)		if ((den > ((Float)0.0))) {
HXLINE(1439)			num = (num / den);
            		}
HXLINE(1440)		if ((num < ((Float)-1.0))) {
HXLINE(1440)			num = ((Float)-1.0);
            		}
HXLINE(1441)		if ((num > ((Float)1.0))) {
HXLINE(1441)			num = ((Float)1.0);
            		}
HXLINE(1442)		return ::Math_obj::acos(num);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Geom_obj,calcAngle,return )

bool Geom_obj::edgeIsLocallyDelaunay( ::hxGeomAlgo::_Tess2::TessHalfEdge e){
            	HX_STACKFRAME(&_hx_pos_45256d98d075467d_1451_edgeIsLocallyDelaunay)
HXDLIN(1451)		Float _hx_tmp = ::hxGeomAlgo::_Tess2::Geom_obj::calcAngle(e->Lnext->Org,e->Lnext->Lnext->Org,e->Org);
HXDLIN(1451)		Float _hx_tmp1 = (_hx_tmp + ::hxGeomAlgo::_Tess2::Geom_obj::calcAngle(e->Sym->Lnext->Org,e->Sym->Lnext->Lnext->Org,e->Sym->Org));
HXDLIN(1451)		return (_hx_tmp1 < (::Math_obj::PI + ((Float)0.01)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Geom_obj,edgeIsLocallyDelaunay,return )


Geom_obj::Geom_obj()
{
}

bool Geom_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"vertEq") ) { outValue = vertEq_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"vertLeq") ) { outValue = vertLeq_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"vertCCW") ) { outValue = vertCCW_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"transLeq") ) { outValue = transLeq_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"edgeEval") ) { outValue = edgeEval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"edgeSign") ) { outValue = edgeSign_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transEval") ) { outValue = transEval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"transSign") ) { outValue = transSign_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"intersect") ) { outValue = intersect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"calcAngle") ) { outValue = calcAngle_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vertL1dist") ) { outValue = vertL1dist_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"edgeGoesLeft") ) { outValue = edgeGoesLeft_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"edgeGoesRight") ) { outValue = edgeGoesRight_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"edgeIsInternal") ) { outValue = edgeIsInternal_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"edgeIsLocallyDelaunay") ) { outValue = edgeIsLocallyDelaunay_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Geom_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Geom_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Geom_obj::__mClass;

static ::String Geom_obj_sStaticFields[] = {
	HX_("vertEq",7d,bf,47,a1),
	HX_("vertLeq",a7,13,85,7d),
	HX_("transLeq",90,f4,59,da),
	HX_("edgeGoesLeft",1a,4d,12,8f),
	HX_("edgeGoesRight",69,37,fe,17),
	HX_("edgeIsInternal",e4,d3,2e,f3),
	HX_("vertL1dist",bc,8f,ed,07),
	HX_("edgeEval",79,c2,79,53),
	HX_("edgeSign",1a,e7,b0,5c),
	HX_("transEval",e4,63,c8,2f),
	HX_("transSign",85,88,ff,38),
	HX_("vertCCW",a6,21,7e,7d),
	HX_("interpolate",c1,d4,32,1f),
	HX_("intersect",df,00,75,42),
	HX_("calcAngle",fe,5e,eb,15),
	HX_("edgeIsLocallyDelaunay",d8,c1,68,5b),
	::String(null())
};

void Geom_obj::__register()
{
	Geom_obj _hx_dummy;
	Geom_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hxGeomAlgo._Tess2.Geom",d9,75,df,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Geom_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Geom_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Geom_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Geom_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Geom_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxGeomAlgo
} // end namespace _Tess2
