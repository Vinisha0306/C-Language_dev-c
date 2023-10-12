#include<stdio.h>

int main()
{
    int n;

    printf("Enter size of array:");
    scanf("%d",&n);

    int a[n],b[n],c[n];
  
    printf("\n\nArray A:\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter array a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\n\nArray b:\n");

    for(int i=0;i<n;i++)
    {
        printf("Enter array b[%d]:",i);
        scanf("%d",&b[i]);
    }

    for(int i=0;i<n;i++)
    {
        c[i]=a[i]*b[i];
    }

    printf("\n\nArray A and Array B multi:\n");

    for(int i=0;i<n;i++)
    {
        printf("c[%d]=%d\n",i,c[i]);
    }

    return 0;
}