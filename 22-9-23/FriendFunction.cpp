#include<iostream>
using namespace std;
class temp
{
	int x;
	public :
		void get();
		void show();
		friend void manipulate(temp &);
};
void temp :: show()
{
	cout<<"Value of x is :"<<x<<endl;
}
void manipulate(temp &t1)
{
	cout<<"In friend function \n";
	t1.x = t1.x + 5; //t1.x-> access data member using object name
}
void temp :: get()
{
	cout<<"Accept x \n";
	cin>>x;
}
int main()
{
	temp t;
	t.get();
	manipulate(t);
	t.show();
}

