#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
void solve(vector<int> &arr, int x, int y)
{
    for (int i = 0; i <= arr.size(); i++)
    {
        if ((i+1) % y == 0 && arr[i] == 0)
        {
            arr[i] = x;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        int m;
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x;
            cin >> y;
            solve(arr, x, y);
            for (int i = 1; i <=arr.size(); i++)
            {
                cout << arr[i];
            }
        }
    }

    return 0;
}