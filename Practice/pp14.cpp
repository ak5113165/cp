#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={0,0,0,2,0,0,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=1;
    int k=2;
    for(int i=0;i<k;i++)
    {
      while(j<=n)
      {
          if(arr[j]==0)
          {
              j++;
          }
          arr[(j-1)%n]++;
          arr[(j+1)%n]++;
          j++;
      }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}