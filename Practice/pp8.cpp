#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            a++;
        }
        else if(arr[i]==2)
        {
            b++;
        }
        else{
            c++;
        }
    }
    vector<int>x;
    vector<int>z;
    vector<int>y;
    int ans=min(a,min(b,c));
    cout<<ans<<"\n";
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            x.push_back(i+1);
        }
        else if(arr[i]==2)
        {
            y.push_back(i+1);
        }
        else
        {
            z.push_back(i+1);
        }
    }
    for(int i=0;i<ans;i++)
    {
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
    }
    return 0;
}