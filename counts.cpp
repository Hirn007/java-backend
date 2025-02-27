#include<stdio.h>
main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter elements : ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nyour array elements are :%d",a[i]);
	}
}
