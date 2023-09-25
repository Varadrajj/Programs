#include<iostream>
using namespace std;
class Operation
{
  public:
  class Add
  {
	   int a, b ,r;
	   public :
		  result(int c, int d)
		  {
		    	
			    this->a=c;
			    this->b=d;
			    r= a+b;
			    cout<<"Addition is = "<<r<<endl;
			    //return r;
		  }
		  
//		  void display()
//		  {
//		  	cout<<"Addition is = "<<r<<endl;
//		  }
  };

};
int main()
{
	Operation :: Add obj;
	obj.result(10,20);
	//obj.display();
}
