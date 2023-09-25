#include<iostream>

using namespace std;
#include<string.h>
class student
{
	int rno;
	char name[10];
	double fee;
	public:
//		student()  //Parameterless constructor
//		{
//			cout<<"Enter the roll number=";
//			cin>>rno;
//			cout<<"Enter the name=";
//			cin>>name;
//			cout<<"Enter the fee=";
//			cin>>fee;
//		}
		student() //Default constructor
		{
		}

    	student(int a)  //Parameterized constructor
    	{
    		rno=a;
    	   	
		}
		
		student(int a, const char* c)
		{
			rno=a;
			strcpy(name,c);
		}
		
		student(int a, const char* c,double b)
		{
			rno=a;
			strcpy(name,c);
			fee=b;
		}
		


		void display()
		{
			cout<<rno<<endl;
		}
			void display1()
		{
			cout<<rno<<"\t"<<name<<endl;
		}
			void display2()
		{
			cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
		}
};
int main()
{
	student s1;
	student s2(2);
	s2.display();
	student s3(3, "Pranav");
	s3.display1();
	student s4(4, "Varadraj", 1000);
	s4.display2();
	
}
