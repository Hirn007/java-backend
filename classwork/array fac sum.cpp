#include<stdio.h>
main()
{
int a[5];
int i,fac=1;

for(i=0;i<5;i++)
{
	printf("enter elemets : ");
	scanf("%d",&a[i]);
	}	
	for(i=0;i<5;i++)
	{
		fac=fac*a[i];
	}
	printf("fac is :%d",fac);
}
