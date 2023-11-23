#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *ptr;
    ptr = &a[0];

    printf("pointer\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%u\n", (ptr + i));
    }
}