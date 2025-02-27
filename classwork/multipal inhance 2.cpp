#include<iostream>
using namespace std;

class A{
	public:
		myfun()
		{
			cout<<"hello"<<endl;
		}
};
class B{
	public :
		myfun2()
		{
			cout<<"welcome"<<endl;
		}
};
class C :public A, public B{
	public:
		myfun3()
		{
			cout<<"wow"<<endl;
		}
};


main()
{
	C obj;
	obj.myfun();
	obj.myfun2();
	obj.myfun3();
}
