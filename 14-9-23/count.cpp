#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		static int cnt;
	public:
		complex()
		{
			cout<<"Default is invoked\n";
			real=5;
			img=5;
			cnt++;
			
		}
		complex(int real, int img)
		{
			cout<<"Parameterized is invoked\n";
			this->real=real;
			this->img=img;
			cnt++;
			
		}
		static int getcnt()
		{
			return cnt;
		}
};
int complex::cnt=0;


int main()
{
	complex c1;
	complex c2(2,3);
	cout<<"Number of object is created"<<"\n"<<complex::getcnt()<<endl;
	cout<<complex::cnt;
}
