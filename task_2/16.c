#include<stdio.h>

main()
{
	int j,k,i;
	
	for(i=65;i<=69;i++)
	{
		for(k=65;k<i;k++)
		{
			printf("  ");
		}
		
		for(j=i;j<=69;j++)
		{
			printf("%c ",j);
		}
		
		printf("\n");
	}
}
