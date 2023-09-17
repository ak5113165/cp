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
        vector<int> cnt(n + 1), idx(n + 1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++cnt[x];
            idx[x] = i + 1;
        }
        int ans = -1;
        for (int i = 0; i <= n; ++i)
        {
            if (cnt[i] == 1)
            {
                ans = idx[i];
                break;
            }
        }
        cout << ans << endl;
    }
}
/// concept;
void next(char &x)
{
    if (x <= 'b')
        x++;
    else
        x = 'a';
}

void solve()
{
    int n, k;
    cin >> n >> k;
    char cur = 'a';
    for (int i = 0; i < n; ++i)
    {
        cout << cur;
        next(cur);
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
concepts for (int i = 0; i <= 4; i++)
{
    if (s.substr(0, i) + s.substr(n - 4 + i, 4 - i) == "2020")
    {
        cout << "YES" << endl;
        return;
    }
}
concepts
        no of digit end with 9 is equal to(n + 1) /
    10;
concepts
    ll n,
    h;
cin >> n >> h;
ll a[n];
for (ll i = 0; i < n; i++)
    cin >> a[i];
ll low = 1, high = h, sum = 0, ans = 1e18;
while (low <= high)
{
    ll mid = (low + high) / 2;
    sum = mid;
    for (ll i = 1; i < n; i++)
    {
        sum += min(mid, a[i] - a[i - 1]);
    }
    if (sum < h)
        low = mid + 1;
    else
    {
        ans = min(ans, mid);
        high = mid - 1;
    }
}
cout << ans << "\n";
vector<int> a(n);
vector<int> b(n);
for (int i = 0; i < n; i++)
{
    cin >> a[i] >> b[i];
}
int low = 0, high = n;
while (low < high)
{
    int mid = (low + high + 1) >> 1;
    int j = 0;
    bool ok = true;
    for (int i = 1; i <= mid; i++)
    {
        while (j < n && (a[j] < mid - i || b[j] < i - 1))
        {
            j += 1;
        }
        if (j == n)
        {
            ok = false;
            break;
        }
        j += 1;
    }
    if (ok)
    {
        low = mid;
    }
    else
    {
        high = mid - 1;
    }
}
cout << low << '\n';
int n, k;
cin >> n >> k;
int lo = 1, hi = 2e9, mid;
int ans;
while (lo <= hi)
{
    mid = lo + (hi - lo) / 2;
    if (mid - mid / n == k)
    {
        ans = mid;
        if (ans % n == 0)
            ans--;
        break;
    }
    else if (mid - mid / n > k)
    {
        hi = mid - 1;
    }
    else
    {
        lo = mid + 1;
    }
}
cout << ans << '\n';
concept for (int i = 0; i < n; ++i)
{
    int a1 = a[i];
    int a2 = need - a1;
    if (cnt.count(a2))
        ans += cnt[a2];
    if (a1 == a2)
        ans -= 1;
}
cout << ans / 2 << "\n";
binary search nice problem;
long long get(int x)
{
    return x * 1ll * (x + 1) / 2;
}
int t;
cin >> t;
while (t--)
{
    int k;
    long long x;
    cin >> k >> x;
    long long l = 1, r = 2 * k - 1;
    long long res = 2 * k - 1;
    bool over = false;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (mid >= k)
        {
            over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
        }
        else
        {
            over = (get(mid) >= x);
        }
        if (over)
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res << endl;
}
return 0;
}
int inverse(int x)
{
    int inv = 0;
    while (x > 0)
    {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return inv;
}
nth postive pallindrome for (int i = 1; i <= 1000000; i++)
{
    int a = i;
    int b = inverse(i);
    if (a == b)
    {
        p++;
        if (p == n)
        {
            cout << a;
            break;
        }
    }
}
//  long long int a;
//         string s;
//         cin >> a >> s;
//         long long int c = 0;
//         long long int i;
//         vector<long long int> r;
//         long long int found = 0;
//         for (i = s.length() - 1; i >= 0; i--)
//         {

//             long long int temp = s[i] - '0';
//             long long int temp2 = a % 10;

//             if (temp - temp2 < 0)
//             {
//                 i--;
//                 temp = temp + (s[i] - '0') * 10;
//                 temp = temp - temp2;
//                 if (temp >= 10 || temp < 0)
//                 {
//                     found = 1;
//                     break;
//                 }
//                 r.push_back(temp);
//                 a /= 10;
//             }
//             else
//             {
//                 temp = temp - temp2;
//                 r.push_back(temp);

//                 a /= 10;
//             }
//         }
//         if ((i < 0 && a != 0) || found == 1)
//         {
//             cout << "-1" << endl;
//         }
//         else
//         {
//             while (r.back() == 0)
//             {
//                 r.pop_back();
//             }
//             reverse(r.begin(),r.end());
//             for(auto x:r)
//             {
//                 cout<<x;
//             }
//             cout<<endl;
//         }
importnat qiestion bool f(ll mn, vector<vector<int>> v, int n, int m)
{
    map<int, int> freq;
    vector<int> ok(n, 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] >= mn)
            {
                freq[i]++;
                ok[j] = 1;
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        if (!ok[j])
        {
            return false;
        }
    }

    for (auto &x : freq)
    {
        if (x.second > 1)
        {
            return true;
        }
    }

    return false;
}
int m, n;
cin >> m >> n;
int r = INT_MIN;
int l = INT_MAX;
vector<vector<int>> a(m, vector<int>(n));
for (int i = 0; i < m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> a[i][j];
        l = min(l, a[i][j]);
        r = max(r, a[i][j]);
    }
}
int ans = l;
while (l <= r)
{
    int mid = l + (r - l) / 2;
    if (f(mid, a, n, m))
    {
        ans = mid;
        l = mid + 1;
    }
    else
    {
        r = mid - 1;
    }
}
cout << ans << "\n";
another binary search //
    ll k,
    n, a, b;
