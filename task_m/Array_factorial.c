#include<stdio.h>

int main()
{
    int n,i,j,multi;
    
    printf("Enter array size:");
    scanf("%d",&n);
    
    int a[n];
    printf("\n\n.......Array A......\n");
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n......Array A 1_n factorial......\n");
    for(i=0;i<n;i++)
    {
        multi=1;
        
        for(j=1;j<=a[i];j++)
        {
            multi*=j;
        }
        
        printf("a[%d]:%d\n",i,multi);
    }
    return 0;
}