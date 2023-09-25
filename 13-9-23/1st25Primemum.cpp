#include<iostream>

using namespace std;
int main()
{
int	count = 0;
	int num;
	cout<<"enter the num"<<endl;
	cin>>num;
	
	for(int j=0;j<=num;j++)
	{
	
	for(int i =1; i<=j;i++)
	
	{
		
		if(j%i==0)
		{
			count++;
		
		}
	
	}
		if(count>=25)
		{
			cout<<"reached 25 prime num";

			
		}
		else 
		cout<<"enter maximum num";
		break;
		
}
		
	
}
