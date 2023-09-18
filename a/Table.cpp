#include<iostream>
using namespace std;
int main()
{
	int t,c=1;
	int result;
	cout<<"Enter the number";
	cin>>t;
	while(c<=10)
	{
		result=t*c;
		cout<<result<<endl;
		c++;		
	}
	return 0;
}
