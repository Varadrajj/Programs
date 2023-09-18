#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public :
		complex(int, int);
		complex(complex &);
		void show();
};
complex :: complex(int r, int i)
{
	real =r;
	img = i;
}
void complex :: show()
{
	cout<<"Comples Number is :"<<real<<"+"<<img<<"i"<<endl;
}
complex :: complex(complex &a)
{
	this->real=a.real;
	this->img=a.img;
}
int main()
{
	complex c1(10,2);
	c1.show();
	complex c2(c1);
	c2.show();
}


