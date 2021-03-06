// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_pallette_metal_AllGold
#include <pallette/metal/AllGold.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_065b51c9ae92fbe3_159_getColors,"pallette.metal.AllGold","getColors",0xcf03a7b5,"pallette.metal.AllGold.getColors","pallette/metal/Gold.hx",159,0x252aedb8)
static const int _hx_array_data_e9be707d_1[] = {
	(int)-133658,(int)-331546,(int)-1828,(int)-657956,(int)-1331,(int)-331586,(int)-1120086,(int)-663885,(int)-69791,(int)-267171,(int)16640272,(int)-467330,(int)-337314,(int)-75683,(int)-9384,(int)-207257,(int)-206569,(int)-8448,(int)-10240,(int)-10496,(int)-11728,(int)-13261,(int)-13312,(int)-736208,(int)-212480,(int)-17920,(int)-935891,(int)-18533,(int)-744352,(int)-1193553,(int)-1655158,(int)-1780688,(int)-1857449,(int)-90876,(int)-1988257,(int)-3955864,(int)-3958445,(int)-5664924,(int)-3820714,(int)-3164869,(int)-2838729,(int)-2448096,(int)-3432139,(int)-4087804,(int)-3763446,(int)-4749529,(int)-3308225,(int)-4755847,(int)-1477551,(int)-3377374,(int)-4556761,(int)-4684277,(int)-6521797,(int)-8030898,(int)-6917865,(int)-6724331,(int)-9221614,
};
HX_LOCAL_STACK_FRAME(_hx_pos_065b51c9ae92fbe3_219_random,"pallette.metal.AllGold","random",0x19fbc1d4,"pallette.metal.AllGold.random","pallette/metal/Gold.hx",219,0x252aedb8)
static const int _hx_array_data_e9be707d_3[] = {
	(int)-133658,(int)-331546,(int)-1828,(int)-657956,(int)-1331,(int)-331586,(int)-1120086,(int)-663885,(int)-69791,(int)-267171,(int)16640272,(int)-467330,(int)-337314,(int)-75683,(int)-9384,(int)-207257,(int)-206569,(int)-8448,(int)-10240,(int)-10496,(int)-11728,(int)-13261,(int)-13312,(int)-736208,(int)-212480,(int)-17920,(int)-935891,(int)-18533,(int)-744352,(int)-1193553,(int)-1655158,(int)-1780688,(int)-1857449,(int)-90876,(int)-1988257,(int)-3955864,(int)-3958445,(int)-5664924,(int)-3820714,(int)-3164869,(int)-2838729,(int)-2448096,(int)-3432139,(int)-4087804,(int)-3763446,(int)-4749529,(int)-3308225,(int)-4755847,(int)-1477551,(int)-3377374,(int)-4556761,(int)-4684277,(int)-6521797,(int)-8030898,(int)-6917865,(int)-6724331,(int)-9221614,
};
HX_LOCAL_STACK_FRAME(_hx_pos_065b51c9ae92fbe3_227_getName,"pallette.metal.AllGold","getName",0xd8215910,"pallette.metal.AllGold.getName","pallette/metal/Gold.hx",227,0x252aedb8)
namespace pallette{
namespace metal{

void AllGold_obj::__construct() { }

Dynamic AllGold_obj::__CreateEmpty() { return new AllGold_obj; }

void *AllGold_obj::_hx_vtable = 0;

Dynamic AllGold_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AllGold_obj > _hx_result = new AllGold_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AllGold_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7684f8eb;
}

::Array< int > AllGold_obj::getColors(){
            	HX_STACKFRAME(&_hx_pos_065b51c9ae92fbe3_159_getColors)
HXDLIN( 159)		return ::Array_obj< int >::fromData( _hx_array_data_e9be707d_1,57);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AllGold_obj,getColors,return )

int AllGold_obj::random(){
            	HX_STACKFRAME(&_hx_pos_065b51c9ae92fbe3_219_random)
HXLINE( 220)		::Array< int > all = ::Array_obj< int >::fromData( _hx_array_data_e9be707d_3,57);
HXLINE( 221)		int rnd = ::Math_obj::round((::Math_obj::random() * ( (Float)(56) )));
HXLINE( 222)		return all->__get(rnd);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AllGold_obj,random,return )

::String AllGold_obj::getName(int g){
            	HX_STACKFRAME(&_hx_pos_065b51c9ae92fbe3_227_getName)
HXDLIN( 227)		switch((int)(g)){
            			case (int)-9221614: {
HXLINE( 284)				return HX_("rawUmber",ef,06,f7,07);
            			}
            			break;
            			case (int)-8030898: {
HXLINE( 281)				return HX_("goldFusion",c4,02,7e,db);
            			}
            			break;
            			case (int)-6917865: {
HXLINE( 282)				return HX_("sandyTaupe",68,4e,4a,20);
            			}
            			break;
            			case (int)-6724331: {
HXLINE( 283)				return HX_("goldenBrown",ad,ca,ae,3e);
            			}
            			break;
            			case (int)-6521797: {
HXLINE( 280)				return HX_("metallicSunburst",53,cf,9c,0a);
            			}
            			break;
            			case (int)-5664924: {
HXLINE( 265)				return HX_("califoniaGold",62,bb,3b,db);
            			}
            			break;
            			case (int)-4755847: {
HXLINE( 275)				return HX_("roseGold",cf,23,0b,d2);
            			}
            			break;
            			case (int)-4749529: {
HXLINE( 273)				return HX_("califoniaGold",62,bb,3b,db);
            			}
            			break;
            			case (int)-4684277: {
HXLINE( 279)				return HX_("darkGoldenrod",48,27,fc,2f);
            			}
            			break;
            			case (int)-4556761: {
HXLINE( 278)				return HX_("pirateGold",99,84,d2,97);
            			}
            			break;
            			case (int)-4087804: {
HXLINE( 271)				return HX_("buddhaGold",8c,62,2c,39);
            			}
            			break;
            			case (int)-3958445: {
HXLINE( 264)				return HX_("aztecGold",b9,99,36,99);
            			}
            			break;
            			case (int)-3955864: {
HXLINE( 263)				return HX_("brass",71,2b,e9,b8);
            			}
            			break;
            			case (int)-3820714: {
HXLINE( 266)				return HX_("vegasGold",0a,a9,45,b6);
            			}
            			break;
            			case (int)-3763446: {
HXLINE( 272)				return HX_("pomonaGold",54,c2,ec,fd);
            			}
            			break;
            			case (int)-3432139: {
HXLINE( 270)				return HX_("satinSheenGold",ce,6e,e0,17);
            			}
            			break;
            			case (int)-3377374: {
HXLINE( 277)				return HX_("ochre",87,d1,39,2b);
            			}
            			break;
            			case (int)-3308225: {
HXLINE( 274)				return HX_("peru",f8,ec,54,4a);
            			}
            			break;
            			case (int)-3164869: {
HXLINE( 267)				return HX_("oldGold",e7,36,ae,f9);
            			}
            			break;
            			case (int)-2838729: {
HXLINE( 268)				return HX_("metalicGold",e1,f0,0a,b4);
            			}
            			break;
            			case (int)-2448096: {
HXLINE( 269)				return HX_("goldenrod",9e,da,43,a3);
            			}
            			break;
            			case (int)-1988257: {
HXLINE( 262)				return HX_("earthYellow",9e,86,fd,77);
            			}
            			break;
            			case (int)-1857449: {
HXLINE( 260)				return HX_("incaGold",03,92,5f,f2);
            			}
            			break;
            			case (int)-1780688: {
HXLINE( 259)				return HX_("lightBuddhaGold",02,9f,1b,0e);
            			}
            			break;
            			case (int)-1655158: {
HXLINE( 258)				return HX_("paleGold",6a,3a,fa,4c);
            			}
            			break;
            			case (int)-1477551: {
HXLINE( 276)				return HX_("burntSienna",97,b3,dd,79);
            			}
            			break;
            			case (int)-1193553: {
HXLINE( 257)				return HX_("desertSand",b9,7b,47,06);
            			}
            			break;
            			case (int)-1120086: {
HXLINE( 234)				return HX_("paleGoldenrod",94,b6,0c,ee);
            			}
            			break;
            			case (int)-935891: {
HXLINE( 254)				return HX_("missouriGold",99,3a,d5,04);
            			}
            			break;
            			case (int)-744352: {
HXLINE( 256)				return HX_("sandyBrown",81,f6,4b,ce);
            			}
            			break;
            			case (int)-736208: {
HXLINE( 251)				return HX_("saffron",83,29,64,75);
            			}
            			break;
            			case (int)-663885: {
HXLINE( 235)				return HX_("wheat",27,31,ba,c9);
            			}
            			break;
            			case (int)-657956: {
HXLINE( 231)				return HX_("beige",e4,6c,57,b0);
            			}
            			break;
            			case (int)-467330: {
HXLINE( 239)				return HX_("jasmine",6f,30,f2,7f);
            			}
            			break;
            			case (int)-337314: {
HXLINE( 240)				return HX_("jonquil",50,48,9e,3a);
            			}
            			break;
            			case (int)-331586: {
HXLINE( 233)				return HX_("blond",db,7e,fc,b4);
            			}
            			break;
            			case (int)-331546: {
HXLINE( 229)				return HX_("linen",fa,dd,01,75);
            			}
            			break;
            			case (int)-267171: {
HXLINE( 237)				return HX_("maize",80,04,1b,03);
            			}
            			break;
            			case (int)-212480: {
HXLINE( 252)				return HX_("goldenPoppy",11,02,50,4c);
            			}
            			break;
            			case (int)-207257: {
HXLINE( 243)				return HX_("mediumGoldenrod",69,af,ac,7e);
            			}
            			break;
            			case (int)-206569: {
HXLINE( 244)				return HX_("candlelight",e9,b3,c0,0f);
            			}
            			break;
            			case (int)-133658: {
HXLINE( 228)				return HX_("old_Lace",4f,ee,34,39);
            			}
            			break;
            			case (int)-90876: {
HXLINE( 261)				return HX_("brightCalifoniaGold",c8,86,d2,d9);
            			}
            			break;
            			case (int)-75683: {
HXLINE( 241)				return HX_("dandelion",ee,0d,7f,5b);
            			}
            			break;
            			case (int)-69791: {
HXLINE( 236)				return HX_("lightCandlelight",b3,5e,26,8c);
            			}
            			break;
            			case (int)-18533: {
HXLINE( 255)				return HX_("macaroniAndCheese",c4,35,e1,bb);
            			}
            			break;
            			case (int)-17920: {
HXLINE( 253)				return HX_("selectiveYellow",f0,3e,15,60);
            			}
            			break;
            			case (int)-13312: {
HXLINE( 250)				return HX_("tangerineYellow",41,bd,ef,b0);
            			}
            			break;
            			case (int)-13261: {
HXLINE( 249)				return HX_("sunglow",19,ae,60,10);
            			}
            			break;
            			case (int)-11728: {
HXLINE( 248)				return HX_("lightCaliforniaGold",6e,c1,1a,33);
            			}
            			break;
            			case (int)-10496: {
HXLINE( 247)				return HX_("golden",09,d3,eb,5f);
            			}
            			break;
            			case (int)-10240: {
HXLINE( 246)				return HX_("schoolBusYellow",c0,3f,7f,47);
            			}
            			break;
            			case (int)-9384: {
HXLINE( 242)				return HX_("mustard",ea,3b,70,00);
            			}
            			break;
            			case (int)-8448: {
HXLINE( 245)				return HX_("goldenYellow",5d,53,3e,4e);
            			}
            			break;
            			case (int)-1828: {
HXLINE( 230)				return HX_("cornsilk",fd,25,67,5d);
            			}
            			break;
            			case (int)-1331: {
HXLINE( 232)				return HX_("lemonChiffon",d0,38,99,ae);
            			}
            			break;
            			case (int)16640272: {
HXLINE( 238)				return HX_("lemonPeel",2f,cd,41,30);
            			}
            			break;
            		}
HXLINE( 227)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AllGold_obj,getName,return )


AllGold_obj::AllGold_obj()
{
}

bool AllGold_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { outValue = getName_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getColors") ) { outValue = getColors_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AllGold_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AllGold_obj_sStaticStorageInfo = 0;
#endif

::hx::Class AllGold_obj::__mClass;

static ::String AllGold_obj_sStaticFields[] = {
	HX_("getColors",e6,4e,dd,42),
	HX_("random",03,22,8f,b7),
	HX_("getName",01,22,82,1b),
	::String(null())
};

void AllGold_obj::__register()
{
	AllGold_obj _hx_dummy;
	AllGold_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("pallette.metal.AllGold",7d,70,be,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AllGold_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AllGold_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AllGold_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AllGold_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AllGold_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pallette
} // end namespace metal
