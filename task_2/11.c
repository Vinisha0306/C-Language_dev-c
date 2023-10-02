#include<stdio.h>

main()
{
	int j,k,i;
	
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}
