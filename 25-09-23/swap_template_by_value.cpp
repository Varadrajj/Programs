#include<iostream>
using namespace std;
template<class T>
void swapp(T a, T b)
{
	cout<<a<<" "<<b<<endl;
	T temp;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
}
int main()
{
	swapp(15.5,20.5);
}
