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
class B: protected A
{
	public:
		void show()
		{
			cout<<a<<b<<endl; //becomes protected in derived class
		}
};
class C: protected B
{
	public:
		void show()
		{
			cout<<a<<b<<endl;//becomes protected in derived class
		}
};
int main()
{
	B bobj;
	bobj.show();
	
	C cobj;
    cobj.show();
}
