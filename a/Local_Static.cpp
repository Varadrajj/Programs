#include<iostream>
using namespace std;
int fun();
int main()
{
	cout<<"First value="<<fun()<<endl;
	cout<<"Second value="<<fun()<<endl;
	cout<<"Final value="<<fun()<<endl;
}
//local variable
//int fun()
//{
//	int x=0;
//	cout<<"Original value="<<x<<endl;
//	x++;
//	return x;
//	
//}



int fun()//Static variable
{
	static int x;
	cout<<"Original value="<<x<<endl;
	x++;
	return x;
}