cin >> k >> n >> a >> b;
ll l = 0;
ll h = n;
ll ans = -1;
while (l <= h)
{
    ll m = (l + h) / 2;
    ll spend = m * a + (n - m) * b;
    if (k > spend)
    {
        ans = m;
        l = m + 1;
    }
    else
    {
        h = m - 1;
    }
}
cout << ans << "\n";
precompute no of set bits at every bit of every no;
k = 30;
int N = 1e9 + 5;
vector<vector<int>> pref(K, vector<int>(N + 1));
for (int i = 0; i < K; i++)
{
    for (int j = 0; j < N; j++)
    {
        pref[i][j + 1] = pref[i][j] + ((j & (1 << i)) ? 0 : 1);
    }
}
string to_base(long long num, int k)
{
    string res = "";
    while (num != 0)
    {
        res += (char)((num) % k + '0');
        num = num / k;
    }
    return res;
}
bool chekpall(int num)
{
    long long rev = 0;
    long long dupnum = num;
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num = num / 10;
    }
    return rev == dupnum;
}
bool ispal(string s)
{
    // s.insert(1,"");
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
no made up with 11, 111, 1111, 11111 here only 11, 111 is in becasue 1111 = 11⋅100 + 11 and similarly 11111 = 111⋅100 + 11 so we can construct 1111 and all bigger numbers using only 11 and 111. So it suffices to check whether we can construct X from 11 and 111 only.for (int i = 0; i < 20; i++)
{
    if (n % 11 == 0)
    {
        ok = 1;
        break;
    }
    n = n - 111;
    if (n < 0)
    {
        break;
    }
}
if (ok == 1)
{
    cout << "YES"
         << "\n";
}
else
{
    cout << "NO"
         << "\n";
}
int n;
cin >> n;
//  nice greedy approach
priority_queue<long long, vector<long long>, greater<long long>> pq;
long long S = 0;
for (int i = 1; i <= n; i++)
{
    long long x;
    cin >> x;
    S += x;
    pq.push(x);

    while (S < 0)
    {
        // cout<<pq.top()<<"\n";
        S -= pq.top();
        pq.pop();
    }
}

cout << (int)pq.size();
// good concept
int n, m, r, c;
cin >> n >> m >> r >> c;
r--;
c--;
char a[n + 7][m + 7];
bool hasB = false;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin >> a[i][j];
        hasB |= (a[i][j] == 'B');
    }
}
if (!hasB)
{
    cout << -1 << '\n';
    continue;
}
if (a[r][c] == 'B')
{
    cout << 0 << '\n';
    continue;
}
bool oneMove = false;
for (int i = 0; i < n; i++)
{
    oneMove |= (a[i][c] == 'B');
}
for (int j = 0; j < m; j++)
{
    oneMove |= (a[r][j] == 'B');
}
if (oneMove)
{
    cout << 1 << '\n';
}
else
{
    cout << 2 << '\n';
}
int n, m, k;
cin >> n >> m;
vector<int> v;
for (int i = 0; i < n; ++i)
{
    for (int j = 0; j < m; ++j)
    {
        v.push_back(max(i, n - i - 1) + max(j, m - j - 1));
    }
}
sort(v.begin(), v.end());
for (int i = 0; i < n * m; ++i)
    cout << v[i] << " ";
