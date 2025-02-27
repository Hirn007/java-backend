#include<stdio.h>
main()
{
	int a[2][3],b[2][3];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0,j<3,j++)
		{
			printf("eneter elements A : ");
			scanf("%d",a[i][j]);
		}
	}
	for(i=0;i<2,i++)
	{
		for(j=0;j<3;j++)
		{
		printf("eneter elements b : ");
		scanf("%d",b[i][j]);	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
