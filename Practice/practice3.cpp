#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int no,int &ans)
{
    int i=0;
    int sum=0;
    while(no>0)
    {
        int last=(no&1);
        if(last) sum+=arr[i];
        i++;
        no=no>>1;
    }
        if(sum%2==0)ans++;
    
}
int main()
{
   int arr[]={1,2,3};
   int ans=0;
   set<vector<int>>s;
   int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<=(1<<n)-1;i++)
   {
       solve(arr,i,ans);
   }
   cout<<ans-1;

    return 0;
}
 