cout << "\n";
\\cocept of ineterval
    ll n;
cin >> n;
vector<ll> k(n), h(n);
for (int i = 0; i < n; ++i)
{
    cin >> k[i];
}
vector<pair<ll, ll>> a;
for (int i = 0; i < n; ++i)
{
    cin >> h[i];
    a.push_back({k[i] - h[i], k[i]});
}
sort(a.begin(), a.end());
ll l = -1, r = -1;
ll sm = 0;
for (auto x : a)
{
    if (x.first >= r)
    {
        sm += ((r - l) * (r - l + 1)) / 2;
        l = x.first;
        r = x.second;
    }
    else
    {
        r = max(r, x.second);
    }
}
sm += (r - l) * (r - l + 1) / 2;
cout << sm << "\n";
dp problem
    ll dp[100005][6];

ll func(vector<ll> &a, ll i, ll k, ll z)
{

    ll n = a.size();

    if (i < 0 || i >= n || k == 0)
    {
        return 0;
    }

    if (dp[i][z] != -1)
    {
        return dp[i][z];
    }

    ll val1 = 0, val2 = 0;

    if (i < n)
    {

        val1 = a[i] + func(a, i + 1, k - 1, z);
    }

    if (i >= 0 && z > 0)
    {

        val2 = a[i] + func(a, i - 1, k - 1, z - 1);
    }

    return dp[i][z] = max(val1, val2);
}
good concept regarding substring;
string a, b;
cin >> a >> b;
int n = a.size(), m = b.size();
int ans = 0;
for (int len = 1; len <= min(n, m); len++)
{
    for (int i = 0; i + len <= n; i++)
    {
        for (int j = 0; j + len <= m; j++)
        {
            if (a.substr(i, len) == b.substr(j, len))
            {
                ans = max(ans, len);
            }
        }
    }
}
cout << a.size() + b.size() - 2 * ans << "\n";
good concept regarding subsegment partion and mex array int n;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n; i++)
{
    cin >> v[i];
}
int c = 0, s = 0, sum = 0;
for (int i = 0; i < n; i++)
{
    for (int j = i; j < n; j++)
    {
        for (int k = i; k <= j; k++)
        {
            if (v[k] == 0)
            {
                c++;
            }
            s++;
        }
        sum += c + s;
        c = 0;
        s = 0;
    }
}
cout << sum << endl;
to find factors of a number
    vector<pair<int, int>>
        factors;
for (int i = 1; i * i <= k; ++i)
{

    if (k % i == 0)
    {
        factors.push_back({i, 0});
        if (k / i != i)
            factors.push_back({k / i, 0});
    }
}
to find the divisors;
const int sz = 5e5 + 9;
vector<vector<int>> divs(sz);
void pre()
{
    for (int i = 1; i < sz; i++)
        for (int j = i; j < sz; j += i)
            divs[j].push_back(i);
}

// #define li long long
// ll fact(ll n)
// {
// 	if (n == 1)
// 		return 1;
// 	return ((n % MOD) * (fact(n - 1) % MOD) % MOD);
// }
ll accurateFloor(ll a, ll b)
{
    ll val = a / b;
    while (val * b > a)
        val--;
    return val;
}
// ye onaother binary search good problem;
bool poss(int k, string s)
{
    ll n = s.length();
    ll one = count(s.begin(), s.end(), '1');
    bool exist = false;

    ll i = -1;
    ll cnt1 = 0;
    ll cnt0 = 0;
    for (ll j = 0; j < s.size(); ++j)
    {
        if (s[j] == '0')
        {
            ++cnt0;
        }
        else
        {
            ++cnt1;
        }
        while (cnt0 > k && i <= j)
        {
            ++i;
            if (s[i] == '0')
            {
                --cnt0;
            }
            else
            {
                --cnt1;
            }
        }
        if (cnt0 <= k && one - cnt1 <= k)
        {
            exist = true;
            break;
        }
    }
    return exist;
}
bs problem
    ll n;
