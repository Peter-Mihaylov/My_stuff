#include <stdio.h>

#define SIZE 5
#define PRINT_ARRAY\
    for(int i = 0; i < SIZE; i++) \
    { \
        printf("%d ", arr[i]); \
    }


int main(void)
{

    int arr[SIZE] = {1, 2, 3, 4, 5};
    PRINT_ARRAY;
    return 0;
}