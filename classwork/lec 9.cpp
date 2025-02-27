#include<iostream>
using namespace std;

class A{
	public :
		mysun()
		{
			cout<<"i'm largest!!"<<endl;
		}
};
class B : public A{
	public :
		mysun2()
		{
			cout<<"i'm medium!!"<<endl;
		}
};
class C{
	public :
		mysun3()
		{
			cout<<"i'm small!!"<<endl;
		}
};
class D : public B,public C{
	public :
		mysun4()
		{
			cout<<"i'm extra small"<<endl;
		}
};
main()
{
	D obj;
	obj.mysun();
	obj.mysun2();
	obj.mysun3();
	obj.mysun4();
}
