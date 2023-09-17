#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &nums, int n, set<vector<int>> &s)
{
    int i = 0;
    vector<int> temp;
    while (n > 0)
    {
        int last = (n & 1);
        if (last)
            temp.push_back(nums[i]);
        i++;
        n = n >> 1;
    }
    sort(temp.begin(), temp.end());
    s.insert(temp);
}
int main()
{
    vector<int> nums = {1, 2, 2};
    int n = nums.size();
    vector<vector<int>> v;
    set<vector<int>> s;
    for (int i = 0; i <= (1 << n) - 1; i++)
    {
        solve(nums, i, s);
    }
    for (auto x : s)
    {
        v.push_back(x);
    }
    for(auto x:v)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}