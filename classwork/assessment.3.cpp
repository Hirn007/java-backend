#include<iostream>
using namespace atd;

struct giest{
	string name;
	int age;
	string mealpreference;
	void disply()
	{
		cout<<"name:"<<name<<",age:"<<age<<",meal preference:"<<mealprefernce<<endl;
	}
};
struct wedding{
	string weddingdate;
	string venue;
	double buget;
	vector<guest>guests;
	void addguest(const guest& guest)
	{
		guests.push_back(guest);
	}
	void displayweddingdetails()
	{
		cout<<"wedding date:"<<weddingdate<<endl;
		cout<<"venue:"<<venue<<endl;
		cout<<"budget: $"<<budget<<endl;
	}
};
