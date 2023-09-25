#include<iostream>
using namespace std;

class Time
{
	int hour, minute, sec;
	public:
	Time(int hh, int mm, int ss)
	{
		hour=hh;
		minute=mm;
		sec=ss;
	}
	
	friend void operator -(Time &, int y);
	friend void operator +(Time&, int y);
	
	void display()
	{
		cout<<"Time is : "<<hour<<":"<<minute<<":"<<sec<<endl;	
	} 
};

void operator -(Time &x, int y)
{
	x.hour= x.hour-y;
	x.minute= x.minute-y;
	x.sec= x.sec-y;
	cout<<"Time is : "<<x.hour<<":"<<x.minute<<":"<<x.sec<<endl;
	
}

void operator +(Time &x, int y)
{
	x.hour= x.hour+y;
	x.minute= x.minute+y;
	x.sec= x.sec+y;
	cout<<"Time is : "<<x.hour<<":"<<x.minute<<":"<<x.sec<<endl;
	
}

int main()
{
	int h,m,s;
	cout<<"Enter the hour :";
	cin>>h;
	cout<<"Enter the minute :";
	cin>>m;
	cout<<"Enter the second :";
	cin>>s;
	
	Time t1(h,m,s);
	t1.display();
	t1-1;
	t1+2;
}
