// method over loding 

#include<iostream>
using namespace std;

class A{
	public:
	myfun(int a)
	{
		cout<<"hello"<<endl;
	}
	myfun(int a,int b)
	{
		cout<<"welcome"<<endl;
	}
	myfun(string a)
	{
		cout<<"hello1"<<endl;
	}
	myfun()
	{
		cout<<"hello2"<<endl;
	}
};


main()
{
	A obj;
	obj.myfun(10);
	obj.myfun(10,20);
	obj.myfun("hello");
	obj.myfun();
}
