#pragma once

#ifdef NNFRAME_PLATFORM_WINDOWS
	#ifdef NNFRAME_BUILD_DLL
		#define NNFRAME_API __declspec(dllexport)
	#else
		#define NNFRAME_API __declspec(dllimport)
	#endif
#else
	#error NNFrame only support Windows!
#endif