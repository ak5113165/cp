#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
long long N=40004;
long long M=501;
// long long dp[M][N];
bool ispal(string s)
{
    
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{  
    vector<int>coin;
    coin.push_back(0);
    for(int i=1;i<=40004;i++)
    {
        if(ispal(to_string(i)))
        {
            coin.push_back(i);
        }
    }
    int n;
    cin>>n;
    vector<vector<int>>dp(500,vector<int>(40004,0));
    for(int i=0;i<=500;i++)
    {
        dp[i][0]=1;
    }
    for(int i=0;i<=40004;i++)
    {
        dp[0][i]=1;
    }
    for(int i=0;i<=500;i++)
    {
        for(int j=0;j<=40004;j++)
        {
            if(coin[i]<=j)
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-coin[i]];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[500][n];
}