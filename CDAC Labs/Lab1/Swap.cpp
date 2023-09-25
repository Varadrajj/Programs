#include<iostream>
using namespace std;
int main()
{
	int a=3,b=4,c;
	cout<<"Initial value of a and b="<<a<<" "<<b<<endl;
	c=a;
	a=b;
	b=c;
	cout<<"After swapping of a and b="<<a<<" "<<b<<endl;
	return 0;
}
