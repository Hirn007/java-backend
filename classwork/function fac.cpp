#include<stdio.h>

fun1()
{
	int n,fac=0,i;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	return fac;
	
}
main()
{
	//int result = fun1();
	//printf("%d",result);
	
	printf("%d",fun1());
}

