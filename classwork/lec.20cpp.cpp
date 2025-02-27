//constructor stating ma thay chhe.
//distructor and ma thay chhe.

#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"this is constructor"<<endl;
		}
		pat1()
		{
			int i,j;
			for(i=0;i<=5;i++)
			{
				for(j=0;j<5;j++)
				{
					printf("*");
				}
				printf("\n");
			}
		}
		~A()//distructor
		{
			cout<<"this is distructor"<<endl;
		}
};

main()
{
	A obj;
	obj.pat1();
}
