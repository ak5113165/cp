#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> brr(n);
        int sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum1+=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr.begin(), arr.end());
        sort(brr.rbegin(), brr.rend());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i<k)
            {
                ans+=max(arr[i],brr[i]);
            }
            else
            {
                ans+=arr[i];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}