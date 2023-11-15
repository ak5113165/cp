#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<2*n;i++)
        {
          if(arr[i]%2!=0)
          {
              count++;
          }
        }
        if(count==n)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}