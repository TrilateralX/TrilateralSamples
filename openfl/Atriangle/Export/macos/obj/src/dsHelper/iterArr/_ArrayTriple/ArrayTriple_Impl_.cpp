// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_dsHelper_iterArr__ArrayTriple_ArrayTriple_Impl_
#include <dsHelper/iterArr/_ArrayTriple/ArrayTriple_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_3__new,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","_new",0x7053c4b8,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_._new","dsHelper/iterArr/ArrayTriple.hx",3,0xc7e8e93f)
HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_5_get_length,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","get_length",0xedbc4f46,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_.get_length","dsHelper/iterArr/ArrayTriple.hx",5,0xc7e8e93f)
HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_7_access,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","access",0x764708bb,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_.access","dsHelper/iterArr/ArrayTriple.hx",7,0xc7e8e93f)
HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_10_getObj,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","getObj",0x0e643c18,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_.getObj","dsHelper/iterArr/ArrayTriple.hx",10,0xc7e8e93f)
HX_LOCAL_STACK_FRAME(_hx_pos_6b99b46b1570e37f_15_reverse,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_","reverse",0x88207a2b,"dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_.reverse","dsHelper/iterArr/ArrayTriple.hx",15,0xc7e8e93f)
namespace dsHelper{
namespace iterArr{
namespace _ArrayTriple{

void ArrayTriple_Impl__obj::__construct() { }

Dynamic ArrayTriple_Impl__obj::__CreateEmpty() { return new ArrayTriple_Impl__obj; }

void *ArrayTriple_Impl__obj::_hx_vtable = 0;

Dynamic ArrayTriple_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayTriple_Impl__obj > _hx_result = new ArrayTriple_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayTriple_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2be47f97;
}

::cpp::VirtualArray ArrayTriple_Impl__obj::_new(::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_3__new)
HXDLIN(   3)		::cpp::VirtualArray this1 = arr;
HXDLIN(   3)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTriple_Impl__obj,_new,return )

int ArrayTriple_Impl__obj::get_length(::cpp::VirtualArray this1){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_5_get_length)
HXDLIN(   5)		return ::Std_obj::_hx_int((( (Float)(this1->get_length()) ) / ( (Float)(3) )));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTriple_Impl__obj,get_length,return )

 ::Dynamic ArrayTriple_Impl__obj::access(::cpp::VirtualArray this1,int key){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_7_access)
HXDLIN(   7)		int i = ::Std_obj::_hx_int(( (Float)((key * 3)) ));
HXDLIN(   7)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("a",61,00,00,00),this1->__get(i))
            			->setFixed(1,HX_("b",62,00,00,00),this1->__get((i + 1)))
            			->setFixed(2,HX_("c",63,00,00,00),this1->__get((i + 2))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTriple_Impl__obj,access,return )

 ::Dynamic ArrayTriple_Impl__obj::getObj(::cpp::VirtualArray this1,int key){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_10_getObj)
HXLINE(  11)		int i = ::Std_obj::_hx_int(( (Float)((key * 3)) ));
HXLINE(  12)		return  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("a",61,00,00,00),this1->__get(i))
            			->setFixed(1,HX_("b",62,00,00,00),this1->__get((i + 1)))
            			->setFixed(2,HX_("c",63,00,00,00),this1->__get((i + 2))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayTriple_Impl__obj,getObj,return )

::cpp::VirtualArray ArrayTriple_Impl__obj::reverse(::cpp::VirtualArray this1){
            	HX_STACKFRAME(&_hx_pos_6b99b46b1570e37f_15_reverse)
HXLINE(  16)		::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  17)		{
HXLINE(  17)			int _g = 0;
HXDLIN(  17)			::cpp::VirtualArray _g1 = ::dsHelper::iterArr::_ArrayTriple::ArrayTriple_Impl__obj::_new(this1);
HXDLIN(  17)			while((_g < ::Std_obj::_hx_int((( (Float)(_g1->get_length()) ) / ( (Float)(3) ))))){
HXLINE(  17)				int i = ::Std_obj::_hx_int(( (Float)((_g * 3)) ));
HXDLIN(  17)				 ::Dynamic i_a = _g1->__get(i);
HXDLIN(  17)				 ::Dynamic i_b = _g1->__get((i + 1));
HXDLIN(  17)				 ::Dynamic i_c = _g1->__get((i + 2));
HXDLIN(  17)				_g = (_g + 1);
HXLINE(  18)				arr->unshift(i_c);
HXLINE(  19)				arr->unshift(i_b);
HXLINE(  20)				arr->unshift(i_a);
            			}
            		}
HXLINE(  22)		this1 = arr;
HXLINE(  23)		return arr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayTriple_Impl__obj,reverse,return )


ArrayTriple_Impl__obj::ArrayTriple_Impl__obj()
{
}

bool ArrayTriple_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"access") ) { outValue = access_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getObj") ) { outValue = getObj_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayTriple_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayTriple_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayTriple_Impl__obj::__mClass;

static ::String ArrayTriple_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_length",af,04,8f,8f),
	HX_("access",a4,95,06,0b),
	HX_("getObj",01,c9,23,a3),
	HX_("reverse",22,39,fc,1a),
	::String(null())
};

void ArrayTriple_Impl__obj::__register()
{
	ArrayTriple_Impl__obj _hx_dummy;
	ArrayTriple_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("dsHelper.iterArr._ArrayTriple.ArrayTriple_Impl_",77,f0,6b,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayTriple_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayTriple_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayTriple_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayTriple_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayTriple_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace dsHelper
} // end namespace iterArr
} // end namespace _ArrayTriple
