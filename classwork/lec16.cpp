//constructor : it is special method that call itself when object is creat
//3 type of constructor
//1) defoult constructor
//2) parametrised
//3) copy constructor


#include<iostream>
using namespace std;

class myclass{
	public:
		myclass()//constructor
		{
			cout<<"hello this is constructor"<<endl;
		}
		myfun1()//method
		{
			cout<<"this is myfun1"<<endl;
		}
};
main()
{
	myclass obj;  //object creation
	obj.myfun1();
}
