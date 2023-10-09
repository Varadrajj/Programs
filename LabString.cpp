//Q.2 Assignment operator overloading by user defined string class

#include<iostream>
using namespace std;
#include<string.h>

class String1
{
	int len;
	char* ptr;
	public:
		String1()
		{
			len=0;
			ptr="\0";
		}
		
		String1(char* sptr)
		{
			len=strlen(sptr);
			ptr=new char[len+1];
			strcpy(ptr,sptr);
		}
		
		String1(String1& c)
		{
//			cout<<"Copy constructor is called"<<endl;
			this->len=c.len;
			this->ptr=c.ptr;		
		}
		
		String1 operator=(String1& s)
		{
//			cout<<"Assignment Operator is called"<<endl;
			len=s.len;
//			delete[] ptr;
			ptr=new char[this->len+1];
//			ptr=s.ptr;
			strcpy(ptr,s.ptr);
			return(*this);
			
		}
		
		~String1()
		{
//			cout<<"Destructor is called"<<endl;
			if(ptr)
			delete[] ptr;
			ptr= NULL;
		}
		
		void Display()
		{
			cout<<"Length of string is : "<<len<<endl;
			cout<<"String is : "<<ptr<<endl;
		}
		
		
};


int main()
{
	String1 s1("Jagdale");
//	s1.Display();
	String1 s2("Varadraj");
//	s2.Display();
	
	s1=s2;
	s1.Display();
	
	return 0;
}
