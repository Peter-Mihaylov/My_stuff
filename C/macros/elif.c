#include <stdio.h>


int main(void)
{

    #ifdef _WIN32
    printf("We are under windows \n");
    #endif

    #ifdef __linux__
    printf("We are under Linux \n");
    #endif

    #ifdef __APPLE__
    printf("We are under MacOS \n");
    #endif

    #ifdef _WIN32
    printf("We are still under windows \n");
    #elif __linux__
    printf("We are still under Linux \n");
    #elif __APPLE__
    printf("We are still under MacOS \n");
    #else
    printf("We are under an unknown OS \n");
    #endif

    return 0;
}