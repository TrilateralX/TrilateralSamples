// Generated by Haxe 4.2.0-rc.1+7dc565e63
#include <hxcpp.h>

#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif
#ifndef INCLUDED_kitGL_gluon_Animate
#include <kitGL/gluon/Animate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_616671e4c5ba62f5_13_new,"kitGL.gluon.Animate","new",0xf1a28c61,"kitGL.gluon.Animate.new","kitGL/gluon/Animate.hx",13,0xcef31771)
HX_DEFINE_STACK_FRAME(_hx_pos_616671e4c5ba62f5_14_new,"kitGL.gluon.Animate","new",0xf1a28c61,"kitGL.gluon.Animate.new","kitGL/gluon/Animate.hx",14,0xcef31771)
HX_DEFINE_STACK_FRAME(_hx_pos_616671e4c5ba62f5_15_new,"kitGL.gluon.Animate","new",0xf1a28c61,"kitGL.gluon.Animate.new","kitGL/gluon/Animate.hx",15,0xcef31771)
HX_DEFINE_STACK_FRAME(_hx_pos_616671e4c5ba62f5_5_new,"kitGL.gluon.Animate","new",0xf1a28c61,"kitGL.gluon.Animate.new","kitGL/gluon/Animate.hx",5,0xcef31771)
HX_LOCAL_STACK_FRAME(_hx_pos_616671e4c5ba62f5_17_start,"kitGL.gluon.Animate","start",0x7381f2a3,"kitGL.gluon.Animate.start","kitGL/gluon/Animate.hx",17,0xcef31771)
HX_LOCAL_STACK_FRAME(_hx_pos_616671e4c5ba62f5_21_mainLoop,"kitGL.gluon.Animate","mainLoop",0xb25d3b9c,"kitGL.gluon.Animate.mainLoop","kitGL/gluon/Animate.hx",21,0xcef31771)
HX_LOCAL_STACK_FRAME(_hx_pos_616671e4c5ba62f5_28_stop,"kitGL.gluon.Animate","stop",0x7ff1b4e1,"kitGL.gluon.Animate.stop","kitGL/gluon/Animate.hx",28,0xcef31771)
namespace kitGL{
namespace gluon{

void Animate_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_13_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_14_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_15_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_5_new)
HXLINE(   9)		this->lastT = ((Float)0);
HXLINE(  13)		this->onEnterFrame =  ::Dynamic(new _hx_Closure_0());
HXLINE(  14)		this->onStop =  ::Dynamic(new _hx_Closure_1());
HXLINE(  15)		this->onStart =  ::Dynamic(new _hx_Closure_2());
            	}

Dynamic Animate_obj::__CreateEmpty() { return new Animate_obj; }

void *Animate_obj::_hx_vtable = 0;

Dynamic Animate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Animate_obj > _hx_result = new Animate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Animate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a7fc8e9;
}

void Animate_obj::start(){
            	HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_17_start)
HXLINE(  18)		this->mainLoopHandle = ::haxe::MainLoop_obj::add(this->mainLoop_dyn(),null());
HXLINE(  19)		this->onStart();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animate_obj,start,(void))

void Animate_obj::mainLoop(){
            	HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_21_mainLoop)
HXLINE(  22)		Float t_s =  ::__time_stamp();
HXLINE(  23)		if (((t_s - this->lastT) > ((Float)0.6))) {
HXLINE(  24)			this->onEnterFrame();
HXLINE(  25)			this->lastT = t_s;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animate_obj,mainLoop,(void))

void Animate_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_616671e4c5ba62f5_28_stop)
HXLINE(  29)		this->mainLoopHandle->stop();
HXLINE(  30)		this->onStop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animate_obj,stop,(void))


::hx::ObjectPtr< Animate_obj > Animate_obj::__new() {
	::hx::ObjectPtr< Animate_obj > __this = new Animate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Animate_obj > Animate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Animate_obj *__this = (Animate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Animate_obj), true, "kitGL.gluon.Animate"));
	*(void **)__this = Animate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Animate_obj::Animate_obj()
{
}

void Animate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animate);
	HX_MARK_MEMBER_NAME(onEnterFrame,"onEnterFrame");
	HX_MARK_MEMBER_NAME(onStop,"onStop");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(lastT,"lastT");
	HX_MARK_MEMBER_NAME(mainLoopHandle,"mainLoopHandle");
	HX_MARK_END_CLASS();
}

void Animate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onEnterFrame,"onEnterFrame");
	HX_VISIT_MEMBER_NAME(onStop,"onStop");
	HX_VISIT_MEMBER_NAME(onStart,"onStart");
	HX_VISIT_MEMBER_NAME(lastT,"lastT");
	HX_VISIT_MEMBER_NAME(mainLoopHandle,"mainLoopHandle");
}

::hx::Val Animate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lastT") ) { return ::hx::Val( lastT ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onStop") ) { return ::hx::Val( onStop ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return ::hx::Val( onStart ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return ::hx::Val( mainLoop_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return ::hx::Val( onEnterFrame ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainLoopHandle") ) { return ::hx::Val( mainLoopHandle ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Animate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lastT") ) { lastT=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onStop") ) { onStop=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { onEnterFrame=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mainLoopHandle") ) { mainLoopHandle=inValue.Cast<  ::haxe::MainEvent >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastT",3e,01,bc,6f));
	outFields->push(HX_("mainLoopHandle",c5,9e,6f,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Animate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animate_obj,onEnterFrame),HX_("onEnterFrame",f4,a5,93,da)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animate_obj,onStop),HX_("onStop",c1,f8,e5,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Animate_obj,onStart),HX_("onStart",c3,12,49,1a)},
	{::hx::fsFloat,(int)offsetof(Animate_obj,lastT),HX_("lastT",3e,01,bc,6f)},
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(int)offsetof(Animate_obj,mainLoopHandle),HX_("mainLoopHandle",c5,9e,6f,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Animate_obj_sStaticStorageInfo = 0;
#endif

static ::String Animate_obj_sMemberFields[] = {
	HX_("onEnterFrame",f4,a5,93,da),
	HX_("onStop",c1,f8,e5,ee),
	HX_("onStart",c3,12,49,1a),
	HX_("lastT",3e,01,bc,6f),
	HX_("mainLoopHandle",c5,9e,6f,20),
	HX_("start",62,74,0b,84),
	HX_("mainLoop",3d,1b,3a,a0),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

::hx::Class Animate_obj::__mClass;

void Animate_obj::__register()
{
	Animate_obj _hx_dummy;
	Animate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("kitGL.gluon.Animate",ef,c7,b2,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Animate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Animate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kitGL
} // end namespace gluon
