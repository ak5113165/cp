#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int count=0;
    int arr[]={1,2,3,4,5,6};
    for(int i=1;i<=6;i++)
    {
        for(int j=i;j<=6;j+=i)
        {
            if(j%i==0)
            {
                for(int k=i;k<=6;k+=j)
                {
                    if(k%j==i)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}