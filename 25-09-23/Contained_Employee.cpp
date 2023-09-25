#include<iostream>
using namespace std;
class cDate
{
	int mDay, mMonth, mYear;
	public:
		cDate()
		{
			mDay=10;
			mMonth=11;
			mYear=2000;
		}
		cDate(int d, int m, int y)
		{
			cout<<"In Date Constructor :\n";
			mDay=d;
			mMonth=m;
			mYear=y;
		}
		void display()
		{
			cout<<"Day :"<<mDay<<endl;
			cout<<"Month :"<<mMonth<<endl;
			cout<<"Year :"<<mYear<<endl;
		}
};

//Container Class
class cEmployee
{
	int mId;
	int mBasicSal;
	//Contained Object
	cDate mBdate;
	public:
		cEmployee()
		{
			mId=1;
			mBasicSal=10000;
			//mBdate = cDate();
		}
		cEmployee(int, int, int, int, int);
		void display();
};
//Member Class Initialization List:
cEmployee :: cEmployee(int i, int sal, int d, int m, int y) : mBdate(d,m,y)
{
	cout<<"In Emp Constructor :\n";
	mId=i;
	mBasicSal=sal;
}
void cEmployee :: display()
{
	cout<<"Id :"<<mId<<endl;
	cout<<"Salary :"<<mBasicSal<<endl;
	mBdate.display();
}
int main()
{
	//Parameterized Constructor Called;
	cEmployee e2(2,20000,11,11,1998);
	e2.display();
	
}
