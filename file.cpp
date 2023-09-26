#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int rollno,fees;
	char name[50];

	cout<<"Enter the Roll No:";
	cin>>rollno;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Fees:";
	cin>>fees;

	ofstream fout("d:/student.doc");

	fout<<rollno<<"\t"<<name<<"\t"<<fees; 
	fout.close();

	ifstream fin("d:/student.doc");

	fin>>rollno>>name>>fees; 

	fin.close();

	cout<<endl<<rollno<<"\t"<<name<<"\t"<<fees;

	return 0;
}
