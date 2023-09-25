#include<iostream>
using namespace std;
int main()
{
	int base,exp,power=1;
	cout<<"Enter the base and exp=";
	cin>>base>>exp;
	while(exp>0)
	{
		power=power*base;
		exp--;
	}
	cout<<"Power is="<<power;
	return 0;
	
	
}
