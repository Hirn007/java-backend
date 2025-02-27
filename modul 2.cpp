#include<stdio.h>
main()
{
	int i,n;
	int prime=0;
	
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("enter number is prime numbers : %d",n);
	}
	else
	{
		printf("enter number is not prime numbers : %d",n);
	}
}
