#include <iostream>
#include <stdio.h>
#include <string>
#include <unordered_map>
using namespace std;
void solve(string s)
{
    int sum = 0;
    int x, y;
    cin >> x >> y;
    string res="";
    unordered_map<char, int> mp;
    for (int i = 1; i <= 26; i++)
    {
        mp['`' + i] = i;
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (mp.find(res[i]) != mp.end())
        {
            sum += mp[res[i]];
        }
    }
    cout << sum;
}
int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin>>s;

    while (q--)
    {
        solve(s);
    }
    return 0;
}