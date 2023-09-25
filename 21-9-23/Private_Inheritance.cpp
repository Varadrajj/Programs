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
class B: private A
{
	public:
		void show()
		{
			cout<<a<<b; //becomes private in derived class
		}
};
class C: private B
{
	public:
	/*	void show()
		{
			cout<<a<<b;
		}*/
};
int main()
{
	B bobj;
	bobj.show();
	//bobj.display();//........Error
	C cobj;
   //cobj.show();//............Error
}
