//friend class

#include<iostream>
using namespace std;

class Hello{
	private:
		int a,b;
		friend class hello1;
};
class hello1{
	public:
		hello(Hello &obj)
		{
			cout<<"enter A : ";
			cin>>obj.a;
			cout<<"enter B : ";
			cin>>obj.b;
			cout<<"addition : "<<obj.a+obj.b;
		}
};

main()
{
	Hello obj;
	hello1 obj1;
	obj1.hello(obj);
}
