#include<iostream>
using namespace std;
 
class student
{
	int m1,m2,rollno;
	public:
		student(int n1,int n2 ,int r )
		{
			m1=n1;
			m2=n2;
			rollno=r;
				
		}
		
		int get1()
		{
			return (m1+m2);
		}
		
		void display()
		{
			cout<<"Roll number of student is = "<<rollno<<endl;
		}
};


class sport
{
	int sm;
	public:
		sport(int s)
		{
			sm=s;
		}
		
		int get2()
		{
			return sm;
		}
		
};


class result: public student, public sport
{
	float avg;
	public:
	
		result(int n1, int n2, int s, int r):student(n1,n2,r),sport(s)
	{
		avg= (float)((student::get1())+(sport::get2()))/3;
		
	}
	
	void display()
	{
		student::display();
		cout<<"Average of student is= "<<avg<<endl;
	}
	
		
		
};

int main()
{
	result r(90,95,100,01);
	r.display();
}
