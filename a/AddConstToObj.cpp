#include<iostream>
using namespace std;
class Demo
{
	int a;
	public:
		Demo()
		{
			a=10;
		}
		int add(int a)
		{
			this->a=this->a+a;
			return this->a;
		}
};
int main()
{
	Demo d;
	cout<<"result= "<<" "<<d.add(20);
	
}

