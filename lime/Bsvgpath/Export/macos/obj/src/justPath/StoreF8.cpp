// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_justPath_StoreF8
#include <justPath/StoreF8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_3_new,"justPath.StoreF8","new",0xf8aa63a8,"justPath.StoreF8.new","justPath/StoreF8.hx",3,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_14_clear,"justPath.StoreF8","clear",0xf1f366d5,"justPath.StoreF8.clear","justPath/StoreF8.hx",14,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_26_length,"justPath.StoreF8","length",0x5a663e9e,"justPath.StoreF8.length","justPath/StoreF8.hx",26,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_28_push,"justPath.StoreF8","push",0x9dcb5d92,"justPath.StoreF8.push","justPath/StoreF8.hx",28,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_51_pop,"justPath.StoreF8","pop",0xf8abf0d9,"justPath.StoreF8.pop","justPath/StoreF8.hx",51,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_85_unshift,"justPath.StoreF8","unshift",0xb029bad1,"justPath.StoreF8.unshift","justPath/StoreF8.hx",85,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_95_shift,"justPath.StoreF8","shift",0x25bae1ca,"justPath.StoreF8.shift","justPath/StoreF8.hx",95,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_111_toString,"justPath.StoreF8","toString",0x88155864,"justPath.StoreF8.toString","justPath/StoreF8.hx",111,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_113_populatedToString,"justPath.StoreF8","populatedToString",0xe786664e,"justPath.StoreF8.populatedToString","justPath/StoreF8.hx",113,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_139_hasNext,"justPath.StoreF8","hasNext",0x4fbc7cb5,"justPath.StoreF8.hasNext","justPath/StoreF8.hx",139,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_142_resetIterator,"justPath.StoreF8","resetIterator",0xba33b425,"justPath.StoreF8.resetIterator","justPath/StoreF8.hx",142,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_144_next,"justPath.StoreF8","next",0x9c6cd0ab,"justPath.StoreF8.next","justPath/StoreF8.hx",144,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_170_first,"justPath.StoreF8","first",0xaa356d78,"justPath.StoreF8.first","justPath/StoreF8.hx",170,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_172_last,"justPath.StoreF8","last",0x9b17560e,"justPath.StoreF8.last","justPath/StoreF8.hx",172,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_196_penultimate,"justPath.StoreF8","penultimate",0xe1ddb872,"justPath.StoreF8.penultimate","justPath/StoreF8.hx",196,0xf4c83409)
HX_LOCAL_STACK_FRAME(_hx_pos_0bbc18d2b3c3eb01_220_toArray,"justPath.StoreF8","toArray",0x29899166,"justPath.StoreF8.toArray","justPath/StoreF8.hx",220,0xf4c83409)
namespace justPath{

void StoreF8_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_3_new)
HXLINE( 137)		this->count = 0;
HXLINE(   4)		this->l = 0;
            	}

Dynamic StoreF8_obj::__CreateEmpty() { return new StoreF8_obj; }

void *StoreF8_obj::_hx_vtable = 0;

Dynamic StoreF8_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoreF8_obj > _hx_result = new StoreF8_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StoreF8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f7753ea;
}

void StoreF8_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_14_clear)
HXLINE(  15)		this->l = 0;
HXLINE(  16)		this->s0 = null();
HXLINE(  17)		this->s1 = null();
HXLINE(  18)		this->s2 = null();
HXLINE(  19)		this->s3 = null();
HXLINE(  20)		this->s4 = null();
HXLINE(  21)		this->s5 = null();
HXLINE(  22)		this->s6 = null();
HXLINE(  23)		this->s7 = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,clear,(void))

int StoreF8_obj::length(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_26_length)
HXDLIN(  26)		return this->l;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,length,return )

