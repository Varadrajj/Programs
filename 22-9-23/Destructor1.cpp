#include<iostream>
using namespace std;
class A
{
	public:
		virtual~A()
		{
			cout<<"In A destructor"<<endl;
		}
};

class B: public A
{
	public:
		~B()
		{
			cout<<"In B destructor"<<endl;;
		}
};

int main()
{
	A* aptr= new B();
	delete aptr;
}
