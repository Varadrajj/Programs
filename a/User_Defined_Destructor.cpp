#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		string1( const char*);
		void stringdisplay();
		string1(string1&);
		~string1();
		
};
string1::string1(const char* sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
void string1::stringdisplay()
{
	cout<<"Length is= "<<len<<endl;
	cout<<"String is= "<<ptr<<endl;
	
}
string1::string1(string1 &c)
{
	this->len=c.len;
	ptr=new char(this->len+1);
	strcpy(this->ptr,c.ptr);
}
string1::~string1()
{
	cout<<"Destructor is called"<<endl;
	if(ptr)
	delete[]ptr;
	ptr=NULL;
}
int main()
{
	string1 c1("Varadraj");
	c1.stringdisplay() ;
	{
		string1 c2(c1);
		c2.stringdisplay();
		c2.~string1();
	}
	c1.stringdisplay();
}

