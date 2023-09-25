#include<iostream>
using namespace std;

template<class T>
T add(T &a, T &b)
{
	T res;
	res = (a+b);
	return res;
}

int main()
{
	int i=2, j=5;
	float m=2.4, n=5.8;
	cout<<"Addition of i and j is : "<<add(i,j)<<endl;
	cout<<"Addition of m and n is : "<<add(m,n)<<endl;
	
}