cin >> n;
vector<ll> a(n);
for (int i = 0; i < n; i++)
{
    cin >> a[i];
}
sort(a.begin(), a.end());
ll sum = accumulate(a.begin(), a.end(), 0LL);
ll m;
cin >> m;
while (m--)
{
    ll x, y;
    cin >> x >> y;
    int i = lower_bound(a.begin(), a.end(), x) - a.begin();
    ll ans = 2e18;
    if (i > 0)
        ans = min(ans, (x - a[i - 1]) + max(0LL, y - sum + a[i - 1]));
    if (i < n)
        ans = min(ans, max(0LL, y - sum + a[i]));
    cout << ans << '\n';
}
bitwise opertion int ans = 0;
vector<int> nums = {16, 17, 71, 62, 12, 24, 14};
for (int i = 0; i < 32; ++i)
{
    // Count how many numbers in nums have bit 1 at ith position.
    int curr = 0;
    for (auto &num : nums)
    {
        // Push the ith bit at 0th position.
        // And if it is 1 then it's AND with 1 will result in 1.
        curr += (num >> i) & 1;
    }
    cout << curr << "\n";

    // If we AND these numbers which we counted then we will get a > 0 result.
    // So ans can be the count of these numbers, which is equal to curr variable.
    ans = max(ans, curr);
}
cout << ans;
number theory good problem int n;
cin >> n;

long long ans = 0;
for (long long a = 3; a <= n; a += 2)
{
    long long b = (a * a - 1) / 2;
    if (b > n)
        break;
    long long c = a * a - b;
    if (c <= n)
        ans++;
}
cout << ans << endl;
bitset problem
    vector<int>
        bits(31, 0);
for (int i = 0; i < n; i++)
{
    cin >> v[i];
    for (int j = 0; j < 31; j++)
    {
        if (v[i] & (1 << j))
            bits[j]++;
    }
}
good problem
        cin >>
    n >> s;
int ans = 1e9;
for (int i = 0; i < n; i++)
{
    vector<int> f(3, 0);
    f[s[i] - 'a']++;
    for (int j = i + 1; j < min(n, i + 7); j++)
    {
        f[s[j] - 'a']++;
        if (f[0] > f[1] && f[0] > f[2])
            ans = min(ans, j - i + 1);
    }
}
if (ans == 1e9)
    ans = -1;
cout << ans << endl;
prefix sum Usage
    ll n;
cin >> n;
vector<ll> v[n + 1], ans(n + 1, 0);
ll a[n], s[n];
for (ll i = 0; i < n; i++)
{
    cin >> a[i];
}
for (ll i = 0; i < n; i++)
{
    cin >> s[i], v[a[i]].push_back(s[i]);
}
for (ll i = 1; i <= n; i++)
{
    sort(v[i].rbegin(), v[i].rend());
    for (ll j = 1; j < v[i].size(); j++)
    {
        v[i][j] += v[i][j - 1];
    }
}

for (ll i = 1; i <= n; i++)
{
    for (ll k = 1; k <= v[i].size(); k++)
    {
        ll x = v[i].size() / k * k;
        ans[k - 1] += v[i][x - 1];
    }
}

for (ll i = 0; i < n; i++)
    cout << ans[i] << ' ';
cout << endl;
nice dp problem
    map<ll, ll>
        dp;
