#include<iostream>
using namespace std;

class A{
	public:
	int ch;
	food1()
	{
		cout<<"\npress 1 for burger!!"<<endl;
		cout<<"\npress 2 for pizza!!"<<endl;
		cout<<"\npress 3 for hotdog!!"<<endl;
		cout<<"\npress 4 for sandwich"<<endl;
		
		cin>>ch;
	}
};
class B: public A{
	public:
		int number;
		food2()
		{
			cout<<"press select quality : "<<endl;
			cin>>number;
		}
};
class C: public B{
	public:
		int type;
		food3()
		{
			cout<<"please select your type : "<<endl;
			cout<<"\npress 1 for extra cheese : 400"<<endl;
			cout<<"\npress 2 for medium cheese : 300"<<endl;
			cout<<"\npress 3 for noo cheese : 200"<<endl;
			cin>>type;
		}
};
class D: public C{
	public:
		int price;
		food4()
		{
			if(type==1)
			{
				price=400;
			}
			else if(type==2)
			{
				price=300;
			}
			else
			{
				price=200;
			}
			cout<<"your total bill is : "<<number*price<<endl;
		}
};

main()
{
	D obj;
	obj.food1();
	obj.food2();
	obj.food3();
	obj.food4();
}
