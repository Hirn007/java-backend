#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("enter number 1: ");
	scanf("%d",&n1);
	printf("enter number 2: ");
	scanf("%d",&n2);
	printf("enter number 3: ");
	scanf("%d",&n3);
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is gratest",n1);
		}
		else
		{
			printf("%d is gratest",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is gratest",n2);
		}
		else
		{
			printf("%d is gratest",n3);
		}
	}
}
