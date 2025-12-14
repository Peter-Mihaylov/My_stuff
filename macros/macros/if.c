#include <stdio.h>

#define BUFFER_SIZE 1024
#define WINDOWS 0

int main(void)
{
    #if BUFFER_SIZE > 512
        printf("We are under OS with buffer size > 512\n");
    #endif

    #if BUFFER_SIZE > 1024
    printf("We are under OS with buffer size > 1024\n");
    #endif

    #ifdef WINDOWS
    printf("We are under WINDOWS\n");
    #endif

    #if WINDOWS
    printf("This macro is flase\n");
    #endif

    #ifdef LINUX
    printf("We are under LINUX\n");
    #endif
    
    return 0;
}