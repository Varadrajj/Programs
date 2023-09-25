#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	public:
		Complex()
		{
			real=5;
			img=5;
		}
		Complex(int r,int i)
		{
			real=r;
			img=i;
		}
		void show()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	Complex*ptr=new Complex();
	ptr->show();
	Complex*ptr1=new Complex(15,3);
	ptr1->show();
	
}
