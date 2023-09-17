#include <bits/stdc++.h>
using namespace std;

int solve(int x,int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return x+solve(x,n-1);
    }
}
int solve1(int a,int b)
{
    int ans=0;
    while((a+b)<(a*b))
    {
        ans+=a;
        b=b-1;
        a=a+1;
    }
    return ans;
}
int main()
{
    cout<<solve1(2,7);
    return 0;
}