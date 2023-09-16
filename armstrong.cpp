#include<iostream>
using namespace std;
int main()
{
    int amst,sum=0,rem;
    cout<<"Enter the number=";
    cin>>amst;
    int i=amst;
    while(amst!=0)
    {
        rem=amst%10;
        amst=amst/10;
        sum=sum+rem*rem*rem;   
    }
    if(sum==i)
            cout<<i<<" is a armstrong number"<<endl;
        else
            cout<<i<<" is not a armstrong number"<<endl;
    return 0;
}