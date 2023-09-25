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
		A(int a)
		{
			cout<<"In para of A\n";
			this->a=a;
		}
		void display()
		{
			cout<<"In Display of A class\n";
			cout<<"Value of a ="<<a<<endl;
		}
};
class B : public A
{
	int b;
	public:
		B()
		{
			cout<<"In default of B\n";
		}
		B(int b):A(10)//Base class initialization list
		{
			cout<<"In para of B\n";
			this->b=b;
		}
		void display()
		{
			A::display();
			cout<<"In Display of B class\n";
			cout<<"Value of b ="<<b<<endl;
		}
};
int main()
{
	B bobj(20);
	bobj.display();
	cout<<"Size Of B :"<<sizeof(bobj);
}
