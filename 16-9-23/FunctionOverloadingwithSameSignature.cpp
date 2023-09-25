#include<iostream>
using namespace std;
class complex
{
	public:
		void show()const 
		{
			cout<<"Bye";
		}
		void show()
		{
			cout<<"Hello";
		}

};
int main()
{
//    const complex c1;
	complex c1;
	c1.show();
	return 0;
}
