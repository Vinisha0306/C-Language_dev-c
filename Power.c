#include<stdio.h>

main()
{
    int i,j,k,multi=1;
    
    printf("Enter any number:");
    scanf("%d",&k);
    printf("Enter power:");
    scanf("%d",&j);
    
    for(i=1;i<=j;i++)
    {
        multi*=k;
    }
    
    printf("Power:%d",multi);
}