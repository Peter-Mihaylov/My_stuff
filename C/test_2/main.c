#include <stdio.h>
#include <string.h>
#include "mystrings.h"
#define MAX_LEN 255

int main() 
{
    char osname[MAX_LEN];
    #ifdef _WIN32
        strcpy(osname, "Windows");
    #elif defined __linux__
        strcpy(osname, "Linux");
    #elif defined __APPLE__
        strcpy(osname, "Mac");
    #else
        strcpy(osname, "Other");
    #endif
    PRINT(osname);
    printf("Length of OS name: %d\n", stringlen(osname));
    return 0;
}