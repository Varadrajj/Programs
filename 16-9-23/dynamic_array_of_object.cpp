#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public :
		void get()
		{
			cout<<"Enter Real and Imag :";
			cin >>real >> img;
		}
		void put()
		{
			cout<<"Complex no. is :\t";
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	int n, i;
	cout<<"Accept No. of objects :";
	cin>>n;
	
	complex *ptr = new complex[n];
	for(i=0;i<n;i++)
	{
		ptr[i].get();
	}
	for(i=0;i<n;i++)
	{
		ptr[i].put();
	}
}
