#include<iostream>
using namespace std;
void add(int a =1,int b=2,int c=3,int d=4);

void add(int a, int b, int c, int d)
{
	
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
	cout<<a+b+c+d<<endl;
	
};
int main()
{

add();
add(12);
add(12,24);
add(12,24,45);
add(12,24,45,67);
return 0;
}



