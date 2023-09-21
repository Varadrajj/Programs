#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str1[10], str2[20];
	int result;
	cout<<"Enter first string=\n";
	cin>>str1;
	cout<<"ENter second string=\n";
	cin>>str2;
	result= strncmp(str1,str2,3);
	cout<<result<<endl;
	if(result==0)
		cout<<"Equal";
	else if(result==1)
		cout<<"First string is greater";
	else
		cout<<"First string is smaller";
	return 0;
	
}
