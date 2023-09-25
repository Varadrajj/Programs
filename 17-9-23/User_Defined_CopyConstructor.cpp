#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		date(int,int,int);
		void show();
		date(date&);
};
date::date(int d,int m, int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void date::show()
{
	cout<<"Date is= "<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
date::date(date &d_new)
{
	this->dd=d_new.dd;
	this->mm=10;
	this->yy=2024;
}
int main()
{
	date d(18,9,2023);
	d.show();
	date d1(d);
	d1.show();
}

