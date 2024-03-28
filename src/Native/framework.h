#pragma once

#if __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

#ifdef _WIN32

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#include <Windows.h>

#define DLL_EXPORT EXTERN_C __declspec(dllexport)

#else

#ifndef STDMETHODCALLTYPE
#define STDMETHODCALLTYPE
#endif

#if __GNUC__ >= 4
#define DLL_EXPORT EXTERN_C __attribute__((visibility("default")))
#else
#define DLL_EXPORT EXTERN_C
#endif

#endif
