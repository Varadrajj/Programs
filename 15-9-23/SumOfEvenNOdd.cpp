#include<iostream>
using namespace std;
int main()
{
	int even=0, odd=0;
	for(int i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			even=even+i;
		}
		if(i%2==1)
		{
			odd=odd+i;
		}
	}
	cout<<"Sum of even numbers="<<even<<endl;
	cout<<"Sum of odd numbers="<<odd<<endl;
	return 0;
}

