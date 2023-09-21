#include<iostream>
using namespace std;
class Shape
{
	
	public :
	virtual void area(int)
	{
		cout<<"In Area Function of Square :"<<endl;
	}
	virtual void area(int, int)
	{
		cout<<"In Area Function of Rectangle :"<<endl;
	}
	
	
};

class Rectangle: public Shape
{
	int a;
	public:
	void area(int l,int b)
	{
		
		a=l*b;
		cout<<"Area of rectangle is= "<<a<<endl;
	}
	

	
};

class Square: public Shape
{
	int s;
	public:
		void area(int d)
		{
			
			s=d*d;
			cout<<"Area of square is= "<<s<<endl;
		}
		
        
};

int main()
{
	Shape* ptr=new Shape();
	ptr->area(5);
	ptr= new Square();
	ptr->area(10);
	
	ptr->area(5,5);
	ptr= new Rectangle();
	ptr->area(10, 20);
	
}
