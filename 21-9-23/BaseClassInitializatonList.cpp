#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A()
		{
			cout<<"In default of A\n";
		}
		A(int);
		void display();
};
A::A(int p)
{
	cout<<"In para of A\n";
	a=p;
}
void A::display()
{
	cout<<"The value of a is="<<a<<endl;
}

class B: public A
{
	int b;
	public:
	B(int,int);
	void display();
	
};


B::B(int p, int q):A(p)
{
	cout<<"In para of B\n";
	//a=p;
	b=q;
}
void B::display()
{
	A::display();
	cout<<"The value of B is="<<b<<endl;
}

int main()
{
	B bobj(10,20);
	bobj.display();
}
