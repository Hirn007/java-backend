#include<iostream>
using namespace std;

class vehicle{
	public:
		
		virtual type()=0;
};
class activa:public vehicle{
	public:
		type()
		{
			cout<<"activa has 2wheels"<<endl;
			cout<<"activa has dark blue colour"<<endl;
		}
}; 
class car:public vehicle{
	public:
		type()
		{
			cout<<"car has 4wheels"<<endl;
			cout<<"car has white colour"<<endl;
		}
};
class rickshaw:public vehicle{
	public:
		type()
		{
			cout<<"rickshaw has 3wheels"<<endl;
			cout<<"rickshaw has yellow colour"<<endl;
		}
};

main()
{
	activa obj;
	obj.type();
	car obj1;
	obj1.type();
	rickshaw obj2;
	obj2.type();
}
