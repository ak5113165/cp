#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ma = *max_element(a.begin(), a.end());
        int mi = *min_element(a.begin(), a.end());
        vector<int> ans(ma, 0);
        for (auto x : ans)
        {
            cout << x << " ";
        }
        for (int i = 1; i <= a.size(); i++)
        {
            ans[a[i]] = 1;
        }
        cout<<endl;
    }
    return 0;
}