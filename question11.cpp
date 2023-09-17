#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     long long  n;
    //     long long k=0,b[100000];
    //     cin>>n;
    //     for(int i=1;i<=2000;i=i+1)
    //     {
    //         if(i%3!=0&&i%10!=3)
    //         {
    //             b[k=k+1]=i;
    //         }
    //     }
    //     cout<<b[n];
    //     cout<<endl;
    // }
    // return 0;
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        for(int i=1;i<=2000;i++)
        {
            if(i%3!=0&&i%10!=3)
            {
                n--;
                if(n==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}