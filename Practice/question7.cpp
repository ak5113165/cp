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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>ans(n,1);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]*(long long )arr[i+1]<0)
            {
                ans[i]=ans[i+1]+1;
            }
            else
            {
                ans[i]=1;
            }
        }
       for(int i=0;i<n;i++)
       {
           cout<<ans[i]<<" ";
       }
    }
    return 0;
}