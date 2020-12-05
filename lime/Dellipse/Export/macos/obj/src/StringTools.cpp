// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_50_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","/usr/local/lib/haxe/std/StringTools.hx",50,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_118_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","/usr/local/lib/haxe/std/StringTools.hx",118,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_232_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","/usr/local/lib/haxe/std/StringTools.hx",232,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_243_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","/usr/local/lib/haxe/std/StringTools.hx",243,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_270_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","/usr/local/lib/haxe/std/StringTools.hx",270,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_288_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","/usr/local/lib/haxe/std/StringTools.hx",288,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_313_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","/usr/local/lib/haxe/std/StringTools.hx",313,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_341_trim,"StringTools","trim",0x2908d066,"StringTools.trim","/usr/local/lib/haxe/std/StringTools.hx",341,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_357_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","/usr/local/lib/haxe/std/StringTools.hx",357,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_416_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","/usr/local/lib/haxe/std/StringTools.hx",416,0x3f930611)
HX_LOCAL_STACK_FRAME(_hx_pos_0e615b5827179e15_426_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","/usr/local/lib/haxe/std/StringTools.hx",426,0x3f930611)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x084f186e;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_50_urlEncode)
HXDLIN(  50)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_118_urlDecode)
HXDLIN( 118)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_232_startsWith)
HXDLIN( 232)		if ((s.length >= start.length)) {
HXDLIN( 232)			return (s.lastIndexOf(start,0) == 0);
            		}
            		else {
HXDLIN( 232)			return false;
            		}
HXDLIN( 232)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_243_endsWith)
HXLINE( 255)		int elen = end.length;
HXLINE( 256)		int slen = s.length;
HXLINE( 257)		if ((slen >= elen)) {
HXLINE( 257)			return (s.indexOf(end,(slen - elen)) == (slen - elen));
            		}
            		else {
HXLINE( 257)			return false;
            		}
HXDLIN( 257)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_270_isSpace)
HXLINE( 275)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 276)		bool _hx_tmp;
HXDLIN( 276)		if (::hx::IsGreater( c,8 )) {
HXLINE( 276)			_hx_tmp = ::hx::IsLess( c,14 );
            		}
            		else {
HXLINE( 276)			_hx_tmp = false;
            		}
HXDLIN( 276)		if (!(_hx_tmp)) {
HXLINE( 276)			return ::hx::IsEq( c,32 );
            		}
            		else {
HXLINE( 276)			return true;
            		}
HXDLIN( 276)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_288_ltrim)
HXLINE( 292)		int l = s.length;
HXLINE( 293)		int r = 0;
HXLINE( 294)		while(true){
HXLINE( 294)			bool _hx_tmp;
HXDLIN( 294)			if ((r < l)) {
HXLINE( 294)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 294)				_hx_tmp = false;
            			}
HXDLIN( 294)			if (!(_hx_tmp)) {
HXLINE( 294)				goto _hx_goto_5;
            			}
HXLINE( 295)			r = (r + 1);
            		}
            		_hx_goto_5:;
HXLINE( 297)		if ((r > 0)) {
HXLINE( 298)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 300)			return s;
            		}
HXLINE( 297)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_313_rtrim)
HXLINE( 317)		int l = s.length;
HXLINE( 318)		int r = 0;
HXLINE( 319)		while(true){
HXLINE( 319)			bool _hx_tmp;
HXDLIN( 319)			if ((r < l)) {
HXLINE( 319)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - 1));
            			}
            			else {
HXLINE( 319)				_hx_tmp = false;
            			}
HXDLIN( 319)			if (!(_hx_tmp)) {
HXLINE( 319)				goto _hx_goto_7;
            			}
HXLINE( 320)			r = (r + 1);
            		}
            		_hx_goto_7:;
HXLINE( 322)		if ((r > 0)) {
HXLINE( 323)			return s.substr(0,(l - r));
            		}
            		else {
HXLINE( 325)			return s;
            		}
HXLINE( 322)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_341_trim)
HXDLIN( 341)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_GC_STACKFRAME(&_hx_pos_0e615b5827179e15_357_lpad)
HXLINE( 358)		if ((c.length <= 0)) {
HXLINE( 359)			return s;
            		}
HXLINE( 361)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 362)		l = (l - s.length);
HXLINE( 363)		while((buf->get_length() < l)){
HXLINE( 364)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 364)				buf->flush();
            			}
HXDLIN( 364)			if (::hx::IsNull( buf->b )) {
HXLINE( 364)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(c));
            			}
            			else {
HXLINE( 364)				::Array< ::String > buf1 = buf->b;
HXDLIN( 364)				buf1->push(::Std_obj::string(c));
            			}
            		}
HXLINE( 366)		{
HXLINE( 366)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 366)				buf->flush();
            			}
HXDLIN( 366)			if (::hx::IsNull( buf->b )) {
HXLINE( 366)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(s));
            			}
            			else {
HXLINE( 366)				::Array< ::String > buf1 = buf->b;
HXDLIN( 366)				buf1->push(::Std_obj::string(s));
            			}
            		}
HXLINE( 367)		return buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_416_replace)
HXDLIN( 416)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_0e615b5827179e15_426_hex)
HXLINE( 432)		::String s = HX_("",00,00,00,00);
HXLINE( 433)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 434)		while(true){
HXLINE( 435)			s = (hexChars.charAt((n & 15)) + s);
HXLINE( 436)			n = ::hx::UShr(n,4);
HXLINE( 434)			if (!((n > 0))) {
HXLINE( 434)				goto _hx_goto_13;
            			}
            		}
            		_hx_goto_13:;
HXLINE( 447)		if (::hx::IsNotNull( digits )) {
HXLINE( 448)			while(::hx::IsLess( s.length,digits )){
HXLINE( 449)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 451)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_("urlEncode",e5,4e,52,9a),
	HX_("urlDecode",fd,b9,5b,05),
	HX_("startsWith",77,c0,cf,f9),
	HX_("endsWith",5e,7a,b6,db),
	HX_("isSpace",7c,30,ec,1d),
	HX_("ltrim",4e,43,4a,7c),
	HX_("rtrim",54,be,b1,f0),
	HX_("trim",e2,9c,03,4d),
	HX_("lpad",67,5c,b8,47),
	HX_("replace",34,48,28,ab),
	HX_("hex",db,42,4f,00),
	::String(null())
};

void StringTools_obj::__register()
{
	StringTools_obj _hx_dummy;
	StringTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StringTools",6a,db,63,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
