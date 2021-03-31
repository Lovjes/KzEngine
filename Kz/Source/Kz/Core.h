#pragma once

#ifdef KZ_PLATFORM_WINDOWS
	#ifdef KZ_BUILD_DLL
		#define KZ_API __declspec(dllexport)
	#else
		#define KZ_API __declspec(dllimport)
	#endif
#else
	#error Kz Only support Windows!
#endif