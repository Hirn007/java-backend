#include<iostream>
using namespace std;

class hello{
	public:
		hello(int a,int b)// prameters
		{
			cout<<a+b;
		}
};

main()
{
	hello obj(10,20); //arguments
}
