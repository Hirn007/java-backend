#include<stdio.h>
main()
{
	int i,n;
	int prime;
	printf("enter prime : ");
	scanf("%d",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("enter number is prime number : %d",n);
	}
	else
	{
		printf("enter number is not prime number : %d",n);
	}
	
}
