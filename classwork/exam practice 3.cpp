#include<stdio.h>
main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	
	if(n==0)
	{
		printf("number is zero");
	}
	else if(n%2==0)
	{
		printf("number is even");
	}
	else
	{
		printf("number is odd");
	}
}
