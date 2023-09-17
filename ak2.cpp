#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr.front()==arr.back())
    {
        cout<<n<<"\n";
    }
    else
    {
    cout<<"1"<<"\n";
    }

}
void solve1()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%2!=0)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<"\n";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve1();
    }
}