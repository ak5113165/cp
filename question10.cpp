#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2!=0)
        {
            n=n+1;
        }
        cout<<max(n,6LL)*2.5;
    }
    return 0;
}