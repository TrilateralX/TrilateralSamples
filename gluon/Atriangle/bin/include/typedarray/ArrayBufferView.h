// Generated by Haxe 4.3.0-rc.1+88ebbd0
#ifndef INCLUDED_typedarray_ArrayBufferView
#define INCLUDED_typedarray_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(typedarray,ArrayBufferView)

namespace typedarray{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferView_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		unsigned char * (::hx::Object :: *_hx_toCPointer)(); 
		static inline unsigned char * toCPointer( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::typedarray::ArrayBufferView_obj *>(_hx_.mPtr->_hx_getInterface(0x159199cf)))->_hx_toCPointer)();
		}
};

} // end namespace typedarray

#endif /* INCLUDED_typedarray_ArrayBufferView */ 
