#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cout<<"Enter the number=";
	cin>>n;
	int i=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
		
	}
	if(sum==i)
		cout<<i<<" is an armstrong number"<<endl;
	else
		cout<<i<<" is not an armstrong number"<<endl;
		
}
