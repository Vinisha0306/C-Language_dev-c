#include<stdio.h>

main()
{
	int v,sum=0,multi=1,last;
	
	printf("Enter any number:");
	scanf("%d",&v);
	
	while(v!=0)
	{
		last=v%10;
		multi*=last;
		sum+=last;
		v/=10;
	}
	if(sum==multi)
	{
		printf("This number is Magic number");
	}
	else
	{
		printf("This number is not magic number");
	}
}
