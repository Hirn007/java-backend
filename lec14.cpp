#include<iostream>
using namespace std;

class employer{
	public:
		
		virtual salary()=0;//blank virtual
		//pure virtual fuction
		
};
class karan:public employer{
	public:
		salary()
		{
			cout<<"karan got 35k"<<endl;
		}
};
class bhumika:public employer{
	public:
		salary()
		{
			cout<<"bhumika got 25k"<<endl;
		}
};
class hiren:public employer{
	public:
		salary()
		{
			cout<<"hiren got 20k"<<endl;
		}
};

main()
{
	karan obj;
	obj.salary();
	bhumika obj1;
	obj1.salary();
	hiren obj2;
	obj2.salary();
}
