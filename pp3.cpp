#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    int x=max(e,f);
    int ans=0;
    if(x==e)
    {
        if(d<a)
        {
            int add=d*e;
            ans+=add;
        }
        else
        {
            d=d-a;
            int add=e*a;
            ans+=add;
            int y=min(b,c);
            if(d>=y)
            {
                int add=f*y;
                ans+=add;
            }
            else
            {
                int add=d*f;
                ans+=add;
            }
        }
    }
    else
    {
        int y=min(b,c);
        if(d<y)
        {
            int add=f*d;
            ans+=add;
        }
        else{
            d=d-y;
            int add=f*y;
            ans+=add;
            if(d>=a)
            {
                int add=a*e;
                ans+=add;
            }
            else
            {

             int add=d*e;
             ans+=add;
            }
        }
    }
    cout<<ans;
    return 0;
}