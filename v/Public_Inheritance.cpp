#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a;
		protected:
			int b;
			public:
				void display()
				{
					cout<<"In Display of A :\n";
				}
};
class B: public A
{
	public:
		void show()
		{
			cout<<a<<endl; //becomes public in derived class
			cout<<b<<endl; //becomes protected in derived class
		}
};
class C: public B
{
	public:
		void show()
		{
			cout<<a<<endl; //becomes public in derived class
			cout<<b<<endl; //becomes protected in derived class
		}
};
int main()
{
	B bobj;
	bobj.show();
	
	C cobj;
    cobj.show();
    bobj.display();
}
