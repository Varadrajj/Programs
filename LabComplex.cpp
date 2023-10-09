//Q.1 Operator Overloading

#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public:
		Complex()
		{
			real=0;
		    img=0;
		}
		
		Complex(int r, int i)
		{
			real=r;
			img=i;
		}
		
		void Display()
		{
			if(img>0)
			cout<<"Complex number is : "<<real<<"+"<<img<<"i"<<endl;
			else
			cout<<"Complex number is : "<<real<<img<<"i"<<endl;
		}
		
		Complex operator+(Complex& c)//+ Operator Overloading
		{
			Complex temp;
			temp.real=this->real+c.real;
			temp.img=this->img+c.img;
			return temp;
			
		}
		
			Complex operator-(Complex& c)//- Operator Overloading
		{
			Complex temp;
			temp.real=this->real-c.real;
			temp.img=this->img-c.img;
			return temp;
			
		}
		
			Complex operator-()//Negation Operator Overloading
		{
			Complex temp;
			temp.real=-this->real;
			temp.img=-this->img;
			return temp;
			
		}
		
		Complex operator++()//Pre Increment
		{
			this->real=this->real+1;
			++this->img;
			return(*this);
		}
		
		Complex operator++(int)//Post Increment
		{
			Complex temp=(*this);
			this->real=this->real+1;
			++this->img;
			return temp;
		}
};

int main()
{
	Complex c1(5,10),c2(2,4);
//	c1.Display();
//  c2.Display();
	Complex c3= c1+c2;// + Operator is called
	c3.Display();
	
	c3= c1-c2;// - Operator is called
	c3.Display();
	
	c2= -c1;// Negation operator is called
	c2.Display();
	
	Complex c4;
	c4=++c1;//PreIncreament operator is called
	c4.Display();
	
	c4=c1++;//PostIncrement operator is called
	c4.Display();
	
		
	return 0;
}
