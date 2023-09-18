#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int amount, principal=1000;
	float roi=6.5,time=4;
	amount=principal*(pow((1+roi/100),time));
	float ci=amount-principal;
	cout<<"Compound interest is="<<ci<<endl;
	return 0;
	
	
	
}
