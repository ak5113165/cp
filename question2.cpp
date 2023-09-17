#include <iostream>
#include<algorithm>
#include <stdio.h>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long double sum1 = 0;
        long double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long double ans =-1e18;
        for (int i = 0; i < n; i++)
        {
            sum1 += arr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            sum1 -= arr[i];
            sum += arr[i];

                ans = max(ans,sum1 / (n - i - 1) + sum / (i + 1));
        }
        cout<<setprecision(12)<<ans<<endl;
    }
    return 0;
}