#include<iostream>
using namespace std;
int main()
{
	int opt;
	cout<<"Select the option below"<<endl;
	cout<<"1]if elseif 2]for loop 3]while loop "<<endl;
	cout<<"Select An Option :"<<endl;
	cin>>opt;
	switch(opt)
	{
		case 1:
		      int i;
		      cout<<"Enter a number= ";
		      cin>>i;
		      if(i%2==0)
		    	cout<<"It is even number";
		      else if(i%2==1)
		        cout<<"It is odd number";
		        break;
		
		case 2:
			int t,n;
			cout<<"Enter the number= ";
			cin>>n;
			cout<<"Table is ="<<endl;
			for(i=1;i<=10;i++)
			{
				t=n*i;
				cout<<t<<endl;
			}
			break;
		
		case 3:
			int n1=0,n2=1,n3;
			i=2;
			cout<<"Enter how many times you want iterations =";
			cin>>n;
			cout<<n1<<" "<<n2;
			while(i<n)
			{
				n3 = n1 + n2;
				cout<<" "<<n3;
				n1=n2;
				n2=n3;
				i++;
			}
			break;
			
	
	}
}
