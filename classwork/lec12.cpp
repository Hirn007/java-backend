#include<iostream>
using namespace std;

class encaps{
	public:
		int c,d;
		getter(int a,int b)
		{
			this->c=a;
			this->d=b;
		}
		setter()
		{
			cout<<"A : "<<this->c<<endl;
			cout<<"B : "<<this->d<<endl;
		}
};

main()
{
	encaps obj;
	obj.getter(10,20);
	obj.setter();
}
