#include<iostream>
using namespace std;

template<class T>

void swapp(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	
}
int main()
{
	int m=10;
	int n=20;
	cout<<"Before swapping of A and B ="<<m<<" "<<n<<endl;
	
	swapp(m,n);
	cout<<"After swapping of A and B ="<<m<<" "<<n<<endl;
	return 0;
}
