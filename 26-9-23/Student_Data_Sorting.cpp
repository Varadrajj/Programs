#include <iostream>     
using  namespace std;  
#include<string.h>
class date
{
	int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter Date\n";
			cin>>dd>>mm>>yy;
		}
		void put()
		{
			cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
};
class student
{
	int rollno,i;
	char name[10];
	int m[5];
	date d;
	
	public:
		void get()
		{
			cout<<"Enter Roll.No\n";
			cin>>rollno;
			cout<<"Enter Student Name\n";
			cin>>name;
			cout<<"Enter Students Marks : "<<endl;
			for(i=0;i<5;i++)
			{
				cin>>m[i];
			}
			d.get();
		}
		void put()
		{
			int sum=0;
			cout<<rollno<<"**********"<<name<<"**********"<<endl;
			for(i=0;i<5;i++)
			{
				sum=sum+m[i];
			}
			float avg= sum/5;
			cout<<"Average is : "<<avg<<endl;
			d.put();
		}
		int getrollno()
		{
			return rollno;
		}
		char* getname()
		{
			return name;
		}
		void setrollno(int r)
		{
			rollno=r;
		}
		void setname(char* n)
		{
			strcpy(name,n);
		}
		
		
};
int main()
{
	student s[10],temp;
	int i,n,j;
	cout<<"Enter Value Of n :\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].get();
		
	}
	for(i=0;i<n;i++)
	{
		s[i].put();
		
	}
	cout<<"Sorted Info.\n";
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].getrollno()>s[j].getrollno())
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			
		}
	}
	for(i=0;i<n;i++)
	s[i].put();
}
