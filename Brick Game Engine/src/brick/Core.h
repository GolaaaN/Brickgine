#pragma once


#ifdef BRICK_PLATFORM_WINDOWS
	#ifdef BRICK_BUILD_DLL
		#define BRICK_API __declspec(dllexport)
	#else
		#define BRICK_API __declspec(dllimport)
	#endif	

#else 
	#error Brick only support windows
#endif