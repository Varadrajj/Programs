#include<iostream>
using namespace std;
class complex
{
	int real, imag;
	 public :
	 	complex(int r =0, int i=0)
	 	{
	 		real = r;
	 		imag = i;
		}
		
		complex operator + (complex const& obj)
		{
			complex res;
			res.real = real + obj.real;
			res.imag = imag + obj.imag;
			return res;
		}
		
		void print()
		{
			if(imag>0)
			cout<<real<<"+"<<imag<<"i\n";
			else
			cout<<"complex number is "<<real<<imag<<"i"<<endl;
		}
		
		complex operator - (complex &c)
		{
			complex result;
			result.real = real-c.real;
			result.imag = imag-c.imag;
			return result;
		}
		
	
		
		complex operator -()
		{
			complex result;
			result.real = -this->real;
			result.imag = -this->imag;
			return result;
		}
		
	
};

int main()
{
	complex c1(10,5), c2(5,1);
	complex c3 = c1+c2;
	c3.print();
	
	complex c4 = c1-c2;
	c4.print();
	
	complex c5(2,4);
	complex c6= -c5;
	c6.print();
}

