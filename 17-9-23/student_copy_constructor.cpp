#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int roll_no;
	double fees;
	char a[10];
	public:
		student(int,char*,double);
		void show();
		student(student&);
};
student::student(int r,char a[], double f)
{
	roll_no = r;
	strcpy(this->a,a);
	fees = f;
}
void student::show()
{
	cout<<"Roll No: "<<roll_no<<" "<<"Name: "<<a<<" "<<"Fees: "<<fees<<endl;
}
student::student(student &s_new)
{
	this->roll_no=2;
	
	strcpy(this->a,"Varad");
	this->fees=2000;
}
int main()
{
	student s(1,"Abhi",3000);
	s.show();
	student s1(s);
	s1.show();
}

