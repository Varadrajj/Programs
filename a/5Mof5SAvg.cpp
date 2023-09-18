#include<iostream>
using namespace std;
int main()
{
	int student,sum,m1,m2,m3,m4,m5;
	float avg;
	
	for(student=1;student<=5;student++)
	{
		cout<<"Enter 5 marks of student="<<endl;
		cin>>m1>>m2>>m3>>m4>>m5;
		sum=m1+m2+m3+m4+m5;
		avg=sum/5;
		cout<<"Average of student is="<<avg<<endl;

	}

}
