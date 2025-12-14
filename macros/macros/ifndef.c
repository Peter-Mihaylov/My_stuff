#include <stdio.h>

#define LINUX 1

int main(void)
{
    #ifndef WINDOWS
    printf("We are not under WINDOWS\n");
    #endif

    #ifndef LINUX
    printf("LINUX is not defined.\n");
    #else
    printf("LINUX is defined.\n");
    #endif

    return 0;
}