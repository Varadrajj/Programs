#include<iostream>
using namespace std;

template<class X, class Y>

void swap(X a, Y b)
{
	cout<<"Before swapping of A and B ="<<a<<" "<<b<<endl;
	float temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"After swapping of A and B ="<<a<<" "<<b<<endl;
}
int main()
{
	
	swap(10.5,20.5);
	return 0;
}
