#include<stdio.h>

main()
{
    int n=9,i,j;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%2==0)
            {
                printf("\U0001F608");
            }
        
            else
            {
                printf("\U0001F609");
            }
        }
 
        printf("\n");
    }
        
}