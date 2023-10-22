#pragma once

// The __declspec(dllexport) is a Windows-specific attribute used to export 
// the class from a dynamic-link library (DLL)

// macros (Definitions / defines)

#ifdef FOURAGE_PLATFORM_WINDOWS
	#ifdef FOURAGE_BUILD_DLL
		// this export should be active when we build the Fourage library
		#define FOURAGE_API __declspec(dllexport)
	#else 
		// for the application this import should be active
		#define FOURAGE_API __declspec(dllimport)
	#endif
#else
	#error Fourage only supports Windows
#endif