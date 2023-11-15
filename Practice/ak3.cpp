#include<iostream>
#include<stdio.h>
using namespace std;
int calc(int a, int b, int c) {
	return abs(a - b) + abs(a - c) + abs(b - c);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=calc(a,b,c);
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                for(int k=-1;k<=1;k++)
                {
                    int na=a+i;
                    int nb=b+j;
                    int nc=c+k;
                    ans=min(ans,calc(na,nb,nc));
                }
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}