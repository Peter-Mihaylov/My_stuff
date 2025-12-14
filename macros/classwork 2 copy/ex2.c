#include <stdio.h>

#define BIGGER (a > b ? a : b)

int main(void)
{
    int a = 10;
    int b = 20;

    printf("The bigger number between %d and %d is %d\n", a, b, BIGGER);

    return 0;
}