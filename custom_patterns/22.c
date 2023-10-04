#include<stdio.h>

main()
{
    int i,j;
    
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(((i==1 || i==8) && (j<=4 && j>=2)) || ((j==1 || j==5) && (i<=7 && i>=2)) || (i==7 && j==3) || (i==9 && j==5))
            {
                printf("* ");
            }
            
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}