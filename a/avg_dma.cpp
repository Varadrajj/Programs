#include<iostream>
using namespace std;
int main()
{
	int n,m,i,sum=0;
	float avg;
	cout<<"Enter no. of subjects=";
	cin>>n;
	cout<<"Enter No. of characters=";
	cin>>m;
	int *ptr = new int[n];
	char* name_m = new char [m+1];
	
	for(i=0; i<n; i++)
	{
		cin>> ptr[i];
		sum = sum + ptr[i];
	 } 
	 avg = (float)sum/n;
	 cout<<"Enter Name of the student\n";
	 cin>>name_m;
	 cout<<"Name is "<<name_m<<endl;
	 cout<<"Avg is "<<avg;
	 
	 delete[] ptr;
	 delete[] name_m;
}
