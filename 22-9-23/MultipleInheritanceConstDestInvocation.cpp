#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Class A Constructor is called :"<<endl;
		}
		~A()
		{
			cout<<"Class A Destructor is Called :"<<endl;
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"Class B Constructor is called :"<<endl;
		}
		~B()
		{
			cout<<"Class B Destructor is Called :"<<endl;
		}
};
class C : public A
{
	public:
		C()
		{
			cout<<"Class C Constructor is called :"<<endl;
		}
		~C()
		{
			cout<<"Class C Destructor is Called :"<<endl;
		}
};
int main()
{
	B bobj;
//	bobj.B();
//	bobj.~B();
	
	C cobj;
//	cobj.C();
//	cobj.~C();
}
