#include<iostream>
using namespace std;
#include<string.h>

class Account {
	char name[20];
	int accno;
	
	public:
		static const float roi=6.5;
	Account()
	{
		
	}
	Account( const char* c,int a)
	{
		strcpy(name,c);
		accno=a;		
	}
	
	void fun()
	{
		cout<<"Enter the Name=";
		cin>>name;
		cout<<"Enter the account number="<<endl;
		cin>>accno;
		
	}
	
	void display()
	{
		cout<<"Name"<<" "<<name<<" "<<"Account Number"<<" "<<accno<<" "
		<<"Rate of Interest"<<" "<<roi<<endl;
				
	}
};
int main()
{
	Account a1;
	Account a2("Pranav", 1234);
	a2.display();
	a2.fun();
	a2.display();
	
}
