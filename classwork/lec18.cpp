#include<iostream>
using namespace std;

class A{
	public:
		int ch;
    fuction()
    {
    	cout<<"precss 1 pattern!!"<<endl;
    	cout<<"precss 2 array!!"<<endl;
    	cout<<"precss 3 prime!!"<<endl;
    	cin>>ch;
	}		
};
class B{
	public:
		pattern()
		int i,k,j;
		for(i=1;i<=5;i++)
		{
			for(k=1;k<=5,k++)
			{
				cout<<" "<<endl;
			}
			for(j=1;j<=5;j++)
			{
				cout<<" *"<<endl;
			}
			cout <<endl;
		}
		
};
class C{
	public:
		C(int a[])
		{
			cout<<"enter elements : ";
			for(int i=0;i<5;i++)
			{
				cin>>a[i];
			}
			cout<<"\nelements are : ";
			for(int i=0;i<5;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
			
		}
};
class D{
	public:
		prime()
		int n,i,prime;
		for(i=0;i<1;i++)
		{
			if(n%i==0)
			{
				prime++;
			}
			if(prime==2)
			{
				printf("%d is prime",n);
			}
			else
			{
				printf("%d not prime",n);
			}
		}
		
};

main()
{
	class A obj;
	obj1.fuction();
	class B obj1;
	obj2.pattern1();
	class C obj2;
	obj3.array2();
	class D obj3;
	obj4.prime3();
}
