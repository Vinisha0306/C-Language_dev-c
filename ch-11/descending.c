#include<stdio.h>

main()
{
    int n,temp;

    printf("Enter array size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\n\narray Dessending.......\n");

     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}