ll helper(ll n, ll x)
{
    if (dp[x] != 0)
    {
        return dp[x];
    }
    vector<bool> ans(10, false);
    ll temp = x;
    ll cnt = 0;
    while (temp)
    {
        cnt++;
        ans[temp % 10] = true;
        temp /= 10;
    }
    if (cnt == n)
    {
        return 0;
    }
    ll val = INF;
    for (ll i = 2; i <= 9; i++)
    {
        if (ans[i])
        {
            val = min(val, 1 + helper(n, x * i));
        }
    }
    return dp[x] = val;
}
factorial concept string ch[10] = {"", "", "2", "3", "223", "5", "53", "7", "7222", "7332"};
dp good concept ll a[N], b[N], dp[N][2], n;
ll rec(ll ind, ll f)
{
    if (ind > n)
        return 0;
    ll &ans = dp[ind][f];
    if (ans != -1)
        return ans;
    ans = rec(ind + 1, f);
    if (f == 0)
    {
        ans = max(ans, a[ind] + rec(ind + 1, 1));
    }
    else
    {
        ans = max(ans, b[ind] + rec(ind + 1, 0));
    }
    return dp[ind][f] = ans;
}
knapsack dp
    sum /= 2;
f[0] = 1;
for (int i = 1; i <= n; i++)
    for (int j = sum; j >= a[i]; j--)
        f[j] |= f[j - a[i]];
if (!f[sum])
{
    cout << "0" << endl;
    return 0;
}
another bs problem int n;
cin >> n;
vector<int> a(n), b(n);
for (auto &it : a)
    cin >> it;
for (auto &it : b)
    cin >> it;
vector<int> c(n);
for (int i = 0; i < n; ++i)
{
    c[i] = a[i] - b[i];
}
sort(c.begin(), c.end());
for (auto x : c)
{
    cout << x << " ";
}
cout << endl;
long long ans = 0;
for (int i = 0; i < n; ++i)
{
    if (c[i] <= 0)
        continue;
    int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
    cout << pos << " ";
    ans += i - pos;
}

cout << ans << endl;
difrrence array technique int n, q;
cin >> n >> q;

vector<int> a(n, 0), b(n + 2, 0);
for (int i = 0; i < n; i++)
    cin >> a[i];
sort(a.begin(), a.end(), greater<int>());

while (q--)
{
    int l, r;
    cin >> l >> r;
    b[l]++, b[r + 1]--;
}
for (int i = 1; i <= n; i++)
    b[i] += b[i - 1];
sort(b.begin(), b.end(), greater<int>());

ll res = 0;
for (int i = 0; i < n; i++)
    res += (ll)a[i] * b[i];
