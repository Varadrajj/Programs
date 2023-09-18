#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int *b = &a;
	int **c = &b;
	
	cout<<a<<" "<<b<<" "<<c<<" "<<*b<<" "<<**c<<" "<<endl;
	cout<<sizeof(a)<<" "<<sizeof(*b)<<" "<<sizeof(**c)<<" "<<sizeof(b);
	
}
