#include<iostream>
using namespace std;

class A{
	public:
		mygun()
		{
			cout<<"heyy i'm bigger than all  of you"<<endl;
		}
};
class B:public A{
	public:
		mygun2()
		{
			cout<<"heyy i'm little bit smaller"<<endl;
		}
};
class C:public A{
	public:
		mygun3()
		{
			cout<<"heyy i'm smaller than all of you"<<endl;
		}
};
main()
{
	B obj;
	C objl;
	obj.mygun();
	obj.mygun2();
	objl.mygun3();
}