cout << res << "\n";
shortest subarray with sum at least k int f(vector<int> &v, int t)
{
    int n = v.size(), ans = INT_MIN, sum = 0;
    set<int> s;
    s.insert(0);
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        auto it = s.lower_bound(sum - t);
        if (it != s.end())
            ans = max(ans, sum - *it);
        s.insert(sum);
    }
    return ans;
}
bool isPrime(ll number)
{
    if (number < 2)
        return false;
    if (number == 2)
        return true;
    if (number % 2 == 0)
        return false;
    for (ll i = 3; (i * i) <= number; i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define ld double
#define INF 1e9
#define mod 1000000007
vector<pair<int, int>> tree;
pair<int, int> merge(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.first < p2.first)
        return p1;
    if (p1.first > p2.first)
        return p2;
    int x = p1.second + p2.second;
    return {p1.first, x};
}
pair<int, int> query(int node, int low, int high, int query_low, int query_high)
{
    if (query_low <= low && high <= query_high)
    {
        return tree[node];
    }
    if (high < query_low || query_high < low)
    {
        return {INT_MAX, 0};
    }
    int mid = (low + high) / 2;
    pair<int, int> p1 = query(2 * node, low, mid, query_low, query_high);
    pair<int, int> p2 = query(2 * node + 1, mid + 1, high, query_low, query_high);
    return merge(p1, p2);
}
void update(int i, int v, int n)
{
    tree[n + i] = {v, 1};
    for (int j = (n + i) / 2; j >= 1; j = j / 2)
    {
        tree[j] = merge(tree[2 * j], tree[2 * j + 1]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (__builtin_popcount(n) != 1)
    {
        a.push_back(0);
        n++;
    }
    tree.resize(2 * n);
    for (int i = 0; i < n; i++)
    {
        tree[n + i] = {a[i], 1};
    }
    for (int i = n - 1; i >= 1; i--)
    {
        tree[i] = merge(tree[2 * i], tree[2 * i + 1]);
    }
    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int k, u;
            cin >> k >> u;
            update(k, u, n);
        }
        else
        {
            int low, high;
            cin >> low >> high;
            high--;
            auto p = query(1, 0, n - 1, low, high);
            cout << p.first << " " << p.second;
            cout << endl;
        }
    }
    return 0;
}
vector<ll> factors(ll x)
{

    vector<ll> result;
    ll i = 1;

    while (i * i <= x)
    {

        if (x % i == 0)
        {
            result.push_back(i);

            if (x / i != i)
            {
                result.push_back(x / i);
            }
        }
        i++;
    }
    return result;
}
fun to find totoal no of shifts in a string int calc(string s)
{
    int n = s.size();
    string temp, k = s;
    for (int i = 0; i < n; i++)
        temp += " ";

    int ans = 0;
    while (temp != k)
    {

        for (int i = 0; i < n - 1; i++)
        {
            temp[i] = s[i + 1];
        }
        temp[n - 1] = s[0];

        s = temp;
        ans++;
    }
    return ans;
}
dsu implementation class DSU
{

    int *p;
    int *r;

public:
    DSU(int n)
    {
        p = new int[n];
        r = new int[n];
        for (int i = 0; i < n; i++)
        {
            p[i] = -1;
            r[i] = 1;
        }
    }
    int f(int x)
    {
        if (p[x] == -1)
            return x;
        return p[x] = f(p[x]);
    }
    void u(int x, int y)
    {
        int s1 = f(x);
        int s2 = f(y);
        if (s1 != s2)
        {
            if (r[s1] < r[s2])
            {
                p[s1] = s2;
                r[s2] += r[s1];
            }
            else
            {
                p[s2] = s1;
                r[s1] += r[s2];
            }
        }
        return;
    }
};
space optimization in denorm_present
    vector<int>
        prev(m + 1, 0);
if (a[0] == 0)
{
    fill(prev.begin(), prev.end(), 1);
}
else
{
    prev[a[0]] = 1;
}
for (int i = 1; i < n; i++)
{
    int x = a[i];
    vector<int> curr(m + 1, 0);
    if (x == 0)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k : {j - 1, j, j + 1})
            {
                if (k >= 1 && k <= m)
                {
                    (curr[j] += prev[k]) %= mod;
                }
            }
        }
    }
    else
    {
        for (int k : {x - 1, x, x + 1})
        {
            if (k >= 1 && k <= m)
            {
                (curr[a[i]] += prev[k]) %= mod;
            }
        }
    }
    prev = curr;
}
int ans = 0;
for (int j = 1; j <= m; j++)
{
    (ans += prev[j]) %= mod;
}
cout << ans << endl;
answer construction dp priyansh aggarwal
    ll n,
    m;
cin >> n >> m;
vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
for (ll i = 1; i <= n; i++)
{
    for (ll j = 1; j <= m; j++)
    {
        cin >> a[i][j];
    }
}
ll cap = 1024;
vector<vector<pair<bool, ll>>> dp(n + 1, vector<pair<bool, ll>>(cap + 1, {false, -1}));
dp[0][0].first = true;
// dp[i][j].first = is xor == j possible after taking 1 element from each first i rows
// dp[i][j].second = taken element index from i'th row to make xor = j
for (ll i = 1; i <= n; i++)
{
    for (ll j = 0; j <= cap; j++)
    {
        if (dp[i - 1][j].first)
        {
            for (ll k = 1; k <= m; k++)
            {
                dp[i][j ^ a[i][k]].first = true;
                dp[i][j ^ a[i][k]].second = k;
            }
        }
    }
}
bool possible = false;
ll altimateXor = 0;
;
for (ll j = 1; j <= cap; j++)
{
    if (dp[n][j].first)
    {
        altimateXor = j;
        possible = true;
        break;
    }
}
if (possible)
{
    cout << "TAK\n";
    vector<ll> ansIndex;
    for (ll i = n; i >= 1; i--)
    {
        ansIndex.push_back(dp[i][altimateXor].second);
        altimateXor = altimateXor ^ a[i][dp[i][altimateXor].second];
    }
    reverse(ansIndex.begin(), ansIndex.end());
    for (auto i : ansIndex)
        cout << i << " ";
    cout << "\n";
}
else
{
    cout << "NIE\n";
}

