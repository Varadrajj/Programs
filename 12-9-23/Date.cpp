#include<iostream>
using namespace std;
class Date1 {
	int dd,mm,yy;
	
	public:
	int	getDate()
	{
	cout<<"enter the date"<<endl;
	cin>>dd;
	return dd;
		}
	int	getMonth(){
		cout<<"enter the month"<<endl;
	cin>>mm;
		return mm;
		}
	int	getYear(){
		cout<<"enter the year"<<endl;
	cin>>yy;
			return yy;
		}
//		void accept(int p,int q,int r)
//		{
//			dd=p;
//			mm=q;
//			yy=r;
//		}

void display(int a,int b,int c)
	
{
	if((a>0 && a<=31)&&(b>0&&b<=12))
	cout<<"date is"<<a<<"/"<<b<<"/"<<c<<endl;
	else 
	cout<<"you've entered wrong date";
	
	}	
	
		

};

int main(){
	Date1 d1;
//	d1.accept(1,2,3);
int p=	d1.getDate();
int q=	d1.getMonth();
int r=	d1.getYear();
	d1.display(p,q,r);
}
