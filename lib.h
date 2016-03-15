#ifndef __OS_H__
#define __OS_H__


#if defined(_WIN32) || defined(__WIN32__) || defined(_WIN64) || defined(__WIN64__) ||  defined(__WINDOWS__)

    #if defined(_WIN32) || defined(__WIN32__)
        #define __IS_WINDOWS_32__
    #elif defined(_WIN64) || defined(__WIN64__)
        #define __IS_WINDOW_64__
    #endif

    #define __IS_WINDOWS__
#endif


#if defined(__CYGWIN__) && !defined(_WIN32)
    __IS_CYGWIN__
#endif


#if defined(__sun) && defined(__SVR4)
    #define __IS_SOLARIS__
#endif


#if defined(_AIX)
    #define __IS_AIX__
#endif


#if defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
    #include <sys/param.h>

    #if defined(BSD)
        #define __IS_BSD__
    #endif
#endif


#if defined(__hpux)
	#define __IS_HPUX__
#endif


#if defined(__linux__)
	#define __IS_LINUX__
#endif


#if defined(__APPLE__) && defined(__MACH__)
    #include <TargetConditionals.h>

    #if TARGET_IPHONE_SIMULATOR == 1
        #define __IS_IOS__
        #define __IS_IOS_SIMULATOR__
    #elif TARGET_OS_IPHONE == 1
        #define __IS_IOS__
    #elif TARGET_OS_MAC == 1
        #define __IS_OSX__
    #endif

    #define __IS_APPLE__
#endif


#if !defined(__IS_WINDOWS__) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
    #define __IS_UNIX__
#endif


#if !defined(__IS_WINDOWS__) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__)))
    #include <unistd.h>

    #if defined(_POSIX_VERSION)
    	#define __IS_POSIX__
    #endif
#endif


#endif
