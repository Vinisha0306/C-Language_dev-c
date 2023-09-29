#include<stdio.h>

main()
{
    int n,i,count=0;
    
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    (count==2)
        ? printf("This number is Prime number")
        : printf("This number is not Prime number");
}