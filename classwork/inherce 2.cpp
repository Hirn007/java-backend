#include<iostream>
using namespace std;

class A{
	public :
		gun1()
		{
			cout<<"this is big function"<<endl;
		}
};
class B:public A{
	public :
		gun2()
		{
			cout<<"this is small fuction"<<endl;
		}
};
main()
{
	B obj;
	obj.gun1();
	obj.gun2();
}
