#include<iostream>
using namespace std;
class operations
{
	public :
	 virtual void Add(int, int)
	 {
	 	cout<<"In Add Function :"<<endl;
	 }
	 virtual void Sub(int, int)
	 {
	 	cout<<"In Subtract Function :"<<endl;
	 }	
	 virtual void Mul(int, int)
	 {
	 	cout<<"In Multiply Function :"<<endl;
	 }	
	 virtual void Div(int, int)
	 {
	 	cout<<"In Division Function :"<<endl;
	 }
};
class add : public operations
{
	int res;
	public:
	void Add(int a, int b)
	{
		res = a+b;
		cout<<"Result is :"<<res<<endl;
	}
};
class sub : public operations
{
	int res;
	public:
	void Sub(int a, int b)
	{
		res = a-b;
		cout<<"Result is :"<<res<<endl;
	}
};
class mul : public operations
{
	int res;
	public:
	void Mul(int a, int b)
	{
		res = a*b;
		cout<<"Result is :"<<res<<endl;
	}
};
class div : public operations
{
	int res;
	public:
	void Div(int a, int b)
	{
		res = a/b;
		cout<<"Result is :"<<res;
	}
};
int main()
{
	operations* ptr =new operations();
    ptr->Add(1,1);
	ptr = new add();
	ptr->Add(10,50);
	
	ptr->Sub(10,1);
	ptr = new sub();
	ptr->Sub(100, 50);
	
	ptr->Mul(10,1);
	ptr = new mul();
	ptr->Mul(50, 50);
	
	ptr->Div(10,1);
	ptr = new div();
	ptr->Div(500, 50);
}
