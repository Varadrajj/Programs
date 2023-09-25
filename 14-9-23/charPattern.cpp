#include<iostream>
using namespace std;
void display(char a='*', int b =5);
int main(){
	cout<<"no argument passed"<<endl;
	display();
		cout<<"one argument passsed"<<endl;
	display('#');
		cout<<"two argument passed"<<endl;
	display('$',10);
	
}
void display(char c , int count){
	
	for(int i = 1;i<=count;++i)
	{
		cout<<c;
	}
	cout<<endl;
}
