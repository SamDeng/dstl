
#ifndef ESTL_CONFIG_H
#define ESTL_CONFIG_H



#ifdef _DSTL_DLL
#define DSTL_API __declspec(dllexport)

#else
#define DSTL_API __declspec(dllimport)
#endif



#endif