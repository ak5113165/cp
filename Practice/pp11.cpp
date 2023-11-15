#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll n,ll i)
{
   ll temp=0;
   while(n)
   {
      temp+=n%i;
      n=n/i;
   }
   return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        ll ans=INT_MAX;
        ll base=0;
        for(int i=l;i<=r;i++)
        {
            ll val=solve(n,i);
            if(ans>=val)
            {
                ans=val;
                base=i;
            }
        }
        cout<<base<<endl;
    }
    
    return 0;
}