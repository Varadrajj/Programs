#include<iostream>
using namespace std;

class Date1
{
	int date, month, year;
	public:
		Date1(int dd,int mm, int yy)
		{
			date=dd;
			month=mm;
			year=yy;
			
		}
		
		friend void operator-(Date1 &, int);
		friend void operator+(Date1 &,int);
		
		void display()
		{
			cout<<"Date is : "<<date<<"-"<<month<<"-"<<year<<endl;
		}
};

void operator -(Date1 &x, int y)
{
	x.date= x.date-y;
	x.month= x.month-y;
	x.year= x.year-y;
	cout<<"Date is : "<<x.date<<"-"<<x.month<<"-"<<x.year<<endl;
	
}

void operator +(Date1 &x, int y)
{
	x.date= x.date+y;
	x.month= x.month+y;
	x.year= x.year+y;
	cout<<"Date is : "<<x.date<<"-"<<x.month<<"-"<<x.year<<endl;
		
}

int main()
{
	int d,m,y;
	cout<<"Enter the date :";
	cin>>d;
	cout<<"Enter the month :";
	cin>>m;
	cout<<"Enter the year :";
	cin>>y;
	
	Date1 d1(d,m,y);
	d1.display();
	d1-1;
	d1+2;
	
	
	return 0;
	
	
}
