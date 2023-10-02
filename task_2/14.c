#include<stdio.h>

main()
{
	int j,k,i;
	
	for(i=65;i<=69;i++)
	{
		for(k=69;k>i;k--)
		{
			printf("  ");
		}
		
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}
		
		printf("\n");
	}
}