sorting techniqius and binary search problem class group
{
public:
    int id;
    int size;
    int income;
};

class table
{
public:
    int id;
    int size;
};

bool byIncomeDescending(const group &g1, const group &g2)
{
    return g1.income > g2.income;
}

bool bySize(const table &t1, const table &t2)
{
    return t1.size < t2.size;
}

bool canFit(const table &t, const group &g)
{
    return t.size < g.size;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<group> groups(n);
    for (int i = 0; i < n; i++)
    {
        groups[i].id = i + 1;
        cin >> groups[i].size >> groups[i].income;
    }

    sort(groups.begin(), groups.end(), byIncomeDescending);

    int m;
    cin >> m;
    vector<table> tables(m);
    for (int i = 0; i < m; i++)
    {
        tables[i].id = i + 1;
        cin >> tables[i].size;
    }

    sort(tables.begin(), tables.end(), bySize);

    int sum = 0;
    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        auto group = groups[i];

        auto tableToGive = lower_bound(tables.begin(), tables.end(), group, canFit);
        if (tableToGive == tables.end())
            continue;

        sum += group.income;
        ans.push_back(make_pair(group.id, tableToGive->id));
        tables.erase(tableToGive);
    }

    cout << ans.size() << ' ' << sum << endl;
    for (auto p : ans)
        cout << p.first << ' ' << p.second << endl;
    return 0;
}
difrence array techniqie int n, k, q;
cin >> n >> k >> q;
vector<int> recipe(200010, 0);
for (int i = 0; i < n; i++)
{
    int l, r;
    cin >> l >> r;
    recipe[l]++;
    recipe[r + 1]--;
}
for (int i = 1; i <= 200000; i++)
{
    recipe[i] += recipe[i - 1];
}
for (int i = 0; i <= 200000; i++)
{
    if (recipe[i] >= k)
        recipe[i] = 1;
    else
        recipe[i] = 0;
}
for (int i = 1; i <= 200000; i++)
{
    recipe[i] += recipe[i - 1];
}
for (int i = 0; i < q; i++)
{
    int a, b;
    cin >> a >> b;
    cout << recipe[b] - recipe[a - 1] << endl;
}
minimum permutation of a permutation of n number using swaping adjacent element of array

    int n;
cin >> n;
vector<int> a(n);
for (int j = 0; j < n; ++j)
{
    cin >> a[j];
    --a[j];
}
int pos = 0;
while (pos < n)
{
    int nxt = min_element(a.begin() + pos, a.end()) - a.begin();
    int el = a[nxt];
    a.erase(a.begin() + nxt);
    a.insert(a.begin() + pos, el);
    if (pos == nxt)
        pos = nxt + 1;
    else
        pos = nxt;
}
for (auto it : a)
    cout << it + 1 << " ";
cout << endl;

