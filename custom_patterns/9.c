#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || ((i==1 || i==7) && j==2) || ((i==2 || i==6) && j==3) || ((i==3 || i==5) && j==4)) 
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
