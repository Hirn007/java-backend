#include<stdio.h>
fun1(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}
		for(" *");
	}
	printf("\n");
}
main()
{
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	fun1(n);
}