void StoreF8_obj::push( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_28_push)
HXLINE(  29)		switch((int)(this->l)){
            			case (int)0: {
HXLINE(  31)				this->s0 = v;
            			}
            			break;
            			case (int)1: {
HXLINE(  33)				this->s1 = v;
            			}
            			break;
            			case (int)2: {
HXLINE(  35)				this->s2 = v;
            			}
            			break;
            			case (int)3: {
HXLINE(  37)				this->s3 = v;
            			}
            			break;
            			case (int)4: {
HXLINE(  39)				this->s4 = v;
            			}
            			break;
            			case (int)5: {
HXLINE(  41)				this->s5 = v;
            			}
            			break;
            			case (int)6: {
HXLINE(  43)				this->s6 = v;
            			}
            			break;
            			case (int)7: {
HXLINE(  45)				this->s7 = v;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  49)		this->l++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoreF8_obj,push,(void))

 ::Dynamic StoreF8_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_51_pop)
HXLINE(  52)		 ::Dynamic out = null();
HXLINE(  53)		switch((int)(this->l)){
            			case (int)0: {
HXLINE(  55)				out = this->s0;
HXLINE(  56)				this->s0 = null();
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				out = this->s1;
HXLINE(  59)				this->s1 = null();
            			}
            			break;
            			case (int)2: {
HXLINE(  61)				out = this->s2;
HXLINE(  62)				this->s2 = null();
            			}
            			break;
            			case (int)3: {
HXLINE(  64)				out = this->s3;
HXLINE(  65)				this->s3 = null();
            			}
            			break;
            			case (int)4: {
HXLINE(  67)				out = this->s4;
HXLINE(  68)				this->s4 = null();
            			}
            			break;
            			case (int)5: {
HXLINE(  70)				out = this->s5;
HXLINE(  71)				this->s5 = null();
            			}
            			break;
            			case (int)6: {
HXLINE(  73)				out = this->s6;
HXLINE(  74)				this->s6 = null();
            			}
            			break;
            			case (int)7: {
HXLINE(  76)				out = this->s7;
HXLINE(  77)				this->s6 = null();
            			}
            			break;
            			default:{
            			}
            		}
HXLINE(  81)		this->l--;
HXLINE(  82)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,pop,return )

void StoreF8_obj::unshift( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_85_unshift)
HXLINE(  86)		this->s7 = this->s6;
HXLINE(  87)		this->s6 = this->s5;
HXLINE(  88)		this->s5 = this->s4;
HXLINE(  89)		this->s4 = this->s3;
HXLINE(  90)		this->s3 = this->s2;
HXLINE(  91)		this->s2 = this->s1;
HXLINE(  92)		this->s0 = v;
HXLINE(  93)		this->l++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StoreF8_obj,unshift,(void))

 ::Dynamic StoreF8_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_95_shift)
HXLINE(  96)		 ::Dynamic out = this->s0;
HXLINE(  97)		if ((this->l != 0)) {
HXLINE(  98)			this->s0 = this->s1;
HXLINE(  99)			this->s1 = this->s2;
HXLINE( 100)			this->s2 = this->s3;
HXLINE( 101)			this->s3 = this->s4;
HXLINE( 102)			this->s4 = this->s5;
HXLINE( 103)			this->s5 = this->s6;
HXLINE( 104)			this->s6 = this->s7;
HXLINE( 105)			this->s7 = null();
HXLINE( 106)			this->l--;
            		}
HXLINE( 108)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,shift,return )

