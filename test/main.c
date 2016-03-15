#include <stdio.h>
#include <stdlib.h>
#include "../lib.h"


int main(void) {
    #if defined(__IS_CYGWIN__)
        puts("cygwin");
    #endif
    #if defined(__IS_SOLARIS__)
        puts("solaris");
    #endif
    #if defined(__IS_AIX__)
        puts("aix");
    #endif
    #if defined(__IS_BSD__)
        puts("BSD");
    #endif
    #if defined(__IS_HPUX__)
        puts("hpux");
    #endif
    #if defined(__IS_LINUX__)
        puts("linux");
    #endif
    #if defined(__IS_WINDOWS_32__)
        puts("windows 32 bit");
    #endif
    #if defined(__IS_WINDOWS_64__)
        puts("windows 64 bit");
    #endif
    #if defined(__IS_WINDOWS__)
        puts("windows");
    #endif
    #if defined(__IS_IOS__)
        puts("ios");
    #endif
    #if defined(__IS_IOS_SIMULATOR__)
        puts("ios simulator");
    #endif
    #if defined(__IS_OSX__)
        puts("osx");
    #endif
    #if defined(__IS_APPLE__)
        puts("apple");
    #endif
    #if defined(__IS_UNIX__)
        puts("unix");
    #endif
    #if defined(__IS_POSIX__)
        puts("posix");
    #endif
    return 0;
}
