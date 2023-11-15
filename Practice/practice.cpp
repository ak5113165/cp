#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   vector<int>dp (n+1);
//   dp[0]=0;
//   dp[1]=1;
//   string s="";
//   for(int i=2;i<=n;i++)
//   {
//       dp[i]=dp[i-1]+dp[i-2];
//   }
//   vector<int>arr(n);
//   for(int i=1;i<=n;i++)
//   {
//       arr[dp[i]]=1;
//   }
//   for(int i=1;i<=arr.size();i++)
//   {
//       if(arr[i]==1)
//       {
//           s+="O";
//       }
//       else
//       {
//           s+="o";
//       }
//   }
//   for(auto x:s)
//   {
//       cout<<x;
//   }
//   return 0;
// }
int main(){
    vector<char>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s.push_back('o');
    }
    int x=1;
    int y=1;
    while(y<=n)
    {
        s[y-1]='O';
        int temp=y;
        y=x+y;
        x=temp;
    }
    for(auto x:s)
    {
        cout<<x;
    }
    return 0;

}