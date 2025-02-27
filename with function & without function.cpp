#include<stdio.h>

fun1()
{
	int n,sum=0,i;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
	
}
main()
{
	//int result = fun1();
	//printf("%d",result);
	
	printf("%d",fun1());
}
