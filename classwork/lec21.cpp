#include<iostream>
using namespace std;

class H{
	public:
		H(int a,int b)
		{
			cout<<"this is constructor"<<endl;
			cout<<a+b<<endl;
			cout<<a-b<<endl;
			cout<<a*b<<endl;
			cout<<a/b<<endl;
		}
		~H()
		{
			cout<<"this is distructor"<<endl;
		}
};

main()
{
	H obj(10,20);
}
