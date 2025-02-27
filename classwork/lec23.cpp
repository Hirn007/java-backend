//template.
#include<iostream>
using namespace std;

template <typename T>
T hello(T x,T y)
{
	if(x>y)
	{
		cout<<"\nvalue 1 is greatest!!"<<endl;
	}
	else
	{
		cout<<"\nvalue 2 is greatest!!"<<endl;
	}
}

main()
{
	hello<int>(5,6);
	hello<char>('e','a');
}
