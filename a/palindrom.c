//101
#include<iostream>
using namespace std;
int main()
{
	int p;
	int temp = p;
	cout<<"Enter the number=";
	
	cin>>p;
	cout<<"Original number="<<p<<endl;
	while(p>=0)
	{
		int result = 0;
		int num = p%10;
		 result = num*10 + result;
		 p = p/10;
	}
	cout<<p;
	cout<<temp;
}
