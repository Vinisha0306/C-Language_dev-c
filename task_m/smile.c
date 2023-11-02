#include<stdio.h>

main()
{
    int n=9,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)
            {
                printf("\U0001F600");
            }
        
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
        
}