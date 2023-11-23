#include <stdio.h>

int main()
{
    char a[7] = "vinisha";

    char *ptr[7];

    for (int i = 0; i < 7; i++)
    {
        ptr[i] = &a[i];
        printf("%c\n", *ptr[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("string:%c\n", a[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("ptr:%c\n", *ptr[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        printf("\nstring address:%u", &a[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 7; i++)
    {
        printf("ptr address:%u\n", ptr[i]);
    }
    return 0;
}