#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> brr(n - 1);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> brr[i];
        }
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        // 
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=abs(arr[i]-brr[i]);
            ans=min(ans,x);
        }
    //     int res=0;
    //    for(auto it:mp)
    //    {
    //        if(ans<it.second)
    //        {
    //            ans=it.second;
    //            res=it.first;
    //        }
    //    }
       cout<<ans<<"\n";
    }
    return 0;
}