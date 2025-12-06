#include <stdio.h>

#define SIZE 5
#define PRINT printf("%d ", arr[i]);
#define PRINT_ARRAY \
    for(int i = 0; i < SIZE; i++) \
    { \
        PRINT \
    } \
    printf("\n");
int main(void)
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    PRINT_ARRAY

    return 0;
}