::String StoreF8_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_111_toString)
HXDLIN( 111)		return (((((((((((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3) + HX_(", ",74,26,00,00)) + this->s4) + HX_(", ",74,26,00,00)) + this->s5) + HX_(", ",74,26,00,00)) + this->s6) + HX_(", ",74,26,00,00)) + this->s7);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,toString,return )

::String StoreF8_obj::populatedToString(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_113_populatedToString)
HXLINE( 114)		::String out = HX_("",00,00,00,00);
HXLINE( 115)		switch((int)((this->l - 1))){
            			case (int)0: {
HXLINE( 117)				out = (HX_("",00,00,00,00) + this->s0);
            			}
            			break;
            			case (int)1: {
HXLINE( 119)				out = (((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1);
            			}
            			break;
            			case (int)2: {
HXLINE( 121)				out = (((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2);
            			}
            			break;
            			case (int)3: {
HXLINE( 123)				out = (((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3);
            			}
            			break;
            			case (int)4: {
HXLINE( 125)				out = (((((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3) + HX_(", ",74,26,00,00)) + this->s4);
            			}
            			break;
            			case (int)5: {
HXLINE( 127)				out = (((((((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3) + HX_(", ",74,26,00,00)) + this->s4) + HX_(", ",74,26,00,00)) + this->s5);
            			}
            			break;
            			case (int)6: {
HXLINE( 129)				out = (((((((((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3) + HX_(", ",74,26,00,00)) + this->s4) + HX_(", ",74,26,00,00)) + this->s5) + HX_(", ",74,26,00,00)) + this->s6);
            			}
            			break;
            			case (int)7: {
HXLINE( 131)				out = (((((((((((((((HX_("",00,00,00,00) + this->s0) + HX_(", ",74,26,00,00)) + this->s1) + HX_(", ",74,26,00,00)) + this->s2) + HX_(", ",74,26,00,00)) + this->s3) + HX_(", ",74,26,00,00)) + this->s4) + HX_(", ",74,26,00,00)) + this->s5) + HX_(", ",74,26,00,00)) + this->s6) + HX_(", ",74,26,00,00)) + this->s7);
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 135)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,populatedToString,return )

bool StoreF8_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_139_hasNext)
HXDLIN( 139)		return (this->count < (this->l + 1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,hasNext,return )

void StoreF8_obj::resetIterator(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_142_resetIterator)
HXDLIN( 142)		this->count = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,resetIterator,(void))

 ::Dynamic StoreF8_obj::next(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_144_next)
HXLINE( 145)		 ::Dynamic out = null();
HXLINE( 146)		switch((int)(this->count)){
            			case (int)0: {
HXLINE( 148)				out = this->s0;
            			}
            			break;
            			case (int)1: {
HXLINE( 150)				out = this->s1;
            			}
            			break;
            			case (int)2: {
HXLINE( 152)				out = this->s2;
            			}
            			break;
            			case (int)3: {
HXLINE( 154)				out = this->s3;
            			}
            			break;
            			case (int)4: {
HXLINE( 156)				out = this->s4;
            			}
            			break;
            			case (int)5: {
HXLINE( 158)				out = this->s5;
            			}
            			break;
            			case (int)6: {
HXLINE( 160)				out = this->s6;
            			}
            			break;
            			case (int)7: {
HXLINE( 162)				out = this->s7;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 166)		this->count++;
HXLINE( 167)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,next,return )

 ::Dynamic StoreF8_obj::first(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_170_first)
HXDLIN( 170)		return this->s0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,first,return )

 ::Dynamic StoreF8_obj::last(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_172_last)
HXLINE( 173)		 ::Dynamic out = null();
HXLINE( 174)		switch((int)(this->l)){
            			case (int)0: {
HXLINE( 176)				out = this->s0;
            			}
            			break;
            			case (int)1: {
HXLINE( 178)				out = this->s1;
            			}
            			break;
            			case (int)2: {
HXLINE( 180)				out = this->s2;
            			}
            			break;
            			case (int)3: {
HXLINE( 182)				out = this->s3;
            			}
            			break;
            			case (int)4: {
HXLINE( 184)				out = this->s4;
            			}
            			break;
            			case (int)5: {
HXLINE( 186)				out = this->s5;
            			}
            			break;
            			case (int)6: {
HXLINE( 188)				out = this->s6;
            			}
            			break;
            			case (int)7: {
HXLINE( 190)				out = this->s7;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 194)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,last,return )

 ::Dynamic StoreF8_obj::penultimate(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_196_penultimate)
HXLINE( 197)		 ::Dynamic out = null();
HXLINE( 198)		switch((int)((this->l - 1))){
            			case (int)0: {
HXLINE( 200)				out = this->s0;
            			}
            			break;
            			case (int)1: {
HXLINE( 202)				out = this->s1;
            			}
            			break;
            			case (int)2: {
HXLINE( 204)				out = this->s2;
            			}
            			break;
            			case (int)3: {
HXLINE( 206)				out = this->s3;
            			}
            			break;
            			case (int)4: {
HXLINE( 208)				out = this->s4;
            			}
            			break;
            			case (int)5: {
HXLINE( 210)				out = this->s5;
            			}
            			break;
            			case (int)6: {
HXLINE( 212)				out = this->s6;
            			}
            			break;
            			case (int)7: {
HXLINE( 214)				out = this->s7;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 218)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,penultimate,return )

void StoreF8_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_0bbc18d2b3c3eb01_220_toArray)
HXLINE( 221)		::Array< Float > arr = ::Array_obj< Float >::__new();
HXLINE( 222)		this->count = 0;
HXLINE( 223)		{
HXLINE( 223)			 ::justPath::StoreF8 _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 223)			while((_g->count < (_g->l + 1))){
HXLINE( 223)				 ::Dynamic out = null();
HXDLIN( 223)				switch((int)(_g->count)){
            					case (int)0: {
HXLINE( 223)						out = _g->s0;
            					}
            					break;
            					case (int)1: {
HXLINE( 223)						out = _g->s1;
            					}
            					break;
            					case (int)2: {
HXLINE( 223)						out = _g->s2;
            					}
            					break;
            					case (int)3: {
HXLINE( 223)						out = _g->s3;
            					}
            					break;
            					case (int)4: {
HXLINE( 223)						out = _g->s4;
            					}
            					break;
            					case (int)5: {
HXLINE( 223)						out = _g->s5;
            					}
            					break;
            					case (int)6: {
HXLINE( 223)						out = _g->s6;
            					}
            					break;
            					case (int)7: {
HXLINE( 223)						out = _g->s7;
            					}
            					break;
            					default:{
            					}
            				}
HXLINE( 223)				_g->count++;
HXDLIN( 223)				 ::Dynamic i = out;
HXLINE( 224)				arr->push(i);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StoreF8_obj,toArray,(void))


StoreF8_obj::StoreF8_obj()
{
}

void StoreF8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoreF8);
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(s0,"s0");
	HX_MARK_MEMBER_NAME(s1,"s1");
	HX_MARK_MEMBER_NAME(s2,"s2");
	HX_MARK_MEMBER_NAME(s3,"s3");
	HX_MARK_MEMBER_NAME(s4,"s4");
	HX_MARK_MEMBER_NAME(s5,"s5");
	HX_MARK_MEMBER_NAME(s6,"s6");
	HX_MARK_MEMBER_NAME(s7,"s7");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_END_CLASS();
}

void StoreF8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(s0,"s0");
	HX_VISIT_MEMBER_NAME(s1,"s1");
	HX_VISIT_MEMBER_NAME(s2,"s2");
	HX_VISIT_MEMBER_NAME(s3,"s3");
	HX_VISIT_MEMBER_NAME(s4,"s4");
	HX_VISIT_MEMBER_NAME(s5,"s5");
	HX_VISIT_MEMBER_NAME(s6,"s6");
	HX_VISIT_MEMBER_NAME(s7,"s7");
	HX_VISIT_MEMBER_NAME(count,"count");
}

::hx::Val StoreF8_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { return ::hx::Val( l ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"s0") ) { return ::hx::Val( s0 ); }
		if (HX_FIELD_EQ(inName,"s1") ) { return ::hx::Val( s1 ); }
		if (HX_FIELD_EQ(inName,"s2") ) { return ::hx::Val( s2 ); }
		if (HX_FIELD_EQ(inName,"s3") ) { return ::hx::Val( s3 ); }
		if (HX_FIELD_EQ(inName,"s4") ) { return ::hx::Val( s4 ); }
		if (HX_FIELD_EQ(inName,"s5") ) { return ::hx::Val( s5 ); }
		if (HX_FIELD_EQ(inName,"s6") ) { return ::hx::Val( s6 ); }
		if (HX_FIELD_EQ(inName,"s7") ) { return ::hx::Val( s7 ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"shift") ) { return ::hx::Val( shift_dyn() ); }
		if (HX_FIELD_EQ(inName,"count") ) { return ::hx::Val( count ); }
		if (HX_FIELD_EQ(inName,"first") ) { return ::hx::Val( first_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unshift") ) { return ::hx::Val( unshift_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return ::hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"penultimate") ) { return ::hx::Val( penultimate_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resetIterator") ) { return ::hx::Val( resetIterator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"populatedToString") ) { return ::hx::Val( populatedToString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StoreF8_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"s0") ) { s0=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s1") ) { s1=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s2") ) { s2=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s3") ) { s3=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s4") ) { s4=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s5") ) { s5=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s6") ) { s6=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s7") ) { s7=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StoreF8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("l",6c,00,00,00));
	outFields->push(HX_("s0",5d,64,00,00));
	outFields->push(HX_("s1",5e,64,00,00));
	outFields->push(HX_("s2",5f,64,00,00));
	outFields->push(HX_("s3",60,64,00,00));
	outFields->push(HX_("s4",61,64,00,00));
	outFields->push(HX_("s5",62,64,00,00));
	outFields->push(HX_("s6",63,64,00,00));
	outFields->push(HX_("s7",64,64,00,00));
	outFields->push(HX_("count",cf,44,63,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoreF8_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(StoreF8_obj,l),HX_("l",6c,00,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s0),HX_("s0",5d,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s1),HX_("s1",5e,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s2),HX_("s2",5f,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s3),HX_("s3",60,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s4),HX_("s4",61,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s5),HX_("s5",62,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s6),HX_("s6",63,64,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StoreF8_obj,s7),HX_("s7",64,64,00,00)},
	{::hx::fsInt,(int)offsetof(StoreF8_obj,count),HX_("count",cf,44,63,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StoreF8_obj_sStaticStorageInfo = 0;
#endif

static ::String StoreF8_obj_sMemberFields[] = {
	HX_("l",6c,00,00,00),
	HX_("s0",5d,64,00,00),
	HX_("s1",5e,64,00,00),
	HX_("s2",5f,64,00,00),
	HX_("s3",60,64,00,00),
	HX_("s4",61,64,00,00),
	HX_("s5",62,64,00,00),
	HX_("s6",63,64,00,00),
	HX_("s7",64,64,00,00),
	HX_("clear",8d,71,5b,48),
	HX_("length",e6,94,07,9f),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	HX_("unshift",89,e3,b3,78),
	HX_("shift",82,ec,22,7c),
	HX_("toString",ac,d0,6e,38),
	HX_("populatedToString",06,a5,2f,e1),
	HX_("count",cf,44,63,4a),
	HX_("hasNext",6d,a5,46,18),
	HX_("resetIterator",dd,36,39,c4),
	HX_("next",f3,84,02,49),
	HX_("first",30,78,9d,00),
	HX_("last",56,0a,ad,47),
	HX_("penultimate",2a,9d,56,b0),
	HX_("toArray",1e,ba,13,f2),
	::String(null()) };

::hx::Class StoreF8_obj::__mClass;

void StoreF8_obj::__register()
{
	StoreF8_obj _hx_dummy;
	StoreF8_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath.StoreF8",b6,af,fd,2c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoreF8_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoreF8_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoreF8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoreF8_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace justPath