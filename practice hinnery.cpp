// types of inneritance
//hybrid

#include<iostream>
using namespace std;

class A{
	public :
		mysun()
		{
			cout<<"i,m larges!!"<<endl;
		}
};
class B{
	public :
		mysun2()
		{
			cout<<"i,m medium!!"<<endl;
		}
};
class C {
	public :
		mysun3()
		{
			cout<<"i,m small!!"<<endl;
		}
};
class D : public B,publilc C{
	public :
		mysun4()
		{
			cout<<"i,m extra!!"<<endl;
		}
};
main()
{
	D obj;
	obj.sun();
	obj.sun2();
	obj.sun3();
	obj.sun4();
}
