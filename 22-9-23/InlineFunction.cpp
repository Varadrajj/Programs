#include<iostream>
using namespace std;
inline int cube(int c)
{
	return c*c*c;
}

int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	cout<<"The cube of "<<n<<" is : "<<cube(n)<<endl;
}
