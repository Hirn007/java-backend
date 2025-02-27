#include<stdio.h>
fun1(int n)
{
	int sum=0,i;
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
	
}
main()
{
	printf("%d",fun1(10));
}
