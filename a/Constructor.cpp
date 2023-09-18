#include<iostream>
#include<string.h>
using namespace std;
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

    	student(int a, char* c, double b)  
    	{
    		rno=a;
    	    strcpy(name,c);
    		fee=b;
    		
		}

		void display()
		{
			cout<<rno<<"\t"<<name<<"\t"<<fee<<endl;
		}
};
int main()
{
	student s(1,"Pranav",1000 );
   
	s.display();
	return 0;
}
