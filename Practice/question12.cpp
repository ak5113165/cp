#include <iostream>
#include <stdio.h>
using namespace std;
void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long num = max(a, b) - min(a, b);
    if (max(a, max(b, c)) > 2 * num)
    {
        cout << "-1\n";
        return;
    }
    if (c <= num)
    {
        cout << c + num << "\n";
    }
    else
    {
        cout << c - num << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}