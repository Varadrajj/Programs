#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		int findsalary()
		{
			return 0;
		}
};
employee :: employee()
{
	cout<<"In Default of emp\n";
	id= 0;
}
employee :: employee(int i)
{
	cout<<"In Para of emp\n";
	id= i;
}
void employee :: display()
{
	cout<<"Id of an emp is :"<<id<<endl;
}

class wageemployee : public employee
{
	int hrs, rate;
	public:
		wageemployee();
		wageemployee(int, int, int);
		void display();
		int findsalary();
};
wageemployee :: wageemployee()
{
	cout<<"In default of wage\n";
	hrs = 0;
	rate = 0;
}
wageemployee :: wageemployee(int i, int h, int r) : employee(i)
{
	cout<<"In para of wage\n";
	hrs = h;
	rate = r;
}
int wageemployee :: findsalary()
{
	return hrs*rate;
}
void wageemployee :: display()
{
	employee :: display();
	cout<<"Hours :"<<hrs<<endl;
	cout<<"Rate is :"<<rate<<endl;
}

class salesmanager : public wageemployee
{
	int sales, comm;
	public :
		salesmanager();
		salesmanager(int, int, int, int, int);
		void display();
		int findsalary();
};
salesmanager :: salesmanager()
{
	cout<<"In default of sales:\n";
	sales = comm =0;
}
salesmanager :: salesmanager(int i, int h, int r, int s, int c) : wageemployee(i, h, r)
{
	cout<<"In para of sales :\n";
	sales = s;
	comm = c;
}
void salesmanager :: display()
{
	wageemployee :: display();
	cout<<"Sales of an emp is :"<<sales<<endl;
	cout<<"Comm of an emp is :"<<comm<<endl;
}
int salesmanager :: findsalary()
{
	return (wageemployee :: findsalary()) + sales*comm;	
} 
int main()
{
	salesmanager *sm= new salesmanager(101, 10, 500, 2000, 100);
	sm->display();
	cout<<"Salary is :"<<sm->findsalary();
	if(sm)
	delete sm;
}
