#include<iostream>
using namespace std;
int main()
{
	char* str;
	str = new char[10];
	cin>>str;
	cout<<str;
	delete [] str;
}
