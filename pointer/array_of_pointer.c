#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("array:%d\n", a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("ptr:%d\n", *ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\narray address:%u", &a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("ptr address:%u\n", ptr[i]);
    }
    return 0;
}