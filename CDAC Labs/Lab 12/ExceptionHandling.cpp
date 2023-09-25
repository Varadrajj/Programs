#include<iostream>
using namespace std;

float divison(int x, int y)
{
	if(y==0)
	{ 
		throw"Attemped to divide by zero";
	}
	//else 
	return(x/y);
	
}
int main()
{
	int i,j;
	float k;
	try
	{
		cout<<"Enter the values of i and j : ";
		cin>>i>>j;
		k= divison(i,j);
		cout<<"Answer is : "<<k<<endl;
			
	}
	catch(char* e)
	{
		cout<<e<<endl;
	}
}
