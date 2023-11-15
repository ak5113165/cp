#include <bits/stdc++.h>
using namespace std;
const int xn = 2e5 + 10;
int qq, n, m, a[xn], b[xn];
bool ans;
//k pallindrome;
void check(int x)
{
    m = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] != x)
            b[++m] = a[i];
    for (int i = 1; i <= m; ++i)
        if (b[i] != b[m + 1 - i])
            return;
    ans = true;
}
int main()
{
    cin >> qq;
    while (qq--)
    {
        cin >> n, ans = true;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] != a[n + 1 - i])
            {
                ans = false;
                check(a[i]);
                check(a[n + 1 - i]);
                break;
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}