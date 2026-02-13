#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    map<int, int> mp;
    map<int, int> nums;
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= n)
            nums[v[i]]++;
    }
    for (auto [x, y] : nums)
    {
        for (int j = x; j <= n; j += x)
        {
            mp[j] += y;
        }
    }
    int mx = 0;
    for (auto [x, y] : mp)
    {
        mx = max(mx, y);
    }
    cout <<  mx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
