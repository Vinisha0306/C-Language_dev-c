#include<stdio.h>

main()
{
	double n,sum=0;
	
	do
	{
		printf("Enter any number:");
		scanf("%lf",&n);
		sum+=n;
	}while(n!=0.0);
	
	printf("sum:%.2lf",sum);
	
}
