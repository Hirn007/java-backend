#include<stdio.h>
fun1()  //defination
{
	int n,i,prime=0;
	printf("enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==00)
		{
			prime++;
		}
	}
	if(prime==2)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
 } 
 main()
 {
 	fun1();
 }
