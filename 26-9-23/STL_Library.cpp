#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main()
{
    int arr[10],i;
    cout<<"Enter Array Elements :"<<endl;
    for(i=0;i<10;i++)
    {
    	cin>>arr[i];
	}
   int n = sizeof(arr) / sizeof(arr[0]);	
    sort(arr, arr + n);
 
    cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    return 0;
}
