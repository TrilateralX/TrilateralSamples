#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(LINC_GLFW) && !defined(NO_LINC_GLFW)
#define LINC_GLFW 
#endif

#if !defined(GLFW_INCLUDE_NONE) && !defined(NO_GLFW_INCLUDE_NONE)
#define GLFW_INCLUDE_NONE 
#endif

#if !defined(GLEW_STATIC) && !defined(NO_GLEW_STATIC)
#define GLEW_STATIC 
#endif

#if !defined(HX_MACOS) && !defined(NO_HX_MACOS)
#define HX_MACOS 
#endif

#if !defined(HXCPP_DEBUG) && !defined(NO_HXCPP_DEBUG)
#define HXCPP_DEBUG 
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HX_SMART_STRINGS) && !defined(NO_HX_SMART_STRINGS)
#define HX_SMART_STRINGS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 400
#endif

#include <hxcpp.h>

#endif
