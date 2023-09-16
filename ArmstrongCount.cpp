#include<iostream>
using namespace std;
int main()
{
    int rem,cnt=0;
    for(int i=0;i<=999;i++)
    {
        int a=i;
        int sum=0;
        while(a!=0)
        {
        rem=a%10;
        a=a/10;
        sum=sum+rem*rem*rem;  
        } 
    
    if(sum==i)
    {
        cout<<sum<<" is a armstrong number\n";
        cnt++;

    } 
    }
    cout<<"Total number of armstrong number between o to 999 ="<<cnt<<endl; 
return 0;
}