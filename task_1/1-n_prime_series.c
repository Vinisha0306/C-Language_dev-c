#include<stdio.h>

main()
{
    int count,e,i,j;
   
    printf("Enter end number:");
    scanf("%d",&e);
    printf("\nprime number:\n");
    
    for(i=1;i<=e;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d\n",i);
        }
    }
        
}