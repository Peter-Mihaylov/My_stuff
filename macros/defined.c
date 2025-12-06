#include <stdio.h>

#define LINUX

#define BUFFER_SIZE 512

int main(void)
{
    #ifdef LINUX
    printf("We are under LINUX\n");
    #endif

    #if defined LINUX
    printf("We are still under LINUX\n");
    #endif

    #if ! defined WINDOWS
    printf("We are not under WINDOWS\n");
    #endif

    #if defined BUFFER_SIZE && BUFFER_SIZE >= 256
    printf("We are under BUFFER SIZE <= 256\n");
    #endif
    return 0;
} 