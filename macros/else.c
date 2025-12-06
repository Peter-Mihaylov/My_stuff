#include <stdio.h>

int main(void)
{

    #ifdef WINDOWS
    printf("We are under WINDOWS\n");
    #else
    printf("We are not under WINDOWS\n");
    #endif

    #if defined WINDOWS
    printf("We are still under WINDOWS\n");
    #else
    printf("We are still not under WINDOWS\n");
    #endif

    return 0;
}