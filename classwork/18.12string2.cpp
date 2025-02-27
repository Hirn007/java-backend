#include<stdio.h>
#include<string.h>
main()
{
	while(1)              //infinite loop
	{
		printf("\npress 1 for string copy");
		printf("\npress 2 for string length");
		printf("\npress 3 for string concat");
		
		int ch;
		
		printf("\nenter your choie : ");
		scanf("%d"&ch);
		fflush(stdin);
		
		if(ch==1)
		{
			char a[10],b[10];
			int i;
			printf("enter number 1 : ");
			gets(a);
			
			for(i=0;a[i]!='\0';i++)
			{
				a[i]=a[i];
				
			}
		}
	}
}
