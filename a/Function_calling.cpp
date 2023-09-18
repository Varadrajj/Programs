#include<iostream>
using namespace std;

int fun();
//void call();

static int x = 0;
int main()
{
	cout<<"First value="<<fun()<<endl;
	cout<<"Second value="<<fun()<<endl;
	cout<<"Final value="<<fun()<<endl;
	cout<<"Function called for="<<x<<endl;
	
//	call();
	
}

int fun()//Static variable
{
	cout<<"Original value="<<x<<endl;
	x++;
//	void call()
//	{
//		
//	}

	
	
	return x;
	
}
