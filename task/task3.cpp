#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("enter number 1 : ",n1);
	scanf("%d",&n1);
	printf("enter number 2 : ",n2);
	scanf("%d",&n2);
	printf("enter number 3 : ",n3);
	scanf("%d",&n3);
	if(n1>n2)
	{
		if(n1>n3)
		{
			printf("%d is greates",n1);
		}
		else
		{
			printf("%d is greates",n3);
		}
	}
	else
	{
		if(n2>n3)
		{
			printf("%d is greates",n2);
		}
		else
		{
			printf("%d is greates",n3);
		}
	}
}
