#include <iostream>
#include <stdio.h>
#include <unordered_map>
#include <string>
#include<algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a[3], n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a + 3);
        n -= 2 * a[2] - a[1] - a[0];
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}