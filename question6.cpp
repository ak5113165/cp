#include<iostream>
#include<stdio.h>
using namespace std;
int solve(int n,int p,int k)
{
    int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(j%k==0)
                {
                    count++;
                }
            }
            
        }
        return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k;
        cin>>n;
        cin>>p;
        cin>>k;
       cout<<solve(n,p,k);
    }
    return 0;
}