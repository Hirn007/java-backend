#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"hello"<<endl;
		}
};
class B : public A{
	public:
		myfun()
		{
			A::myfun(); //scoep
				cout<<"welcom"<<endl;
		}
};
class C : public B{
	public:
		myfun()
		{
			B::myfun();
			cout<<"welcom1"<<endl;
		}
};

main()
{
	C obj;
	obj.myfun();
}
