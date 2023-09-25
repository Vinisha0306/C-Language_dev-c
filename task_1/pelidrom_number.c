#include<stdio.h>

main()
{
	int n,rem,rev=0,real;
	
	printf("Enter any number:");
	scanf("%d",&n);
	real=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(real==rev)
	{
		printf("This number is Pelidrom number");
	}
	else
	{
		printf("This number is not Pelidrom number");
	}
	
}