max subarray sub struct DynamicMaxSubarraySum
{
    struct node
    {
        ll pref, suf, val, sum;
    };
    int N;
    ll neutral;
    vector<node> t;
    DynamicMaxSubarraySum(int _N, ll assign_value)
    {
        neutral = assign_value;
        N = _N;
        t.resize(4 * N);
        for (int i = 0; i < 4 * N; i++)
            t[i] = {0, 0, 0, 0};
        build(1, 0, N - 1);
    }
    void build(int i, int l, int r)
    {
        if (l == r)
        {
            t[i].pref = t[i].suf = t[i].val = t[i].sum = neutral;
            return;
        }
        int mid = (l + r) >> 1;
        build(2 * i, l, mid);
        build(2 * i + 1, mid + 1, r);
        t[i] = merge(t[2 * i], t[2 * i + 1]);
    }
    node merge(node a, node b)
    {
        node c;
        c.pref = max(a.pref, a.sum + b.pref);
        c.suf = max(b.suf, b.sum + a.suf);
        c.val = max({a.val, b.val, a.suf + b.pref});
        c.sum = a.sum + b.sum;
        return c;
    }

    void modif(int i, int l, int r, int pos, ll val)
    {
        if (l > pos || r < pos)
            return;
        if (l == pos && r == pos)
        {
            t[i].pref = t[i].suf = t[i].val = t[i].sum = val;
            return;
        }
        int mid = (l + r) >> 1;
        modif(2 * i, l, mid, pos, val);
        modif(2 * i + 1, mid + 1, r, pos, val);
        t[i] = merge(t[2 * i], t[2 * i + 1]);
    }
    node query(int i, int l, int r, int tl, int tr)
    {
        if (l > tr || r < tl)
            return {0, 0, 0, 0};
        if (l >= tl && r <= tr)
            return t[i];
        int mid = (l + r) >> 1;
        return merge(query(2 * i, l, mid, tl, tr), query(2 * i + 1, mid + 1, r, tl, tr));
    }

    void modif(int pos, int val)
    {
        modif(1, 0, N - 1, pos, val);
    }
    node query(int l, int r)
    {
        return query(1, 0, N - 1, l, r);
    }
    node query(int pos)
    {
        return query(1, 0, N - 1, pos, pos);
    }
};
vector<ll> divisor(N, 1);
vector<ll> ans(N, -1);
void find()
{
    for (ll i = 2; i < N; ++i)
    {
        for (ll j = i; j < N; j += i)
        {
            divisor[j] += i;
        }
    }
    for (ll i = 1; i <= N; ++i)
    {
        if (divisor[i] < N)
        {
            if (ans[divisor[i]] == -1)
                ans[divisor[i]] = i;
        }
    }
}
another bitmanipulation int n;
bool check(vector<long long> &bit)
{
    // any number more than two bit are same or not pair wise
    for (int i = 0; i < 32; i++)
    {
        if (bit[i] >= 2)
        {
            return false;
        }
    }
    return true;
}
int longestNiceSubarray(vector<int> &nums)
{
    n = nums.size();
    int j = 0;
    int ans = 1;
    vector<long long> bit(32, 0);
    for (int i = 0; i < n; i++)
    {
        for (int x = 0; x < 32; x++)
        {
            if (nums[i] & (1 << x))
            {
                bit[x]++;
            }
        }
        while (j <= i && check(bit) == false)
        {
            for (int x = 0; x < 32; x++)
            {
                if (nums[j] & (1 << x))
                {
                    bit[x]--;
                }
            }
            j++;
        }
        ans = max(ans, i - j + 1);
    }
    return ans;
}
prime factorization
    vector<pair<int, ll>>
        val;
for (ll i = 2; i * i <= n; ++i)
{
    int cnt = 0;
    while (n % i == 0)
    {
        ++cnt;
        n /= i;
    }
    if (cnt > 0)
    {
        val.push_back({cnt, i});
    }
}
if (n > 1)
{
    val.push_back({1, n});
}
deleting consecutive elements technique using stl
    n = unique(a.begin(), a.end()) - a.begin();
a.resize(n);
finding a total no of divisor of a number g int ans = 0;
for (int i = 1; i * 1ll * i <= g; ++i)
{
    if (g % i == 0)
    {
        ++ans;
        if (i != g / i)
        {
            ++ans;
        }
    }
}
nicesest use of map int n;
cin >> n;
vector<int> a(2 * n);
for (int i = 0; i < 2 * n; i++)
{
    cin >> a[i];
}
int cur = 0;
map<int, int> difr;

difr[0] = 0;
cur = 0;
for (int i = n; i < 2 * n; ++i)
{
    if (a[i] == 1)
        ++cur;
    else
        --cur;
    if (!difr.count(cur))
        difr[cur] = i - (n - 1);
}

int ans = 2 * n;
int dif = count(a.begin(), a.end(), 1) - count(a.begin(), a.end(), 2);

cur = 0;
for (int i = n - 1; i >= 0; --i)
{
    if (a[i] == 1)
        ++cur;
    else
        --cur;
    if (difr.count(dif - cur))
        ans = min(ans, n - i + difr[dif - cur]);
}
if (difr.count(dif))
{
    ans = min(ans, difr[dif]);
}

cout << ans << "\n";
to find the biwise and of a particular range in an array
    ll
    rangeBitwiseAND(ll a, ll b)
{
    ll x = 0;

    while (a != b)
    {
        a = a >> 1;
        b = b >> 1;
        x++;
    }
    return a << x;
}