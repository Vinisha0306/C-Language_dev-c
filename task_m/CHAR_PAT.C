#include<stdio.h>
main()
{
	int i,j,k=15;

	for(i=15;i<=30;i++)
	{
		for(j=i;j>=15;j--)
		{
			printf("%c ",k);
			k++;
		}

		printf("\n");
	}

}
