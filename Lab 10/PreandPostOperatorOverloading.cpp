#include<iostream>
using namespace std;
class complex
{
	int real, imag;
	public:
		complex();
		complex(int, int);
		void display();
		complex operator++();
		complex operator++(int);
	
};
complex::complex()
{
	real=imag=0;
}
complex::complex(int real,int imag)
{
	this->real=real;
	this->imag=imag;
}
void complex::display()
{
	if(imag>0)
	cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
	else
	cout<<"complex number is "<<real<<imag<<"i"<<endl;
}
complex complex :: operator++()//pre
{
	this->real = this->real +1; //++this->real;
	++this->imag;
	return (*this);
}
complex complex :: operator++(int)//post
{
	complex temp = (*this);
	++this->real;
	++this->imag;
	return temp;
}
int main()
{
	complex c1(1,2);
	c1.display();
	complex c2 = ++c1;//Pre c2=c1.operator++();
	c2.display();
	
	complex c3(3,4);
	c3.display();
	complex c4 = c3++;//Post c4=c3.operator++(0);
	c4.display();
	c3.display();
	
	
}

