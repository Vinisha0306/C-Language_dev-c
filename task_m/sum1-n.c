#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		sum+=i;
	}
	
	printf("sum:%d",sum);
	
}
