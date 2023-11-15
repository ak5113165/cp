#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {2, 1, 5, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(n,0);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] <= arr[i])
        {
            v[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    // cout<<arr[s.top()];
    // s.pop();
    // cout<<arr[s.top()];
    // s.pop();
    // cout<<arr[s.top()];
    // s.pop();
    // cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
   
    return 0;
}