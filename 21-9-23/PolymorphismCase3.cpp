#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
class employee
{
	int id;
	public:
		employee();
		employee(int);
		void display();
		virtual int findsalary()
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
	cout<<"Salary of wageemployee= "<<hrs*rate<<endl;
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
	cout<<"In default of sales\n";
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
	
	employee* ptr;
//	employee e1;
//	ptr= &e1;
//	cout<<"Employee salary :"<<ptr->findsalary()<<endl;
//	wageemployee we1;
//	ptr= &we1;
//	cout<<"Wageemployee salary :"<<ptr->findsalary()<<endl;
//	salesmanager sm1(01,10,100,1000,2);
//	ptr= &sm1;
//	cout<<"Salesmanager salary :"<<ptr->findsalary()<<endl;

	ptr = new salesmanager(01, 10, 500, 1000, 2);
	ptr->display();
	cout<<"Salary of salesmanager :"<<ptr->findsalary();
}
