#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int n,k,l,c,d,p,nl,np;
    // cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // int x=min((k*l)/nl,min(c*d,p/np))/n;
    // cout<<x<<"\n";
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string res="";
        for(int i=0;i<s.size();i=i+2)
        {
            res+=s[i];
        }
        res+=s[s.size()-1];
        cout<<res<<"\n";
    }
    return 0;

}