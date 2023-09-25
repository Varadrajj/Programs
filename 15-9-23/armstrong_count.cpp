#include<iostream>
using namespace std;
int main()
{
	int n,rem,a,cnt=0,i,b;
//	cout<<"Enter the number=";
//	cin>>n;

	for(a=0;a<=999;a++)
	{
	int i=a,sum=0;
	while(i!=0)
	{
		rem=i%10;
		sum=sum+rem*rem*rem;
		i=i/10;
		
	}
	if(sum==a)
	{
	cout<<sum<<" is a armstrong number"<<endl;
	cnt++;
}
   }
   cout<<cnt<<endl;
		
}
