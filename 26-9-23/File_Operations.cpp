#include<iostream>
#include<fstream>

using namespace std;
main()
{
	int id,date;
	char name[50];

	cout<<"Enter the id:";
	cin>>id;
	
	cout<<"\nEnter the Name:";
	cin>>name;
	
	cout<<"\nEnter the Admission Year:";
	cin>>date;

	ofstream fout("d:/student.doc");

	fout<<id<<"\t"<<name<<"\t"<<date; 
	fout.close();

	ifstream fin("d:/student.doc");

	fin>>id>>name>>date; 

	fin.close();

	cout<<endl<<id<<"\t"<<name<<"\t"<<date;

	return 0;
}

