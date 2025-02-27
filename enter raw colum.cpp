#include<stdio.h>
hiren(int n)
{
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			
			printf(" *");
		}
		printf("\n");
	}
}

main()
{
	int n;
	printf("enter number of rows : ");
	scanf("%d",&n);
	
	hiren(n);
}
