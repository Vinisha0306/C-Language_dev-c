#include<stdio.h>

main()
{
	int n,last,multi=1,sum=0,real;
	
	printf("Enter any number:");
	scanf("%d",&n);
	real=n;
	while(n!=0)
	{
		last=n%10;
		multi=last*last*last;
		sum+=multi;
		n/=10;
	}
	if(sum==real)
	{
		printf("This number is Aramstrong number");
	}
	else
	{
		printf("This number is not Aramstrong number");
	}
}
