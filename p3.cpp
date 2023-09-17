#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <vector>
#include <unordered_map>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        while(x>0&&n&&x/2+10<x)
        {
            n--;
            x=x/2+10;
        }
        if(x<=m*10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
