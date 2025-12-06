#include <stdio.h>

#define WINDOWS
#define LINUX 1

#ifdef WINDOWS
#include <conio.h>
#endif

int main(void)
{
    #ifdef WINDOWS
    char c = getch();
    #endif

    #ifdef WINDOWS
    int c = getc(stdin);
    #endif

}