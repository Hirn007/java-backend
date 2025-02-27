#include<iostream>
using namespace std;

class bank{
	public:
		string name;
		int ac_no,bal=5000,de,we;
		register1()
		{
			cout<<"enter name : ";
			cin>>name;
			
			cout<<"enter A/C number : ";
			cin>>ac_no;
			
			cout<<"your intial balance deposit is : "<<bal<<endl;
			
			cout<<"bank account open succesfully!!"<<endl;
			
			this->bal=bal;
			this->name=name;
		}
		deposit()
		{
			cout<<"enter amount for depodit : ";
			cin>>de;
			
			cout<<"your deposit amount is : "<<de<<endl;
			
			this->bal=de+this->bal;
		}
		withdraw()
		{
			cout<<"enter amount for withdraw : ";
			cin>>we;
			
			cout<<"your withdraw amount is : "<<we<<endl;
			
			if(this->bal>we)
			{
				this->bal=this->bal-we;
			}
			else
			{
				cout<<"insufficient balance"<<endl;
			}
		}
		checkbal()
		{
			cout<<this->name<<"your balance is : "<<this->bal<<endl;
		}
};


main()
{
	bank obj;
	cout<<"press 1 for opening a bank account"<<endl;
	cout<<"press any key for exit"<<endl;
	
	int ch;
	cout<<"\nenter your choice : ";
	cin>>ch;
	
	if(ch==1)
	{
		obj.register1();
		
		while(true)
		{
			cout<<"\npress 1 for deposit"<<endl;
			cout<<"press 2 for withdraw"<<endl;
			cout<<"press 3 for check balance"<<endl;
			cout<<"press 4 for exit"<<endl;
			
			int ch1;
			cout<<"enter your choice : ";
			cin>>ch1;
			if(ch1==1)
			{
				obj.deposit();
			}
			else if(ch1==2)
			{
				obj.withdraw();
			}
			else if(ch1==3)
			{
				obj.checkbal();
			}
			else if(ch==4)
			{
				cout<<"thank you!!"<<endl;
			}
			else
			{
				cout<<"invalid choice!!"<<endl;
			}
		}
	}
}
