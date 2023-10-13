#include<stdio.h>

main()
{
    int r,c,sum=0;

    printf("Enter array row size:");
    scanf("%d",&r);
    printf("Enter array column size:");
    scanf("%d",&c);

    int a[r][c];

    printf("\n\nEnter array a......\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nBoundry Elements......\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==r-1 || j==0 || j==c-1)
            {
                printf("%d ",a[i][j]);
                sum+=a[i][j];
            }
            else
            {
                printf("  "); 
            }
        }
        printf("\n");
    }

    printf("\nsum:%d",sum);
    
    return 0;
}
