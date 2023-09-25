#include<iostream>
using namespace std;
template<class T>

void swapp(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
	
}


int main()
{
	int n,i=0,j;
	cout<<"Enter the number of elements :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements :\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}
	cout<<"\nEntered elements are :";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1])
		{
			swapp(arr[j],arr[j+1]);
		}
	}
	cout<<"\nSorted array is :";
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
}
