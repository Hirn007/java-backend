#include<stdio.h>
main()
{
	int a,b;    //data members
	
	printf("enter number 1: ");
	scanf("%d",&a);
	printf("enter number 2: ");
	scanf("%d",&b);
	
	printf("a: %d",a);
	printf("b: %d",b);
	
	printf("\n addition : %d",a+b);
	printf("\n subtraction : %d",a-b);
	printf("\n multiplication : %d",a*b);
	printf("\n division : %d",a/b);
}
