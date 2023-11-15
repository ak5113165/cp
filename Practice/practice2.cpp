#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,-1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum1-=arr[i];
        if(sum1==sum2)
        {
            cout<<i;
        }
        sum2+=arr[i];
    }
    return 0;
}