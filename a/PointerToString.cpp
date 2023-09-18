#include<iostream>
using namespace std;
int main()
{
	char* names[5]={"rohan","varad","pranav","nilesh","abhishek"};
	for(int i=0;i<5;i++)
	{
		cout<<*(names+i)<<endl;
		for(int j=0;j<=8;j++)
		{
//			cout<<*(*(names+i)+j);
			}	
	}
	
}
