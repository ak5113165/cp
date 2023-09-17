#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string  ch;
        cin>>ch;
        v.push_back(ch);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[i+1])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}